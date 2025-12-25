#include "PACSImageCapture.h"
#include "MainFrm.h"
#include "afxinet.h"
#include <Gdiplus.h>
#include "GuiUtils.h"
#include "StringToken.h"

#include "DcmImage/DcmManager.h"
#include "DcmImage/DcmInformation.h"
#include "AverCaptureAPI.h"
#include "CaptureDeviceSetting.h"

using namespace Gdiplus;
#pragma comment(lib, "AVerCapAPI.lib")

static CAPTURE_SINGLE_IMAGE_INFO m_CaptureSingleInfo;

void CreateFolder(LPCTSTR path)
{
	CString Seperator = _T("\\");
	int Position = 0;
	CString Token;
	CString szPath;
	CString tmpStr = path;
	Token = tmpStr.Tokenize(Seperator, Position);
	while (!Token.IsEmpty())
	{
		// Get next token.
		if (!szPath.IsEmpty())
			szPath.AppendFormat(_T("\\"));
		szPath.AppendFormat(_T("%s"), Token);
		if (szPath.Find(_T("PACS")) != -1)
		{
			CreateDirectory(szPath, NULL);
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
	m_CaptureSingleInfo.dwVersion = 1;
	m_CaptureSingleInfo.dwImageType = 1;
	m_CaptureSingleInfo.bOverlayMix = TRUE;

}


CAverCapture::~CAverCapture()
{
	StopStreaming();
	if (m_hCaptureDevice)
		AVerDeleteCaptureObject(m_hCaptureDevice);
	m_hCaptureDevice = NULL;
}


BOOL CAverCapture::PreCreateWindow(CREATESTRUCT& cs)
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;
	cs.dwExStyle &= ~WS_EX_CLIENTEDGE;
	cs.lpszClass = AfxRegisterWndClass(0, LoadCursor(NULL, IDC_ARROW), CreateSolidBrush(RGB(0, 0, 0)), 0);
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
	//_tprintf(_T("\r\nPaint"));

}

LONG CAverCapture::Init()
{
	DWORD dwDeviceIndex;
	VIDEO_SAMPLE_INFO* cpVideoInfo;
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
	res = AVerCreateCaptureObjectEx(m_dwDeviceNum - 1, DEVICETYPE_SD, NULL, &m_hCaptureDevice);
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
	if (bSetting)
	{
		TCHAR szValue[50] = { 0 };
		TCHAR wszDeviceName[MAX_PATH];
		memset(wszDeviceName, _T('\0'), MAX_PATH);
		CString szFileName = _T("./avercapture.ini");
		GetPrivateProfileString(_T("DeviceName"), _T("DeviceName"), _T(" "), szValue, 50, szFileName);
		CString strLastDeviceName = szValue, strCurrDeviceName;
		strLastDeviceName = strLastDeviceName.Mid(strLastDeviceName.Find(':') + 1);
		for (int i = 0; i < m_dwDeviceNum; i++)
		{
			AVerGetDeviceName(i, wszDeviceName);
			strCurrDeviceName = wszDeviceName;
			strCurrDeviceName = strCurrDeviceName.Mid(strCurrDeviceName.Find(':') + 1);
			if (strCurrDeviceName == strLastDeviceName)
			{
				GetPrivateProfileString(_T("AverSetting"), _T("DeviceType"), _T(""), szValue, 10, szFileName);
				DWORD dwDeviceType = _tstoi(szValue);
				//				OnSelectCaptureDevice(ID_APP_DEVICE1_SD+ i*2+dwDeviceType-1);

				GetPrivateProfileString(_T("VideoSource"), _T("VideoSource"), _T(""), szValue, 10, szFileName);
				DWORD dwVideoSource = _tstoi(szValue);
				AVerSetVideoSource(m_hCaptureDevice, dwVideoSource);

				GetPrivateProfileString(_T("AudioSource"), _T("AudioSource"), _T(""), szValue, 10, szFileName);
				DWORD dwAudioSource = _tstoi(szValue);
				AVerSetAudioSource(m_hCaptureDevice, dwAudioSource);

				GetPrivateProfileString(_T("VideoFormat"), _T("VideoFormat"), _T(""), szValue, 10, szFileName);
				DWORD dwVideoFormat = _tstoi(szValue);
				AVerSetVideoFormat(m_hCaptureDevice, dwVideoFormat);

				GetPrivateProfileString(_T("VideoFrameRate"), _T("VideoFrameRate"), _T(""), szValue, 10, szFileName);
				DWORD dwVideoFrameRate = _tstoi(szValue);
				AVerSetVideoInputFrameRate(m_hCaptureDevice, dwVideoFrameRate);

				VIDEO_RESOLUTION VideoResolution = { 0 };
				VideoResolution.dwVersion = 1;
				GetPrivateProfileString(_T("VideoResolution"), _T("Resolution"), _T(""), szValue, 10, szFileName);
				VideoResolution.dwVideoResolution = _tstoi(szValue);
				GetPrivateProfileString(_T("VideoResolution"), _T("ResolutionWidth"), _T(""), szValue, 10, szFileName);
				VideoResolution.dwWidth = _tstoi(szValue);
				GetPrivateProfileString(_T("VideoResolution"), _T("ResolutionHeight"), _T(""), szValue, 10, szFileName);
				VideoResolution.dwHeight = _tstoi(szValue);
				GetPrivateProfileString(_T("VideoResolution"), _T("IsCustom"), _T(""), szValue, 10, szFileName);
				if (_tcscmp(szValue, _T("NO")) == 0)
				{
					VideoResolution.bCustom = FALSE;
				}
				else
				{
					VideoResolution.bCustom = TRUE;
				}
				AVerSetVideoResolutionEx(m_hCaptureDevice, &VideoResolution);
			}
		}


	}

	CAPTURE_SINGLE_IMAGE_INFO Test = { 0 };
	HRESULT hr = AVerCaptureSingleImage(m_hCaptureDevice, &Test);
	if (hr == CAP_EC_NOT_SUPPORTED)
	{

	}


	return res;
}


LONG CAverCapture::StartStreaming()
{
	if (m_hCaptureDevice == NULL)
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

	m_bIsStartStreaming = TRUE;


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
static long _OnImageCaptureLoadDataFnc(CWnd* pWnd) {
	return ((CPACSImageCapture*)pWnd)->OnImageCaptureLoadData();
}
static void _OnImageCaptureDblClickFnc(CWnd* pWnd) {
	((CPACSImageCapture*)pWnd)->OnImageCaptureDblClick();
}
static void _OnImageCaptureSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CPACSImageCapture*)pWnd)->OnImageCaptureSelectChange(nOldItem, nNewItem);
}
static int _OnImageCaptureDeleteItemFnc(CWnd* pWnd) {
	return ((CPACSImageCapture*)pWnd)->OnImageCaptureDeleteItem();
}
static void _OnImageSelectChangeFnc(CWnd* pWnd, int nOld, int nNew) {
	((CPACSImageCapture*)pWnd)->OnImageSelectChange(nOld, nNew);
}
static void _OnEditSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnEditSelect();
}
static void _OnDeleteSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnDeleteSelect();
}
static void _OnMarkAllSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnMarkAllSelect();
}
static void _OnCaptureSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnCaptureSelect();
}

