#if !defined(AFX_MFCREPORTVIEW_H__5E51E0E0_FDF2_4D68_AE9E_9FD70665EFD0__INCLUDED_)
#define AFX_MFCREPORTVIEW_H__5E51E0E0_FDF2_4D68_AE9E_9FD70665EFD0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//*******************************************************************************
//
// MFCReportView.h : header file
//


#ifndef AFX_EXCLUDE_GRID_CTRL

#include "MFCGridView.h"

class CMFCReportCtrl;

/////////////////////////////////////////////////////////////////////////////
// CMFCReportView view

class AFX_EXT_CLASS CMFCReportView : public CMFCGridView
{
protected:
	CMFCReportView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CMFCReportView)

// Attributes
public:
	CMFCReportCtrl* GetReportCtrl () const
	{
		return (CMFCReportCtrl*) m_pWndGridCtrl;
	}

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCReportView)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMFCReportView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	virtual CMFCGridCtrl* CreateGrid ();

	// Generated message map functions
protected:
	//{{AFX_MSG(CMFCReportView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#endif // AFX_EXCLUDE_GRID_CTRL

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCREPORTVIEW_H__5E51E0E0_FDF2_4D68_AE9E_9FD70665EFD0__INCLUDED_)
