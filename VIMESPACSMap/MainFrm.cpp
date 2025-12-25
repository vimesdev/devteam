// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "resource.h"
#include ".\mainfrm.h"
#include "SYSPasswordChangeDialog.h"

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
	if(*pstr == NULL)
		return;
	while(*pstr != NULL)
	{
		bFlag = false;
		for (int i =0; i < _tcslen(lpszSeperators); i++)
		{
			if(*pstr == lpszSeperators[i]){
				fields.Add(tmpStr); 
				tmpStr.Empty();
				bFlag = true;
				break;
			}
		}
		if(!bFlag)
			tmpStr += *pstr;
		pstr++;
	}
	fields.Add(tmpStr);
}



IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_FILE_SETUP, OnFileSetup)
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleName = _T("CẤP PHÁT SỐ");
	m_szModuleID = _T("PACSMAP");
	m_szSize = CSize(1024, 760);
	m_szVersion = _T("5.0");
	SetLayoutStyle(LAYOUT_TABCTRL);
	m_bHISReference = false;
	
	m_bExternalInput = FALSE;
	m_nDownloadOrderID = 0;
	m_bDicomMode = false;
}

CMainFrame::~CMainFrame()
{

}

#include "Gdiplus.h"
using namespace Gdiplus;


void _OnMainTabChangeFnc(CWnd* pWnd, int nOld, int nNew)
{
	if(nNew < 0)
		return;
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(nOld == 1 && nNew == 0)
	{
		if(pMF->m_wndPatientProfile.IsRequestApply())
		{
			ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i phi\x1EBFu \x111\x1B0\x1EE3\x63 \x63h\x1ECDn nh\x1B0ng \x63h\x1B0\x61 \xE1p \x64\x1EE5ng. Y\xEAu \x63\x1EA7u \xE1p \x64\x1EE5ng ho\x1EB7\x63 h\x1EE7y phi\x1EBFu"));
			return;
		}
	}
}
//#include "ReportUtils.h"
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{

	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;

	CString tmpStr;
	TranslateString(_T("PHÂN HỆ QUẢN LÝ CẤP PHÁT SỐ"), tmpStr);
	SetWindowText(tmpStr);

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

//	CreateToolBar();
//	ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX, 0);
//	CWnd *pWnd = GetPanel();
//	pWnd->ShowWindow(SW_HIDE);
	m_wndPatientList.Create(this);
	m_wndPatientProfile.Create(this);
	AddView(_T("Patient List"), &m_wndPatientList);
	AddView(_T("Patient Profile"), &m_wndPatientProfile);
	CGuiTabCtrl* pTab = (CGuiTabCtrl*) GetPane();
	pTab->SetEvent(WE_SELCHANGE, _OnMainTabChangeFnc);

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


	CRecord rs(&m_db);
	CString szSQL;

	szSQL.Format(_T("select hc_imagedir from hms_config"));
	m_szImageDir.Format(_T("%s:/usr/images"), GetHost());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hc_imagedir"), m_szImageDir);
		//_msg(_T("%s %s %s"), m_szImageDir, GetHost(), GetDatabase());
	}
	szSQL.Format(_T("SELECT su_deptid, su_roomid, su_groupid FROM sys_user WHERE lower(su_userid)=lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("su_deptid"), m_szDeptID);
		rs.GetValue(_T("su_roomid"), m_nRoomID);
		rs.GetValue(_T("su_groupid"), m_nUserGroup);
	}

	
	szSQL.Format(_T("SELECT sd_type FROM sys_dept WHERE sd_id='%s' "), m_szDeptID);
	rs.ExecSQL(szSQL);

	bool bExit = false;
	CString tmpStr;

	if(rs.IsEOF())
		bExit = true;
	else
	{
		
		rs.GetValue(_T("sd_type"), tmpStr);
		if(tmpStr != _T("HA") && tmpStr != _T("DT") && tmpStr != _T("XN") && tmpStr != _T("KB"))
			bExit = true;
	}
	tmpStr = GetCurrentUser();
	tmpStr.MakeLower();
	if(bExit && tmpStr != _T("admin")){
		ShowMessageBox(_T("Permission Denied."));
		exit(0);
	}

	//Thiet lap duong dan, thu muc luu tru hinh anh goc

		::GetCurrentDirectory(MAX_PATH, szPath);		
		m_szGetCurrentDirectoryPath.Format(_T("%s\\Images"), szPath);

}

BOOL CMainFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	return CFrameWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}

BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
	return CHMSMainFrame::OnCommand(wParam, lParam);
}


void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
	CFrameWnd::OnSize(nType, cx, cy);
	// TODO: Add your message handler code here
}

void CMainFrame::OnSetupDescribegroupsetup()
{
}

void CMainFrame::OnSetupDescribeentrysetup()
{

}


CString CMainFrame::GetDeptName(){
	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sd_name FROM sys_dept Where sd_id='%s' "), m_szDeptID);
	rs.ExecSQL(szSQL);
	return rs.GetStringValue();
}


void CMainFrame::OnSetupPermissionsetup()
{	
}


void CMainFrame::OnTimer(UINT nIDEvent)
{
	
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

	/*if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_F2)
		{
			SetActivePane(0);
			m_wndPatientList.m_wndPatientName.SetSel(0, 20);
			return FALSE;
		}
		if(pMsg->wParam == VK_F3)
		{
			SetActivePane(1);
			return FALSE;
		}
		if(pMsg->wParam == VK_F5)
		{
			SetActivePane(2);
			return FALSE;
		}
	}*/

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
	
}

void CMainFrame::OnCommandDailyorder()
{


}



void CMainFrame::OnFileMedicalcabinetmanagement()
{
	

}
void CMainFrame::OnFileReport32786()
{

}

void CMainFrame::OnSetupSetuppacsfrom()
{
	// TODO: Add your command handler code here
	
	
}

void CMainFrame::OnSetupSetingcapture()
{
	// TODO: Add your command handler code here
	OnSetupSelect();
}
void CMainFrame::OnSetupSelect(){
	//if(m_wndImageCapture.m_wndVideo.IsOpenning())
	//{
	////	ShowMessageBox(_T("Device Is Opening."));
	////	return;
	//	m_wndImageCapture.m_wndVideo.CloseInterfaces();
	//}
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	CVideoTestDlg dlg(this);
//	dlg.DoModal();

	return;

} 

void CMainFrame::OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData){
	CString szName = lpszName;
	CString szData = lpszData;
	szName.MakeLower();
	szData.Trim();	
	if(szName == _T("dicommode")){
		if(szData == _T("Y"))
			m_bDicomMode  = true;
	}

	if(szName == _T("dicomclientaetitle")){
		m_szClientAETitle = lpszData;
	}
	if(szName == _T("dicomclientport")){
		m_nClientPort = str2int(lpszData);
	}
	if(szName == _T("dicomserveraetitle")){
		m_szServerAETitle = lpszData;
	}

	if(szName == _T("dicomserveraddress")){
		m_szServerAddress = lpszData;
	}
	if(szName == _T("dicomserverport")){
		m_nServerPort = str2int(lpszData);
	}
	if(szName == _T("imagewidth")){
//		m_nCaptureWidth = str2int(lpszData);
	}
	if(szName == _T("imageheight")){
//		m_nCaptureHeight = str2int(lpszData);
	}
	if(szName == _T("startserverdicom")){
//		m_szStartServerDicom = lpszData;
	}
}


bool CMainFrame::IsDicomMode(){
	return m_bDicomMode;
}




bool CMainFrame::IsActiveDocument(){
	CRecord rs(&m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hcr_status FROM hms_clinical_record WHERE hcr_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_status"), szStatus);

		if(szStatus == _T("I"))
			return true;
	}
	szSQL.Format(_T("SELECT hd_status FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_status"), szStatus);
	if(szStatus == _T("T"))
		return false;
	return true;
}

#include "PACSMapSetupUserGroup.h"
void CMainFrame::OnFileSetup()
{
	CPACSMapSetupUserGroup dlg(this);
	dlg.DoModal();

}