static void _OnBackSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnBackSelect();
}

static void _OnRestartSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->RestartCapture();
}

static void _OnStopSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->StopCapture();
}

static void _OnSaveSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnSaveSelect();
}

static void _OnSetupVideoSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnSetupVideo();
}

static int _OnAddPACSImageCaptureFnc(CWnd* pWnd) {
	return ((CPACSImageCapture*)pWnd)->OnAddPACSImageCapture();
}
static int _OnEditPACSImageCaptureFnc(CWnd* pWnd) {
	return ((CPACSImageCapture*)pWnd)->OnEditPACSImageCapture();
}
static int _OnDeletePACSImageCaptureFnc(CWnd* pWnd) {
	return ((CPACSImageCapture*)pWnd)->OnDeletePACSImageCapture();
}
static int _OnSavePACSImageCaptureFnc(CWnd* pWnd) {
	return ((CPACSImageCapture*)pWnd)->OnSavePACSImageCapture();
}
static int _OnCancelPACSImageCaptureFnc(CWnd* pWnd) {
	return ((CPACSImageCapture*)pWnd)->OnCancelPACSImageCapture();
}

static BOOL _OnAddImageFnc(CWnd* pWnd, CString szFileName) {
	return ((CPACSImageCapture*)pWnd->GetParent())->AddImage(szFileName);
}

static BOOL _OnRemoveImageFnc(CWnd* pWnd, CString szFileName) {
	return ((CPACSImageCapture*)pWnd->GetParent())->RemoveImage(szFileName);
}
static void _OnAddIMGSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnAddIMGSelect();
}

static void _OnImageFolderSelectFnc(CWnd* pWnd) {
	CPACSImageCapture* pVw = (CPACSImageCapture*)pWnd;
	pVw->OnImageFolderSelect();
}

CPACSImageCapture::CPACSImageCapture() {

	m_nDlgWidth = 1005;
	m_nDlgHeight = 705;
	
	m_bCaptured = false;
	m_nDeviceID = 0;
	m_bMarkAll = false;

	m_tracker.m_rect = CRect(0, 0, 0, 0);
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
	m_nDeviceType = CAP_OBS;
	m_nFrame = 0;
	m_nCaptureMode = 0;

}
CPACSImageCapture::~CPACSImageCapture() {

	if (m_pAverCapture)
	{
		m_pAverCapture->DestroyWindow();
		delete m_pAverCapture;
	}

}


