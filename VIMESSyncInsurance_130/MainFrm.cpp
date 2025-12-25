// MainFrm.cpp : implementation of the CMainFrame class
//
#include ".\mainfrm.h"
#include "Excel.h"
#include "FromCheck/SSIFromThangQuyetToan.h"
#include "GuiUtils.h"
#include "MainFrm.h"
#include "libxml/LibXMLHelper.h"
#include "libxml/UTF8Conv.h"
#include "resource.h"
#include "stdafx.h"
#pragma comment(lib, "../lib/libxml.lib")
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
#include "utf8string.h"
///////////////////////////
// Support them function str2utf8 dung convert chuoi unicode sang chuoi utf8
// Neu dung ham nay se khong can giai phong bo nho
// Cach dung
//  std::string strUtf8 = str2utf8(L"Chuoi unicode");
//  printf("\r\nutf8=", strUtf8.c_str());
/////////////////////////////////////////
void str2utf8(LPCTSTR lpszData, std::string &strDest)
{
    int size = _tcslen(lpszData);
    if (lpszData == NULL || size == 0)
    {
        strDest = "";
        return;
    }
    int byte =
        ::WideCharToMultiByte(CP_UTF8, 0, lpszData, size, NULL, 0, NULL, NULL);
    char *utf8 = new char[byte + sizeof(char)];
    ::WideCharToMultiByte(CP_UTF8, 0, lpszData, size, utf8, byte, NULL, NULL);
    utf8[byte] = '\0';
    strDest = utf8;
    printf("\r\n%s", strDest.c_str());
}

CStringA UTF8Encode(LPCTSTR lpszData, int nLength)
{
    CStringA szString;
#ifdef UNICODE
    int nByte =
        ::WideCharToMultiByte(CP_UTF8, 0, lpszData, nLength, NULL, 0, 0, 0);
    ::WideCharToMultiByte(CP_UTF8, 0, lpszData, nLength,
                          szString.GetBufferSetLength(nByte), nByte, 0, 0);
    szString.ReleaseBuffer();
#else
    szString = lpszData;
#endif
    return szString;
}

bool AddCDataBlock(xmlDocPtr doc, xmlNodePtr node, CString szFieldName,
                   CString szData)
{
    if (doc == NULL || node == NULL)
        return false;
    std::string strData;
    xmlNodePtr cdata = NULL;
    xmlNodePtr childNode1 = NULL;
    char *strOutUTF8M = NULL;
    char field[128];
    int byte = ::WideCharToMultiByte(
        CP_UTF8, 0, szFieldName, _tcslen(szFieldName), field, 128, NULL, NULL);
    field[byte] = '\0';
    childNode1 = xmlNewChild(node, NULL, (const xmlChar *)field, NULL);
    byte = ::WideCharToMultiByte(CP_UTF8, 0, szData, _tcslen(szData), NULL, 0,
                                 NULL, NULL);
    strOutUTF8M = new char[byte + sizeof(char)];
    ::WideCharToMultiByte(CP_UTF8, 0, szData, _tcslen(szData), strOutUTF8M,
                          byte, NULL, NULL);
    strOutUTF8M[byte] = '\0';
    cdata = xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                             xmlStrlen((const xmlChar *)strOutUTF8M));
    xmlAddChild(childNode1, cdata);
    delete strOutUTF8M;
    return true;
}

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
    // SetEnableLogin(FALSE);
    SetLocalLang(1);
    m_szModuleID = _T("ISYNC");
    m_szVersion = _T("1.0");

    m_szSize = CSize(1024, 728);

    m_pSession = NULL;
    m_pFtp = NULL;
    m_szCurrentDir = _T("/");
}

CMainFrame::~CMainFrame()
{
    if (m_pFtp != NULL)
    {
        m_pFtp->Close();
        delete m_pFtp;
    }
    if (m_pSession)
    {
        m_pSession->Close();
        delete m_pSession;
    }
}

IMPLEMENT_DYNAMIC(CMainFrame, CGuiMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CGuiMainFrame)
ON_WM_CREATE()
ON_COMMAND(ID_FILE_CHECKIN, OnFileCheckin)
ON_COMMAND(ID_FILE_CHECKOUT, OnFileCheckout)
ON_WM_TIMER()
ON_COMMAND(ID_FILE_AUTOSYSXML, OnFileAutosys)
ON_COMMAND(ID_FILE_79a, OnFile79a)
ON_COMMAND(ID_FILE_80a, OnFile80a)
ON_WM_DESTROY()
END_MESSAGE_MAP()

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
    if (CGuiMainFrame::OnCreate(lpCreateStruct) == -1)
        return -1;
    // ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX|WS_MINIMIZEBOX, 0);
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
    SetIcon(m_hIcon, TRUE);  // Set big icon
    SetIcon(m_hIcon, FALSE); // Set small icon
    CGuiView *newReport = NULL;

    m_wndSysInsuranceView.Create(GetPane());
    m_wndPaperView.Create(GetPane());
    AddView(_T("Patients List"), &m_wndSysInsuranceView);
    AddView(_T("Paper Transfer"), &m_wndPaperView);
    SetActivePane(0);

    CenterWindow();
    ::GetCurrentDirectory(MAX_PATH, m_szPath.GetBufferSetLength(MAX_PATH));
    m_szPath.ReleaseBuffer();

    bIsAutoSysXML = false;
    bIsAutoCheckout = false;
    m_autoSync.Init(this);
    m_autoSync.Run();
    return 0;
}

void CMainFrame::OnInitializes()
{
    CRecord rs(&m_db);
    CString szSQL;

    szSQL.Format(
        _T("select substr(sc_id,1,2) as provid, sc_id as id,sc_name as ")
        _T("name,sc_ceo from sys_company "));
    rs.ExecSQL(szSQL);
    m_szProviID = rs.GetValue(_T("provid"));
    m_szCompany = rs.GetValue(_T("id"));
    m_szCompanyName = rs.GetValue(_T("name"));
    m_szCeoName = rs.GetValue(_T("name"));
}

void CMainFrame::OnFileCheckin()
{
    CString szSQL, tmpStr, szCardNo;
    CRecord rs(&m_db);
    long nDocumentNo = 90201698;

    CString szMaLK;

    szSQL.Format(
        _T("SELECT * FROM bh_thongtinvaovien WHERE trangthaigui='N' "));

    rs.ExecSQL(szSQL);
    //_msg(_T("%d"), rs.GetRecordCount());
    while (!rs.IsEOF())
    {
        xmlDocPtr doc = NULL;
        xmlNodePtr rootNode = NULL;
        xmlNodePtr node = NULL;
        xmlNodePtr nodeFound = NULL;
        doc = xmlNewDoc((const xmlChar *)"1.0");

        rootNode = xmlNewNode(NULL, (const xmlChar *)"CHECKIN");
        xmlDocSetRootElement(doc, rootNode);

        rs.GetValue(_T("MATHE"), szCardNo);
        rs.GetValue(_T("MA_LK"), szMaLK);

        CString szFieldName, szData;
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            node = CLibXMLHelper::CreateChildElement(
                rootNode, (LPCTSTR)szFieldName, szData);
        }

        // Save the xml file with UTF-8 encoding
        tmpStr = GetSysDateTime();
        tmpStr.Replace(_T("-"), _T(""));
        tmpStr.Replace(_T("/"), _T(""));
        tmpStr.Replace(_T(" "), _T(""));
        tmpStr.Replace(_T(":"), _T(""));
        CString szFile;
        szFile.Format(_T("checkin\\%s_%s.xml"), tmpStr, szCardNo);
        szFile.MakeUpper();
        char szPath[1024];
        memset(szPath, 0, 1024);
        //		_tprintf(_T("\n|%s|"), CString(szPath));
        int nRes = ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(),
                                         szPath, 1024, 0, 0);
        //		_tprintf(_T("\n%d-%d-|%s|"), nRes, szFile.GetLength(),
        // szFile); 		_tprintf(_T("\n||%s||"), CString(szPath));
        int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8", 1);
        if (Ret > 0)
        {
            szSQL.Format(
                _T("UPDATE bh_thongtinvaovien SET trangthaigui='Y' WHERE ")
                _T("ma_lk='%s' "),
                szMaLK);
            ExecSQL(szSQL);
        }
        xmlFreeDoc(doc);

        rs.MoveNext();
    }
}

void CMainFrame::OnFileCheckout()
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, szCardNo, tmpStr, szMaLK;
    szSQL.Format(
        _T("SELECT * FROM bh_thongtinbenhnhan WHERE trangthaigui = 'N' WHERE ")
        _T("rownum <=10"));
    rs.ExecSQL(szSQL);
    //_tprintf(_T("\n%d"), rs.GetRecordCount());
    while (!rs.IsEOF())
    {
        szMaLK = rs.GetValue(_T("ma_lk"));
        //	_tprintf(_T("\n%s"), szMaLK);
        xmlDocPtr doc = NULL;
        xmlNodePtr rootNode = NULL;
        xmlNodePtr node = NULL;
        xmlNodePtr xmlNode = NULL;
        xmlNodePtr childNode = NULL;
        doc = xmlNewDoc((const xmlChar *)"1.0");

        rootNode = xmlNewNode(NULL, (const xmlChar *)"CHECKOUT");
        xmlDocSetRootElement(doc, rootNode);

        // XUAT THONG TIN BENH NHAN
        //  xmlNode = CLibXMLHelper::CreateChildElement( rootNode ,
        //  _T("THONGTINBENHNHAN"), NULL);

        szSQL.Format(_T("SELECT * FROM bh_thongtinbenhnhan WHERE ma_lk = '%s'"),
                     szMaLK);
        crs.ExecSQL(szSQL);

        if (!crs.IsEOF())
        {
            crs.GetValue(_T("MATHE"), szCardNo);
            WriteXMLData(_T("THONGTINBENHNHAN"), &crs, rootNode);
        }

        // XUAT THONG TIN CHUYEN TUYEN
        //  xmlNode = CLibXMLHelper::CreateChildElement( rootNode ,
        //  _T("CHUYENTUYEN"), NULL);

        szSQL.Format(_T("SELECT * FROM bh_chuyentuyen WHERE ma_lk = '%s'"),
                     szMaLK);
        crs.ExecSQL(szSQL);

        if (!crs.IsEOF())
        {
            xmlNode =
                (xmlNodePtr)WriteXMLData(_T("CHUYENTUYEN"), &crs, rootNode);
        }
        // DANH SACH CHUYEN VIEN
        szSQL.Format(_T("SELECT * FROM bh_dschuyenvien WHERE ma_lk = '%s'"),
                     szMaLK);
        crs.ExecSQL(szSQL);
        // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("DSCHUYENVIEN"),
        // _T(""));
        while (!crs.IsEOF())
        {
            CString szFieldName, szData;
            WriteXMLData(_T("DSCHUYENVIEN"), &crs, xmlNode);
            rs.MoveNext();
        }

        // THONG TIN CHI TIET
        xmlNode = CLibXMLHelper::CreateChildElement(
            rootNode, _T("THONGTINCHITIET"), _T(""));
        // tong hop
        //  node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"),
        //  _T(""));
        szSQL.Format(
            _T("SELECT * FROM bh_thongtinchitiet_tonghop WHERE ma_lk = '%s'"),
            szMaLK);
        crs.ExecSQL(szSQL);
        if (!crs.IsEOF())
        {
            crs.GetValue(_T("MA_THE"), szCardNo);
            WriteXMLData(_T("tonghop"), &crs, xmlNode);
        }
        // BANG_CTTHUOC
        childNode = CLibXMLHelper::CreateChildElement(
            xmlNode, _T("Bang_CTTHUOC"), _T(""));
        szSQL.Format(_T("SELECT * FROM bh_bang_ctthuoc WHERE ma_lk = '%s'"),
                     szMaLK);
        crs.ExecSQL(szSQL);
        while (!crs.IsEOF())
        {
            WriteXMLData(_T("CTTHUOC"), &crs, childNode);
            crs.MoveNext();
        }
        // BANG_CTDV
        childNode =
            CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_CTDV"), _T(""));
        szSQL.Format(_T("SELECT * FROM bh_bang_ctdv WHERE ma_lk = '%s'"),
                     szMaLK);
        crs.ExecSQL(szSQL);
        while (!crs.IsEOF())
        {
            WriteXMLData(_T("CTDV"), &crs, childNode);
            crs.MoveNext();
        }
        // BANG_CTCLS
        childNode = CLibXMLHelper::CreateChildElement(
            xmlNode, _T("Bang_CT_CLS"), _T(""));
        szSQL.Format(_T("SELECT * FROM bh_bang_ct_cls WHERE ma_lk = '%s'"),
                     szMaLK);
        crs.ExecSQL(szSQL);
        while (!crs.IsEOF())
        {
            WriteXMLData(_T("CLS"), &crs, childNode);
            crs.MoveNext();
        }
        // BANG_DBBENH
        childNode = CLibXMLHelper::CreateChildElement(
            xmlNode, _T("Bang_DienBienBenh"), _T(""));
        // node = CLibXMLHelper::CreateChildElement(node, _T("DienBienBenh"),
        // _T(""));
        szSQL.Format(
            _T("SELECT * FROM bh_bang_dienbienbenh WHERE ma_lk = '%s'"),
            szMaLK);
        crs.ExecSQL(szSQL);
        if (!crs.IsEOF())
        {
            WriteXMLData(_T("DienBienBenh"), &crs, childNode);
        }

        // Save the xml file with UTF-8 encoding
        tmpStr = GetSysDateTime();
        tmpStr.Replace(_T("-"), _T(""));
        tmpStr.Replace(_T("/"), _T(""));
        tmpStr.Replace(_T(" "), _T(""));
        tmpStr.Replace(_T(":"), _T(""));
        CString szFile;
        szFile.Format(_T("%s\\checkout\\%s_%s_CheckOut.xml"), m_szPath, tmpStr,
                      szCardNo);
        szFile.MakeUpper();
        char szPath[MAX_PATH];
        memset(szPath, 0, MAX_PATH);
        ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath,
                              MAX_PATH, 0, 0);
        int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8", 1);
        //_tprintf(_T("\r\n%d"), Ret);
        if (Ret > 0)
        {
            szSQL.Format(
                _T("UPDATE bh_thongtinbenhnhan SET trangthaigui='Y' WHERE ")
                _T("ma_lk='%s' "),
                szMaLK);
            ExecSQL(szSQL);
        }

        xmlFreeDoc(doc);
        rs.MoveNext();
    }
}

bool CMainFrame::WriteCheckIn()
{
    CRecord rs(&m_db);
    CString szSQL;
    CString szMaLK;
    CString szCardNo;
    CString tmpStr;

    szSQL.Format(
        _T("select * from bh_thongtinvaovien where trangthaigui='N' "));
    rs.ExecSQL(szSQL);
    if (rs.GetRecordCount() <= 0)
        return false;

    while (!rs.IsEOF())
    {
        xmlDocPtr doc = NULL;
        xmlNodePtr rootNode = NULL;
        xmlNodePtr node = NULL;
        xmlNodePtr nodeFound = NULL;
        xmlNodePtr curNode = NULL;

        doc = xmlNewDoc((const xmlChar *)"1.0");

        rootNode = xmlNewNode(NULL, (const xmlChar *)"CHECKIN");
        xmlDocSetRootElement(doc, rootNode);

        rs.GetValue(_T("MATHE"), szCardNo);
        rs.GetValue(_T("MA_LK"), szMaLK);

        CString szFieldName, szData;
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            node = CLibXMLHelper::CreateChildElement(
                rootNode, (LPCTSTR)szFieldName, szData);
        }

        // Save the xml file with UTF-8 encoding
        tmpStr = GetSysDateTime();
        tmpStr.Replace(_T("-"), _T(""));
        tmpStr.Replace(_T("/"), _T(""));
        tmpStr.Replace(_T(" "), _T(""));
        tmpStr.Replace(_T(":"), _T(""));
        CString szFile;
        szFile.Format(_T("%s\\checkin\\%s_%s_CheckIn.xml"), m_szPath, tmpStr,
                      szCardNo);
        szFile.MakeUpper();
        char szPath[1024];
        memset(szPath, 0, 1024);
        ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath,
                              1024, 0, 0);
        int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8", 1);
        if (Ret > 0)
        {
            szSQL.Format(
                _T("UPDATE bh_thongtinvaovien SET trangthaigui='Y' WHERE ")
                _T("ma_lk='%s' "),
                szMaLK);
            ExecSQL(szSQL);
        }

        rs.MoveNext();

        xmlFreeDoc(doc);
    }

    return true;
}

