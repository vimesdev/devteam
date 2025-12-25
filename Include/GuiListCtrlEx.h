#ifndef GUILISTCTRLEX_H
#define GUILISTCTRLEX_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.  
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
#include "GuiBase.h"
#include "GuiHeaderCtrl.h"
#include "GuiMenu.h"

#define	DT_BOLD		0x10000000
#define	DT_ITALIC	0x20000000
#define LVIS_DRAWFULLROWS	0x0100
#define COLOR_INVALID	0xffffffff

#define SEARCH_LIKE	0x01
#define SEARCH_WORD	0x02
#define SEARCH_NAME	0x04



struct MERGECELL{
	int		nCol1;
	int		nCol2;
	int		nRow1;
	int		nRow2;
	UINT	nStyle;
	bool	bBold;
	bool	bItalic;
};

class ColStyle;
class CItemData;
class AFX_EXT_CLASS  CGuiListCtrlEx : public CListCtrl, public CGuiBase
{
	
protected:
	enum EHighlight { HIGHLIGHT_NORMAL, HIGHLIGHT_ALLCOLUMNS, HIGHLIGHT_ROW };
	int		m_nHighlight;
	int		m_nItem;
	int		m_nSubItem;
	int		m_nSortCol;
	int		m_nDraggedLine;
	BOOL	m_bAllowEditLabel;
	CWnd*	m_wndInput;
	COLORREF m_clrNormal;
	COLORREF m_clrSpec;
	bool	m_bSortAscending;
	bool	m_bSearching;
	BOOL	m_bCallChange;
	CBrush	m_Brush;
	CArray<MERGECELL, MERGECELL&> m_arrayMergeCell;
	CArray<LVEVENT, LVEVENT> m_arEvent;
	CArray<CItemData*,CItemData* >m_arrayItems;
	CArray<CItemData*,CItemData* >m_arraySearchItems;
	CMap<int,int, int, int> m_arrayGroup;

	CImageList	m_imgItems;
	CImageList	m_imgHeaders;
	CGuiHeaderCtrl m_wndHeaderCtrl;
	CGuiMenu*	m_pMenu;
	BOOL		m_bAllowDrag;
	bool		m_bDisplayColor;
	int			m_nLast;
	CObArray	m_ColumnInfos;
	CWnd*		m_pEditCtrl;
	CSize		m_szSize;
	int			m_nInputHeight;
	bool		m_bAutoIndex;
	int			m_nFraction;
	
	int				ItemFromPt(CPoint pt, BOOL bAutoScroll = TRUE) const;
	virtual void	DrawInsert(int nItem);
	virtual BOOL	BeginDrag(CPoint pt);
	virtual void	CancelDrag(CPoint pt);
	virtual UINT	Dragging(CPoint pt);
	virtual void	Dropped(int nSrcIndex, CPoint pt);
	void			DrawSingle(int nIndex);
	BOOL			IsValidIndex(int nItem);
	CString			GetDispInfoText(int nItem, int nSubItem);

public:
	CGuiListCtrlEx();
	virtual ~CGuiListCtrlEx();
    void     RefreshView(void);

	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	BOOL	Create(CWnd *pParent, int x, int y, int width, int height);
	BOOL	Create(CWnd *pParent, CRect rect);
	BOOL	CreateInput(CWnd *pWnd, int nHeight);
	virtual int InsertColumn(int nCol, LPCTSTR lpszColumnHeading, UINT nFormat = CFMT_LEFT, int nWidth = -1, int nSubItem=-1);
	virtual BOOL DeleteColumn(int nCol);
	void	DeleteAllColumns();
	BOOL    DeleteAllItems(void);
	BOOL	DeleteItem(int nItem);
	int		AddItems(LPCTSTR lpszText, ...);
	int		InsertItems(int nIndex, LPCTSTR lpszText, ...);
	
