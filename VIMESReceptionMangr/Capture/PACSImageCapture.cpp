#include "PACSImageCapture.h"
#include "../MainFrm.h"
#include "afxinet.h"
#include <Gdiplus.h>
#include "GuiUtils.h"
#include "StringToken.h"
using namespace Gdiplus;
#include "DcmImage/DcmManager.h"
#include "DcmImage/DcmInformation.h"
#include ".\pacsimagecapture.h"

#include "AverCaptureApi.h"
#pragma comment(lib, "Capture/AVerCapAPI.lib")

static CAPTURE_SINGLE_IMAGE_INFO m_CaptureSingleInfo;

void _UploadFile()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	TCHAR fname[MAX_PATH];
	CString szFilePath, szFileName;
	GetCurrentDirectory(MAX_PATH, fname);
	szFileName.Format(_T("%ld_image.jpg"), pMF->m_nPatientNo);
	szFilePath.Format(_T("%s\\DATA\\RM\\%s"), fname, szFileName);
	//MessageBox(szFilePath);
	BOOL br = pMF->lo_import(szFileName, szFilePath);
	if (br)
	{
		printf("\nlo_import!\n");
	}

}


void _AddAttachment()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	//_UploadFile(lpszFileDir, lpszFileName);
	CString szSQL, szWhere, szFileName;
	if (szFileName.IsEmpty())
	{
		szFileName.Format(_T("%ld_image.jpg"), pMF->m_nPatientNo);
	}
	CRecord rs(&pMF->m_db);
	CDbfMap tblHms_doc_attachment;
	tblHms_doc_attachment.SetTableName(L"hms_doc_attachment");
	tblHms_doc_attachment.AddField(L"hda_createdby", dfText, 15);
	tblHms_doc_attachment.AddField(L"hda_createddate", dfDateTime);
	tblHms_doc_attachment.AddField(L"hda_updatedby", dfText, 15);
	tblHms_doc_attachment.AddField(L"hda_updateddate", dfDateTime);
	tblHms_doc_attachment.AddField(L"hda_docno", dfLong);
	tblHms_doc_attachment.AddField(L"hda_idx", dfInteger);
	tblHms_doc_attachment.AddField(L"hda_filename", dfText, 128);
	tblHms_doc_attachment.AddField(L"hda_type", dfText, 15);
	tblHms_doc_attachment.AddField(L"hda_desc", dfText, 254);
	tblHms_doc_attachment.AddField(L"hda_patientno", dfLong);
	szWhere.Format(_T(" WHERE hda_patientno = %ld and hda_type = '1'"), pMF->m_nPatientNo);
	int nCount = tblHms_doc_attachment.Open(&pMF->m_db, szWhere);
	if (nCount == 0)
	{
		szSQL.Format(L"select count(*) + 1 from hms_doc_attachment where hda_docno = %ld", pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		tblHms_doc_attachment.SetValue(L"hda_createdby", pMF->GetCurrentUser());
		tblHms_doc_attachment.SetValue(L"hda_createddate", pMF->GetSysDateTime());
		tblHms_doc_attachment.SetValue(L"hda_idx", rs.GetIntValue());
		tblHms_doc_attachment.SetValue(L"hda_docno", pMF->m_nDocumentNo);
		tblHms_doc_attachment.SetValue(L"hda_updatedby", pMF->GetCurrentUser());
		tblHms_doc_attachment.SetValue(L"hda_updateddate", pMF->GetSysDateTime());
		tblHms_doc_attachment.SetValue(L"hda_filename", szFileName);
		tblHms_doc_attachment.SetValue(L"hda_type", L"1");
		tblHms_doc_attachment.SetValue(L"hda_desc", _T("Image"));
		tblHms_doc_attachment.SetValue(L"hda_patientno", pMF->m_nPatientNo);
		szSQL = tblHms_doc_attachment.GetInsertSQL();
		pMF->ExecSQL(szSQL);
	}	
}

void CreateFolder(LPCTSTR path)
{   
	CString Seperator = _T("\\");
	int Position = 0;
	CString Token;
	CString szPath;
	CString tmpStr = path;
	Token = tmpStr.Tokenize(Seperator, Position);
	while(!Token.IsEmpty())
	{
		// Get next token.
		if(!szPath.IsEmpty())
			szPath.AppendFormat(_T("\\"));
		szPath.AppendFormat(_T("%s"), Token);
		if(szPath.Find(_T("PACS")) != -1)
		{
			CreateDirectory(szPath ,NULL);
		}
		Token = tmpStr.Tokenize(Seperator, Position);
	} 
}



IMPLEMENT_DYNAMIC(CAverCapture, CWnd)

BEGIN_MESSAGE_MAP(CAverCapture, CWnd)
	//{{AFX_MSG_MAP(CLiveVideoDlg)
	ON_WM_CREATE()
	ON_WM_PAINT()
	ON_WM_DESTROY()
	ON_WM_SIZE()
	ON_WM_MOVE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()



CAverCapture::CAverCapture()
{
	m_bIsStartStreaming = FALSE;
	m_hCaptureDevice = NULL;
	ZeroMemory(&m_CaptureSingleInfo, sizeof(CAPTURE_SINGLE_IMAGE_INFO));
	m_CaptureSingleInfo.dwVersion=1;
	m_CaptureSingleInfo.dwImageType=1;
	m_CaptureSingleInfo.bOverlayMix=TRUE;

}


CAverCapture::~CAverCapture()
{
	StopStreaming();
	if(m_hCaptureDevice)
		AVerDeleteCaptureObject(m_hCaptureDevice);
	m_hCaptureDevice = NULL;	
}


BOOL CAverCapture::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;
	cs.dwExStyle &= ~WS_EX_CLIENTEDGE;
	cs.lpszClass = AfxRegisterWndClass(0, LoadCursor(NULL,IDC_ARROW), CreateSolidBrush(RGB(0, 0, 0)), 0);
	return TRUE;
}

int CAverCapture::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	Init();
	return 0;
}

void CAverCapture::OnDestroy()
{
	
}


void CAverCapture::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	if (m_hCaptureDevice)
	{
		AVerRepaintVideo(m_hCaptureDevice);

	}
_tprintf(_T("\r\nPaint"));

}

