#ifndef MFCBACKSTAGE_H
#define MFCBACKSTAGE_H

#pragma once
#include "GuiPopup.h"
#include "GuiView.h"

class AFX_EXT_CLASS CMFCBackstage : public CWnd
{

	DECLARE_MESSAGE_MAP()
	CWnd* m_pFocus;
	CString		m_szTitle;
public:
	CGuiButton	m_wndClose;
	CView* m_pView;
	CView* m_pOldView;
	CMFCBackstage(CWnd* pParent);
	~CMFCBackstage();
	BOOL	CreateView(CView* pView);
	void	DoModal();
	void	RecalcLayout(BOOL bRedraw = TRUE);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	virtual void PostNcDestroy();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnDraw(CDC* /*pDC*/) {}
	afx_msg void OnClose();
	afx_msg void OnKillFocus(CWnd*);
	afx_msg LRESULT OnModal(WPARAM wp, LPARAM lp);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnNcMButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcPaint();
};


#endif