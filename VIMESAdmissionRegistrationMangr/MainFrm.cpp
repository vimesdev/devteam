// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"
#include "SysUserSetup.h"
#include "AdmissionFileConfigDialog.h"
#include "SYSPasswordChangeDialog.h"
#include ".\mainfrm.h"
#include "Excel.h"

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_USERSETUP, OnFileUserSetup)
	ON_COMMAND(ID_FILE_ADMISSIONFILECONFIG, OnFileAdmissionFileConfig)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_FILE_ABORTEDRECORD, OnMenuAbortedRecord)
	
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleID = _T("HAR");
	m_szVersion = _T("6.1");
	m_szSize = CSize(1024, 720);
	SetLayoutStyle(LAYOUT_TABCTRL);
}


CMainFrame::~CMainFrame()
{

}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{

	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;

	CString tmpStr;
	TranslateString(_T("QUẢN LÝ BỆNH ÁN NHẬP VIỆN"), tmpStr);
	SetWindowText(tmpStr);

	//ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX|WS_MINIMIZEBOX, 0);
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	m_wndDailyFoodOrder.Create(GetPane());
	m_wndAdmissionRegistration.Create(GetPane());
	
	
	AddView(_T("Patient Profile"), &m_wndAdmissionRegistration);
	AddView(_T("Patient Order Food"), &m_wndDailyFoodOrder);

	SetActivePane(0);
	CenterWindow();
	return 0;
}

void CMainFrame::OnInitializes()
{
	CHMSMainFrame::OnInitializes();
}


void CMainFrame::OnFileUserSetup(){
	CString szUser = GetCurrentUser();
	szUser.MakeLower();
	if(szUser != _T("admin"))
	{
		ShowMessageBox(_T("Permission denined."));
		return;
	}
	CSysUserSetup dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileAdmissionFileConfig(){
	CString szUser = GetCurrentUser();
	szUser.MakeLower();
	if(szUser != _T("admin"))
	{
		ShowMessageBox(_T("Permission denined."));
		return;
	}
	CAdmissionFileConfigDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnMenuAbortedRecord()
{
	if (GetCurrentUser() != _T("admin"))
		return;
	
	CExcel xls;
	CString szSQL, tmpStr;
	CRecord rs(&m_db);
	int nCol = 0, nRow = 0;
	szSQL.Format(_T(" SELECT") \
				_T("   Get_username(slog_userid) as usrnme,") \
				_T("   slog_hostip as com,") \
				_T("   slog_time as dte,") \
				_T("   slog_event as evt,") \
				_T("   slog_desc as descr") \
				_T(" FROM   system_log") \
				_T(" WHERE  slog_moduleid='%s'") \
				_T(" ORDER BY evt"), GetModuleID());
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP);
		return;
	}
	//Column Header
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 30);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(4, 30);
	xls.SetCellText(nCol, nRow, _T("User Name"));
	xls.SetCellText(nCol+1, nRow, _T("Computer"));
	xls.SetCellText(nCol+2, nRow, _T("Commit Time"));
	xls.SetCellText(nCol+3, nRow, _T("Description"));
	xls.SetCellText(nCol+4, nRow, _T("Comment"));
	nRow = 1;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, rs.GetValue(_T("usrnme")));
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("com")));
		rs.GetValue(_T("dte"), tmpStr);
		xls.SetCellText(nCol+2, nRow, CDateTime::Convert(tmpStr, yyyymmdd||hhmmss, ddmmyyyy|hhmmss));
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("evt")));
		xls.SetCellText(nCol+4, nRow, rs.GetValue(_T("descr")));
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\BENH AN HUY.xls"));
}