	void	ResetContent();
	BOOL	SetItemText(int nItem, int nSubItem, LPCTSTR lpszText);
	void	SetSubItemTextColor(int nItem = -1, int nSubItem = -1, COLORREF color = COLOR_INVALID, BOOL bRedraw = TRUE);
	void	SetSubItemBkColor(int nItem = -1, int nSubItem = -1, COLORREF color = COLOR_INVALID, BOOL bRedraw = TRUE);
	void	SetItemTextColor(int nItem = -1, COLORREF color = COLOR_INVALID, BOOL bRedraw = TRUE);
	void	SetItemBkColor(int nItem = -1, COLORREF color = COLOR_INVALID, BOOL bRedraw = TRUE);
	void	SetCheckBox(BOOL bCheck=TRUE);
	COLORREF GetItemTextColor(int nItem, int nSubItem);
	COLORREF GetItemBkColor(int nItem, int nSubItem);
	int		GetCurSel();
	int		GetSubItemSel();
	void	SetCurSel(int nIndex);
	CString GetItemTextSelected(int nSubItem);
	CString GetItemText(int nItem, int nSubItem);	
	CString GetItemText(int nItem, LPCTSTR lpszColName);	
	int		GetColumnIndex(LPCTSTR lpszColName);
	int		GetColumnCount();
	int		GetColumnFmt(int nCol);
	int		GetItemCount();
	int		GetSortColumn();
	BOOL	IsSortAscending();
	void	SetMenuState(int nID, BOOL bState);
	void	SetMenuText(int nID, LPCTSTR lpszName);
	void	AddEvent(int nID, LPCTSTR lpszName, int(*eventFnc)(CWnd *pWnd)=NULL, HICON hIcon=NULL, UINT nChar=-1, UINT nFlags=0);
	int		FindItem(int nSubItem, LPCTSTR lpszText);
	

	CWnd*	SetEditLabel(int nCol, int nCtrlType);
	void	SetStartEdit(int nItem, int nSubItem);
	void	CancelEditLabel();
	CWnd*	GetCurrentEditControl();
	CWnd*	GetEditControl(int nCol);
	CGuiHeaderCtrl*	GetHeaderControl();
    void	ShowInputWindow(BOOL bTop=FALSE);
	void	HideInputWindow();
	
	void	BeginLoad(int nCount=0);
	void	EndLoad(bool bRestore=false);
	void	SetAllowDrag(BOOL bFlags){ m_bAllowDrag = bFlags;}
	BOOL	SetCheck(int nItem, BOOL fCheck=TRUE);
	BOOL	GetCheck(int nItem);
	void	SetCallChange(BOOL bFlags);
	void	OnFontChange();
	void	SetGroupItem(int nItem, int nSubItem);
	void	SetSortHeader(bool bSortHeader=false);
	void	MergeCell(int nRow1, int nCol1, int nRow2, int nCol2, UINT nStyle=DT_LEFT|DT_VCENTER|DT_SINGLELINE, bool bBold=false, bool bItalic=false);
	int		Search(int nIndex, LPCTSTR lpszText, int nFlag = SEARCH_WORD);
	void	SetDisplayColor(bool bDisplay);
	void	SetAllowEdit(bool bAllow){ m_bAllowEditLabel = bAllow;}
	void	SetAutoIndex(bool bAuto);
	void	RecalcColumnWidth();
	void	SetFractionDigits(int nFraction);
	void	SetOrgSize(CSize sz){ m_szSize = sz;}
	// Generated message map functions
protected:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnNMClick(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMKillfocus(NMHDR *pNMHDR, LRESULT *pResult);
	
	//{{AFX_MSG(CGuiListCtrlEx)
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg int  OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnGetDispInfo(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDeleteItem(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDblClk(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnRclick(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomDrawItem(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnLvnColumnclick(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnHdnItemdblclick(NMHDR *pNMHDR, LRESULT *pResult);
//	afx_msg void OnNMRdblclk(NMHDR *pNMHDR, LRESULT *pResult);
	virtual void PreSubclassWindow();
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
//	afx_msg void OnLvnSetdispinfo(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNcPaint();
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
	afx_msg void OnLvnItemchanged(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnKeydown(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLvnBegindrag(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg HBRUSH CtlColor(CDC* /*pDC*/, UINT /*nCtlColor*/);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLvnBeginlabeledit(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnEndlabeledit(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHdnItemchanged(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnHdnItemclick(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnDestroy();
	afx_msg void OnPaint();
	virtual BOOL OnChildNotify(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pLResult);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnLvnItemActivate(NMHDR *pNMHDR, LRESULT *pResult);
	LRESULT OnSetFont(WPARAM wParam, LPARAM);
	afx_msg void MeasureItem( LPMEASUREITEMSTRUCT lpMeasureItemStruct );
	afx_msg void OnMeasureItem(int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#endif
