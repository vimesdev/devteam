#ifndef GUICOMBOBOX_H
#define GUICOMBOBOX_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and interEthnical treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	hayhv@vimes.com.vn or hayhv@yahoo.com
//	http://www.vimes.com.vn
//
//	Ban quy cua CONG TY CO PHAN PHAN MEM Y TE VIET NAM (VIMES).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh (GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "GuiHeaderCtrl.h"
#include "GuiTextCtrl.h"


typedef struct tagColumnInfo{
	CString szHeader;
	UINT		nFmt;
	UINT		nWidth;
}ColumnInfo;

#define GUICOMBOBOX_STYLE	(WS_BORDER | WS_VISIBLE | WS_CHILD | WS_TABSTOP | WS_GROUP | CBS_AUTOHSCROLL  | CBS_DROPDOWN|CBS_OWNERDRAWVARIABLE|CBS_HASSTRINGS )
//Fillter style
#define SS_COMPARE	0x001
#define SS_LIKE		0x002

///////////////////////////////////////////////////////////////////////////////
class AFX_EXT_CLASS CGuiComboBox : 
	public CComboBox, public CGuiBase
{
	bool			m_bRefresh;
	CRect			rcFocus;
	bool			m_bLoading;
	long			m_LoadTickCount;
	int				m_nSearchColumn;
	CGuiTextCtrl	m_wndEdit;
	bool		m_bIsHovering;
	BOOL		m_bIsTracking;
	CBrush		m_brNormal;
	CBrush		m_brDisable;
	CString		m_szKey;
	int			m_nTotalItems;
	int			m_nSearchExtColumn;
	
public:
	
	bool m_bRunning;			// Flag to whether thread is on running or not
	bool m_bTerminate;			// Flag to Thread to be terminated
	unsigned int m_dwThreadID;	// Thread ID
	HANDLE m_hThread, m_hEvent; // Thread and Event handle
	static unsigned __stdcall	LoadDataProc(LPVOID lpParam);
	bool IsRunning() { return m_bRunning;}
	BOOL TerminateThread();

	CGuiComboBox ();
	~CGuiComboBox(void);

	void		LoadInternalData();

	void	SetCheckBox(BOOL bCheck=TRUE);
	// Selects/unselects the specified item
    BOOL	SetCheck(int nIndex, BOOL bCheck = TRUE);
    // Returns checked state
    BOOL	GetCheck(int nIndex);
	CString	GetCheck(int nIndex, int nColumn);
    // Checks all/unchecks all
    void	CheckAll(BOOL bCheck = TRUE);
	int		GetCheckCount();
	CString	GetCheckData(int nColumn);
	void	SetAllowRefresh(bool bRefresh);
	CString	GetKey() { return m_szKey;} 
	INT_PTR	GetItemCount() { return m_pDataList.GetCount();}
	
// Operations
public:
		virtual BOOL Create (CWnd *pParent, int x, int y, int cx, int cy);
		virtual int	 InsertColumn(int nIndex, LPCTSTR lpszTitle= NULL, UINT nFmt=DT_LEFT, int nWidth=0);
		virtual int	 AddItems(LPCTSTR lpszData0, ...);
		
		virtual int	 AddSubItem(int nCol, LPCTSTR lpszData);
		virtual CString GetCurrent(int nCol, LPCTSTR lpszKey=NULL);
		int		AddSearchEx(LPCTSTR lpszData);
		void	SetVisibleLines (int nLines);
		void	Format(int nTotalColumn, int nShowColumn = 0, int nVisibleLines=10, int nSearchColum=-1);
		void	DeleteAllItems();
		void	ResetContent();
		void	SetCurrent(int nCol, LPCTSTR lpszKey);
		BOOL	GetDroppedState();
		BOOL	IsValidateData();
		void	SetReadOnly(BOOL bFlags=TRUE);
		BOOL	IsReadOnly();
		void	AddContents();
		void	SetSearchEx(BOOL bExt, int nColumn=-1);
		void	SetColumnKey(int nColumn){ m_nColumnKey = nColumn; }
		bool	IsSearchKey();
		void	SetRequirementLength(int nLength) { m_nRequireLength = nLength;}
		void	SetDataRequirement(BOOL bFlags=TRUE);
		void	SetSearchStyle(int nStyle) { m_nSearchStyle= nStyle;}
		CGuiHeaderCtrl*	GetHeaderCtrl();
		int		GetColumnKey(){ return m_nColumnKey; }
		void	ShowDropDown(BOOL bShowIt = 1);
		
// Implementation
protected:
// Overrides
    // ClassWizard generated virtual function overrides
		//{{AFX_VIRTUAL(CGuiComboBox)
		virtual void PreSubclassWindow();
		virtual BOOL PreTranslateMessage(MSG* pMsg);
		virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
		virtual BOOL OnChildNotify(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pLResult);
		//}}AFX_VIRTUAL

	void	RecalcDroppedHeight();
	
	void	AddString(LPCTSTR szText, int nIndex);
	void	RecalcDroppedWidth();
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	LRESULT OnCtlColorListBox(WPARAM, LPARAM lParam);
	afx_msg LRESULT OnDeleteString(WPARAM wp, LPARAM lp);

	
	int		m_nVisibleLines;
	int		m_nDefaultHeight;
	int		m_nEditHeight;
	int		m_nRequireLength;
	bool	m_bDropped;
	bool	m_bIsMoved;
	bool	m_bSearchKey;
	int		m_nInputTimeCount;
	int		m_nSearchStyle;
	int		m_nColumnKey;

	COLORREF	m_clrNormalText;
	COLORREF	m_clrHilightText;
	COLORREF	m_clrWindow;

	CArray<CString*, CString*> m_pDataList;
	CMap<DWORD, DWORD, CString, CString> m_mKey;
	int		m_nDropedWidth;
	int		m_nTotalColumn;
	int		m_nShowColumn;
	int		m_nNumberCol;
	bool	m_bShowTitle;
	bool	m_bAutoWidth;
	bool	m_bIsLoaded;
	long	m_nCurrentSel;
	BOOL	m_bMouseOver;
	BOOL	m_bSearchEx;
	CBitmap m_ComboButton;
	CBitmap m_ComboButtonGlyph;

	ColumnInfo* m_pColInfo;
	CGuiHeaderCtrl	m_HeaderCtrl;
	
	CByteArray m_CheckArray;
	BOOL		m_bCheckBox;
	HWND		m_hListBox;


public:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
protected:
	//{{AFX_MSG(CGuiComboBox)
		afx_msg void OnCbnEditchange();
		afx_msg void OnCbnSelchange();
		afx_msg void OnCbnDropdown();
		afx_msg void OnPaint();
		afx_msg void OnChangeCbChain(HWND hWndRemove, HWND hWndAfter);
		afx_msg void OnCbnEditupdate();
		afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
		afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
		afx_msg void OnDestroy();
		afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
		afx_msg void OnCbnSelendok();
		afx_msg void OnCbnSelendcancel();
		afx_msg HBRUSH CtlColor(CDC* /*pDC*/, UINT /*nCtlColor*/);
		afx_msg UINT OnGetDlgCode();
		afx_msg void OnWindowPosChanging(WINDOWPOS*);
		afx_msg void OnWindowPosChanged(WINDOWPOS*);
		afx_msg void OnSetFocus(CWnd* pOldWnd);
		afx_msg void OnKillFocus(CWnd* pNewWnd);
		afx_msg void OnMouseMove(UINT nFlags, CPoint point);
		afx_msg void OnNcPaint();
		afx_msg void OnTimer(UINT nIDEvent);
		afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
	
		afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
		afx_msg void OnSize(UINT nType, int cx, int cy);
		afx_msg void OnEnable(BOOL bEnable);
		afx_msg void OnCbnKillfocus();
		afx_msg BOOL OnEraseBkgnd(CDC* pDC);
		afx_msg void OnCbnCloseup();
		afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
		afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
		afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
		afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
		afx_msg void OnCbnSetfocus();
		afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
		afx_msg LRESULT OnMouseHover(WPARAM wparam, LPARAM lparam) ;
		
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnMeasureItem(int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
};


#endif