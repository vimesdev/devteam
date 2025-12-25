// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "VIMESVisitPatientsMangr.h"
#include "SYSPasswordChangeDialog.h"

#include "MainFrm.h"
#include "DocPane.h"
#include "HMSReportForms/HMSReportFormDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#pragma comment(lib, "../lib/HMSCore.LIB")
#pragma comment(lib, "../lib/HMSReportForms.lib")
// CMainFrame
#include "VPMPackageCategorySetup.h"

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_REPORTS, OnFileReport)
	ON_COMMAND(ID_FILE_ADDPERFORMUSER, OnFileAddPerformUser)
	ON_COMMAND(ID_FILE_PACKAGECATEGORYSETUP, OnFilePackagecategorysetup)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
END_MESSAGE_MAP()



// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	SetEnableLogin(TRUE);
	//SetLocalLang(0);
	m_szModuleName = _T("VISIT TO PATIENTS MANAGEMENT");
	m_szModuleID = _T("VPM");
	m_szSize = CSize(970, 720);
	m_szVersion = _T("1.4");	
	m_nLayoutStyle = LAYOUT_TABCTRL;
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;

	if(m_UserInfo.su_deptid != _T("CTXH") && !pMF->CheckPermission(_T("70")))
	{
		ShowMessageBox(_T("Tên đăng nhập không thuộc ban công tác xã hội"));
		exit(0);
		return -1;
	}
	
	m_szTitle = _T("QUẢN LÝ THĂM VÀ CHĂM SÓC BỆNH NHÂN");
	SetWindowText(m_szTitle);
	CRect rect;
	GetClientRect(&rect);

	if (pMF->CheckPermission(_T("20")))
	{
		m_wndVisitPatientList.Create(GetPane());
		AddView(_T("Visit Patient List"), &m_wndVisitPatientList);
	}

	if (pMF->CheckPermission(_T("30")))
	{
		m_wndServicePackageList.Create(GetPane());
		AddView(_T("Service Package List"), &m_wndServicePackageList);
	}

	if (pMF->CheckPermission(_T("40")))
	{
		m_wndTakeCareList.Create(GetPane());
		AddView(_T("Take Care PackageList"), &m_wndTakeCareList);
	}

	if (pMF->CheckPermission(_T("50")))
	{
		m_wndCustomerVisitList.Create(GetPane());
		AddView(_T("Customer Visit"), &m_wndCustomerVisitList);
	}

		if (pMF->CheckPermission(_T("55")))
		{
		m_wndCWeelchairmanagementListView.Create(GetPane());
		AddView(_T("Quản lý xe lăn"), &m_wndCWeelchairmanagementListView);
		}

	if (pMF->CheckPermission(_T("60")))
	{
		m_wndCardStorageListView.Create(GetPane());
		AddView(_T("Kho lưu trữ thẻ"), &m_wndCardStorageListView);
	}

	SetActivePane(0);
	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host:%s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);

	
	CString szFileName;
	CString szChecksum;
	CString szPath;
	::GetCurrentDirectory(MAX_PATH, szPath.GetBufferSetLength(MAX_PATH));
	szPath.ReleaseBuffer();
	szFileName.Format(_T("%s\\VIMES.DLL"), szPath);
	return 0;
}




void CMainFrame::OnFileReport()
{
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}

#include "HMSTakecareEvalUserDialog.h"
#include ".\mainfrm.h"
void CMainFrame::OnFileAddPerformUser()
{
	CHMSTakecareEvalUserDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnFilePackagecategorysetup()
{
	// TODO: Add your command handler code here
	CVPMPackageCategorySetup dlg;
	dlg.DoModal();
}
void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}
