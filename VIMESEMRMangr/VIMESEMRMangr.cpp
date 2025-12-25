// MITECOPCM.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "MainFrm.h"
#include "VIMESEMRMangr.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVIMESEMRMangrApp

BEGIN_MESSAGE_MAP(CVIMESEMRMangrApp, CMFCWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
END_MESSAGE_MAP()


// CVIMESEMRMangrApp construction

CVIMESEMRMangrApp::CVIMESEMRMangrApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CVIMESEMRMangrApp object

CVIMESEMRMangrApp theApp;

// CVIMESEMRMangrApp initialization

BOOL CVIMESEMRMangrApp::InitInstance()
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
	//SetRegistryKey(_T("Local AppWizard-Generated Applications"));
	// To create the main window, this code creates a new frame window
	// object and then sets it as the application's main window object

	 

	CMainFrame* pFrame = new CMainFrame;
	
	if (!pFrame)
		return FALSE;
//	Gdiplus::GdiplusStartupInput gdiplusStartupInput;
  //  ULONG_PTR gdiplusToken;
    //GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
	m_pMainWnd = pFrame;
	// create and load the frame with its resources
	pFrame->LoadFrame(IDR_MAINFRAME,
		WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, NULL,
		NULL);
	// The one and only window has been initialized, so show and update it
	//pFrame->ShowWindow(SW_SHOW);
	pFrame->ShowWindow(SW_MAXIMIZE);
	pFrame->UpdateWindow();
	
	//Gdiplus::GdiplusShutdown(gdiplusToken);

	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand
	return TRUE;
}


// CVIMESEMRMangrApp message handlers



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

void CVIMESEMRMangrApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
//	CGuiAboutDialog dlg;
//	dlg.DoModal();
}


// CVIMESEMRMangrApp message handlers


BOOL CAboutDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	return TRUE;  // return TRUE unless you set the focus to a control
}
