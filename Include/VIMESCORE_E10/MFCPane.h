#ifndef MFCPANE_H
#define MFCPANE_H
#pragma once
#include "afxwin.h"
#include "GuiView.h"
#include "GuiButton.h"


class AFX_EXT_CLASS CMFCPane :
	public CScrollView
{
	DECLARE_DYNCREATE(CMFCPane)
protected:
	CWnd*	m_wndView;
	CArray<CWnd*, CWnd*>	m_Buttons;
	int		m_nWidth;
	CString	m_szName;
	CString	m_szCaption;
	virtual void RecalcLayout();
	
	virtual void OnDraw(CDC *pDC);
public:
	CMFCPane(void);
	~CMFCPane(void);
	BOOL	Create(CWnd *pParent, int nWidth=200, LPCTSTR lpszName=_T(""));
	BOOL	CreateView(CGuiView* pView);
	void	GetClientRect(LPRECT lpRect);
	void	OnButtonSelect();
	virtual void OnCreateComponents();
	virtual void OnSetWindowEvents();
	virtual void OnButtonClick(int nIndex);
	virtual void OnSelect(int nIndex);
	void	SetCaptionText(CString szCaption);
	void	SetName(CString	szName);
	CString	GetCaptionText();
	CString	GetName();
	int		GetWidth();
	
	void	AddButton(CWnd* pButton, int nStyle=BS_LEFT);



	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
};

#endif