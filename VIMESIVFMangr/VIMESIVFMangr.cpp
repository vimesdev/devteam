// VIMESIVFMangr.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "VIMESIVFMangr.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVIMESIVFMangrApp

BEGIN_MESSAGE_MAP(CVIMESIVFMangrApp, CMFCWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
END_MESSAGE_MAP()


// CVIMESIVFMangrApp construction

CVIMESIVFMangrApp::CVIMESIVFMangrApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CVIMESIVFMangrApp object

CVIMESIVFMangrApp theApp;

// CVIMESIVFMangrApp initialization

BOOL CVIMESIVFMangrApp::InitInstance()
{
	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	//InitCommonControls();

	if (!CMFCWinApp::InitInstance())
        return FALSE;
    /*
	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxEnableControlContainer();
	*/
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	//SetRegistryKey(_T("IVF"));
	// To create the main window, this code creates a new frame window
	// object and then sets it as the application's main window object
//	QHTM_Initialize(AfxGetInstanceHandle());
	CMainFrame* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	// create and load the frame with its resources
    if (!pFrame->LoadFrame(IDR_MAINFRAME))
        return FALSE;
	// The one and only window has been initialized, so show and update it
	pFrame->CenterWindow();
	pFrame->ShowWindow(SW_SHOWMAXIMIZED);
	pFrame->UpdateWindow();
	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand

//	QHTM_Uninitialize();

	return TRUE;
}


// CVIMESIVFMangrApp message handlers



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

void CVIMESIVFMangrApp::OnAppAbout()
{

}


// CVIMESIVFMangrApp message handlers

