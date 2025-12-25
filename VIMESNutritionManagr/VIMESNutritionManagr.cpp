// VIMESNutritionManagr.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "VIMESNutritionManagr.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVIMESNutritionManagrApp

BEGIN_MESSAGE_MAP(CVIMESNutritionManagrApp, CMFCWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CMFCWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CMFCWinApp::OnFileOpen)
	// Standard print setup command
	ON_COMMAND(ID_FILE_PRINT_SETUP, CMFCWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()


// CVIMESNutritionManagrApp construction

CVIMESNutritionManagrApp::CVIMESNutritionManagrApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
	//m_bSaveState = FALSE;
}


// The one and only CVIMESNutritionManagrApp object

CVIMESNutritionManagrApp theApp;

// CVIMESNutritionManagrApp initialization

BOOL CVIMESNutritionManagrApp::InitInstance()
{
	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	//InitCommonControls();

	if (!CMFCWinApp::InitInstance())
		return FALSE;
    
	//SetRegistryKey(L"Nutrition");

	
	CMainFrame* pFrame = new CMainFrame();
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

	//pFrame->OnFileInvoicesetup();
	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand
	return TRUE;
}



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
void CVIMESNutritionManagrApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// CVIMESNutritionManagrApp message handlers