LONG CAverCapture::Init()
{
	DWORD dwDeviceIndex;
	VIDEO_SAMPLE_INFO * cpVideoInfo;
	VIDEO_CAPTURE_INFO VideoCaptureInfo;

	LONG res = 0;
	LONG rtValue = 0; 

	res = AVerGetDeviceNum(&m_dwDeviceNum);
	if (res != CAP_EC_SUCCESS)
	{
		printf("\r\nGetDevice error");
	}
	_tprintf(_T("\r\n AVerGetDeviceNum: %d"), m_dwDeviceNum);
	for (DWORD dwDeviceIndex = 0; dwDeviceIndex < m_dwDeviceNum; dwDeviceIndex++)
	{
	
		if (rtValue = AVerGetDeviceName(dwDeviceIndex, m_wcDeviceName) != CAP_EC_SUCCESS)
		{
			printf("can not get the name of device.");
		}
		else
		{
			_tprintf(_T("\r\n%s"), m_wcDeviceName);
		}

	}

	printf("\r\nCreateCaptureObject");
	res = AVerCreateCaptureObjectEx(m_dwDeviceNum-1, DEVICETYPE_SD, NULL, &m_hCaptureDevice);
	if (res != CAP_EC_SUCCESS)
	{
		printf("\r\nAVerCreateCaptureObjectEx error");
	}
	printf("\r\nSetVideoFormat");
	res = AVerSetVideoFormat(m_hCaptureDevice, VIDEOFORMAT_NTSC);

	if (res != CAP_EC_SUCCESS)
	{
		printf("\r\n AVerSetVideoFormat error");
	}
	VIDEO_RESOLUTION vrs;
	vrs.dwVersion = 1;
	vrs.bCustom = FALSE;
	vrs.dwVideoResolution = VIDEORESOLUTION_1920X1080;
	vrs.dwWidth = 0;
	vrs.dwHeight = 0;

	printf("\r\nSetResolution");
	res = AVerSetVideoResolutionEx(m_hCaptureDevice, &vrs);
	if (res != CAP_EC_SUCCESS)
	{
		printf("\r\n AVerSetVideoResolutionEx error");
	}
	res = AVerSetVideoPreviewEnabled(m_hCaptureDevice, TRUE);
	if (res != CAP_EC_SUCCESS)
	{
		printf("\r\n AVerSetVideoPreviewEnabled error");
	}
	printf("\r\nSetVideoSource");
	res = AVerSetVideoSource(m_hCaptureDevice, VIDEOSOURCE_HDMI);
	if (res != CAP_EC_SUCCESS)
	{
		printf("\r\n AVerSetVideoSource error");
	}


	
	

	/*
  		ZeroMemory(&VideoCaptureInfo, sizeof(VIDEO_CAPTURE_INFO));
		VideoCaptureInfo.bOverlayMix = FALSE;
		VideoCaptureInfo.dwDurationMode = DURATION_TIME; //
		VideoCaptureInfo.dwDuration = 20;
		VideoCaptureInfo.dwCaptureType = CT_SEQUENCE_FRAME;// CT_SEQUENCE_FRAME;
		VideoCaptureInfo.dwSaveType = ST_CALLBACK_RGB24;
		VideoCaptureInfo.lpCallback = readBmpData;
		VideoCaptureInfo.lCallbackUserData = (LONG)this;

		rtValue |= AVerCaptureVideoSequenceStart(m_hCaptureDevice, VideoCaptureInfo);

		if (rtValue == CAP_EC_SUCCESS)
			return CAP_EC_SUCCESS;
		else
		{
			return CAP_EC_ERROR_STATE;
		}
 
*/

	

	//	BYTE * imageDataBuf;
	//	uchar * bmpImageBits;
	//	LONG imageDataBufLeng;
	 //	rtValue |= AVerCaptureSingleImageToBuffer(m_hCaptureDevice,NULL, &imageDataBufLeng, NULL, 50);
		//imageDataBuf = new BYTE[imageDataBufLeng];

	bool bSetting = false;
	if(bSetting)
	{
		TCHAR szValue[50] = {0};
		TCHAR wszDeviceName[MAX_PATH];
		memset(wszDeviceName, _T('\0'), MAX_PATH);
		CString szFileName = _T("./avercapture.ini");
		GetPrivateProfileString(_T("DeviceName"), _T("DeviceName"),_T(" "), szValue, 50, szFileName);
		CString strLastDeviceName=szValue, strCurrDeviceName;
		strLastDeviceName = strLastDeviceName.Mid(strLastDeviceName.Find(':')+1);
		for (int i=0;i<m_dwDeviceNum;i++)
		{
			AVerGetDeviceName(i, wszDeviceName);
			strCurrDeviceName = wszDeviceName;
			strCurrDeviceName = strCurrDeviceName.Mid(strCurrDeviceName.Find(':')+1);
			if (strCurrDeviceName == strLastDeviceName)
			{
				GetPrivateProfileString(_T("AverSetting"), _T("DeviceType"), _T(""), szValue, 10, szFileName);
				DWORD dwDeviceType = _tstoi(szValue);
//				OnSelectCaptureDevice(ID_APP_DEVICE1_SD+ i*2+dwDeviceType-1);

				GetPrivateProfileString(_T("VideoSource"), _T("VideoSource"), _T(""), szValue, 10, szFileName);
				DWORD dwVideoSource= _tstoi(szValue);
				AVerSetVideoSource(m_hCaptureDevice,dwVideoSource);

				GetPrivateProfileString(_T("AudioSource"), _T("AudioSource"), _T(""), szValue, 10, szFileName);
				DWORD dwAudioSource= _tstoi(szValue);
				AVerSetAudioSource(m_hCaptureDevice,dwAudioSource);

				GetPrivateProfileString(_T("VideoFormat"), _T("VideoFormat"), _T(""), szValue, 10, szFileName);
				DWORD dwVideoFormat= _tstoi(szValue);
				AVerSetVideoFormat(m_hCaptureDevice,dwVideoFormat);

				GetPrivateProfileString(_T("VideoFrameRate"), _T("VideoFrameRate"), _T(""), szValue, 10, szFileName);
				DWORD dwVideoFrameRate= _tstoi(szValue);
				AVerSetVideoInputFrameRate(m_hCaptureDevice,dwVideoFrameRate);

				VIDEO_RESOLUTION VideoResolution = {0};
				VideoResolution.dwVersion = 1;
				GetPrivateProfileString(_T("VideoResolution"), _T("Resolution"), _T(""), szValue, 10, szFileName);
				VideoResolution.dwVideoResolution=_tstoi(szValue);
				GetPrivateProfileString(_T("VideoResolution"), _T("ResolutionWidth"), _T(""), szValue, 10, szFileName);
				VideoResolution.dwWidth=_tstoi(szValue);
				GetPrivateProfileString(_T("VideoResolution"), _T("ResolutionHeight"), _T(""), szValue, 10, szFileName);
				VideoResolution.dwHeight=_tstoi(szValue);
				GetPrivateProfileString(_T("VideoResolution"), _T("IsCustom"), _T(""), szValue, 10, szFileName);
				if (_tcscmp(szValue,_T("NO"))==0)
				{
					VideoResolution.bCustom=FALSE;
				}
				else
				{
					VideoResolution.bCustom=TRUE;
				}
				AVerSetVideoResolutionEx(m_hCaptureDevice,&VideoResolution);
			}
		}


	}

	CAPTURE_SINGLE_IMAGE_INFO Test={0};
	HRESULT hr = AVerCaptureSingleImage(m_hCaptureDevice,&Test);
	if(hr==CAP_EC_NOT_SUPPORTED)
	{

	}


	return res;
}