bool CMainFrame::OnDeleteCheckOut(CString szMaLK)
{
    CRecord rs(&m_db);
    CString szSQL, tmpStr;
    int nCount = 0;
    // szMaLK=Lay_MaLK(nDocumentNo);

    szSQL.Format(_T("UPDATE bh_xml_1 set trangthai='D' where ma_lk='%s'"),
                 szMaLK);
    _fmsg(_T("%s"), szSQL);
    nCount = ExecSQL(szSQL);
    //_tprintf (_T("%d"),nCount);
    // szSQL.Format(_T("('%s') "),szMaLK);
    //_tprintf(_T("%s"),szSQL);
    // tmpStr=ExecDML(szSQL);
    // nCount=ToInt(tmpStr);
    if (nCount <= 0)

        return false;
    else
        return true;
}
bool CMainFrame::WriteCheckOutOne(CString szMaLK)
{
    _tprintf(_T("Vao day"));
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, szCardNo, tmpStr;
    // szMaLK=Lay_MaLK(nDocumentNo);
    szSQL.Format(_T("SELECT * FROM bh_thongtinbenhnhan WHERE ma_lk='%s'"),
                 szMaLK);
    rs.ExecSQL(szSQL);
    _tprintf(_T("\n%d"), rs.GetRecordCount());
    if (rs.GetRecordCount() <= 0)
        return false;
    while (!rs.IsEOF())
    {
        szMaLK = rs.GetValue(_T("ma_lk"));

        xmlDocPtr doc = NULL;
        xmlNodePtr rootNode = NULL;
        xmlNodePtr node = NULL;
        xmlNodePtr xmlNode = NULL;
        xmlNodePtr childNode = NULL;
        doc = xmlNewDoc((const xmlChar *)"1.0");

        rootNode = xmlNewNode(NULL, (const xmlChar *)"CHECKOUT");
        xmlDocSetRootElement(doc, rootNode);

        // XUAT THONG TIN BENH NHAN
        //  xmlNode = CLibXMLHelper::CreateChildElement( rootNode ,
        //  _T("THONGTINBENHNHAN"), NULL);

        //	szSQL.Format(_T("SELECT * FROM bh_thongtinbenhnhan WHERE ma_lk =
        //'%s'"), szMaLK); 	crs.ExecSQL(szSQL);

        //	if (!crs.IsEOF())
        //	{

        //		crs.GetValue(_T("MATHE"), szCardNo);
        //		WriteXMLData(_T("THONGTINBENHNHAN"), &crs, rootNode);

        //	}

        ////XUAT THONG TIN CHUYEN TUYEN
        //	//xmlNode = CLibXMLHelper::CreateChildElement( rootNode ,
        //_T("CHUYENTUYEN"), NULL);

        //	szSQL.Format(_T("SELECT * FROM bh_chuyentuyen WHERE ma_lk =
        //'%s'"), szMaLK); 	crs.ExecSQL(szSQL);

        //	if(!crs.IsEOF())
        //	{
        //		xmlNode = (xmlNodePtr) WriteXMLData(_T("CHUYENTUYEN"),
        //&crs, rootNode);
        //	}
        //	//DANH SACH CHUYEN VIEN
        //	szSQL.Format(_T("SELECT * FROM bh_dschuyenvien WHERE ma_lk =
        //'%s'"), szMaLK); 	crs.ExecSQL(szSQL);
        //	//node = CLibXMLHelper::CreateChildElement(xmlNode,
        //_T("DSCHUYENVIEN"), _T("")); 	while (!crs.IsEOF())
        //	{
        //		CString szFieldName, szData;
        //		WriteXMLData(_T("DSCHUYENVIEN"), &crs, xmlNode);
        //		crs.MoveNext();
        //	}

        // THONG TIN CHI TIET
        xmlNode = CLibXMLHelper::CreateChildElement(
            rootNode, _T("THONGTINCHITIET"), _T(""));
        // tong hop
        //  node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"),
        //  _T(""));
        szSQL.Format(_T("SELECT MA_LK,STT,MA_BN,HO_TEN, ")
                     _T("NGAY_SINH,GIOI_TINH,DIA_CHI,MA_THE, ")
                     _T("MA_DKBD,GT_THE_TU,GT_THE_DEN,TEN_BENH, ")
                     _T("MA_BENH,MA_BENHKHAC,MA_LYDO_VVIEN, ")
                     _T("MA_NOI_CHUYEN,MA_TAI_NAN,NGAY_VAO, ")
                     _T("NGAY_RA,SO_NGAY_DTRI,KET_QUA_DTRI,TINH_TRANG_RV, ")
                     _T("NGAY_TTOAN,MUC_HUONG,T_THUOC,T_VTYT,T_TONGCHI, ")
                     _T("T_BNTT,T_BHTT,T_NGUONKHAC,T_NGOAIDS,NAM_QT, ")
                     _T("THANG_QT,MA_LOAI_KCB,MA_KHOA,MA_CSKCB,MA_KHUVUC, ")
                     _T("MA_PTTT_QT,CAN_NANG,NGAY_VAO_NOI_TRU FROM ")
                     _T("bh_thongtinchitiet_tonghop WHERE ma_lk = '%s'"),
                     szMaLK);
        crs.ExecSQL(szSQL);
        if (!crs.IsEOF())
        {
            crs.GetValue(_T("MA_THE"), szCardNo);
            WriteXMLData(_T("TONGHOP"), &crs, xmlNode);
        }
        // BANG_CTTHUOC
        int nCount = 0;

        szSQL.Format(_T("SELECT MA_LK,STT,MA_THUOC,MA_NHOM,TEN_THUOC, ")
                     _T("		DON_VI_TINH,HAM_LUONG,DUONG_DUNG,LIEU_DUNG,")
                     _T("		SO_DANG_KY,SO_LUONG,DON_GIA,TYLE_TT,")
                     _T("		")
                     _T("THANH_TIEN,MA_KHOA,MA_BAC_SI,MA_BENH,NGAY_YL,MA_PTTT")
                     _T("	FROM bh_bang_ctthuoc WHERE ma_lk = '%s'"),
                     szMaLK);
        nCount = crs.ExecSQL(szSQL);
        if (nCount > 0)
        {
            childNode = CLibXMLHelper::CreateChildElement(
                xmlNode, _T("Bang_CTTHUOC"), _T(""));
            while (!crs.IsEOF())
            {
                WriteXMLData(_T("CTTHUOC"), &crs, childNode);
                crs.MoveNext();
            }
        }
        // BANG_CTDV

        szSQL.Format(_T("SELECT MA_LK, STT,MA_DICH_VU,MA_VAT_TU,MA_NHOM, ")
                     _T("	TEN_DICH_VU,DON_VI_TINH,SO_LUONG,DON_GIA, ")
                     _T("	TYLE_TT,THANH_TIEN,MA_KHOA,MA_BAC_SI,MA_BENH, ")
                     _T("	NGAY_YL,NGAY_KQ,MA_PTTT ")
                     _T(" FROM bh_bang_ctdv WHERE ma_lk = '%s'"),
                     szMaLK);
        nCount = crs.ExecSQL(szSQL);
        if (nCount > 0)
        {
            childNode = CLibXMLHelper::CreateChildElement(
                xmlNode, _T("Bang_CTDV"), _T(""));
            while (!crs.IsEOF())
            {
                WriteXMLData(_T("CTDV"), &crs, childNode);
                crs.MoveNext();
            }
        }
        // BANG_CTCLS
        //  childNode = CLibXMLHelper::CreateChildElement(xmlNode,
        //  _T("Bang_CT_CLS"), _T("")); szSQL.Format(_T("SELECT * FROM
        //  bh_bang_ct_cls WHERE ma_lk = '%s'"), szMaLK); crs.ExecSQL(szSQL);
        // while (!crs.IsEOF())
        //{
        //	WriteXMLData(_T("CLS"), &crs, childNode);
        //	crs.MoveNext();
        // }
        ////BANG_DBBENH
        // childNode = CLibXMLHelper::CreateChildElement(xmlNode,
        // _T("Bang_DienBienBenh"), _T(""));
        ////node = CLibXMLHelper::CreateChildElement(node, _T("DienBienBenh"),
        ///_T(""));
        // szSQL.Format(_T("SELECT * FROM bh_bang_dienbienbenh WHERE ma_lk =
        // '%s'"), szMaLK); crs.ExecSQL(szSQL); if(!crs.IsEOF())
        //{
        //	WriteXMLData(_T("DienBienBenh"), &crs, childNode);
        //}

        // Save the xml file with UTF-8 encoding
        tmpStr = GetSysDateTime();
        tmpStr.Replace(_T("-"), _T(""));
        tmpStr.Replace(_T("/"), _T(""));
        tmpStr.Replace(_T(" "), _T(""));
        tmpStr.Replace(_T(":"), _T(""));
        CString szFile;
        szFile.Format(_T("%s\\checkout\\%s_%s_CheckOut.xml"), m_szPath, tmpStr,
                      szCardNo);
        szFile.MakeUpper();
        char szPath[MAX_PATH];
        memset(szPath, 0, MAX_PATH);
        ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath,
                              MAX_PATH, 0, 0);

        int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8", 1);

        //_tprintf(_T("\r\n%d"), Ret);
        if (Ret > 0)
        {
            szSQL.Format(
                _T("UPDATE bh_thongtinbenhnhan SET trangthaigui='Y' WHERE ")
                _T("ma_lk='%s' "),
                szMaLK);
            ExecSQL(szSQL);
        }

        if (doc)
            xmlFreeDoc(doc);
        rs.MoveNext();
    }
    return true;
}

CString CMainFrame::Lay_MaLK(long nDocumentNo, long nInvoiceNo)
{
    CString szSQL, szMaLK;
    CRecord rs(&m_db);
    szSQL.Format(_T(" SELECT  ")
                 _T("			CAST (hfe_docno AS NVARCHAR2(8)) ")
                 _T("			||'-'   ")
                 _T("			||CAST(hfe_treattime AS NVARCHAR2(2)) AS malk ")
                 _T(" ")
                 _T("			FROM HMS_FEE_INVOICE   ")
                 _T("			LEFT JOIN hms_doc   ")
                 _T("			ON (hd_docno=hfe_docno)   ")
                 _T("			LEFT JOIN hms_object   ")
                 _T("			ON (ho_id         =hd_object)   ")
                 _T("			WHERE hfe_docno   =%ld   ")
                 _T("			AND hfe_inspaid   >0  ")
                 _T("			AND hfe_invoiceno = %ld  "),
                 nDocumentNo, nInvoiceNo);
    rs.ExecSQL(szSQL);
    szMaLK = rs.GetStringValue();
    //_msg(_T("%s"),szSQL);
    //_tprintf(_T("\n%s"), szMaLK);
    return szMaLK;
}
void *CMainFrame::WriteXMLData(LPCTSTR lpszNodeName, CRecord *rs, void *xmlRoot,
                               bool bUpper)
{
    xmlNodePtr rootNode = (xmlNodePtr)xmlRoot;
    xmlNodePtr node = NULL;
    xmlNodePtr childNode = NULL;
    CString szFieldName, szData;

    if (rootNode == NULL || rs == NULL)
        return node;

    node = CLibXMLHelper::CreateChildElement(rootNode, lpszNodeName, NULL);
    CString szName;
    for (int i = 0; i < rs->GetFieldCount(); i++)
    {
        szFieldName = rs->GetFieldName(i);
        rs->GetValue(szFieldName, szData);

        if (bUpper)
            szFieldName.MakeUpper();
        else
            szFieldName.MakeLower();
        szName = szFieldName;
        szName.MakeUpper();

        if (szName == _T("TRANGTHAIGUI"))
            continue;
        /*
                if(m_szColumnOption==_T("Y") &&
                    ( szName==_T("TIME_PROCESS")
                            ||szName==_T("SO_PHIEU")
                            ||szName==_T("NGAY_QUYETTOAN")
                            ||szName==_T("MA_KHOABV")
                            ||szName==_T("TEN_KHOABV")
                            ||szName==_T("NGUOI_LIEN_HE")
                            ||szName==_T("LOAI_GIAYTO_DIKEM")
                            ||szName==_T("TEN_LOAI_GIAYTO")
                    ))
                {
                    continue;
                }
        */

        childNode = CLibXMLHelper::CreateChildElement(
            node, (LPCTSTR)szFieldName, szData);
    }
    return node;
}
void CMainFrame::OnTimer(UINT nIDEvent)
{
    // TODO: Add your message handler code here and/or call default
    if (nIDEvent == 1)
    {
        // WriteCheckIn();
    }

    if (nIDEvent == 2)
    {
        // WriteCheckOut();
    }

    if (nIDEvent == 3)
    {
        // SendFiles();
    }

    CFrameWnd::OnTimer(nIDEvent);
}

void CMainFrame::SendFiles()
{
    CString szFile;

    //	if(m_pFtp == NULL)
    //		return;
    // start looping
    szFile.Format(_T("%s\\CHECKIN\\*.xml"), m_szPath);
    szFile.MakeUpper();
    //_tprintf(_T("\r\n%s"), szFile);
    CFileFind finder;

    // start working for files
    BOOL bWorking = finder.FindFile(szFile);

    CString szDestFile;
    CString szFtpWriteDir;
    CString tmpStr;

    _tprintf(_T("\r\n%s"), m_szCurrentDir);
    m_pFtp->SetCurrentDirectory(m_szCurrentDir);

    while (bWorking)
    {
        bWorking = finder.FindNextFile();

        // skip . and .. files; otherwise, we'd
        // recur infinitely!

        if (finder.IsDots())
            continue;

        // if it's a directory, recursively search it

        if (m_pFtp)
        {
            szFtpWriteDir.Format(_T("%sCheckIn/%s"), m_szCurrentDir,
                                 finder.GetFileName());
            //_tprintf(_T("\r\n%s"), szFtpWriteDir);
            //		  m_pFtp->SetCurrentDirectory(szFtpWriteDir);
            bool res = m_pFtp->PutFile(finder.GetFilePath(), szFtpWriteDir,
                                       FTP_TRANSFER_TYPE_ASCII);
            //	  _tprintf(_T("\r\n%s: %s: %d"), finder.GetFilePath(),
            // finder.GetFileName(), res);
            if (res)
            {
                CString szDestFile = finder.GetFilePath();
                szDestFile.Replace(_T("\\CHECKIN\\"), _T("\\CHECKIN_SENT\\"));
                ::MoveFile(finder.GetFilePath(), szDestFile);
            }
            else
            {
                _tprintf(_T("\r\nCannot put file"));
            }
        }
        else
        {
            _tprintf(_T("\r\nFTP NOT CONNECTED"));
        }
    }

    m_pFtp->SetCurrentDirectory(m_szCurrentDir);

    szFile.Format(_T("%s\\CHECKOUT\\*.xml"), m_szPath);
    szFile.MakeUpper();
    //_tprintf(_T("\r\n%s"), szFile);

    // start working for files
    bWorking = finder.FindFile(szFile);

    while (bWorking)
    {
        bWorking = finder.FindNextFile();

        // skip . and .. files; otherwise, we'd
        // recur infinitely!

        if (finder.IsDots())
            continue;

        // if it's a directory, recursively search it

        if (m_pFtp)
        {
            szFtpWriteDir.Format(_T("%sCheckOut/%s"), m_szCurrentDir,
                                 finder.GetFileName());
            _tprintf(_T("\r\n%s"), szFtpWriteDir);
            bool res = m_pFtp->PutFile(finder.GetFilePath(), szFtpWriteDir,
                                       FTP_TRANSFER_TYPE_ASCII);

            //		  _tprintf(_T("\r\n%s: %s: %d"), finder.GetFilePath(),
            // finder.GetFileName(), res);
            if (res)
            {
                CString szDestFile = finder.GetFilePath();
                szDestFile.Replace(_T("\\CHECKOUT\\"), _T("\\CHECKOUT_SENT\\"));
                ::MoveFile(finder.GetFilePath(), szDestFile);
            }
        }
    }

    m_pFtp->SetCurrentDirectory(m_szCurrentDir);

    finder.Close();
}

void CMainFrame::ConnectFtp()
{
    if (m_pSession == NULL)
        return;
    if (m_pFtp)
        return;

    try
    {
        // Here usr is the username, pwd is the password
        // and ftpsite.com is the name of the ftp site which
        // you want to connect to.
        _tprintf(_T("\r\n%s"), m_szFtpHost);
        m_pFtp =
            m_pSession->GetFtpConnection(m_szFtpHost, m_szUser, m_szPassword,
                                         INTERNET_INVALID_PORT_NUMBER, TRUE);
        if (m_pFtp)
        {
            m_pFtp->GetCurrentDirectory(m_szCurrentDir);

            _tprintf(_T("\r\nFTP Connected"));
        }
    }
    catch (CInternetException *pEx)
    {
        // pEx->ReportError(MB_ICONEXCLAMATION);
        _tprintf(_T("FTP not connected"));
        m_pFtp = NULL;
        pEx->Delete();
    }
}

