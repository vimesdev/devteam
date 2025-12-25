#ifndef SPLASHWINDOW_H
#define SPLASHWINDOW_H

#include <afxwin.h>
#include "Resource.h"

class CSplashWindow :
	public CWnd
{
	DWORD		m_dwWidth;
	DWORD		m_dwHeight;
	CBitmap		m_bitmap;
	UINT		m_nBitmap;
	void	Draw(CDC *pDC, CRect rect);
	int		m_nXProgress;
	bool	m_bPrev;
	CWnd*	m_pParent;
	
	
public:
	CString	m_szProgress;
	CString	m_szSolution;
	CString	m_szModule;

	CSplashWindow(CWnd *pParent=NULL, UINT nBitmap=IDB_SPLASH);
	~CSplashWindow(void);
	void	CreateSplash(UINT nBitmap=IDB_SPLASH);
	void	SetProgressText(LPCTSTR lpszProgress);
	void Show(LPCTSTR lpszProgress, int nTimeOut=1000);
	void DrawStatus();
	void Hide();
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT nIDEvent);
	DECLARE_MESSAGE_MAP()
	
protected:
	virtual void PostNcDestroy();
};


class AFX_EXT_CLASS CSplashThread : public CWinThread
{
	DECLARE_DYNCREATE(CSplashThread)

protected:
	CSplashWindow*  m_Wnd;
public:
	CSplashThread();           // protected constructor used by dynamic creation
	virtual ~CSplashThread();
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	void	ProgressText(LPCTSTR lpszProgress);
	void	HideSplash();
	void	SetModuleName(LPCTSTR lpszModule) { m_Wnd->m_szModule = lpszModule; }
protected:
	DECLARE_MESSAGE_MAP()
};

#endif