LONG CAverCapture::StartStreaming()
{
	if(m_hCaptureDevice == NULL)
		return -1;
//	AVerSetVideoRenderer(m_hCaptureDevice, VIDEORENDERER_EVR);
//	AVerSetEventCallback(m_hCaptureDevice, NotifyEventCallback, 0, this);
	RECT rectClient;
	GetClientRect(&rectClient);
	AVerSetVideoWindowPosition(m_hCaptureDevice, rectClient);
	if (AVerStartStreaming(m_hCaptureDevice) != CAP_EC_SUCCESS)
	{
		AfxMessageBox(_T("Can't start streaming."));
		return 0;
	}	
 
	m_bIsStartStreaming=TRUE;


	return 1;
}

LONG CAverCapture::StopStreaming()
{
	if (m_bIsStartStreaming)
	{
		AVerStopStreaming(m_hCaptureDevice);
		m_bIsStartStreaming = FALSE;
	}	
	return 0;
}

void CAverCapture::Setting()
{

}

void CAverCapture::OnSize(UINT nType, int cx, int cy) 
{
	CWnd::OnSize(nType, cx, cy);
	RECT rectClient;
	GetClientRect(&rectClient);
	AVerSetVideoWindowPosition(m_hCaptureDevice, rectClient);
}
void CAverCapture::OnMove(int x, int y) 
{
	CWnd::OnMove(x, y);
	RECT rectClient;
	GetClientRect(&rectClient);
	AVerSetVideoWindowPosition(m_hCaptureDevice, rectClient);	
}

LONG CAverCapture::CaptureImage(LPCTSTR lpszFilePath)
{
	
	m_CaptureSingleInfo.lpFileName = (LPWSTR)lpszFilePath;
	m_CaptureSingleInfo.dwImageType = 1;
	LONG lRetVal = AVerCaptureSingleImage(m_hCaptureDevice, &m_CaptureSingleInfo);
	if (lRetVal != 0)
	{
		if (lRetVal == CAP_EC_HDCP_PROTECTED_CONTENT)
		{
			AfxMessageBox(_T("The program content is protected!"));
			return 0;
		}
		AfxMessageBox(_T("The width and height of capture area are not a multiple of 2 or out of range."));
		return 0;
	}
_tprintf(_T("\r\n%s"), lpszFilePath);
	return 1;
}



///////////////////////////////////
///
///////////////////////////////////
static long _OnImageCaptureLoadDataFnc(CWnd *pWnd){
	return ((CPACSImageCapture*)pWnd)->OnImageCaptureLoadData();
} 
static void _OnImageCaptureDblClickFnc(CWnd *pWnd){
	((CPACSImageCapture*)pWnd)->OnImageCaptureDblClick();
} 
static void _OnImageCaptureSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSImageCapture*)pWnd)->OnImageCaptureSelectChange(nOldItem, nNewItem);
} 
static int _OnImageCaptureDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnImageCaptureDeleteItem();
} 
static void _OnImageSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPACSImageCapture*)pWnd)->OnImageSelectChange(nOld, nNew);
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnCaptureSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnCaptureSelect();
}

static void _OnBackSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnBack();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnSaveSelect();
}

static void _OnSetupVideoSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnSetupVideo();
}

static int _OnAddPACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnAddPACSImageCapture();
} 
static int _OnEditPACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnEditPACSImageCapture();
} 
static int _OnDeletePACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnDeletePACSImageCapture();
} 
static int _OnSavePACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnSavePACSImageCapture();
} 
static int _OnCancelPACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnCancelPACSImageCapture();
} 
CPACSImageCapture::CPACSImageCapture(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 705;
	SetDefaultValues();
	m_bCaptured = false;
	m_nDeviceID = 0;
	m_bMarkAll = false;

	m_tracker.m_rect = CRect(0,0,0,0);
	m_tracker.m_nStyle = 0;
	m_tracker.m_nStyle |= CRectTracker::dottedLine;
	m_tracker.m_nStyle |= CRectTracker::resizeOutside;
	m_tracker.m_nHandleSize = 5;
	m_nOrderLine = 0;
	m_nOrderID = 0;
	m_nWidth = 640;
	m_nHeight = 480;
	m_pWndFocus = NULL;
	m_bIsAverCapture = false;
	m_pAverCapture = NULL;

}
CPACSImageCapture::~CPACSImageCapture(){

	if(m_pAverCapture)
	{
		m_pAverCapture->DestroyWindow();
		delete m_pAverCapture;
	}

}


BEGIN_MESSAGE_MAP(CPACSImageCapture, CGuiView)
	ON_WM_LBUTTONDOWN()
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


