// HMSHospitalFee.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "HMSHospitalFee.h"
#include "MainFrm.h"
#include ".\hmshospitalfee.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHMSHospitalFeeApp

BEGIN_MESSAGE_MAP(CHMSHospitalFeeApp, CMFCWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
END_MESSAGE_MAP()


// CHMSHospitalFeeApp construction

CHMSHospitalFeeApp::CHMSHospitalFeeApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CHMSHospitalFeeApp object

CHMSHospitalFeeApp theApp;

// CHMSHospitalFeeApp initialization

BOOL CHMSHospitalFeeApp::InitInstance()
{
	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	//InitCommonControls();

	if(!CMFCWinApp::InitInstance())
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
	////SetRegistryKey(_T("VIMES"));
	// To create the main window, this code creates a new frame window
	// object and then sets it as the application's main window object

	
	CMainFrame* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	// create and load the frame with its resources
	pFrame->LoadFrame(IDR_MAINFRAME,
		WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, NULL,
		NULL);
	// The one and only window has been initialized, so show and update it
	pFrame->CenterWindow();
	pFrame->ShowWindow(SW_SHOWMAXIMIZED);
	pFrame->UpdateWindow();

	//pFrame->OnFileInvoicesetup();
	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand
	return TRUE;
}


// CHMSHospitalFeeApp message handlers



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
void CHMSHospitalFeeApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// CHMSHospitalFeeApp message handlers


int CHMSHospitalFeeApp::ExitInstance()
{
	// TODO: Add your specialized code here and/or call the base class

	return CMFCWinApp::ExitInstance();
}
