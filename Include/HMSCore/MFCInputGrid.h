#if !defined(AFX_MFCINPUTGRIDCTRL_H__56170B45_D9F3_4EA8_A6B5_C53C2308F22C__INCLUDED_)
#define AFX_MFCINPUTGRIDCTRL_H__56170B45_D9F3_4EA8_A6B5_C53C2308F22C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MFCInputGridCtrl.h : header file
//
#include "MFCGridCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CMFCInputGrid window

class AFX_EXT_CLASS CMFCInputGrid : public CMFCGridCtrl
{
	DECLARE_DYNCREATE(CMFCInputGrid)

	// Construction
public:
	CMFCInputGrid();

	// Attributes
protected:
	BOOL	m_bOption1; // Begin in-place edit on ENTER
	BOOL	m_bOption2; // Close in-place edit on TAB
	BOOL	m_bOption3; // Close in-place edit on LEFT/RIGHT
	BOOL	m_bOption4; // Close in-place edit on UP/DOWN
	BOOL	m_bOption5; // Close in-place edit on HOME/END
	BOOL	m_bOption6; // Move to the next row on ENTER
	BOOL	m_bOption7; // Add new row after last row on ENTER/DOWN

public:
	void SetOption(int nIndex, BOOL bEnable);
	BOOL GetOption(int nIndex) const;

	// Operations
public:
	int AddRecord(LPCTSTR szText);
	int InsertNewRecord(int nPos);
	void ContinueInplaceEditing();

protected:

	// Overrides
		// ClassWizard generated virtual function overrides
		//{{AFX_VIRTUAL(CMFCInputGrid)
		//}}AFX_VIRTUAL

	// Implementation
public:
	virtual ~CMFCInputGrid();

	void OnInplaceEditEnter(CMFCGridItem* pItem);

protected:
	AFX_GRID_ITEM_INFO	m_iiEndEdit; // used in OnEndInplaceEdit

	//--------------
	// In-place edit
	//--------------
	virtual void OnAfterInplaceEditCreated(CMFCGridItem* /*pItem*/, CWnd* /*pInplaceEdit*/);
	virtual void OnEndInplaceEdit(CMFCGridItem* pItem);
	virtual BOOL CanBeginInplaceEditOnChar(UINT nChar, UINT nRepCnt, UINT nFlags) const;
	virtual BOOL CanEndInplaceEditOnChar(UINT nChar, UINT nRepCnt, UINT nFlags) const;
	virtual BOOL OnInplaceEditKeyDown(CMFCGridRow* pSel, MSG* pMsg);

	virtual UINT OnInplaceEditSetSel(CMFCGridItem* pCurItem, UINT nReason) const;
	virtual BOOL OnEditEmptyValue(int nRow, int nColumn, CMFCGridItem* pItem);

	// Generated message map functions
	//{{AFX_MSG(CMFCInputGrid)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	//}}AFX_MSG
	afx_msg LRESULT OnEndLabelEdit(WPARAM, LPARAM);
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EASYINPUTGRIDCTRL_H__56170B45_D9F3_4EA8_A6B5_C53C2308F22C__INCLUDED_)
