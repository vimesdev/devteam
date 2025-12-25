// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"
#include ".\mainfrm.h"
//#include ".\mainfrm.h"
#include "HMSReportForms\HMSReportFormDialog.h"
#pragma comment(lib, "../Lib/HMSReportForms.lib" )

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CGuiMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CGuiMainFrame)
	ON_WM_CREATE()
	ON_MESSAGE(WM_HOTKEY, OnMyHotKey)
	ON_COMMAND(ID_SETUP_ARCHIVALNUMBER, OnSetupArchivalnumber)
	ON_COMMAND(ID_SETUP_USERSETUP, OnSetupUsersetup)
	ON_COMMAND(ID_FILE_SETUP32774, OnFileSetup32774)
	ON_COMMAND(ID_FILE_REPORT, OnFileReport)
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
//	SetEnableLogin(FALSE);
//	SetLocalLang(0);
	//m_szModuleID = _T("PR");
	m_szModuleID = _T("PR");
	//m_szPermID = _T("42");
	m_szSize = CSize(1024, 768);
	m_szVersion = _T("1.1");
	//m_szDatabase = _T("demo");
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CGuiMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	CString tmpStr;
	TranslateString(_T("PHÂN HỆ LƯU TRỮ HỒ SƠ BỆNH ÁN"), tmpStr);
	SetWindowText(tmpStr);
	

	SetMenu(NULL);	
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	//m_wndPatientRecord.Create(this);
	::RegisterHotKey(m_hWnd, 0x0001, 0, VK_F5);
	::RegisterHotKey(m_hWnd, 0x0002, 0, VK_F6);
	::RegisterHotKey(m_hWnd, 0x0004, 0, VK_F7);
	::RegisterHotKey(m_hWnd, 0x0008, 0, VK_F8);
	::RegisterHotKey(m_hWnd, 0x0010, 0, VK_F9);
	::RegisterHotKey(m_hWnd, 0x0020, 0, VK_F10);
	//::RegisterHotKey(m_hWnd, 0x0040, MOD_CONTROL, _T('P'));
	
	m_wndPatientRecord.Create(GetPane());
	m_wndPatientListRecord.Create(GetPane());	
	
	AddView(_T("&H\x1ED3 s\x1A1 l\x1B0u tr\x1EEF"), &m_wndPatientRecord);
	AddView(_T("&\x44\x61nh s\xE1\x63h l\x1B0u tr\x1EEF"), &m_wndPatientListRecord);
    m_wndPatientListRecord.m_pWndRef = &m_wndPatientRecord;

	SetActivePane(0);

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host: %s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);

	return 0;
}

LRESULT CMainFrame::OnMyHotKey(WPARAM wParam, LPARAM lParam)
{
	if (wParam == 0x0001)
		m_wndPatientRecord.OnBorrowDocument();
	else if (wParam == 0x0002)
		m_wndPatientRecord.OnReturnDocument();
	else if (wParam == 0x0004)
		m_wndPatientRecord.OnEditRecordBorrow();
	else if (wParam == 0x0008)
		m_wndPatientRecord.OnDeleteRecordBorrow();
	else if (wParam == 0x0010)
		m_wndPatientRecord.OnSaveRecordBorrow();
	else if (wParam == 0x0020)
		m_wndPatientRecord.OnCancelRecordBorrow();
	else if (wParam == 0x0040)
		m_wndPatientRecord.OnPrintSelect();
	return 0;
}

void CMainFrame::OnInitializes()
{
	//CHMSMainFrame::OnInitializes();
	//CHMSMainFrame::OnInitData();
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rsu(&m_db);
	CRecord rs(&m_db);
	CRecord rsp(&m_db);
	CRecord rsc(&m_db); 
	CString szSQL, szTemp;

	
	szSQL.Format(_T("SELECT su_hms_prmodule FROM sys_user WHERE lower(su_userid)=lower('%s') "), GetCurrentUser());
	rsu.ExecSQL(szSQL);
	if (rsu.GetIntValue() <= 0)	
	{
#if (_MSC_VER >= 1500)
	
#else
		m_pSplashThread->HideSplash();
#endif

		ShowMessageBox(_T("Permission denied"), MB_OK);
		exit(0);
	}

	/*szSQL.Format(_T("SELECT pc_allpatient FROM pr_config WHERE rownum =1"));
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
		m_szStoreAll = rs.GetValue(_T("pc_allpatient"));*/

	szSQL.Format(_T("SELECT hpi_code FROM hms_patientrec_id WHERE rownum =1"));
	rsp.ExecSQL(szSQL);
	if (!rsp.IsEOF())
		m_szIDCode = rsp.GetValue(_T("hpi_code"));
	else
		m_szIDCode.Empty();

	szSQL.Format(_T("SELECT sc_pname, sc_name FROM sys_company WHERE rownum =1"));
	rsc.ExecSQL(szSQL);
	if (!rsc.IsEOF())
	{
		m_szHealthSvc = rsc.GetValue(_T("sc_pname"));
		m_szHospitalName = rsc.GetValue(_T("sc_name"));
	}
}



void CMainFrame::OnSetupArchivalnumber()
{
	// TODO: Add your command handler code here
	/*CString szUser;
	szUser = GetCurrentUser();
	szUser.MakeLower();
	if (CheckPermission(_T("01")) || szUser == _T("admin"))
	{
		CHMSRecordNoSetupDialog dlg(this);
		dlg.DoModal();
	}
	else
		ShowMessageBox(_T("Permission Denied!"));*/
}

void CMainFrame::OnSetupUsersetup()
{
	// TODO: Add your command handler code here
	CHMSUserSetup dlg(this);
	dlg.DoModal();
}

CString CMainFrame::GetPreviousDay(CString szDay)
{
	CRecord rs(&m_db);
	CString szSQL;
	CString szValue;

	szSQL.Format(_T("SELECT TRUNC('%s') - 1 AS yesterday"), szDay);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
		rs.GetValue(_T("yesterday"), szValue);

	return szValue;
}

void CMainFrame::OnFileSetup32774()
{
	// TODO: Add your command handler code here
	CString szUser;
	szUser = GetCurrentUser();
	szUser.MakeLower();
	if (CheckPermission(_T("01")) || szUser == _T("admin"))
	{
		CHMSRecordNoSetupDialog dlg(this);
		dlg.DoModal();
	}
	else
		ShowMessageBox(_T("Permission Denied!"));
}

void CMainFrame::OnFileReport()
{
	// TODO: Add your command handler code here
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}
