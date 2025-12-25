#ifndef GUIPOPUP_H
#define GUIPOPUP_H

#include "guiview.h"
#define WPS_LEFT		1
#define WPS_TOP		2
#define WPS_RIGHT	3
#define WPS_BOTTOM	4

class AFX_EXT_CLASS CGuiPopup :
	public CGuiView
{
protected:
	CWnd*	m_pOldFocus;
	CWnd*	m_pWndRef;
	CRect	m_refRect;
	UINT	m_nRetCode;
	bool	m_bChildWindowVisible;
	bool	m_bAutoClose;
	bool	m_bInited;
	bool	m_bShow;
public:
	CGuiPopup();
	CGuiPopup(CWnd *pParent);
	~CGuiPopup(void);
	virtual void	ShowPopup(CWnd* pWndRef, int nShowPopup=WPS_BOTTOM);
	virtual void	ShowPopup(int x, int y, int w, int h);
	virtual void	ShowPopup(CRect rect);
	BOOL	Create(CWnd *pParent, LPCTSTR lpszWindowName=_T("POPUP"));
	void	SetChildWindowVisible(bool bInactive);
	void	SetAutoClose(bool bAuto);
	virtual void OnInitView() {}
	virtual void OnCancel();
	virtual void OnOk();
	virtual void ClosePopup();
	CWnd*	GetParentWnd();

protected:
	CWnd*	m_wndParent;

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnNcPaint();;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNcDestroy();
	afx_msg void OnDestroy();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


#endif