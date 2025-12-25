//*******************************************************************************
//
// MFCReportCtrl.h: interface for the CMFCReportCtrl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCREPORTCTRL_H__4B66884F_8973_472A_BCD1_4A3C27B62366__INCLUDED_)
#define AFX_MFCREPORTCTRL_H__4B66884F_8973_472A_BCD1_4A3C27B62366__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#ifndef AFX_EXCLUDE_GRID_CTRL

#include "MFCGridCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CMFCReportRow object

class AFX_EXT_CLASS CMFCReportRow : public CMFCGridRow
{
	DECLARE_DYNAMIC(CMFCReportRow)

	friend class CMFCReportCtrl;

// Construction
protected:
	CMFCReportRow ();
public:
	// Group constructor
	CMFCReportRow (const CString& strGroupName, DWORD dwData = 0);

	virtual ~CMFCReportRow();
	
// Operations:
public:
	const CString& GetDescription () const
	{
		return m_strDescr;
	}

	void SetDescription (const CString& strDescr)
	{
		m_strDescr = strDescr;
		m_nPreviewHeight = -1;
	}

// Overrides
public:
	virtual void OnFillGroupBackground (CDC* pDC, CRect rect, BOOL bGroupUnderline);
	virtual void OnDrawItems(CDC* pDC, CRect rect);
	virtual void OnDrawName (CDC* pDC, CRect rect);
	virtual void OnDrawPreview (CDC* pDC, CRect rect);
	virtual void OnDrawExpandBox (CDC* pDC, CRect rectExpand);

	virtual void OnPrintName (CDC* pDC, CRect rect);
	
	virtual int GetHierarchyLevel () const;

	virtual CString GetName ();

	virtual void SetName (const CString& strName)
	{
		m_strName = strName;
	}

	virtual CRect GetNameTooltipRect ();
	virtual CRect GetCheckBoxRect(int dx) const;
	virtual BOOL HasCheckBox () const;

	virtual BOOL SetACCData (CWnd* pParent, CAccessibilityData& data);

	virtual void GetPreviewText (CString& str) const;
	virtual void OnMeasureGridRowRect (CRect& rect);

protected:
	virtual BOOL HasValueField () const
	{
		return (m_arrRowItems.GetSize () > 0);
	}
	
	int CalcPreview (const CRect& rec);
	
// Attributes
protected:
	CString			m_strName;
	CString			m_strDescr;			// Row description
	int				m_nPreviewHeight;
};

/////////////////////////////////////////////////////////////////////////////
// CMFCReportCtrl window

class AFX_EXT_CLASS CMFCReportCtrl : public CMFCGridCtrl
{
	DECLARE_DYNAMIC(CMFCReportCtrl)

	friend class CMFCReportRow;

public:
	CMFCReportCtrl();
	virtual ~CMFCReportCtrl();

// Operations
	void EnablePreviewRow (BOOL bPreviewRow = TRUE, BOOL bRedraw = TRUE);
	virtual BOOL IsPreviewRowEnabled () const;

	void SetPreviewRowAutoLeftMargin (BOOL bAuto = TRUE);
	void RecalcMargins ();

	void SetPreviewRowCustomLeftMargin (int nMargin)
	{
		m_nPreviewRowLeftMargin = nMargin;
	}

	void SetPreviewRowCustomRightMargin (int nMargin)
	{
		m_nPreviewRowRightMargin = nMargin;
	}

// Overrides
public:
	virtual CMFCGridRow* CreateRow ()
	{
		return new CMFCReportRow();
	}

	virtual CMFCGridRow* CreateRow (int nColumns)
	{
		return CMFCGridCtrl::CreateRow (nColumns);
	}

	virtual CMFCGridRow* CreateRow (CString strName)
	{
		return new CMFCReportRow (strName);
	}

	virtual CRect OnGetPreviewRowMargins (CMFCGridRow* pRow) const;

protected:
	virtual void SetRowHeight ();
	virtual int GetExtraHierarchyOffset () const { return 0;}
	virtual int GetHierarchyOffset () const;

	virtual BOOL AllowInPlaceEdit () const
	{
		return FALSE; // disable inplace editing
	}

	virtual BOOL IsSelectionBorderEnabled () const
	{
		return FALSE;
	}
	
	virtual BOOL OnTrackHeader ()
	{
		return FALSE; // do not resize columns inside client area by mouse
	}

	virtual void OnResizeColumns ();
	void SetRecalcPreview ();

	virtual void OnScaleChanged(double dblOldScale);

	// Generated message map functions
protected:
	//{{AFX_MSG(CMFCReportCtrl)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

protected:
	// Preview feature to show description text in row:
	BOOL	m_bPreviewRow;	// If TRUE, extend the height of the row for description text
	int		m_nPreviewRowMaxLines;	// The maximum number of text lines for description
	int		m_nPreviewRowHeight;		// The maximum height for preview row
	int		m_nPrintPreviewRowHeight;	// 
	BOOL	m_bPreviewRowAutoLeftMargin;	// If true, calculates m_nPreviewRowLeftMargin automatically
	int		m_nPreviewRowLeftMargin;  // Custom Left margin for description text, if < 0 use default value
	int		m_nPreviewRowRightMargin; // Custom Right margin for description text, if < 0 use default value

	CDC*	m_pPreviewDC;	// used to calculate preview height

	BOOL	m_bAutoGroupCheckBoxes;
};

#endif // AFX_EXCLUDE_GRID_CTRL

#endif // !defined(AFX_MFCREPORTCTRL_H__4B66884F_8973_472A_BCD1_4A3C27B62366__INCLUDED_)
