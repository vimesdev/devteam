#if !defined(AFX_MFCCWidgetGridView_H__95DC74B6_EB76_4D3F_93E2_A1E800340364__INCLUDED_)
#define AFX_MFCCWidgetGridView_H__95DC74B6_EB76_4D3F_93E2_A1E800340364__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//*******************************************************************************
// COPYRIGHT NOTES
// ---------------
// This is a part of BCGControlBar Library Professional Edition
// Copyright (C) 1998-2016 BCGSoft Ltd.
// All rights reserved.
//
// This source code can be used, distributed or modified
// only under terms and conditions 
// of the accompanying license agreement.
//*******************************************************************************
//
// MFCCWidgetGridView.h : header file
//


#ifndef AFX_EXCLUDE_GRID_CTRL

class CMFCGridCtrl;

/////////////////////////////////////////////////////////////////////////////
// CMFCGridView view

class AFX_EXT_CLASS CMFCGridView : public CView
{
protected:
	CMFCGridView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CMFCGridView)

// Attributes
public:
	CMFCGridCtrl* GetGridCtrl () const
	{
		return m_pWndGridCtrl;
	}

protected:
	CMFCGridCtrl*		m_pWndGridCtrl;
	
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCGridView)
	public:
	virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMFCGridView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	virtual CMFCGridCtrl* CreateGrid ();

	// Generated message map functions
protected:
	//{{AFX_MSG(CMFCGridView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnDestroy();
	//}}AFX_MSG
	afx_msg LRESULT OnChangeVisualManager(WPARAM, LPARAM);
	DECLARE_MESSAGE_MAP()
};

#endif // AFX_EXCLUDE_GRID_CTRL

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCWidgetGridView_H__95DC74B6_EB76_4D3F_93E2_A1E800340364__INCLUDED_)