void CPACSImageCapture::OnCreateComponents(){
	m_wndThumb.Create(this, 5, 5, 250, 620, WS_VISIBLE|WS_BORDER|WS_SIZEBOX);
	m_wndVideo.Create(NULL, _T(""), WS_VISIBLE|WS_BORDER|WS_SIZEBOX, CRect(260, 5, 990, 625), this, NULL);
	m_wndEdit.Create(this, _T("Edit"), 5, 630, 85, 655);
	m_wndDelete.Create(this, _T("Delete"), 90, 630, 170, 655);
	m_wndMarkAll.Create(this, _T("Select All"), 175, 630, 255, 655);

	m_wndBack.Create(this, _T("<< Quay lại-F4"), 800, 630, 905, 655);
	m_wndCapture.Create(this, _T("Chụp -F5"), 910, 630, 990, 655);
	
	m_wndSave.Create(this, _T("Save"), 260, 630, 340, 655);

	m_wndSetupVideo.Create(this, _T("Setup"), 360, 630, 440, 655);
	m_wndSetupVideo.ModifyStyle(WS_TABSTOP, 0);

	
	
}
void CPACSImageCapture::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szImagePath = AfxGetApp()->GetProfileString(_T("AVERCAPTURE"), _T("PATH"), _T(""));
	m_szCurrentDirectory = pMF->GetCurrentDirectory();


}
void CPACSImageCapture::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	m_wndImageCapture.SetEvent(WE_SELCHANGE, _OnImageCaptureSelectChangeFnc);
	m_wndImageCapture.SetEvent(WE_LOADDATA, _OnImageCaptureLoadDataFnc);
	m_wndImageCapture.SetEvent(WE_DBLCLICK, _OnImageCaptureDblClickFnc);
	m_wndImageCapture.AddEvent(1, _T("Delete"), _OnImageCaptureDeleteItemFnc, 0, VK_DELETE, 0);
*/
//	m_wndImage.SetEvent(WE_SELCHANGE, _OnImageSelectChangeFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
	m_wndBack.SetEvent(WE_CLICK, _OnBackSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	
	m_wndSetupVideo.SetEvent(WE_CLICK, _OnSetupVideoSelectFnc);

	//SetFocus();

	
	SetMode(VM_ADD);


	int nVideoMode;
	nVideoMode = AfxGetApp()->GetProfileInt(_T("Settings"), _T("VideoMode"), 0);

	// Video Intialization 
//	if(nVideoMode >=0 && nVideoMode < 4)
	{
		
		HRESULT hr = m_wndVideo.InitializeVideo(this->GetSafeHwnd());

		if(FAILED(hr))
		{
			AfxMessageBox(_T("Couldn't capture Video.!")) ;
		}
	/*
		else
		{
			switch(nVideoMode)
			{
				case 0:// S-Video
					m_wndVideo.StartSVideo() ;
					break ;
				case 1:// Composite Video
					m_wndVideo.StartCompositeVideo() ;
					break ;
				case 2:// TV Tuner
					m_wndVideo.StartTVTuner() ;
					break ;
				case 3:// Webcam 
					m_wndVideo.StartWebcam() ;
					break ;
			}
		}
	*/
	}
	if(nVideoMode == 4)
	{
		m_bIsAverCapture = true;
		CreateAverCapture();

	}
}
void CPACSImageCapture::OnDoDataExchange(CDataExchange* pDX){

}
void CPACSImageCapture::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSImageCapture::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSImageCapture::SetDefaultValues(){
	m_nOrderID = 0;

}
int CPACSImageCapture::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CPACSImageCapture::OnImageCaptureDblClick(){
	
} 
void CPACSImageCapture::OnImageCaptureSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSImageCapture::OnImageCaptureDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSImageCapture::OnImageCaptureLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndImageCapture.BeginLoad(); 
	m_wndImageCapture.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndImageCapture.AddItems(
		rs.MoveNext();
	}
	m_wndImageCapture.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPACSImageCapture::OnLoadThumb(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	
	CFileFind finder;
	CString szPath, szFileName;
	m_wndThumb.LoadThumb();
	
return;
	szPath.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s\\*.jpg"),
			pMF->GetCurrentDirectory(), m_nDocumentNo, m_nOrderID, m_szItemID);
_tprintf(_T("\r\n%s"), szPath);

		BOOL bWorking = finder.FindFile(szPath);
		int i = 0;
		m_wndThumb.ResetContent();
		
		while (bWorking)
		{
			bWorking = finder.FindNextFile();
			szFileName = finder.GetFilePath();
			Bitmap bmp(szFileName);
			i = str2int(szFileName.Mid(szFileName.GetLength()-7,4));
			m_wndThumb.Add(i, _T(""), &bmp, finder.GetFileName());
		} 

}
void CPACSImageCapture::OnImageSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSImageCapture::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	m_wndThumb.EditImage();
} 
void CPACSImageCapture::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	int nCount =0;

	m_wndThumb.m_bDelete = false;

	for(int i = 0; i< m_wndThumb.GetCount(); i++){
		if(m_wndThumb.GetCheck(i))
			nCount++;
	}

	if(nCount > 1)
	{
		int retMsg = ShowMessageBox(_T("\x42\x1EA1n mu\x1ED1n \x78\xF3\x61 \x63\xE1\x63 \x1EA3nh \x111\xE3 \x111\x1B0\x1EE3\x63 \x63h\x1ECDn kh\xF4ng (Y/N)?"), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg != IDYES)		
			return;

		m_wndThumb.DeleteAllMarked();
	}
	else
	{	
		int nSel = m_wndThumb.GetCurSel();
		m_wndThumb.Delete(nSel, false);
	}

	
} 
void CPACSImageCapture::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	m_bMarkAll = !m_bMarkAll;
	if(m_bMarkAll)
	{
		TranslateString(_T("UnSelect All"), tmpStr);
		m_wndThumb.MarkAll();
	}
	else
	{
		TranslateString(_T("Select All"), tmpStr);
		m_wndThumb.UnmarkAll();
	}
	m_wndMarkAll.SetWindowText(tmpStr);
} 
void CPACSImageCapture::OnCaptureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int n=0;
	m_bMarkAll = true;
	OnMarkAllSelect();
	m_wndSave.EnableWindow(TRUE);
	_tprintf(L"\nAverCapture:%d|m_bCapture: %d\n", m_bIsAverCapture, m_bCaptured);
	if(m_bIsAverCapture)
	{
		if(m_pAverCapture)
		{
			int nFrame = m_wndThumb.GetMaxFrame()+1;
			CString szFilePath, szFile;
			szFilePath.Format( _T("%s\\Data\\PACS\\%ld\\%ld\\%s"), 
			m_szCurrentDirectory, 
			m_nDocumentNo, 
			m_nOrderID, 
			m_szItemID);
			CreateFolder(szFilePath);
			szFile.Format(_T("%s\\image%.4d.jpg"), szFilePath, nFrame);

			m_pAverCapture->CaptureImage(szFile);
		}
		else
		{
			CString szAverName = _T("");//pMF->m_szAverCaptureName;
			if(szAverName.IsEmpty())
			{
				szAverName = _T("AVerMedia Capture Studio");
			}
			HWND hWndCapture = ::FindWindow(NULL, szAverName);
			if(!hWndCapture)
			{
				hWndCapture = ::FindWindow(NULL, _T("AVerMedia Capture Studio - No Signal"));
			}
//			if(hWndCapture)
			{
				m_wndSave.EnableWindow(TRUE);
				if(hWndCapture)
				{
					::SetWindowPos(hWndCapture, NULL, -1, -1, -1, -1,  SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
					::SetForegroundWindow(hWndCapture);
				}
				CString szBackupDir;
				szBackupDir.Format(_T("%s\\backup"), m_szImagePath);
				CFileFind finder;
				CString tmpStr;
				tmpStr.Format(_T("%s\\*.jpg"), m_szImagePath);
				BOOL bWorking = finder.FindFile(tmpStr);
				
				while (bWorking)
				{
					bWorking = finder.FindNextFile();
								
					tmpStr.Format(_T("%s\\%s"), szBackupDir, finder.GetFileName());
					_tprintf(_T("\r\n%s:%s"), finder.GetFilePath(), tmpStr);
					::MoveFile(finder.GetFilePath(), tmpStr);
				} 

				SetTimer(1000, 100, NULL);
				
				
			}
		}
		return;
	}
	else
	{
		m_wndSave.EnableWindow(TRUE);
	}
	_tprintf(L"\nStop:%d\n", m_bStop);
	if(m_bStop)
	{
		StartCapture();
		m_bStop = false;
	}
	if(m_bCaptured && pMF->m_nPatientNo > 0)
	{	
		{
			m_wndVideo.m_nFrame = m_wndThumb.GetMaxFrame()+1;
			m_wndVideo.GrabOneFrame(true);
			Sleep(250);
		}
		OnLoadThumb();
		_UploadFile();
		_AddAttachment();
	}
	
	m_wndThumb.SetCurSel(m_wndThumb.GetImageCount());
	m_wndSave.EnableWindow(TRUE);
	return;

//	if(m_wndVideo.GetCaptureState() == START_VIDEO_CAPTURE)
//	{
//		m_wndVideo.StopCaptureVideo();
//		KillTimer(1);
//	}
//	else
//	{
//		CString szFile;
//		szFile.Format(_T("%s\\m_wndVideo.avi"), m_wndVideo.GetDirectory());
//		::DeleteFile(szFile);
//		SetTimer(1, 1, 0);
////		BOOL ret = m_wndVideo.StartCaptureVideo(nSel);
//	}

} 



