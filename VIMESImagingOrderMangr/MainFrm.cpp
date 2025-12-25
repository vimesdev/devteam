// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "resource.h"
#include ".\mainfrm.h"
#include "VIMESPACSPermissionDialog.h"
#include "SYSPasswordChangeDialog.h"
#include "PACSResultFormDialog.h"
#include "HMSPACSFormSetupDialog.h"
#include "HMSConfirmDialog.h"
#include "PMSDailyDrugOrder.h"
#include "HMSReportForms\HMSReportFormDialog.h"
#include "DcmImage/DcmManager.h"
#include "MedicalExportOrderDialog.h"
#include "HMSPrescriptionGroupItemsDialog.h"
#include "HMSAnestheticScheduleDialog.h"
#include "IMGContrastMaterialSetupDialog.h"
#include "HMSDefaultUserSetupDlg.h"
#include "HMSDoctorInfo.h"
#include "HMSGetOrgDeptInfo.h"
#include "HMSPerforRoomSetupDlg.h"
#include "HMSPerforRoomOrderSetupDlg.h"
#include "HMSRoomSetupDialog.h"
#include "MFCCaptionBarEx.h"
#include "MFCWidget.h"

#pragma comment(lib, "../Lib/HMSExt.lib")
#pragma comment(lib, "../Lib/HMSCore.lib")
#pragma comment(lib, "../Lib/HMSReportForms.lib")
#pragma comment(lib, "../lib/VIMESDcmImage.lib")
#pragma comment(lib, "../lib/libcapture.lib")
/*
int GetEncoderClsid(const WCHAR* format, CLSID* pClsid)
{
   UINT  num = 0;          // number of image encoders
   UINT  size = 0;         // size of the image encoder array in bytes

   ImageCodecInfo* pImageCodecInfo = NULL;

   GetImageEncodersSize(&num, &size);
   if(size == 0)
	  return -1;  // Failure

   pImageCodecInfo = (ImageCodecInfo*)(malloc(size));
   if(pImageCodecInfo == NULL)
	  return -1;  // Failure

   GetImageEncoders(num, size, pImageCodecInfo);

   for(UINT j = 0; j < num; ++j)
   {
	  if( wcscmp(pImageCodecInfo[j].MimeType, format) == 0 )
	  {
		 *pClsid = pImageCodecInfo[j].Clsid;
		 free(pImageCodecInfo);
		 return j;  // Success
	  }
   }

   free(pImageCodecInfo);
   return -1;  // Failure
}

*/


void ParseResultFields(LPCTSTR lpszData, LPCTSTR lpszSeperators, CStringArray& fields)
{
	bool bFlag = false;
	CString tmpStr;
	LPCTSTR pstr = lpszData;
	fields.RemoveAll();
	tmpStr.Empty();
	if (*pstr == NULL)
		return;
	while (*pstr != NULL)
	{
		bFlag = false;
		for (int i = 0; i < _tcslen(lpszSeperators); i++)
		{
			if (*pstr == lpszSeperators[i]) {
				fields.Add(tmpStr);
				tmpStr.Empty();
				bFlag = true;
				break;
			}
		}
		if (!bFlag)
			tmpStr += *pstr;
		pstr++;
	}
	fields.Add(tmpStr);
}



IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_FILE_CHANGEDEPARTMENT, OnChangeDepartment)
	ON_COMMAND(ID_COMMAND_SETUPFORMRESULT, OnCommandSetupformresult)
	ON_COMMAND(ID_COMMAND_DAILYORDER, OnCommandDailyorder)
	ON_COMMAND(ID_FILE_MEDICALCABINETMANAGEMENT, OnFileMedicalcabinetmanagement)
	ON_COMMAND(ID_FILE_REPORT32786, OnFileReport32786)
	ON_COMMAND(ID_SETUP_SETUPPACSFROM, OnSetupSetuppacsfrom)
	ON_COMMAND(ID_SETUP_AVERCAPTURE, OnAverCapture)
	ON_COMMAND(ID_FILE_TRACKINGMEDICALCABINET, OnFileTrackingmedicalcabinet)
	ON_COMMAND(ID_FILE_EXPORTTESTBREAKORDERSHEET, OnFileExporttestbreakordersheet)
	ON_COMMAND(ID_SETUP_SETUPHITSIMAGING, OnSetupSetuphitsimaging)
	ON_COMMAND(ID_SETUP_PRESCRIPTIONSCONTRADICTIONS, OnSetupPrescriptionscontradictions)
	ON_COMMAND(ID_SETUP_SETUPGROUP, OnFileSetupOperationGroup)
	ON_COMMAND(ID_Menu, OnMenuAnestheticSheet)
	ON_COMMAND(ID_FILE_BOSUNGTUTRUCKHONGCOBENHNHAN, OnFileBosungtutruckhongcobenhnhan)
	ON_COMMAND(ID_SETUP_CONTRASTMATERIALSETUP, OnSetupContrastmaterialsetup)
	ON_COMMAND(ID_COMMAND_DOCTORINFO, OnCommandDoctorinfo)
	ON_COMMAND(ID_SETUP_SETUPPERFROMEROOM, OnSetupPerfromeRoom)
	ON_COMMAND(ID_SETUP_SETUPPERFROMEORDERROOM, OnSetupPerfromeOrderRoom)
	ON_COMMAND(ID_SETUP_ROOMSTATUSSETUP, OnRoomStatus)

END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleName = _T("QUẢN LÝ CHẨN ĐOÁN HÌNH ẢNH");
	m_szModuleID = _T("PACS");
	m_szSize = CSize(1024, 620);
	m_szVersion = _T("5.8");
	SetLayoutStyle(LAYOUT_TABCTRL);
	m_bHISReference = false;

	m_bExternalInput = FALSE;
	m_nDownloadOrderID = 0;
	m_bDicomMode = false;
	m_bAverCapture = FALSE;
	m_szAverCaptureName.Empty();
}

CMainFrame::~CMainFrame()
{

}

#include "Gdiplus.h"
using namespace Gdiplus;

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew)
{
    ((CMainFrame *)pWnd)->OnTabSelectChange(nOld, nNew);
}
#define CMD_SIGNATURE CMD_USER + 12
//#include "ReportUtils.h"
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{

	CString tmpStr;
	TranslateString(_T("QUẢN LÝ CHẨN ĐOÁN HÌNH ẢNH"), tmpStr);
	SetWindowText(tmpStr);

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
    ((CGuiTabCtrl *)GetPane())->SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);

    m_pAppBar->SetCaptionHeight(30);
    m_pAppBar->m_szItemSize = CSize(125, 30);
    m_pAppBar->Add(new CWidgetItem(CMD_SIGNATURE, icons::collections_bookmark,
                                   L"EMR", L"Hồ sơ bệnh án điện tử EMR"));


	//	CreateToolBar();
	//	ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX, 0);
	//	CWnd *pWnd = GetPanel();
	//	pWnd->ShowWindow(SW_HIDE);
	m_wndPatientList.Create(this);
	m_wndPatientProfile.Create(this);
	m_wndImageCapture.Create(this);

	//m_wndOperationResult.Create(this);
	AddView(_T("Patient List"), &m_wndPatientList);
	AddView(_T("Patient Profile"), &m_wndPatientProfile);
	AddView(_T("Image Capture"), &m_wndImageCapture);
	//AddView(_T("Operation Result"), &m_wndOperationResult);
	if (GetCurrentDepartmentID() == _T("C7"))
	{
		m_wndMaterialView.Create(this);
		AddView(_T("Inpackage Material"), &m_wndMaterialView);
	}
    m_wndSignaturePendingView.Create(this);
    AddView(_T("Signature"), &m_wndSignaturePendingView);
	CenterWindow();

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	//TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	//szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	//szStatus.AppendFormat(_T(" - Host:%s"), GetHost(), GetDatabase());
	szStatus.Format(_T("%s - %s - %s"), GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy), GetHost());
	SetStatusText(szStatus, 1);

	//SetForegroundWindow();

	SetActivePane(0);



	//	CDcmManager dcm;
	//	Bitmap* newBitmap = new Bitmap(_T("c:\\temp\\image.bmp"));
	//	dcm.AddBitmap(newBitmap);
	//	Bitmap* newBitmap2 = new Bitmap(_T("c:\\temp\\image2.bmp"));
	//	dcm.AddBitmap(newBitmap2);
	////	dcm.AddBitmap(newBitmap2);
	//	dcm.SaveAsDicomFile(_T("c:\\temp\\test.dcm"));	

			//Copy system.conf from server
		/*CString szRemotePath, szLocalPath;
		TCHAR Buffer[MAX_PATH];
		::GetCurrentDirectory(MAX_PATH, Buffer);
		szLocalPath = Buffer;
		szLocalPath.AppendFormat(_T("\\system.conf"));
		szRemotePath = _T("\\\\10.0.0.95\\c\\VIMES_NOITRU\\system.conf");
		CopyFile(szRemotePath, szLocalPath, FALSE);*/
	RecalcLayout();

	return 0;
}