BEGIN_MESSAGE_MAP(CPACSImageCapture, CGuiView)
	ON_WM_LBUTTONDOWN()
	//	ON_WM_PAINT()
	ON_WM_TIMER()
	ON_WM_SIZE()
END_MESSAGE_MAP()

#include "GuiManager.h"

void CPACSImageCapture::OnCreateComponents() {
	m_wndThumb.Create(this, 5, 5, 250, 620, WS_VISIBLE | WS_BORDER);
	m_wndVideo.Create(NULL, _T(""), WS_VISIBLE | WS_BORDER, CRect(260, 5, 990, 625), this, NULL);
	m_wndEdit.Create(this, _T("Edit"), 5, 630, 85, 655);
	m_wndDelete.Create(this, _T("Delete"), 90, 630, 170, 655);
	m_wndMarkAll.Create(this, _T("Select All"), 175, 630, 255, 655);
	m_wndCapture.Create(this, _T("Capture -F5"), 910, 630, 990, 655);
	m_wndSave.Create(this, _T("Save"), 260, 630, 340, 655);
	m_wndSetupVideo.Create(this, _T("Setup"), 360, 630, 440, 655);
	//m_wndSetupVideo.ModifyStyle(WS_TABSTOP, 0);
	
	m_wndAddIMG.Create(this, _T("Add Image"), 825, 630, 905, 655);
	m_wndAddIMG.ModifyStyle(WS_TABSTOP, 0);
	m_wndImageFolder.Create(this, _T("Thư mục ảnh"), 445, 630, 520, 655);
	m_wndImageFolder.ModifyStyle(WS_TABSTOP, 0);
	m_wndStop.Create(this, _T("Stop"), 615, 630, 715, 655);
	m_wndStart.Create(this, _T("Restart"), 720, 630, 820, 655);
	m_wndStart.ModifyStyle(WS_TABSTOP, 0);
	m_wndStop.ModifyStyle(WS_TABSTOP, 0);

}
void CPACSImageCapture::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	
	SetDefaultValues();

	m_szImagePath = AfxGetApp()->GetProfileString(_T("AVERCAPTURE"), _T("PATH"), _T(""));
	m_szCurrentDirectory = pMF->GetCurrentDirectory();
	//m_szImagePath.Format(_T("%s\\PACS\\Images"), m_szCurrentDirectory);
	
	//m_wndVideo.ShowWindow(TRUE);

	/*
	if (pMF->m_bIsAddPictureToFile)
	{

	}
	else
	{
		m_wndImage.ShowWindow(false);
	}
	*/

}
void CPACSImageCapture::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();



	///m_wndImage.SetAddImageFnc(_OnAddImageFnc);
	//m_wndImage.SetRemoveImageFnc(_OnRemoveImageFnc);

	//	m_wndImage.SetEvent(WE_SELCHANGE, _OnImageSelectChangeFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
	m_wndBack.SetEvent(WE_CLICK, _OnBackSelectFnc);
	m_wndStart.SetEvent(WE_CLICK, _OnRestartSelectFnc);
	m_wndStop.SetEvent(WE_CLICK, _OnStopSelectFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);

	m_wndSetupVideo.SetEvent(WE_CLICK, _OnSetupVideoSelectFnc);
	m_wndAddIMG.SetEvent(WE_CLICK, _OnAddIMGSelectFnc);
	m_wndImageFolder.SetEvent(WE_CLICK, _OnImageFolderSelectFnc);

	//SetFocus();

	SetMode(VM_ADD);
	int nVideoMode, nDeviceID = 0;
	nVideoMode = AfxGetApp()->GetProfileInt(_T("Settings"), _T("VideoMode"), 0);
	nDeviceID = AfxGetApp()->GetProfileInt(_T("Settings"), _T("DeviceID"), 0);
	m_nCaptureMode = AfxGetApp()->GetProfileInt(_T("Settings"), _T("CaptureMode"), 0);

	//_tprintf(_T("\r\nVideoMode: = %d"), nVideoMode);

	m_nDeviceID = nDeviceID;
	
	//m_wndVideo.InitializeVideo(GetSafeHwnd(), nCaptureMode);

	//StartCapture();
	if(nVideoMode == 4)
	{
		m_bIsAverCapture = true;
		CreateAverCapture();

	}


}
void CPACSImageCapture::OnDoDataExchange(CDataExchange* pDX) {

}
void CPACSImageCapture::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSImageCapture::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CPACSImageCapture::SetDefaultValues() {
	m_nOrderID = 0;

}
int CPACSImageCapture::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
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
		EnableButtons(TRUE, 0, 3, 6, -1);
		SetDefaultValues();
		break;
	};
	m_wndSetupVideo.EnableWindow(TRUE);
	UpdateData(FALSE);
	return nOldMode;
}
void CPACSImageCapture::OnImageCaptureDblClick() {

}
void CPACSImageCapture::OnImageCaptureSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
int CPACSImageCapture::OnImageCaptureDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
long CPACSImageCapture::OnImageCaptureLoadData() {
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
void CPACSImageCapture::OnLoadThumb() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CFileFind finder;
	CString szPath, szFileName;
	m_wndThumb.LoadThumb();
}
void CPACSImageCapture::OnImageSelectChange(int nOld, int nNew) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CPACSImageCapture::OnEditSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndThumb.EditImage();
}
void CPACSImageCapture::OnDeleteSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	int nCount = 0;

	m_wndThumb.m_bDelete = false;

	for (int i = 0; i < m_wndThumb.GetCount(); i++) {
		if (m_wndThumb.GetCheck(i))
			nCount++;
	}

	if (nCount > 1)
	{
		int retMsg = ShowMessageBox(_T("\x42\x1EA1n mu\x1ED1n \x78\xF3\x61 \x63\xE1\x63 \x1EA3nh \x111\xE3 \x111\x1B0\x1EE3\x63 \x63h\x1ECDn kh\xF4ng (Y/N)?"), MB_YESNO | MB_DEFBUTTON2);
		if (retMsg != IDYES)
			return;

		m_wndThumb.DeleteAllMarked();
	}
	else
	{
		int nSel = m_wndThumb.GetCurSel();
		m_wndThumb.Delete(nSel, false);
	}


}
void CPACSImageCapture::OnMarkAllSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString tmpStr;
	m_bMarkAll = !m_bMarkAll;
	if (m_bMarkAll)
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
void CPACSImageCapture::OnCaptureSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	int n = 0;
	CString szFileName, szName;

	_tprintf(_T("\r\n%s"), m_szItemID);


	if (m_nOrderID <= 0 || m_szItemID.IsEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân và dịch vụ thực hiện"));
		return;
	}

	m_bMarkAll = true;
	OnMarkAllSelect();
	
	if(m_bIsAverCapture)
	{
		if(m_pAverCapture)
		{
			int nFrame = m_wndThumb.GetMaxFrame()+1;
			CString szFilePath, szFile;
			szFilePath.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"), 
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
			CString szAverName = pMF->m_szAverCaptureName;
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

	if (m_bStop || !m_wndVideo.IsOpenning())
	{
		StartCapture();
		m_bStop = false;
	}

	//m_nFrame = m_wndThumb.GetCount();
	//_msg(_T("%ld"), m_nOrderID);
	if (m_bCaptured && m_nOrderID > 0 && !m_szItemID.IsEmpty()  && m_nDocumentNo > 0)
	{
		//if(m_nFrame <= 0) m_nFrame =1;

		m_wndVideo.GrabOneFrame(true, ++m_nFrame);
		printf("\r\nFrame=%d", m_nFrame);
		szFileName = m_wndVideo.GetFileName();
		szName.Format(_T("image%.4d.jpg"), m_nFrame);
		m_wndThumb.Add(m_nFrame, _T(""), szName);
		Sleep(100);
		m_wndThumb.SaveProperties();
		Sleep(500);
		m_wndThumb.LoadThumb();
	}
	else
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân và dịch vụ thực hiện"));
	}

	m_wndSave.EnableWindow(TRUE);
}