void CPACSImageCapture::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CString szFileName, szName, szYear, szDate, szComment, tmpStr;
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CDcmManager dcm;
	CRect rc;
	
	
	CString szOpt, szFile;
	CString szServerAETitle;
	CString szServerAddress;
	int nServerPort;
	int nClientPort;
	bool nFound = false;
	CString szClientAETitle;

	m_nDocumentNo = pMF->m_nDocumentNo;
	m_szPatientName = pMF->m_wndRegistration.m_szPatientName;
	if(m_nDocumentNo <= 0 || m_szPatientName.IsEmpty())
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn \x62\x1EC7nh nh\xE2n th\x1EF1\x63 hi\x1EC7n"));
		return;
	}


	for (int i =0; i < m_wndThumb.GetImageCount(); i++)
	{
		if(m_wndThumb.GetCheck(i))
			nFound = true;

	}
	if(!nFound)
	{
		ShowMessageBox(_T("Kh\xF4ng \x63\xF3 \x1EA3nh n\xE0o \x111\x1B0\x1EE3\x63 \x63h\x1ECDn. Y\xEAu \x63\x1EA7u \x63h\x1ECDn \x1EA3nh \x111\x1EC3 l\x1B0u"));
		return;
	}
	nFound = false;

	szServerAddress = pMF->m_szServerAddress;
	szServerAETitle = pMF->m_szServerAETitle;
	tmpStr = pMF->GetLocalIP();
	int n1, n2, n3;
	int pos, pos2;
	pos = tmpStr.Find(_T("."));
	n1 = str2int(tmpStr.Mid(0, pos));
	pos2 = tmpStr.Find(_T("."), pos);
	n2 = str2int(tmpStr.Mid(pos, pos2));
	n3 = str2int(tmpStr.Mid(pos2));

	if(pMF->m_szClientAETitle.CompareNoCase(_T("auto")) == 0)
	{
		szClientAETitle.Format(_T("%s"), pMF->GetLocalIP());
	}
	else
		szClientAETitle = pMF->m_szClientAETitle;


	nServerPort = pMF->m_nServerPort;
	nClientPort = pMF->m_nClientPort;



	dcm.SetServerAETitle(szServerAETitle);
	dcm.SetServerAddress(szServerAddress);
	dcm.SetServerPort(nServerPort);
	dcm.SetClientPort(nClientPort);
	dcm.SetClientAETitle(szClientAETitle);
	dcm.m_szPatientID.Format(_T("%ld"), m_nDocumentNo);
	TCHAR szPName[128];
	memset(szPName, _T('\0'), 128);
	//m_szPatientName = pMF->m_wndPatientProfile.m_szPatientName;
	UnMarkString(m_szPatientName, szPName);
	dcm.m_szPatientName = szPName;
	dcm.m_szStudyDate = pMF->GetSysDate();
	dcm.m_szStudyTime = pMF->GetSysTime();
	dcm.m_szPatientSex  = m_szSex;
	dcm.m_szPatientBirthDate = m_szBirthDate;
	dcm.m_szOtherPatientIDs.Format(_T("%.10ld%s"), m_nOrderID, m_szItemID);

	CString szGroup = _T("");//pMF->m_wndPatientProfile.m_szGroup.Left(3);

	CString szModality;
	if(szGroup == _T("B21"))
	{
		szModality = _T("CR");
	}
	else if(szGroup == _T("B22"))
	{
		szModality = _T("CT");
	}
	else if(szGroup == _T("B23"))
	{
		szModality = _T("MR");
	}
	else if(szGroup == _T("B24") || szGroup == _T("B31"))
	{
		szModality = _T("ES");
	}
	else if(szGroup == _T("B32"))
	{
		szModality = _T("US");
	}
	else if(szGroup == _T("B1"))
	{
		szModality = _T("EM");
	}
	else
	{
		szModality = _T("OT");
	}
	dcm.m_szModality = szModality;

	
	CString szDesc;
	szFile.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s.dcm"), pMF->GetCurrentDirectory(), m_nDocumentNo, m_nOrderID, m_szItemID);
	for (int i =0; i < m_wndThumb.GetImageCount(); i++)
	{
		if(m_wndThumb.GetCheck(i))
			nFound = true;

		if(!m_wndThumb.GetCheck(i))
		{
		//	m_wndThumb.Delete(i, true);
			continue;
		}

		HBITMAP hbmp = m_wndThumb.GetHBITMAP(i);
		Bitmap* bmp = Bitmap::FromHBITMAP(hbmp, 0);
		szComment = m_wndThumb.GetString(i);
		if(szComment.IsEmpty())
			szComment = _T(" ");

		if(!szDesc.IsEmpty())
			szDesc.AppendFormat(_T("\r\n"));
		szDesc.AppendFormat(_T("%s"), szComment);
		dcm.AddBitmap(bmp);
	}

	if(nFound)
	{
		m_wndThumb.SaveProperties();

		dcm.m_szStudyDescription = szDesc;
		if(dcm.SaveAsDicomFile(szFile))
		{
			szOpt.Format(_T(" \"%s\" "), szFile);
			if(dcm.storescu(szOpt) == 0){
				CString szNewFile;
				
				szNewFile.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"), pMF->GetCurrentDirectory(),  m_nDocumentNo, m_nOrderID, dcm.m_szSOPInstanceUID);
				::DeleteFile(szNewFile);
				CFile::Rename(szFile, szNewFile);

				
				szSQL.Format(_T("HMS_PACS_STORE_FILE(%ld, %ld, '%s', '%s','Y') "), m_nDocumentNo, m_nOrderID, m_szItemID, dcm.m_szSOPInstanceUID);
				pMF->ExecDML(szSQL);


				ShowMessageBox(_T("Upload completed."));	
				pMF->SetActivePane(1);

			}
			else
			{
				szSQL.Format(_T("HMS_PACS_STORE_FILE(%ld, %ld, '%s', '%s','N') "), m_nDocumentNo, m_nOrderID, m_szItemID, dcm.m_szSOPInstanceUID);
				pMF->ExecDML(szSQL);

				ShowMessageBox(_T("\x43\xF3 l\x1ED7i \x78\x1EA3y r\x61 khi t\x1EA3i \x1EA3nh l\xEAn m\xE1y \x63h\x1EE7."));	
			}

		}
		else
		{
			ShowMessageBox(_T("\x43\xF3 l\x1ED7i \x78\x1EA3y r\x61 khi t\x1EA3i \x1EA3nh l\xEAn m\xE1y \x63h\x1EE7."));	
		}
	}

	for (int i = m_wndThumb.GetImageCount()-1; i >=0; i--)
	{
		if(!m_wndThumb.GetCheck(i))
		{
			m_wndThumb.Delete(i, true);
		}
	}


	return;