void CMainFrame::OnInitializes()
{
	CHMSMainFrame::OnInitializes();


	/*
		if(!m_wndSplitterV.CreateStatic(this, 1, 2))
			return;
	//Sleep(15000);
		m_wndPatientList.Create(&m_wndSplitterV);
		m_wndSplitterV.CreateViewEx(0,0, CSize(390, 700), &m_wndPatientList);

		m_wndTest.Create(&m_wndSplitterV);
		m_wndSplitterV.CreateViewEx(0,1, CSize(420, 700), &m_wndTest);

		CenterWindow();
		m_wndPatientList.SetActiveWindow();
	*/
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&m_db);
	CString szSQL, szCert, szOrgDept;

	szSQL.Format(_T("select hc_imagedir from hms_config"));
	m_szImageDir.Format(_T("%s:/usr/images"), GetHost());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()) {
		rs.GetValue(_T("hc_imagedir"), m_szImageDir);
		//_msg(_T("%s %s %s"), m_szImageDir, GetHost(), GetDatabase());
	}
	szSQL.Format(_T("SELECT su_deptid, su_roomid, su_groupid,su_hms_xdept, SU_ZONEFORDEPT FROM sys_user WHERE lower(su_userid)=lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("su_deptid"), m_szDeptID);
		rs.GetValue(_T("su_roomid"), m_nRoomID);
		rs.GetValue(_T("su_groupid"), m_nUserGroup);
		rs.GetValue(_T("su_hms_xdept"), m_szXDeptID);
		rs.GetValue(_T("SU_ZONEFORDEPT"), m_szZoneID);
	}


	szSQL.Format(_T("SELECT sd_type FROM sys_dept WHERE sd_id='%s' "), m_szDeptID);
	rs.ExecSQL(szSQL);


	bool bExit = false;
	CString tmpStr;

	if (rs.IsEOF())
		bExit = true;
	else
	{

		rs.GetValue(_T("sd_type"), tmpStr);
		if (tmpStr != _T("HA") && tmpStr != _T("DT") && tmpStr != _T("XN") && tmpStr != _T("KB"))
			bExit = true;
	}
	tmpStr = GetCurrentUser();
	tmpStr.MakeLower();
	if (bExit && tmpStr != _T("admin"))
	{
		ShowMessageBox(_T("Permission Denied."));
		exit(0);
	}

	CString szText;
	TranslateString(m_szModuleName, szText);
	szText.AppendFormat(_T(" [%s]"), m_szDept);
	SetWindowText(szText);


	//Thiet lap duong dan, thu muc luu tru hinh anh goc

	::GetCurrentDirectory(MAX_PATH, szPath);
	m_szGetCurrentDirectoryPath.Format(_T("%s\\Images"), szPath);

	SetTimer(1, 1000, NULL);



	m_bAverCapture = AfxGetApp()->GetProfileInt(_T("SETTINGS"), _T("AVERCAPTURE"), 0);
	if (m_pMainMenu)
	{
		if (m_bAverCapture) {
			m_pMainMenu->CheckMenuItem(ID_SETUP_AVERCAPTURE, MF_CHECKED | MF_BYCOMMAND);
		}
		else {
			m_pMainMenu->CheckMenuItem(ID_SETUP_AVERCAPTURE, MF_UNCHECKED | MF_BYCOMMAND);
		}
	}

	long ret = 10;
	szSQL.Format(_T("HMS_GET_DOC_CER_INFOR('%s') "), pMF->GetCurrentUser());
	ret = str2long(pMF->ExecDML(szSQL));
	if (ret <= 0)
	{
		ShowMessageBox(_T("Tài khoản đăng nhập có thông tin chứng chỉ hành nghề chưa hợp lệ, hãy cập nhật thông tin đúng để sử dụng chương trình!"), MB_ICONWARNING);
		CHMSDoctorInfo dlg(this);
		dlg.DoModal();
		szCert = dlg.m_szCertificate;
		szCert.Trim();
		if ((szCert.IsEmpty()) || (szCert.GetLength() < 5))
		{
			ShowMessageBox(_T("Chứng chỉ hành nghề phải có độ dài >=5 ký tự"), MB_ICONERROR);
			exit(0);
		}


	}

	//Check thông tin khoa gốc
	long vret = 10;
	szSQL.Format(_T("HMS_GET_ORG_DEPT_INFOR('%s') "), GetCurrentUser());
	vret = str2long(ExecDML(szSQL));

	if (vret <= 0)
	{
		ShowMessageBox(_T("Tài khoản đăng nhập chưa có thông tin khoa gốc, hãy cập nhật thông tin đúng để sử dụng chương trình!"), MB_ICONWARNING);
		CHMSGetOrgDeptInfor dlg(this);
		dlg.DoModal();
		szOrgDept = dlg.m_szOrgDeptKey;

		if (szOrgDept.IsEmpty())
		{
			ShowMessageBox(_T("Thông tin khoa gốc đang để trống!"), MB_ICONERROR);
			exit(0);
		}
	}

	if (pMF->GetCurrentDepartmentID() == _T("C8-C") || pMF->GetCurrentDepartmentID() == _T("C7"))
	{
		CHMSDefaultUserSetupDlg dlg(this);
		dlg.DoModal();
	}


}

