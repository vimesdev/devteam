// MITECOPCM.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "MainFrm.h"
#include "VIMESPACS.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVIMESPACSApp

BEGIN_MESSAGE_MAP(CVIMESPACSApp, CMFCWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
END_MESSAGE_MAP()


// CVIMESPACSApp construction

CVIMESPACSApp::CVIMESPACSApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CVIMESPACSApp object

CVIMESPACSApp theApp;

// CVIMESPACSApp initialization
ULONG_PTR gdiplusToken;
BOOL CVIMESPACSApp::InitInstance()
{
	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	InitCommonControls();

	CMFCWinApp::InitInstance();

	//AfxEnableControlContainer();
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	//SetRegistryKey(_T("ImagingOrder"));
	// To create the main window, this code creates a new frame window
	// object and then sets it as the application's main window object

	 

	CMainFrame* pFrame = new CMainFrame;
	
	if (!pFrame)
		return FALSE;
	Gdiplus::GdiplusStartupInput gdiplusStartupInput;
  
    GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
	m_pMainWnd = pFrame;
	// create and load the frame with its resources
    if (!pFrame->LoadFrame(IDR_MAINFRAME))
        return FALSE;
	// The one and only window has been initialized, so show and update it
	pFrame->ShowWindow(SW_SHOWMAXIMIZED);
	pFrame->UpdateWindow();
	
	
	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand
	return TRUE;
}


// CVIMESPACSApp message handlers



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
public:

	
	virtual BOOL OnInitDialog();
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
#include "GuiAboutCtrl.h"
#include ".\vimespacs.h"

void CVIMESPACSApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
//	CGuiAboutDialog dlg;
//	dlg.DoModal();
}


// CVIMESPACSApp message handlers


BOOL CAboutDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	return TRUE;  // return TRUE unless you set the focus to a control
}

int CVIMESPACSApp::ExitInstance()
{
	// TODO: Add your specialized code here and/or call the base class
	Gdiplus::GdiplusShutdown(gdiplusToken);
	return CMFCWinApp::ExitInstance();
}