/*
	 CLSID jpgClsid;
	GetEncoderClsid(L"image/jpeg", &jpgClsid);

	szDate = pMF->m_szOrderDate.Left(10);
	szYear = szDate.Left(4);
	szDate.Replace(_T("/"), _T(""));
	szDate.Replace(_T("-"), _T(""));

   AfxGetApp()->BeginWaitCursor();
	szName.Format(_T("PACS_%ld_%ld_%s*.jpg"), m_nDocumentNo, m_nOrderID, m_szItemID);
	szSQL.Format(_T("SELECT * FROM hms_pacs_file WHERE hpl_orderid=%ld and hpl_itemid='%s' "), m_nOrderID, m_szItemID);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("hpl_filename"), tmpStr);
//		pConnect->Remove(tmpStr);
		pMF->UnlinkFile(tmpStr);
		rs.MoveNext();
	}
	szSQL.Format(_T("DELETE FROM hms_pacs_file WHERE hpl_orderid=%ld and hpl_itemid='%s' "), m_nOrderID, m_szItemID);
	pMF->ExecSQL(szSQL);

		
	int w, h;
   for (int i =0; i < m_wndThumb.GetImageCount(); i++)
	{
		if(m_wndThumb.GetCheck(i)){			
			HBITMAP hbmp = m_wndThumb.GetHBITMAP(i);
			Bitmap bmp(hbmp, 0);
			w = bmp.GetWidth();
			h = bmp.GetHeight();
			szComment = m_wndThumb.GetString(i);
			szName.Format(_T("PACS_%ld_%ld_%s%.3d.jpg"), m_nDocumentNo, m_nOrderID, m_szItemID, i+1);
			szSQL.Format(_T("INSERT INTO hms_pacs_file VALUES(%ld, '%s', %d, '%s', '%s', '%s') "),
				m_nOrderID, m_szItemID, str2int(szYear), szDate, szName, szComment);
			pMF->ExecSQL(szSQL);
	_tprintf(_T("\r\n%s"), szName);
			szFileName.Format(_T("Images\\%s"), szName);
			bmp.Save(szFileName, &jpgClsid, NULL);
			pMF->UploadFile(szName, szFileName);			
		}
	}
	

	pMF->szFileName = szName;

	AfxGetApp()->EndWaitCursor();
	//m_wndThumb.DeleteAll();
	pMF->m_wndPatientProfile.m_wndImage.SetFileName(szName);
	pMF->m_wndPatientProfile.m_wndImage.Invalidate();
	pMF->SetActivePane(1);
	*/

}


