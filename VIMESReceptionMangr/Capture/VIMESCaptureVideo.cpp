#include "stdafx.h"
#include "../MainFrm.h"
#include "VIMESCaptureVideo.h"
#include <afxtempl.h>
#include <vfw.h>
#include <gdiplus.h>
#include <strsafe.h>
using namespace Gdiplus;



#define WM_GRAPHNOTIFY  WM_USER+1
int		CaptureState	= 0;
int		FrameCount = 0;

class ISampleGrabberCB {
public:
	ISampleGrabberCB() {}
	~ISampleGrabberCB() {}
};

void ErrorExit(LPTSTR lpszFunction) 
{ 
    // Retrieve the system error message for the last-error code

    LPVOID lpMsgBuf;
    LPVOID lpDisplayBuf;
    DWORD dw = GetLastError(); 

    FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | 
        FORMAT_MESSAGE_FROM_SYSTEM |
        FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL,
        dw,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPTSTR) &lpMsgBuf,
        0, NULL );

    // Display the error message and exit the process

    lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT, 
        (lstrlen((LPCTSTR)lpMsgBuf) + lstrlen((LPCTSTR)lpszFunction) + 40) * sizeof(TCHAR)); 
    StringCchPrintf((LPTSTR)lpDisplayBuf, 
        LocalSize(lpDisplayBuf) / sizeof(TCHAR),
        TEXT("%s failed with error %d: %s"), 
        lpszFunction, dw, lpMsgBuf); 
    MessageBox(NULL, (LPCTSTR)lpDisplayBuf, TEXT("Error"), MB_OK); 

    LocalFree(lpMsgBuf);
    LocalFree(lpDisplayBuf);
    //ExitProcess(dw); 
}

class CSampleGrabberCB : public ISampleGrabberCB 
{
private:
//   CVIMESCaptureVideo cap;
public:
	friend class CVIMESCaptureVideo;
//	CVIMESCaptureVideo cap;
	long lWidth;
	long lHeight;
	long lImgWidth;
	long lImgNewWidth;
	CRect m_rcCrop;
	CVIMESCaptureVideo*	m_pVideo;

	HBITMAP	hBmp;
	CString	m_szFileName;

	CSampleGrabberCB(CVIMESCaptureVideo* pVideo )
	{
		m_pVideo = pVideo;
		m_szFileName = _T("tmp.jpg");
		 hBmp = NULL;
	} 
	void SetFileName(LPCTSTR lpszFileName){
		m_szFileName = lpszFileName;
	}


	STDMETHODIMP_(ULONG) AddRef() { return 2; }
	STDMETHODIMP_(ULONG) Release() { return 1; }
	STDMETHODIMP QueryInterface(REFIID riid, void ** ppv)
	{
		if( riid == IID_ISampleGrabberCB || riid == IID_IUnknown )
		{ 
			*ppv = (void *) static_cast<ISampleGrabberCB*> ( this );
			return NOERROR;
		} 
		return E_NOINTERFACE;
	}
	STDMETHODIMP SampleCB( double SampleTime, IMediaSample * pSample )
	{
		
		return 0;
	}
	STDMETHODIMP BufferCB( double dblSampleTime, BYTE * pBuffer, long lBufferSize )
	{
		//printf("\nBufferCB\n");
		if (!pBuffer)return E_POINTER;
//		CreateHBitmap(pBuffer, lBufferSize);


		if(CaptureState == START_FRAME_CAPTURE)
		{
			//printf("\nFRAME_CAPTURE\n");
			SaveHBitmap(pBuffer, lBufferSize);

			CaptureState = STOP_CAPTURE;
		}
		if(CaptureState == START_VIDEO_CAPTURE){
			SaveHBitmap(pBuffer, lBufferSize);
			FrameCount++;
		}
		return 0;
	}
	BOOL SaveBitmap(BYTE * pBuffer, long lBufferSize )
	{
//		char *filename=(LPSTR)(LPCTSTR)pMyDlg->m_editPath;
//		strcpy(m_szFileName,filename);
		HANDLE hf = CreateFile(
		m_szFileName, GENERIC_WRITE, FILE_SHARE_READ, NULL,
		CREATE_ALWAYS, NULL, NULL );
		if( hf == INVALID_HANDLE_VALUE )return 0;
		BITMAPFILEHEADER bfh;
		memset( &bfh, 0, sizeof( bfh ) );
		bfh.bfType ='MB';
		bfh.bfSize = sizeof( bfh ) + lBufferSize + sizeof( BITMAPINFOHEADER );
		bfh.bfOffBits = sizeof( BITMAPINFOHEADER ) + sizeof( BITMAPFILEHEADER );
		DWORD dwWritten = 0;
		WriteFile( hf, &bfh, sizeof( bfh ), &dwWritten, NULL );
		BITMAPINFOHEADER bih;
		memset( &bih, 0, sizeof( bih ) );
		bih.biSize = sizeof( bih );
		bih.biWidth = lWidth;
		bih.biHeight = lHeight;
		bih.biPlanes = 1;
		bih.biBitCount = 24;
		WriteFile( hf, &bih, sizeof( bih ), &dwWritten, NULL );
		WriteFile( hf, pBuffer, lBufferSize, &dwWritten, NULL );
		HDC hDC = GetDC(NULL);

		void *bits;   
		BITMAPINFO *pbmi;   
					bits = new BYTE[sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD)*256];   
					pbmi = (BITMAPINFO *)bits;   
					BITMAPINFOHEADER *pbmih;   
					RGBQUAD *prgbq;   
					pbmih = (PBITMAPINFOHEADER)pbmi;   
				       
					prgbq = (RGBQUAD *)(pbmih + 1);   
					for (int j=0; j<256; j++, prgbq++)   
					{   
						prgbq->rgbBlue = j;    
						prgbq->rgbGreen = j;    
						prgbq->rgbRed = j;    
						prgbq->rgbReserved = 0;    
					}   
					
					pbmih->biSize = sizeof(BITMAPINFOHEADER);    
					pbmih->biWidth = lWidth;    
					pbmih->biHeight = lHeight;    
					pbmih->biPlanes = 1;    
					pbmih->biBitCount = 24;   
					pbmih->biCompression = BI_RGB;    
					pbmih->biSizeImage = 0;
					pbmih->biXPelsPerMeter = 0;    
					pbmih->biYPelsPerMeter = 0;    
					pbmih->biClrUsed = 0;    
					pbmih->biClrImportant = 0;    


		HBITMAP hBitmap = CreateDIBitmap(hDC, pbmih, CBM_INIT, pBuffer, pbmi, DIB_RGB_COLORS); 
		Bitmap bmp(hBitmap, 0);
		float scale = (float)lHeight/lWidth;
		

		Bitmap* newbmp = new Bitmap(m_rcCrop.Width(), m_rcCrop.Height());
		Graphics g(newbmp);
		g.DrawImage(&bmp, Rect(0, 0, m_rcCrop.Width(), m_rcCrop.Height()), m_rcCrop.left, m_rcCrop.top, m_rcCrop.Width(), m_rcCrop.Height(), UnitPixel, NULL);
		m_pVideo->m_GrabBuffers.Add(newbmp);
		ReleaseDC(NULL, hDC);
		delete bits;
		CloseHandle( hf );
		return 0;
	}


	BOOL SaveHBitmap(BYTE * pBuffer, long lBufferSize )
	{
		HDC hDC = GetDC(NULL);

		void *bits;   
		BITMAPINFO *pbmi;   
					bits = new BYTE[sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD)*256];   
					pbmi = (BITMAPINFO *)bits;   
					BITMAPINFOHEADER *pbmih;   
					RGBQUAD *prgbq;   
					pbmih = (PBITMAPINFOHEADER)pbmi;   
				       
					prgbq = (RGBQUAD *)(pbmih + 1);   
					for (int j=0; j<256; j++, prgbq++)   
					{   
						prgbq->rgbBlue = j;    
						prgbq->rgbGreen = j;    
						prgbq->rgbRed = j;    
						prgbq->rgbReserved = 0;    
					}   
					
					pbmih->biSize = sizeof(BITMAPINFOHEADER);    
					pbmih->biWidth = lWidth;    
					pbmih->biHeight = lHeight;    
					pbmih->biPlanes = 1;    
					pbmih->biBitCount = 24;   
					pbmih->biCompression = BI_RGB;    
					pbmih->biSizeImage = 0;
					pbmih->biXPelsPerMeter = 0;    
					pbmih->biYPelsPerMeter = 0;    
					pbmih->biClrUsed = 0;    
					pbmih->biClrImportant = 0;    


		HBITMAP hBitmap = CreateDIBitmap(hDC, pbmih, CBM_INIT, pBuffer, pbmi, DIB_RGB_COLORS); 
		Bitmap bmp(hBitmap, 0);
		float scale = (float)lHeight/lWidth;
		CRect rc = m_rcCrop;
		rc.NormalizeRect();
		Bitmap* newbmp = new Bitmap(rc.Width(), rc.Height());
		Graphics g(newbmp);
