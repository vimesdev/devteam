#if !defined(AFX_GRIDLISTVIEW_H__AC7C4049_9583_405D_9CBD_9F89E5C909BB__INCLUDED_)
#define AFX_GRIDLISTVIEW_H__AC7C4049_9583_405D_9CBD_9F89E5C909BB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <afxwin.h>
#include <vector>
#include <afxcmn.h>			// MFC support for Windows Common Controls
#include <afxtempl.h>
#include "GuiBase.h"
#include "GuiMenu.h"



#define DEFAULT_STYLES				WS_BORDER|WS_CHILD|WS_VISIBLE|WS_VSCROLL|WS_TABSTOP

#define GRIDLIST_STYLE_CHECKBOX		1	
#define GRIDLIST_STYLE_GRIDLINES	2
#define GRIDLIST_STYLE_IMAGES		4

#define INVALID_ITEM	-1

//Item Types
#define HTML_TEXT			1
#define NORMAL_TEXT			2
#define SINGLE_LINE_TEXT	3
//end

//Calculate Item height Automatically
#define AUTO	0

//Padding between items
#define ITEM_PADDING_TOP			5
#define ITEM_PADDING_BOTTOM			5
#define ITEM_PADDING_LEFT			5	//if check box then after checkbox padding

#define ITEM_PADDING_CHECKBOX_LEFT	3

#define ITEM_IMAGE_PADDING_LEFT		5
#define ITEM_IMAGE_PADDING_RIGHT	5

#define ITEM_CHECKBOX_WIDTH			16

//for selection
#define NONE_SELECTED		-1

//Events
#define GRIDLIST_SELECTIONCHANGED	1
#define GRIDLIST_LBUTTONDOWN		2
#define GRIDLIST_RBUTTONDOWN		3
#define GRIDLIST_LBUTTONDBLCLICK	4
#define GRIDLIST_ITEMCHECKED		5

/////////////////////////////////////////////////////////////////////////////
// CGridListView window
struct NM_GRIDLISTCTRL
{
	NMHDR hdr;
	int nItemNo;
	CString sItemText;
	LPARAM lItemData;
	BOOL bChecked;
};

enum eVALUE_TYPE{
	VALUE_BOOL = 0,
	VALUE_CHAR,
	VALUE_SHORT,
	VALUE_INT,
	VALUE_LONG,
	VALUE_FLOAT,
	VALUE_DOUBLE,
	VALUE_INT64,
	VALUE_TEXT,
	VALUE_OBJECT
};
class CValue{
protected:
	short	m_nType;
	void*	m_value;
public:
	CValue();
	CValue(bool value);
	CValue(TCHAR value);
	CValue(short value);
	CValue(int value);
	CValue(long value);
	CValue(float value);
	CValue(double value);
	CValue(CString value);
	CValue(__int64 value);

	~CValue();
	short	GetType();
	void*	GetData();
	void	SetValue(bool value);
	void	SetValue(TCHAR value);
	void	SetValue(short value);
	void	SetValue(int value);
	void	SetValue(long value);
	void	SetValue(float value);
	void	SetValue(double value);
	void	SetValue(CString value);
	void	SetValue(__int64 value);
	void	GetValue(bool& value);
	void	GetValue(TCHAR& value);
	void	GetValue(short& value);
	void	GetValue(int& value);
	void	GetValue(long& value);
	void	GetValue(float& value);
	void	GetValue(double& value);
	void	GetValue(CString& value);
	void	GetValue(__int64& value);
	CString	ToString();
};

class CGridCell;
class CGridListItem;
class CGridListView;
enum CellType{
	CELLTYPE_EMPTY=0,
	CELLTYPE_NUMBER,
	CELLTYPE_STRING,
	CELLTYPE_IMAGE,
	CELLTYPE_HTML,
	CELLTYPE_TABLE,
	CELLTYPE_FORM,
	CELLTYPE_INPUT_TEXT,
	CELLTYPE_INPUT_NUMBER,
	CELLTYPE_INPUT_LABEL,
	CELLTYPE_INPUT_RADIO,
	CELLTYPE_INPUT_CHECKBOX,
	CELLTYPE_INPUT_BUTTON,
	CELLTYPE_INPUT_LIST,
	CELLTYPE_INPUT_COMBOBOX
};
#define DT_MONEY	0x00800000
#define DT_HEADER	0x01000000
#define DT_FIXED	0x02000000