void CPACSImageCapture::UploadQueue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CString szFileName, szName, szYear, szDate, szComment, tmpStr;
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CDcmManager dcm;
	CRect rc;
	
	
	CString szOpt, szFile;
	CString szServerAETitle;
	CString szServerAddress;
	int nServerPort;
	int nClientPort;
	bool nFound = false;
	CString szClientAETitle;
	long nDocumentNo, nOrderID;
	CString szItemID;
	CString szBirthDate;
	CString szPatientName;
	CString szSex;

	szServerAddress = pMF->m_szServerAddress;
	szServerAETitle = pMF->m_szServerAETitle;
	tmpStr = pMF->GetLocalIP();

	if(pMF->m_szClientAETitle.CompareNoCase(_T("auto")) == 0)
	{
		szClientAETitle.Format(_T("%s"), pMF->GetLocalIP());
	}
	else
		szClientAETitle = pMF->m_szClientAETitle;


	nServerPort = pMF->m_nServerPort;
	nClientPort = pMF->m_nClientPort;



	dcm.SetServerAETitle(szServerAETitle);
	dcm.SetServerAddress(szServerAddress);
	dcm.SetServerPort(nServerPort);
	dcm.SetClientPort(nClientPort);
	dcm.SetClientAETitle(szClientAETitle);

	szSQL.Format(_T(" SELECT trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hp_birthdate    AS birthdate,") \
_T("   hp_sex          AS sex,") \
_T("   hpl_docno       AS docno,") \
_T("   hpl_orderid     AS orderid,") \
_T("   hpl_itemid      AS itemid,") \
_T("   hpl_filename    AS filename,") \
_T("   hfl_groupid     AS fee_group") \
_T(" FROM hms_pacs_file") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno = hpl_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno = hd_patientno)") \
_T(" LEFT JOIN hms_fee_list") \
_T(" ON(hfl_feeid      = hpl_itemid)") \
_T(" WHERE hpl_uploaded='N' and hpl_orderid > 0"));
	rs.ExecSQL(szSQL);
	CString szGroup = _T("");
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), szPatientName);

		rs.GetValue(_T("birthdate"), szBirthDate);
		rs.GetValue(_T("sex"), szSex);
		rs.GetValue(_T("fee_group"), szGroup);
		rs.GetValue(_T("docno"), nDocumentNo);
		rs.GetValue(_T("orderid"), nOrderID);
		rs.GetValue(_T("itemid"), szItemID);
		//rs.GetValue(_T("filename"), szFile);
		

		dcm.m_szPatientID.Format(_T("%ld"), nDocumentNo);
		TCHAR szPName[128];
		memset(szPName, _T('\0'), 128);
		UnMarkString(szPatientName, szPName);
		dcm.m_szPatientName = szPName;
		dcm.m_szStudyDate = pMF->GetSysDate();
		dcm.m_szStudyTime = pMF->GetSysTime();
		dcm.m_szPatientSex  = szSex;
		dcm.m_szPatientBirthDate = szBirthDate;
		dcm.m_szOtherPatientIDs.Format(_T("%.10ld%s"), nOrderID, szItemID);

		

		CString szModality;
		if(szGroup == _T("B21"))
		{
			szModality = _T("CR");
		}
		else if(szGroup == _T("B22"))
		{
			szModality = _T("CT");
		}
		else if(szGroup == _T("B23"))
		{
			szModality = _T("MR");
		}
		else if(szGroup == _T("B24") || szGroup == _T("B31"))
		{
			szModality = _T("ES");
		}
		else if(szGroup == _T("B32"))
		{
			szModality = _T("US");
		}
		else if(szGroup == _T("B1"))
		{
			szModality = _T("EM");
		}
		else
		{
			szModality = _T("OT");
		}
		dcm.m_szModality = szModality;

		
		CString szDesc;
		szFile.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s.dcm"), pMF->GetCurrentDirectory(), nDocumentNo, nOrderID, szItemID);
		szOpt.Format(_T(" \"%s\" "), szFile);
_tprintf(_T("\r\nUPLOAD=%s"), szFile);
		if(dcm.storescu(szOpt) == 0){
			CString szNewFile;
			szNewFile.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"), pMF->GetCurrentDirectory(),  nDocumentNo, nOrderID, dcm.m_szSOPInstanceUID);
			::DeleteFile(szNewFile);
			CFile::Rename(szFile, szNewFile);
			szSQL.Format(_T("UPDATE hms_pacs_file SET hpl_uploaded='Y', hpl_filename='%s' WHERE hpl_docno=%ld and hpl_orderid=%ld and hpl_itemid='%s'  "), dcm.m_szSOPInstanceUID, nDocumentNo, nOrderID, szItemID );
			pMF->ExecSQL(szSQL);
		}
		rs.MoveNext();
	}
}

int CPACSImageCapture::OnAddPACSImageCapture(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSImageCapture::OnEditPACSImageCapture(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSImageCapture::OnDeletePACSImageCapture(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPACSImageCapture(); 
 	}
	return 0;
}
int CPACSImageCapture::OnSavePACSImageCapture(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPACSImageCaptureListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSImageCapture::OnCancelPACSImageCapture(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CPACSImageCapture::OnPACSImageCaptureListLoadData(){
	return 0;
}

void CPACSImageCapture::StartCapture(){
	//if capture frame	
	AfxGetApp()->BeginWaitCursor();
	if(!m_bCaptured)
	{
		
		if(m_bIsAverCapture)
		{
			if(m_pAverCapture)
			{
				m_pAverCapture->StopStreaming();
				m_pAverCapture->StartStreaming();
			}
		}
		else
		{
			m_wndVideo.StopCaptureVideo();
			m_wndVideo.OpenDevice(m_nDeviceID);
			m_wndVideo.ReleaseFrames();
		}
		m_bCaptured = true;
		m_wndCapture.SetFocus();
		//m_wndImage.SetFocus();
	}
	AfxGetApp()->EndWaitCursor();
}


BOOL CPACSImageCapture::PreTranslateMessage(MSG *pMsg)
{	

	if(pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_F4 && m_bCaptured)
		{

			OnBack();
			return TRUE;
		}
		if (pMsg->wParam == VK_F5 && m_bCaptured)
		{

			OnCaptureSelect();
			return TRUE;
		}
		else if (pMsg->wParam == VK_DELETE)	
		{
			OnDeleteSelect();
			return TRUE;

		}			
	}
	return CGuiView::PreTranslateMessage(pMsg);

}


void CPACSImageCapture::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	
	if (m_tracker.HitTest(point) < 0)
	{
		
		CRectTracker track;
		if (track.TrackRubberBand(this, point, true)) 
		{
			track.m_rect.NormalizeRect();
			m_tracker.m_rect = track.m_rect;
		} else 
		{
			m_tracker.m_rect = CRect(0,0,0,0);
		}
	} else	
	{
		if (m_tracker.Track(this, point, true)){
			m_tracker.m_rect.NormalizeRect();
		} else {
			m_tracker.m_rect = CRect(0,0,0,0);
		}

	}
	Invalidate();
	CGuiView::OnLButtonDown(nFlags, point);
}

void CPACSImageCapture::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CRect rect;
	GetClientRect(&rect);
	//dc.FillSolidRect(rect, RGB(0, 0, 200));

	// TODO: Add your message handler code here
	// Do not call CWnd::OnPaint() for painting messages
//	if(m_tracker.m_rect.Width() > 100)
//			m_tracker.Draw(&dc);
return;

	CDC memDC;
	HGDIOBJ oldGdi=NULL;
	GetClientRect(&rect);
	memDC.CreateCompatibleDC(NULL);
	oldGdi = memDC.SelectObject(m_wndVideo.GetHBITMAP());
	dc.BitBlt(rect.left, rect.top, rect.Width(), rect.Height(), &memDC, 0, 0, SRCCOPY);

	memDC.SelectObject(oldGdi);
	memDC.DeleteDC();
}

