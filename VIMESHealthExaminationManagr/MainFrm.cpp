// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "VIMESVisitPatientsMangr.h"

#include "MainFrm.h"
#include "DocPane.h"
#include "HMSReportForms/HMSReportFormDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#pragma comment(lib, "../lib/VIMES.LIB")
#pragma comment(lib, "../lib/HMSCore.LIB")
#pragma comment(lib, "../lib/HMSReportForms.lib")
// CMainFrame


IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_REPORTS, OnFileReport)
END_MESSAGE_MAP()



// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	SetEnableLogin(TRUE);
	//SetLocalLang(0);
	m_szModuleName = _T("VISIT TO PATIENTS MANAGEMENT");
	m_szModuleID = _T("VPM");
	m_szSize = CSize(970, 720);
	m_szVersion = _T("1.2");
	
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	m_szTitle = _T("QUẢN LÝ THĂM VÀ CHĂM SÓC BỆNH NHÂN");
	SetWindowText(m_szTitle);
	CRect rect;
	GetClientRect(&rect);
	m_wndVisitPatientList.Create(GetPane());
	m_wndServicePackageList.Create(GetPane());
	AddView(_T("Visit Patient List"), &m_wndVisitPatientList);
	AddView(_T("Service Package List"), &m_wndServicePackageList);
	
	SetActivePane(0);
	return 0;
}




void CMainFrame::OnFileReport()
{
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}