BOOL CMainFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	return CHMSMainFrame::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}

BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
    if (wParam == CMD_SIGNATURE && m_nDocumentNo > 0)
    {
        m_wndPatientProfile.OnViewEMR();
    }
	return CHMSMainFrame::OnCommand(wParam, lParam);
}


void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
	CHMSMainFrame::OnSize(nType, cx, cy);
	// TODO: Add your message handler code here
	if (m_wndImageCapture.IsWindowVisible())
	{
		m_wndImageCapture.Invalidate();
	}
}

void CMainFrame::OnSetupDescribegroupsetup()
{
}

void CMainFrame::OnSetupDescribeentrysetup()
{

}


CString CMainFrame::GetDeptName() {
	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sd_name FROM sys_dept Where sd_id='%s' "), m_szDeptID);
	rs.ExecSQL(szSQL);
	return rs.GetStringValue();
}


void CMainFrame::OnSetupPermissionsetup()
{
	CString szUser = GetCurrentUser();
	if (szUser.CompareNoCase(_T("admin")) != 0)
	{
		ShowMessageBox(_T("Permission is denied"), MB_OK);
		return;
	}

	CVIMESPACSPermissionDialog dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnTimer(UINT nIDEvent)
{
	if (nIDEvent == 1) {
		/*

				CFileFind finder;

		   CString strWildcard(_T("Images"));
		   strWildcard += _T("\\*.*");
		   BOOL bWorking = finder.FindFile(strWildcard);
			while(bWorking)
			{
				bWorking = finder.FindNextFile();
				if (finder.IsDots() || finder.IsDirectory())
				 continue;
				SetWindowText(finder.GetFileName());
			//	Sleep(500);

			}
			finder.Close();
		*/

	}

	CHMSMainFrame::OnTimer(nIDEvent);
}


void CMainFrame::OnSetupInstrumentprotocol()
{
}

void CMainFrame::OnSetupInstrumentsetting()
{
}

BOOL CMainFrame::PreTranslateMessage(MSG* pMsg)
{
	/*if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F2)
	{
		return FALSE;
	}*/

	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_F2)
		{
			SetActivePane(0);
			m_wndPatientList.m_wndPatientName.SetSel(0, 20);
			return FALSE;
		}
		if (pMsg->wParam == VK_F3)
		{
			SetActivePane(1);
			return FALSE;
		}
		if (pMsg->wParam == VK_F5)
		{
			SetActivePane(2);
			return FALSE;
		}
	}

	return CHMSMainFrame::PreTranslateMessage(pMsg);
}

