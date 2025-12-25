
#if !defined(AFX_MFCGRIDFILTERMENU_H__10CABCAB_AAB9_4933_906E_4097D230362A__INCLUDED_)
#define AFX_MFCGRIDFILTERMENU_H__10CABCAB_AAB9_4933_906E_4097D230362A__INCLUDED_

#include <afxwin.h>
#include "MFCGridFilter.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define IDD_AFX_GRID_FILTER_DLG 0x1010



/////////////////////////////////////////////////////////////////////////////
// CMFCGridFilterListDlg dialog

class CMFCBaseFilterPopupMenu;

class CMFCGridFilterListDlg : public CDialogEx
{
	// Construction
public:
	CMFCGridFilterListDlg(UINT uiFilterCmd, 
		const CStringList& lstValues,
		CMFCBaseFilterPopupMenu* pParent = NULL);

	// Dialog Data
	//{{AFX_DATA(CMFCGridFilterListDlg)
	enum { IDD = IDD_AFX_GRID_FILTER_DLG };
	CMFCButton	m_btnOK;
	CMFCButton	m_btnCancel;
	CMFCEditBrowseCtrl	m_wndEdit;
	CCheckListBox	m_wndFilterList;
	CString	m_strSearch;
	//}}AFX_DATA
	
	UINT			m_uiFilterCmd;
	CStringList		m_lstValues;
	BOOL			m_bIsEmptyMenu;
	
	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCGridFilterListDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
	
	// Implementation
protected:
	void FillList ();
	
	// Generated message map functions
	//{{AFX_MSG(CMFCGridFilterListDlg)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnChangeFilterSearch();
	//}}AFX_MSG
	afx_msg void OnCheckchangeFilterList();
	DECLARE_MESSAGE_MAP()

	CString	m_strSelectAll;
};

////////////////////////////////////////////////////////////////////////
// CMFCGridFilterPopupMenuBar

class CMFCGridFilterPopupMenuBar : public CMFCPopupMenuBar
{
	friend class CMFCBaseFilterPopupMenu;

	CMFCGridFilterPopupMenuBar()
	{
		m_nListWidth = 0;
	}

	virtual CSize CalcSize(BOOL bVertDock)
	{
		CSize size = CMFCPopupMenuBar::CalcSize(bVertDock);
		size.cx = max(size.cx, m_nListWidth);

		return size;
	}

	virtual CSize GetEmptyMenuSize() const
	{
		return CSize(0, 0);
	}

	int m_nListWidth;
};

////////////////////////////////////////////////////////////////////////
// CMFCBaseFilterPopupMenu

class AFX_EXT_CLASS CMFCBaseFilterPopupMenu : public CMFCPopupMenu
{
	DECLARE_DYNAMIC(CMFCBaseFilterPopupMenu)

public:
	CMFCBaseFilterPopupMenu(
		UINT uiFilterCmd,
		const CStringList& lstCheckItems);

	virtual ~CMFCBaseFilterPopupMenu();

	virtual BOOL IsAll() const = 0;
	virtual void SetAll(BOOL bSet) = 0;

	virtual BOOL IsChecked(LPCTSTR lpszItem) const = 0;
	virtual void AddChecked(LPCTSTR lpszItem) = 0;

	virtual void SendFilterCommand (CWnd* pDestWnd, UINT uiCmd);

protected:
	// Generated message map functions
	//{{AFX_MSG(CMFCBaseFilterPopupMenu)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnWindowPosChanging(WINDOWPOS FAR* lpwndpos);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	virtual void RecalcLayout(BOOL bNotify = TRUE);
	virtual CMFCPopupMenuBar* GetMenuBar() { return &m_wndMenuBar; }

	CMFCGridFilterPopupMenuBar	m_wndMenuBar;
	CMFCGridFilterListDlg		m_wndList;
};

////////////////////////////////////////////////////////////////////////
// CMFCGridFilterPopupMenu

class CMFCGridCtrl;

class AFX_EXT_CLASS CMFCGridFilterPopupMenu : public CMFCBaseFilterPopupMenu
{
	DECLARE_DYNAMIC(CMFCGridFilterPopupMenu)
		
public:
	CMFCGridFilterPopupMenu(
		UINT uiFilterCmd,
		const CStringList& lstCheckItems,
		AFX_FILTER_COLUMN_INFO& filterColumnInfo,
		CMFCGridCtrl* pOwnerGrid);
	
	virtual ~CMFCGridFilterPopupMenu();
	
	virtual BOOL IsAll() const;
	virtual void SetAll(BOOL bSet);
	
	virtual BOOL IsChecked(LPCTSTR lpszItem) const;
	virtual void AddChecked(LPCTSTR lpszItem);

	virtual void SendFilterCommand (CWnd* pDestWnd, UINT uiCmd);
	
protected:
	// Generated message map functions
	//{{AFX_MSG(CMFCGridFilterPopupMenu)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
		
	AFX_FILTER_COLUMN_INFO&	m_filterColumnInfo;
	CMFCGridCtrl*				m_pOwnerGrid;
};


#endif // !defined(AFX_MFCGRIDFILTERMENU_H__10CABCAB_AAB9_4933_906E_4097D230362A__INCLUDED_)