class AFX_EXT_CLASS CGridCell{
protected:
	void	DrawString(CDC* pDC, CRect& rect);
	void	DrawTable(CDC *pDC, CRect& rect);
	void	DrawImage(CDC* pDC, CRect& rect);
	void	DrawHtml(CDC* pDC, CRect& rect);
	void	DrawInput(CDC* pDC, CRect& rect);
	bool	IsMultiline();
	virtual void OnDrawButton(CDC *pDC, CRect& rect);
	virtual void OnDrawCheckBox(CDC *pDC, CRect& rect);
	virtual void OnDrawRadio(CDC *pDC, CRect& rect);
	virtual void OnDrawComboBox(CDC *pDC, CRect& rect);
	virtual void OnDrawTextView(CDC *pDC, CRect& rect);
	
public:
	CellType	m_eType;
	UINT		m_nStyle;
	UINT		m_nWidth;
	UINT		m_nDefWidth;
	UINT		m_nHeight;
	UINT		m_nDefHeight;
	bool		m_bHeightSpecified;
	bool		m_bMultiLine;
	CString		m_szText;
	CString		m_szName;
	UINT		m_nFixedWidth;
	

	COLORREF	m_clrText;
	COLORREF	m_clrBackground;
	COLORREF	m_clrBorder;
	int			m_nLeftMargin;
	int			m_nTopMargin;
	int			m_nRightMargin;
	int			m_nBottomMargin;
	bool		m_bAutoSize;
	bool		m_bIsPercent;
	UINT		m_nBorderStyle;
	UINT		m_nState;
	CRect		m_rcItem;
	int			m_nColumns;
	int			m_nRows;
	CWnd*		m_pWnd;
	CArray<CGridListItem*, CGridListItem*> m_cellRows;
	CGridListItem*	m_pListItem;
	CGridCell();
	~CGridCell();
	void	Clear();
	void		SetType(CellType type){ m_eType = type;}
	CellType	GetType(){ return m_eType;}
	CString		GetString();
	void		SetString(LPCTSTR szString);
	void		CreateTable(int nRow, int nCol);
	void		SetCell(CGridCell* cell);
	void		SetWidth(int nWidth);
	void		SetHeight(int nHeight);
	CGridCell*	GetCell(int nRow, int nCol);
	int			GetWidth(){ if(m_nFixedWidth > 0) return m_nFixedWidth; else return m_nWidth;}
	int			GetHeight(){ return m_nHeight;}
	virtual void CalcHeight(CDC* pDC, CRect& rect);
	virtual void Draw(CDC *pDC, CRect& rect);
	CGridListItem*	GetRow(int nRow);
	int		AddRow(CGridListItem* pNewRow);
	void	SetBkColor(COLORREF clrBk);
	void	SetTextColor(COLORREF clrText);
	void	SetScale(float scale);

};
class AFX_EXT_CLASS CGridListItem
{
public:
	CGridListItem();
	CGridListItem(COLORREF bgColor, COLORREF textColor, UINT nState=ODS_DISABLED);
	CGridListItem(const CGridListItem* other);
	~CGridListItem();
	

	int			m_nItemNo;
	int			m_nHeight;
	UINT		m_nStyle;
	UINT		m_nState;
	CRect		m_rcItem;
	BOOL		m_bHeightSpecified;
	COLORREF	m_clrText;
	COLORREF	m_clrBackground;
	LPARAM		m_lParam;
	CStringArray	m_arStringKey;
	bool		m_bFillBackground;
	BOOL		m_bChecked;
	CGridListView*	m_pGrid;
	
	CArray<CGridCell*, CGridCell*> m_cells;
	CGridCell*	CreateCell();
	int			Add(CGridCell* newCell);
	int			Add(LPCTSTR lpszText, UINT nWidth, CellType eType=CELLTYPE_STRING, UINT nFormat=DT_LEFT|DT_SINGLELINE|DT_VCENTER);
	int			Insert(int nIndex, LPCTSTR lpszText, UINT nWidth, UINT nFormat=DT_LEFT|DT_SINGLELINE|DT_VCENTER);
	void		Delete(int nIndex);
	void		DeleteAll();
	void		Draw(CDC *pDC, CRect& rect, std::vector<int>* fixedColumn=NULL);
	