void CMainFrame::OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData)
{
    CString szName = lpszName;
    szName.Trim();
    szName.MakeLower();
    if (szName == _T("ftpserver"))
    {
        m_szFtpHost = lpszData;
    }
}
STLString CMainFrame::GetXML1(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr cdata = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;

    doc = xmlNewDoc(NULL);

    rootNode = xmlNewNode(NULL, (const xmlChar *)"TONG_HOP");
    xmlDocSetRootElement(doc, rootNode);
    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
    szSQL.Format(
        _T("SELECT MA_LK, STT,MA_BN,HO_TEN,NGAY_SINH,GIOI_TINH, ")
        _T("	DIA_CHI,MA_THE,MA_DKBD,GT_THE_TU,GT_THE_DEN,MIEN_CUNG_CT, ")
        _T("	TEN_BENH,MA_BENH,MA_BENHKHAC,MA_LYDO_VVIEN,MA_NOI_CHUYEN, ")
        _T("	MA_TAI_NAN,NGAY_VAO,NGAY_RA,SO_NGAY_DTRI,KET_QUA_DTRI, ")
        _T("	TINH_TRANG_RV,NGAY_TTOAN,T_THUOC,T_VTYT,T_TONGCHI,T_BNTT, ")
        _T("	T_BNCCT,T_BHTT,T_NGUONKHAC,T_NGOAIDS,NAM_QT,THANG_QT,MA_LOAI_")
        _T("KCB, ")
        _T("	MA_KHOA,MA_CSKCB,MA_KHUVUC,MA_PTTT_QT,CAN_NANG ")
        _T(" FROM bh_thongtinchitiet_tonghop  ")
        _T("		WHERE ma_lk = '%s'"),
        szMa_lk);
    rs.ExecSQL(szSQL);
    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    //	_tprintf(_T("tong so ban ghi: %d"), rs.GetFieldCount());
    for (int i = 0; i < rs.GetFieldCount(); i++)
    {
        szFieldName = rs.GetFieldName(i);
        rs.GetValue(szFieldName, szData);
        szFieldName.MakeUpper();
        if (szFieldName == _T("HO_TEN") || szFieldName == _T("DIA_CHI") ||
            szFieldName == _T("TEN_BENH"))
        {
            AddCDataBlock(doc, rootNode, szFieldName, szData);
        }
        //	_tprintf(_T("\r\n:%d: %s"),i,szData);

        if (szFieldName == _T("TRANGTHAIGUI") ||
            szFieldName == _T("TIME_PROCESS") ||
            szFieldName == _T("SO_PHIEU") ||
            szFieldName == _T("NGAY_QUYETTOAN") ||
            szFieldName == _T("MA_KHOABV") || szFieldName == _T("TEN_KHOABV") ||
            szFieldName == _T("NGUOI_LIEN_HE") ||
            szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
            szFieldName == _T("TEN_LOAI_GIAYTO") ||
            szFieldName == _T("HO_TEN") || szFieldName == _T("DIA_CHI") ||
            szFieldName == _T("TEN_BENH"))
            continue;

        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, (LPCTSTR)szFieldName, szData);
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);
    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML2(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;

    STLString outString;
    outString.clear();

    doc = xmlNewDoc(NULL);
    szSQL.Format(
        _T("SELECT ")
        _T("MA_LK,STT,MA_THUOC,MA_NHOM,TEN_THUOC,DON_VI_TINH,HAM_LUONG,DUONG_")
        _T("DUNG,LIEU_DUNG,SO_DANG_KY, ")
        _T("	TT_THAU,PHAM_VI, ")
        _T(" SO_LUONG,DON_GIA,TYLE_TT,THANH_TIEN,MUC_HUONG,T_NGUONKHAC,T_BNTT,")
        _T("T_BHTT, ")
        _T("	T_BNCCT,T_NGOAIDS,MA_KHOA,MA_BAC_SI,MA_BENH,NGAY_YL,MA_PTTT  ")
        _T("	FROM bh_bang_ctthuoc WHERE ma_lk = '%s'"),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    _tprintf(_T("\r\n: %s"), szSQL);
    if (nCount <= 0)
    {
        xmlFreeDoc(doc);
        xmlCleanupParser();
        return outString;
    }

    rootNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_THUOC");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    // SetFracDigits(3);
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, _T("CHI_TIET_THUOC"), NULL);

        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            /*szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);*/
            szFieldName = rs.GetFieldName(i);
            szFieldName.MakeUpper();
            if (szFieldName == _T("SO_LUONG"))
            {
                int nOld = SetFracDigits(3);
                rs.GetValue(szFieldName, szData);
                SetFracDigits(nOld);
            }
            else
            {
                rs.GetValue(szFieldName, szData);
            }

            if (szFieldName == _T("TEN_THUOC") ||
                szFieldName == _T("HAM_LUONG"))
            {
                AddCDataBlock(doc, childNode, szFieldName, szData);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("DON_GIA_BV") ||
                szFieldName == _T("T_NGUON_KHAC") ||
                szFieldName == _T("MA_THUOC_CS") ||
                szFieldName == _T("TEN_THUOC") ||
                szFieldName == _T("HAM_LUONG"))
                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);

    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();
    return outString;
}

STLString CMainFrame::GetXML3(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;

    STLString outString;
    outString.clear();

    doc = xmlNewDoc(NULL);
    szSQL.Format(
        _T("SELECT ")
        _T("MA_LK,STT,MA_DICH_VU,MA_VAT_TU,MA_NHOM,GOI_VTYT,TEN_VAT_TU,TEN_")
        _T("DICH_VU,DON_VI_TINH, ")
        _T("	PHAM_VI,SO_LUONG,DON_GIA,TT_THAU,  ")
        _T(" TYLE_TT,THANH_TIEN,T_TRANTT,MUC_HUONG,T_NGUONKHAC,T_BNTT,T_BHTT,")
        _T("T_BNCCT,T_NGOAIDS,MA_KHOA,MA_GIUONG, ")
        _T("	MA_BAC_SI,MA_BENH,NGAY_YL,NGAY_KQ,MA_PTTT ")
        _T("			FROM bh_bang_ctdv WHERE ma_lk = '%s'"),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        xmlFreeDoc(doc);
        xmlCleanupParser();
        return outString;
    }
    rootNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_DVKT");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, _T("CHI_TIET_DVKT"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();

            if ((szFieldName == _T("TEN_DICH_VU") ||
                 szFieldName == _T("TEN_VAT_TU")) &&
                !szData.IsEmpty())
            {
                if (szData.GetLength() > 0)
                {
                    AddCDataBlock(doc, childNode, szFieldName, szData);
                    continue;
                }
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("DON_GIA_BV") ||
                szFieldName == _T("T_NGUON_KHAC") ||
                szFieldName == _T("MA_DICH_VU_CS") ||
                szFieldName == _T("MA_VAT_TU_CS") ||
                szFieldName == _T("TEN_KHOABV"))

                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }
    CLibXMLHelper::xmlEnableWriteHeaderContent(0);

    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();
    return outString;
}

STLString CMainFrame::GetXML4(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;

    STLString outString;
    outString.clear();

    doc = xmlNewDoc(NULL);
    szSQL.Format(_T("SELECT * FROM bh_bang_ct_cls WHERE ma_lk = '%s'"),
                 szMa_lk);
    int nCount = rs.ExecSQL(szSQL);

    if (nCount <= 0)
    {
        xmlFreeDoc(doc);
        xmlCleanupParser();
        return outString;
    }

    rootNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_CLS");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(rootNode,
                                                      _T("CHI_TIET_CLS"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();

            if (szFieldName == _T("TEN_CHI_SO") ||
                szFieldName == _T("GIA_TRI") || szFieldName == _T("MO_TA") ||
                szFieldName == _T("KET_LUAN"))
            {
                AddCDataBlock(doc, childNode, szFieldName, szData);
            }
            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("TEN_LOAI_GIAYTO") ||
                szFieldName == _T("TEN_CHI_SO") ||
                szFieldName == _T("GIA_TRI") || szFieldName == _T("MO_TA") ||
                szFieldName == _T("KET_LUAN"))
                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);

    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();
    return outString;
}

