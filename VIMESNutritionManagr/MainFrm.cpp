// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"
#include ".\mainfrm.h"
#include "HMSReportFormDialog.h"
#include "HMSFoodFeeSetupDlg.h"
#include "HMSSetupIndexDeptDialog.h"


IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_FILE_REPORTS, OnFileReports)
	ON_COMMAND(ID_FILE_FEEFOODSETUP, OnFeeFoodSetup)
	ON_COMMAND(ID_FILE_SETUPINDEXDEPT, OnSetupIndexDept)
	ON_WM_SIZE()
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	SetLocalLang(1);
	SetEnableLogin(TRUE);
	m_szModuleName = _T("NUTRITION MODULE");
	m_szModuleID = _T("NM");
	m_szVersion = _T("2.0");
	m_szSize = CSize(1024, 620);
}

CMainFrame::~CMainFrame()
{	

}

void _OnSelChange(CWnd* pWnd, int nOldItem, int nNewItem)
{
	//_msg(_T("%d : %d"), nOldItem, nNewItem);
	CMainFrame *pMF = (CMainFrame *)pWnd;
	if (nNewItem == 0)
	{
		/*if (pMF->m_wndSurgerySchedule.m_wndWeekView.GetCheck())
		{
			pMF->m_wndSurgerySchedule.m_wndCalendar.SetView(WV_WEEKVIEW, FALSE);
		}*/
	}
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{

	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	CString szSQL, tmpStr;

	TranslateString(_T("NUTRITON MODULE"), tmpStr);
	SetWindowText(tmpStr);

	//ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX, 0);
	//m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	//SetIcon(m_hIcon, TRUE);			// Set big icon
	//SetIcon(m_hIcon, FALSE);		// Set small icon

	CenterWindow();
	
	//m_wndTab.Create(this,0, 0, 1024, 660);
	CWnd* pPane = GetPane();
	m_wndDailyFoodOrderList.Create(pPane);
	m_wndDailyFoodOrder.Create(pPane);
	m_wndSummaryDailyFoodOrder.Create(pPane);
	AddView(_T("Order List"), &m_wndDailyFoodOrderList);
	AddView(_T("Order Information"), &m_wndDailyFoodOrder);
	AddView(_T("Summary Order"), &m_wndSummaryDailyFoodOrder);
	//SetWindowText(_T("Delivery Cabinet Management"));
	m_wndDailyFoodOrderList.m_wndOrder = &m_wndDailyFoodOrder;


	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host: %s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);

	SetActivePane(0);

	SetForegroundWindow();

	CGuiTabCtrl *pTab = (CGuiTabCtrl *)GetPane();
	pTab->SetEvent(WE_SELCHANGE, _OnSelChange);
	
	return 0;
}
void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnInitializes()
{
	CHMSMainFrame::OnInitializes();
	CString szSQL;
	CRecord rs(&m_db);
	
	/*if (GetCurrentUser().Trim().MakeLower() != _T("admin"))
	{
		m_pSplashThread->HideSplash();
		ShowMessageBox(_T("Permisson denied"), MB_OK | MB_ICONERROR);
		exit(0);
	}*/

}

void CMainFrame::OnFileReports()
{
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFeeFoodSetup()
{
	CHMSFoodFeeSetupDlg dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnSetupIndexDept()
{
	CHMSSetupIndexDeptDialog dlg(this);
	dlg.DoModal();
}