	void		CalcHeight(CDC* pDC, CRect& rect);

	UINT		GetColumnWidth(int nIndex);
	UINT		GetColumnFormat(int nIndex);
	int			GetItemCount();
	void		SetState(UINT nState);
	CGridCell*	GetCell(int nIndex);
	int			GetHeight(){ return m_nHeight;}
	void		SetHeight(int nHeight){ m_nHeight = nHeight;}
	void		SetFillBackground(bool bEnable);
	void		SetBkColor(COLORREF clrBk){ m_clrBackground = clrBk;}
	void		SetTextColor(COLORREF clrText) { m_clrText = clrText;} 
	void		SetCheck(BOOL bCheck){ m_bChecked = bCheck;}
	BOOL		GetChecked(){ return m_bChecked;} 
	void		SetScale(float scale);
	

};


class AFX_EXT_CLASS CGridListView : public CWnd,public CGuiBase
{
// Construction
public:
	CGridListView();
	CPoint	m_ptOrg;
	bool	m_bTracking;
	CArray<LVEVENT, LVEVENT> m_arEvent;
	CGuiMenu*	m_pMenu;
	
// Attributes
private:
	CGridListItem	m_hdItem;
	CGridListItem*	m_pItemSelected;
	CRect			m_rcOrg;
	float			m_fScale;
	CRect GetItemRect(int nPos);
	int CalculateItemHeight(CString sText,int nStyle,UINT uiImage,int nWidth);
	int CalculateItemHeight(CGridListItem* pItem);

	CArray<CGridListItem*, CGridListItem*> m_listItems;
	CArray<CGridListItem*, CGridListItem*> m_listSelected;
	int m_nTotalItems;

	//Controls id
	UINT	m_nControlID;
	//List Height (Not the actual window height)
	int m_nListHeight;

	//Actual window width
	int m_nWndWidth;
	int m_nWndHeight;
	int m_nColumnsWidth;
	//GDI stuff
	CPen		 m_penLight;
	COLORREF	 m_clrBkSelectedItem;
	
	//selected item
	int m_nSelectedItem;
	int	m_nPrevSelectedItem;
	//
	BOOL m_bHasFocus;
	BOOL	m_bLButtonDown;

	//
	DWORD m_dwExtendedStyles;

	//
	CImageList m_ImageList;
	CImageList *m_pImageList;
	int		m_nFooterHeight;
	int		m_nHeaderHeight;
	CString m_szFooterDetail;

	void	ResetScrollBar();
// Operations
public:
	BOOL	m_bCheckBox;
	int		m_nCheckColumn;
	BOOL	m_bEnableAutoIndex;

	std::vector<int>	m_listFixedColumns;
	std::vector<int>	m_listResizeColumns;
	std::vector<int>	m_listWidthColumns;
	int		GetItemCount();
	float	GetScale(){ return m_fScale; }
	void	EnableAutoIndex(bool bFlag);
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGridListView)
	//}}AFX_VIRTUAL

