// LiveVideoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LiveVideoDlg.h"
#include "Resource.h"
//#include "GuiUtils.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


#include "shlobj.h"


bool GetFolder(CString& szPath, const CString szCaption, HWND hOwner=NULL)
{
   bool retVal = false;

   // The BROWSEINFO struct tells the shell 
   // how it should display the dialog.
   BROWSEINFO bi;
   memset(&bi, 0, sizeof(bi));

   bi.ulFlags   = BIF_USENEWUI;
   bi.hwndOwner = hOwner;
   bi.lpszTitle = szCaption;

   // must call this if using BIF_USENEWUI
   ::OleInitialize(NULL);

   // Show the dialog and get the itemIDList for the 
   // selected folder.

   LPITEMIDLIST pIDL = ::SHBrowseForFolder(&bi);

   if(pIDL != NULL)
   {
      // Create a buffer to store the path, then 
      // get the path.
      TCHAR buffer[_MAX_PATH] = {'\0'};
      if(::SHGetPathFromIDList(pIDL, buffer) != 0)
      {
         // Set the string value.
		  szPath = buffer;
         retVal = true;
      }

      // free the item id list
      CoTaskMemFree(pIDL);
   }

   ::OleUninitialize();

   return retVal;
}




/////////////////////////////////////////////////////////////////////////////
// CLiveVideoDlg dialog

CLiveVideoDlg::CLiveVideoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLiveVideoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLiveVideoDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_nVideoMode = 0;
}

void CLiveVideoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLiveVideoDlg)
	DDX_Control(pDX, IDC_STATIC_SCREEN, m_staticScreen);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CLiveVideoDlg, CDialog)
	//{{AFX_MSG_MAP(CLiveVideoDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_APPLY, OnApply)
	ON_BN_CLICKED(IDC_BUTTON1, OnBrowse)
	ON_WM_DESTROY()
	ON_COMMAND_RANGE(IDC_RADIO1, IDC_RADIO5, OnSelectVideo)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiveVideoDlg message handlers

BOOL CLiveVideoDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

		

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	m_btnSVideo = (CButton*)GetDlgItem(IDC_RADIO1) ;
	m_btnComposite = (CButton*)GetDlgItem(IDC_RADIO2) ;
	m_btnTVTuner = (CButton*)GetDlgItem(IDC_RADIO3) ;
	m_btnWebcam = (CButton*)GetDlgItem(IDC_RADIO4) ;
	m_btnAverCapture = (CButton*)GetDlgItem(IDC_RADIO5) ;
	m_nVideoMode = AfxGetApp()->GetProfileInt(_T("Settings"), _T("VideoMode"), 0);

	GetDlgItem(IDC_EDIT1)->EnableWindow(FALSE);
	//Retrive the window Handle of the Video Screen
	HWND hWnd = m_staticScreen.GetSafeHwnd() ;	
	
	// Video Intialization 
	HRESULT hr = capVideo.InitializeVideo(hWnd) ;

	if(FAILED(hr))
		AfxMessageBox(_T("Couldn't capture Video.!")) ;
	else
		capVideo.StartWebcam() ;  // Set Webcam as Default

	capVideo.StopCapture() ;	
	m_btnSVideo->SetCheck(0) ;
	m_btnComposite->SetCheck(0) ;
	m_btnTVTuner->SetCheck(0) ;
	m_btnWebcam->SetCheck(0) ;
	m_btnAverCapture->SetCheck(0) ;

	switch(m_nVideoMode)
	{
	case 0:// S-Video
		m_btnSVideo->SetCheck(1);
		capVideo.StartSVideo();
		break ;
	case 1:// Composite Video
		m_btnComposite->SetCheck(1);
		capVideo.StartCompositeVideo();
		break ;
	case 2:// TV Tuner
		m_btnTVTuner->SetCheck(1);
		capVideo.StartTVTuner();
		break ;
	case 3:// Webcam 
		m_btnWebcam->SetCheck(1) ;
		capVideo.StartWebcam();
		break ;
	case 4:
		m_btnAverCapture->SetCheck(1) ;
		break;
	}


	
	

	m_szImagePath = AfxGetApp()->GetProfileString(_T("AVERCAPTURE"), _T("PATH"), _T(""));
	GetDlgItem(IDC_EDIT1)->SetWindowText(m_szImagePath);
	CenterWindow() ;
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}


void CLiveVideoDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	CDialog::OnSysCommand(nID, lParam);
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CLiveVideoDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CLiveVideoDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}



BOOL CLiveVideoDlg::PreTranslateMessage(MSG* pMsg) 
{
	if((pMsg->message == WM_KEYDOWN) && (pMsg->wParam == VK_ESCAPE))
    {
        // Escape key was hit: do whatever you want
        return TRUE;
    }
	if((pMsg->message == WM_KEYDOWN) && (pMsg->wParam == VK_RETURN))
    {
        // Enter key was hit: do whatever you want
        return TRUE;
    }	
	
	return CDialog::PreTranslateMessage(pMsg);
}

void CLiveVideoDlg::OnSelectVideo(UINT nID)
{
	ASSERT(nID >= IDC_RADIO1 && nID <= IDC_RADIO5) ;
	int nVideo = nID - IDC_RADIO1 ;
	m_nVideoMode = nVideo;
	switch(nVideo)
	{
	case 0:// S-Video
		capVideo.StartSVideo() ;
		break ;
	case 1:// Composite Video
		capVideo.StartCompositeVideo() ;
		break ;
	case 2:// TV Tuner
		capVideo.StartTVTuner() ;
		break ;
	case 3:// Webcam 
		capVideo.StartWebcam() ;
		break ;
	}
	AfxGetApp()->WriteProfileInt(_T("Settings"), _T("VideoMode"), m_nVideoMode);
	
}

void CLiveVideoDlg::OnCancel() 
{
	// UnIntialize the Video
	capVideo.UnIntializeVideo() ;	
	CDialog::OnCancel();
}

void CLiveVideoDlg::OnApply() 
{
	UpdateData(TRUE);
	CDialog::OnOK();
	AfxGetApp()->WriteProfileString(_T("AVERCAPTURE"), _T("PATH"), m_szImagePath);
	//capVideo.StopCapture() ;	
	/*m_btnSVideo->SetCheck(0) ;
	m_btnComposite->SetCheck(0) ;
	m_btnTVTuner->SetCheck(0) ;
	m_btnWebcam->SetCheck(0) ;*/
}


void CLiveVideoDlg::OnBrowse() 
{
	GetFolder(m_szImagePath, _T("Image path"), this->GetSafeHwnd());
	GetDlgItem(IDC_EDIT1)->SetWindowText(m_szImagePath);
	

}

void CLiveVideoDlg::OnDestroy() 
{
	CDialog::OnDestroy();
	// UnIntialize the Video
	capVideo.UnIntializeVideo() ;	
	
}

