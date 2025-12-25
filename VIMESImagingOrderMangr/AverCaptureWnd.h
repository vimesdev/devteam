// MainFrm.h : interface of the CAverCaptureWnd class
//
/////////////////////////////////////////////////////////////////////////////
#ifndef AVCAPTUREWND_H
#define AVCAPTUREWND_H
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <afxwin.h>
#include "AverCaptureAPI.h"


class CSheetRecord;
class CDlgCaptureImage;
class CDlgDemoCallBackVideo;
class CSheetDeviceSetting;
class CDlgPreviewSetting;
class CShowPIPDlg;
enum
{
	DEMO_STATE_STOP=0,
	DEMO_STATE_PREVIEW=1,
	DEMO_STATE_CAP_IMAGE=2,
	DEMO_STATE_RECORD=4,
	DEMO_STATE_CALLBACK_VIDEO=8,
	DEMO_STATE_CALLBACK_AUDIO=16,
	DEMO_STATE_CALLBACK_ESTS=32
};

typedef struct _RIFF_HEADER
{
	char		szRiffID[4];        // 'R','I','F','F'
	DWORD	dwRiffSize;
	char		szRiffFormat[4];    // 'W','A','V','E'
}RIFF_HEADER;

typedef struct _WAVE_FORMAT
{
	WORD		wFormatTag;
	WORD		wChannels;
	DWORD		dwSamplesPerSec;
	DWORD		dwAvgBytesPerSec;
	WORD		wBlockAlign;
	WORD		wBitsPerSample;
}WAVE_FORMAT;

typedef struct _FMT_BLOCK
{
	char	szFmtID[4];		// 'f','m','t',' ' please note the
	// space character at the fourth location.
	DWORD	dwFmtSize;
	WAVE_FORMAT	wavFormat;
}FMT_BLOCK;

typedef struct _DATA_BLOCK
{
	char	szDataID[4];		// 'd','a','t','a'
	DWORD	dwDataSize;
}DATA_BLOCK;

class AFX_EXT_CLASS CAverCaptureWnd : public CWnd
{	
public:
	CAPTURE_SINGLE_IMAGE_INFO m_CaptureSingleInfo;
	int		m_nImage;
	CString m_szFile;
	CAverCaptureWnd();
	virtual ~CAverCaptureWnd();

	bool	Capture(int nFrame=-1);

	void SetFileName(CString szFile);

protected: 
	
	DECLARE_DYNAMIC(CAverCaptureWnd)
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
public:
	
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
protected:
	afx_msg int  OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus(CWnd *pOldWnd);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMove(int x, int y);
	afx_msg void OnDestroy();
	afx_msg void OnAbout();
	afx_msg void OnPaint();
	afx_msg void OnSelectCaptureDevice(UINT nID);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint pt);
	DECLARE_MESSAGE_MAP()
private:
	BOOL m_bIsShowSheetDeviceSetting;
	BOOL m_bIsShowDlgPreviewSetting;
	BOOL m_bIsShowDlgCaptureImage;
	BOOL m_bIsShowSheetRecord;
	BOOL m_bIsShowDlgDemoCallBackVideo;
	CSheetRecord          *m_pRecord;
	CDlgCaptureImage      *m_pCaptureImage;
	CDlgDemoCallBackVideo *m_pCallbackVideo;
	CSheetDeviceSetting   *m_pDeviceSetting;
	CDlgPreviewSetting    *m_pPreviewSetting;
	int    m_nDeviceIndex;
	TCHAR   m_szFileName[MAX_PATH];
	BOOL   m_bRestore;
	BOOL   m_bIsStartStreaming;
	BOOL   m_bHadSetVideoRenderer;
	DWORD  m_dwDeviceNum;
	DWORD  m_dwDemoState;
	DWORD  m_dwDeviceType;
	DWORD  m_dwCurrentCardType;
	HANDLE m_hCaptureDevice;
	void DeleteFunctionWindows();
	void DeleteCaptureDevice();
	static BOOL WINAPI MixCaptureVideo(VIDEO_SAMPLE_INFO VideoInfo, BYTE *pbData, LONG lLength, __int64 tRefTime, LONGPTR lUserData);
public:
	CShowPIPDlg *m_pShowPIPDlg;
	void Stopstreaming();
	void Startstreaming();
	void UpdateDemoState(DWORD dwDemoState,BOOL bSwitch);
	static BOOL WINAPI NotifyEventCallback(DWORD dwEventCode, LPVOID lpEventData, LPVOID lpUserData);
	afx_msg void OnFunctionRecord();
	afx_msg void OnFunctionCapture();

	afx_msg void OnFunctionStopstreaming();
	afx_msg void OnFunctionDevicesetting();
	afx_msg void OnFunctionStartstreaming();
	afx_msg void OnFunctionPreviewsetting();
	afx_msg void OnFunctionPictureinpicture();
	afx_msg void OnUpdateFileRestore(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionRecord(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionCapture(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionVideoprocess(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionDevicesetting(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionStopstreaming(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionStartstreaming(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionPreviewsetting(CCmdUI *pCmdUI);
	afx_msg void OnUpdateFunctionDemoCallbackVideo(CCmdUI *pCmdUI);
	afx_msg void OnFileRestore();
	afx_msg void OnClose();
	void SaveSettingAsIni();
	//static BOOL WINAPI CallbackRaw(SAMPLE_INFO SampleInfo,  BYTE *pbData,  LONG lLength, __int64 tRefTime,  LONG  lUserData);
	static BOOL WINAPI CallbackRaw( VIDEO_SAMPLE_INFO VideoInfo,  BYTE *pbData,  LONG lLength, __int64 tRefTime,  LONGPTR  lUserData);
public:
	afx_msg void OnSerialnumber();
public:
	afx_msg void OnUpdateSerialnumber(CCmdUI *pCmdUI);
};
/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__9917E820_94CA_4CF8_A2E7_1140B77283BE__INCLUDED_)
