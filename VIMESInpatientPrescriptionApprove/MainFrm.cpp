// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "VIMESInpatientPrescriptionApprove.h"
#include "MainFrm.h"
#include "HMSReportForms\HMSReportFormDialog.h"
#include "SYSPasswordChangeDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


#pragma comment(lib, "../lib/HMSReportForms.lib")


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_WM_SETFOCUS()
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, CMainFrame::OnChangePassword)
	ON_COMMAND(ID_FILE_REPORT, CMainFrame::OnReport)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};


// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	m_szModuleID = _T("IPA");
	m_szVersion = _T("1.0");
	//m_szSize = CSize(1024, 700);
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
	TranslateString(_T("PHÂN HỆ DUYỆT THUỐC, VẬT TƯ NỘI TRÚ"), tmpStr);
	SetWindowText(tmpStr);

	m_wndPrescriptionApproveOrder.Create(GetPane());
	AddView(_T(""), &m_wndPrescriptionApproveOrder);
	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CHMSMainFrame::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	cs.lpszClass = AfxRegisterWndClass(0);
	return TRUE;
}


// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CHMSMainFrame::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CHMSMainFrame::Dump(dc);
}

#endif //_DEBUG


// CMainFrame message handlers

void CMainFrame::OnSetFocus(CWnd* /*pOldWnd*/)
{
	// forward focus to the view window
	m_wndPrescriptionApproveOrder.SetFocus();
}

BOOL CMainFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	// otherwise, do default handling
	return CHMSMainFrame::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}


void CMainFrame::OnChangePassword(){
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReport(){
	CHMSReportFormDialog dlg(this);
	if(dlg.DoModal() == IDOK){
	}
}