void CMainFrame::OnFileCleanuptemplate()
{
	WIN32_FILE_ATTRIBUTE_DATA wfa;
	/*
		CFileFind finder;
		BOOL bWorking = finder.FindFile(_T("*.*"));
		while (bWorking)
		{
			bWorking = finder.FindNextFile();
		//TRACE(_T("%s\n"), (LPCTSTR)finder.GetFileName());
			::GetFileAttributesEx(finder.GetFileName(), NULL, &wfa);
			_msg(_T("%s"), wfa.ftCreationTime);
		}
	*/
}

void CMainFrame::OnFileChangepassword()
{



	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();

}

void CMainFrame::OnSetupParsesampleresult()
{
}

void CMainFrame::OnFileConnectrs232()
{
}

void CMainFrame::OnCommandPreviewresult()
{
}

void CMainFrame::OnCommandSetupformresult()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//if(GetCurrentUser() == _T("admin"))

	if (pMF->m_UserInfo.su_groupid == _T("A"))
	{
		CPACSResultFormDialog dlg(this);
		dlg.DoModal();
	}
	else
	{
		ShowMessageBox(_T("Permission Denined."), MB_OK);
	}
}

#include "WardDeliveryOrderDialog.h"

void CMainFrame::OnCommandDailyorder()
{
	if (!CheckPermission(_T("03"))) {
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	CWardDeliveryOrderDialog dlg(this);
	dlg.DoModal();

}


#include "WardMedicalCabinetDialog.h"
#include "CabinetDialog.h"

void CMainFrame::OnFileMedicalcabinetmanagement()
{
	if (!CheckPermission(_T("03"))) {
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if (m_szDept == _T("C8") || m_szDept == _T("C7") || m_szDept == _T("A6-C")
		|| m_szDept == _T("C8-D") || m_szDept == _T("C8-C") || m_szDept == _T("C8-B")
		|| m_szDept == _T("TTHTSS") || m_szDept == _T("TTDTHM"))
	{
		CWardMedicalCabinetDialog dlg(this);
		dlg.DoModal();
	}
	else
	{
		CCabinetDialog dlg(this);
		dlg.DoModal();

	}

}
void CMainFrame::OnFileReport32786()
{
	BeginWaitCursor();
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
	EndWaitCursor();
}

void CMainFrame::OnSetupSetuppacsfrom()
{
	// TODO: Add your command handler code here
	CHMSPACSFormSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnAverCapture()
{
	int ret = ShowMessageBox(_T("Chức năng này cho phép liên kết với phần mềm Avercapture Studio.Bạn có muốn thực hiện không?"), MB_YESNO);
	if (ret == IDNO)
		return;
	m_bAverCapture = !m_bAverCapture;
	if (m_pMainMenu == NULL)
		return;

	if (m_bAverCapture) {
		m_pMainMenu->CheckMenuItem(ID_SETUP_AVERCAPTURE, MF_CHECKED | MF_BYCOMMAND);
	}
	else {
		m_pMainMenu->CheckMenuItem(ID_SETUP_AVERCAPTURE, MF_UNCHECKED | MF_BYCOMMAND);
	}

	AfxGetApp()->WriteProfileInt(_T("SETTINGS"), _T("AVERCAPTURE"), m_bAverCapture);

}

void CMainFrame::OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData) {
	CString szName = lpszName;
	CString szData = lpszData;
	szName.MakeLower();
	szData.Trim();
	if (szName == _T("dicommode")) {
		if (szData == _T("Y"))
			m_bDicomMode = true;
	}

	if (szName == _T("dicomclientaetitle")) {
		m_szClientAETitle = lpszData;
	}
	if (szName == _T("dicomclientport")) {
		m_nClientPort = str2int(lpszData);
	}
	if (szName == _T("dicomserveraetitle")) {
		m_szServerAETitle = lpszData;
	}

	if (szName == _T("dicomserveraddress")) {
		m_szServerAddress = lpszData;
	}
	if (szName == _T("dicomserverport")) {
		m_nServerPort = str2int(lpszData);
	}
	if (szName == _T("imagewidth")) {
		//		m_nCaptureWidth = str2int(lpszData);
	}
	if (szName == _T("imageheight")) {
		//		m_nCaptureHeight = str2int(lpszData);
	}
	if (szName == _T("startserverdicom")) {
		//		m_szStartServerDicom = lpszData;
	}

	if (szName == _T("avercapturename")) {
		m_szAverCaptureName = lpszData;
	}
}


bool CMainFrame::IsDicomMode() {
	return m_bDicomMode;
}




bool CMainFrame::IsActiveDocument() {
	CRecord rs(&m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hcr_status FROM hms_clinical_record WHERE hcr_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_status"), szStatus);

		if (szStatus == _T("I") || szStatus == _T("A"))
			return true;
	}
	szSQL.Format(_T("SELECT hd_status FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_status"), szStatus);
	if (szStatus == _T("T"))
		return false;
	return true;
}

#include "HMSStorageDetailDialog.h"
void CMainFrame::OnFileTrackingmedicalcabinet()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("06"))) {
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	CHMSStorageDetailDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
	}
}
#include "MedicalExportOrderDialog.h"
void CMainFrame::OnFileExporttestbreakordersheet()
{
	CMedicalExportOrderDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{

	}
}

