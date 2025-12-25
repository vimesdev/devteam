// VIMESHMSExamination.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "VIMESHMSExamination.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVIMESHMSExaminationApp

BEGIN_MESSAGE_MAP(CVIMESHMSExaminationApp, CMFCWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
END_MESSAGE_MAP()


// CVIMESHMSExaminationApp construction

CVIMESHMSExaminationApp::CVIMESHMSExaminationApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
	
}


// The one and only CVIMESHMSExaminationApp object

CVIMESHMSExaminationApp theApp;

// CVIMESHMSExaminationApp initialization

BOOL CVIMESHMSExaminationApp::InitInstance()
{
	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	//InitCommonControls();

	if (!CMFCWinApp::InitInstance())
		return FALSE;

	//SetRegistryKey(_T("Examination"));
	//SetThreadDpiAwarenessContext(DPI_AWARENESS_CONTEXT_SYSTEM_AWARE);

	CMainFrame* pFrame = new CMainFrame();
	if (!pFrame)
		return FALSE;



	m_pMainWnd = pFrame;
	// create and load the frame with its resources
	pFrame->LoadFrame(IDR_MAINFRAME);

	// The one and only window has been initialized, so show and update it
	//pFrame->CenterWindow();
	pFrame->ShowWindow(SW_SHOWMAXIMIZED);
	pFrame->UpdateWindow();

	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand
	return TRUE;
}


// CVIMESHMSExaminationApp message handlers



// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// App command to run the dialog

void CVIMESHMSExaminationApp::OnAppAbout()
{

}


// CVIMESHMSExaminationApp message handlers

