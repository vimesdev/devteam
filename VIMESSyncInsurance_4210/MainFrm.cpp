// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"

#include ".\mainfrm.h"
#include "libxml/LibXMLHelper.h"
#include "libxml/UTF8Conv.h"
#pragma comment(lib, "../lib/libxml.lib")
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
#include "utf8string.h"
#include "AutoSync.h"
#include "INSFeeNameEditor.h"
#include "ISDataManipulation.h"

///////////////////////////
//Support them function str2utf8 dung convert chuoi unicode sang chuoi utf8
//Neu dung ham nay se khong can giai phong bo nho
//Cach dung
// std::string strUtf8 = str2utf8(L"Chuoi unicode");
// printf("\r\nutf8=", strUtf8.c_str());
/////////////////////////////////////////
void str2utf8(LPCTSTR lpszData, std::string& strDest)
{
	int size = _tcslen(lpszData);
	if(lpszData == NULL || size == 0)
	{
		strDest = "";
		return;
	}
	int byte  = ::WideCharToMultiByte(CP_UTF8, 0, lpszData, size, NULL, 0, NULL, NULL);
	char *utf8 = new char[byte+sizeof(char)];
	::WideCharToMultiByte(CP_UTF8, 0, lpszData, size, utf8, byte, NULL, NULL);
	utf8[byte] = '\0';
	strDest = utf8;
	printf("\r\n%s", strDest.c_str());
}

CStringA UTF8Encode(LPCTSTR lpszData, int nLength)
{
	CStringA szString;
#ifdef UNICODE
	int nByte = ::WideCharToMultiByte(CP_UTF8, 0, lpszData, nLength, NULL, 0, 0, 0);
	::WideCharToMultiByte(CP_UTF8, 0, lpszData, nLength, szString.GetBufferSetLength(nByte), nByte, 0, 0);
	szString.ReleaseBuffer();
#else
	szString = lpszData;
#endif
	return szString;
}



bool AddCDataBlock(xmlDocPtr doc, xmlNodePtr node, CString szFieldName, CString szData)
{
	if(doc == NULL || node == NULL)
		return false;
	std::string strData;
	xmlNodePtr cdata= NULL;
	xmlNodePtr childNode1=NULL;
	char * strOutUTF8M=NULL;
	char field[128];
	int byte = ::WideCharToMultiByte(CP_UTF8, 0, szFieldName, _tcslen(szFieldName), field, 128, NULL, NULL);
	field[byte] = '\0';
	childNode1 = xmlNewChild( node, NULL, (const xmlChar*)field, NULL );
	byte = ::WideCharToMultiByte(CP_UTF8, 0, szData, _tcslen(szData), NULL, 0, NULL, NULL);
	strOutUTF8M = new char[byte+sizeof(char)];
	::WideCharToMultiByte(CP_UTF8, 0, szData, _tcslen(szData), strOutUTF8M, byte, NULL, NULL);
	strOutUTF8M[byte] = '\0';
	cdata = xmlNewCDataBlock( doc, (const xmlChar*)strOutUTF8M, xmlStrlen((const xmlChar*)strOutUTF8M) );
	xmlAddChild( childNode1, cdata );
	delete strOutUTF8M;
	return true;
}

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleID = _T("ISYNC");
	m_szVersion = _T("1.0");

	m_szSize = CSize(1024, 728);

	m_pSession = NULL;
	m_pFtp = NULL;
	m_szCurrentDir =_T("/");

	
}

CMainFrame::~CMainFrame()
{
	if (m_pFtp != NULL) 
	{
		m_pFtp->Close();
		delete m_pFtp;
	}
	if(m_pSession)
	{
		m_pSession->Close();
		delete m_pSession;
	}
	m_autoSync.Stop();

}


IMPLEMENT_DYNAMIC(CMainFrame, CGuiMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CGuiMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_CHECKIN, OnFileCheckin)
	ON_COMMAND(ID_FILE_CHECKOUT, OnFileCheckout)
	ON_WM_TIMER()
	ON_COMMAND(ID_FILE_AUTOSYSXML, OnFileAutosys)
	
	ON_COMMAND(ID_FILE_INSURANCENAMEEDIT, OnFileInsurancenameedit)
END_MESSAGE_MAP()


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CGuiMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;	
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	//Check Log in
	szSQL.Format(_T("HMS_CHECK_LOGIN_XML_MODULE('%s') "),pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Chỉ user của tổ đẩy bảo hiểm mới được sử dụng module này!"), MB_ICONERROR);
		return -1;
	}

	//ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX|WS_MINIMIZEBOX, 0);
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	CGuiView *newReport = NULL;



	//m_wndSysInsuranceView.OnInitializeComponents();
	m_wndSysInsuranceView.Create(GetPane());
	m_wndPaperView.Create(GetPane());
	CGuiView * pView = new CISDataManipulation(GetPane());
	pView->Create(GetPane());
	AddView(_T("Patients List"), &m_wndSysInsuranceView);
	AddView(_T("Paper Transfer"), &m_wndPaperView);
	
	AddView(_T("Data Modifier"), pView);
	CenterWindow();
	::GetCurrentDirectory(MAX_PATH, m_szPath.GetBufferSetLength(MAX_PATH));
	m_szPath.ReleaseBuffer();

	bIsAutoSysXML= false;
	bIsAutoCheckout= false;
	m_autoSync.Init(this);
	m_autoSync.Run();

	//SetTimer(1, 5000, NULL);
	//SetTimer(2, 5000, NULL);
	//SetTimer(3, 5000, NULL);

	//m_pSession = new CInternetSession(_T("VIMES_FTP_SESSION"));
	//if(m_pSession) _tprintf(_T("\r\nNew Session"));
	//m_szUser = _T("bhxh");
	//m_szPassword = _T("bhxh");
	

	ConnectFtp();
	((CGuiTabCtrl*) GetPane())->SetCurSel(0);
	return 0;
}


void CMainFrame::OnInitializes(){
	CRecord rs(&m_db);
	CString szSQL;


	szSQL.Format(_T("select substr(sc_id,1,2) as provid, sc_id as id,sc_name as name,sc_ceo from sys_company "));
	rs.ExecSQL(szSQL);
	m_szProviID=rs.GetValue(_T("provid"));
	m_szCompany=rs.GetValue(_T("id"));
	m_szCompanyName=rs.GetValue(_T("name"));
	m_szCeoName=rs.GetValue(_T("name"));
}



void CMainFrame::OnFileCheckin()
{
	CString szSQL, tmpStr, szCardNo;
	CRecord rs(&m_db);
	long nDocumentNo = 90201698;

	
	CString szMaLK;

	szSQL.Format(_T("SELECT * FROM bh_thongtinvaovien WHERE trangthaigui='N' "));

	rs.ExecSQL(szSQL);
//_msg(_T("%d"), rs.GetRecordCount());
	while(!rs.IsEOF())
	{
		
		xmlDocPtr doc = NULL;
		xmlNodePtr rootNode = NULL;
		xmlNodePtr node = NULL;
		xmlNodePtr nodeFound = NULL;
		doc = xmlNewDoc( (const xmlChar*)"1.0");
			
		rootNode = xmlNewNode( NULL , (const xmlChar*) "CHECKIN");
		xmlDocSetRootElement( doc , rootNode );

		rs.GetValue(_T("MATHE"), szCardNo);
		rs.GetValue(_T("MA_LK"), szMaLK);

		CString szFieldName, szData;
		for (int i =0; i < rs.GetFieldCount();i++)
		{
			szFieldName = rs.GetFieldName(i);
			rs.GetValue(szFieldName, szData);
			szFieldName.MakeUpper();
			node = CLibXMLHelper::CreateChildElement( rootNode , (LPCTSTR) szFieldName, szData); 

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
		int nRes = ::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, 1024, 0, 0);
//		_tprintf(_T("\n%d-%d-|%s|"), nRes, szFile.GetLength(), szFile);
//		_tprintf(_T("\n||%s||"), CString(szPath));
		int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8" , 1 ); 
		if (Ret > 0)
		{
			szSQL.Format(_T("UPDATE bh_thongtinvaovien SET trangthaigui='Y' WHERE ma_lk='%s' "), szMaLK);
			ExecSQL(szSQL);
		}
		xmlFreeDoc( doc );
		
		rs.MoveNext();

	}
}

