// VIMESSystemSetup.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "VIMESAdministrationMangr.h"
#include "MainFrm.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVIMESAdministrationApp

BEGIN_MESSAGE_MAP(CVIMESAdministrationApp, CMFCWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
END_MESSAGE_MAP()


// CVIMESAdministrationApp construction

CVIMESAdministrationApp::CVIMESAdministrationApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CVIMESAdministrationApp object

CVIMESAdministrationApp theApp;

// CVIMESAdministrationApp initialization

BOOL CVIMESAdministrationApp::InitInstance()
{
	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	//InitCommonControls();

	
	if (!CMFCWinApp::InitInstance())
		return FALSE;

	//SetRegistryKey(_T("Administration"));

	cout << "INIT INSTANCE VIMES ADMINISTRATION MANAGEMENT MODULE" << endl;

	
	CMainFrame *pFrame = new CMainFrame();
    if (!pFrame)
        return FALSE;



	m_pMainWnd = pFrame;
    // create and load the frame with its resources
    if (!pFrame->LoadFrame(IDR_MAINFRAME))
        return FALSE;

    // The one and only window has been initialized, so show and update it
    // pFrame->CenterWindow();
    pFrame->ShowWindow(SW_SHOWMAXIMIZED);
    pFrame->UpdateWindow();


	return TRUE;
}


// CVIMESAdministrationApp message handlers



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
void CVIMESAdministrationApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}
// CVIMESAdministrationApp message handlers