void CPACSImageCapture::OnAddIMGSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szFileName, szName, szYear, szDate, szComment, tmpStr;
	
	CString strFilter = _T("Image Files (*.jpg;*.png;*.bmp)|*.jpg;*.png;*.bmp||");
	CFileDialog FileDlg(TRUE, NULL, NULL, OFN_ALLOWMULTISELECT | OFN_FILEMUSTEXIST, strFilter);
	if (FileDlg.DoModal() == IDOK)
	{
		POSITION pos = FileDlg.GetStartPosition();
		while (pos != NULL)
		{
			CString szFileName = FileDlg.GetNextPathName(pos);
			AddImage(szFileName);
		}
	}

	return;
}


void CPACSImageCapture::OnSaveSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
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

	m_nDocumentNo = pMF->m_wndPatientProfile.m_nDocumentNo;
	m_szPatientName = pMF->m_wndPatientProfile.m_szPatientName;
	if (m_nDocumentNo <= 0 || m_szPatientName.IsEmpty())
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn \x62\x1EC7nh nh\xE2n th\x1EF1\x63 hi\x1EC7n"));
		return;
	}


	for (int i = 0; i < m_wndThumb.GetImageCount(); i++)
	{
		if (m_wndThumb.GetCheck(i))
			nFound = true;

	}
	if (!nFound)
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

	if (pMF->m_szClientAETitle.CompareNoCase(_T("auto")) == 0)
	{
		szClientAETitle.Format(_T("%s"), pMF->GetLocalIP());
	}
	else
		szClientAETitle = pMF->m_szClientAETitle;

	_tprintf(_T("\r\nclient aet=%s"), szClientAETitle);

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
	m_szPatientName = pMF->m_wndPatientProfile.m_szPatientName;
	UnMarkString(m_szPatientName, szPName);
	dcm.m_szPatientName = szPName;
	dcm.m_szStudyDate = pMF->GetSysDate();
	dcm.m_szStudyTime = pMF->GetSysTime();
	dcm.m_szPatientSex = m_szSex;
	dcm.m_szPatientBirthDate = m_szBirthDate;
	dcm.m_szOtherPatientIDs.Format(_T("%.10ld%s"), m_nOrderID, m_szItemID);

	CString szGroup = pMF->m_wndPatientProfile.m_szGroup.Left(3);

	CString szModality;
	if (szGroup == _T("B21"))
	{
		szModality = _T("CR");
	}
	else if (szGroup == _T("B22"))
	{
		szModality = _T("CT");
	}
	else if (szGroup == _T("B23"))
	{
		szModality = _T("MR");
	}
	else if (szGroup == _T("B24") || szGroup == _T("B31"))
	{
		szModality = _T("ES");
	}
	else if (szGroup == _T("B32"))
	{
		szModality = _T("US");
	}
	else if (szGroup == _T("B1"))
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
	for (int i = 0; i < m_wndThumb.GetImageCount(); i++)
	{
		if (m_wndThumb.GetCheck(i))
			nFound = true;

		if (!m_wndThumb.GetCheck(i))
		{
			//	m_wndThumb.Delete(i, true);
			continue;
		}

		//HBITMAP hbmp = m_wndThumb.GetHBITMAP(i);
		//Bitmap* bmp = Bitmap::FromHBITMAP(hbmp, 0);
		szComment = m_wndThumb.GetString(i);
		if (szComment.IsEmpty())
			szComment = _T(" ");

		if (!szDesc.IsEmpty())
			szDesc.AppendFormat(_T("\r\n"));
		szDesc.AppendFormat(_T("%s"), szComment);
		Bitmap* bmp = m_wndThumb.GetBitmap(i);
		if(bmp != NULL)
		{
			dcm.AddBitmap(bmp);
		}
	}

	if (nFound)
	{
		m_wndThumb.SaveProperties();

		dcm.m_szStudyDescription = szDesc;
		//_tprintf(_T("\r\nBefore File:%s"), szFile);
		if (dcm.SaveAsDicomFile(szFile))
		{
			_tprintf(_T("\r\nFile:%s"), szFile);
			szOpt.Format(_T(" \"%s\" "), szFile);
			if (dcm.storescu(szOpt) == 0) {
				CString szNewFile;
				szNewFile.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"), pMF->GetCurrentDirectory(), m_nDocumentNo, m_nOrderID, dcm.m_szSOPInstanceUID);
				_tprintf(_T("\r\nNewFile:%s"), szNewFile);
				::DeleteFile(szNewFile);
				CFile::Rename(szFile, szNewFile);


				szSQL.Format(_T("HMS_PACS_STORE_FILE(%ld, %ld, '%s', '%s','Y') "), m_nDocumentNo, m_nOrderID, m_szItemID, dcm.m_szSOPInstanceUID);
				pMF->ExecDML(szSQL);
				pMF->m_bDicomMode = true;
				m_nCount = 0;
				pMF->SetActivePane(1);
				//ShowMessageBox(_T("Upload completed."));
				pMF->SetStatusText(_T("Upload completed."));
			}
			else
			{
				CString szNewFile;
				szNewFile.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"), pMF->GetCurrentDirectory(), m_nDocumentNo, m_nOrderID, dcm.m_szSOPInstanceUID);
				_tprintf(_T("\r\nNewFile:%s"), szNewFile);
				::DeleteFile(szNewFile);
				CFile::Rename(szFile, szNewFile);

				szSQL.Format(_T("HMS_PACS_STORE_FILE(%ld, %ld, '%s', '%s','N') "), m_nDocumentNo, m_nOrderID, m_szItemID, dcm.m_szSOPInstanceUID);
				pMF->ExecDML(szSQL);
				if (!pMF->m_bDicomMode && m_nCount < 3)
					ShowMessageBox(_T("\x43\xF3 l\x1ED7i \x78\x1EA3y r\x61 khi t\x1EA3i \x1EA3nh l\xEAn m\xE1y \x63h\x1EE7."));
				else
					pMF->SetStatusText(_T("\x43\xF3 l\x1ED7i \x78\x1EA3y r\x61 khi t\x1EA3i \x1EA3nh l\xEAn m\xE1y \x63h\x1EE7."));

				pMF->SetActivePane(1);
				pMF->m_bDicomMode = false;
				m_nCount++;
			}
		}
		else
		{
			ShowMessageBox(_T("\x43\xF3 l\x1ED7i \x78\x1EA3y r\x61 khi t\x1EA3i \x1EA3nh l\xEAn m\xE1y \x63h\x1EE7."));
		}
	}	

}