STLString CMainFrame::GetXML5(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;

    STLString outString;
    outString.clear();

    doc = xmlNewDoc(NULL);

    szSQL.Format(_T("SELECT * FROM bh_bang_dienbienbenh WHERE ma_lk = '%s'"),
                 szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        xmlFreeDoc(doc);
        xmlCleanupParser();
        return outString;
    }

    rootNode =
        xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_DIEN_BIEN_BENH");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, _T("CHI_TIET_DIEN_BIEN_BENH"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                AddCDataBlock(doc, childNode, szFieldName, szData);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);

    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

#include "fml.h"

// Hàm di chuyển tệp tin gốc vào thư mục File_Goc
bool MoveFileToFileGoc(const CString &szExportPath, const CString &szFileName)
{
    // Đường dẫn thư mục File_Goc
    CString szFileGocDir;
    szFileGocDir.Format(_T("%s\\FILE_GOC"), szExportPath);

    // Kiểm tra xem thư mục File_Goc có tồn tại không
    if (!PathFileExists(szFileGocDir))
    {
        // Tạo thư mục nếu chưa tồn tại
        if (!CreateDirectory(szFileGocDir, NULL))
        {
            CString szError;
            szError.Format(_T("Không thể tạo thư mục: %s"), szFileGocDir);
            AfxMessageBox(szError);
            return false;
        }
    }

    // Đường dẫn tệp tin gốc
    CString szOriginalFilePath;
    szOriginalFilePath.Format(_T("%s\\%s"), szExportPath, szFileName);

    // Đường dẫn mới sau khi di chuyển
    CString szNewFilePath;
    szNewFilePath.Format(_T("%s\\%s"), szFileGocDir, szFileName);

    // Di chuyển tệp tin sử dụng MoveFileEx với cờ MOVEFILE_REPLACE_EXISTING
    BOOL moveRes = MoveFileEx(szOriginalFilePath, szNewFilePath,
                              MOVEFILE_REPLACE_EXISTING);
    if (!moveRes)
    {
        DWORD dwError = GetLastError();
        CString szError;
        szError.Format(_T("Không thể di chuyển tệp tin đến: %s. Mã lỗi: %d"),
                       szNewFilePath, dwError);
        AfxMessageBox(szError);
        return false;
    }

    return true;
}

int CMainFrame::OnWriteCheckOut130(CString szMaLK, bool bSign)
{
    BeginWaitCursor();
    UpdateData(true);
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, szCardNo, tmpStr, szWhere, szBase64;
    CString szFieldName, szData;
    SetStatusText(_T("Đang tạo file tổng hợp"), 0);
    CString szExportPath, szFile, szOutputFile;
    int nCount = 0;
    szExportPath = AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE130"),                                                 L"Drirectory");
    CString szFileName;

    tmpStr = GetSysDateTime().Left(11);
    tmpStr.Replace(_T("-"), _T(""));
    tmpStr.Replace(_T("/"), _T(""));
    tmpStr.Replace(_T(" "), _T(""));
    tmpStr.Replace(_T(":"), _T(""));

    szFileName.Format(_T("%s-%s"), szMaLK, tmpStr);

    szFile.Format(_T("%s\\HS_XML130-%s.xml"), szExportPath, szFileName);

    szOutputFile.Format(_T("%s\\HS_XML130-%s_Signed.xml"), szExportPath,
                        szFileName);

    szFile.MakeUpper();
    char szPath[MAX_PATH];
    memset(szPath, 0, MAX_PATH);
    ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath,
                          MAX_PATH, 0, 0);
    std::wfstream fs;
    fs.open(szPath, std::fstream::out | std::fstream::trunc);

    CString szMaBV;
    std::wstring macskcb, ngaylap, soluong;

    szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("MACSKCB"), szMaBV);
    macskcb = (LPCTSTR)szMaBV;

    szSQL.Format(
        _T("SELECT count(*) as SoLuongHoSo, to_char( current_date,'YYYYMMDD') ")
        _T("as NgayLap from bh_xml_1  ")
        _T(" where ma_lk='%s'	"),
        szMaLK);
    rs.ExecSQL(szSQL);

    if (!rs.IsEOF())
    {
        rs.GetValue(_T("SoLuongHoSo"), tmpStr);
        nCount = ToInt(tmpStr);
        soluong = (LPCTSTR)tmpStr;
        rs.GetValue(_T("NgayLap"), tmpStr);
        ngaylap = (LPCTSTR)tmpStr;
    }

    fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
    fs << "<GIAMDINHHS xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" "
          "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
       << endl;
    fs << "<THONGTINDONVI>" << endl;
    fs << "<MACSKCB>" << macskcb << "</MACSKCB>" << endl;
    fs << "</THONGTINDONVI>" << endl;
    fs << "<THONGTINHOSO>" << endl;
    fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
    fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
    fs << "<DANHSACHHOSO>" << endl;

    szSQL.Format(_T("SELECT ma_lk,ma_lk  as docno from bh_xml_1 ")
                 _T(" where ma_lk='%s'	"),
                 szMaLK);
    rs.ExecSQL(szSQL);

    STLString strData;

    while (!rs.IsEOF())
    {
        rs.GetValue(_T("ma_lk"), szMaLK);

        fs << "<HOSO>" << endl;
        strData.clear();
        strData = GetXML1_Base64(szMaLK);

        fs << "<FILEHOSO>" << endl;
        fs << "<LOAIHOSO>XML1</LOAIHOSO>" << endl;
        fs << "<NOIDUNGFILE>";
        fs << strData.c_str();
        fs << "</NOIDUNGFILE>" << endl;
        fs << "</FILEHOSO>" << endl;

        strData.clear();
        int nOld = GetFracDigits();

        strData = GetXML2_Base64(szMaLK);
        SetFracDigits(nOld);
        _tprintf(_T("\r\n %s"), strData.c_str());
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML2</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";

            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML3_Base64(szMaLK);
        //	_tprintf(_T("\r\n %s"),strData.c_str());
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML3</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";

            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML4_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML4</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";

            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML5_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML5</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML6_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML6</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML7_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML7</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML8_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML8</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML9_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML9</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        // strData.clear();
        // strData=GetXML10_Base64(szMaLK);
        // if(strData.length() > 0)
        //{
        //	fs << "<FILEHOSO>" << endl;
        //	fs << "<LOAIHOSO>XML10</LOAIHOSO>" << endl;
        //	fs << "<NOIDUNGFILE>";
        //	fs << strData.c_str();
        //	fs <<"</NOIDUNGFILE>" << endl;
        //	fs << "</FILEHOSO>" << endl;
        // }

        strData.clear();
        strData = GetXML11_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML11</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }
        strData.clear();
        strData = GetXML13_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML13</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        strData = GetXML14_Base64(szMaLK);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>XML14</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        fs << "</HOSO>" << endl;
        CString szSQLItem;
        szSQLItem.Format(
            _T("Update bh_xml_1 set trangthai='S' where ma_lk='%s' "), szMaLK);
        ExecSQL(szSQLItem);

        rs.MoveNext();
    }

    fs << "</DANHSACHHOSO>" << endl;
    fs << "</THONGTINHOSO>" << endl;
    fs << "<CHUKYDONVI/>" << endl;
    fs << "</GIAMDINHHS>" << endl;
    fs.close();

    if (bSign)
    {
        // move file dat
        CString szNewFileName;
        szFileName.Format(_T("HS_XML130-%s-%s.XML"), szMaLK, tmpStr);

        szNewFileName.Format(_T("DATA\\%s"), szFileName);

        szNewFileName.MakeUpper();

        // 5. Kết hợp đường dẫn thư mục Data với tên file mới
        TCHAR szCurrentDir[MAX_PATH];
        if (!::GetCurrentDirectory(MAX_PATH, szCurrentDir))
        {
            ShowMessageBox(
                _T("Không thể lấy được đường dẫn thư mục hiện tại."));
            EndWaitCursor();
            return -1;
        }

        CString szNewFilePath;
        PathCombine(szNewFilePath.GetBuffer(MAX_PATH), szCurrentDir,
                    szNewFileName);
        szNewFilePath.ReleaseBuffer();

        BOOL bCopy = ::CopyFile(szFile, szNewFilePath, FALSE);
        if (!bCopy)
        {
            DWORD dwError = GetLastError();
            CString szErrorMsg;
            szErrorMsg.Format(_T("Sao chép file thất bại. Mã lỗi: %ld"),
                              dwError);
            ShowMessageBox(szErrorMsg);
            // Không return ở đây để tiếp tục quá trình ký số, nhưng bạn có thể
            // tùy chỉnh theo nhu cầu
        }

        //	bool res = true;
        bool res = m_wndSign.SignatureXMLFile(
            _T("http://localhost:8181/sign/xml/4750"), szFileName, szOutputFile,
            szBase64);
        if (!res)
        {
            ShowMessageBox(_T("Ký số thất bại"));
        }
        else
        {
            // Neu Ky thanh cong thi luu cai file da ky vao 1 file va move cai
            // bản gốc vào 1 thư mục bên trong

            if (!szBase64.IsEmpty())
            {
                std::string pdfData =
                    fml::WideStringToUtf8(std::wstring(szBase64));
                std::string strDecoded = DecodeBase64(pdfData);
                ::SetCurrentDirectory(GetCurrentDirectory());
                ::DeleteFile(szOutputFile);

                CFile file(szOutputFile, CFile::modeCreate | CFile::modeWrite);
                file.Write((void *)strDecoded.c_str(), strDecoded.length());
                file.Close();

                // move file goc vao thu muc FILE_GOC
                bool moveRes = MoveFileToFileGoc(szExportPath, szFileName);
                if (!moveRes)
                {
                    _tprintf(_T("Di chuyển tệp tin gốc thất bại"));
                }
                else
                {
                    _tprintf(_T("Di chuyển tệp tin gốc thành công"));
                }
            }
        }
    }

    tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"), nCount);
    SetStatusText(tmpStr, 0);
    EndWaitCursor();
    return 0;
}
int CMainFrame::OnWriteHoSoGiayTo(long nDocumentNo, int nTreattime)
{
    BeginWaitCursor();
    UpdateData(true);
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, szCardNo, tmpStr, szWhere;
    CString szFieldName, szData;
    SetStatusText(_T("Đang tạo file"), 0);
    CString szExportPath, szFile;
    CString szMaLK;
    int nCount = 0;
    szExportPath = AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE_HSCT"),
                                                 _T("Drirectory"));
    CString szFileName;

    tmpStr = GetSysDateTime().Left(11);
    tmpStr.Replace(_T("-"), _T(""));
    tmpStr.Replace(_T("/"), _T(""));
    tmpStr.Replace(_T(" "), _T(""));
    tmpStr.Replace(_T(":"), _T(""));

    szFileName.Format(_T("%ld-%s"), nDocumentNo, tmpStr);

    szFile.Format(_T("%s\\HSCT-%s.xml"), szExportPath, szFileName);
    szFile.MakeUpper();
    char szPath[MAX_PATH];
    memset(szPath, 0, MAX_PATH);
    ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath,
                          MAX_PATH, 0, 0);
    std::wfstream fs;
    fs.open(szPath, std::fstream::out | std::fstream::trunc);

    CString szMaBV;
    std::wstring macskcb, ngaylap, soluong;

    szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("MACSKCB"), szMaBV);
    macskcb = (LPCTSTR)szMaBV;

    szSQL.Format(
        _T("select 1 as SoLuongHoSo, to_char( current_date,'YYYYMMDD') as ")
        _T("NgayLap from dual  "));
    rs.ExecSQL(szSQL);

    if (!rs.IsEOF())
    {
        rs.GetValue(_T("SoLuongHoSo"), tmpStr);
        nCount = 1;
        soluong = (LPCTSTR)tmpStr;
        rs.GetValue(_T("NgayLap"), tmpStr);
        ngaylap = (LPCTSTR)tmpStr;
    }

    fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
    fs << "<HSCHUNGTU xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" "
          "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
       << endl;
    fs << "<THONGTINDONVI>" << endl;
    fs << "<CHUKYDONVI/>" << endl;
    fs << "<MACSKCB>" << macskcb << "</MACSKCB>" << endl;
    fs << "</THONGTINDONVI>" << endl;
    fs << "<THONGTINHOSO>" << endl;
    fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
    fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
    fs << "<DANHSACHHOSO>" << endl;
    CString szFromDate, szToDate;
    szFromDate = m_wndPaperView.m_szFromDate.Left(16);
    szToDate = m_wndPaperView.m_szToDate.Left(16);

    STLString strData;

    while (!rs.IsEOF())
    {
        fs << "<HOSO>" << endl;
        strData.clear();
        CString szType;

        szSQL.Format(
            _T(" select hc_serial as MA_CT, ")
            _T("   hc_serial as SO_SERI, ")
            _T("   hd_docno as SO_KCB, ")
            _T("   substr(a.hc_cardno,6,10) as MA_BHXH, ")
            _T("   substr(a.hc_cardno,1,15) as MA_THE, ")
            _T("   get_patientname(hd_docno) as HO_TEN, ")
            _T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ")
            _T("   case when hp_sex ='M' then 1 else 2 end as gioi_tinh, ")
            _T("   hp_workplace as DON_VI, ")
            _T("   hc_diagnostic as CHANDOAN_DIEUTRI, ")
            _T("   to_char(hc_fromdate, 'YYYYMMDD') as TU_NGAY, ")
            _T("   to_char(hc_todate, 'YYYYMMDD') as DEN_NGAY, ")
            _T("   hc_fathername as HO_TEN_CHA, ")
            _T("   hc_mothername as HO_TEN_ME, ")
            _T("   '%s' as THU_TRUONG_DV, ")
            _T("   hc_cchn as MA_CCHN, ")
            _T("   hc_doctor as TEN_NGUOI_HANH_NGHE, ")
            _T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ")
            _T(" 			case when substr(a.hc_cardno, 6,2) ")
            _T("='KT'  then '1' else null end as TEKT,")
            _T("   'CT07' as MAU_SO  ")
            _T("   from HMS_CHUNGNHANNGHIVIEC  as   a")
            _T("   left join hms_doc on (a.hc_docno = hd_docno) ")
            _T("   left join hms_card  b on (b.hc_idx = hd_cardidx and ")
            _T("b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)")
            _T("   left join hms_clinical_record on (hcr_docno = hd_docno) ")
            _T("   left join hms_patient on (hp_patientno = hd_patientno) ")
            _T("   where hc_isthaisan='N' and ( (hd_status='T' and hd_enddate ")
            _T("between to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') ")
            _T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') ")
            _T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ) ")
            _T("   or ( hcr_status='T' and hcr_dischargedate between ")
            _T("to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') and ")
            _T("to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') and hd_docno = ")
            _T("%ld )  ) ")
            _T("   order by hc_bookno, hc_index"),
            m_szCeoName, szFromDate, szToDate, nDocumentNo, szFromDate,
            szToDate, nDocumentNo);
        szType = _T("CT07");
        _tprintf(_T("\r\n CT07: %s"), szSQL);
        strData = GetXMLCT(szSQL, szType);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>CT07</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";
            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        szSQL.Format(
            _T(" select '' as ma_ct,")
            _T(" 	hbc_number||'/'||hbc_bookno||'/'||hbc_year as so_seri,")
            _T("	hbc_bookno as QUYEN_SO, ")
            _T("	hbc_number as SO, ")
            _T(" 	substr(hbc_bhyt,6,10) as MA_BHXH_NND,")
            _T(" 	substr(hbc_bhyt,1,15) as MA_THE_NND,")
            _T(" 	hbc_patientname as HOTEN_NND,")
            _T(" 	to_char(hp_birthdate, 'YYYYMMDD') as NGAYSINH_NND,")
            _T(" 	case when length(trim(ss_vndesc)) >0 then ")
            _T("trim(ss_vndesc) else CAST(hp_ethnic AS nvarchar2(2)) end as ")
            _T("MA_DANTOC_NND,")
            _T(" 	hbc_idcard as SO_CMND_NND,")
            _T(" 	to_char(hbc_ngaycap, 'YYYYMMDD') as  NGAYCAP_CMND_NND,")
            _T(" 	hbc_placeregistration as NOICAP_CMND_NND,")
            _T(" 	case when length(hp_dtladdr) >0 then ")
            _T("hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, ")
            _T("hp_villid) ")
            _T(" 	else hp_dtladdr||','|| ")
            _T("hms_getaddress(hp_provid,hp_distid, hp_villid)  end as ")
            _T("NOI_DK_THUONGTRU_NND	,")
            _T(" 	hbc_tencha as HO_TEN_CHA,")
            _T(" 	hbc_childrenname as TEN_CON,")
            _T(" 	case when hbc_sex ='M' then 1 else 2 end as ")
            _T("gioi_tinh_con,")
            _T(" 	hbc_numberlive as SO_CON,")
            _T(" 	cast(hbc_weigh*1000 as integer) as CAN_NANG_CON,")
            _T(" 	to_char(hbc_datetimeofbirth,'YYYYMMDDHH24MI') as ")
            _T("NGAY_SINH_CON,")
            _T(" 	hbc_hospitalname as NOI_SINH_CON,")
            _T(" 	hbc_healthstatus as TINH_TRANG_CON,")
            _T(" 	case when hbc_surgery='Y' then 1 else 0 end as ")
            _T("SINHCON_PHAUTHUAT, ")
            _T(" 	case when hbc_underweeks32='Y' then 1 else 0 end as ")
            _T("SINHCON_DUOI32TUAN, ")
            _T(" 	hbc_healthstatus as ghi_chu,")
            _T(" 	get_username(hbc_themidwifery) as NGUOI_DO_DE,")
            _T(" 	case when hbc_voter is not null then ")
            _T("get_username(hbc_voter) else get_username(hbc_themidwifery)  ")
            _T("end as NGUOI_GHI_PHIEU,")
            _T(" 	'%s' as THU_TRUONG_DVI,")
            _T(" 	to_char(hcr_dischargedate ,'YYYYMMDD') as NGAY_CT,")
            _T("	hbc_number as SO, hbc_bookno as SO_QUYEN ")
            _T("  from hms_clinical_record ")
            _T(" left join hms_birthcertificate on (hbc_docno = hcr_docno) ")
            _T(" left join hms_patient on (hp_patientno = hcr_patientno)")
            _T(" left join sys_sel on (ss_id='sys_ethnic' and cast( ss_code ")
            _T("as integer) = hp_ethnic) ")
            _T(" where hcr_dischargedate between TO_TIMESTAMP ")
            _T("('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ")
            _T("('%s:59','YYYY/MM/DD HH24:MI:SS') ")
            _T(" and hbc_docno=%ld ")
            _T(" order by hcr_dischargedate"),
            m_szCeoName, szFromDate, szToDate, nDocumentNo);
        szType = _T("CT05");
        _tprintf(_T("\r\n CT05: %s"), szSQL);
        strData = GetXMLCT(szSQL, szType);

        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>CT05</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";

            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        szSQL.Format(
            _T("  select '' as SO_LUU_TRU, ")
            _T("			'%s/'||substr(cast(extract(YEAR FROM ")
            _T("hcr_admitdate) as ")
            _T("text),3,2)||'/'||TO_CHAR(hcr_numinward,'FM000000') as MA_YTE, ")
            _T("			hd_docno as MA_CT,")
            _T(" 			'' as SO_SERI,")
            _T(" 			sd_insuranceid as MA_KHOA , ")
            _T(" 			 substr(hd_cardno,6,10) as MA_BHXH,")
            _T(" 			 substr(hd_cardno,1,15) as MA_THE,")
            _T(" 			 get_patientname(hd_docno) as HO_TEN,")
            _T(" 			to_char(hp_birthdate,'YYYYMMDD') as ")
            _T("NGAY_SINH,")
            _T(" 			case when hp_sex ='M' then 1 else 2 ")
            _T("end as GIOI_TINH,")
            _T(" 	case when length(trim(ss_vndesc)) >0 then ")
            _T("trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end as ")
            _T("MA_DANTOC,")
            _T(" 			sys_sel_getname('sys_occupation', ")
            _T("cast(hp_occupation as text)) as NGHE_NGHIEP,")
            _T(" 			 case when length(hp_dtladdr) >0 then ")
            _T("hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, ")
            _T("hp_villid) ")
            _T(" 				else hp_dtladdr||','|| ")
            _T("hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  ")
            _T("DIA_CHI,")
            _T(" 			")
            _T("to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,")
            _T(" 			")
            _T("to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,")
            _T("			0 as DINH_CHI_THAI_NGHEN, ")
            _T(" 			'' as TUOI_THAI,")
            _T(" 			hcr_maindisease as CHAN_DOAN,")
            _T(" 			case when length(trim(hcr_gmethod)) ")
            _T(">5  then hcr_gmethod else hcr_maindisease end as PP_DIEUTRI,")
            _T(" 			'%s'  as THU_TRUONG_DVI,")
            _T(" 			sd_cchn_truong_khoa as MA_TRUONGKHOA,")
            _T("			sd_cchn_truong_khoa as ")
            _T("MA_CCHN_TRUONGKHOA, ")
            _T(" 			sd_ten_truong_khoa as TEN_TRUONGKHOA,")
            _T(" 			to_char(hcr_dischargedate, ")
            _T("'YYYYMMDD') as NGAY_CHUNG_TU,")
            _T(" 			case when substr(hd_cardno, 6,2) ")
            _T("='KT'  then '1' else '0' end as TEKT, ")
            _T(" 				case when hnr_reference_docno ")
            _T(">0 then hnr_fathername when hd_relation=1 then hd_relative ")
            _T("else cast(' Khong ro' as nvarchar2(45)) end as HO_TEN_CHA, ")
            _T(" 			case when hnr_reference_docno >0 then ")
            _T("get_patientname(hnr_reference_docno) when hd_relation=2  then ")
            _T("hd_relative else cast('Không điền' as nvarchar2(128)) end as ")
            _T("HO_TEN_ME  ")
            _T(" 		 from hms_clinical_record ")
            _T(" 		 left join hms_doc on (hd_docno = hcr_docno)")
            _T("		left join HMS_NEWBORN_RECORD on (hd_docno = ")
            _T("hnr_docno) ")
            _T(" 		 left join hms_patient on (hp_patientno = ")
            _T("hd_patientno)")
            _T("		 left join sys_sel on (ss_id='sys_ethnic' and ")
            _T("cast(ss_code as integer) = hp_ethnic) ")
            _T(" 		 left join sys_dept on (sd_id = ")
            _T("hcr_dischargedept)")
            _T(" 		 where hcr_dischargedate between TO_TIMESTAMP ")
            _T("('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ")
            _T("('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ")
            _T(" 		 order by  hcr_dischargedate "),
            m_szCompany.Right(3), m_szCeoName, szFromDate, szToDate,
            nDocumentNo);

        szType = _T("CT03");
        _tprintf(_T("\r\n CT03: %s"), szSQL);
        strData = GetXMLCT(szSQL, szType);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>CT03</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";

            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        szSQL.Format(
            _T("  select '' as MA_CT, ")
            _T(" 			'' as SO_SERI,")
            _T(" 			 substr(hd_cardno,6,10) as MA_BHXH,")
            _T(" 			 substr(hd_cardno,1,15) as MA_THE,")
            _T(" 			 get_patientname(hd_docno) as HO_TEN,")
            _T(" 			to_char(hp_birthdate,'YYYYMMDD') as ")
            _T("NGAY_SINH,")
            _T(" 			case when hp_sex ='M' then 1 else 2 ")
            _T("end as GIOI_TINH,")
            _T(" 	case when length(trim(ss_vndesc)) >0 then ")
            _T("trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end as ")
            _T("MA_DANTOC,")
            _T(" 			sys_sel_getname('sys_occupation', ")
            _T("cast(hp_occupation as text)) as NGHE_NGHIEP,")
            _T(" 			 case when length(hp_dtladdr) >0 then ")
            _T("hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, ")
            _T("hp_villid) ")
            _T(" 				else hp_dtladdr||','|| ")
            _T("hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  ")
            _T("DIA_CHI,")
            _T(" 			'' as HO_TEN_CHA,")
            _T(" 			'' as HO_TEN_ME, ")
            _T("			'' as NGUOI_GIAM_HO, ")
            _T("			'' as TEN_DONVI, ")
            _T(" 			")
            _T("to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,")
            _T(" 			")
            _T("to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,")
            _T(" 			hcr_admitdisease as CHAN_DOAN_VAO,")
            _T(" 			hcr_maindisease as CHAN_DOAN_RA,")
            _T(" 			hcr_pathological ")
            _T("||'\r\n'||hcr_systemic as QT_BENHLY,")
            _T(" 			hcr_tests as TOMTAT_KQ,")
            _T(" 			case when length(trim(hcr_gmethod)) ")
            _T(">5  then hcr_gmethod else hcr_maindisease end as PP_DIEUTRI,")
            _T("			'' as NGAY_SINHCON, ")
            _T("			'' as NGAY_CHETCON, ")
            _T("			'' as SO_CONCHET, ")
            _T("			hcr_ttrang_rv  as TT_RAVIEN, ")
            _T("			'' as GHI_CHU, ")
            _T(" 			'%s'  as NGUOI_DAI_DIEN,")
            _T(" 			to_char(hcr_dischargedate, ")
            _T("'YYYYMMDD') as NGAY_CT,")
            _T(" 			case when substr(hd_cardno, 6,2) ")
            _T("='KT'  then '1' else '0' end as TEKT ")
            _T(" 		 from hms_clinical_record ")
            _T(" 		 left join hms_doc on (hd_docno = hcr_docno)")
            _T(" 		 left join hms_patient on (hp_patientno = ")
            _T("hd_patientno)")
            _T("		 left join sys_sel on (ss_id='sys_ethnic' and ")
            _T("cast(ss_code as integer) = hp_ethnic) ")
            _T(" 		 left join sys_dept on (sd_id = ")
            _T("hcr_dischargedept)")
            _T(" 		 where hcr_dischargedate between TO_TIMESTAMP ")
            _T("('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ")
            _T("('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ")
            _T(" 		 order by  hcr_dischargedate "),
            m_szCeoName, szFromDate, szToDate, nDocumentNo);

        szType = _T("CT04");
        _tprintf(_T("\r\n CT04: %s"), szSQL);
        strData = GetXMLCT(szSQL, szType);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>CT04</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";

            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        strData.clear();
        szSQL.Format(
            _T(" select hc_serial as MA_CT, ")
            _T("   hc_serial as SO_SERI, ")
            _T("   hd_docno as SO_KCB, ")
            _T("   substr(a.hc_cardno,6,10) as MA_BHXH, ")
            _T("   substr(a.hc_cardno,1,15) as MA_THE, ")
            _T("   get_patientname(hd_docno) as HO_TEN, ")
            _T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ")
            _T("   hp_workplace as TEN_DVI, ")
            _T("   hc_diagnostic as CHAN_DOAN, ")
            _T("   to_char(hc_fromdate, 'YYYYMMDD') as NGAY_VAO, ")
            _T("   to_char(hc_todate, 'YYYYMMDD') as NGAY_RA, ")
            _T("	'' as NGUOI_DAI_DIEN,  ")
            _T("   hc_cchn as MA_BS, ")
            _T("   hc_doctor as TEN_BS, ")
            _T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ")
            _T("	to_char(hd_enddate, 'YYYYMMDD') as NGAY_CT ")
            _T("   from HMS_CHUNGNHANNGHIVIEC   a")
            _T("   left join hms_doc on (a.hc_docno = hd_docno) ")
            _T("   left join hms_card  b on (b.hc_idx = hd_cardidx and ")
            _T("b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)")
            _T("   left join hms_clinical_record on (hcr_docno = hd_docno) ")
            _T("   left join hms_patient on (hp_patientno = hd_patientno) ")
            _T("   where hc_isthaisan='Y' and ( (hd_status='T' and hd_enddate ")
            _T("between to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') ")
            _T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') ")
            _T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ) ")
            _T("   or ( hcr_status='T' and hcr_dischargedate between ")
            _T("to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') and ")
            _T("to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') and hd_docno = ")
            _T("%ld )  ) ")
            _T("   order by hc_bookno, hc_index"),
            szFromDate, szToDate, nDocumentNo, szFromDate, szToDate,
            nDocumentNo);

        szType = _T("CT06");
        _tprintf(_T("\r\n CT06: %s"), szSQL);
        strData = GetXMLCT(szSQL, szType);
        if (strData.length() > 0)
        {
            fs << "<FILEHOSO>" << endl;
            fs << "<LOAIHOSO>CT06</LOAIHOSO>" << endl;
            fs << "<NOIDUNGFILE>";

            fs << strData.c_str();
            fs << "</NOIDUNGFILE>" << endl;
            fs << "</FILEHOSO>" << endl;
        }

        fs << "</HOSO>" << endl;
        CString szSQLItem;

        rs.MoveNext();
    }

    fs << "</DANHSACHHOSO>" << endl;
    fs << "</THONGTINHOSO>" << endl;
    fs << "</HSCHUNGTU>" << endl;
    fs.close();
    tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"), nCount);
    SetStatusText(tmpStr, 0);
    EndWaitCursor();
    return 0;
}
int CMainFrame::OnWriteHoSoGiayTo(long nDocumentNo, int nTreattime,
                                  CString szType)
{
    BeginWaitCursor();
    UpdateData(true);
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, szCardNo, tmpStr, szWhere;
    CString szFieldName, szData;
    SetStatusText(_T("Đang tạo file"), 0);
    CString szExportPath, szFile;
    CString szMaLK;
    int nCount = 0;
    szExportPath = AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE_HSCT"),
                                                 _T("Drirectory"));
    CString szFileName;

    tmpStr = GetSysDateTime().Left(11);
    tmpStr.Replace(_T("-"), _T(""));
    tmpStr.Replace(_T("/"), _T(""));
    tmpStr.Replace(_T(" "), _T(""));
    tmpStr.Replace(_T(":"), _T(""));

    szFileName.Format(_T("%ld-%s"), nDocumentNo, tmpStr);

    szFile.Format(_T("%s\\HSCT-%s-%s.xml"), szExportPath, szFileName, szType);
    szFile.MakeUpper();
    char szPath[MAX_PATH];
    memset(szPath, 0, MAX_PATH);
    ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath,
                          MAX_PATH, 0, 0);
    std::wfstream fs;
    fs.open(szPath, std::fstream::out | std::fstream::trunc);

    CString szMaBV;
    std::wstring macskcb, ngaylap, soluong;

    szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("MACSKCB"), szMaBV);
    macskcb = (LPCTSTR)szMaBV;

    szSQL.Format(
        _T("select 1 as SoLuongHoSo, to_char( current_date,'YYYYMMDD') as ")
        _T("NgayLap from dual  "));
    rs.ExecSQL(szSQL);

    if (!rs.IsEOF())
    {
        rs.GetValue(_T("SoLuongHoSo"), tmpStr);
        nCount = 1;
        soluong = (LPCTSTR)tmpStr;
        rs.GetValue(_T("NgayLap"), tmpStr);
        ngaylap = (LPCTSTR)tmpStr;
    }

    fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
    fs << "<HSCHUNGTU xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" "
          "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
       << endl;
    fs << "<THONGTINDONVI>" << endl;
    fs << "<CHUKYDONVI/>" << endl;
    fs << "<MACSKCB>" << macskcb << "</MACSKCB>" << endl;
    fs << "</THONGTINDONVI>" << endl;
    fs << "<THONGTINHOSO>" << endl;
    fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
    fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
    fs << "<DANHSACHHOSO>" << endl;
    CString szFromDate, szToDate;
    szFromDate = m_wndPaperView.m_szFromDate.Left(16);
    szToDate = m_wndPaperView.m_szToDate.Left(16);

    STLString strData;

    while (!rs.IsEOF())
    {
        fs << "<HOSO>" << endl;
        strData.clear();
        // CString szType;
        if (szType == _T("CT07"))
        {
            szSQL.Format(
                _T(" select hc_serial as MA_CT, ")
                _T("   hc_serial as SO_SERI, ")
                _T("   hd_docno as SO_KCB, ")
                _T("   substr(a.hc_cardno,6,10) as MA_BHXH, ")
                _T("   substr(a.hc_cardno,1,15) as MA_THE, ")
                _T("   get_patientname(hd_docno) as HO_TEN, ")
                _T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ")
                _T("   case when hp_sex ='M' then 1 else 2 end as gioi_tinh, ")
                _T("   hp_workplace as DON_VI, ")
                _T("   hc_diagnostic as CHANDOAN_DIEUTRI, ")
                _T("   to_char(hc_fromdate, 'YYYYMMDD') as TU_NGAY, ")
                _T("   to_char(hc_todate, 'YYYYMMDD') as DEN_NGAY, ")
                _T("   hc_fathername as HO_TEN_CHA, ")
                _T("   hc_mothername as HO_TEN_ME, ")
                _T("   '%s' as THU_TRUONG_DV, ")
                _T("   hc_cchn as MA_CCHN, ")
                _T("   hc_doctor as TEN_NGUOI_HANH_NGHE, ")
                _T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ")
                _T(" 			case when substr(a.hc_cardno, 6,2) ")
                _T("='KT'  then '1' else null end as TEKT,")
                _T("   'CT07' as MAU_SO  ")
                _T("   from HMS_CHUNGNHANNGHIVIEC  as   a")
                _T("   left join hms_doc on (a.hc_docno = hd_docno) ")
                _T("   left join hms_card  b on (b.hc_idx = hd_cardidx and ")
                _T("b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)")
                _T("   left join hms_clinical_record on (hcr_docno = ")
                _T("hd_docno) ")
                _T("   left join hms_patient on (hp_patientno = hd_patientno) ")
                _T("   where hc_isthaisan='N' and ( (hd_status='T' and ")
                _T("hd_enddate between to_timestamp ('%s:00','YYYY/MM/DD ")
                _T("HH24:MI:SS') ")
                _T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') ")
                _T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ")
                _T(") ")
                _T("   or ( hcr_status='T' and hcr_dischargedate between ")
                _T("to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') and ")
                _T("to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') and ")
                _T("hd_docno = %ld )  ) ")
                _T("   order by hc_bookno, hc_index"),
                m_szCeoName, szFromDate, szToDate, nDocumentNo, szFromDate,
                szToDate, nDocumentNo);

            _tprintf(_T("\r\n CT07: %s"), szSQL);
            strData = GetXMLCT(szSQL, szType);
            if (strData.length() > 0)
            {
                fs << "<FILEHOSO>" << endl;
                fs << "<LOAIHOSO>CT07</LOAIHOSO>" << endl;
                fs << "<NOIDUNGFILE>";
                fs << strData.c_str();
                fs << "</NOIDUNGFILE>" << endl;
                fs << "</FILEHOSO>" << endl;
            }
        }
        if (szType == _T("CT05"))
        {
            strData.clear();
            szSQL.Format(
                _T(" select '' as ma_ct,")
                _T(" 	hbc_number||'/'||hbc_bookno||'/'||hbc_year as so_seri,")
                _T("	hbc_bookno as QUYEN_SO, ")
                _T("	hbc_number as SO, ")
                _T(" 	substr(hbc_bhyt,6,10) as MA_BHXH_NND,")
                _T(" 	substr(hbc_bhyt,1,15) as MA_THE_NND,")
                _T(" 	hbc_patientname as HOTEN_NND,")
                _T(" 	to_char(hp_birthdate, 'YYYYMMDD') as NGAYSINH_NND,")
                _T(" 	case when length(trim(ss_vndesc)) >0 then ")
                _T("trim(ss_vndesc) else CAST(hp_ethnic AS nvarchar2(2)) end ")
                _T("as MA_DANTOC_NND,")
                _T(" 	hbc_idcard as SO_CMND_NND,")
                _T(" 	to_char(hbc_ngaycap, 'YYYYMMDD') as  NGAYCAP_CMND_NND,")
                _T(" 	hbc_placeregistration as NOICAP_CMND_NND,")
                _T(" 	case when length(hp_dtladdr) >0 then ")
                _T("hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, ")
                _T("hp_villid) ")
                _T(" 	else hp_dtladdr||','|| ")
                _T("hms_getaddress(hp_provid,hp_distid, hp_villid)  end as ")
                _T("NOI_DK_THUONGTRU_NND	,")
                _T(" 	hbc_tencha as HO_TEN_CHA,")
                _T(" 	hbc_childrenname as TEN_CON,")
                _T(" 	case when hbc_sex ='M' then 1 else 2 end as ")
                _T("gioi_tinh_con,")
                _T(" 	hbc_numberlive as SO_CON,")
                _T(" 	cast(hbc_weigh*1000 as integer) as CAN_NANG_CON,")
                _T(" 	to_char(hbc_datetimeofbirth,'YYYYMMDDHH24MI') as ")
                _T("NGAY_SINH_CON,")
                _T(" 	hbc_hospitalname as NOI_SINH_CON,")
                _T(" 	hbc_healthstatus as TINH_TRANG_CON,")
                _T(" 	case when hbc_surgery='Y' then 1 else 0 end as ")
                _T("SINHCON_PHAUTHUAT, ")
                _T(" 	case when hbc_underweeks32='Y' then 1 else 0 end as ")
                _T("SINHCON_DUOI32TUAN, ")
                _T(" 	hbc_healthstatus as ghi_chu,")
                _T(" 	get_username(hbc_themidwifery) as NGUOI_DO_DE,")
                _T(" 	case when hbc_voter is not null then ")
                _T("get_username(hbc_voter) else ")
                _T("get_username(hbc_themidwifery)  end as NGUOI_GHI_PHIEU,")
                _T(" 	'%s' as THU_TRUONG_DVI,")
                _T(" 	to_char(hcr_dischargedate ,'YYYYMMDD') as NGAY_CT,")
                _T("	hbc_number as SO, hbc_bookno as SO_QUYEN ")
                _T("  from hms_clinical_record ")
                _T(" left join hms_birthcertificate on (hbc_docno = ")
                _T("hcr_docno) ")
                _T(" left join hms_patient on (hp_patientno = hcr_patientno)")
                _T(" left join sys_sel on (ss_id='sys_ethnic' and cast( ")
                _T("ss_code as integer) = hp_ethnic) ")
                _T(" where hcr_dischargedate between TO_TIMESTAMP ")
                _T("('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ")
                _T("('%s:59','YYYY/MM/DD HH24:MI:SS') ")
                _T(" and hbc_docno=%ld ")
                _T(" order by hcr_dischargedate"),
                m_szCeoName, szFromDate, szToDate, nDocumentNo);
            //	szType= _T("CT05");
            _tprintf(_T("\r\n CT05: %s"), szSQL);
            strData = GetXMLCT(szSQL, szType);

            if (strData.length() > 0)
            {
                fs << "<FILEHOSO>" << endl;
                fs << "<LOAIHOSO>CT05</LOAIHOSO>" << endl;
                fs << "<NOIDUNGFILE>";

                fs << strData.c_str();
                fs << "</NOIDUNGFILE>" << endl;
                fs << "</FILEHOSO>" << endl;
            }
        }

        strData.clear();
        if (szType == _T("CT03"))
        {
            szSQL.Format(
                _T("  select '' as SO_LUU_TRU, ")
                _T("			'%s/'||substr(cast(extract(YEAR FROM ")
                _T("hcr_admitdate) as ")
                _T("text),3,2)||'/'||TO_CHAR(hcr_numinward,'FM000000') as ")
                _T("MA_YTE, ")
                _T("			hd_docno as MA_CT,")
                _T("			'%s' as MA_CSKCB, ")
                _T(" 			'' as SO_SERI,")
                _T(" 			sd_insuranceid as MA_KHOA , ")
                _T(" 			 substr(hd_cardno,6,10) as MA_BHXH,")
                _T("			substr(hd_cardno,6,10) as MA_SOBHXH, ")
                _T(" 			 substr(hd_cardno,1,15) as MA_THE,")
                _T(" 			 get_patientname(hd_docno) as HO_TEN,")
                _T(" 			to_char(hp_birthdate,'YYYYMMDD') as ")
                _T("NGAY_SINH,")
                _T(" 			case when hp_sex ='M' then 1 else 2 ")
                _T("end as GIOI_TINH,")
                _T(" 	case when length(trim(ss_vndesc)) >0 then ")
                _T("trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end ")
                _T("as MA_DANTOC,")
                _T("	case when length(trim(ss_vndesc)) >0 then ")
                _T("trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end ")
                _T("as	DAN_TOC, ")
                _T(" 			sys_sel_getname('sys_occupation', ")
                _T("cast(hp_occupation as text)) as NGHE_NGHIEP,")
                _T(" 			 case when length(hp_dtladdr) >0 then ")
                _T("hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, ")
                _T("hp_villid) ")
                _T(" 				else hp_dtladdr||','|| ")
                _T("hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  ")
                _T("DIA_CHI,")
                _T(" 			")
                _T("to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,")
                _T(" 			")
                _T("to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,")
                _T("			0 as DINH_CHI_THAI_NGHEN, ")
                _T(" 			'' as TUOI_THAI,")
                _T(" 			hcr_maindisease as CHAN_DOAN,")
                _T(" 			case when length(trim(hcr_gmethod)) ")
                _T(">5  then hcr_gmethod else hcr_maindisease end as ")
                _T("PP_DIEUTRI,")
                _T("			'' as GHI_CHU, ")
                _T(" 			'%s'  as THU_TRUONG_DVI,")
                _T("			'%s' as NGUOI_DAI_DIEN, ")
                _T(" 			sd_cchn_truong_khoa as MA_TRUONGKHOA,")
                _T("			sd_cchn_truong_khoa as ")
                _T("MA_CCHN_TRUONGKHOA, ")
                _T(" 			sd_ten_truong_khoa as TEN_TRUONGKHOA,")
                _T(" 			to_char(hcr_dischargedate, ")
                _T("'YYYYMMDD') as NGAY_CHUNG_TU,")
                _T(" 			to_char(hcr_dischargedate, ")
                _T("'YYYYMMDD') as NGUOI_DAI_DIEN,")
                _T(" 			case when substr(hd_cardno, 6,2) ")
                _T("='KT'  then '1' else '0' end as TEKT, ")
                _T(" 				case when hnr_reference_docno ")
                _T(">0 then hnr_fathername when hd_relation=1 then ")
                _T("hd_relative else cast(' Khong ro' as nvarchar2(45)) end ")
                _T("as HO_TEN_CHA, ")
                _T(" 			case when hnr_reference_docno >0 then ")
                _T("get_patientname(hnr_reference_docno) when hd_relation=2  ")
                _T("then hd_relative else cast('Không điền' as ")
                _T("nvarchar2(128)) end as HO_TEN_ME  ")
                _T(" 		 from hms_clinical_record ")
                _T(" 		 left join hms_doc on (hd_docno = hcr_docno)")
                _T("		left join HMS_NEWBORN_RECORD on (hd_docno = ")
                _T("hnr_docno) ")
                _T(" 		 left join hms_patient on (hp_patientno = ")
                _T("hd_patientno)")
                _T("		 left join sys_sel on (ss_id='sys_ethnic' and ")
                _T("cast(ss_code as integer) = hp_ethnic) ")
                _T(" 		 left join sys_dept on (sd_id = ")
                _T("hcr_dischargedept)")
                _T(" 		 where hcr_dischargedate between TO_TIMESTAMP ")
                _T("('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ")
                _T("('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ")
                _T(" 		 order by  hcr_dischargedate "),
                m_szCompany.Right(3), m_szCompany, m_szCeoName, m_szCeoName,
                szFromDate, szToDate, nDocumentNo);

            //	szType= _T("CT03");
            _tprintf(_T("\r\n CT03: %s"), szSQL);
            strData = GetXMLCT(szSQL, szType);
            if (strData.length() > 0)
            {
                fs << "<FILEHOSO>" << endl;
                fs << "<LOAIHOSO>CT03</LOAIHOSO>" << endl;
                fs << "<NOIDUNGFILE>";

                fs << strData.c_str();
                fs << "</NOIDUNGFILE>" << endl;
                fs << "</FILEHOSO>" << endl;
            }
        }
        if (szType == _T("CT04"))
        {
            strData.clear();
            szSQL.Format(
                _T("  select '' as MA_CT, ")
                _T("			'%s' as MA_CSKCB , ")
                _T(" 			'' as SO_SERI,")
                _T(" 			 substr(hd_cardno,6,10) as MA_BHXH,")
                _T(" 			 substr(hd_cardno,1,15) as MA_THE,")
                _T(" 			 get_patientname(hd_docno) as HO_TEN,")
                _T(" 			to_char(hp_birthdate,'YYYYMMDD') as ")
                _T("NGAY_SINH,")
                _T(" 			case when hp_sex ='M' then 1 else 2 ")
                _T("end as GIOI_TINH,")
                _T(" 	case when length(trim(ss_vndesc)) >0 then ")
                _T("trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end ")
                _T("as MA_DANTOC,")
                _T(" 	case when length(trim(ss_vndesc)) >0 then ")
                _T("trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end ")
                _T("as DAN_TOC,")
                _T(" 			sys_sel_getname('sys_occupation', ")
                _T("cast(hp_occupation as text)) as NGHE_NGHIEP,")
                _T(" 			 case when length(hp_dtladdr) >0 then ")
                _T("hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, ")
                _T("hp_villid) ")
                _T(" 				else hp_dtladdr||','|| ")
                _T("hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  ")
                _T("DIA_CHI,")
                _T(" 			'' as HO_TEN_CHA,")
                _T(" 			'' as HO_TEN_ME, ")
                _T("			'' as NGUOI_GIAM_HO, ")
                _T("			'' as TEN_DONVI, ")
                _T(" 			")
                _T("to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,")
                _T(" 			")
                _T("to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,")
                _T(" 			hcr_admitdisease as CHAN_DOAN_VAO,")
                _T(" 			hcr_maindisease as CHAN_DOAN_RA,")
                _T(" 			hcr_pathological ")
                _T("||'\r\n'||hcr_systemic as QT_BENHLY,")
                _T(" 			hcr_tests as TOMTAT_KQ,")
                _T(" 			case when length(trim(hcr_gmethod)) ")
                _T(">5  then hcr_gmethod else hcr_maindisease end as ")
                _T("PP_DIEUTRI,")
                _T("			'' as NGAY_SINHCON, ")
                _T("			'' as NGAY_CHETCON, ")
                _T("			'' as SO_CONCHET, ")
                _T("			hcr_ttrang_rv  as TT_RAVIEN, ")
                _T("			'' as GHI_CHU, ")
                _T(" 			'%s'  as NGUOI_DAI_DIEN,")
                _T(" 			to_char(hcr_dischargedate, ")
                _T("'YYYYMMDD') as NGAY_CT,")
                _T(" 			case when substr(hd_cardno, 6,2) ")
                _T("='KT'  then '1' else '0' end as TEKT ")
                _T(" 		 from hms_clinical_record ")
                _T(" 		 left join hms_doc on (hd_docno = hcr_docno)")
                _T(" 		 left join hms_patient on (hp_patientno = ")
                _T("hd_patientno)")
                _T("		 left join sys_sel on (ss_id='sys_ethnic' and ")
                _T("cast(ss_code as integer) = hp_ethnic) ")
                _T(" 		 left join sys_dept on (sd_id = ")
                _T("hcr_dischargedept)")
                _T(" 		 where hcr_dischargedate between TO_TIMESTAMP ")
                _T("('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ")
                _T("('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ")
                _T(" 		 order by  hcr_dischargedate "),
                m_szCompany, m_szCeoName, szFromDate, szToDate, nDocumentNo);

            _tprintf(_T("\r\n CT04: %s"), szSQL);
            strData = GetXMLCT(szSQL, szType);
            if (strData.length() > 0)
            {
                fs << "<FILEHOSO>" << endl;
                fs << "<LOAIHOSO>CT04</LOAIHOSO>" << endl;
                fs << "<NOIDUNGFILE>";

                fs << strData.c_str();
                fs << "</NOIDUNGFILE>" << endl;
                fs << "</FILEHOSO>" << endl;
            }
        }

        strData.clear();
        if (szType == _T("CT06"))
        {
            szSQL.Format(
                _T(" select hc_serial as MA_CT, ")
                _T("   hc_serial as SO_SERI, ")
                _T("   hd_docno as SO_KCB, ")
                _T("   substr(a.hc_cardno,6,10) as MA_BHXH, ")
                _T("   substr(a.hc_cardno,1,15) as MA_THE, ")
                _T("   get_patientname(hd_docno) as HO_TEN, ")
                _T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ")
                _T("   hp_workplace as TEN_DVI, ")
                _T("   hc_diagnostic as CHAN_DOAN, ")
                _T("   to_char(hc_fromdate, 'YYYYMMDD') as NGAY_VAO, ")
                _T("   to_char(hc_todate, 'YYYYMMDD') as NGAY_RA, ")
                _T("	'' as NGUOI_DAI_DIEN,  ")
                _T("   hc_cchn as MA_BS, ")
                _T("   hc_doctor as TEN_BS, ")
                _T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ")
                _T("	to_char(hd_enddate, 'YYYYMMDD') as NGAY_CT ")
                _T("   from HMS_CHUNGNHANNGHIVIEC   a")
                _T("   left join hms_doc on (a.hc_docno = hd_docno) ")
                _T("   left join hms_card  b on (b.hc_idx = hd_cardidx and ")
                _T("b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)")
                _T("   left join hms_clinical_record on (hcr_docno = ")
                _T("hd_docno) ")
                _T("   left join hms_patient on (hp_patientno = hd_patientno) ")
                _T("   where hc_isthaisan='Y' and ( (hd_status='T' and ")
                _T("hd_enddate between to_timestamp ('%s:00','YYYY/MM/DD ")
                _T("HH24:MI:SS') ")
                _T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') ")
                _T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ")
                _T(") ")
                _T("   or ( hcr_status='T' and hcr_dischargedate between ")
                _T("to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') and ")
                _T("to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') and ")
                _T("hd_docno = %ld )  ) ")
                _T("   order by hc_bookno, hc_index"),
                szFromDate, szToDate, nDocumentNo, szFromDate, szToDate,
                nDocumentNo);

            // szType= _T("CT06");
            _tprintf(_T("\r\n CT06: %s"), szSQL);
            strData = GetXMLCT(szSQL, szType);
            if (strData.length() > 0)
            {
                fs << "<FILEHOSO>" << endl;
                fs << "<LOAIHOSO>CT06</LOAIHOSO>" << endl;
                fs << "<NOIDUNGFILE>";

                fs << strData.c_str();
                fs << "</NOIDUNGFILE>" << endl;
                fs << "</FILEHOSO>" << endl;
            }
        }

        fs << "</HOSO>" << endl;
        CString szSQLItem;

        rs.MoveNext();
    }

    fs << "</DANHSACHHOSO>" << endl;
    fs << "</THONGTINHOSO>" << endl;
    fs << "</HSCHUNGTU>" << endl;
    fs.close();
    tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"), nCount);
    SetStatusText(tmpStr, 0);
    EndWaitCursor();
    return 0;
}
STLString CMainFrame::GetXMLCT(CString szSQL, CString szType)
{
    CRecord rs(&m_db), crs(&m_db);
    CString tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr cdata = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;

    CStringA szUtf8;
    szUtf8 = UTF8Encode(szType, szType.GetLength());

    doc = xmlNewDoc(NULL);
    CString szName, szValue;
    szName = _T("xmlns:xsd");
    szValue = _T("http://www.w3.org/2001/XMLSchema");
    rootNode = xmlNewNode(NULL, (const xmlChar *)(LPCSTR)szUtf8);
    CLibXMLHelper::SetValue(rootNode, (LPCTSTR)szName, (LPCTSTR)szValue);
    szName = _T("xmlns:xsi");
    szValue = _T("http://www.w3.org/2001/XMLSchema-instance");
    CLibXMLHelper::SetValue(rootNode, (LPCTSTR)szName, (LPCTSTR)szValue);
    xmlDocSetRootElement(doc, rootNode);
    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
    STLString outString;
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        outString.empty();
        return outString;
    }
    for (int i = 0; i < rs.GetFieldCount(); i++)
    {
        szFieldName = rs.GetFieldName(i);
        rs.GetValue(szFieldName, szData);
        szFieldName.MakeUpper();
        if (szFieldName == _T("MA_YTE") && m_szCompany == _T("64007"))
            szData.Empty();
        // if(szFieldName== _T("HO_TEN") || szFieldName== _T("DIA_CHI")||
        // szFieldName== _T("TEN_BENH") )
        //{
        //	AddCDataBlock(doc, rootNode, szFieldName, szData);
        //}

        //
        // if(szFieldName == _T("TRANGTHAIGUI") ||
        // szFieldName==_T("TIME_PROCESS")
        //			||szFieldName==_T("SO_PHIEU")
        //			||szFieldName==_T("NGAY_QUYETTOAN")
        //			||szFieldName==_T("MA_KHOABV")
        //			||szFieldName==_T("TEN_KHOABV")
        //			||szFieldName==_T("NGUOI_LIEN_HE")
        //			||szFieldName==_T("LOAI_GIAYTO_DIKEM")
        //			||szFieldName==_T("TEN_LOAI_GIAYTO")
        //			||szFieldName==_T("HO_TEN")
        //			||szFieldName==_T("DIA_CHI")
        //			||szFieldName==_T("TEN_BENH"))
        //	continue;

        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, (LPCTSTR)szFieldName, szData);
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);

    CLibXMLHelper::xml2Base64String(doc, outString);
    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