//		printf("\r\n%d: %d: %d: %d: %d", rc.left, rc.top, rc.Width(), rc.Height(), lImgWidth);		
		g.DrawImage(&bmp, Rect(0, 0, rc.Width(), rc.Height()), rc.left, rc.top, rc.Width(), rc.Height(), UnitPixel, NULL);

	//	m_pVideo->m_GrabBuffers.Add(newbmp);

		CLSID clsid;
		GetEncoderClsid(_T("image/jpeg"), &clsid);
		_tprintf(_T("\r\n%s"), m_szFileName);
		Status stat = newbmp->Save(m_szFileName, &clsid);
		if (stat == Ok)
		{
			printf("\nOk\n");
		}
		else
		{
			//ErrorExit(L"Save");
			printf("\nSomething wrong\n");

		}
		ReleaseDC(NULL, hDC);
		delete bits;
		return 0;
	}

	BOOL CreateHBitmap(BYTE * pBuffer, long lBufferSize )
	{
		HDC hDC = GetDC(NULL);

		void *bits;   
		BITMAPINFO *pbmi;   
					bits = new BYTE[sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD)*256];   
					pbmi = (BITMAPINFO *)bits;   
					BITMAPINFOHEADER *pbmih;   
					RGBQUAD *prgbq;   
					pbmih = (PBITMAPINFOHEADER)pbmi;   
				       
					prgbq = (RGBQUAD *)(pbmih + 1);   
					for (int j=0; j<256; j++, prgbq++)   
					{   
						prgbq->rgbBlue = j;    
						prgbq->rgbGreen = j;    
						prgbq->rgbRed = j;    
						prgbq->rgbReserved = 0;    
					}   
					
					pbmih->biSize = sizeof(BITMAPINFOHEADER);    
					pbmih->biWidth = lWidth;    
					pbmih->biHeight = lHeight;    
					pbmih->biPlanes = 1;    
					pbmih->biBitCount = 24;   
					pbmih->biCompression = BI_RGB;    
					pbmih->biSizeImage = 0;
					pbmih->biXPelsPerMeter = 0;    
					pbmih->biYPelsPerMeter = 0;    
					pbmih->biClrUsed = 0;    
					pbmih->biClrImportant = 0;    

		if(hBmp) 
		{
			::DeleteObject(hBmp);
			hBmp = NULL;
		}
		hBmp = CreateDIBitmap(hDC, pbmih, CBM_INIT, pBuffer, pbmi, DIB_RGB_COLORS); 
		ReleaseDC(NULL, hDC);
		delete bits;
		return 0;
	}
};

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
CVIMESCaptureVideo::CVIMESCaptureVideo()
{
	m_hWnd = NULL;
	m_pVW = NULL;
	m_pMC = NULL;
	m_pGB = NULL;
	m_pCapture = NULL; 
	m_pGrabber=NULL;
	pSink= NULL; 
	pCap= NULL;  
	pMux= NULL;
	pOverlay=NULL;
	pCompress= NULL;
	pCapOut=NULL;
	pOverIn=NULL;
	pOverOut=NULL;
	pGrabIn=NULL;

	m_bCaptured = false;
	m_bOpenning = false;
	m_vType = 1;
	m_pCaptureMoniker = NULL;
	m_pFilterGraph = NULL;



	m_tracker.m_rect = CRect(0,0, 0, 0);
	m_tracker.m_nStyle = 0;
	m_tracker.m_nStyle |= CRectTracker::dottedLine;
	m_tracker.m_nStyle |= CRectTracker::resizeOutside;
	m_tracker.m_nHandleSize = 10;
	m_bMouseDown = false;
	m_fZoom = 1;
	m_hBitmap = NULL;
	m_bStop  = false;
	ReleaseFrames();
	m_CB = new CSampleGrabberCB(this);
	m_nAnalogCount = 0;
	m_bVideo = false;
	m_hApp = NULL;

	/// For Webcam
	m_pVWMoniker = NULL;
	m_pMCMoniker = NULL;
	m_pMEMoniker = NULL;
	m_pCaptureMoniker = NULL; 
	m_pFilterGraph = NULL;

	m_pSrcF = NULL ;
	m_vType = 0;


}
CVIMESCaptureVideo::~CVIMESCaptureVideo()
{
	
}


/////////////////////////////////////////////////////////////////////////////
// CCaptureVideo message handlers
HRESULT CVIMESCaptureVideo::InitializeVideo(HWND hWnd)
{
	HRESULT hr = NULL ;
	if(hWnd) 
		m_hApp = hWnd ;
	else
		m_hApp = GetSafeHwnd();

	m_nVSourceCount =0;
	m_vType = 0;  
	
	//COM Library Intialization
	if(FAILED(CoInitialize(NULL)))	/*, COINIT_APARTMENTTHREADED)))*/
    {
        AfxMessageBox(_T("CoInitialize Failed!\r\n"));   
        return hr ;
    }
	
	return hr ;
}

void CVIMESCaptureVideo::UnIntializeVideo()
{
	if(m_vType == 1) // If WebCam
		CloseInterfacesMoniker();
	CloseInterfaces(); 
	CoUninitialize();
	m_bVideo = FALSE;
}



void CVIMESCaptureVideo::CloseInterfaces(){
	StopCaptureVideo();
	if(m_vType == 1) // If WebCam
		CloseInterfacesMoniker();
// Stop media playback
	if(m_pMC)m_pMC->StopWhenReady();
	if(m_pVW)
	{

		m_pVW->put_Visible(OAFALSE);
		m_pVW->put_Owner(NULL);
	}
	srelease(m_pCapture);
	if(m_pMC!=NULL)
	   m_pMC->Stop();

	srelease(m_pMC);
	srelease(m_pGB);
	srelease(pCap);
	srelease(m_pVW);
	srelease(m_pGrabber);
	srelease(pSink);
	srelease(pMux);
	srelease(pCompress);
	srelease(pOverlay);
	srelease(pCapOut);
	srelease(pOverIn);
	srelease(pOverOut);
	srelease(pGrabIn);


	CaptureState = STOP_CAPTURE;
	ReleaseFrames();
	

}

void CVIMESCaptureVideo::CloseInterfacesMoniker()
{
	// Stop previewing data
	if (m_pMC)
        m_pMC->StopWhenReady();

    // Stop receiving events
    if (m_pME)
        m_pME->SetNotifyWindow(NULL, WM_GRAPHNOTIFY, 0);

    if(m_pVW)
    {
        m_pVW->put_Visible(OAFALSE);
        m_pVW->put_Owner(NULL);
    }
	
	// Release DirectShow interfaces
    srelease(m_pMCMoniker);
    srelease(m_pMEMoniker);
    srelease(m_pVWMoniker);
    srelease(m_pCaptureMoniker);
    srelease(m_pFilterGraph);

}


int CVIMESCaptureVideo::EnumDevices(CStringArray& devices)
{
	int id = 0;
	ICreateDevEnum *pCreateDevEnum;
	HRESULT hr = CoCreateInstance(CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC_SERVER,IID_ICreateDevEnum, (void**)&pCreateDevEnum);
	if (hr != NOERROR)return -1;
	CComPtr<IEnumMoniker> pEm;
	hr = pCreateDevEnum->CreateClassEnumerator(CLSID_VideoInputDeviceCategory,&pEm, 0);
	if (hr != NOERROR)return -1;
	pEm->Reset();
	ULONG cFetched;
	IMoniker *pM;
	devices.RemoveAll();
	while(hr = pEm->Next(1, &pM, &cFetched), hr==S_OK)
	{
		IPropertyBag *pBag;
		hr = pM->BindToStorage(0, 0, IID_IPropertyBag, (void **)&pBag);
		if(SUCCEEDED(hr)) 
		{
			VARIANT var;
			var.vt = VT_BSTR;
			hr = pBag->Read(L"FriendlyName", &var, NULL);
			if (hr == NOERROR) 
			{
				id++;
				CString tmpStr;
				tmpStr.Format(_T("%s"), var.bstrVal);

				devices.Add(tmpStr);
				SysFreeString(var.bstrVal);
			}
			pBag->Release();
		}
		pM->Release();
	}
	return id;
}
int CVIMESCaptureVideo::EnumCompressDevices(CStringArray& devices)
{
	int id = 0;
	ICreateDevEnum *pCreateDevEnum;
	HRESULT hr = CoCreateInstance(CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC_SERVER,IID_ICreateDevEnum, (void**)&pCreateDevEnum);
	if (hr != NOERROR)return -1;
	CComPtr<IEnumMoniker> pEm;
	hr = pCreateDevEnum->CreateClassEnumerator(CLSID_VideoCompressorCategory,&pEm, 0);
	if (hr != NOERROR)return -1;
	pEm->Reset();
	ULONG cFetched;
	IMoniker *pM;
	devices.RemoveAll();
	while(hr = pEm->Next(1, &pM, &cFetched), hr==S_OK)
	{
		IPropertyBag *pBag;
		hr = pM->BindToStorage(0, 0, IID_IPropertyBag, (void **)&pBag);
		if(SUCCEEDED(hr)) 
		{
			VARIANT var;
			var.vt = VT_BSTR;
			hr = pBag->Read(L"FriendlyName", &var, NULL);
			if (hr == NOERROR) 
			{
				id++;
				CString tmpStr;
				tmpStr.Format(_T("%s"), var.bstrVal);

				devices.Add(tmpStr);
				SysFreeString(var.bstrVal);
			}
			pBag->Release();
		}
		pM->Release();
	}
	return id;
}

