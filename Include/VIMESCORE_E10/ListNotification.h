#ifndef LISTBOXCTRL_H
#define LISTBOXCTRL_H

///////////////////////////////////////////////////////////////////////////////
//
// ListBoxXP.h
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
#include "afxwin.h"

class CListNotification : public CListBox
{
// Construction
public:
    CListNotification();

// Attributes
private:

// Operations
public:

// Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CListNotification)
	public:
    virtual void PreSubclassWindow();
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	virtual int VKeyToItem(UINT nKey, UINT nIndex);
	virtual int CharToItem(UINT nKey, UINT nIndex);
	//}}AFX_VIRTUAL

// Implementation
public:
    virtual ~CListNotification();
	BOOL	Create(CWnd *pParent, int x, int y, int cx, int cy);

protected:

    // Generated message map functions
protected:
	virtual void OnItemRenamed(UINT Item);
	virtual void OnItemAdded(UINT Item);
    //{{AFX_MSG(CListNotification)
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnNcPaint();
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnDblclk();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSelchange();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	//}}AFX_MSG

    afx_msg void OnMouseOut();

    DECLARE_MESSAGE_MAP()
private:
	void EnableItemEditing(BOOL bYes=1);
	UINT CountLines(const TCHAR * szBuf);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif