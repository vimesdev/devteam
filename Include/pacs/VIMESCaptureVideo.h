#ifndef VIMESCAPTUREVIDEO_H
#define VIMESCAPTUREVIDEO_H


#include <atlbase.h>
#include <windows.h>
#include <dshow.h>
#include <Qedit.h>
#include <gdiplus.h>
using namespace Gdiplus;

#ifndef srelease
#define srelease(x) \
if ( NULL != x ) \
{ \
  x->Release(); \
  x = NULL; \
}
#endif

#define STOP_CAPTURE	0
#define START_VIDEO_CAPTURE	1
#define START_FRAME_CAPTURE	2
#define WM_REDRAW	WM_USER+100

class CSampleGrabberCB;
class CVIMESCaptureVideo:public CWnd 
{
friend class CSampleGrabberCB;
	bool	m_bOpenning;
	CString m_szCurrentDirectory;
	long	m_nDocumentNo;
	long	m_nOrderID;
	CString	m_szItemID;
	
	int vType;

	CRectTracker	m_tracker;
	CRect		m_rcCropImage;

	HWND	m_videoHwnd;
	CPoint	m_ptOrg;
	bool	m_bMouseDown;
	float	m_fZoom;
	float	m_fZoomMax;
	int		m_nWidth;
	int		m_nHeight;
	HBITMAP m_hBitmap;
	bool	m_bStop;

	CSampleGrabberCB*	m_CB;
	int		m_nLeft, m_nTop;
public:
	
	CArray<Bitmap*, Bitmap*> m_GrabBuffers;
	int		m_nFrame;

	void StartTVTuner();
	void StartWebcam();
	void StartCompositeVideo();
	void StartSVideo();
    void GrabOneFrame(BOOL bGrab);           
    HRESULT OpenDevice(int iDeviceID,HWND hWnd=NULL); 
	int EnumDevices(CStringArray& devices);                 
	int EnumCompressDevices(CStringArray& devices);         
    CVIMESCaptureVideo();                             
    virtual ~CVIMESCaptureVideo();                    
	HRESULT StopDevice();                        
	HRESULT ContinueDevice();                    
	HRESULT StartCaptureVideo(int iComDevice);   
	HRESULT RestartCaptureVideo(int iComDevice);   
	HRESULT StopCaptureVideo();                  
    HRESULT StartOverlay();
	HRESULT StopOverlay();
	void	CloseInterfaces();
	void	CloseInterfacesMoniker();

	LPCTSTR	GetDirectory();
	UINT	GetFrameCount();
	void*	GetFrameData(int nIndex);
	void	ReleaseFrames();
	BOOL	ExtractAVIFrames();
	int		GetCaptureState();
	int		GetCountOfFrame();
	bool	IsOpenning();
	CRect	GetCropRect(){ return m_rcCropImage; }
	void	SetCurrentDirectory(LPCTSTR lpszDir);
	void	SetReference(LPCTSTR lpszDir, long nDocumentNo, long nOrderID, CString szItemID);
	
private:
    HWND m_hWnd;
    IGraphBuilder *m_pGB;
    ICaptureGraphBuilder2* m_pCapture;
	IFileSinkFilter *pSink;                      

	IBaseFilter *pCap;                           
	IBaseFilter *pMux;                           
	IBaseFilter *pCompress;                      
    IBaseFilter *pOverlay;                       


    IPin *pCapOut;
	IPin *pGrabIn;
	IPin *pOverIn;
	IPin *pOverOut;

	IMediaControl* m_pMC;                  
    IVideoWindow* m_pVW;  
	IMediaEventEx* m_pME ;
    ISampleGrabber* m_pGrabber; 
	IBasicVideo*	m_pBasicVideo;
	

	BOOL	m_bCaptured;
	int		m_nDeviceID;

protected:
	

    void FreeMediaType(AM_MEDIA_TYPE& mt);
    HRESULT BindFilter(int deviceId, IBaseFilter **pFilter);  
	HRESULT BindCompress(int deviceId, IBaseFilter **pFilter);
    HRESULT ResizeVideoWindow();                              
    HRESULT SetupVideoWindow();                            
    HRESULT InitCaptureGraphBuilder();
	HRESULT GetFilterPinOut(IBaseFilter *Filter,IPin **PinOut);
	HRESULT GetFilterPinIn(IBaseFilter *Filter,IPin **PinIn);
	HRESULT GetSampleGrabberPinIn(ISampleGrabber* pGrabber,IPin **PinIn);
public:
	HBITMAP	GetHBITMAP();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnDestroy();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	//virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnTimer(UINT nIDEvent);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
};
#endif