#include "PACSSettingNumberDialog.h"
void CMainFrame::OnSetupSetuphitsimaging()
{
	// TODO: Add your command handler code here

	if (!CheckPermission(_T("05"))) {
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	CPACSSettingNumberDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupPrescriptionscontradictions()
{
	// TODO: Add your command handler code here
	CHMSPrescriptionGroupItemsDialog dlg(this);
	dlg.DoModal();
}


#include "HMSOperationGroupSetup.h"

void CMainFrame::OnFileSetupOperationGroup()
{
	CHMSOperationGroupSetup dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnMenuAnestheticSheet()
{
	// TODO: Add your command handler code here
	CHMSAnestheticScheduleDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileBosungtutruckhongcobenhnhan()
{
	CCabinetDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupContrastmaterialsetup()
{
	// TODO: Add your command handler code here
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("08")))
	{
		ShowMessageBox(_T("Permission Denied!"));
		return;
	}
	CIMGContrastMaterialSetupDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnCommandDoctorinfo()
{
	// TODO: Add your command handler code here
	CHMSDoctorInfo dlg(this);
	dlg.DoModal();
}

#include "SYSDepartmentChangeDialog.h"
void CMainFrame::OnChangeDepartment()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CSYSDepartmentChangeDialog dlg(this);
	dlg.m_szDepartmentKey = m_UserInfo.su_deptid;
	//dlg.m_szDeptType = _T("I");

	if (dlg.DoModal() == IDOK)
	{
		pMF->m_szDept = dlg.m_szDepartmentNewKey;
		//m_wndTreatmentQueue.m_szDepartmentKey = m_szDept;
		//m_wndTreatmentQueue.OnDeptNameRefresh(m_szDept);
		m_wndPatientList.OnEmptyPerformRoom();

		m_wndPatientList.OnListLoadData();

		AddProp(L"sign_deptid", pMF->m_szDept);
		CHMSMainFrame* pMF2 = (CHMSMainFrame*)AfxGetMainWnd();
		pMF2->m_szDeptID = pMF->m_szDept;

		CString szFloor, szText;
		TranslateString(m_szModuleName, szText);
		szText.AppendFormat(_T(" [%s]"), GetDepartmentName(pMF->m_szDept));
		SetWindowText(szText);

		m_wndPatientProfile.SetMode(VM_NONE);
		m_nDocumentNo = 0;
		SetActivePane(0);
	}
}
void CMainFrame::OnSetupPerfromeRoom()
{
	if (!CheckPermission(_T("SETUP.PERFORM_ROOM")))
	{
		ShowMessageBox(_T("Permission Denied."));
		return;
	}
	CHMSPerforRoomSetupDlg dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupPerfromeOrderRoom()
{
	if (!CheckPermission(_T("SETUP.ORDER_ROOM")))
	{
		ShowMessageBox(_T("Permission Denied."));
		return;
	}
	CHMSPerforRoomOrderSetupDlg dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnRoomStatus()
{
	CHMSRoomSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnTabSelectChange(int nOld, int nNew)
{
    cout << nNew << endl;
    switch (nNew)
    {
    case 3:
        break;
    }
}