void CPACSImageCapture::UploadQueue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
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

	if (pMF->m_szClientAETitle.CompareNoCase(_T("auto")) == 0)
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
	while (!rs.IsEOF())
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
		dcm.m_szPatientSex = szSex;
		dcm.m_szPatientBirthDate = szBirthDate;
		dcm.m_szOtherPatientIDs.Format(_T("%.10ld%s"), nOrderID, szItemID);


		CString szModality;
		if (szGroup == _T("B21"))
		{
			szModality = _T("CR");
		}
		else if (szGroup == _T("B22"))
		{
			szModality = _T("CT");
		}
		else if (szGroup == _T("B23"))
		{
			szModality = _T("MR");
		}
		else if (szGroup == _T("B24") || szGroup == _T("B31"))
		{
			szModality = _T("ES");
		}
		else if (szGroup == _T("B32"))
		{
			szModality = _T("US");
		}
		else if (szGroup == _T("B1"))
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
		if (dcm.storescu(szOpt) == 0) {
			CString szNewFile;
			szNewFile.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"), pMF->GetCurrentDirectory(), nDocumentNo, nOrderID, dcm.m_szSOPInstanceUID);
			::DeleteFile(szNewFile);
			CFile::Rename(szFile, szNewFile);
			szSQL.Format(_T("UPDATE hms_pacs_file SET hpl_uploaded='Y', hpl_filename='%s' WHERE hpl_docno=%ld and hpl_orderid=%ld and hpl_itemid='%s'  "), dcm.m_szSOPInstanceUID, nDocumentNo, nOrderID, szItemID);
			pMF->ExecSQL(szSQL);
		}
		rs.MoveNext();
	}
}