CString CMainFrame::GetSelectionString(CString szID, CString szCode)
{
    CString szSQL, szRet, szLabel;
    CRecord rs(&m_db);
    szSQL.Format(_T("select ss_desc as name from sys_sel where ss_id='%s' and ")
                 _T("ss_code='%s' "),
                 szID, szCode);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
        return _T("");
    rs.GetValue(_T("name"), szRet);
    return szRet;
}

void CMainFrame::OnFileAutosys()
{
    UpdateData(true);
    bIsAutoCheckout = !bIsAutoCheckout;
    bIsAutoSysXML = !bIsAutoSysXML;

    if (bIsAutoCheckout)
        m_pMainMenu->CheckMenuItem(ID_FILE_AUTOSYSXML,
                                   MF_CHECKED | MF_BYCOMMAND);
    else
        m_pMainMenu->CheckMenuItem(ID_FILE_AUTOSYSXML,
                                   MF_UNCHECKED | MF_BYCOMMAND);
    _tprintf(_T("\r\n%d"), bIsAutoCheckout);
}

void CMainFrame::OnFile79a()
{
    CSSIFromThangQuyetToan dlg(this);
    dlg.DoModal();
}
void CMainFrame::OnFile80a() {}

bool CMainFrame::AutoCheckOut()
{
    if (GetSafeHwnd() == NULL)
        return false;
//    UpdateData(true);
    if (bIsAutoCheckout == false)
    {
        return false;
    }
    CString szSQL;
    CRecord rs(&m_db);
    CString tmpTem;

    if (m_szCompany == _T("27009"))
        szSQL.Format(
            _T("select hfe_docno , hfe_invoiceno ,hfe_treattime as treattime  ")
            _T("	from hms_fee_invoice  ")
            _T("	LEFT JOIN hms_clinical_record on (hcr_docno= ")
            _T("hfe_docno)  ")
            _T("	LEFT JOIN bh_thongtinchitiet_tonghop ON(ma_lk= ")
            _T("cast(hfe_docno as text)||'-'||cast(hfe_treattime as text))  ")
            _T("	where  date(hcr_dischargedate) between current_date ")
            _T("and current_date and hfe_type='P' and hfe_status in ('P','A') ")
            _T("and hfe_discount >0 ")
            _T("	and hcr_dischargedate < current_timestamp  and ")
            _T("hfe_approved='Y'   ")
            _T("	and hfe_class in ('I','O') and (ma_lk is null or ")
            _T("hfe_docno not in (select docno from bh_send_xml where ")
            _T("date(thoigiangui) = current_date and maKetQua <> 500 )) ")
            _T(" UNION ALL  ")
            _T(" select hfe_docno as docno, hfe_invoiceno as ")
            _T("invoiceno,hfe_treattime as treattime from hms_fee_invoice ")
            _T("	LEFT JOIN bh_thongtinchitiet_tonghop ON(ma_lk= ")
            _T("cast(hfe_docno as text)||'-'||cast(hfe_treattime as text)) ")
            _T("	where  date(hfe_approveddate) between current_date ")
            _T("and current_date and hfe_type='P' and hfe_status='P' and ")
            _T("hfe_discount >0 and hfe_class ='E' ")
            _T("	and (ma_lk is null or hfe_docno not in (select docno ")
            _T("from bh_send_xml where date(thoigiangui) = current_date and ")
            _T("maKetQua <> 500 "));

    else
        szSQL.Format(
            _T("    SELECT DISTINCT hfe_docno,")
            _T("                    hfe_invoiceno")
            _T("      FROM hms_fee_invoice")
            _T(" LEFT JOIN bh_xml_1 ON ( ma_lk = Cast (hfe_docno AS NVARCHAR2 ")
            _T("(8))")
            _T("                                                   || '-'")
            _T("                                                   || Cast ")
            _T("(hfe_treattime AS")
            _T("                                                            ")
            _T("CHARACTER VARYING (3)) )")
            _T("     WHERE hfe_discount > 0 AND hfe_date BETWEEN To_timestamp ")
            _T("('%s 00:00',")
            _T("                                                 'yyyy/mm/dd ")
            _T("hh24:mi') AND")
            _T("                                                              ")
            _T(" To_timestamp ('%s 23:59',")
            _T("                                                              ")
            _T(" 'yyyy/mm/dd hh24:mi'")
            _T("                                                              ")
            _T(" ) AND hfe_type IN ( 'P', 'I' ) AND")
            _T("                     hfe_status = 'P' AND ma_lk IS NULL "),
            GetSysDate(), GetSysDate());

    _tprintf(_T("\r\n: %s"), szSQL);
    int nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        szSQL.Format(_T("BH_CHECKOUT_130(%ld,%ld)"),
                     str2long(rs.GetValue(_T("hfe_docno"))),
                     str2long(rs.GetValue(_T("hfe_invoiceno"))));
        tmpTem = ExecDML(szSQL);
        _tprintf(_T("%s"), szSQL);
        rs.MoveNext();
    }
    return true;
}
bool CMainFrame::WriteCheckOut()
{
//    UpdateData(true);
    if (bIsAutoSysXML == false)
    {
        return false;
    }

    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, szCardNo, tmpStr, szMaLK;
    //	bool bOk;
    int nCount = 0;
    long nDocument = 0;
    szSQL.Format(
        _T("SELECT * FROM bh_xml_1  ")
        _T("WHERE trangthai = 'Y' AND ")
        _T("TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI') ")
        _T(" BETWEEN to_timestamp('%s 00:00', 'YYYY/MM/DD HH24:MI:SS') AND ")
        _T("to_timestamp('%s 23:59', 'YYYY/MM/DD HH24:MI:SS')"),
        GetSysDate(), GetSysDate());
    rs.ExecSQL(szSQL);
    _tprintf(_T("\r\n%s"), szSQL);
    if (rs.GetRecordCount() <= 0)
        return false;

    while (!rs.IsEOF())
    {
        rs.GetValue(_T("ma_lk"), szMaLK);
        nCount = OnWriteCheckOut130(szMaLK);
        rs.MoveNext();
    }
    return true;
}