HRESULT CVIMESCaptureVideo::OpenDevice(int iDeviceID, HWND hWnd)
{
printf("\r\nDevice Id = %d", iDeviceID);
	HWND hWndVideo = hWnd;
	if(hWnd == NULL)
		hWndVideo = GetSafeHwnd();
	if(hWndVideo == NULL)
		hWndVideo = m_hApp;

	HRESULT hr;
	ReleaseFrames();
	if(m_bOpenning)
	{
		printf("\r\nOpening...");
		CloseInterfaces();
	}

	m_nDeviceID = iDeviceID;

	hr = InitCaptureGraphBuilder();
	if (FAILED(hr))
	{
		AfxMessageBox(_T("Failed to get video interfaces!"));
		return hr;
	}

	if(!BindFilter(iDeviceID, &pCap))
	{
		printf("\r\nCannot BindFilter");
		return S_FALSE;
	}
	hr = m_pGB->AddFilter(pCap, L"Capture Filter");

	hr = CoCreateInstance( CLSID_SampleGrabber, NULL, CLSCTX_INPROC_SERVER, IID_ISampleGrabber, (void**)&m_pGrabber );
	if( !m_pGrabber )
	{
		AfxMessageBox(_T("Fail to create SampleGrabber, maybe qedit.dll is not registered?"));
		return hr;
	}
	CComQIPtr< IBaseFilter, &IID_IBaseFilter > pGrabBase( m_pGrabber );



	InitVideoWindow(m_hApp, 1920, 1080);

	

	AM_MEDIA_TYPE mt; 
	ZeroMemory(&mt, sizeof(AM_MEDIA_TYPE));
	mt.majortype = MEDIATYPE_Video;
	mt.subtype = MEDIASUBTYPE_RGB24;
	

	hr = m_pGrabber->SetMediaType(&mt);

	if( FAILED( hr ) )
	{
		AfxMessageBox(_T("Fail to set media type!"));
		return hr;
	}
	hr = m_pGB->AddFilter( pGrabBase, L"Grabber" );
	if( FAILED( hr ) )
	{
		AfxMessageBox(_T("Fail to put sample grabber in graph"));
		return hr;
	}

//   GetOverlay(&pOverlay);
	   
//	hr = m_pCapture->RenderStream(&PIN_CATEGORY_PREVIEW, &MEDIATYPE_Video,pCap,pOverlay,NULL);
	hr = m_pCapture->RenderStream(&PIN_CATEGORY_PREVIEW, &MEDIATYPE_Video,pCap,pGrabBase,NULL);
//  hr = m_pCapture->RenderStream(&PIN_CATEGORY_PREVIEW, &MEDIATYPE_Video,pOverlay,NULL,NULL);
//	if( FAILED( hr ) )

//	hr = m_pCapture->RenderStream(&PIN_CATEGORY_CAPTURE, &MEDIATYPE_Video,m_pBF,pGrabBase,NULL);

	if( FAILED( hr ) )
	{
		AfxMessageBox(_T("Can’t build the graph"));
		return hr;
	}

	
	
	
	hr = m_pGrabber->GetConnectedMediaType( &mt );
	if ( FAILED( hr) )
	{
		AfxMessageBox(_T("Failt to read the connected media type"));
		return hr;
	}
	VIDEOINFOHEADER * vih = (VIDEOINFOHEADER*) mt.pbFormat;
	vih->rcSource = CRect(100, 100, 200, 200);
	m_CB->lWidth = vih->bmiHeader.biWidth;
	m_CB->lHeight = vih->bmiHeader.biHeight;
	m_nWidth = vih->bmiHeader.biWidth;
	m_nHeight = vih->bmiHeader.biHeight;
	m_CB->lImgWidth = m_nWidth;
	
	CString szFileName;
	CString szPath;
//	szPath.Format(_T("%s\\PACS\\%ld"), m_szCurrentDirectory, m_nDocumentNo);
	szPath.Format(_T("%s\\cap.bmp"), m_szCurrentDirectory);
//	m_CB->SetPath(m_szCurrentDirectory);
	
	m_CB->SetFileName(szFileName);
	
	FreeMediaType(&mt);
	hr = m_pGrabber->SetBufferSamples( FALSE );
	hr = m_pGrabber->SetOneShot( FALSE );
	hr = m_pGrabber->SetCallback(m_CB, 1 );
	
	m_hWnd = hWndVideo ; 
	SetupVideoWindow();


	CRect rcClient;
	::GetClientRect(hWndVideo, &rcClient);
	m_fZoomMax = 1.0;

	SetTimer(1, 1, NULL);

	m_bOpenning = true;
	

	m_pVW->put_MessageDrain((OAHWND)m_hWnd);

	hr = m_pMC->Run();
	if(FAILED(hr))
	{
		AfxMessageBox(_T("Couldn’t run the graph!"));
		return hr;
	}


	return S_OK;
}
HRESULT CVIMESCaptureVideo::BindFilter(int deviceId, IBaseFilter **pFilter)
{
	if (deviceId < 0) return FALSE;

	// enumerate all video capture devices
	CComPtr<ICreateDevEnum> pCreateDevEnum;
	HRESULT hr = CoCreateInstance(CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC_SERVER,
	IID_ICreateDevEnum, (void**)&pCreateDevEnum);
	if (hr != NOERROR) return hr;
	CComPtr<IEnumMoniker> pEm;
	hr = pCreateDevEnum->CreateClassEnumerator(CLSID_VideoInputDeviceCategory,&pEm, 0);
	if (hr != NOERROR) return hr;
	pEm->Reset();
	ULONG cFetched;
	IMoniker *pM;
	int index = 0;
	BOOL         Found ;
	IPin        *pP = 0;
	IEnumPins   *pins=0;
	ULONG        n;
	PIN_INFO     pinInfo;
	Found	= FALSE;
	IKsPropertySet *pKs=0;
	GUID guid;
	DWORD dw;
	BOOL fMatch = FALSE;
	BOOL bDevCheck=FALSE;

	IBaseFilter * pSrc = NULL;

	while(hr = pEm->Next(1, &pM, &cFetched), hr==S_OK, index <= deviceId)
	{
		IPropertyBag *pBag;
		hr = pM->BindToStorage(0, 0, IID_IPropertyBag, (void **)&pBag);
		if(SUCCEEDED(hr)) 
		{
			VARIANT var;
			var.vt = VT_BSTR;
			hr = pBag->Read(L"FriendlyName", &var, NULL);
			if (hr == NOERROR) 
			{
				if (index == deviceId)
				{
					
					pM->BindToObject(0, 0, IID_IBaseFilter, (void**)&pSrc);
					*pFilter = pSrc;
					 if(SUCCEEDED(pSrc->EnumPins(&pins)))
					{     
						while(!Found && (S_OK == pins->Next(1, &pP, &n)))
						{
					 		m_vType ++;
							if(S_OK == pP->QueryPinInfo(&pinInfo))
							{

								if(pinInfo.dir == PINDIR_INPUT)
								{
									// is this pin an ANALOGVIDEOIN input pin?
									if(pP->QueryInterface(IID_IKsPropertySet,
										(void **)&pKs) == S_OK)
									{
										if(pKs->Get(AMPROPSETID_Pin,
											AMPROPERTY_PIN_CATEGORY, NULL, 0,
											&guid, sizeof(GUID), &dw) == S_OK)
										{
											if(guid == PIN_CATEGORY_ANALOGVIDEOIN)
												fMatch = TRUE;
										}
										pKs->Release();
									}

									if(fMatch)
									{
										Found = TRUE;
										bDevCheck = Found;
										m_nAnalogCount++;
										break;
									}
								}
								pinInfo.pFilter->Release();
							}
							pP->Release();
						}
						pins->Release();
					}
	  			

		 			//vType ++;
				}
				SysFreeString(var.bstrVal);
			}			
			pBag->Release();
		}
		pM->Release();
		index++;

		m_nVSourceCount++;

	}
	pEm.Release();
	return hr;
}
HRESULT CVIMESCaptureVideo::BindCompress(int deviceId, IBaseFilter **pFilter) 
{
	if (deviceId < 0) return FALSE;
/*
	// enumerate all video capture devices
	CComPtr<ICreateDevEnum> pCreateDevEnum;
	HRESULT hr = CoCreateInstance(CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC_SERVER,
	IID_ICreateDevEnum, (void**)&pCreateDevEnum);
	if (hr != NOERROR) return FALSE;
	CComPtr<IEnumMoniker> pEm;
	hr = pCreateDevEnum->CreateClassEnumerator(CLSID_VideoCompressorCategory,&pEm, 0);
	if (hr != NOERROR) return FALSE;
	pEm->Reset();
	ULONG cFetched;
	IMoniker *pM;
	int index = 0;
	while(hr = pEm->Next(1, &pM, &cFetched), hr==S_OK, index <= deviceId)
	{
		IPropertyBag *pBag;
		hr = pM->BindToStorage(0, 0, IID_IPropertyBag, (void **)&pBag);
		if(SUCCEEDED(hr)) 
		{
			VARIANT var;
			var.vt = VT_BSTR;
			hr = pBag->Read(L"FriendlyName", &var, NULL);
			if (hr == NOERROR) 
			{
				if (index == deviceId)
				{
					pM->BindToObject(0, 0, IID_IBaseFilter, (void**)pFilter);
				}
				SysFreeString(var.bstrVal);
			}			
			pBag->Release();
		}
		pM->Release();
		index++;
	}
	pEm.Release();

*/

	HRESULT hr;
    ICreateDevEnum *pSysDevEnum = NULL;
    IEnumMoniker *pEnum = NULL;
    IMoniker *pMoniker = NULL;

    hr = CoCreateInstance(CLSID_SystemDeviceEnum, NULL, 
        CLSCTX_INPROC_SERVER, IID_ICreateDevEnum, 
        (void**)&pSysDevEnum);
    if (FAILED(hr))
    {
        // Handle the error.
		return FALSE;
    }    

    hr = pSysDevEnum->CreateClassEnumerator(
             CLSID_VideoCompressorCategory, &pEnum, 0);
    if (hr == S_OK)  // S_FALSE means nothing in this category.
    {
		int index = 0;
        while (S_OK == pEnum->Next(1, &pMoniker, NULL))
        {
            IPropertyBag *pPropBag = NULL;
            pMoniker->BindToStorage(0, 0, IID_IPropertyBag, 
                (void **)&pPropBag);
            VARIANT var;
            hr = pPropBag->Read(L"FriendlyName", &var, 0);
            if (SUCCEEDED(hr))
            {
				if (index == deviceId)
				{
					hr = pMoniker->BindToObject(NULL, NULL, IID_IBaseFilter, 
										(void**)&pFilter);
					if (SUCCEEDED(hr))
					{
						// Use the filter. 
						// Remember to release the IBaseFilter interface.
					}
				}
            }   
            
			index++;
            pPropBag->Release();
            pMoniker->Release();
        }
    }

    pSysDevEnum->Release();
    pEnum->Release();

	return TRUE;

}

HRESULT CVIMESCaptureVideo::InitCaptureGraphBuilder()
{
	HRESULT hr;
//COM Library Intialization
	if(m_hApp == NULL)
	{
		hr = CoInitialize(NULL);
		if(FAILED(hr))	/*, COINIT_APARTMENTTHREADED)))*/
		{
			AfxMessageBox(_T("CoInitialize Failed!\r\n"));   
			return hr ;
		}
	}

	hr=CoCreateInstance(CLSID_FilterGraph, NULL, CLSCTX_INPROC_SERVER, IID_IGraphBuilder, (void **)&m_pGB);
	hr = CoCreateInstance (CLSID_CaptureGraphBuilder2 , NULL, CLSCTX_INPROC,
	IID_ICaptureGraphBuilder2, (void **) &m_pCapture);
	if (FAILED(hr))return hr;

	
	m_pCapture->SetFiltergraph(m_pGB);

	hr = m_pGB->QueryInterface(IID_IMediaEvent, (LPVOID *) &m_pME);
  //  if (FAILED(hr))
    //    return hr;


    
	hr = m_pGB->QueryInterface(IID_IMediaControl, (void **)&m_pMC);
	if (FAILED(hr))return hr;
	hr = m_pGB->QueryInterface(IID_IVideoWindow, (LPVOID *) &m_pVW);
	if (FAILED(hr))return hr;

	m_pGB->QueryInterface(IID_IBasicVideo, (LPVOID *)&m_pBasicVideo);
	

	return hr;
}

HRESULT CVIMESCaptureVideo::SetupVideoWindow()
{
	HRESULT hr;
	
	hr = m_pVW->put_Owner((OAHWND)m_hWnd);
	if (FAILED(hr))return hr;
	hr = m_pVW->put_WindowStyle(WS_CHILD | WS_CLIPCHILDREN|WS_CLIPSIBLINGS);
	if (FAILED(hr))return hr;

	
	ResizeVideoWindow();
	hr = m_pVW->put_Visible(OATRUE);

	

	return hr;
}
HRESULT CVIMESCaptureVideo::ResizeVideoWindow()
{
	HRESULT hr;
	if (m_pVW)
	{


		CRect rc;
		::GetClientRect(m_hWnd,&rc);
/*
		int width = min(rc.right, rc.bottom);
		width -=50;
		int x, y;
		x = (rc.right-width)/2;
		y = (rc.bottom-width)/2;
*/
		/*float scale = (float)m_nHeight/m_nWidth;
		int x = (rc.Width()-m_nWidth)/2;
		int y = (rc.Height()-m_nHeight)/2;*/

		int x, y;
		//m_nWidth = rc.Width();
		//m_nHeight = rc.Height();
		long vw, vh;
		float scale;

		GetClientRect(&rc);
		
		m_pBasicVideo->get_VideoWidth(&vw);
		m_pBasicVideo->get_VideoHeight(&vh);
		scale = vw/vh*1.0;
		x = (rc.Width()-vw)/2;
		y = (rc.Height()-vh)/2;
		

		m_rcCropImage = CRect(x, y, x+vw, y+vh);
		m_nLeft = x;
		m_nTop = y;
		hr=m_pVW->SetWindowPosition(x, y, vw, vh);
		m_CB->lImgWidth = vw;
		m_CB->lHeight = vh;
		m_CB->lWidth = vw;
		m_CB->m_rcCrop = CRect(0, 0, vw, vh);
		//m_CB->m_rcCrop.OffsetRect(-x, -y);
		if(SUCCEEDED(hr))
			return TRUE;

		
	} 
	return FALSE;
}
void CVIMESCaptureVideo::GrabOneFrame(BOOL bGrab)
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	if(bGrab){
		CaptureState = START_FRAME_CAPTURE;
		CString szFileName;
		szFileName.Format(_T("./Data/RM/%ld_image.jpg"), 
			pMF->m_nPatientNo);
		m_CB->SetFileName(szFileName);
	}
	else
		CaptureState = STOP_CAPTURE;

}
void CVIMESCaptureVideo::FreeMediaType(AM_MEDIA_TYPE* mt)
{
	if(mt == NULL)
		return;
	if (mt->cbFormat != 0) 
	{
		CoTaskMemFree((PVOID)mt->pbFormat);
		// Strictly unnecessary but tidier
		mt->cbFormat = 0;
		mt->pbFormat = NULL;
	}
	if (mt->pUnk != NULL) 
	{
		mt->pUnk->Release();
		mt->pUnk = NULL;
	}
} 
HRESULT CVIMESCaptureVideo::StartCaptureVideo(int iComDevice)
{
	
   HRESULT hr;
	if(m_pMC) m_pMC->Stop();        

	CString szPath;
   szPath.Format(_T("%s\\Log\\capvideo.avi"), m_szCurrentDirectory);
  
   ReleaseFrames();
   ::DeleteFile(szPath);	
   if(pCompress == NULL)
   {
		hr=BindCompress(iComDevice,&pCompress);
		if(FAILED(hr) && !pCompress)
				return FALSE;
		m_pGB->AddFilter(pCompress,L"compress filter");
		hr = m_pCapture->SetOutputFileName(&MEDIASUBTYPE_Avi, szPath, &pMux,NULL);
   }
   
	hr = m_pCapture->RenderStream(&PIN_CATEGORY_CAPTURE, &MEDIATYPE_Video,pCap,pCompress,pMux);
	if(SUCCEEDED(hr))
	{

		CaptureState = START_VIDEO_CAPTURE;
		FrameCount=0;
		m_pMC->Run();
		return TRUE;
	}
	return FALSE;

}

HRESULT CVIMESCaptureVideo::RestartCaptureVideo(int iComDevice)
{
	CloseInterfaces();
	OpenDevice(0, m_hWnd);
	return StartCaptureVideo(iComDevice);
}