// Implementation
public:
	void	SetMenuState(int nID, BOOL bState);
	void	SetMenuText(int nID, LPCTSTR lpszName);
	void	AddEvent(int nID, LPCTSTR lpszName, int(*eventFnc)(CWnd *pWnd)=NULL, HICON hIcon=NULL, UINT nChar=-1, UINT nFlags=0);


	BOOL IsRectVisible(CRect rcClipBox,CRect rcItem);
	void SendCheckStateChangedNotification(int nPos);
	void SendSelectionChangeNotification(int nPos);
	virtual void DrawHeader(CDC *pDC);
	virtual void DrawItem(CDC *pDC,CRect rcItem, CGridListItem *pItem, BOOL bSelected);
	void ReArrangeWholeLayout();
	void ReArrangeItems();
	void RecalcLayout();
	BOOL DeleteItem(int nPos);
	void SetItemText(int nPos,CString sItemText,BOOL bCalculateHeight = FALSE);
	void EnsureVisible(int nPos, BOOL flag=FALSE);
	DWORD GetExtendedStyle();
	void SetExtendedStyle(DWORD dwExStyle);
	void	SetItemText(int nPos, int nCol, LPCTSTR lpszText);
	CString GetItemText(int nPos, int nCol);
	int		GetSelectedItem();
	int		GetCurSel();
	void	SetCurSel(int nIndex);
	bool		SetItemData(int nPos,LPARAM lItemData);
	LPARAM	GetItemData(int nPos);
	CGridListItem * GetInternalData(int nPos);
	CGridListItem * GetGridListItem(int nPos);
	void	SetItemKey(int nIndex, LPCTSTR lpszKey);
	CString	GetItemKey(int nIndex);
	void	SetItemKeys(int nIndex, CStringArray* strKeys);
	void	GetItemKeys(int nIndex, CStringArray* strKeys);
	void DeleteAllItems();
	int	Add(CGridListItem* pNewItem);
	int	Insert(int nIndex, CGridListItem* pNewItem);
	int InsertItem(CString sText,UINT uiImage,int nStyle=HTML_TEXT,int nHeight=AUTO);
	
	BOOL Create(CWnd *pParent, int x, int y, int cx, int cy, UINT nID=0,DWORD dwStyle=DEFAULT_STYLES);
	BOOL Create(CWnd *pParent,CRect rc,UINT nID=0,DWORD dwStyle=DEFAULT_STYLES);
	virtual ~CGridListView();

	int		InsertColumn(int nIndex, LPCTSTR lpszTitle, UINT nFormat, UINT nWidth);
	int		AddItems(LPCTSTR lpszData0, ...);

	void	BeginLoad();
	void	EndLoad();

	void	SetItemBkColor(int nItem, COLORREF clr, BOOL bRedraw=FALSE);
	void	SetItemTextColor(int nItem, COLORREF clr, BOOL bRedraw=FALSE);
	void	SetSubItemTextColor(int nItem, int nSubItem, COLORREF color, BOOL bRedraw=FALSE);
	void	SetSubItemBkColor(int nItem, int nSubItem, COLORREF color, BOOL bRedraw=FALSE);
	void	SetItemState(int nItem, UINT nState);
	void	MergeCell(int nRow1, int nCol1, int nRow2, int nCol2, UINT nStyle=DT_LEFT|DT_VCENTER|DT_SINGLELINE, bool bBold=false, bool bItalic=false);
	UINT	GetItemState(int nItem,UINT nMask);

	CGridListItem*	GetHeaderItem() { return &m_hdItem;}
	CGridListItem*	CreateNewItem();

	void	SetHeaderHeight(int nHeight);
	void	SetFooterHeight(int nHeight);
	int		GetHeaderHeight();
	int		GetFooterHeight();
	void	SetFooterDetail(CString szText);
	void	AddFixedColumn(int nColumn);
	void	RemoveFixedColumn(int nColumn);
	int		GetFixedColumn();
	void	AddResizeColumn(int nColumn);
	void	RemoveResizeColumn(int nColumn);
	int		GetResizeColumn();
	void	SetCheckBox(BOOL bCheck, int nColumns=0);
	void	SetCheck(int nItem, BOOL bCheck);
	BOOL	GetCheck(int nItem);
	BOOL	IsCheckBox(){ return m_bCheckBox;} 

	void	SetColumnWidth(int nIndex, int nWidth);
	int		GetColumnWidth(int nIndex);
	void	SetColumnStyle(int nIndex, UINT nStyle);
	UINT	GetColumnStyle(int nIndex);
	void	DeleteColumn(int nIndex);
	void	DeleteAllColumn();
	
	// Generated message map functions
protected:
	//{{AFX_MSG(CGridListView)
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg UINT OnGetDlgCode();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	//}}AFX_MSG
	afx_msg BOOL OnMouseWheel( UINT nFlags, short zDelta, CPoint pt );
	
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnNcPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRIDLISTVIEW_H__AC7C4049_9583_405D_9CBD_9F89E5C909BB__INCLUDED_)