STLString CMainFrame::GetXML1_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;

    doc = xmlNewDoc(NULL);

    rootNode = xmlNewNode(NULL, (const xmlChar *)"TONG_HOP");
    xmlDocSetRootElement(doc, rootNode);
    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
    szSQL.Format(
        _T("  SELECT ma_lk, stt, ma_bn, ho_ten, so_cccd, ngay_sinh, ")
        _T("gioi_tinh, ma_quoctich, ma_dantoc, ma_nghe_nghiep, ")
        _T("         dia_chi, matinh_cu_tru, mahuyen_cu_tru, maxa_cu_tru, ")
        _T("dien_thoai, ma_the_bhyt, ma_dkbd, gt_the_tu, gt_the_den, ")
        _T("         ngay_mien_cct, ly_do_vv, ly_do_vnt, ma_ly_do_vnt, ")
        _T("chan_doan_vao, chan_doan_rv, ma_benh_chinh, ma_benh_kt, ")
        _T("         ma_benh_yhct, ma_pttt_qt, ma_doituong_kcb, ma_noi_di, ")
        _T("ma_noi_den, ma_tai_nan, ngay_vao, ngay_vao_noi_tru, ")
        _T("         ngay_ra, giay_chuyen_tuyen, so_ngay_dtri, pp_dieu_tri, ")
        _T("ket_qua_dtri, ma_loai_rv, ghi_chu, ngay_ttoan, t_thuoc,")
        _T("          t_vtyt, t_tongchi_bv, t_tongchi_bh, t_bntt, t_bncct, ")
        _T("t_bhtt, t_nguonkhac, t_bhtt_gdv, nam_qt, thang_qt, ")
        _T("          ma_loai_kcb, ma_khoa, ma_cskcb, ma_khuvuc, can_nang, ")
        _T("can_nang_con, nam_nam_lien_tuc, ngay_tai_kham, ")
        _T("          ma_hsba, ma_ttdv, du_phong,nhom_mau")
        _T("     FROM bh_xml_1")
        _T("     WHERE ma_lk = '%s'"),
        szMa_lk);
    rs.ExecSQL(szSQL);

    for (int i = 0; i < rs.GetFieldCount(); i++)
    {
        szFieldName = rs.GetFieldName(i);
        rs.GetValue(szFieldName, szData);
        szFieldName.MakeUpper();
        if (szFieldName == _T("HO_TEN") || szFieldName == _T("DIA_CHI") ||
            szFieldName == _T("TEN_BENH"))
        {
            AddCDataBlock(doc, rootNode, szFieldName, szData);
            continue;
        }
        /*if(szFieldName== _T("HO_TEN") || szFieldName== _T("DIA_CHI")||
        szFieldName== _T("TEN_BENH") )
        {
            char * strOutUTF8M;
            UTF8MBSTR::ConvertStringToUTF8(szFieldName,strOutUTF8M);

                childNode = xmlNewChild( rootNode, NULL, (const
        xmlChar*)strOutUTF8M, NULL );
            UTF8MBSTR::ConvertStringToUTF8(szData,strOutUTF8M);
                cdata = xmlNewCDataBlock( doc, (const xmlChar*)strOutUTF8M,
        xmlStrlen((const xmlChar*)strOutUTF8M) ); xmlAddChild( childNode, cdata
        );
        }*/

        /*	if(szFieldName == _T("TRANGTHAI") ||
           szFieldName==_T("TIME_PROCESS")
                    ||szFieldName==_T("SO_PHIEU")
                    ||szFieldName==_T("MUC_HUONG")
                    ||szFieldName==_T("NGAY_QUYETTOAN")
                    ||szFieldName==_T("MA_KHOABV")
                    ||szFieldName==_T("TEN_KHOABV")
                    ||szFieldName==_T("NGUOI_LIEN_HE")
                    ||szFieldName==_T("TIMES_EXPORT_XML")
                    ||szFieldName==_T("LOAI_GIAYTO_DIKEM")
                    ||szFieldName==_T("BH_LOCKED")
                                        ||szFieldName==_T("TEN_LOAI_GIAYTO")||
           szFieldName== _T("HO_TEN") || szFieldName== _T("DIA_CHI")||
           szFieldName== _T("TEN_BENH")) continue;*/

        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, (LPCTSTR)szFieldName, szData);
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);
    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML2_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr chiTieuNode = NULL; // Thêm nút CHITIEU_CHITIET_THUOC
    xmlNodePtr dsachNode = NULL;   // Thêm nút DSACH_CHI_TIET_THUOC
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    // Tạo nút CHITIEU_CHITIET_THUOC và đặt nó làm nút gốc
    chiTieuNode = xmlNewNode(NULL, (const xmlChar *)"CHITIEU_CHITIET_THUOC");
    xmlDocSetRootElement(doc, chiTieuNode);

    // Tạo nút DSACH_CHI_TIET_THUOC và thêm nó vào nút CHITIEU_CHITIET_THUOC
    dsachNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_THUOC");
    xmlAddChild(chiTieuNode, dsachNode);

    szSQL.Format(
        _T(" SELECT ma_lk, stt, ma_thuoc, MA_PP_CHEBIEN, ma_cskcb_thuoc, ")
        _T("ma_nhom, ten_thuoc, don_vi_tinh, ham_luong, ")
        _T("             duong_dung, dang_bao_che, lieu_dung, cach_dung, ")
        _T("so_dang_ky, tt_thau, pham_vi, tyle_tt_bh, so_luong, ")
        _T("             don_gia, thanh_tien_bv, thanh_tien_bh, ")
        _T("t_nguonkhac_nsnn, t_nguonkhac_vtnn, t_nguonkhac_vttn, ")
        _T("t_nguonkhac_cl, ")
        _T("             t_nguonkhac, muc_huong, t_bntt, t_bncct, t_bhtt, ")
        _T("ma_khoa, ma_bac_si, ma_dich_vu, ngay_yl,ngay_th_yl, ma_pttt, ")
        _T("nguon_ctra, ")
        _T("             vet_thuong_tp, du_phong")
        _T("      FROM bh_xml_2 where ma_lk='%s' "),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            dsachNode, _T("CHI_TIET_THUOC"), NULL);

        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            szFieldName.MakeUpper();
            if (szFieldName == _T("SO_LUONG"))
            {
                int nOld = SetFracDigits(3);
                rs.GetValue(szFieldName, szData);
                SetFracDigits(nOld);
            }
            else
            {
                rs.GetValue(szFieldName, szData);
            }
            if (szFieldName == _T("TEN_THUOC") ||
                szFieldName == _T("HAM_LUONG"))
            {
                AddCDataBlock(doc, childNode, szFieldName, szData);
                continue;
            }
            /*if(szFieldName== _T("TEN_THUOC") || szFieldName== _T("HAM_LUONG"))
            {
                char * strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName,strOutUTF8M);

                    childNode1 = xmlNewChild( childNode, NULL, (const
            xmlChar*)strOutUTF8M, NULL );
                UTF8MBSTR::ConvertStringToUTF8(szData,strOutUTF8M);
                    cdata = xmlNewCDataBlock( doc, (const xmlChar*)strOutUTF8M,
            xmlStrlen((const xmlChar*)strOutUTF8M) ); xmlAddChild( childNode1,
            cdata );
            }*/

            /*	if(szFieldName ==
               _T("TRANGTHAIGUI")||szFieldName==_T("TEN_KHOABV")
                        ||szFieldName==_T("DON_GIA_BV")
                        ||szFieldName==_T("MA_THUOC_CS")
                                            || szFieldName== _T("TEN_THUOC") ||
               szFieldName== _T("HAM_LUONG")
                        )
                continue;*/

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName);
            STLString content = szData;
            CLibXMLHelper::SetContentText(childNode1, content);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);

    STLString outString;
    std::string str;
    CLibXMLHelper::xml2String(doc, str);
    // printf("\r\n%s", str.c_str());

    CLibXMLHelper::xml2Base64String(doc, outString);

    // MessageBox(outString.c_str(),0,0);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();
    return outString;
}