HRESULT CVIMESCaptureVideo::StopCaptureVideo()
{

	if(m_pMC)
	{
		m_pMC->Stop();
		m_pMC->Release();
	}
	return true;
    HRESULT hr;
	const WORD wStartCookie = 1, wStopCookie = 2; 
    hr=m_pCapture->ControlStream(&PIN_CATEGORY_CAPTURE, &MEDIATYPE_Video, pCap, 0, 0, wStartCookie, wStopCookie); 
	
	CaptureState = STOP_CAPTURE;
	m_pMC->Stop();
	hr = m_pCapture->RenderStream(&PIN_CATEGORY_PREVIEW, &MEDIATYPE_Video,pCap, NULL,NULL);
	m_pMC->Run();
	return TRUE;
    
}
HRESULT CVIMESCaptureVideo::StopDevice()
{
	HRESULT hr=m_pMC->Pause();
	CaptureState = STOP_CAPTURE;
	return hr;
}
HRESULT CVIMESCaptureVideo::ContinueDevice()
{
	HRESULT hr=m_pMC->Run();
	return hr;
}
HRESULT CVIMESCaptureVideo::GetFilterPinIn(IBaseFilter *Filter,IPin **PinIn)
{
	HRESULT hr;
	hr=m_pCapture->FindPin(Filter,PINDIR_INPUT,NULL,NULL,FALSE,0,PinIn);
//	*PinIn->Release();
	return hr;
}
HRESULT CVIMESCaptureVideo::GetFilterPinOut(IBaseFilter *Filter,IPin **PinOut)
{
	HRESULT hr;
	hr=m_pCapture->FindPin(Filter,PINDIR_OUTPUT,NULL,NULL,FALSE,0,PinOut);
//	*PinOut->Release();
	return hr;
}
HRESULT CVIMESCaptureVideo::GetSampleGrabberPinIn(ISampleGrabber *pGrabber,IPin **PinIn)
{
	HRESULT hr;
	hr=m_pCapture->FindPin(pGrabber,PINDIR_INPUT,NULL,NULL,FALSE,0,PinIn);
//	*PinIn->Release();
	return hr;
}
HRESULT CVIMESCaptureVideo::StartOverlay()
{
	HRESULT hr;

	ReleaseFrames();

	if(pOverIn==NULL)
    {
		hr=GetFilterPinIn(pOverlay,&pOverIn);
	    if(FAILED(hr))
		{
		    MessageBox(_T("pOverIn failed!"));
		    return hr;
		}    
	}
	if(pGrabIn==NULL)
    {
		hr=GetSampleGrabberPinIn(m_pGrabber,&pGrabIn);
	//	hr=GetSampleGrabberPinIn(pGrabBase,&pGrabIn);
	    if(FAILED(hr))
		{
	    	MessageBox(_T("pGrabIn failed!"));
		    return hr;
		}
	}
	if(pCapOut==NULL)
    {
		hr=GetFilterPinOut(pCap,&pCapOut);
	    if(FAILED(hr))
		{
	    	MessageBox(_T("pCapOut failed!"));
		    return hr;
		}
	}
	if(pOverOut==NULL)
    {
		hr=GetFilterPinOut(pOverlay,&pOverOut);
    	if(FAILED(hr))
		{
		   MessageBox(_T("pOverOut failed!"));
		   return hr;
		}
	}
	m_pMC->Stop();
	CaptureState = STOP_CAPTURE;

	hr=m_pGB->Disconnect(pCapOut);     
	hr=m_pGB->Disconnect(pGrabIn);
	if(FAILED(hr))
	{
		MessageBox(_T("Disconnect(pGrabIn) failed!"));
		return hr;
	}
	hr=m_pGB->Connect(pCapOut,pOverIn);
	if(FAILED(hr))
	{
		MessageBox(_T("Connect(pCapOut,pOverIn) failed!"));
		return hr;
	}
	hr=m_pGB->Connect(pOverOut,pGrabIn);
	if(FAILED(hr))
	{
		MessageBox(_T("Connect(pOverOut,pGrabIn) failed!"));
		return hr;
	}
	m_pMC->Run();
	
    return hr;
}
HRESULT CVIMESCaptureVideo::StopOverlay()
{
	HRESULT hr;
	m_pMC->Stop();
    hr=m_pGB->Disconnect(pCapOut);
    hr=m_pGB->Disconnect(pGrabIn);
    hr=m_pGB->Disconnect(pOverOut);
    hr=m_pGB->Disconnect(pOverIn);

	hr=m_pGB->Connect(pCapOut,pGrabIn);
	m_pMC->Run();
    return hr;
}

UINT CVIMESCaptureVideo::GetFrameCount(){
	return m_GrabBuffers.GetCount();
}
void* CVIMESCaptureVideo::GetFrameData(int nIndex){
	
	if(nIndex < 0 || nIndex >= m_GrabBuffers.GetCount())
	{
		return NULL;
	}
	
	return m_GrabBuffers[nIndex];

}
void CVIMESCaptureVideo::ReleaseFrames(){
	for (int i =0; i < m_GrabBuffers.GetCount(); i++){
		Bitmap* bitmap = m_GrabBuffers[i];
		delete bitmap;
	}
	m_GrabBuffers.RemoveAll();

	CString szPath;
	szPath.Format(_T("%s\\cap.bmp"), m_szCurrentDirectory);
	::DeleteFile(szPath);
}



BOOL CVIMESCaptureVideo::ExtractAVIFrames()
{
	if(m_bCaptured)
		return FALSE;
	ReleaseFrames();
	CString szFileName;
	szFileName.Format(_T("%s\\capvideo.avi"), m_szCurrentDirectory);

    AVIFileInit();

    PAVIFILE avi;
    int res=AVIFileOpen(&avi, szFileName, OF_READ, NULL);

    if (res!=AVIERR_OK)
    {
        //an error occures
        if (avi!=NULL)
            AVIFileRelease(avi);
        
        return FALSE;
    }


    AVIFILEINFO avi_info;
    AVIFileInfo(avi, &avi_info, sizeof(AVIFILEINFO));
/*
    CString szFileInfo;
    szFileInfo.Format("Dimention: %dx%d\n"
                      "Length: %d frames\n"
                      "Max bytes per second: %d\n"
                      "Samples per second: %d\n"
                      "Streams: %d\n"
                      "File Type: %d", avi_info.dwWidth,
                            avi_info.dwHeight,
                            avi_info.dwLength,
                            avi_info.dwMaxBytesPerSec,
                            (DWORD) (avi_info.dwRate / avi_info.dwScale),
                            avi_info.dwStreams,
                            avi_info.szFileType);
*/

    PAVISTREAM pStream;
    res=AVIFileGetStream(avi, &pStream, streamtypeVIDEO /*video stream*/, 
                                               0 /*first stream*/);

    if (res!=AVIERR_OK)
    {
        if (pStream!=NULL)
            AVIStreamRelease(pStream);

        AVIFileExit();
        return FALSE;
    }

    //do some task with the stream
    int iNumFrames;
    int iFirstFrame;

    iFirstFrame=AVIStreamStart(pStream);
    if (iFirstFrame==-1)
    {
        //Error getteing the frame inside the stream

        if (pStream!=NULL)
            AVIStreamRelease(pStream);

        AVIFileExit();
        return FALSE;
    }

    iNumFrames=AVIStreamLength(pStream);
    if (iNumFrames==-1)
    {
        //Error getteing the number of frames inside the stream
        
        if (pStream!=NULL)
            AVIStreamRelease(pStream);
        
        AVIFileExit();
        return FALSE;
    }

    //getting bitmap from frame
    BITMAPINFOHEADER bih;
    ZeroMemory(&bih, sizeof(BITMAPINFOHEADER));

    bih.biBitCount=24;    //24 bit per pixel
    bih.biClrImportant=0;
    bih.biClrUsed = 0;
    bih.biCompression = BI_RGB;
    bih.biPlanes = 1;
    bih.biSize = 40;
    bih.biXPelsPerMeter = 0;
    bih.biYPelsPerMeter = 0;
    //calculate total size of RGBQUAD scanlines (DWORD aligned)
    bih.biSizeImage = (((bih.biWidth * 3) + 3) & 0xFFFC) * bih.biHeight ;

	
    PGETFRAME pFrame;
//    pFrame=AVIStreamGetFrameOpen(pStream, 
  //         NULL/*(BITMAPINFOHEADER*) AVIGETFRAMEF_BESTDISPLAYFMT*/ /*&bih*/);


	HDC hDC = ::GetDC(NULL);
    //Get the first frame
    int index=0;

		void *bitmapinfo;   
		BITMAPINFO *pbmi;   
					bitmapinfo = new BYTE[sizeof(BITMAPINFOHEADER)];   
					pbmi = (BITMAPINFO *)bitmapinfo;   
					BITMAPINFOHEADER *pbmih;   
				//	RGBQUAD *prgbq;   
					pbmih = (PBITMAPINFOHEADER)pbmi;   
				  /*     
					prgbq = (RGBQUAD *)(pbmih + 1);   
					for (int j=0; j<256; j++, prgbq++)   
					{   
						prgbq->rgbBlue = j;    
						prgbq->rgbGreen = j;    
						prgbq->rgbRed = j;    
						prgbq->rgbReserved = 0;    
					}   
*/					
					
					pbmih->biSize = sizeof(BITMAPINFOHEADER);    
					pbmih->biWidth = avi_info.dwWidth;    
					pbmih->biHeight = avi_info.dwHeight;    
					pbmih->biPlanes = 1;    
					pbmih->biBitCount = 24;   
					pbmih->biCompression = BI_RGB;    
					pbmih->biSizeImage = 0;
					pbmih->biXPelsPerMeter = 0;    
					pbmih->biYPelsPerMeter = 0;    
					pbmih->biClrUsed = 0;    
					pbmih->biClrImportant = 0;    
	bih.biSizeImage = (((bih.biWidth * 3) + 3) & 0xFFFC) * bih.biHeight ;

	pFrame=AVIStreamGetFrameOpen(pStream, (BITMAPINFOHEADER*)pbmih);

    for (int i=iFirstFrame; i<iNumFrames; i++)
    {
        index= i-iFirstFrame;
        BYTE* pDIB = (BYTE*) AVIStreamGetFrame(pFrame, index);
		//get the BitmapInfoHeader
		RtlMoveMemory(&pbmih->biSize, pDIB, sizeof(BITMAPINFOHEADER));

		//now get the bitmap bits
		if (pbmih->biSizeImage < 1)
		{
			break;
		}

		BYTE* pBits=new BYTE[pbmih->biSizeImage];

		RtlMoveMemory(pBits, pDIB + sizeof(BITMAPINFOHEADER), pbmih->biSizeImage);

		HBITMAP hBitmap = CreateDIBitmap(hDC, pbmih, CBM_INIT, pBits, pbmi, DIB_RGB_COLORS); 
		Bitmap* newBitmap = Bitmap::FromHBITMAP(hBitmap, 0);
		m_GrabBuffers.Add(newBitmap);
		::DeleteObject(hBitmap);

		delete pBits;

    }

	delete bitmapinfo;
	::ReleaseDC(NULL, hDC);

    AVIStreamGetFrameClose(pFrame);

    //close the stream after finishing the task
    if (pStream!=NULL)
        AVIStreamRelease(pStream);

    AVIFileExit();

    return TRUE;
}

LPCTSTR CVIMESCaptureVideo::GetDirectory(){
	return m_szCurrentDirectory;
}

int CVIMESCaptureVideo::GetCaptureState(){
	return CaptureState;
}

BEGIN_MESSAGE_MAP(CVIMESCaptureVideo, CWnd)
	ON_WM_DESTROY()
	ON_WM_LBUTTONDOWN()
	//ON_WM_PAINT()
	//ON_WM_TIMER()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

void CVIMESCaptureVideo::OnDestroy()
{
	CWnd::OnDestroy();
	UnIntializeVideo();	
	if(m_CB)delete m_CB;
	m_CB = NULL;
}



bool	CVIMESCaptureVideo::IsOpenning(){
	return m_bOpenning;
}


void CVIMESCaptureVideo::StartTVTuner(){
	m_vType = 0; // Initializing current capture device to Video
		IAMCrossbar *pX;
		
		if ( m_pCapture == NULL)
			return;

		if(pCap == NULL)
			return;

		HRESULT hr;
        hr = m_pCapture->FindInterface(&PIN_CATEGORY_CAPTURE,
            &MEDIATYPE_Interleaved, pCap,
            IID_IAMCrossbar, (void **)&pX);
        if(hr != NOERROR)
            hr = m_pCapture->FindInterface(&PIN_CATEGORY_CAPTURE,
                &MEDIATYPE_Video, pCap,
                IID_IAMCrossbar, (void **)&pX);

		LONG lInpin, lOutpin;
		hr = pX->get_PinCounts(&lOutpin , &lInpin); 
				
		BOOL IPin=TRUE; LONG pIndex=0 , pRIndex=0 , pType=0;
		
		while( pIndex < lInpin)
		{
			hr = pX->get_CrossbarPinInfo( IPin , pIndex , &pRIndex , &pType); 
		
			if( pType == PhysConn_Video_Tuner)
					break;
					pIndex++;
		}
		
		BOOL OPin=FALSE; LONG pOIndex=0 , pORIndex=0 , pOType=0;
		while( pOIndex < lOutpin)
		{
			hr = pX->get_CrossbarPinInfo( OPin , pOIndex , &pORIndex , &pOType); 
			if( pOType == PhysConn_Video_VideoDecoder)
				break;
		}

		pX->Route(pOIndex,pIndex); 


        pX->Release();
}
void CVIMESCaptureVideo::StartWebcam(){
	// If Previous mode is Video then Close all interfaces
	if(m_vType == 0 )	
		CloseInterfaces();
	m_vType = 1; // Initializing current capture device to WebCam

	// Initializing Interfaces and Capture using WebCam
	HRESULT hr = CaptureVideoByMoniker();
	if(FAILED(hr))
	{
		AfxMessageBox(L"No Webcam Found.!") ;
		return;
	}
}
void CVIMESCaptureVideo::StartCompositeVideo(){
	m_vType = 0; // Initializing current capture device to Video

		IAMCrossbar *pX;
		
		if ( m_pCapture == NULL)
			return;

		if(pCap == NULL)
			return;

		HRESULT hr;
        hr = m_pCapture->FindInterface(&PIN_CATEGORY_CAPTURE,
            &MEDIATYPE_Interleaved, pCap,
            IID_IAMCrossbar, (void **)&pX);
        if(hr != NOERROR)
            hr = m_pCapture->FindInterface(&PIN_CATEGORY_CAPTURE,
                &MEDIATYPE_Video, pCap,
                IID_IAMCrossbar, (void **)&pX);

		LONG lInpin, lOutpin;
		hr = pX->get_PinCounts(&lOutpin , &lInpin); 
		//CString str; str.Format("%ld    %ld",l2,l1);
		//MessageBox(str);
		
		BOOL IPin=TRUE; LONG pIndex=0 , pRIndex=0 , pType=0;

		while( pIndex < lInpin)
		{
			hr = pX->get_CrossbarPinInfo( IPin , pIndex , &pRIndex , &pType); 
		
			if( pType == PhysConn_Video_Composite)
					break;
					pIndex++;
		}
		
		BOOL OPin=FALSE; LONG pOIndex=0 , pORIndex=0 , pOType=0;
		while( pOIndex < lOutpin)
		{
			hr = pX->get_CrossbarPinInfo( OPin , pOIndex , &pORIndex , &pOType); 
			if( pOType == PhysConn_Video_VideoDecoder)
				break;
		}

		pX->Route(pOIndex,pIndex); 

		pX->Release(); 

		
}
void CVIMESCaptureVideo::StartSVideo(){
	m_vType = 0; // Initializing current capture device to Video

	IAMCrossbar *pX;
	
	if ( m_pCapture == NULL)
		return;

		if(pCap == NULL)
			return;

		HRESULT hr;
        hr = m_pCapture->FindInterface(&PIN_CATEGORY_CAPTURE,&MEDIATYPE_Interleaved, pCap,IID_IAMCrossbar, (void **)&pX);
        if(hr != NOERROR)
            hr = m_pCapture->FindInterface(&PIN_CATEGORY_CAPTURE,&MEDIATYPE_Video, pCap,IID_IAMCrossbar, (void **)&pX);

		LONG lInpin, lOutpin;
		hr = pX->get_PinCounts(&lOutpin , &lInpin); 
		//CString str; str.Format("%ld    %ld",l2,l1);
		//MessageBox(str);
		
		BOOL IPin=TRUE; LONG pIndex=0 , pRIndex=0 , pType=0;
		
		while( pIndex < lInpin)
		{
			hr = pX->get_CrossbarPinInfo( IPin , pIndex , &pRIndex , &pType); 
		
			/*if( pType == PhysConn_Video_Tuner)
					break;
					pIndex++;*/
			if( pType == PhysConn_Video_SVideo)
					break;
					pIndex++;
		}
		
		BOOL OPin=FALSE; LONG pOIndex=0 , pORIndex=0 , pOType=0;
		while( pOIndex < lOutpin)
		{
			hr = pX->get_CrossbarPinInfo( OPin , pOIndex , &pORIndex , &pOType); 
			if( pOType == PhysConn_Video_VideoDecoder)
				break;
		}

		

		pX->Route(pOIndex,pIndex); 


		

        pX->Release();
}
void CVIMESCaptureVideo::OnLButtonDown(UINT nFlags, CPoint point)
{
	m_bMouseDown = true;
	m_ptOrg = point;
	
	CWnd::OnLButtonDown(nFlags, point);
}

void CVIMESCaptureVideo::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: Add your message handler code here
	// Do not call CWnd::OnPaint() for painting messages
//	if(m_tracker.m_rect.Width() > 100)
	//m_tracker.Draw(&dc);

	dc.SelectStockObject(NULL_BRUSH);
	CPen pen, *oldPen;
	pen.CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
	oldPen = dc.SelectObject(&pen);
	dc.Rectangle(m_rcCropImage);

	dc.SelectObject(oldPen);
	



}


void CVIMESCaptureVideo::OnTimer(UINT nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	if(nIDEvent == 1)
	{
		
		CDC *pDC = GetDC();
		CPen pen, *oldPen;
		pen.CreatePen(PS_SOLID, 1, RGB(0, 128, 192));
		
		pDC->SelectStockObject(NULL_BRUSH);
		oldPen = pDC->SelectObject(&pen);
		
		pDC->MoveTo(m_rcCropImage.left, m_rcCropImage.top);
		pDC->LineTo(m_rcCropImage.right, m_rcCropImage.top);
		pDC->LineTo(m_rcCropImage.right, m_rcCropImage.bottom);
		pDC->LineTo(m_rcCropImage.left, m_rcCropImage.bottom);
		pDC->LineTo(m_rcCropImage.left, m_rcCropImage.top);

		CRect rect;
		GetClientRect(&rect);
	//	pDC->FillSolidRect(rect, RGB(200, 200, 200));

		pDC->SelectObject(oldPen);
		pen.DeleteObject();
		ReleaseDC(pDC);
		
	}
	CWnd::OnTimer(nIDEvent);
}

BOOL CVIMESCaptureVideo::PreTranslateMessage(MSG* pMsg)
{
	
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_F2){
			if(m_bStop)
			{
				StartCaptureVideo(m_nDeviceID);
				m_bStop = false;
			}
			else
			{
				StopCaptureVideo();
				m_bStop = true;
			}
		}
		if(pMsg->wParam == VK_F3)
		{
			
		}
	}
	return CWnd::PreTranslateMessage(pMsg);
}

void CVIMESCaptureVideo::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if(m_bMouseDown)
	{
		int x, y;
		long vw, vh;

		CRect rect, rc;
		GetClientRect(&rect);

		
		if(nFlags & MK_LBUTTON)
		{
			int dy = m_ptOrg.y-point.y;
			double factor = (double)(dy)/25.0;
			float fScale = pow((double)1.1, factor)*m_fZoom;

			m_pBasicVideo->get_VideoWidth(&vw);
			m_pBasicVideo->get_VideoHeight(&vh);
			x = (rect.Width()-vw)/2;
			y = (rect.Height()-vh)/2;


			int w = vw*fScale;
			int h = vh*fScale;

			if(m_rcCropImage.left+w < (x+vw) && m_rcCropImage.top+h <= (y+vh))
				m_fZoom = fScale;
		
			//w = vw*m_fZoom;
			//h = vh*m_fZoom;
			if(m_fZoom < 0.2)
				m_fZoom = 0.2;
			if(m_fZoom > 1.0)
				m_fZoom = 1.0;
			GetClientRect(&rect);
			

//			m_rcCropImage.left = x;
//			m_rcCropImage.top = y;

			m_rcCropImage.right = m_rcCropImage.left+w;
			m_rcCropImage.bottom = m_rcCropImage.top+h;
			rc = m_rcCropImage;
			rc.OffsetRect(-x, -y);
			m_pBasicVideo->SetSourcePosition(rc.left, rc.top, rc.Width(), rc.Height());
			m_pBasicVideo->SetDestinationPosition(rc.left, rc.top, rc.Width(), rc.Height());
			m_pBasicVideo->get_DestinationWidth(&m_CB->lImgWidth);
			
		}
		else if(nFlags &MK_RBUTTON){
			long w, h;
			int dx = (m_ptOrg.x-point.x);
			int dy = (m_ptOrg.y-point.y);
			m_rcCropImage.OffsetRect(-1*dx, -1*dy);
			m_pBasicVideo->GetVideoSize(&vw, &vh);
			
			x = (rect.Width()-vw)/2;
			y = (rect.Height()-vh)/2;

			w = m_rcCropImage.Width();
			h = m_rcCropImage.Height();
			rect = CRect(x, y, x+vw, y+vh);
			if(m_rcCropImage.right > rect.right)
			{
				m_rcCropImage.right = rect.right;
				m_rcCropImage.left = m_rcCropImage.right-w;
				
			}
			if(m_rcCropImage.bottom > rect.bottom)
			{
				m_rcCropImage.bottom = rect.bottom;
				m_rcCropImage.top = m_rcCropImage.bottom-h;
				
			}
			if(m_rcCropImage.left < rect.left)
			{
				m_rcCropImage.left = rect.left;
				m_rcCropImage.right = m_rcCropImage.left+w;
			}
			if(m_rcCropImage.top < rect.top)
			{
				m_rcCropImage.top = rect.top;
				m_rcCropImage.bottom = m_rcCropImage.top+h;
			}

			rc = m_rcCropImage;
			rc.OffsetRect(-x, -y);			
			m_pBasicVideo->SetSourcePosition(rc.left, rc.top, rc.Width(), rc.Height());
			m_pBasicVideo->SetDestinationPosition(rc.left, rc.top, rc.Width(), rc.Height());
			m_pBasicVideo->get_DestinationWidth(&m_CB->lImgWidth);
			
		}
		m_CB->m_rcCrop = m_rcCropImage;
		//m_CB->m_rcCrop.bottom += 20;
		m_CB->m_rcCrop.OffsetRect(-m_nLeft, -m_nTop);
//		m_CB->m_rcCrop
//		printf("\r\n%d: %d", m_CB->m_rcCrop.left, m_CB->m_rcCrop.top);

	}

	m_ptOrg = point;
	CWnd::OnMouseMove(nFlags, point);
}

void CVIMESCaptureVideo::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	m_bMouseDown = false;
	CWnd::OnLButtonUp(nFlags, point);
}

HBITMAP CVIMESCaptureVideo::GetHBITMAP(){
	return m_CB->hBmp;
}
void CVIMESCaptureVideo::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	m_bMouseDown = true;
	CWnd::OnRButtonDown(nFlags, point);
}

void CVIMESCaptureVideo::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	m_bMouseDown = false;
	CWnd::OnRButtonUp(nFlags, point);
}


void CVIMESCaptureVideo::SetReference(LPCTSTR lpszDir, long nDocumentNo, long nOrderID, CString szItemID){
	CString szPath;
	m_szCurrentDirectory = lpszDir;
	szPath.Format(_T("%s\\Data"), lpszDir);
	CreateDirectory(szPath, NULL);
	szPath.AppendFormat(_T("\\PACS"));
	CreateDirectory(szPath, NULL);
	szPath.AppendFormat(_T("\\%ld"), nDocumentNo);
	CreateDirectory(szPath, NULL);
	szPath.AppendFormat(_T("\\%ld"), nOrderID);
	CreateDirectory(szPath, NULL);
	szPath.AppendFormat(_T("\\%s"), szItemID);
	CreateDirectory(szPath, NULL);

	m_nDocumentNo = nDocumentNo;
	m_nOrderID = nOrderID;
	m_szItemID = szItemID;
	m_nFrame=0;

}

HRESULT CVIMESCaptureVideo::CaptureVideoByMoniker()
{
	HRESULT hr;
    IMoniker *pMoniker =NULL;

    // Get DirectShow interfaces
    hr = GetInterfacesMoniker();
    if (FAILED(hr))
    {
		//Monikor Message
//        DisplayMesg(TEXT("Failed to get video interfaces!  hr=0x%x"), hr);
        return hr;
    }

    // Use the system device enumerator and class enumerator to find
    // a moniker that represents a video capture/preview device, 
    // such as a desktop USB video camera.
    hr = FindCaptureDeviceMoniker(&pMoniker);
    if (FAILED(hr))
    {
       //AfxMessageBox("Webcam is not detected.!") ;
        return hr;
    }

	if( m_nAnalogCount == m_nVSourceCount )
	{
		AfxMessageBox(_T("Webcam(USB) is not detected.!")) ;
		return hr;
	}
	
    hr = AddCaptureMonikerToGraph(pMoniker);

    if (FAILED(hr))
    {
  /*      DisplayMesg(TEXT("Couldn't add the capture filter to the graph!  hr=0x%x\r\n\r\n") 
            TEXT("If you have a working video capture device, please make sure\r\n")
            TEXT("that it is connected and is not being used by another application.\r\n\r\n")
            TEXT("The sample will now close."), hr);*/
        return hr;
    }

    // Release the IMoniker interface for the capture source filter
    pMoniker->Release();

    // Set video window style and position
    hr = SetupVideoWindowMoniker();
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Couldn't initialize video window!  hr=0x%x"), hr);
        return hr;
    }

#ifdef REGISTER_FILTERGRAPH
    // Add our graph to the running object table, which will allow
    // the GraphEdit application to "spy" on our graph
    hr = AddGraphToRotMoniker(m_pFilterGraph, &m_dwGraphRegister);
    if (FAILED(hr))
    {
    //    DisplayMesg(TEXT("Failed to register filter graph with ROT!  hr=0x%x"), hr);
        m_dwGraphRegister = 0;
    }
#endif
	
    // Start previewing video data
    hr = m_pMC->Run();
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Couldn't run the graph!  hr=0x%x"), hr);
        return hr;
    }
    return S_OK;
}



HRESULT CVIMESCaptureVideo::AddCaptureMonikerToGraph(IMoniker *pMoniker)
{
	USES_CONVERSION;

    HRESULT hr;
    IBaseFilter *pBaseFilter=0;

    // Get the display name of the moniker
    LPOLESTR strMonikerName=0;
    hr = pMoniker->GetDisplayName(NULL, NULL, &strMonikerName);
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Couldn't get moniker's display name!  hr=0x%x"), hr);
        return hr;
    }

#ifdef DEBUG
    // Get a human-readable string for evaluation during debugging
    TCHAR szMonikerName[256];
    _tcsncpy(szMonikerName, W2T(strMonikerName), 255);
    szMonikerName[255] = 0;     // Null-terminate
     //DisplayMesg(TEXT("Moniker: %s\r\n"), szMonikerName);
#endif
	
    // Create a bind context needed for working with the moniker
    IBindCtx *pContext=0;
    hr = CreateBindCtx(0, &pContext);
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Couldn't create a bind context for moniker!  hr=0x%x"), hr);
        return hr;
    }
	
    hr = m_pFilterGraph->AddSourceFilterForMoniker(pMoniker, pContext, 
                                             strMonikerName, &pBaseFilter);
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Failed in AddSourceFilterForMoniker()!  hr=0x%x"), hr);
        return hr;
    }
	
    // Attach the filter graph to the capture graph
    hr = m_pCaptureMoniker->SetFiltergraph(m_pFilterGraph);
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Failed to set capture filter graph!  hr=0x%x"), hr);
        return hr;
    }
    // Render the preview pin on the video capture filter
    // Use this instead of m_pGraph->RenderFile
    hr = m_pCaptureMoniker->RenderStream (&PIN_CATEGORY_PREVIEW, &MEDIATYPE_Video,
                                   pBaseFilter, NULL, NULL);
	if (FAILED(hr))
	{
//	      DisplayMesg(TEXT("Couldn't render capture stream.  ")
//	          TEXT("The device may already be in use.\r\n\r\nhr=0x%x"), hr);

		  return hr ;
	}
	
    srelease(pContext);
    srelease(pBaseFilter);

    return hr;
}