BOOL CPACSImageCapture::AddImage(CString szFileName)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szFileNameAdd;

	if (pMF->m_szID.IsEmpty())
		return FALSE;

	m_nFrame++;
	szFileNameAdd.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s\\image%.4d.jpg"),
		pMF->GetCurrentDirectory(),
		m_nDocumentNo,
		m_nOrderID,
		m_szItemID,
		m_nFrame);


	CopyFile(szFileName, szFileNameAdd, FALSE);

	if (!szFileNameAdd.IsEmpty())
	{
		//m_wndImage.SetFileName(szFileNameAdd);
		//m_wndImage.Invalidate();
		CString szName;
		szName.Format(_T("image%.4d.jpg"), m_nFrame);
		m_wndThumb.Add(m_nFrame, _T(""), szName);
		Sleep(100);
		m_wndThumb.SaveProperties();
		Sleep(500);

		OnLoadThumb();
	}


	return FALSE;
}
BOOL CPACSImageCapture::RemoveImage(CString szFileName)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->m_szID.IsEmpty())
		return FALSE;

	pMF->m_szFileName.Format(_T("%s"), pMF->m_szID);
	pMF->UnlinkFile(pMF->m_szFileName);
	return TRUE;
}

BOOL CPACSImageCapture::DownloadImage()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->m_szID.IsEmpty())
		return FALSE;
	BeginWaitCursor();
	CString szFileName;
	pMF->m_szFileName.Format(_T("%s.jpg"), pMF->m_szID);
	szFileName.Format(_T("%s\\Images\\%s"), pMF->GetCurrentDirectory(), pMF->m_szFileName);

	//m_wndImage.Release();

	SetFileAttributes(szFileName, FILE_ATTRIBUTE_NORMAL);
	::DeleteFile(szFileName);
	if (pMF->DownloadFile(pMF->m_szFileName, szFileName))
	{
		//m_wndImage.SetFileName(szFileName, true);
		return TRUE;
	}
	//else
	//	m_wndImage.SetFileName(_T(""));

	EndWaitCursor();
	return FALSE;
}
int CPACSImageCapture::OnAddPACSImageCapture() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CPACSImageCapture::OnEditPACSImageCapture() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CPACSImageCapture::OnDeletePACSImageCapture() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelPACSImageCapture();
	}
	return 0;
}
int CPACSImageCapture::OnSavePACSImageCapture() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		//szSQL = m_tblTbl.GetInsertSQL(); 
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE"));
		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
		szSQL += szWhere;
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
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
int CPACSImageCapture::OnCancelPACSImageCapture() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
int CPACSImageCapture::OnPACSImageCaptureListLoadData() {
	return 0;
}