STLString CMainFrame::GetXML3_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr chiTieuNode = NULL; // Thêm nút CHITIEU_CHITIET_THUOC
    xmlNodePtr dsachNode = NULL;   // Thêm nút DSACH_CHI_TIET_THUOC
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    // Tạo nút CHITIEU_CHITIET_THUOC và đặt nó làm nút gốc
    chiTieuNode =
        xmlNewNode(NULL, (const xmlChar *)"CHITIEU_CHITIET_DVKT_VTYT");
    xmlDocSetRootElement(doc, chiTieuNode);

    // Tạo nút DSACH_CHI_TIET_THUOC và thêm nó vào nút
    dsachNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_DVKT");
    xmlAddChild(chiTieuNode, dsachNode);
    szSQL.Format(
        _T("  SELECT ma_lk, stt, ma_dich_vu, ma_pttt_qt, ma_vat_tu, ma_nhom, ")
        _T("goi_vtyt, ten_vat_tu, ten_dich_vu, ma_xang_dau, ")
        _T("             don_vi_tinh, pham_vi, so_luong, don_gia_bv, ")
        _T("don_gia_bh, tt_thau, tyle_tt_dv, tyle_tt_bh, thanh_tien_bv, ")
        _T("             thanh_tien_bh, t_trantt, muc_huong, ")
        _T("t_nguonkhac_nsnn, t_nguonkhac_vtnn, t_nguonkhac_vttn, ")
        _T("t_nguonkhac_cl, ")
        _T("             t_nguonkhac, t_bntt, t_bncct, t_bhtt, ma_khoa, ")
        _T("ma_giuong, ma_bac_si, nguoi_thuc_hien, ma_benh, ma_benh_yhct, ")
        _T("             ngay_yl, ngay_th_yl, ngay_kq, ma_pttt, ")
        _T("vet_thuong_tp, pp_vo_cam, vi_tri_th_dvkt, ma_may, ma_hieu_sp, ")
        _T("tai_su_dung, du_phong")
        _T("      FROM bh_xml_3 where ma_lk='%s'"),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            dsachNode, _T("CHI_TIET_DVKT"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if ((szFieldName == _T("TEN_DICH_VU") ||
                 szFieldName == _T("TEN_VAT_TU")) &&
                !szData.IsEmpty())
            {
                if (szData.GetLength() > 0)
                {
                    AddCDataBlock(doc, childNode, szFieldName, szData);
                    continue;
                }
            }
            /*if(szFieldName== _T("TEN_DICH_VU") )
            {
                char * strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName,strOutUTF8M);

                    childNode1 = xmlNewChild( childNode, NULL, (const
            xmlChar*)strOutUTF8M, NULL );
                UTF8MBSTR::ConvertStringToUTF8(szData,strOutUTF8M);
                    cdata = xmlNewCDataBlock( doc, (const xmlChar*)strOutUTF8M,
            xmlStrlen((const xmlChar*)strOutUTF8M) ); xmlAddChild( childNode1,
            cdata );
            }*/

            /*if(szFieldName == _T("TRANGTHAIGUI")||
               szFieldName==_T("TEN_KHOABV")
                        ||szFieldName==_T("DON_GIA_BV")
                        ||szFieldName==_T("MA_DICH_VU_CS")
                        ||szFieldName==_T("MA_VAT_TU_CS")
                        ||szFieldName==_T("TEN_KHOABV")
                        || szFieldName== _T("TEN_DICH_VU")
                        || szFieldName== _T("ISTOWSTENT")
                        )
                continue;*/

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }
    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();
    return outString;
}

STLString CMainFrame::GetXML4_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr chiTieuNode = NULL; // Thêm nút CHITIEU_CHITIET_THUOC
    xmlNodePtr dsachNode = NULL;   // Thêm nút DSACH_CHI_TIET_THUOC

    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);
    szSQL.Format(
        _T(" SELECT ma_lk, stt, ma_dich_vu, ma_chi_so, ten_chi_so, gia_tri, ")
        _T("don_vi_do, mo_ta, ")
        _T("             ket_luan, ngay_kq, ma_bs_doc_kq, du_phong")
        _T("          FROM bh_xml_4 where ma_lk='%s' "),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);

    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    // Tạo nút CHITIEU_CHITIET_THUOC và đặt nó làm nút gốc
    chiTieuNode =
        xmlNewNode(NULL, (const xmlChar *)"CHITIEU_CHITIET_DICHVUCANLAMSANG");
    xmlDocSetRootElement(doc, chiTieuNode);

    // Tạo nút DSACH_CHI_TIET_THUOC và thêm nó vào nút
    dsachNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_CLS");
    xmlAddChild(chiTieuNode, dsachNode);

    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(dsachNode,
                                                      _T("CHI_TIET_CLS"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("TEN_CHI_SO") ||
                szFieldName == _T("GIA_TRI") || szFieldName == _T("MO_TA") ||
                szFieldName == _T("KET_LUAN"))
            {
                AddCDataBlock(doc, childNode, szFieldName, szData);
                continue;
            }
            /*if(szFieldName== _T("TEN_CHI_SO") || szFieldName== _T("GIA_TRI")
            ||szFieldName== _T("MO_TA")  ||szFieldName== _T("KET_LUAN")  )
            {
                char * strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName,strOutUTF8M);

                    childNode1 = xmlNewChild( childNode, NULL, (const
            xmlChar*)strOutUTF8M, NULL );
                UTF8MBSTR::ConvertStringToUTF8(szData,strOutUTF8M);
                    cdata = xmlNewCDataBlock( doc, (const xmlChar*)strOutUTF8M,
            xmlStrlen((const xmlChar*)strOutUTF8M) ); xmlAddChild( childNode1,
            cdata );
            }*/

            /*	if(szFieldName == _T("TRANGTHAIGUI")
                            ||szFieldName==_T("TIME_PROCESS")
                            ||szFieldName==_T("SO_PHIEU")
                            ||szFieldName==_T("NGAY_QUYETTOAN")
                            ||szFieldName==_T("MA_KHOABV")
                            ||szFieldName==_T("TEN_KHOABV")
                            ||szFieldName==_T("NGUOI_LIEN_HE")
                            ||szFieldName==_T("LOAI_GIAYTO_DIKEM")
                            ||szFieldName==_T("TEN_LOAI_GIAYTO")
                            ||szFieldName==_T("TEN_CHI_SO")
                            ||szFieldName==_T("GIA_TRI")
                            ||szFieldName==_T("MO_TA")
                            ||szFieldName==_T("KET_LUAN")
                )

                continue;*/

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();
    return outString;
}