void CPACSImageCapture::OnTimer(UINT nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	if(nIDEvent == 1000)
	{
		SyncImages();
	}
	CGuiView::OnTimer(nIDEvent);
}

void CPACSImageCapture::StopCapture(){
	if(!m_bStop)
	{
	//	m_wndVideo.StopCaptureVideo();
		//if(m_bIsAverCapture)
		//{
		//	if(m_pAverCapture)
		//		m_pAverCapture->Stopstreaming();
		//}
		//else
		{
			m_wndVideo.StopDevice();
		}
		m_bStop = true;
	}
}
void CPACSImageCapture::SetReference(LPCTSTR lpszDir, long nDocumentNo, long nOrderID, CString szItemID){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szPath;
	m_nDocumentNo = nDocumentNo;
	m_nOrderID = nOrderID;
	m_szItemID = szItemID;
	
	szPath.Format(_T("%s\\DATA\\RM\\%ld_image.jpg"), lpszDir, pMF->m_nPatientNo);
	printf("\nszPath: %s\n", szPath);
	m_wndThumb.SetPath(szPath);
	//if(m_bIsAverCapture)
	//{
	//	m_pAverCapture->SetFileName(szPath);
	//}
	//else
	m_wndVideo.SetReference(lpszDir, nDocumentNo, nOrderID, szItemID);
}

LRESULT CPACSImageCapture::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class

	return CGuiView::WindowProc(message, wParam, lParam);
}


#include "LiveVideoDlg.h"

void CPACSImageCapture::OnSetupVideo(){
	CLiveVideoDlg dlg(this);
	//m_wndVideo.StopCaptureVideo();
//	m_bIsAverCapture = false;
	if(dlg.DoModal() == IDOK)
	{
		m_nWidth = dlg.m_width;
		m_nHeight = dlg.m_height;
//		m_wndVideo.m_nWidth = m_nWidth;
//		m_wndVideo.m_nHeight = m_nHeight;
		if(dlg.m_nVideoMode==4)
		{
			m_bIsAverCapture = true;
			m_szImagePath = AfxGetApp()->GetProfileString(_T("AVERCAPTURE"), _T("PATH"), _T(""));
		}
		else
		{
			//HRESULT hr = m_wndVideo.InitializeVideo(this->GetSafeHwnd());
			
		}
		CreateAverCapture();
	
/*
		switch(dlg.m_nVideoMode)
		{
			case 0:// S-Video
				m_wndVideo.StartSVideo() ;
				break ;
			case 1:// Composite Video
				m_wndVideo.StartCompositeVideo() ;
				break ;
			case 2:// TV Tuner
				m_wndVideo.StartTVTuner() ;
				break ;
			case 3:// Webcam 
				m_wndVideo.StartWebcam() ;
				break ;
			case 4:
				m_bIsAverCapture = true;
				
				StartCapture();
				break;
		}
*/
	}
}


void CPACSImageCapture::OnBack(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	pMF->SetActivePane(1);
	//if(pMF->m_wndPatientProfile.m_wndResult && pMF->m_wndPatientProfile.m_wndResult->GetSafeHwnd())
	//{
	//	pMF->m_wndPatientProfile.m_wndResult->SetFocus();
	//}
}


void CPACSImageCapture::CreateAverCapture()
{
	if(m_bIsAverCapture)
	{
		CRect rect;
		m_wndVideo.GetWindowRect(&rect);
		ScreenToClient(&rect);
		m_wndVideo.StopCaptureVideo();
		m_wndVideo.ShowWindow(SW_HIDE);
		CFile file;
		BOOL res = file.Open(_T("./avercapture.ini"), CFile::modeRead);
		file.Close();
		if(res)
		{
			if(m_pAverCapture == NULL)
			{
				m_pAverCapture = new CAverCapture();
				m_pAverCapture->Create(NULL, _T(""), WS_CHILD|WS_VISIBLE, rect, this, GetDlgCtrlID()+1);
	_tprintf(_T("\r\nCreateAverCapture"));
			}
		}

		
	}
	else
	{
		if(m_pAverCapture)
		{
			m_pAverCapture->StopStreaming();
			m_pAverCapture->DestroyWindow();
			delete m_pAverCapture;
			m_pAverCapture = NULL;
		}

		m_wndVideo.ReleaseFrames();
		m_wndVideo.ShowWindow(SW_SHOW);
		
	}

	if(m_bIsAverCapture)
	{
			if(m_pAverCapture)
			{
				m_pAverCapture->StopStreaming();
				m_pAverCapture->StartStreaming();
			}
	}
	else
	StartCapture();
}

void CPACSImageCapture::SyncImages()
{
	CString szFileName;
	CFileFind finder;
	CString tmpStr, szImageBackupPath, szImageBackupFile;
	tmpStr.Format(_T("%s\\*.jpg"), m_szImagePath);
	BOOL bWorking = finder.FindFile(tmpStr);
	szImageBackupPath.Format(_T("%s\\backup\\%ld"), m_szImagePath,  m_nDocumentNo);
	CreateFolder(szImageBackupPath);
	szFileName.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"), 
			m_szCurrentDirectory, 
			m_nDocumentNo, 
			m_nOrderID, 
			m_szItemID);
	CreateFolder(szFileName);
	bool bRefresh = false;
	while (bWorking)
	{
			bWorking = finder.FindNextFile();
								
			szFileName.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s\\image%.4d.jpg"), 
			m_szCurrentDirectory, 
			m_nDocumentNo, 
			m_nOrderID, 
			m_szItemID, 
			m_wndThumb.GetMaxFrame()+1);

			_tprintf(_T("\r\n%s:%s"), finder.GetFilePath(), szFileName);
			::CopyFile(finder.GetFilePath(), szImageBackupPath, FALSE);
			::MoveFile(finder.GetFilePath(), szFileName);
			bRefresh = true;
			

	} 
	if(bRefresh)
	{
		OnLoadThumb();
	}


}