void CMainFrame::OnFileCheckout()
{
	CRecord rs(&m_db), crs(&m_db);
	CString szSQL, szCardNo, tmpStr, szMaLK;
	szSQL.Format(_T("SELECT * FROM bh_thongtinbenhnhan WHERE trangthaigui = 'N' LIMIT 10"));
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
		doc = xmlNewDoc( (const xmlChar*)"1.0");
			
		rootNode = xmlNewNode( NULL , (const xmlChar*) "CHECKOUT");
		xmlDocSetRootElement( doc , rootNode );


	//XUAT THONG TIN BENH NHAN
		//xmlNode = CLibXMLHelper::CreateChildElement( rootNode , _T("THONGTINBENHNHAN"), NULL); 

		szSQL.Format(_T("SELECT * FROM bh_thongtinbenhnhan WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);

		if (!crs.IsEOF())
		{

			crs.GetValue(_T("MATHE"), szCardNo);
			WriteXMLData(_T("THONGTINBENHNHAN"), &crs, rootNode);

		}


	//XUAT THONG TIN CHUYEN TUYEN
		//xmlNode = CLibXMLHelper::CreateChildElement( rootNode , _T("CHUYENTUYEN"), NULL); 

		szSQL.Format(_T("SELECT * FROM bh_chuyentuyen WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);

		if(!crs.IsEOF())
		{
			xmlNode = (xmlNodePtr) WriteXMLData(_T("CHUYENTUYEN"), &crs, rootNode);
		}
		//DANH SACH CHUYEN VIEN 
		szSQL.Format(_T("SELECT * FROM bh_dschuyenvien WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("DSCHUYENVIEN"), _T(""));
		while (!crs.IsEOF())
		{
			CString szFieldName, szData;
			WriteXMLData(_T("DSCHUYENVIEN"), &crs, xmlNode);
			rs.MoveNext();
		}

		//THONG TIN CHI TIET
		xmlNode = CLibXMLHelper::CreateChildElement(rootNode,  _T("THONGTINCHITIET"), _T(""));
		//tong hop
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
		szSQL.Format(_T("SELECT * FROM bh_thongtinchitiet_tonghop WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);
		if(!crs.IsEOF())
		{
			crs.GetValue(_T("MA_THE"), szCardNo);
			WriteXMLData(_T("tonghop"), &crs, xmlNode);
		}
		//BANG_CTTHUOC
		childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_CTTHUOC"), _T(""));
		szSQL.Format(_T("SELECT * FROM bh_bang_ctthuoc WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);
		while (!crs.IsEOF())
		{
			WriteXMLData(_T("CTTHUOC"), &crs, childNode);
			crs.MoveNext();
		}
		//BANG_CTDV
		childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_CTDV"), _T(""));
		szSQL.Format(_T("SELECT * FROM bh_bang_ctdv WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);
		while (!crs.IsEOF())
		{
			WriteXMLData(_T("CTDV"), &crs, childNode);
			crs.MoveNext();
		}
		//BANG_CTCLS
		childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_CT_CLS"), _T(""));
		szSQL.Format(_T("SELECT * FROM bh_bang_ct_cls WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);
		while (!crs.IsEOF())
		{
			WriteXMLData(_T("CLS"), &crs, childNode);
			crs.MoveNext();
		}
		//BANG_DBBENH
		childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_DienBienBenh"), _T(""));
		//node = CLibXMLHelper::CreateChildElement(node, _T("DienBienBenh"), _T(""));
		szSQL.Format(_T("SELECT * FROM bh_bang_dienbienbenh WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);
		if(!crs.IsEOF())
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
		szFile.Format(_T("%s\\checkout\\%s_%s_CheckOut.xml"), m_szPath, tmpStr, szCardNo);
		szFile.MakeUpper();
		char szPath[MAX_PATH];
		memset(szPath, 0, MAX_PATH);
		::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, MAX_PATH, 0, 0);
		int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8" , 1 ); 
//_tprintf(_T("\r\n%d"), Ret);
		if(Ret > 0)
		{

			szSQL.Format(_T("UPDATE bh_thongtinbenhnhan SET trangthaigui='Y' WHERE ma_lk='%s' "), szMaLK);
			ExecSQL(szSQL);
		}

		xmlFreeDoc( doc );
		rs.MoveNext();
	}
}

bool CMainFrame::WriteCheckIn(){
	CRecord rs(&m_db);
	CString szSQL;
	CString szMaLK;
	CString szCardNo;
	CString tmpStr;


	szSQL.Format(_T("select * from bh_thongtinvaovien where trangthaigui='N' "));
	rs.ExecSQL(szSQL);
	if(rs.GetRecordCount() <= 0)
		return false;

	while(!rs.IsEOF())
	{

		xmlDocPtr doc = NULL;
		xmlNodePtr rootNode = NULL;
		xmlNodePtr node = NULL;
		xmlNodePtr nodeFound = NULL;
		xmlNodePtr curNode = NULL;

		doc = xmlNewDoc( (const xmlChar*)"1.0");

		rootNode = xmlNewNode( NULL , (const xmlChar*) "CHECKIN");
		xmlDocSetRootElement( doc , rootNode );

		rs.GetValue(_T("MATHE"), szCardNo);
		rs.GetValue(_T("MA_LK"), szMaLK);

		CString szFieldName, szData;
		for (int i =0; i < rs.GetFieldCount();i++)
		{
			szFieldName = rs.GetFieldName(i);
			rs.GetValue(szFieldName, szData);
			szFieldName.MakeUpper();
			node = CLibXMLHelper::CreateChildElement( rootNode , (LPCTSTR)szFieldName, szData); 

		}

		// Save the xml file with UTF-8 encoding
		tmpStr = GetSysDateTime();
		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));
		CString szFile;
		szFile.Format(_T("%s\\checkin\\%s_%s_CheckIn.xml"), m_szPath, tmpStr, szCardNo);
		szFile.MakeUpper();
		char szPath[1024];
		memset(szPath, 0, 1024);
		::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, 1024, 0, 0);
		int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8" , 1 ); 
		if (Ret > 0)
		{
			szSQL.Format(_T("UPDATE bh_thongtinvaovien SET trangthaigui='Y' WHERE ma_lk='%s' "), szMaLK);
			ExecSQL(szSQL);
		}
		
		rs.MoveNext();

		xmlFreeDoc( doc );

	}
	
	return true;
}


bool CMainFrame::OnDeleteCheckOut(CString  szMaLK)
{
	/*CRecord rs(&m_db);
	CString szSQL,tmpStr;
	int nCount=0;
	//szMaLK=Lay_MaLK(nDocumentNo);

	szSQL.Format(_T("UPDATE bh_thongtinchitiet_tonghop set trangthaigui='N' where ma_lk='%s'"),szMaLK);
	//_tprintf(_T("%s"),szSQL);
	nCount=rs.ExecSQL(szSQL);
	//_tprintf (_T("%d"),nCount);
	//szSQL.Format(_T("('%s') "),szMaLK);
	//_tprintf(_T("%s"),szSQL);
	//tmpStr=ExecDML(szSQL);
	//nCount=ToInt(tmpStr);
	if (nCount <=0)

		return false;
	else
		return true;*/

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&m_db);
	CString szSQL,tmpStr;
	int nCount=0;
	//szMaLK=Lay_MaLK(nDocumentNo);

	//szSQL.Format(_T("UPDATE bh_thongtinchitiet_tonghop set trangthaigui='N' where ma_lk='%s'"),szMaLK);
	
	szSQL.Format(_T("HMS_UNAPPROVE_XML_PATIENT('%s') "),szMaLK);
	nCount = str2int(pMF->ExecDML(szSQL));

	//_tprintf(_T("%s"),szSQL);
	//nCount=rs.ExecSQL(szSQL);
	//_tprintf (_T("%d"),nCount);
	//szSQL.Format(_T("('%s') "),szMaLK);
	//_tprintf(_T("%s"),szSQL);
	//tmpStr=ExecDML(szSQL);
	//nCount=ToInt(tmpStr);
	if (nCount <=0)

		return false;
	else
		return true;


}
bool CMainFrame::WriteCheckOutOne(CString szMaLK)
{
_tprintf(_T("Vao day"));
	CRecord rs(&m_db), crs(&m_db);
	CString szSQL, szCardNo, tmpStr;
	//szMaLK=Lay_MaLK(nDocumentNo);
	szSQL.Format(_T("SELECT * FROM bh_thongtinbenhnhan WHERE ma_lk='%s'"),szMaLK);
	rs.ExecSQL(szSQL);
_tprintf(_T("\n%d"), rs.GetRecordCount());
	if(rs.GetRecordCount() <= 0)
		return false;
	while (!rs.IsEOF())
	{
		szMaLK = rs.GetValue(_T("ma_lk"));

		xmlDocPtr doc = NULL;
		xmlNodePtr rootNode = NULL;
		xmlNodePtr node = NULL;
		xmlNodePtr xmlNode = NULL;
		xmlNodePtr childNode = NULL;
		doc = xmlNewDoc( (const xmlChar*)"1.0");
			
		rootNode = xmlNewNode( NULL , (const xmlChar*) "CHECKOUT");
		xmlDocSetRootElement( doc , rootNode );


	//XUAT THONG TIN BENH NHAN
		//xmlNode = CLibXMLHelper::CreateChildElement( rootNode , _T("THONGTINBENHNHAN"), NULL); 

	//	szSQL.Format(_T("SELECT * FROM bh_thongtinbenhnhan WHERE ma_lk = '%s'"), szMaLK);
	//	crs.ExecSQL(szSQL);

	//	if (!crs.IsEOF())
	//	{

	//		crs.GetValue(_T("MATHE"), szCardNo);
	//		WriteXMLData(_T("THONGTINBENHNHAN"), &crs, rootNode);

	//	}

	////XUAT THONG TIN CHUYEN TUYEN
	//	//xmlNode = CLibXMLHelper::CreateChildElement( rootNode , _T("CHUYENTUYEN"), NULL); 

	//	szSQL.Format(_T("SELECT * FROM bh_chuyentuyen WHERE ma_lk = '%s'"), szMaLK);
	//	crs.ExecSQL(szSQL);

	//	if(!crs.IsEOF())
	//	{
	//		xmlNode = (xmlNodePtr) WriteXMLData(_T("CHUYENTUYEN"), &crs, rootNode);
	//	}
	//	//DANH SACH CHUYEN VIEN 
	//	szSQL.Format(_T("SELECT * FROM bh_dschuyenvien WHERE ma_lk = '%s'"), szMaLK);
	//	crs.ExecSQL(szSQL);
	//	//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("DSCHUYENVIEN"), _T(""));
	//	while (!crs.IsEOF())
	//	{
	//		CString szFieldName, szData;
	//		WriteXMLData(_T("DSCHUYENVIEN"), &crs, xmlNode);
	//		crs.MoveNext();
	//	}

		//THONG TIN CHI TIET
		xmlNode = CLibXMLHelper::CreateChildElement(rootNode,  _T("THONGTINCHITIET"), _T(""));
		//tong hop
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
		szSQL.Format(_T("SELECT MA_LK,STT,MA_BN,HO_TEN, ") \
					_T("NGAY_SINH,GIOI_TINH,DIA_CHI,MA_THE, ") \
					_T("MA_DKBD,GT_THE_TU,GT_THE_DEN,TEN_BENH, ") \
					_T("MA_BENH,MA_BENHKHAC,MA_LYDO_VVIEN, ") \
					_T("MA_NOI_CHUYEN,MA_TAI_NAN,NGAY_VAO, ") \
					_T("NGAY_RA,SO_NGAY_DTRI,KET_QUA_DTRI,TINH_TRANG_RV, ") \
					_T("NGAY_TTOAN,MUC_HUONG,T_THUOC,T_VTYT,T_TONGCHI, ") \
					_T("T_BNTT,T_BHTT,T_NGUONKHAC,T_NGOAIDS,NAM_QT, ") \
					_T("THANG_QT,MA_LOAI_KCB,MA_KHOA,MA_CSKCB,MA_KHUVUC, ") \
					_T("MA_PTTT_QT,CAN_NANG FROM bh_thongtinchitiet_tonghop WHERE ma_lk = '%s'"), szMaLK);
		crs.ExecSQL(szSQL);
		if(!crs.IsEOF())
		{
			crs.GetValue(_T("MA_THE"), szCardNo);
			WriteXMLData(_T("TONGHOP"), &crs, xmlNode);
		}
		//BANG_CTTHUOC
		int nCount=0;
		
		szSQL.Format(_T("SELECT MA_LK,STT,MA_THUOC,MA_NHOM,TEN_THUOC, ") \
						_T("		DON_VI_TINH,HAM_LUONG,DUONG_DUNG,LIEU_DUNG,") \
						_T("		SO_DANG_KY,SO_LUONG,DON_GIA,TYLE_TT,") \
						_T("		THANH_TIEN,MA_KHOA,MA_BAC_SI,MA_BENH,NGAY_YL,MA_PTTT") \
						_T("	FROM bh_bang_ctthuoc WHERE ma_lk = '%s'"), szMaLK);
		nCount=crs.ExecSQL(szSQL);
		if(nCount>0)
		{
			childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_CTTHUOC"), _T(""));
			while (!crs.IsEOF())
			{
				WriteXMLData(_T("CTTHUOC"), &crs, childNode);
				crs.MoveNext();
			}
		}
		//BANG_CTDV
		
		szSQL.Format(_T("SELECT MA_LK, STT,MA_DICH_VU,MA_VAT_TU,MA_NHOM, ") \
							_T("	TEN_DICH_VU,DON_VI_TINH,SO_LUONG,DON_GIA, ") \
							_T("	TYLE_TT,THANH_TIEN,MA_KHOA,MA_BAC_SI,MA_BENH, ") \
							_T("	NGAY_YL,NGAY_KQ,MA_PTTT ") \
						_T(" FROM bh_bang_ctdv WHERE ma_lk = '%s'"), szMaLK);
		nCount=crs.ExecSQL(szSQL);
		if(nCount>0)
		{
			childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_CTDV"), _T(""));
			while (!crs.IsEOF())
			{
				WriteXMLData(_T("CTDV"), &crs, childNode);
				crs.MoveNext();
			}
		}
		//BANG_CTCLS
		//childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_CT_CLS"), _T(""));
		//szSQL.Format(_T("SELECT * FROM bh_bang_ct_cls WHERE ma_lk = '%s'"), szMaLK);
		//crs.ExecSQL(szSQL);
		//while (!crs.IsEOF())
		//{
		//	WriteXMLData(_T("CLS"), &crs, childNode);
		//	crs.MoveNext();
		//}
		////BANG_DBBENH
		//childNode = CLibXMLHelper::CreateChildElement(xmlNode, _T("Bang_DienBienBenh"), _T(""));
		////node = CLibXMLHelper::CreateChildElement(node, _T("DienBienBenh"), _T(""));
		//szSQL.Format(_T("SELECT * FROM bh_bang_dienbienbenh WHERE ma_lk = '%s'"), szMaLK);
		//crs.ExecSQL(szSQL);
		//if(!crs.IsEOF())
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
		szFile.Format(_T("%s\\checkout\\%s_%s_CheckOut.xml"), m_szPath, tmpStr, szCardNo);
		szFile.MakeUpper();
		char szPath[MAX_PATH];
		memset(szPath, 0, MAX_PATH);
		::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, MAX_PATH, 0, 0);

		int Ret = xmlSaveFormatFileEnc(szPath, doc, "UTF-8" , 1 ); 

//_tprintf(_T("\r\n%d"), Ret);
		if(Ret > 0)
		{
			szSQL.Format(_T("UPDATE bh_thongtinbenhnhan SET trangthaigui='Y' WHERE ma_lk='%s' "), szMaLK);
			ExecSQL(szSQL);
		}

		if(doc) xmlFreeDoc( doc );
		rs.MoveNext();
	}
	return true;
}

CString CMainFrame::Lay_MaLK(long nDocumentNo, long nInvoiceNo){
	CString szSQL, szMaLK;
	CRecord rs(&m_db);
	szSQL.Format(_T(" SELECT  ") \
				_T("			CAST (hfe_docno AS NVARCHAR2(8)) ") \
				_T("			||'-'   ") \
				_T("			||CAST(hfe_treattime AS NVARCHAR2(5)) AS malk  ") \
				_T("			FROM HMS_FEE_INVOICE   ") \
				_T("			LEFT JOIN hms_doc   ") \
				_T("			ON (hd_docno=hfe_docno)   ") \
				_T("			LEFT JOIN hms_object   ") \
				_T("			ON (ho_id         =hd_object)   ") \
				_T("			WHERE hfe_docno   =%ld   ") \
				_T("			AND hfe_inspaid   >0  ") \
				_T("			AND hfe_invoiceno = %ld  "), nDocumentNo,nInvoiceNo);
	rs.ExecSQL(szSQL);
	szMaLK = rs.GetStringValue();
	//_msg(_T("%s"),szSQL);
//_tprintf(_T("\n%s"), szMaLK);
	return szMaLK;

}
void* CMainFrame::WriteXMLData(LPCTSTR lpszNodeName, CRecord* rs, void * xmlRoot, bool bUpper)
{
	xmlNodePtr rootNode = (xmlNodePtr) xmlRoot;
	xmlNodePtr node = NULL;
	xmlNodePtr childNode = NULL;
	CString szFieldName, szData;


	if (rootNode == NULL || rs == NULL)
		return node;
	
	node = CLibXMLHelper::CreateChildElement( rootNode , lpszNodeName, NULL); 
	CString szName;
	for (int i =0; i < rs->GetFieldCount();i++)
	{
		szFieldName = rs->GetFieldName(i);
		rs->GetValue(szFieldName, szData);
		
		if(bUpper)
			szFieldName.MakeUpper();
		else
			szFieldName.MakeLower();
		szName = szFieldName;
		szName.MakeUpper();

		if(szName == _T("TRANGTHAIGUI"))
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

		childNode = CLibXMLHelper::CreateChildElement(node , (LPCTSTR)szFieldName, szData); 

	}
	return node;
}
void CMainFrame::OnTimer(UINT nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	if (nIDEvent == 1)
	{
		//WriteCheckIn();
	}

	if (nIDEvent == 2)
	{
		//WriteCheckOut();
		
	}

	if (nIDEvent == 3)
	{
		//SendFiles();
		
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

	  
	  if(m_pFtp)
	  {
		  szFtpWriteDir.Format(_T("%sCheckIn/%s"), m_szCurrentDir, finder.GetFileName());
//_tprintf(_T("\r\n%s"), szFtpWriteDir);
//		  m_pFtp->SetCurrentDirectory(szFtpWriteDir);
		bool res = m_pFtp->PutFile(finder.GetFilePath(), szFtpWriteDir, FTP_TRANSFER_TYPE_ASCII);
	//	  _tprintf(_T("\r\n%s: %s: %d"), finder.GetFilePath(), finder.GetFileName(), res);
		  if(res)
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

	  
	  if(m_pFtp)
	  {
		  szFtpWriteDir.Format(_T("%sCheckOut/%s"), m_szCurrentDir, finder.GetFileName());
_tprintf(_T("\r\n%s"), szFtpWriteDir);
		  bool res = m_pFtp->PutFile(finder.GetFilePath(), szFtpWriteDir, FTP_TRANSFER_TYPE_ASCII);

//		  _tprintf(_T("\r\n%s: %s: %d"), finder.GetFilePath(), finder.GetFileName(), res);
		  if(res)
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

	if(m_pSession == NULL)
		return;
	if(m_pFtp)
		return;

	try
	{
		// Here usr is the username, pwd is the password 
		// and ftpsite.com is the name of the ftp site which
		// you want to connect to.
_tprintf(_T("\r\n%s"), m_szFtpHost);
		m_pFtp = m_pSession->GetFtpConnection(m_szFtpHost, m_szUser, m_szPassword,INTERNET_INVALID_PORT_NUMBER, TRUE);
if(m_pFtp)
{
	m_pFtp->GetCurrentDirectory(m_szCurrentDir);
	
	_tprintf(_T("\r\nFTP Connected"));
}
	}
	catch(CInternetException *pEx)
	{
		//pEx->ReportError(MB_ICONEXCLAMATION);
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
	if(szName == _T("ftpserver"))
	{
		m_szFtpHost = lpszData;
	}
}
STLString CMainFrame::GetXML1(CString szMa_lk)
{	
	CRecord rs(&m_db), crs(&m_db);
	CString szSQL,tmpStr,Ma_lk,szFieldName,szData;
	xmlDocPtr doc = NULL;
	xmlNodePtr cdata= NULL;
		xmlNodePtr rootNode = NULL;
		xmlNodePtr node = NULL;
		xmlNodePtr xmlNode = NULL;
		xmlNodePtr childNode = NULL;
		xmlNodePtr childNode1 = NULL;
		xmlNodePtr childNode2 = NULL;
		xmlNodePtr childNode3 = NULL;
		

		doc = xmlNewDoc( NULL);

		rootNode = xmlNewNode( NULL , (const xmlChar*) "TONG_HOP");
		xmlDocSetRootElement( doc , rootNode );
		CLibXMLHelper::xmlEnableWriteHeaderContent(0);
		//tong hop
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
		szSQL.Format(_T("SELECT MA_LK, STT,MA_BN,HO_TEN,NGAY_SINH,GIOI_TINH, ") \
					_T("	DIA_CHI,MA_THE,MA_DKBD,GT_THE_TU,GT_THE_DEN,MIEN_CUNG_CT, ") \
					_T("	TEN_BENH,MA_BENH,MA_BENHKHAC,MA_LYDO_VVIEN,MA_NOI_CHUYEN, ") \
					_T("	MA_TAI_NAN,NGAY_VAO,NGAY_RA,SO_NGAY_DTRI,KET_QUA_DTRI, ") \
					_T("	TINH_TRANG_RV,NGAY_TTOAN,T_THUOC,T_VTYT,T_TONGCHI,T_BNTT, ") \
					_T("	T_BNCCT,T_BHTT,T_NGUONKHAC,T_NGOAIDS,NAM_QT,THANG_QT,MA_LOAI_KCB, ") \
					_T("	MA_KHOA,MA_CSKCB,MA_KHUVUC,MA_PTTT_QT,CAN_NANG ") \
					_T(" FROM bh_thongtinchitiet_tonghop  ") \
					_T("		WHERE ma_lk = '%s'"), szMa_lk);
		rs.ExecSQL(szSQL);
		/*if(!rs.IsEOF())
		{
			xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
		}*/
			for (int i =0; i < rs.GetFieldCount();i++)
			{
				szFieldName = rs.GetFieldName(i);
				rs.GetValue(szFieldName, szData);
				szFieldName.MakeUpper();
				if(szFieldName== _T("HO_TEN") || szFieldName== _T("DIA_CHI")|| szFieldName== _T("TEN_BENH") )
				{
					AddCDataBlock(doc, rootNode, szFieldName, szData);
				}

				
				if(szFieldName == _T("TRANGTHAIGUI") || szFieldName==_T("TIME_PROCESS")
							||szFieldName==_T("SO_PHIEU")
							||szFieldName==_T("NGAY_QUYETTOAN")
							||szFieldName==_T("MA_KHOABV") 
							||szFieldName==_T("TEN_KHOABV")
							||szFieldName==_T("NGUOI_LIEN_HE")
							||szFieldName==_T("LOAI_GIAYTO_DIKEM")
							||szFieldName==_T("TEN_LOAI_GIAYTO")
							||szFieldName==_T("HO_TEN")
							||szFieldName==_T("DIA_CHI")
							||szFieldName==_T("TEN_BENH"))
					continue;
				
				
				childNode = CLibXMLHelper::CreateChildElement(rootNode , (LPCTSTR)szFieldName, szData); 
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
	CString szSQL,tmpStr,Ma_lk,szFieldName,szData;
	xmlDocPtr doc = NULL;
		xmlNodePtr rootNode = NULL;
		xmlNodePtr node = NULL;
		xmlNodePtr xmlNode = NULL;
		xmlNodePtr childNode = NULL;
		xmlNodePtr childNode1 = NULL;
		xmlNodePtr childNode2 = NULL;
		xmlNodePtr childNode3 = NULL;
		xmlNodePtr cdata= NULL;

	STLString outString;
	outString.clear();

		doc = xmlNewDoc( NULL);
		szSQL.Format(_T("SELECT MA_LK,STT,MA_THUOC,MA_NHOM,TEN_THUOC,DON_VI_TINH,HAM_LUONG,DUONG_DUNG,LIEU_DUNG,SO_DANG_KY, ") \
					_T("	TT_THAU,PHAM_VI, ") \
					_T(" SO_LUONG,DON_GIA,TYLE_TT,THANH_TIEN,MUC_HUONG,T_NGUONKHAC,T_BNTT,T_BHTT, ") \
					_T("	T_BNCCT,T_NGOAIDS,MA_KHOA,MA_BAC_SI,MA_BENH,NGAY_YL,MA_PTTT  ") \
					_T("	FROM bh_bang_ctthuoc WHERE ma_lk = '%s'"), szMa_lk);
		int nCount=rs.ExecSQL(szSQL);
		if(nCount<=0)
		{
			xmlFreeDoc(doc);
			xmlCleanupParser();
			return outString;
		}
			

		rootNode = xmlNewNode( NULL , (const xmlChar*) "DSACH_CHI_TIET_THUOC");
		xmlDocSetRootElement( doc , rootNode );
		//tong hop
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
	
		/*if(!rs.IsEOF())
		{
			xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
		}*/
		while(!rs.IsEOF())
		{	
			childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_THUOC"),NULL);
			
			for (int i =0; i < rs.GetFieldCount();i++)
			{
				szFieldName = rs.GetFieldName(i);
				szFieldName.MakeUpper();
				if(szFieldName == _T("SO_LUONG"))
				{
					int nOld = SetFracDigits(3);
				rs.GetValue(szFieldName, szData);
					SetFracDigits(nOld);
					
				}
				else
				{
					rs.GetValue(szFieldName, szData);
					
				}
				
				if(szFieldName== _T("TEN_THUOC") || szFieldName== _T("HAM_LUONG"))
				{
					AddCDataBlock(doc, childNode, szFieldName, szData);
				}
				
				if(szFieldName == _T("TRANGTHAIGUI")||szFieldName==_T("TEN_KHOABV")
							||szFieldName==_T("DON_GIA_BV")
							||szFieldName==_T("T_NGUON_KHAC") 
							||szFieldName==_T("MA_THUOC_CS")
							||szFieldName==_T("TEN_THUOC")
							||szFieldName==_T("HAM_LUONG")
							)
					continue;
				
				childNode1 = CLibXMLHelper::CreateChildElement(childNode , (LPCTSTR)szFieldName, szData); 
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
	CString szSQL,tmpStr,Ma_lk,szFieldName,szData;
	xmlDocPtr doc = NULL;
		xmlNodePtr rootNode = NULL;
		xmlNodePtr node = NULL;
		xmlNodePtr xmlNode = NULL;
		xmlNodePtr childNode = NULL;
		xmlNodePtr childNode1 = NULL;
		xmlNodePtr childNode2 = NULL;
		xmlNodePtr childNode3 = NULL;
		xmlNodePtr cdata= NULL;
	
	STLString outString;
	outString.clear();
	
		doc = xmlNewDoc( NULL);
		szSQL.Format(_T("SELECT MA_LK,STT,MA_DICH_VU,MA_VAT_TU,MA_NHOM,GOI_VTYT,") \
			_T(" replace(TEN_VAT_TU, chr(39), chr(39)||chr(39)) as TEN_VAT_TU,TEN_DICH_VU,DON_VI_TINH, ") \
			_T("	PHAM_VI,SO_LUONG,DON_GIA,TT_THAU,  ") \
			_T(" TYLE_TT,THANH_TIEN,T_TRANTT,MUC_HUONG,T_NGUONKHAC,T_BNTT,T_BHTT,T_BNCCT,T_NGOAIDS,MA_KHOA,MA_GIUONG, ") \
			_T("	MA_BAC_SI,MA_BENH,NGAY_YL,NGAY_KQ,MA_PTTT ")\
			_T("			FROM bh_bang_ctdv WHERE ma_lk = '%s'"), szMa_lk);
		int nCount= rs.ExecSQL(szSQL);
		if(nCount<=0) 
		{
			xmlFreeDoc(doc);
			xmlCleanupParser();
			return outString;

		}
		rootNode = xmlNewNode( NULL , (const xmlChar*) "DSACH_CHI_TIET_DVKT");
		xmlDocSetRootElement( doc , rootNode );
		//tong hop
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

		/*if(!rs.IsEOF())
		{
			xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
		}*/
			while(!rs.IsEOF())
		{
				childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_DVKT"),NULL);
			for (int i =0; i < rs.GetFieldCount();i++)
			{
				szFieldName = rs.GetFieldName(i);
				rs.GetValue(szFieldName, szData);
				szFieldName.MakeUpper();
				
				if((szFieldName == _T("TEN_DICH_VU")||szFieldName == _T("TEN_VAT_TU")) && !szData.IsEmpty())
				{
					if(szData.GetLength() > 0)
				{
						AddCDataBlock(doc, childNode, szFieldName, szData);
						continue;
					}
				}

				
				if(szFieldName == _T("TRANGTHAIGUI")|| szFieldName==_T("TEN_KHOABV")
							||szFieldName==_T("DON_GIA_BV")
							||szFieldName==_T("T_NGUON_KHAC")
							||szFieldName==_T("MA_DICH_VU_CS") 
							||szFieldName==_T("MA_VAT_TU_CS")
							||szFieldName==_T("TEN_KHOABV")
							)
	
					continue;
				
				
				childNode1 = CLibXMLHelper::CreateChildElement(childNode , (LPCTSTR)szFieldName, szData); 
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
	CString szSQL,tmpStr,Ma_lk,szFieldName,szData;
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

		doc = xmlNewDoc( NULL);
		szSQL.Format(_T("SELECT * FROM bh_bang_ct_cls WHERE ma_lk = '%s'"), szMa_lk);
		int nCount=rs.ExecSQL(szSQL);

		if(nCount<=0) 
		{
			xmlFreeDoc(doc);
			xmlCleanupParser();
			return outString;
		}

		rootNode = xmlNewNode( NULL , (const xmlChar*) "DSACH_CHI_TIET_CLS");
		xmlDocSetRootElement( doc , rootNode );
		//tong hop
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

		/*if(!rs.IsEOF())
		{
			xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
		}*/
			while(!rs.IsEOF())
		{
			childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_CLS"),NULL);
			for (int i =0; i < rs.GetFieldCount();i++)
			{
				szFieldName = rs.GetFieldName(i);
				rs.GetValue(szFieldName, szData);
				szFieldName.MakeUpper();
				
				if(szFieldName== _T("TEN_CHI_SO") || szFieldName== _T("GIA_TRI") ||szFieldName== _T("MO_TA")  ||szFieldName== _T("KET_LUAN")  )	  
				{
					AddCDataBlock(doc, childNode, szFieldName, szData);
				}

				
				if(szFieldName == _T("TRANGTHAIGUI")
					||szFieldName==_T("TIME_PROCESS")
							||szFieldName==_T("SO_PHIEU")
							||szFieldName==_T("NGAY_QUYETTOAN")
							||szFieldName==_T("MA_KHOABV") 
							||szFieldName==_T("TEN_KHOABV")
							||szFieldName==_T("NGUOI_LIEN_HE")
							||szFieldName==_T("LOAI_GIAYTO_DIKEM")
							||szFieldName==_T("TEN_LOAI_GIAYTO")
							||szFieldName== _T("TEN_CHI_SO") 
							|| szFieldName== _T("GIA_TRI") 
							||szFieldName== _T("MO_TA")  
							||szFieldName== _T("KET_LUAN")
							)
					continue;

				
				childNode1 = CLibXMLHelper::CreateChildElement(childNode , (LPCTSTR)szFieldName, szData); 
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
	CString szSQL,tmpStr,Ma_lk,szFieldName,szData;
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


		doc = xmlNewDoc( NULL);
		
		szSQL.Format(_T("SELECT * FROM bh_bang_dienbienbenh WHERE ma_lk = '%s'"), szMa_lk);
		int nCount = rs.ExecSQL(szSQL);
		if(nCount<=0)
		{
			xmlFreeDoc(doc);
			xmlCleanupParser();
			return outString;
		}

		rootNode = xmlNewNode( NULL , (const xmlChar*) "DSACH_CHI_TIET_DIEN_BIEN_BENH");
		xmlDocSetRootElement( doc , rootNode );
		//tong hop
		//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));

		/*if(!rs.IsEOF())
		{
			xmlNode = (xmlNodePtr) WriteXMLData(_T("Tong_hop"), &rs, rootNode);
		}*/
			while(!rs.IsEOF())
		{	
			childNode=CLibXMLHelper::CreateChildElement(rootNode,_T("CHI_TIET_DIEN_BIEN_BENH"),NULL);
			for (int i =0; i < rs.GetFieldCount();i++)
			{
				szFieldName = rs.GetFieldName(i);
				rs.GetValue(szFieldName, szData);
				szFieldName.MakeUpper();
				if(szFieldName== _T("DIEN_BIEN") || szFieldName== _T("HOI_CHAN") ||szFieldName== _T("PHAU_THUAT")  )	  
				{
					AddCDataBlock(doc, childNode, szFieldName, szData);
				}

				if(szFieldName == _T("TRANGTHAIGUI")
					||szFieldName==_T("TIME_PROCESS")
							||szFieldName==_T("SO_PHIEU")
							||szFieldName==_T("NGAY_QUYETTOAN")
							||szFieldName==_T("MA_KHOABV") 
							||szFieldName==_T("TEN_KHOABV")
							||szFieldName==_T("NGUOI_LIEN_HE")
							||szFieldName==_T("LOAI_GIAYTO_DIKEM")
							||szFieldName== _T("DIEN_BIEN") 
							|| szFieldName== _T("HOI_CHAN") 
							||szFieldName== _T("PHAU_THUAT")
							)
					continue;
				
					
				
				childNode1 = CLibXMLHelper::CreateChildElement(childNode , (LPCTSTR)szFieldName, szData); 
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
int CMainFrame::OnWriteCheckOut4210(CString szMaLK,bool bBQP){
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&m_db), crs(&m_db);
	CString szSQL, szCardNo, tmpStr,szWhere;
	CString szFieldName,szData;
	SetStatusText(_T("Ðang tạo file tổng hợp"),0);
	CString szExportPath, szFile;
	int nCount=0;
	if(bBQP)
		szExportPath=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory_BQP"));
	else
		szExportPath=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"));
	CString szFileName;

		tmpStr=GetSysDateTime().Left(11);

		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));
		//Ký tự ^ trong bệnh án cũng sẽ gây ra lỗi//

		szFileName.Format(_T("%s-%s"),szMaLK,tmpStr);

		
	szFile.Format(_T("%s\\4210-%s.xml"), szExportPath,szFileName);
	szFile.MakeUpper();
	char szPath[MAX_PATH];
	memset(szPath, 0, MAX_PATH);
	::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, MAX_PATH, 0, 0);
	std::wfstream fs;
	fs.open (szPath, std::fstream::out | std::fstream::trunc);

		
		CString szMaBV;
		std::wstring macskcb, ngaylap, soluong;

		szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("MACSKCB"), szMaBV);
		macskcb = (LPCTSTR) szMaBV;

		
		

		szSQL.Format(_T("SELECT count(*) as SoLuongHoSo, to_char( current_date,'YYYYMMDD') as NgayLap from bh_thongtinchitiet_tonghop  ") \
			_T(" where ma_lk='%s'	"),szMaLK);
		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("SoLuongHoSo"), tmpStr);
			nCount= ToInt(tmpStr);
			soluong = (LPCTSTR) tmpStr;
			rs.GetValue(_T("NgayLap"), tmpStr);
			ngaylap = (LPCTSTR) tmpStr;

		}
		
		
		fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
		fs << "<GIAMDINHHS xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">" << endl;
		fs << "<THONGTINDONVI>" << endl;
		fs << "<MACSKCB>"<< macskcb << "</MACSKCB>" << endl;
		fs << "</THONGTINDONVI>" << endl;
		fs << "<THONGTINHOSO>" << endl;
		fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
		fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
		fs << "<DANHSACHHOSO>" << endl;

		
		
		

		szSQL.Format(_T("SELECT ma_lk,so_phieu  as docno from bh_thongtinchitiet_tonghop ") \
			_T(" where ma_lk='%s'	"),szMaLK);
		rs.ExecSQL(szSQL);



		STLString strData;

		while (!rs.IsEOF())
		{	
			
			rs.GetValue(_T("ma_lk"), szMaLK);

			fs << "<HOSO>" << endl;
			strData.clear();

			strData=GetXML1(szMaLK);
			
			fs << "<FILEHOSO>" << endl;
			fs << "<LOAIHOSO>XML1</LOAIHOSO>" << endl;
			fs << "<NOIDUNGFILE>";
			fs << strData.c_str();
			fs <<"</NOIDUNGFILE>" << endl;
			fs << "</FILEHOSO>" << endl;

			strData.clear();
			strData=GetXML2(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML2</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			strData.clear();
			strData=GetXML3(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML3</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			strData.clear();
			strData=GetXML4(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML4</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			strData.clear();
			strData=GetXML5(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML5</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			fs << "</HOSO>" << endl;
			CString szSQLItem;
			szSQLItem.Format(_T("Update bh_thongtinchitiet_tonghop set trangthaigui='S' where ma_lk='%s' "),szMaLK);
			ExecSQL(szSQLItem);

			rs.MoveNext();
		}
		

	fs << "</DANHSACHHOSO>" << endl;
	fs << "</THONGTINHOSO>" << endl;
	fs << "<CHUKYDONVI/>" << endl;
	fs << "</GIAMDINHHS>" << endl;
	fs.close();
	tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"),nCount);
	SetStatusText(tmpStr,0);
	EndWaitCursor();
	return 0;
}

int CMainFrame::OnWriteHoSoGiayTo(long nDocumentNo, int  nTreattime){
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&m_db), crs(&m_db);
	CString szSQL, szCardNo, tmpStr,szWhere;
	CString szFieldName,szData;
	SetStatusText(_T("Ðang t?o file"),0);
	CString szExportPath, szFile;
	CString szMaLK;
	int nCount=0;
	szExportPath=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE_HSCT"), _T("Drirectory"));
	CString szFileName;

		tmpStr=GetSysDateTime().Left(11);
		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));

		szFileName.Format(_T("%ld-%s"),nDocumentNo,tmpStr);

		
	szFile.Format(_T("%s\\HSCT-%s.xml"), szExportPath,szFileName);
	szFile.MakeUpper();
	char szPath[MAX_PATH];
	memset(szPath, 0, MAX_PATH);
	::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, MAX_PATH, 0, 0);
	std::wfstream fs;
	fs.open (szPath, std::fstream::out | std::fstream::trunc);

		
		CString szMaBV;
		std::wstring macskcb, ngaylap, soluong;

		szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("MACSKCB"), szMaBV);
		macskcb = (LPCTSTR) szMaBV;

		
		szSQL.Format(_T("select 1 as SoLuongHoSo, to_char( current_date,'YYYYMMDD') as NgayLap from dual  ") );
		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("SoLuongHoSo"), tmpStr);
			nCount= 1;
			soluong = (LPCTSTR) tmpStr;
			rs.GetValue(_T("NgayLap"), tmpStr);
			ngaylap = (LPCTSTR) tmpStr;

		}
	
		
		fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
		fs << "<HSCHUNGTU xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">" << endl;
		fs << "<THONGTINDONVI>" << endl;
		fs << "<CHUKYDONVI/>" << endl;
		fs << "<MACSKCB>"<< macskcb << "</MACSKCB>" << endl;
		fs << "</THONGTINDONVI>" << endl;
		fs << "<THONGTINHOSO>" << endl;
		fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
		fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
		fs << "<DANHSACHHOSO>" << endl;
		CString szFromDate, szToDate;
		szFromDate= m_wndPaperView.m_szFromDate.Left(16);
		szToDate= m_wndPaperView.m_szToDate.Left(16);

		

		STLString strData;

		while (!rs.IsEOF())
		{	
			

			fs << "<HOSO>" << endl;
			strData.clear();
			CString szType;
			

		szSQL.Format(_T(" select hc_serial as MA_CT, ") \
				_T("   hc_serial as SO_SERI, ") \
				_T("   hd_docno as SO_KCB, ") \
				_T("   substr(a.hc_cardno,6,10) as MA_BHXH, ") \
				_T("   substr(a.hc_cardno,1,15) as MA_THE, ") \
				_T("   get_patientname(hd_docno) as HO_TEN, ") \
				_T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ") \
				_T("   case when hp_sex ='M' then 1 else 2 end as gioi_tinh, ") \
				_T("   hp_workplace as DON_VI, ") \
				_T("   hc_diagnostic as CHANDOAN_DIEUTRI, ") \
				_T("   to_char(hc_fromdate, 'YYYYMMDD') as TU_NGAY, ") \
				_T("   to_char(hc_todate, 'YYYYMMDD') as DEN_NGAY, ") \
				_T("   hc_fathername as HO_TEN_CHA, ") \
				_T("   hc_mothername as HO_TEN_ME, ") \
				_T("   '%s' as THU_TRUONG_DV, ") \
				_T("   hc_cchn as MA_CCHN, ") \
				_T("   hc_doctor as TEN_NGUOI_HANH_NGHE, ") \
				_T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ") \
				_T(" 			case when substr(a.hc_cardno, 6,2) ='KT'  then '1' else null end as TEKT,") \
				_T("   'CT07' as MAU_SO  ") \
				_T("   from VIMES.HMS_CHUNGNHANNGHIVIEC   a") \
				_T("   left join hms_doc on (a.hc_docno = hd_docno) ") \
				_T("   left join hms_card  b on (b.hc_idx = hd_cardidx and b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)") \
				_T("   left join hms_clinical_record on (hcr_docno = hd_docno) ") \
				_T("   left join hms_patient on (hp_patientno = hd_patientno) ") \
				_T("   where hc_isthaisan='N' and ( (hd_status='T' and hd_enddate between to_timestamp ('%s:00','YYYY/MM/DD HH24:Mi:SS') ") \
				_T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:Mi:SS') ") \
				_T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ) ") \
				_T("   or ( hcr_status='T' and hcr_dischargedate between to_timestamp ('%s:00','YYYY/MM/DD HH24:Mi:SS') and to_timestamp ('%s:59','YYYY/MM/DD HH24:Mi:SS') and hd_docno = %ld )  ) ") \
				_T("   order by hc_bookno, hc_index"),m_szCeoName,szFromDate, szToDate,nDocumentNo, szFromDate, szToDate,nDocumentNo);
			szType= _T("CT07");
			strData=GetXMLCT(szSQL, szType);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT07</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
		
			strData.clear();
			szSQL.Format(_T(" select '' as ma_ct,") \
			_T(" 	hbc_number||'/'||hbc_bookno||'/'||hbc_year as so_seri,") \
			_T("	hbc_bookno as QUYEN_SO, ") \
			_T("	hbc_number as SO, ") \
			_T(" 	substr(hbc_bhyt,6,10) as MA_BHXH_NND,") \
			_T(" 	substr(hbc_bhyt,1,15) as MA_THE_NND,") \
			_T(" 	hbc_patientname as HOTEN_NND,") \
			_T(" 	to_char(hp_birthdate, 'YYYYMMDD') as NGAYSINH_NND,") \
			_T(" 	case when length(trim(ss_vndesc)) >0 then trim(ss_vndesc) else CAST(hp_ethnic AS nvarchar2(2)) end as MA_DANTOC_NND,") \
			_T(" 	hbc_idcard as SO_CMND_NND,") \
			_T(" 	to_char(hbc_ngaycap, 'YYYYMMDD') as  NGAYCAP_CMND_NND,") \
			_T(" 	hbc_placeregistration as NOICAP_CMND_NND,") \
			_T(" 	case when length(hp_dtladdr) >0 then hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid) ") \
			_T(" 	else hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid)  end as NOI_DK_THUONGTRU_NND	,") \
			_T(" 	hbc_tencha as HO_TEN_CHA,") \
			_T(" 	hbc_childrenname as TEN_CON,") \
			_T(" 	case when hbc_sex ='M' then 1 else 2 end as gioi_tinh_con,") \
			_T(" 	hbc_numberlive as SO_CON,") \
			_T(" 	cast(hbc_weigh*1000 as integer) as CAN_NANG_CON,") 
			_T(" 	to_char(hbc_datetimeofbirth,'YYYYMMDDHH24MI') as NGAY_SINH_CON,") \
			_T(" 	hbc_hospitalname as NOI_SINH_CON,") \
			_T(" 	hbc_healthstatus as TINH_TRANG_CON,") \
			_T(" 	case when hbc_surgery='Y' then 1 else 0 end as SINHCON_PHAUTHUAT, ") \
			_T(" 	case when hbc_underweeks32='Y' then 1 else 0 end as SINHCON_DUOI32TUAN, ") \
			_T(" 	hbc_healthstatus as ghi_chu,") \
			_T(" 	get_username(hbc_themidwifery) as NGUOI_DO_DE,") \
			_T(" 	case when hbc_voter is not null then get_username(hbc_voter) else get_username(hbc_themidwifery)  end as NGUOI_GHI_PHIEU,") \
			_T(" 	'%s' as THU_TRUONG_DVI,") \
			_T(" 	to_char(hcr_dischargedate ,'YYYYMMDD') as NGAY_CT,") \
			_T("	hbc_number as SO, hbc_bookno as SO_QUYEN ") \
			_T("  from hms_clinical_record ") \
			_T(" left join hms_birthcertificate on (hbc_docno = hcr_docno) ") \
			_T(" left join hms_patient on (hp_patientno = hcr_patientno)") \
			_T(" left join sys_sel on (ss_id='sys_ethnic' and cast( ss_code as integer) = hp_ethnic) ") \
			_T(" where hcr_dischargedate between TO_TIMESTAMP ('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ('%s:59','YYYY/MM/DD HH24:MI:SS') ") \
			_T(" and hbc_docno=%ld ") \
			_T(" order by hcr_dischargedate") ,m_szCeoName, szFromDate, szToDate,nDocumentNo);
			szType= _T("CT05");
			strData=GetXMLCT(szSQL, szType);
		
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT05</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			strData.clear();
			szSQL.Format(_T("  select '' as SO_LUU_TRU, ") \
				_T("			'101/014/'||substr(extract(YEAR FROM hcr_admitdate),3,2)||'/'||TO_CHAR(hcr_numinhospital,'FM000000') as MA_YTE, ") \
				_T("			hd_docno as MA_CT,") \
				_T(" 			'' as SO_SERI,") \
				_T(" 			sd_insuranceid as MA_KHOA , ") \
				_T(" 			 substr(hd_cardno,6,10) as MA_BHXH,") \
				_T(" 			 substr(hd_cardno,1,15) as MA_THE,") \
				_T(" 			 get_patientname(hd_docno) as HO_TEN,") \
				_T(" 			to_char(hp_birthdate,'YYYYMMDD') as NGAY_SINH,") \
				_T(" 			case when hp_sex ='M' then 1 else 2 end as GIOI_TINH,") \
				_T(" 	case when length(trim(ss_vndesc)) >0 then trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end as MA_DANTOC,") \
				_T(" 			sys_sel_getname('sys_occupation', cast(hp_occupation as nvarchar2(254))) as NGHE_NGHIEP,") \
				_T(" 			 case when length(hp_dtladdr) >0 then hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid) ") \
				_T(" 				else hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  DIA_CHI,") \
				_T(" 			to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,") \
				_T(" 			to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,") \
				_T("			0 as DINH_CHI_THAI_NGHEN, ") \
				_T(" 			'' as TUOI_THAI,") \
				_T(" 			hcr_maindisease as CHAN_DOAN,") \
				_T(" 			case when length(trim(hcr_gmethod)) >5  then hcr_gmethod else hcr_maindisease end as PP_DIEUTRI,") \
				_T(" 			'%s'  as THU_TRUONG_DVI,") \
				_T(" 			sd_cchn_truong_khoa as MA_CCHN_TRUONGKHOA,") \
				_T(" 			sd_ten_truong_khoa as TEN_TRUONGKHOA,") \
				_T(" 			to_char(hcr_dischargedate, 'YYYYMMDD') as NGAY_CHUNG_TU,") \
				_T(" 			case when substr(hd_cardno, 6,2) ='KT'  then '1' else '0' end as TEKT, ") \
				_T(" 				case when hnr_reference_docno >0 then hnr_fathername when hd_relation=1 then hd_relative else cast(' Khong ro' as nvarchar2(45)) end as HO_TEN_CHA, ") \
				_T(" 			case when hnr_reference_docno >0 then get_patientname(hnr_reference_docno) when hd_relation=2  then hd_relative else cast('Không di?n' as nvarchar2(128)) end as HO_TEN_ME  ") \
				_T(" 		 from hms_clinical_record ") \
				_T(" 		 left join hms_doc on (hd_docno = hcr_docno)") \
				_T("		left join HMS_NEWBORN_RECORD on (hd_docno = hnr_docno) ") \
				_T(" 		 left join hms_patient on (hp_patientno = hd_patientno)") \
				_T("		 left join sys_sel on (ss_id='sys_ethnic' and cast(ss_code as integer) = hp_ethnic) ") \
				_T(" 		 left join sys_dept on (sd_id = hcr_dischargedept)") \
				_T(" 		 where hcr_dischargedate between TO_TIMESTAMP ('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ") \
				_T(" 		 order by  hcr_dischargedate ") ,m_szCeoName, szFromDate, szToDate, nDocumentNo);
			
			szType= _T("CT03");
			strData=GetXMLCT(szSQL, szType);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT03</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			strData.clear();
			szSQL.Format(_T("  select '' as MA_CT, ") \
				_T(" 			'' as SO_SERI,") \
				_T(" 			 substr(hd_cardno,6,10) as MA_BHXH,") \
				_T(" 			 substr(hd_cardno,1,15) as MA_THE,") \
				_T(" 			 get_patientname(hd_docno) as HO_TEN,") \
				_T(" 			to_char(hp_birthdate,'YYYYMMDD') as NGAY_SINH,") \
				_T(" 			case when hp_sex ='M' then 1 else 2 end as GIOI_TINH,") \
				_T(" 	case when length(trim(ss_vndesc)) >0 then trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end as MA_DANTOC,") \
				_T(" 			sys_sel_getname('sys_occupation', cast(hp_occupation as nvarchar2(254))) as NGHE_NGHIEP,") \
				_T(" 			 case when length(hp_dtladdr) >0 then hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid) ") \
				_T(" 				else hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  DIA_CHI,") \
				_T(" 			'' as HO_TEN_CHA,") \
				_T(" 			'' as HO_TEN_ME, ") \
				_T("			'' as NGUOI_GIAM_HO, ") \
				_T("			'' as TEN_DONVI, ") \
				_T(" 			to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,") \
				_T(" 			to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,") \
				_T(" 			hcr_admitdisease as CHAN_DOAN_VAO,") \
				_T(" 			hcr_maindisease as CHAN_DOAN_RA,") \
				_T(" 			hcr_pathological ||'\r\n'||hcr_systemic as QT_BENHLY,") \
				_T(" 			hcr_tests as TOMTAT_KQ,") \
				_T(" 			case when length(trim(hcr_gmethod)) >5  then hcr_gmethod else hcr_maindisease end as PP_DIEUTRI,") \
				_T("			'' as NGAY_SINHCON, ") \
				_T("			'' as NGAY_CHETCON, ") \
				_T("			'' as SO_CONCHET, ") \
				_T("			hcr_ttrang_rv  as TT_RAVIEN, ") \
				_T("			'' as GHI_CHU, ") \
				_T(" 			'%s'  as NGUOI_DAI_DIEN,") \
				_T(" 			to_char(hcr_dischargedate, 'YYYYMMDD') as NGAY_CT,") \
				_T(" 			case when substr(hd_cardno, 6,2) ='KT'  then '1' else '0' end as TEKT ") \
				_T(" 		 from hms_clinical_record ") \
				_T(" 		 left join hms_doc on (hd_docno = hcr_docno)") \
				_T(" 		 left join hms_patient on (hp_patientno = hd_patientno)") \
				_T("		 left join sys_sel on (ss_id='sys_ethnic' and cast(ss_code as integer) = hp_ethnic) ") \
				_T(" 		 left join sys_dept on (sd_id = hcr_dischargedept)") \
				_T(" 		 where hcr_dischargedate between TO_TIMESTAMP ('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ") \
				_T(" 		 order by  hcr_dischargedate ") ,m_szCeoName, szFromDate, szToDate, nDocumentNo);
			
			szType= _T("CT04");
			strData=GetXMLCT(szSQL, szType);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT04</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			strData.clear();
			szSQL.Format(_T(" select hc_serial as MA_CT, ") \
				_T("   hc_serial as SO_SERI, ") \
				_T("   hd_docno as SO_KCB, ") \
				_T("   substr(a.hc_cardno,6,10) as MA_BHXH, ") \
				_T("   substr(a.hc_cardno,1,15) as MA_THE, ") \
				_T("   get_patientname(hd_docno) as HO_TEN, ") \
				_T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ") \
				_T("   hp_workplace as TEN_DVI, ") \
				_T("   hc_diagnostic as CHAN_DOAN, ") \
				_T("   to_char(hc_fromdate, 'YYYYMMDD') as NGAY_VAO, ") \
				_T("   to_char(hc_todate, 'YYYYMMDD') as NGAY_RA, ") \
				_T("	'' as NGUOI_DAI_DIEN,  ") \
				_T("   hc_cchn as MA_BS, ") \
				_T("   hc_doctor as TEN_BS, ") \
				_T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ") \
				_T("	to_char(hd_enddate, 'YYYYMMDD') as NGAY_CT ") \
				_T("   from VIMES.HMS_CHUNGNHANNGHIVIEC   a") \
				_T("   left join hms_doc on (a.hc_docno = hd_docno) ") \
				_T("   left join hms_card  b on (b.hc_idx = hd_cardidx and b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)") \
				_T("   left join hms_clinical_record on (hcr_docno = hd_docno) ") \
				_T("   left join hms_patient on (hp_patientno = hd_patientno) ") \
				_T("   where hc_isthaisan='Y' and ( (hd_status='T' and hd_enddate between to_timestamp ('%s:00','YYYY/MM/DD HH24:Mi:SS') ") \
				_T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:Mi:SS') ") \
				_T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ) ") \
				_T("   or ( hcr_status='T' and hcr_dischargedate between to_timestamp ('%s:00','YYYY/MM/DD HH24:Mi:SS') and to_timestamp ('%s:59','YYYY/MM/DD HH24:Mi:SS') and hd_docno = %ld )  ) ") \
				_T("   order by hc_bookno, hc_index"),szFromDate, szToDate,nDocumentNo, szFromDate, szToDate,nDocumentNo);
	
			szType= _T("CT06");
			strData=GetXMLCT(szSQL, szType);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT06</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
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
	tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"),nCount);
	SetStatusText(tmpStr,0);
	EndWaitCursor();
	return 0;
}
int CMainFrame::OnWriteHoSoGiayTo(long nDocumentNo, int  nTreattime, CString szType){
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&m_db), crs(&m_db);
	CString szSQL, szCardNo, tmpStr,szWhere;
	CString szFieldName,szData;
	SetStatusText(_T("Ðang t?o file"),0);
	CString szExportPath, szFile;
	CString szMaLK;
	int nCount=0;
	szExportPath=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE_HSCT"), _T("Drirectory"));
	CString szFileName;

		tmpStr=GetSysDateTime().Left(11);
		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));

		szFileName.Format(_T("%ld-%s"),nDocumentNo,tmpStr);

		
	szFile.Format(_T("%s\\HSCT-%s-%s.xml"), szExportPath,szFileName,szType);
	szFile.MakeUpper();
	char szPath[MAX_PATH];
	memset(szPath, 0, MAX_PATH);
	::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, MAX_PATH, 0, 0);
	std::wfstream fs;
	fs.open (szPath, std::fstream::out | std::fstream::trunc);

		
		CString szMaBV;
		std::wstring macskcb, ngaylap, soluong;

		szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("MACSKCB"), szMaBV);
		macskcb = (LPCTSTR) szMaBV;

		
		szSQL.Format(_T("select 1 as SoLuongHoSo, to_char( current_date,'YYYYMMDD') as NgayLap from dual  ") );
		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("SoLuongHoSo"), tmpStr);
			nCount= 1;
			soluong = (LPCTSTR) tmpStr;
			rs.GetValue(_T("NgayLap"), tmpStr);
			ngaylap = (LPCTSTR) tmpStr;

		}
	
		
		fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
		fs << "<HSCHUNGTU xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">" << endl;
		fs << "<THONGTINDONVI>" << endl;
		fs << "<CHUKYDONVI/>" << endl;
		fs << "<MACSKCB>"<< macskcb << "</MACSKCB>" << endl;
		fs << "</THONGTINDONVI>" << endl;
		fs << "<THONGTINHOSO>" << endl;
		fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
		fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
		fs << "<DANHSACHHOSO>" << endl;
		CString szFromDate, szToDate;
		szFromDate= m_wndPaperView.m_szFromDate.Left(16);
		szToDate= m_wndPaperView.m_szToDate.Left(16);

		

		STLString strData;

		while (!rs.IsEOF())
		{	
			

			fs << "<HOSO>" << endl;
			strData.clear();
			//CString szType;
		if(szType == _T("CT07"))
		{

			szSQL.Format(_T(" select hc_serial as MA_CT, ") \
					_T("   hc_serial as SO_SERI, ") \
					_T("   hd_docno as SO_KCB, ") \
					_T("   substr(a.hc_cardno,6,10) as MA_BHXH, ") \
					_T("   substr(a.hc_cardno,1,15) as MA_THE, ") \
					_T("   get_patientname(hd_docno) as HO_TEN, ") \
					_T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ") \
					_T("   case when hp_sex ='M' then 1 else 2 end as gioi_tinh, ") \
					_T("   hp_workplace as DON_VI, ") \
					_T("   hc_diagnostic as CHANDOAN_DIEUTRI, ") \
					_T("   to_char(hc_fromdate, 'YYYYMMDD') as TU_NGAY, ") \
					_T("   to_char(hc_todate, 'YYYYMMDD') as DEN_NGAY, ") \
					_T("   hc_fathername as HO_TEN_CHA, ") \
					_T("   hc_mothername as HO_TEN_ME, ") \
					_T("   '%s' as THU_TRUONG_DV, ") \
					_T("   '000000/CCHN-BQP' as MA_CCHN, ") \
					_T("   'Bác Sỹ Bệnh Viện Tưqđ 108' as TEN_NGUOI_HANH_NGHE, ") \
					_T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ") \
					_T(" 			case when substr(a.hc_cardno, 6,2) ='KT'  then '1' else null end as TEKT,") \
					_T("   'CT07' as MAU_SO  ") \
					_T("   from HMS_CHUNGNHANNGHIVIEC   a") \
					_T("   left join hms_doc on (a.hc_docno = hd_docno) ") \
					_T("   left join hms_card  b on (b.hc_idx = hd_cardidx and b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)") \
					_T("   left join hms_clinical_record on (hcr_docno = hd_docno) ") \
					_T("   left join hms_patient on (hp_patientno = hd_patientno) ") \
					_T("   where hc_isthaisan='N' and ( (hd_status='T' and hd_enddate between to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') ") \
					_T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') ") \
					_T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ) ") \
					_T("   or ( hcr_status='T' and hcr_dischargedate between to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') and hd_docno = %ld )  ) ") \
					_T("   order by hc_bookno, hc_index"),m_szCeoName,szFromDate, szToDate,nDocumentNo, szFromDate, szToDate,nDocumentNo);
				
				_tprintf(_T("\r\n CT07: %s"),szSQL);
				strData=GetXMLCT(szSQL, szType);
				if(strData.length() > 0)
				{
					fs << "<FILEHOSO>" << endl;
					fs << "<LOAIHOSO>CT07</LOAIHOSO>" << endl;
					fs << "<NOIDUNGFILE>";
					fs << strData.c_str();
					fs <<"</NOIDUNGFILE>" << endl;
					fs << "</FILEHOSO>" << endl;
				}
		}
		if(szType == _T("CT05"))
		{
			strData.clear();
			szSQL.Format(_T(" select '' as ma_ct,") \
			_T(" 	hbc_number||'/'||hbc_bookno||'/'||hbc_year as so_seri,") \
			_T("	hbc_bookno as QUYEN_SO, ") \
			_T("	hbc_number as SO, ") \
			_T(" 	substr(hbc_bhyt,6,10) as MA_BHXH_NND,") \
			_T(" 	substr(hbc_bhyt,1,15) as MA_THE_NND,") \
			_T(" 	hbc_patientname as HOTEN_NND,") \
			_T(" 	to_char(hp_birthdate, 'YYYYMMDD') as NGAYSINH_NND,") \
			_T(" 	case when length(trim(ss_vndesc)) >0 then trim(ss_vndesc) else CAST(hp_ethnic AS nvarchar2(2)) end as MA_DANTOC_NND,") \
			_T(" 	hbc_idcard as SO_CMND_NND,") \
			_T(" 	to_char(hbc_ngaycap, 'YYYYMMDD') as  NGAYCAP_CMND_NND,") \
			_T(" 	hbc_placeregistration as NOICAP_CMND_NND,") \
			_T(" 	case when length(hp_dtladdr) >0 then hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid) ") \
			_T(" 	else hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid)  end as NOI_DK_THUONGTRU_NND	,") \
			_T(" 	hbc_tencha as HO_TEN_CHA,") \
			_T(" 	hbc_childrenname as TEN_CON,") \
			_T(" 	case when hbc_sex ='M' then 1 else 2 end as gioi_tinh_con,") \
			_T(" 	hbc_numberlive as SO_CON,") \
			_T(" 	cast(hbc_weigh*1000 as integer) as CAN_NANG_CON,") 
			_T(" 	to_char(hbc_datetimeofbirth,'YYYYMMDDHH24MI') as NGAY_SINH_CON,") \
			_T(" 	hbc_hospitalname as NOI_SINH_CON,") \
			_T(" 	hbc_healthstatus as TINH_TRANG_CON,") \
			_T(" 	case when hbc_surgery='Y' then 1 else 0 end as SINHCON_PHAUTHUAT, ") \
			_T(" 	case when hbc_underweeks32='Y' then 1 else 0 end as SINHCON_DUOI32TUAN, ") \
			_T(" 	hbc_healthstatus as ghi_chu,") \
			_T(" 	get_username(hbc_themidwifery) as NGUOI_DO_DE,") \
			_T(" 	case when hbc_voter is not null then get_username(hbc_voter) else get_username(hbc_themidwifery)  end as NGUOI_GHI_PHIEU,") \
			_T(" 	'%s' as THU_TRUONG_DVI,") \
			_T(" 	to_char(hcr_dischargedate ,'YYYYMMDD') as NGAY_CT,") \
			_T("	hbc_number as SO, hbc_bookno as SO_QUYEN ") \
			_T("  from hms_clinical_record ") \
			_T(" left join hms_birthcertificate on (hbc_docno = hcr_docno) ") \
			_T(" left join hms_patient on (hp_patientno = hcr_patientno)") \
			_T(" left join sys_sel on (ss_id='sys_ethnic' and cast( ss_code as integer) = hp_ethnic) ") \
			_T(" where hcr_dischargedate between TO_TIMESTAMP ('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ('%s:59','YYYY/MM/DD HH24:MI:SS') ") \
			_T(" and hbc_docno=%ld ") \
			_T(" order by hcr_dischargedate") ,m_szCeoName, szFromDate, szToDate,nDocumentNo);
		//	szType= _T("CT05");
			_tprintf(_T("\r\n CT05: %s"),szSQL);
			strData=GetXMLCT(szSQL, szType);
		
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT05</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
		}

			strData.clear();
		if(szType == _T("CT03"))
		{
			szSQL.Format(_T("  select '' as SO_LUU_TRU, ") \
				_T("			'101/014/'||substr(extract(YEAR FROM hcr_admitdate),3,2)||'/'||TO_CHAR(hcr_numinhospital,'FM000000') as MA_YTE, ") \
				_T("			hd_docno as MA_CT,") \
				_T(" 			'' as SO_SERI,") \
				_T(" 			sd_insuranceid as MA_KHOA , ") \
				_T(" 			 substr(hd_cardno,6,10) as MA_BHXH,") \
				_T(" 			 substr(hd_cardno,1,15) as MA_THE,") \
				_T(" 			 get_patientname(hd_docno) as HO_TEN,") \
				_T(" 			to_char(hp_birthdate,'YYYYMMDD') as NGAY_SINH,") \
				_T(" 			case when hp_sex ='M' then 1 else 2 end as GIOI_TINH,") \
				_T(" 	case when length(trim(ss_vndesc)) >0 then trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end as MA_DANTOC,") \
				_T(" 			sys_sel_getname('sys_occupation', cast(hp_occupation as nvarchar2(254))) as NGHE_NGHIEP,") \
				_T(" 			 case when length(hp_dtladdr) >0 then hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid) ") \
				_T(" 				else hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  DIA_CHI,") \
				_T(" 			to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,") \
				_T(" 			to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,") \
				_T("			0 as DINH_CHI_THAI_NGHEN, ") \
				_T(" 			'' as TUOI_THAI,") \
				_T(" 			hcr_maindisease as CHAN_DOAN,") \
				_T(" 			case when length(trim(hcr_gmethod)) >5  then hcr_gmethod else hcr_maindisease end as PP_DIEUTRI,") \
				_T("			'' as GHI_CHU, ") \
				_T(" 			'%s'  as THU_TRUONG_DVI,") \
				_T("			'%s' as NGUOI_DAI_DIEN, ") \
				_T(" 			sd_cchn_truong_khoa as MA_TRUONGKHOA,") \
				_T("			sd_cchn_truong_khoa as MA_CCHN_TRUONGKHOA, ") \
				_T(" 			sd_ten_truong_khoa as TEN_TRUONGKHOA,") \
				_T(" 			to_char(hcr_dischargedate, 'YYYYMMDD') as NGAY_CHUNG_TU,") \
				_T(" 			case when substr(hd_cardno, 6,2) ='KT'  then '1' else '0' end as TEKT, ") \
				_T(" 				case when hnr_reference_docno >0 then hnr_fathername when hd_relation=1 then hd_relative else cast(' Khong ro' as nvarchar2(45)) end as HO_TEN_CHA, ") \
				_T(" 			case when hnr_reference_docno >0 then get_patientname(hnr_reference_docno) when hd_relation=2  then hd_relative else cast('Không di?n' as nvarchar2(128)) end as HO_TEN_ME  ") \
				_T(" 		 from hms_clinical_record ") \
				_T(" 		 left join hms_doc on (hd_docno = hcr_docno)") \
				_T("		left join HMS_NEWBORN_RECORD on (hd_docno = hnr_docno) ") \
				_T(" 		 left join hms_patient on (hp_patientno = hd_patientno)") \
				_T("		 left join sys_sel on (ss_id='sys_ethnic' and cast(ss_code as integer) = hp_ethnic) ") \
				_T(" 		 left join sys_dept on (sd_id = hcr_dischargedept)") \
				_T(" 		 where hcr_dischargedate between TO_TIMESTAMP ('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ") \
				_T(" 		 order by  hcr_dischargedate ") , m_szCeoName,m_szCeoName, szFromDate, szToDate, nDocumentNo);
			
		//	szType= _T("CT03");
			_tprintf(_T("\r\n CT03: %s"),szSQL);
			strData=GetXMLCT(szSQL, szType);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT03</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

		}
		if(szType == _T("CT04"))
		{
			strData.clear();
			szSQL.Format(_T("  select '' as MA_CT, ") \
				_T(" 			'' as SO_SERI,") \
				_T(" 			 substr(hd_cardno,6,10) as MA_BHXH,") \
				_T(" 			 substr(hd_cardno,1,15) as MA_THE,") \
				_T(" 			 get_patientname(hd_docno) as HO_TEN,") \
				_T(" 			to_char(hp_birthdate,'YYYYMMDD') as NGAY_SINH,") \
				_T(" 			case when hp_sex ='M' then 1 else 2 end as GIOI_TINH,") \
				_T(" 	case when length(trim(ss_vndesc)) >0 then trim(ss_vndesc) else  cast(hp_ethnic as nvarchar2(2)) end as MA_DANTOC,") \
				_T(" 			sys_sel_getname('sys_occupation', cast(hp_occupation as nvarchar2(254))) as NGHE_NGHIEP,") \
				_T(" 			 case when length(hp_dtladdr) >0 then hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid) ") \
				_T(" 				else hp_dtladdr||','|| hms_getaddress(hp_provid,hp_distid, hp_villid)  end as  DIA_CHI,") \
				_T(" 			'' as HO_TEN_CHA,") \
				_T(" 			'' as HO_TEN_ME, ") \
				_T("			'' as NGUOI_GIAM_HO, ") \
				_T("			'' as TEN_DONVI, ") \
				_T(" 			to_char(hd_admitdate,'YYYYMMDDHH24MI') as NGAY_VAO,") \
				_T(" 			to_char(hcr_dischargedate,'YYYYMMDDHH24MI') as NGAY_RA,") \
				_T(" 			hcr_admitdisease as CHAN_DOAN_VAO,") \
				_T(" 			hcr_maindisease as CHAN_DOAN_RA,") \
				_T(" 			hcr_pathological ||'\r\n'||hcr_systemic as QT_BENHLY,") \
				_T(" 			hcr_tests as TOMTAT_KQ,") \
				_T(" 			case when length(trim(hcr_gmethod)) >5  then hcr_gmethod else hcr_maindisease end as PP_DIEUTRI,") \
				_T("			'' as NGAY_SINHCON, ") \
				_T("			'' as NGAY_CHETCON, ") \
				_T("			'' as SO_CONCHET, ") \
				_T("			hcr_ttrang_rv  as TT_RAVIEN, ") \
				_T("			'' as GHI_CHU, ") \
				_T(" 			'%s'  as NGUOI_DAI_DIEN,") \
				_T(" 			to_char(hcr_dischargedate, 'YYYYMMDD') as NGAY_CT,") \
				_T(" 			case when substr(hd_cardno, 6,2) ='KT'  then '1' else '0' end as TEKT ") \
				_T(" 		 from hms_clinical_record ") \
				_T(" 		 left join hms_doc on (hd_docno = hcr_docno)") \
				_T(" 		 left join hms_patient on (hp_patientno = hd_patientno)") \
				_T("		 left join sys_sel on (ss_id='sys_ethnic' and cast(ss_code as integer) = hp_ethnic) ") \
				_T(" 		 left join sys_dept on (sd_id = hcr_dischargedept)") \
				_T(" 		 where hcr_dischargedate between TO_TIMESTAMP ('%s:00','YYYY/MM/DD HH24:MI:SS')  AND TO_TIMESTAMP ('%s:59','YYYY/MM/DD HH24:MI:SS')  and hcr_docno = %ld ") \
				_T(" 		 order by  hcr_dischargedate "), m_szCeoName, szFromDate, szToDate, nDocumentNo);
			
			
			_tprintf(_T("\r\n CT04: %s"),szSQL);
			strData=GetXMLCT(szSQL, szType);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT04</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
		}
	
			strData.clear();
		if(szType == _T("CT06"))
		{
			szSQL.Format(_T(" select hc_serial as MA_CT, ") \
				_T("   hc_serial as SO_SERI, ") \
				_T("   hd_docno as SO_KCB, ") \
				_T("   substr(a.hc_cardno,6,10) as MA_BHXH, ") \
				_T("   substr(a.hc_cardno,1,15) as MA_THE, ") \
				_T("   get_patientname(hd_docno) as HO_TEN, ") \
				_T("   to_char(hp_birthdate, 'YYYYMMDD') as ngay_sinh, ") \
				_T("   hp_workplace as TEN_DVI, ") \
				_T("   hc_diagnostic as CHAN_DOAN, ") \
				_T("   to_char(hc_fromdate, 'YYYYMMDD') as NGAY_VAO, ") \
				_T("   to_char(hc_todate, 'YYYYMMDD') as NGAY_RA, ") \
				_T("	'' as NGUOI_DAI_DIEN,  ") \
				_T("   '000000/CCHN-BQP' as MA_BS, ") \
				_T("   'Bác Sỹ Bệnh Viện Tưqđ 108' as TEN_BS, ") \
				_T("   to_char(hd_enddate, 'YYYYMMDD') as NGAY_CHUNG_TU, ") \
				_T("	to_char(hd_enddate, 'YYYYMMDD') as NGAY_CT ") \
				_T("   from HMS_CHUNGNHANNGHIVIEC   a") \
				_T("   left join hms_doc on (a.hc_docno = hd_docno) ") \
				_T("   left join hms_card  b on (b.hc_idx = hd_cardidx and b.hc_cardno = hd_cardno and b.hc_patientno = hd_patientno)") \
				_T("   left join hms_clinical_record on (hcr_docno = hd_docno) ") \
				_T("   left join hms_patient on (hp_patientno = hd_patientno) ") \
				_T("   where hc_isthaisan='Y' and ( (hd_status='T' and hd_enddate between to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') ") \
				_T("   and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') ") \
				_T("   and hd_suggestion not in ('C','D') and hd_docno = %ld ) ") \
				_T("   or ( hcr_status='T' and hcr_dischargedate between to_timestamp ('%s:00','YYYY/MM/DD HH24:MI:SS') and to_timestamp ('%s:59','YYYY/MM/DD HH24:MI:SS') and hd_docno = %ld )  ) ") \
				_T("   order by hc_bookno, hc_index"),szFromDate, szToDate,nDocumentNo, szFromDate, szToDate,nDocumentNo);
	
			//szType= _T("CT06");
			_tprintf(_T("\r\n CT06: %s"),szSQL);
			strData=GetXMLCT(szSQL, szType);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>CT06</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
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
	tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"),nCount);
	SetStatusText(tmpStr,0);
	EndWaitCursor();
	return 0;
}
void CMainFrame::OnFileAutosys()
{

	UpdateData(true);
	bIsAutoCheckout = !bIsAutoCheckout;
	bIsAutoSysXML = !bIsAutoSysXML;

	if(bIsAutoCheckout)
		m_pMainMenu->CheckMenuItem(ID_FILE_AUTOSYSXML, MF_CHECKED|MF_BYCOMMAND);
	else
		m_pMainMenu->CheckMenuItem(ID_FILE_AUTOSYSXML, MF_UNCHECKED|MF_BYCOMMAND);
	_tprintf(_T("\r\n%d"), bIsAutoCheckout);
	
}
bool CMainFrame::AutoCheckOut()
{
	UpdateData(true);
	if (bIsAutoCheckout ==false)
	{
		return false;
	}
	CString szSQL;
	CRecord rs(&m_db);
	CString tmpTem;
	
	szSQL.Format(_T(" SELECT distinct hfe_docno, hfe_invoiceno ") \
				_T("	FROM hms_fee_invoice ") \
				_T("  left join hms_doc on (hd_docno= hfe_docno) ") \
				_T("	LEFT JOIN bh_thongtinchitiet_tonghop ON(ma_lk= cast(hfe_docno as nvarchar2(8))||'-'||cast(hfe_treattime as nvarchar2(5))) ") \
				_T("	WHERE hfe_discount >0 ") \
				_T("	AND hfe_date BETWEEN CAST_STRING2TIMESTAMP('%s 00:00') AND CAST_STRING2TIMESTAMP('%s 23:59') ") \
				_T(" and ( (hfe_class='E' and  substr(hd_cardno,4,2) <> '97' ) or (select nvl(count(*),0) from hms_fee_invoice_card where hfec_docno =hfe_docno  and hfec_invoiceno =hfe_invoiceno   and substr(hfec_cardno,4,2) <> '97' and hfec_regdate > '14-SEP-52') >0  ) ") \
				_T("	AND hfe_type     in ('P','I')  ") \
				_T("	and hfe_status ='P' and  (ma_lk is null or trangthaigui='D'  )  "), GetSysDate(),GetSysDate());
	int nCount=rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		szSQL.Format(_T("BH_CHECKOUT_4210(%d,%d)"),str2long(rs.GetValue(_T("hfe_docno"))),str2long(rs.GetValue(_T("hfe_invoiceno"))));
		tmpTem=ExecDML(szSQL);
		_tprintf(_T("%s"),szSQL);
		rs.MoveNext();
	}
	return true;
}
bool CMainFrame::WriteCheckOut()
{
	UpdateData(true);
	if (bIsAutoSysXML ==false)
	{
		return false;
	}

	CRecord rs(&m_db), crs(&m_db);
	CString szSQL, szCardNo, tmpStr, szMaLK;
//	bool bOk;
	int nCount=0;
	long nDocument=0;
	szSQL.Format(_T("SELECT * FROM bh_thongtinchitiet_tonghop  ") \
				_T("WHERE trangthaigui = 'Y' AND TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI')   ") \
				_T(" BETWEEN to_timestamp('%s 00:00', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s 23:59', 'YYYY/MM/DD HH24:MI:SS')  and substr(ma_the,4,2) <>'97' "), GetSysDate(), GetSysDate());
	rs.ExecSQL(szSQL);
_tprintf(_T("\r\n%s"), szSQL);
	if(rs.GetRecordCount() <= 0)
		return false;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("ma_lk"),szMaLK);
		nCount= OnWriteCheckOut4210(szMaLK);
		rs.MoveNext();
	}
	return true;
}

STLString CMainFrame::GetXMLCT(CString szSQL,CString szType)
{	
	CRecord rs(&m_db), crs(&m_db);
	CString tmpStr,Ma_lk,szFieldName,szData;
	xmlDocPtr doc = NULL;
	xmlNodePtr cdata= NULL;
	xmlNodePtr rootNode = NULL;
	xmlNodePtr node = NULL;
	xmlNodePtr xmlNode = NULL;
	xmlNodePtr childNode = NULL;
	xmlNodePtr childNode1 = NULL;
	xmlNodePtr childNode2 = NULL;
	xmlNodePtr childNode3 = NULL;

	CStringA szUtf8;
	szUtf8 = UTF8Encode(szType, szType.GetLength());

	doc = xmlNewDoc( NULL);
	CString szName,szValue;
	szName= _T("xmlns:xsd");
	szValue= _T("http://www.w3.org/2001/XMLSchema");
	rootNode = xmlNewNode( NULL , (const xmlChar*) (LPCSTR) szUtf8);
	CLibXMLHelper::SetValue( rootNode , (LPCTSTR) szName , (LPCTSTR)szValue );
	szName= _T("xmlns:xsi");
	szValue= _T("http://www.w3.org/2001/XMLSchema-instance");
	CLibXMLHelper::SetValue( rootNode , (LPCTSTR) szName , (LPCTSTR)szValue );
	xmlDocSetRootElement( doc , rootNode );
	CLibXMLHelper::xmlEnableWriteHeaderContent(0);
	//tong hop
	//node = CLibXMLHelper::CreateChildElement(xmlNode, _T("tonghop"), _T(""));
	STLString outString;
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		outString.empty();
		return outString;
	}
		for (int i =0; i < rs.GetFieldCount();i++)
		{
			szFieldName = rs.GetFieldName(i);
			rs.GetValue(szFieldName, szData);
			szFieldName.MakeUpper();
			//if(szFieldName== _T("HO_TEN") || szFieldName== _T("DIA_CHI")|| szFieldName== _T("TEN_BENH") )
			//{
			//	AddCDataBlock(doc, rootNode, szFieldName, szData);
			//}

			//
			//if(szFieldName == _T("TRANGTHAIGUI") || szFieldName==_T("TIME_PROCESS")
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
			
			
			childNode = CLibXMLHelper::CreateChildElement(rootNode , (LPCTSTR)szFieldName, szData); 
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
void CMainFrame::OnFileInsurancenameedit()
{
	// TODO: Add your command handler code here
	CINSFeeNameEditor dlg(this);
	dlg.DoModal();
}