void CPACSImageCapture::StartCapture() {
	//if capture frame	
	AfxGetApp()->BeginWaitCursor();
	if (!m_bCaptured)
	{

		if (m_bIsAverCapture)
		{
			if (m_pAverCapture)
			{
				m_pAverCapture->StopStreaming();
				m_pAverCapture->StartStreaming();
			}
		}
		else
		{
			m_wndVideo.StopCaptureVideo();

			_tprintf(_T("\r\nOpen Device: %d"), m_nDeviceID);

			HRESULT hr = m_wndVideo.OpenDevice(m_nDeviceID);
			if (FAILED(hr))
			{
				_tprintf(_T("\r\nCannot open device %d"), hr);
				return;
			}


			int nVideoMode;
			nVideoMode = AfxGetApp()->GetProfileInt(_T("Settings"), _T("VideoMode"), 0);
			switch (nVideoMode)
			{
			case 0:// S-Video
				m_wndVideo.StartSVideo();
				break;
			case 1:// Composite Video
				m_wndVideo.StartCompositeVideo();
				break;
			case 2:// TV Tuner
				m_wndVideo.StartTVTuner();
				break;
			case 3:// Webcam 
				m_wndVideo.StartWebcam();
				break;
			}

			

			m_wndVideo.ReleaseFrames();
		}
		m_bCaptured = true;
		m_wndCapture.SetFocus();
		//m_wndImage.SetFocus();
	}
	AfxGetApp()->EndWaitCursor();
}


