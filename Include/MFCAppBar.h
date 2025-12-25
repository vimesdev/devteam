//*******************************************************************************
// COPYRIGHT NOTES
// ---------------
// This is a sample for BCGControlBar Library Professional Edition
// Copyright (C) 1998-2018 BCGSoft Ltd.
// All rights reserved.
//
// This source code can be used, distributed or modified
// only under terms and conditions 
// of the accompanying license agreement.
//*******************************************************************************
//
#if !defined(AFX_BCGPMSMCAPTIONBAR_H__4B2621B3_9ADD_4F3B_9A2C_27E1188E2613__INCLUDED_)
#define AFX_BCGPMSMCAPTIONBAR_H__4B2621B3_9ADD_4F3B_9A2C_27E1188E2613__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxcaptionbar.h>
#include "MFCWidget.h"
#include "MFCToolWrap.h"
#include "MFCSearchBox.h"
/////////////////////////////////////////////////////////////////////////////
// CMFCAppBar window

static const UINT uiCaprionBarID = AFX_IDW_DIALOGBAR + 1;



class AFX_EXT_CLASS CMFCAppBar : public CDockablePane
{
	DECLARE_DYNCREATE(CMFCAppBar)
	CArray<CWidgetItem*, CWidgetItem*>	m_lstWidgets;
	// Construction

	CWidgetItem* m_pDrawer;
	CWidgetItem* m_pClose;
	CWidgetItem* m_pMaximize;
	CWidgetItem* m_pMinimize;
	CWidgetItem* m_pSetting;
	CWidgetItem* m_pOption;
	CWidgetItem* m_pHelp;
	CWidgetItem* m_pNotification;
	CWidgetItem* m_pHit;
	
public:
	CMFCSearchBox	m_wndSearchBox;
	CMFCToolWrap	m_Impl;
	CMFCAppBar();

	virtual ~CMFCAppBar();

	virtual void SetIcon(HICON hIcon);

	void SetCaptionHeight(int nHeight);

	int GetCaptionHeight() const;

	void SetCaptionFont(const LOGFONT& lf);

	HFONT GetCaptionFont() const;

	virtual COLORREF GetCaptionTextColor() const;

	void SetParentActive(BOOL bParentActive = true);

	BOOL IsParentActive() const;

	void SetParentMaximize(BOOL bParentMaximize = true);

	BOOL IsParentMaximize() const;
	int			 AddWidget(CWidgetItem* pWidget);
	CWidgetItem* GetWidget(int nIndex);
	CWidgetItem* GetWidgetByCommand(UINT nCmdId);
	int			 GetWidgetCount();
	void		RemoveWidget(int nIndex);
	void		RemoveWidgetByCommand(UINT nCmdId);
	void		RemoveAllWidgets();
	void		ShowToolTip(CPoint pt, LPCTSTR lpszTitle);
	int			AddTab(UINT nCmdId, IconData icon, LPCTSTR lpszCaption, LPCTSTR lpszTooltip = _T(""), CWnd* pView = NULL);
	int			AddButton(UINT nCmdId, IconData icon, LPCTSTR lpszCaption, LPCTSTR lpszTooltip = _T(""));
	// Attributes
public:

	// Operations
public:

	// Overrides
		// ClassWizard generated virtual function overrides
		//{{AFX_VIRTUAL(CMFCAppBar)
public:
	virtual CSize CalcFixedLayout(BOOL bStretch, BOOL bHorz);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnDrawBackground(CDC* pDCPaint, CRect rect);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

	// Generated message map functions
protected:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);

	//{{AFX_MSG(CMFCAppBar)
	afx_msg LRESULT OnSetText(WPARAM, LPARAM lParam);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

	virtual UINT HitTest(const CPoint& pt);
	virtual void ShowSysMenu(const CPoint& point);
	virtual void OnClickTask(CWidgetItem* obj);

public:
	CString 				 m_strCaption;

	HICON					 m_hIcon;
	CSize					 m_szIcon;

	BOOL					 m_bParentActive;
	BOOL					 m_bParentMaximize;

	int						 m_SystemHeight;
	int						 m_CaptionHeight;
	CFont					 m_CaptionFont;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnMouseLeave();
	afx_msg void OnPaint();
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
};


inline
int CMFCAppBar::GetCaptionHeight() const
{
	return m_CaptionHeight;
}


inline
HFONT CMFCAppBar::GetCaptionFont() const
{
	return (HFONT)m_CaptionFont.GetSafeHandle();
}


inline
BOOL CMFCAppBar::IsParentActive() const
{
	return m_bParentActive;
}


inline
BOOL CMFCAppBar::IsParentMaximize() const
{
	return m_bParentMaximize;
}



class AFX_EXT_CLASS CMFCToolBarEx : public CMFCToolBar
{
	DECLARE_DYNCREATE(CMFCToolBarEx)

	// Construction
public:
	CMFCToolBarEx();

	virtual ~CMFCToolBarEx();

	// Attributes
public:

	// Operations
public:

	// Overrides
		// ClassWizard generated virtual function overrides
		//{{AFX_VIRTUAL(CMFCMFCToolBar)
		//}}AFX_VIRTUAL

	// Implementation
public:

	virtual BOOL LoadToolBar(UINT uiResID, UINT uiColdResID = 0,
		UINT uiMenuResID = 0, BOOL bLocked = FALSE,
		UINT uiDisabledResID = 0, UINT uiMenuDisabledResID = 0,
		UINT uiHotResID = 0, UINT uiPressedResID = 0);

	// Generated message map functions
protected:
	//{{AFX_MSG(CMFCMFCToolBar)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSysColorChange();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

	virtual BOOL DrawButton(CDC* pDC, CMFCToolBarButton* pButton,
		CMFCToolBarImages* pImages, BOOL bHighlighted,
		BOOL bDrawDisabledImages);
	virtual CSize CalcFixedLayout(
		BOOL bStretch,
		BOOL bHorz);
	virtual void DoPaint(CDC* pDC);
protected:

	static CMFCToolBarImages m_PressedImages; // Shared pressed images
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BCGPMSMCAPTIONBAR_H__4B2621B3_9ADD_4F3B_9A2C_27E1188E2613__INCLUDED_)