HRESULT CVIMESCaptureVideo::FindCaptureDeviceMoniker(IMoniker **ppMoniker)
{
	HRESULT hr;
    ULONG cFetched;

    if (!ppMoniker)
        return E_POINTER;
   
    // Create the system device enumerator
    CComPtr <ICreateDevEnum> pDevEnum = NULL;
		
    hr = CoCreateInstance (CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC,
                           IID_ICreateDevEnum, (void ** ) &pDevEnum);
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Couldn't create system enumerator!  hr=0x%x"), hr);
        return hr;
    }

    // Create an enumerator for the video capture devices
    CComPtr <IEnumMoniker> pClassEnum = NULL;

    hr = pDevEnum->CreateClassEnumerator (CLSID_VideoInputDeviceCategory, &pClassEnum, 0);
    if (FAILED(hr))
    {
//        DisplayMesg(TEXT("Couldn't create class enumerator!  hr=0x%x"), hr);
        return hr;
    }
	
    // If there are no enumerators for the requested type, then 
    // CreateClassEnumerator will succeed, but pClassEnum will be NULL.
    if (pClassEnum == NULL)
    {
		AfxMessageBox(_T("No video capture device was detected."),MB_OK | MB_ICONINFORMATION) ;
        return E_FAIL;
    }
	
    // Use the first video capture device on the device list.
    // Note that if the Next() call succeeds but there are no monikers,
    // it will return S_FALSE (which is not a failure).  Therefore, we
    // check that the return code is S_OK instead of using SUCCEEDED() macro.
	
	/// For finding Digital Capture Devices ...
	
	BOOL         Found ;
	IPin        *pP = 0;
	IEnumPins   *pins=0;
	ULONG        n;
	PIN_INFO     pinInfo;
	Found = FALSE;
	IKsPropertySet *pKs=0;
	GUID guid;
	DWORD dw;
	BOOL fMatch = FALSE;
	IMoniker *pMoniker = NULL;
	IBaseFilter *pSrc;
	
	while (S_OK == (pClassEnum->Next (1, ppMoniker, &cFetched)))
	{	
		pMoniker = ppMoniker[0];

		hr = pMoniker->BindToObject(0,0,IID_IBaseFilter, (void**)&pSrc);
		if (FAILED(hr))
		{
//			DisplayMesg(TEXT("Couldn't bind moniker to filter object!  hr=0x%x"), hr);
			return hr;
		}
		else
			m_pSrcF = pSrc;

				 if(SUCCEEDED(pSrc->EnumPins(&pins)))
				{     
				 while(!Found && (S_OK == pins->Next(1, &pP, &n)))
					{
						if(S_OK == pP->QueryPinInfo(&pinInfo))
						{
							if(pinInfo.dir == PINDIR_INPUT)
							{
								// is this pin an ANALOGVIDEOIN input pin?
								if(pP->QueryInterface(IID_IKsPropertySet,
									(void **)&pKs) == S_OK)
								{
									if(pKs->Get(AMPROPSETID_Pin,
										AMPROPERTY_PIN_CATEGORY, NULL, 0,
										&guid, sizeof(GUID), &dw) == S_OK)
									{
										if(guid == PIN_CATEGORY_ANALOGVIDEOIN)
											fMatch = TRUE;
									}
									pKs->Release();
								}

								if(fMatch)
								{
									Found = TRUE;
									m_nAnalogCount++;
									break;
								}

							}
							pinInfo.pFilter->Release();
						}
						pP->Release();
					}
					pins->Release();
				}
			  				
		m_nVSourceCount++;
		
	} // End of While Loop
	
	return S_OK;;
}



HRESULT CVIMESCaptureVideo::GetInterfacesMoniker()
{
    HRESULT hr;
	
	if(m_pFilterGraph == NULL)
	{
		// Create the filter graph
		hr = CoCreateInstance (CLSID_FilterGraph, NULL, CLSCTX_INPROC,
							   IID_IFilterGraph2, (void **) &m_pFilterGraph);
		if (FAILED(hr))
			return hr;
	}
	else
	{
		return E_FAIL ;
	}
	
	if(m_pCaptureMoniker == NULL)
	{
		// Create the capture graph builder
		hr = CoCreateInstance (CLSID_CaptureGraphBuilder2 , NULL, CLSCTX_INPROC,
							   IID_ICaptureGraphBuilder2, (void **) &m_pCaptureMoniker);
		if (FAILED(hr))
			return hr;
    }
	else
		return E_FAIL ;

    // Obtain interfaces for media control and Video Window
    hr = m_pFilterGraph->QueryInterface(IID_IMediaControl,(LPVOID *) &m_pMCMoniker);
    if (FAILED(hr))
        return hr;
	
    hr = m_pFilterGraph->QueryInterface(IID_IVideoWindow, (LPVOID *) &m_pVWMoniker);
    if (FAILED(hr))
        return hr;
	
    hr = m_pFilterGraph->QueryInterface(IID_IMediaEvent, (LPVOID *) &m_pMEMoniker);
    if (FAILED(hr))
        return hr;
	
    // Set the window handle used to process graph events
    hr = m_pMEMoniker->SetNotifyWindow((OAHWND)m_hApp, WM_GRAPHNOTIFY, 0);
	
	
    return hr;
}


HRESULT CVIMESCaptureVideo::SetupVideoWindowMoniker()
{
	HRESULT hr;
	
    // Set the video window to be a child of the main window
    hr = m_pVWMoniker->put_Owner((OAHWND)m_hApp);
    if (FAILED(hr))
        return hr;
    
    // Set video window style
    hr = m_pVWMoniker->put_WindowStyle(WS_CHILD | WS_CLIPCHILDREN);
    if (FAILED(hr))
        return hr;
	
    ResizeVideoWindowMoniker();
	
    // Make the video window visible, now that it is properly positioned
    hr = m_pVWMoniker->put_Visible(OATRUE);
    if (FAILED(hr))
        return hr;
	
	hr = m_pVWMoniker->put_MessageDrain((OAHWND)m_hApp);
	
	
    return hr;
}

void CVIMESCaptureVideo::ResizeVideoWindowMoniker()
{	
   // Resize the video preview window to match owner window size
    if (m_pVWMoniker)
    {	
        CRect rc;
        // Make the preview video fill our window
        ::GetClientRect(m_hApp,&rc);
        m_pVWMoniker->SetWindowPosition(0, 0, m_nWidth, m_nHeight);
    }		
}


#include "mpegtype.h"
HRESULT CVIMESCaptureVideo::InitVideoWindow(HWND hWnd,int width, int height)
{

	return 0;
	// Set the grabbing size
    // First we iterate through the available media types and 
    // store the first one that fits the requested size.
    // If we have found one, we set it.
    // In any case we query the size of the current media type
    // to have this information for clients of this class.
    //     Gerhard Reitmayr <reitmayr@i ...............>

	HRESULT hr;
	RECT rcDest;
	
    CComPtr<IAMStreamConfig> pConfig;
    IEnumMediaTypes *pMedia;
    AM_MEDIA_TYPE *pmt = NULL, *pfnt = NULL;

	CComPtr<IEnumPins> pEnum;
	pCap->EnumPins(&pEnum);

	hr = pEnum->Reset();
	hr = pEnum->Next(1, &m_pCamOutPin, NULL); 


	printf("\r\nInit video xxx");
	 IBaseFilter* pVmr = NULL;
// Create the VMR and add it to the filter graph.
	bool found = false;
    hr = m_pCamOutPin->EnumMediaTypes( &pMedia );
    if(SUCCEEDED(hr))
    {
printf("\r\nInit video");
        while(pMedia->Next(1, &pmt, 0) == S_OK)
        {
			if(pmt->formattype == FORMAT_VideoInfo)
			{
				printf("\r\nVideo info");
			}
			if(pmt->formattype == FORMAT_VideoInfo2)
			{
				printf("\r\nVideo info2");
			}
			if(pmt->formattype == FORMAT_AnalogVideo)
			{
				printf("\r\nVideo analog");
			}
			if(pmt->formattype == FORMAT_MPEGStreams)
			{
				printf("\r\nmpeg stream");
			}

			if( pmt->formattype == FORMAT_VideoInfo)
            {
                VIDEOINFOHEADER *vih = (VIDEOINFOHEADER *)pmt->pbFormat;
				printf("\r\nSize %d  %d\n", vih->bmiHeader.biWidth, vih->bmiHeader.biHeight );
                
                if( vih->bmiHeader.biWidth == width && vih->bmiHeader.biHeight == height )
                {
                    pfnt = pmt;
					long l,t, w, h;
					vih->bmiHeader.biWidth = width;
					vih->bmiHeader.biHeight = height;
				//	printf("\r\nfound=%ld:%ld: %ld: %ld\r\n", l, t, w, h);
					
					found = true;
                    break;
                }
                FreeMediaType( pmt );
            }                        
        }
        pMedia->Release();
    }
	if(found)
	{
		hr = m_pCamOutPin->QueryInterface( IID_IAMStreamConfig, (void **) &pConfig );
		if(SUCCEEDED(hr))
		{
			if( pfnt != NULL )
			{

				hr=pConfig->SetFormat( pfnt );

				//if(SUCCEEDED(hr))        
				//MessageBox("OK");

				FreeMediaType( pfnt );
			}
			hr = pConfig->GetFormat( &pfnt );
			if(SUCCEEDED(hr))
			{
				
				m_nWidth = ((VIDEOINFOHEADER *)pfnt->pbFormat)->bmiHeader.biWidth;
				m_nHeight = ((VIDEOINFOHEADER *)pfnt->pbFormat)->bmiHeader.biHeight;
				
				FreeMediaType( pfnt );
			}
		}
		CRect rect;
		::GetClientRect(m_hWnd, rect);
		//m_pVW->SetWindowPosition(0, 0, rect.Width(), rect.Height());
		//m_pBasicVideo->SetSourcePosition(100, 0, m_nWidth, m_nHeight);
	}
    return hr;
}