BOOL CPACSImageCapture::PreTranslateMessage(MSG* pMsg)
{

	if (pMsg->message == WM_KEYDOWN)
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
		}
		else
		{
			m_tracker.m_rect = CRect(0, 0, 0, 0);
		}
	}
	else
	{
		if (m_tracker.Track(this, point, true)) {
			m_tracker.m_rect.NormalizeRect();
		}
		else {
			m_tracker.m_rect = CRect(0, 0, 0, 0);
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
	HGDIOBJ oldGdi = NULL;
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
	if (nIDEvent == 1000)
	{
		//SyncImages();
		if (!m_wndVideo.IsOpenning())
		{
			//m_wndVideo.RestartCaptureVideo(m_nDeviceID);
		}

	}
	CGuiView::OnTimer(nIDEvent);
}

void CPACSImageCapture::StopCapture() {
	if (!m_bStop)
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
void CPACSImageCapture::SetReference(LPCTSTR lpszDir, long nDocumentNo, long nOrderID, CString szItemID) {
	CString szPath;
	m_nDocumentNo = nDocumentNo;
	m_nOrderID = nOrderID;
	m_szItemID = szItemID;


	szPath.Format(_T("%s\\DATA\\PACS\\%ld\\%ld\\%s"), lpszDir, nDocumentNo, nOrderID, szItemID);
	m_szImageCapturePath = szPath;
	m_wndThumb.SetPath(szPath);

	_tprintf(L"\r\nSET REFERENCE: %s: %ld", szPath, m_nOrderID);

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



void CPACSImageCapture::OnSetupVideo() {

	CVIMESCaptureVideo video;
	video.EnumDevices(m_devides);
	
	int nVideoMode = AfxGetApp()->GetProfileInt(_T("Settings"), _T("VideoMode"), 0);
	int nCaptureMode = AfxGetApp()->GetProfileInt(_T("Settings"), _T("CaptureMode"), 0);

	CCaptureDeviceSetting dlg(this);
	dlg.m_devices.Copy(m_devides);
	dlg.m_szSourceKey.Format(_T("%d"), m_nDeviceID);
	dlg.m_szProtocolKey.Format(_T("%d"), nVideoMode);
	dlg.m_szCaptureEventKey.Format(_T("%d"), nCaptureMode);

	if (dlg.DoModal() == IDOK)
	{
		m_nDeviceID = str2int(dlg.m_szSourceKey);
		AfxGetApp()->WriteProfileInt(_T("Settings"), _T("VideoMode"), str2int(dlg.m_szProtocolKey));
		AfxGetApp()->WriteProfileInt(_T("Settings"), _T("DeviceID"), str2int(dlg.m_szSourceKey));
		AfxGetApp()->WriteProfileInt(_T("Settings"), _T("CaptureMode"), str2int(dlg.m_szCaptureEventKey));
		m_bCaptured = false;
		m_wndVideo.InitializeVideo(GetSafeHwnd(), str2int(dlg.m_szCaptureEventKey));
		m_nCaptureMode = str2int(dlg.m_szCaptureEventKey);

		StartCapture();
	}

}


void CPACSImageCapture::OnBack() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	pMF->SetActivePane(1);
	if (pMF->m_wndPatientProfile.m_wndResult && pMF->m_wndPatientProfile.m_wndResult->GetSafeHwnd())
	{
		pMF->m_wndPatientProfile.m_wndResult->SetFocus();
	}
	/*
	if (&pMF->m_wndOperationResult == m_pWndFocus)
	{
		pMF->SetActivePane(3);
		pMF->m_wndOperationResult.SetFocus();
	}
	*/
}


void CPACSImageCapture::CreateAverCapture()
{
	if (m_bIsAverCapture)
	{
		CRect rect;
		m_wndVideo.GetWindowRect(&rect);
		ScreenToClient(&rect);
		m_wndVideo.StopCaptureVideo();
		m_wndVideo.ShowWindow(SW_HIDE);
		CFile file;
		BOOL res = file.Open(_T("./avercapture.ini"), CFile::modeRead);
		file.Close();
		if (res)
		{
			if (m_pAverCapture == NULL)
			{
				m_pAverCapture = new CAverCapture();
				m_pAverCapture->Create(NULL, _T(""), WS_CHILD | WS_VISIBLE, rect, this, GetDlgCtrlID() + 1);
				_tprintf(_T("\r\nCreateAverCapture"));
			}
		}
	}
	else
	{
		if (m_pAverCapture)
		{
			m_pAverCapture->StopStreaming();
			m_pAverCapture->DestroyWindow();
			delete m_pAverCapture;
			m_pAverCapture = NULL;
		}

		m_wndVideo.ReleaseFrames();
		m_wndVideo.ShowWindow(SW_SHOW);

	}

	if (m_bIsAverCapture)
	{
		if (m_pAverCapture)
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
	szImageBackupPath.Format(_T("%s\\backup\\%ld"), m_szImagePath, m_nDocumentNo);
	CreateFolder(szImageBackupPath);
	szFileName.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s"),
		m_szCurrentDirectory,
		m_nDocumentNo,
		m_nOrderID,
		m_szItemID);
	CreateFolder(szFileName);
	bool bRefresh = false;
	_tprintf(_T("\r\n%s"), szImageBackupPath);
	_tprintf(_T("\r\n%s"), szFileName);
	while (bWorking)
	{
		bWorking = finder.FindNextFile();

		szFileName.Format(_T("%s\\Data\\PACS\\%ld\\%ld\\%s\\image%.4d.jpg"),
			m_szCurrentDirectory,
			m_nDocumentNo,
			m_nOrderID,
			m_szItemID,
			m_wndThumb.GetMaxFrame() + 1);

		_tprintf(_T("\r\n%s:%s"), finder.GetFilePath(), szFileName);
		::CopyFile(finder.GetFilePath(), szImageBackupPath, FALSE);
		::MoveFile(finder.GetFilePath(), szFileName);
		bRefresh = true;


	}
	if (bRefresh)
	{
		OnLoadThumb();
	}


}


void CPACSImageCapture::OnBackSelect() {
	OnBack();
}


void CPACSImageCapture::RestartCapture() {
	m_bCaptured = false;
	m_wndVideo.InitializeVideo(GetSafeHwnd(), m_nCaptureMode);

	StartCapture();
}



void CPACSImageCapture::Capture_OBS()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (m_nDeviceType != CAP_OBS)
		return;


	m_wndSave.EnableWindow(TRUE);
	/*
			if (hWndCapture)
			{
				::SetWindowPos(hWndCapture, NULL, -1, -1, -1, -1, SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
				::SetForegroundWindow(hWndCapture);
			}
	*/
	CString szBackupDir;
	szBackupDir.Format(_T("%s\\Backup"), m_szImagePath);
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

void CPACSImageCapture::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);
	CRect rect, rc;
	GetClientRect(&rect);
	rc = rect;
	rc.right = rc.left + 320;
	//if(m_wndThumb.GetSafeHwnd())
		//m_wndThumb.MoveWindow(rc);
	rc = rect;
	rc.left += 320;
	//if(m_wndVideo.GetSafeHwnd())
	//	m_wndVideo.MoveWindow(rect);
	//if (m_wndImage.GetSafeHwnd())
	{
		//m_wndImage.MoveWindow(rect);
	}
	// TODO: Add your message handler code here
}


void CPACSImageCapture::OnImageFolderSelect() {

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	::ShellExecute(NULL, _T("open"), _T(""), _T(""), m_szImageCapturePath, SW_SHOW);
}

BOOL CPACSImageCapture::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if (wParam == START_FRAME_CAPTURE)
	{
		OnCaptureSelect();
		return TRUE;
	}
	return CGuiView::OnCommand(wParam, lParam);
}

void CPACSImageCapture::OnResizeLayout()
{
	AddResize(&m_wndThumb, 100, 100);
	AddResize(&m_wndVideo, 100, 100);
	AddBottom(&m_wndEdit, 10, true);
	AddBottom(&m_wndDelete, 10, true);
	AddBottom(&m_wndMarkAll, 70, true);

	AddBottom(&m_wndCapture, 5, true);
	AddBottom(&m_wndSave, 5, true);
	
	
	AddBottom(&m_wndSetupVideo);
	AddBottom(&m_wndStop);
	AddBottom(&m_wndStart);
	AddBottom(&m_wndImageFolder);
	AddBottom(&m_wndAddIMG);
	
}