STLString CMainFrame::GetXML5_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    xmlNodePtr chiTieuNode = NULL; // Thêm nút CHITIEU_CHITIET_THUOC
    xmlNodePtr dsachNode = NULL;   // Thêm nút DSACH_CHI_TIET_THUOC
    doc = xmlNewDoc(NULL);

    szSQL.Format(
        _T(" SELECT ma_lk, stt, dien_bien_ls, giai_doan_benh, hoi_chan, ")
        _T("phau_thuat, thoi_diem_dbls, nguoi_thuc_hien, du_phong")
        _T("          FROM bh_xml_5 where ma_lk ='%s' "),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    // Tạo nút CHITIEU_CHITIET_THUOC và đặt nó làm nút gốc
    chiTieuNode =
        xmlNewNode(NULL, (const xmlChar *)"CHITIEU_CHITIET_DIENBIENLAMSANG");
    xmlDocSetRootElement(doc, chiTieuNode);

    // Tạo nút DSACH_CHI_TIET_THUOC và thêm nó vào nút
    dsachNode =
        xmlNewNode(NULL, (const xmlChar *)"DSACH_CHI_TIET_DIEN_BIEN_BENH");
    xmlAddChild(chiTieuNode, dsachNode);

    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            dsachNode, _T("CHI_TIET_DIEN_BIEN_BENH"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN_LS") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                AddCDataBlock(doc, childNode, szFieldName, szData);
                continue;
            }
            /*	if(szFieldName== _T("DIEN_BIEN") || szFieldName== _T("HOI_CHAN")
               ||szFieldName== _T("PHAU_THUAT")  )
            {
                char * strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName,strOutUTF8M);

                            childNode1 = xmlNewChild( childNode, NULL, (const
               xmlChar*)strOutUTF8M, NULL );
                UTF8MBSTR::ConvertStringToUTF8(szData,strOutUTF8M);
                            cdata = xmlNewCDataBlock( doc, (const
               xmlChar*)strOutUTF8M, xmlStrlen((const xmlChar*)strOutUTF8M) );
                xmlAddChild( childNode1, cdata );
            }*/

            /*	if(szFieldName == _T("TRANGTHAIGUI")
                            ||szFieldName==_T("TIME_PROCESS")
                            ||szFieldName==_T("SO_PHIEU")
                            ||szFieldName==_T("NGAY_QUYETTOAN")
                            ||szFieldName==_T("MA_KHOABV")
                            ||szFieldName==_T("TEN_KHOABV")
                            ||szFieldName==_T("NGUOI_LIEN_HE")
                            ||szFieldName==_T("LOAI_GIAYTO_DIKEM")
                            ||szFieldName==_T("TEN_LOAI_GIAYTO")
                            || szFieldName== _T("DIEN_BIEN")
                            || szFieldName== _T("HOI_CHAN")
                            ||szFieldName== _T("PHAU_THUAT")
                )

                continue;
                */
            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML6_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr chiTieuNode = NULL; // Thêm nút CHITIEU_CHITIET_THUOC
    xmlNodePtr dsachNode = NULL;   // Thêm nút DSACH_CHI_TIET_THUOC

    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(
        _T(" SELECT ma_lk, stt, ma_the_bhyt, so_cccd, ngaykd_hiv, bddt_arv, ")
        _T("ma_phac_do_dieu_tri_bd, ")
        _T(" ma_bac_phac_do_bd, ma_lydo_dtri, loai_dtri_lao, phacdo_dtri_lao, ")
        _T("ngaybd_dtri_lao, ngaykt_dtri_lao, ")
        _T(" ma_lydo_xntl_vr, ngay_xn_tlvr, kq_xntl_vr, ngay_kq_xn_tlvr, ")
        _T("ma_loai_bn, ma_tinh_trang_dk, lan_xn_pcr,  ")
        _T(" ngay_xn_pcr, ngay_kq_xn_pcr, ma_kq_xn_pcr, ")
        _T("ngay_nhan_tt_mang_thai, ngay_bat_dau_dt_ctx, ma_xu_tri, ")
        _T(" ngay_bat_dau_xu_tri, ngay_ket_thuc_xu_tri, ma_phac_do_dieu_tri, ")
        _T("ma_bac_phac_do, so_ngay_cap_thuoc_arv, du_phong")
        _T(" 	FROM bh_xml_6  where ma_lk = '%s' "),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    // Tạo nút CHITIEU_CHITIET_THUOC và đặt nó làm nút gốc
    chiTieuNode = xmlNewNode(
        NULL, (const xmlChar
                   *)"CHI_TIEU_HO_SO_BENH_AN_CHAM_SOC_VA_DIEU_TRI_HIV_AIDS");
    xmlDocSetRootElement(doc, chiTieuNode);

    // Tạo nút DSACH_CHI_TIET_THUOC và thêm nó vào nút
    dsachNode = xmlNewNode(
        NULL,
        (const xmlChar *)"DSACH_HO_SO_BENH_AN_CHAM_SOC_VA_DIEU_TRI_HIV_AIDS");
    xmlAddChild(chiTieuNode, dsachNode);

    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            dsachNode, _T("HO_SO_BENH_AN_CHAM_SOC_VA_DIEU_TRI_HIV_AIDS"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(childNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            /*if(szFieldName == _T("TRANGTHAIGUI")
                        ||szFieldName==_T("TIME_PROCESS")
                        ||szFieldName==_T("SO_PHIEU")
                        ||szFieldName==_T("NGAY_QUYETTOAN")
                        ||szFieldName==_T("MA_KHOABV")
                        ||szFieldName==_T("TEN_KHOABV")
                        ||szFieldName==_T("NGUOI_LIEN_HE")
                        ||szFieldName==_T("LOAI_GIAYTO_DIKEM")
                        ||szFieldName==_T("TEN_LOAI_GIAYTO")
                        || szFieldName== _T("DIEN_BIEN")
                        || szFieldName== _T("HOI_CHAN")
                        ||szFieldName== _T("PHAU_THUAT")
            )

            continue;
            */
            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML7_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr chiTieuNode = NULL; // Thêm nút CHITIEU_CHITIET_THUOC
    xmlNodePtr dsachNode = NULL;   // Thêm nút DSACH_CHI_TIET_THUOC

    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(
        _T(" SELECT ma_lk, so_luu_tru, ma_yte, ma_khoa_rv, ngay_vao, ngay_ra, ")
        _T("ma_dinh_chi_thai, nguyennhan_dinhchi, ")
        _T(" 			thoigian_dinhchi, tuoi_thai, chan_doan_rv, ")
        _T("pp_dieutri, ghi_chu, ma_ttdv, ma_bs, ten_bs, ngay_ct, ma_cha, ")
        _T(" 			ma_me, ma_the_tam, ho_ten_cha, ho_ten_me, ")
        _T("so_ngay_nghi, ngoaitru_tungay, ngoaitru_denngay,du_phong")
        _T(" 			FROM bh_xml_7 where ma_lk= '%s'"),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    rootNode =
        xmlNewNode(NULL, (const xmlChar *)"CHI_TIEU_DU_LIEU_GIAY_RA_VIEN");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(rootNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            childNode1 = CLibXMLHelper::CreateChildElement(
                rootNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML8_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(_T("SELECT * FROM bh_xml_8 WHERE ma_lk = '%s'"), szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    rootNode = xmlNewNode(
        NULL, (const xmlChar *)"CHI_TIEU_DU_LIEU_TOM_TAT_HO_SO_BENH_AN");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        // childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_TOM_TAT_BENH_AN"),NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(childNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TRANGTHAI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("TEN_LOAI_GIAYTO") ||
                szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT" || szFieldName == _T("STT")))

                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                rootNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML9_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    xmlNodePtr chiTieuNode = NULL; // Thêm nút CHITIEU_CHITIET_THUOC
    xmlNodePtr dsachNode = NULL;   // Thêm nút DSACH_CHI_TIET_THUOC
    doc = xmlNewDoc(NULL);

    szSQL.Format(_T("SELECT MA_LK, MA_BHXH_NND, MA_THE_NND, HO_TEN_NND, ")
                 _T("NGAYSINH_NND, MA_DANTOC_NND, SO_CCCD_NND, ")
                 _T(" NGAYCAP_CCCD_NND, NOICAP_CCCD_NND, NOI_CU_TRU_NND, ")
                 _T("MA_QUOCTICH, MATINH_CU_TRU, MAHUYEN_CU_TRU, ")
                 _T(" MAXA_CU_TRU, HO_TEN_CHA, MA_THE_TAM, HO_TEN_CON, ")
                 _T("GIOI_TINH_CON, SO_CON, LAN_SINH, SO_CON_SONG, ")
                 _T(" CAN_NANG_CON, NGAY_SINH_CON, NOI_SINH_CON, ")
                 _T("TINH_TRANG_CON, SINHCON_PHAUTHUAT, SINHCON_DUOI32TUAN, ")
                 _T(" GHI_CHU, NGUOI_DO_DE, NGUOI_GHI_PHIEU, NGAY_CT, SO, ")
                 _T("QUYEN_SO, MA_TTDV, DU_PHONG ")
                 _T(" FROM bh_xml_9 WHERE ma_lk = '%s'"),
                 szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    // Tạo nút CHITIEU_CHITIET_THUOC và đặt nó làm nút gốc
    chiTieuNode =
        xmlNewNode(NULL, (const xmlChar *)"CHI_TIEU_DU_LIEU_GIAY_CHUNG_SINH");
    xmlDocSetRootElement(doc, chiTieuNode);

    // Tạo nút DSACH_CHI_TIET_THUOC và thêm nó vào nút
    dsachNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_GIAYCHUNGSINH");
    xmlAddChild(chiTieuNode, dsachNode);

    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            dsachNode, _T("DU_LIEU_GIAY_CHUNG_SINH"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            /*	if(szFieldName== _T("DIEN_BIEN") || szFieldName== _T("HOI_CHAN")
               ||szFieldName== _T("PHAU_THUAT")  )
                {
                    char * strOutUTF8M;
                    UTF8MBSTR::ConvertStringToUTF8(szFieldName,strOutUTF8M);

                    childNode1 = xmlNewChild( childNode, NULL, (const
               xmlChar*)strOutUTF8M, NULL );
                    UTF8MBSTR::ConvertStringToUTF8(szData,strOutUTF8M);
                    cdata = xmlNewCDataBlock( doc, (const xmlChar*)strOutUTF8M,
               xmlStrlen((const xmlChar*)strOutUTF8M) ); xmlAddChild(
               childNode1, cdata );
                }*/

            /*	if(szFieldName == _T("TRANGTHAIGUI")
                            ||szFieldName==_T("TIME_PROCESS")
                            ||szFieldName==_T("SO_PHIEU")
                            ||szFieldName==_T("NGAY_QUYETTOAN")
                            ||szFieldName==_T("MA_KHOABV")
                            ||szFieldName==_T("TEN_KHOABV")
                            ||szFieldName==_T("NGUOI_LIEN_HE")
                            ||szFieldName==_T("LOAI_GIAYTO_DIKEM")
                            ||szFieldName==_T("TEN_LOAI_GIAYTO")
                            || szFieldName== _T("DIEN_BIEN")
                            || szFieldName== _T("HOI_CHAN")
                            ||szFieldName== _T("PHAU_THUAT")
                )

                continue;
                */
            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML10_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(_T("SELECT * FROM bh_xml_10 WHERE ma_lk = '%s'"), szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    rootNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_NGHI_DUONG_THAI");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, _T("CHI_TIET_NGHI_DUONG_THAI"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(childNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("TEN_LOAI_GIAYTO") ||
                szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))

                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML11_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(
        _T("SELECT MA_LK, SO_CT, SO_SERI, SO_KCB, DON_VI, MA_BHXH, ")
        _T("MA_THE_BHYT, CHAN_DOAN_RV, PP_DIEUTRI, ")
        _T(" MA_DINH_CHI_THAI, NGUYENNHAN_DINHCHI, TUOI_THAI, SO_NGAY_NGHI, ")
        _T("TU_NGAY, DEN_NGAY, HO_TEN_CHA,  ")
        _T(" HO_TEN_ME, MA_TTDV, MA_BS, NGAY_CT, MA_THE_TAM, MAU_SO, DU_PHONG ")
        _T(" FROM bh_xml_11 WHERE ma_lk = '%s'"),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    rootNode =
        xmlNewNode(NULL, (const xmlChar *)"CHI_TIEU_DU_LIEU_GIAY_CHUNG_NHAN_"
                                          "NGHI_VIEC_HUONG_BAO_HIEM_XA_HOI");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        // childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_CHUNG_NHAN_NGHI_VIEC"),NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(childNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("TEN_LOAI_GIAYTO") ||
                szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))

                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                rootNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML12_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(_T("SELECT * FROM bh_xml_12 WHERE ma_lk = '%s'"), szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    rootNode = xmlNewNode(NULL, (const xmlChar *)"DSACH_GIAM_DINH_Y_KHOA");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        childNode = CLibXMLHelper::CreateChildElement(
            rootNode, _T("CHI_TIET_GIAM_DINH_Y_KHOA"), NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(childNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("TEN_LOAI_GIAYTO") ||
                szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))

                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                childNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}
STLString CMainFrame::GetXML13_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(
        _T("SELECT ")
        _T("MA_LK,SO_HOSO,SO_CHUYENTUYEN,GIAY_CHUYEN_TUYEN,MA_CSKCB,MA_NOI_DI,")
        _T("MA_NOI_DEN,HO_TEN,NGAY_SINH,GIOI_TINH, ")
        _T(" MA_QUOCTICH,MA_DANTOC,MA_NGHE_NGHIEP,DIA_CHI,MA_THE_BHYT,GT_THE_")
        _T("DEN,NGAY_VAO,NGAY_VAO_NOI_TRU,NGAY_RA,DAU_HIEU_LS, ")
        _T(" CHAN_DOAN_RV,QT_BENHLY,TOMTAT_KQ,PP_DIEUTRI,MA_BENH_CHINH,MA_")
        _T("BENH_KT,MA_BENH_YHCT,TEN_DICH_VU,TEN_THUOC, ")
        _T(" PP_DIEU_TRI,MA_LOAI_RV,MA_LYDO_CT,HUONG_DIEU_TRI,PHUONGTIEN_VC,")
        _T("HOTEN_NGUOI_HT,CHUCDANH_NGUOI_HT,MA_BAC_SI,MA_TTDV,DU_PHONG ")
        _T(" FROM bh_xml_13 WHERE ma_lk = '%s'"),
        szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();
    }

    rootNode = xmlNewNode(NULL, (const xmlChar *)"CHI_TIEU_GIAYCHUYENTUYEN");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        // childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_CHUNG_NHAN_NGHI_VIEC"),NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(childNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("TEN_LOAI_GIAYTO") ||
                szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))

                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                rootNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

STLString CMainFrame::GetXML14_Base64(CString szMa_lk)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr node = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;
    xmlNodePtr childNode1 = NULL;
    xmlNodePtr childNode2 = NULL;
    xmlNodePtr childNode3 = NULL;
    xmlNodePtr cdata = NULL;
    doc = xmlNewDoc(NULL);

    szSQL.Format(_T("SELECT MA_LK, SO_GIAYHEN_KL, MA_CSKCB, HO_TEN, ")
                 _T("NGAY_SINH, GIOI_TINH, DIA_CHI, MA_THE_BHYT, ")
                 _T(" GT_THE_DEN, NGAY_VAO, NGAY_VAO_NOI_TRU, NGAY_RA, ")
                 _T("NGAY_HEN_KL, CHAN_DOAN_RV, MA_BENH_CHINH,  ")
                 _T(" MA_BENH_KT, MA_BENH_YHCT, MA_DOITUONG_KCB, MA_BAC_SI, ")
                 _T("MA_TTDV, NGAY_CT, DU_PHONG  ")
                 _T(" FROM bh_xml_14 WHERE ma_lk = '%s'"),
                 szMa_lk);
    int nCount = rs.ExecSQL(szSQL);
    if (nCount <= 0)
    {
        tmpStr.Empty();
        return STLString();

    }

    rootNode = xmlNewNode(NULL, (const xmlChar *)"CHI_TIEU_GIAYHEN_KHAMLAI");
    xmlDocSetRootElement(doc, rootNode);
    // tong hop
    // node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

    /*if(!rs.IsEOF())
    {
        xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
    }*/
    while (!rs.IsEOF())
    {
        // childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_CHUNG_NHAN_NGHI_VIEC"),NULL);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szFieldName = rs.GetFieldName(i);
            rs.GetValue(szFieldName, szData);
            szFieldName.MakeUpper();
            if (szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))
            {
                char *strOutUTF8M;
                UTF8MBSTR::ConvertStringToUTF8(szFieldName, strOutUTF8M);

                childNode1 = xmlNewChild(childNode, NULL,
                                         (const xmlChar *)strOutUTF8M, NULL);
                UTF8MBSTR::ConvertStringToUTF8(szData, strOutUTF8M);
                cdata =
                    xmlNewCDataBlock(doc, (const xmlChar *)strOutUTF8M,
                                     xmlStrlen((const xmlChar *)strOutUTF8M));
                xmlAddChild(childNode1, cdata);
            }

            if (szFieldName == _T("TRANGTHAIGUI") ||
                szFieldName == _T("TIME_PROCESS") ||
                szFieldName == _T("SO_PHIEU") ||
                szFieldName == _T("NGAY_QUYETTOAN") ||
                szFieldName == _T("MA_KHOABV") ||
                szFieldName == _T("TEN_KHOABV") ||
                szFieldName == _T("NGUOI_LIEN_HE") ||
                szFieldName == _T("LOAI_GIAYTO_DIKEM") ||
                szFieldName == _T("TEN_LOAI_GIAYTO") ||
                szFieldName == _T("DIEN_BIEN") ||
                szFieldName == _T("HOI_CHAN") ||
                szFieldName == _T("PHAU_THUAT"))

                continue;

            childNode1 = CLibXMLHelper::CreateChildElement(
                rootNode, (LPCTSTR)szFieldName, szData);
        }
        rs.MoveNext();
    }

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    STLString outString;
    CLibXMLHelper::xml2Base64String(doc, outString);

    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

std::string CMainFrame::GetXML0_Base64(CString szMaLK)
{
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, tmpStr, Ma_lk, szFieldName, szData;
    xmlDocPtr doc = NULL;
    xmlNodePtr rootNode = NULL;
    xmlNodePtr parentNode = NULL;
    xmlNodePtr xmlNode = NULL;
    xmlNodePtr childNode = NULL;

    doc = xmlNewDoc(NULL);

    rootNode = xmlNewNode(NULL, (const xmlChar *)"CHI_TIEU_TRANG_THAI_KCB");
    xmlDocSetRootElement(doc, rootNode);
    CLibXMLHelper::xmlEnableWriteHeaderContent(0);

    childNode =
        CLibXMLHelper::CreateChildElement(rootNode, _T("DSACH_TRANG_THAI_KCB"));
    parentNode = childNode;
    childNode =
        CLibXMLHelper::CreateChildElement(parentNode, _T("TRANG_THAI_KCB"));
    parentNode = childNode;
    szSQL.Format(_T(" SELECT *")
                 _T("   FROM bh_xml_0")
                 _T("  WHERE ma_lk = '%s'"),
                 szMaLK);
    rs.ExecSQL(szSQL);

    for (int i = 0; i < rs.GetFieldCount(); i++)
    {
        szFieldName = rs.GetFieldName(i);
        if (szFieldName == _T("TRANGTHAI"))
            continue;
        rs.GetValue(szFieldName, szData);
        szFieldName.MakeUpper();

        childNode = CLibXMLHelper::CreateChildElement(
            parentNode, (LPCTSTR)szFieldName, szData);
    }
    childNode = CLibXMLHelper::CreateChildElement(rootNode, _T("CHUKYDONVI"));

    CLibXMLHelper::xmlEnableWriteHeaderContent(0);
    std::string outString;
    // CLibXMLHelper::xml2Base64String(doc, outString);
    CLibXMLHelper::xml2String(doc, outString);
    xmlFreeDoc(doc);

    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();

    return outString;
}

int CMainFrame::WriteXML0(CString szMaLK)
{
    BeginWaitCursor();
    UpdateData(true);
    CRecord rs(&m_db), crs(&m_db);
    CString szSQL, szCardNo, tmpStr, szWhere;
    CString szFieldName, szData;
    CString szExportPath, szFile;
    int nCount = 0;
    szExportPath = AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE130"),
                                                 _T("Drirectory"));
    szExportPath.Replace(_T("\\130"), _T("\\checkin"));
    // szExportPath = _T("D:\\Programs\\V108\\Bin\\Data\\XML\\XML0");
    CString szFileName;

    tmpStr = GetSysDateTime().Left(11);
    tmpStr.Replace(_T("-"), _T(""));
    tmpStr.Replace(_T("/"), _T(""));
    tmpStr.Replace(_T(" "), _T(""));
    tmpStr.Replace(_T(":"), _T(""));

    szFileName.Format(_T("%s-%s"), szMaLK, tmpStr);

    szFile.Format(_T("%s\\HS_XML130-%s.xml"), szExportPath, szFileName);
    szFile.MakeUpper();
    char szPath[MAX_PATH];
    memset(szPath, 0, MAX_PATH);
    ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath,
                          MAX_PATH, 0, 0);
    std::wfstream fs;
    fs.open(szPath, std::fstream::out | std::fstream::trunc);
    // fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
    szSQL.Format(_T("SELECT ma_lk,ma_lk  as docno from bh_xml_0 ")
                 _T(" where ma_lk='%s'	"),
                 szMaLK);
    rs.ExecSQL(szSQL);

    std::string strData;

    while (!rs.IsEOF())
    {
        rs.GetValue(_T("ma_lk"), szMaLK);
        strData.clear();
        strData = GetXML0_Base64(szMaLK);
        fs << strData.c_str();
        strData.clear();
        CString szSQLItem;
        szSQLItem.Format(
            _T("Update bh_xml_0 set trangthai='S' where ma_lk='%s' "), szMaLK);
        ExecSQL(szSQLItem);
        nCount++;
        rs.MoveNext();
    }
    fs.close();
    EndWaitCursor();
    return nCount;
}

void CMainFrame::OnDestroy()
{
    m_autoSync.Stop();
    CGuiMainFrame::OnDestroy();

    // TODO: Add your message handler code here
}

bool CMainFrame::Sign(CString szFilePath)
{
    bool ret = true;
    CString szFileName, szFileTitle, szParentPath, szDataFilePath, szOutputFile, szBase64;
    TCHAR szCurrentDir[MAX_PATH], path[MAX_PATH];

    szFileName = PathFindFileName(szFilePath);
    _tcscpy(path, szFileName);
    PathRemoveExtension(path);
    szFileTitle = path;

    _tcscpy(path, szFilePath);
    PathRemoveFileSpec(path);
    szParentPath = path;
    szOutputFile.Format(_T("%s\\HS_XML130-%s_Signed.xml"), szParentPath,
                        szFileName);

    if (!::GetCurrentDirectory(MAX_PATH, szCurrentDir))
    {
        ShowMessageBox(_T("Không thể lấy được đường dẫn thư mục hiện tại."));
        EndWaitCursor();
        return -1;
    }
    szDataFilePath.Format(L"%s\\Data\\%s", szCurrentDir, szFileName);

    BOOL bCopy = ::CopyFile(szFilePath, szDataFilePath, FALSE);
    if (!bCopy)
    {
        DWORD dwError = GetLastError();
        CString szErrorMsg;
        szErrorMsg.Format(_T("Sao chép file thất bại. Mã lỗi: %ld"), dwError);
        ShowMessageBox(szErrorMsg);
        // Không return ở đây để tiếp tục quá trình ký số, nhưng bạn có thể
        // tùy chỉnh theo nhu cầu
    }

    ret = m_wndSign.SignatureXMLFile(_T("http://localhost:8181/sign/xml/4750"),
                                     szFileName, szOutputFile, szBase64);
    if (!ret)
    {
        ShowMessageBox(_T("Ký số thất bại"));
        return ret;
    }
    else
    {
        // Neu Ky thanh cong thi luu cai file da ky vao 1 file va move cai
        // bản gốc vào 1 thư mục bên trong

        if (!szBase64.IsEmpty())
        {
            string pdfData = fml::WideStringToUtf8(wstring(szBase64));
            string strDecoded = DecodeBase64(pdfData);
            ::DeleteFile(szOutputFile);

            CFile file(szOutputFile, CFile::modeCreate | CFile::modeWrite);
            file.Write((void *)strDecoded.c_str(), strDecoded.length());
            file.Close();

            // move file goc vao thu muc FILE_GOC
            bool moveRes = MoveFileToFileGoc(szParentPath, szFileName);
            if (!moveRes)
            {
                _tprintf(_T("Di chuyển tệp tin gốc thất bại"));
            }
            else
            {
                _tprintf(_T("Di chuyển tệp tin gốc thành công"));
            }
        }
    }
    return ret;
}