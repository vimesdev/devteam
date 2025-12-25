#if !defined(AFX_MFCGRIDCTRL_H__573C359C_D1FB_446F_B60D_B5E331228237__INCLUDED_)
#define AFX_MFCGRIDCTRL_H__573C359C_D1FB_446F_B60D_B5E331228237__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#ifndef __AFXTEMPL_H__
	#include <afxtempl.h>
#endif

//#include "comdef.h"
#include <afxcontrolbars.h>
#include "MFCGridFilter.h"
#include "MFCDateTimeCtrl.h"
#include "GuiBase.h"
#include "GuiListCtrlEx.h"



// Selection modes:
#define SM_NONE					0x0000
#define SM_ALL					0x0001
#define SM_ROW					0x0002
#define SM_COLUMN				0x0004
#define SM_SINGLE_ITEM			0x0008
#define SM_SET_ACTIVE_ITEM		0x0010
#define SM_FIRST_CLICK			0x0020
#define SM_SECOND_CLICK			0x0040
#define SM_SINGE_SEL_GROUP		0x0080
#define SM_CONTINUE_SEL_GROUP	0x0100
#define SM_ADD_SEL_GROUP		0x0200
#define SM_INVERT_SEL			0x0400

// Header flags:
#define AFX_GRID_HEADER_MOVE_ITEMS	0x0001
#define AFX_GRID_HEADER_HIDE_ITEMS	0x0002
#define AFX_GRID_HEADER_SORT		0x0004
#define AFX_GRID_HEADER_SELECT		0x0008 // does not work together with AFX_GRID_HEADER_SORT
#define AFX_GRID_HEADER_FORCESIMPLEBORDERS 0x0100

// Grid item flags:
#define AFX_GRID_ITEM_HAS_LIST		0x0001
#define AFX_GRID_ITEM_HAS_BUTTON	0x0002
#define AFX_GRID_ITEM_HAS_SPIN		0x0004
#define AFX_GRID_ITEM_VTOP			0x0010
#define AFX_GRID_ITEM_VCENTER		0x0020
#define AFX_GRID_ITEM_VBOTTOM		0x0040
#define AFX_GRID_ITEM_VALIGNMASK	0x00f0
#define AFX_GRID_ITEM_AUTOGROUP	0x0100
#define AFX_GRID_ITEM_MULTILINE	0x0200
#define AFX_GRID_ITEM_WORDWRAP		0x0400

#define AFX_TOOLTIP_TYPE_GRID		    0x2000


class CMFCGridItem;
class CMFCChartVisualObject;
class CMFCChartSeries;
class CMFCGraphicsManager;


/////////////////////////////////////////////////////////////////////////////
// AFX_GRID_ITEM_INFO struct, 
// used for AFX_WM_GRID_ITEM_CHANGED, AFX_WM_GRID_ITEM_BEGININPLACEEDIT, AFX_WM_GRID_ITEM_ENDINPLACEEDIT, AFX_WM_GRID_FIND_RESULT messages




struct AFX_EXT_CLASS AFX_GRID_ITEM_INFO
{
	CMFCGridItem*	pItem;			// An item
    int				nRow;			// Row of an item
	int				nCol;			// Column of an item
	DWORD_PTR		dwResultCode;	// Message specific
};

/////////////////////////////////////////////////////////////////////////////
//

struct AFX_EXT_CLASS AFX_GRID_NOTIFICATION	// used for MFCGN_SELCHANGING, MFCGN_SELCHANGED
{
	NMHDR	hdr;
    int		nRow;				// Row of the first item
	int		nCol;				// Column of the first item
    int		nRowTo;				// Row of the last item
	int		nColTo;				// Column of the last item
	LPARAM	lParam;				// Message specific
};

struct AFX_EXT_CLASS AFX_GRID_ITEM	// used for MFCGN_GETDISPINFO
{
    int nRow;				// Row of an item
	int nCol;				// Column of an item

    _variant_t	varValue;         // Item value
	int			iImage;			  // Item image index
    DWORD_PTR	dwData;           // User-defined data

	COLORREF	clrBackground;    // Background color
	COLORREF	clrText;          // Text color
    LOGFONT		lfFont;           // Cell font
};

struct AFX_EXT_CLASS AFX_GRID_DISPINFO
{
	NMHDR				hdr;
	AFX_GRID_ITEM		item;
};

// Notification messages
#define MFCGN_SELCHANGING		LVN_ITEMCHANGING
#define MFCGN_SELCHANGED		LVN_ITEMCHANGED
#define MFCGN_GETDISPINFO		LVN_GETDISPINFO 

typedef BOOL (CALLBACK* AFX_GRID_CALLBACK)(AFX_GRID_DISPINFO*, LPARAM);

// Filter
typedef LRESULT (CALLBACK* AFX_GRID_FILTERCALLBACK)(WPARAM wParam, LPARAM lParam);



/////////////////////////////////////////////////////////////////////////////
// CMFCGridItemID object

class AFX_EXT_CLASS CMFCGridItemID
{
public:
	CMFCGridItemID(int nRow = -1, int nColumn = -1)
		: m_nRow (nRow), m_nColumn (nColumn) 
	{
	}

	BOOL IsNull () const
	{
		return !IsAll () && (m_nRow < 0 && m_nColumn < 0);
	}

	void SetNull ()
	{
		m_nRow = -1;
		m_nColumn = -1;
	}

	void SetAll ()
	{
		m_nRow = -2;
		m_nColumn = -2;
	}

	BOOL IsRow () const
	{
		return (m_nRow >= 0 && m_nColumn == -1);
	}

	BOOL IsColumn () const
	{
		return (m_nRow == -1 && m_nColumn >= 0);
	}

	BOOL IsAll () const
	{
		return (m_nRow == -2 && m_nColumn == -2);
	}

	CMFCGridItemID& operator=(const CMFCGridItemID& rhs)
	{
		m_nRow = rhs.m_nRow;
		m_nColumn = rhs.m_nColumn;
		return *this;
	}

	int operator==(const CMFCGridItemID& rhs) const
	{
		return (m_nRow == rhs.m_nRow && m_nColumn == rhs.m_nColumn);
	}
    
	int operator!=(const CMFCGridItemID& rhs) const 
	{
		return !operator==(rhs);
	}

// Attributes
	int	m_nRow;
	int	m_nColumn;
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridRange object

class AFX_EXT_CLASS CMFCGridRange
{
public:
    CMFCGridRange (int nLeft = -1, int nTop = -1, int nRight = -1, int nBottom = -1)
    {
        Set (nLeft, nTop, nRight, nBottom);
    }

	CMFCGridRange (const CMFCGridItemID &id)
	{
        Set (id.m_nColumn, id.m_nRow, id.m_nColumn, id.m_nRow);
	}

	CMFCGridRange (const CMFCGridItemID &id1, const CMFCGridItemID &id2)
	{
        Set (id1, id2);
	}

	CMFCGridRange (const CMFCGridRange &src)
	{
        Set (src);
	}

	void Set (int nLeft, int nTop, int nRight, int nBottom)
	{
		m_nLeft = nLeft; m_nTop = nTop; m_nRight = nRight; m_nBottom = nBottom;
	}

	void Set (const CMFCGridItemID &id1, const CMFCGridItemID &id2)
	{
		ASSERT (id1.m_nColumn >= 0);
		ASSERT (id1.m_nRow >= 0);
		ASSERT (id2.m_nColumn >= 0);
		ASSERT (id2.m_nRow >= 0);

		m_nLeft = min (id1.m_nColumn, id2.m_nColumn);
		m_nTop = min (id1.m_nRow, id2.m_nRow);
		m_nRight = max (id1.m_nColumn, id2.m_nColumn);
		m_nBottom = max (id1.m_nRow, id2.m_nRow);
	}

	void Set (const CMFCGridRange &src)
	{
		m_nLeft = src.m_nLeft;
		m_nTop = src.m_nTop;
		m_nRight = src.m_nRight;
		m_nBottom = src.m_nBottom;
	}

    BOOL IsInRange (int nRow, int nColumn) const
	{
		return (m_nTop <= nRow && m_nBottom >= nRow &&
			m_nLeft <= nColumn && m_nRight >= nColumn);
	}

	BOOL IsInRange (const CMFCGridItemID &id) const
	{
		return IsInRange (id.m_nRow, id.m_nColumn);
	}

    int GetCount () const
	{
		return (m_nBottom - m_nTop + 1) * (m_nRight - m_nLeft + 1);
	}

	BOOL IsEmpty () const
	{
		return !(m_nLeft >= 0 && m_nTop >= 0 && 
				m_nRight >= 0 && m_nBottom >= 0);
	}

	BOOL IsValid () const
	{
		return (m_nLeft >= 0 && m_nTop >= 0 && 
				m_nRight >= m_nLeft && m_nBottom >= m_nTop);
	}

	CMFCGridItemID GetSecondId (const CMFCGridItemID &id) const
	{
		if (!IsValid() || !IsInRange (id))
		{
			CMFCGridItemID id2;
			return id2;
		}

		CMFCGridItemID id2 (
			(id.m_nRow != m_nTop) ? m_nTop : m_nBottom,
			(id.m_nColumn != m_nLeft) ? m_nLeft : m_nRight);
		return id2;
	}

	void Normalize ()
	{
		CMFCGridRange rangeNormalized (
			min (m_nLeft, m_nRight),
			min (m_nBottom, m_nTop),
			max (m_nLeft, m_nRight),
			max (m_nBottom, m_nTop));

		Set (rangeNormalized);
	}

	int operator==(const CMFCGridRange& rhs) const
	{
		return (m_nTop == rhs.m_nTop && m_nBottom == rhs.m_nBottom &&
			m_nLeft == rhs.m_nLeft && m_nRight == rhs.m_nRight);
	}
    
	int operator!=(const CMFCGridRange& rhs) const 
	{
		return !operator==(rhs);
	}

	CMFCGridRange& operator=(const CMFCGridRange &src)
	{
		Set (src);
		return *this;
	}
	
public:
	int	m_nLeft;
	int	m_nTop;
	int	m_nRight;
	int	m_nBottom;
};

#define AFX_GRID_SPARKLINES_CHART_SERIES_NUM	5

/////////////////////////////////////////////////////////////////////////////
// Grid custom colors

struct AFX_EXT_CLASS AFX_GRID_COLOR_DATA
{
	struct AFX_EXT_CLASS ColorData
	{
		COLORREF	m_clrBackground;
		COLORREF	m_clrText;
		COLORREF	m_clrGradient;
		int			m_nGradientAngle;	// 0 - 360
		COLORREF	m_clrBorder;

		void InitColors ()
		{
			m_clrBackground	= (COLORREF)-1;
			m_clrText		= (COLORREF)-1;
			m_clrGradient	= (COLORREF)-1;
			m_nGradientAngle= 90;
			m_clrBorder		= (COLORREF)-1;
		}

		BOOL Draw (CDC* pDC, CRect rect, BOOL bNoBorder = FALSE);
	};

	COLORREF	m_clrBackground;	// Grid background color
	COLORREF	m_clrText;			// Grid foreground color
	COLORREF	m_clrHeader;		// H foreground color

	ColorData	m_EvenColors;		// Even rows color
	ColorData	m_OddColors;		// Odd rows color

	ColorData	m_GroupColors;		// Group colors
	ColorData	m_GroupSelColors;	// Selected group colors

	ColorData	m_SelColors;		// Selected rows color

	ColorData	m_HeaderColors;		// Header item color
	ColorData	m_HeaderSelColors;	// Selected header item color

	ColorData	m_LeftOffsetColors;	// Left offset colors
	
	COLORREF	m_clrHorzLine;		// Grid horizontal line text
	COLORREF	m_clrVertLine;		// Grid vertical line text

	COLORREF	m_clrPreviewText;	// Description text color
};

class AFX_EXT_CLASS CMFCGridColors : public AFX_GRID_COLOR_DATA
{
public:
	CMFCGridColors ()
	{
		m_clrBackground		= (COLORREF)-1;
		m_clrText			= (COLORREF)-1;
		m_clrHeader			= (COLORREF)-1;
		m_EvenColors.InitColors ();
		m_OddColors.InitColors ();

		m_GroupColors.InitColors ();
		m_GroupSelColors.InitColors ();
		m_GroupSelColorsInactive.InitColors();

		m_SelColors.InitColors ();
		m_SelColorsInactive.InitColors();

		m_HeaderColors.InitColors ();
		m_HeaderSelColors.InitColors ();

		m_LeftOffsetColors.InitColors ();

		m_clrHorzLine		= (COLORREF)-1;
		m_clrVertLine		= (COLORREF)-1;

		m_clrPreviewText	= (COLORREF)-1;

		m_DataBarColors.InitColors ();

		for (int i = 0; i < AFX_GRID_SPARKLINES_CHART_SERIES_NUM; i++)
		{
			m_SparklineSeriesColors[i].InitColors();
		}

		m_clrScaleLow = (COLORREF)-1;
		m_clrScaleMid = (COLORREF)-1;
		m_clrScaleHigh = (COLORREF)-1;

		m_bSparklineDefaultSelColor = TRUE;

		m_clrBorder	= (COLORREF)-1;
		m_clrTreeLines = (COLORREF)-1;
	}

	CMFCGridColors (const AFX_GRID_COLOR_DATA& src)
	{
		Copy(src);
	}

	void operator=(const AFX_GRID_COLOR_DATA& src)
	{
		Copy(src);
	}

	void Copy(const AFX_GRID_COLOR_DATA& src)
	{
		(AFX_GRID_COLOR_DATA&)*this = src;
		
		m_SelColorsInactive.InitColors ();
		m_GroupSelColorsInactive.InitColors ();
		m_DataBarColors.InitColors ();
		
		for (int i = 0; i < AFX_GRID_SPARKLINES_CHART_SERIES_NUM; i++)
		{
			m_SparklineSeriesColors[i].InitColors();
		}

		m_clrScaleLow = (COLORREF)-1;
		m_clrScaleMid = (COLORREF)-1;
		m_clrScaleHigh = (COLORREF)-1;

		m_bSparklineDefaultSelColor = TRUE;

		m_clrBorder	= (COLORREF)-1;
		m_clrTreeLines	= src.m_clrVertLine;

//		//m_ScrollBarColors.Reset();
	}

	void FullCopy(const CMFCGridColors& src)
	{
		Copy(src);

		m_SelColorsInactive = src.m_SelColorsInactive;
		m_GroupSelColorsInactive = src.m_GroupSelColorsInactive;
		m_DataBarColors = src.m_DataBarColors;

		for (int i = 0; i < AFX_GRID_SPARKLINES_CHART_SERIES_NUM; i++)
		{
			m_SparklineSeriesColors[i] = src.m_SparklineSeriesColors[i];
		}

		m_bSparklineDefaultSelColor = src.m_bSparklineDefaultSelColor;

		m_clrScaleLow = src.m_clrScaleLow;
		m_clrScaleMid = src.m_clrScaleMid;
		m_clrScaleHigh = src.m_clrScaleHigh;

		m_clrBorder = src.m_clrBorder;
		m_clrTreeLines = src.m_clrTreeLines;

		//m_ScrollBarColors = src.//m_ScrollBarColors;
	}

	ColorData	m_SelColorsInactive;		// Selected rows colors (inactive)
	ColorData	m_GroupSelColorsInactive;	// Selected group colors (inactive)

	ColorData	m_DataBarColors;
	ColorData	m_SparklineSeriesColors[AFX_GRID_SPARKLINES_CHART_SERIES_NUM];
	BOOL		m_bSparklineDefaultSelColor;

	COLORREF	m_clrScaleLow;
	COLORREF	m_clrScaleMid;
	COLORREF	m_clrScaleHigh;

	COLORREF	m_clrBorder;	// Grid border color
	COLORREF	m_clrTreeLines;	// Grid tree lines color

	//SCROLLBAR_COLOR_THEME	//m_ScrollBarColors;
};

/////////////////////////////////////////////////////////////////////////////
// Grid borders

#define GRID_BORDERREF	int

struct GRID_BORDERS
{
	GRID_BORDERREF	top;
	GRID_BORDERREF	bottom;
	GRID_BORDERREF	left;
	GRID_BORDERREF	right;
};

#define GRID_BORDERSTYLE_EMPTY		0
#define GRID_BORDERSTYLE_DEFAULT	1

/////////////////////////////////////////////////////////////////////////////
// Helper struct for Find/Replace feature:

struct AFX_EXT_CLASS AFX_GRID_FINDREPLACE_PARAM 
{
public:
	enum {	FR_SCANORDER_BYROWS = 0,
			FR_SCANORDER_BYCOLS = 0x1, 
			FR_WHOLECELL        = 0x2,
			FR_LOOKIN_LABELS    = 0x10,
			FR_LOOKIN_PREVIEW   = 0x20,
			FR_LOOKIN_MASK      = 0xf0};
	
	enum ScanOrder { ByRows = FR_SCANORDER_BYROWS, 
					 ByColumns = FR_SCANORDER_BYCOLS };

	// Construction:
	AFX_GRID_FINDREPLACE_PARAM (LPCTSTR lpszFnd, LPCTSTR lpszRepl = NULL) : 
		lpszFind (lpszFnd), lpszReplace (lpszRepl), 
		bNext (TRUE), bCase (TRUE), bWholeWord (FALSE),
		bStartWith (FALSE),
		bWholeCell (TRUE), scanOrder (ByRows), nLookIn (FR_LOOKIN_LABELS), dwUserData (0) {}

	// Attributes
	LPCTSTR lpszFind;
	LPCTSTR lpszReplace;
	BOOL bNext;
	BOOL bCase;
	BOOL bWholeWord;

	BOOL bStartWith;
	
	BOOL		bWholeCell;	// TRUE - march entire cell contents
	ScanOrder	scanOrder;	// ByRows or ByColumns
	UINT		nLookIn;	// FR_LOOKIN_LABELS, FR_LOOKIN_PREVIEW
	DWORD_PTR	dwUserData;
};

/////////////////////////////////////////////////////////////////////////////
// Conditional formatting

class AFX_EXT_CLASS CMFCGridDataStateIconset : public CObject
{
public:
	enum ImagePlacementHorz
	{
		ImagePlacementHorzLeft,
		ImagePlacementHorzRight
	};

	CMFCGridDataStateIconset ()
	{
		m_bReverseOrder = FALSE;
		m_Placement = ImagePlacementHorzLeft;
	}
	
	BOOL SetImages (CMFCToolBarImages* pImages, 
					BOOL bReverseOrder = FALSE,
					ImagePlacementHorz placement = ImagePlacementHorzLeft)
	{
		m_bReverseOrder = bReverseOrder;
		m_Placement = placement;

		return (pImages != NULL && pImages->CopyTo (m_StateImages));
	}

	CMFCToolBarImages	m_StateImages;
	BOOL				m_bReverseOrder;
	ImagePlacementHorz	m_Placement;		// ImagePlacementHorzLeft, ImagePlacementHorzRight
};

class AFX_EXT_CLASS CMFCGridDataStateIcons
{
public:
	~CMFCGridDataStateIcons ()
	{
		RemoveAll ();
	}

	void Set (int nColumn, CMFCToolBarImages* pImages, BOOL bReverseOrder, CMFCGridDataStateIconset::ImagePlacementHorz placement);
	CMFCToolBarImages* Get (int nColumn, CMFCGridDataStateIconset** ppInfo = NULL) const;

	void RemoveAll ();

protected:
	CMap <int, int, CMFCGridDataStateIconset*, CMFCGridDataStateIconset* > 
		m_mapStateImages;	// Custom data State Icon Set by column
};

class AFX_EXT_CLASS CMFCGridDataBarColors
{
public:
	~CMFCGridDataBarColors ()
	{
		RemoveAll ();
	}

	void Set (int nColumn, AFX_GRID_COLOR_DATA::ColorData*	pColors);
	AFX_GRID_COLOR_DATA::ColorData* Get (int nColumn) const;

	void RemoveAll ();

protected:
	CMap <int, int, AFX_GRID_COLOR_DATA::ColorData*, AFX_GRID_COLOR_DATA::ColorData* > 
		m_mapDataBarColors;	// Custom Data Bar Colors by column
};


/////////////////////////////////////////////////////////////////////////////
// CMFCGridRow object

class AFX_EXT_CLASS CMFCGridRow : public CMFCBaseAccessibleObject
{
	DECLARE_SERIAL(CMFCGridRow)

	friend class CMFCGridCtrl;
	friend class CMFCGridItem;
	

// Construction
public:
	// Group constructor
	CMFCGridRow (const CString& strGroupName, DWORD_PTR dwData = 0, int nBlockSize = 10);

	// Simple item
	CMFCGridRow (int nColumnsNum = 0, DWORD_PTR dwData = 0, int nBlockSize = 10);

	virtual ~CMFCGridRow();

	enum ClickArea
	{
		ClickExpandBox,
		ClickName,
		ClickValue,
		ClickDescription,
		ClickCheckBox
	};

	enum ValueUpdateState
	{
		VUS_NeedValueUpdate = 0,	// Text of in-place editor needs validating
		VUS_SuccessValueUpdate = 1,	// In-place editor text is already saved in a cell
		VUS_CancelValueUpdate = 2	// Not valid in-place editor text
	};
	
	CMap<LPCTSTR, LPCTSTR, CString, CString> m_key;

// Operations:
public:
	
	

	void AddItem (CMFCGridItem* pItem);
	
	CMFCGridItem* GetItem (int nColumn) const
	{
		if (nColumn >= 0 && nColumn < m_arrRowItems.GetSize ())
		{
			return m_arrRowItems [nColumn];
		}

		return NULL;
	}
	
	int GetItemCount () const
	{
		return (int) m_arrRowItems.GetSize ();
	}

	void SetItemRTC (int nColumn, CRuntimeClass* pRuntimeClass);
	void SetDefaultItemRTC (CRuntimeClass* pRTC);
	
	int GetSubItemsCount (BOOL bRecursive = FALSE) const;
	void GetSubItems (CList<CMFCGridRow*, CMFCGridRow*>& lst, BOOL bRecursive = FALSE);
	void AllowSubItems (BOOL bGroup = TRUE);
	BOOL AddSubItem (CMFCGridRow* pItem, BOOL bRedraw = TRUE);
	BOOL InsertSubItem (CMFCGridRow* pItem, CMFCGridRow* pInsertAfterItem, BOOL bRedraw);
	BOOL HasNonFilteredSubItems() const;
	BOOL HasNextSibling() const;

	void SetCheck(int nState);			// BST_UNCHECKED, BST_CHECKED, BST_INDETERMINATE
	int  GetCheck() const;
	void ToggleCheck();

	void CheckSubItems(BOOL bChecked, BOOL bRecursive = TRUE);
	void UpdateParentCheckbox(BOOL b3State = TRUE);

	CMFCGridRow* HitTest (CPoint point, CMFCGridRow::ClickArea* pnArea = NULL)
	{
		int iColumn = -1;
		CMFCGridItem* pItem = NULL;
		return HitTest (point, iColumn, pItem, pnArea);
	}

	CMFCGridRow* HitTest (CPoint point, int &iColumn, 
		CMFCGridItem*& pItem,
		CMFCGridRow::ClickArea* pnArea = NULL);

	void Expand (BOOL bExpand = TRUE);
	void Redraw ();
	void AdjustButtonRect ();

	BOOL IsParent (CMFCGridRow* pParent) const;
	BOOL IsSubItem (CMFCGridRow* pItem) const;
	CMFCGridRow* FindSubItemByData (DWORD_PTR dwData) const;
	CMFCGridRow* FindSubItemById (int nIndex) const;

	void SetOwnerList (CMFCGridCtrl* pWndList);

	void SetVertAlign (DWORD nAlign);	// AFX_GRID_ITEM_VTOP, AFX_GRID_ITEM_VCENTER or AFX_GRID_ITEM_VBOTTOM

	void Repos (int& y);

protected:
	void Init ();
	void SetFlags ();
	void Shift (int dx, int dy);
	void AddTerminalItem (CList<CMFCGridRow*, CMFCGridRow*>& lstItems);
	void AddGroupedItem (CList<CMFCGridRow*, CMFCGridRow*>& lstItems);
	POSITION InsertAutoGroupBefore (
				CList<CMFCGridRow*, CMFCGridRow*>& lstItems, 
				POSITION& posInsertBefore, POSITION posFirstItemInGroup, int nParentLevel,
				CMFCGridRow* pGroupedItem);
	BOOL IsAutoGroupExpanded (CMFCGridRow* pGroupedItem, int iLevel) const;

	void ExpandDeep (BOOL bExpand = TRUE);

	virtual BOOL IsItemFiltered () const;

	void SetParent(CMFCGridRow* pParent);

// Overrides
public:
	virtual CMFCGridItem* CreateItem (int nRow, int nColumn);
	virtual BOOL CanReplaceItem (int nColumn, CMFCGridItem* pNewItem);
	virtual BOOL ReplaceItem (int nColumn, CMFCGridItem* pNewItem, BOOL bRedraw = TRUE, BOOL bRepos = FALSE);

	virtual void OnItemChanged (CMFCGridItem* pItem, int nRow, int nColumn);

	virtual void OnFillGroupBackground (CDC* pDC, CRect rect, BOOL bGroupUnderline);
	virtual void OnDrawName (CDC* pDC, CRect rect);
	virtual void OnDrawPreview (CDC* pDC, CRect rect);
	virtual void OnDrawExpandBox (CDC* pDC, CRect rectExpand);
	virtual void OnDrawRowMarker (CDC* pDC, CRect rectMarker);
	virtual void OnDrawItems (CDC* pDC, CRect rect);

	virtual void OnPrintName (CDC* pDC, CRect rect);
	virtual void OnPrintItems (CDC* pDC, CRect rectItems);

	virtual int GetHierarchyLevel () const;
	virtual void OnExpand (BOOL /*bExpand*/) {}

	virtual CString FormatItem ();
	virtual CString GetName ();
	virtual void SetName (const CString& /*strName*/) {}

	virtual BOOL OnUpdateValue ();
	virtual BOOL OnEdit (LPPOINT lptClick);
	virtual BOOL OnEndEdit ();

	virtual void OnInplaceEditCancelUpdate();
	virtual BOOL IsInplaceEditNeedUpdate();

	virtual void OnClickButton (CPoint /*point*/) {} // TODO
	virtual BOOL OnClickValue (UINT uiMsg, CPoint point);
	virtual BOOL OnDblClick (CPoint point);

	virtual void OnClickName (CPoint /*point*/) {}
	virtual void OnRClickName (CPoint /*point*/) {}
	virtual void OnRClickValue (CPoint point, BOOL bSelChanged);

	virtual void OnSelectCombo ();
	virtual void OnCloseCombo();

	virtual BOOL PushChar (UINT nChar);

	virtual CString GetNameTooltip ();
	virtual CString GetValueTooltip () { return _T("");} // TODO
	virtual CRect GetNameTooltipRect ();

	virtual void OnPosSizeChanged (CRect /*rectOld*/) {}

	virtual void OnSetSelection (CMFCGridRow* /*pOldSel*/) {}
	virtual void OnKillSelection (CMFCGridRow* /*pNewSel*/) {}

	virtual void Serialize (CArchive& ar);
	virtual void ReadFromArchive(CArchive& ar, BOOL bTestMode = FALSE);
	virtual void WriteToArchive(CArchive& ar);

	virtual BOOL CanSelect () const { return TRUE; };

	virtual BOOL HasCheckBox () const;
	virtual BOOL HasExpandButton () const;

	virtual BOOL SetACCData (CWnd* pParent, CAccessibilityData& data);
	virtual BOOL OnSetAccData (long lVal);
	
	// IAccessible	
	virtual HRESULT get_accParent(IDispatch **ppdispParent);
	virtual HRESULT get_accChildCount(long *pcountChildren);
	virtual HRESULT get_accChild(VARIANT varChild, IDispatch **ppdispChild);
	virtual HRESULT get_accName(VARIANT varChild, BSTR *pszName);
	virtual HRESULT get_accValue(VARIANT varChild, BSTR *pszValue);
	virtual HRESULT get_accDescription(VARIANT varChild, BSTR *pszDescription);
	virtual HRESULT get_accRole(VARIANT varChild, VARIANT *pvarRole);
	virtual HRESULT get_accState(VARIANT varChild, VARIANT *pvarState);
	virtual HRESULT get_accDefaultAction(VARIANT varChild, BSTR *pszDefaultAction);

	virtual HRESULT accLocation(long *pxLeft, long *pyTop, long *pcxWidth, long *pcyHeight, VARIANT varChild);
	virtual HRESULT accHitTest(long xLeft, long yTop, VARIANT *pvarChild);

	virtual void GetPreviewText (CString& str) const;
	virtual void OnMeasureGridRowRect (CRect& rect);
	virtual void OnMeasureGridItemRect (CRect& rect, CMFCGridItem* pItem);

	virtual CRect GetIndentRect(int dx) const;
	virtual CRect GetNameRect(int dx) const;
	virtual CRect GetExpandBoxRect(int dx) const;
	virtual CRect GetCheckBoxRect(int dx) const;

protected:
	virtual HBRUSH OnCtlColor(CDC* pDC, UINT nCtlColor);

	virtual BOOL OnKillFocus (CWnd* pNewWnd);
	virtual BOOL OnEditKillFocus ();

	virtual BOOL HasValueField () const
	{
		return TRUE;
	}

	virtual BOOL IsItemVisible () const;

// Attributes
public:
	DWORD_PTR GetData () const
	{
		return m_dwData;
	}

	void SetData (DWORD_PTR dwData)
	{
		m_dwData = dwData;
	}

	DWORD GetFlags () const
	{
		return m_dwFlags;
	}

	BOOL IsGroup () const
	{
		return m_bGroup;
	}

	BOOL IsExpanded () const
	{
		return m_bExpanded;
	}

	BOOL IsParentExpanded () const;

	void Select (BOOL bSelect = TRUE);
	BOOL IsSelected () const;

	void Enable (BOOL bEnable = TRUE);
	BOOL IsEnabled () const
	{
		return m_bEnabled;
	}
	
	int GetRowId () const
	{
		return m_nIdRow;
	}

	CRect GetRect () const
	{
		return m_Rect;
	}

	CMFCGridRow* GetSubItem (int nIndex) const;

	CMFCGridRow* GetParent () const
	{
		return m_pParent;
	}

	int GetLinesNumber() const
	{
		return m_nLines;
	}

	void SetLinesNumber(int nLines, BOOL bRecalcLayout = FALSE);

	BOOL IsInPlaceEditing () const
	{
		return m_bInPlaceEdit;
	}

	CWnd*				GetInPlaceWnd () const;	// Get pointer to InPlace editing window
	CComboBox*			GetComboWnd () const;	// Get pointer to combobox
	CSpinButtonCtrl*	GetSpinWnd () const;	// Get pointer to spin button

	CMFCGridCtrl* GetOwnerList () const
	{
		return m_pWndList;
	}

public:
	// Data output formats
	static CString	m_strFormatChar;
	static CString	m_strFormatShort;
	static CString	m_strFormatLong;
	static CString	m_strFormatUShort;
	static CString	m_strFormatULong;
	static CString	m_strFormatFloat;
	static CString	m_strFormatDouble;
	// Data input formats
	static CString	m_strScanFormatFloat;
	static CString	m_strScanFormatDouble;

protected:
	CArray<CMFCGridItem*, CMFCGridItem*>	m_arrRowItems;	// Items in this row

	CMFCGridCtrl*	m_pWndList;		// Pointer to the grid window
	DWORD_PTR		m_dwData;		// User-defined data

	CRect			m_Rect;			// Row rectangle (in the grid coordinates)
	
	ValueUpdateState m_vusInPlaceEdit; // VUS_NeedValueUpdate, VUS_SuccessValueUpdate, VUS_CancelValueUpdate

	BOOL			m_bInPlaceEdit;	// Is in InPlace editing mode
	BOOL			m_bGroup;		// Is item group?
	BOOL			m_bExpanded;	// Is item expanded (for groups only)
	BOOL			m_bSelected;	// Is item selected?
	int				m_nChecked;		// Is item checked?
	BOOL			m_bEnabled;		// Is item enabled?
	BOOL			m_bAllowEdit;	// Is item editable?
	DWORD			m_dwFlags;		// Item flags

	BOOL			m_bNameIsTrancated;

	CMFCGridRow*	m_pParent;		// Parent item (NULL for top-level items)
	CList<CMFCGridRow*, CMFCGridRow*>	m_lstSubItems;	// Sub-Items list
	BOOL			m_bDestroySubItems;
	int				m_nMultiLineSubitemsCount;

	int				m_nIdRow;		// Index of this row

	int				m_nLines;		// Lines in row
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridCaptionRow object

class AFX_EXT_CLASS CMFCGridCaptionRow : public CMFCGridRow
{
	DECLARE_SERIAL(CMFCGridCaptionRow)

// Construction
public:
	CMFCGridCaptionRow (const CString& strCaption, DWORD_PTR dwData = 0);

// Operations:
public:
	void	SetCaption (const CString& strCaption, BOOL bRedraw = TRUE);
	CString	GetCaption () const	{ return m_strCaption; }

// Overrides
public:
	virtual void OnDrawName (CDC* pDC, CRect rect);
	virtual void OnPrintName (CDC* pDC, CRect rect);

	virtual BOOL OnEdit (LPPOINT lptClick);
	virtual BOOL PushChar (UINT nChar);

	virtual void ReadFromArchive(CArchive& ar, BOOL bTestMode = FALSE);
	virtual void WriteToArchive(CArchive& ar);

	virtual BOOL CanSelect () const { return FALSE; };
	virtual BOOL HasCheckBox () const { return FALSE; };

	virtual CString GetName () { return GetCaption (); }

	virtual CRect GetIndentRect(int dx) const;
	virtual CRect GetNameRect(int dx) const;
	virtual CRect GetExpandBoxRect(int dx) const;
	virtual CRect GetCheckBoxRect(int dx) const;

// Implementation:
protected:
	CMFCGridCaptionRow ();

// Attributes
protected:
	CString			m_strCaption;
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridItem object

class CMFCGridMergedCells;

class AFX_EXT_CLASS CMFCGridItem : public CMFCBaseAccessibleObject
{
	DECLARE_SERIAL(CMFCGridItem)

	friend class CMFCGridCtrl;
	friend class CMFCGridRow;

// Construction
protected:
	CMFCGridItem ();
	
public:
    UINT m_nStyle;
	CMFCGridItem(const _variant_t& varValue, DWORD_PTR dwData = 0,
		LPCTSTR lpszEditMask = NULL, LPCTSTR lpszEditTemplate = NULL,
		LPCTSTR lpszValidChars = NULL);

// Attributes methods
	const _variant_t& GetValue () const
	{
		return m_varValue;
	}

	BOOL IsEmpty () const
	{
		return m_varValue.vt == VT_EMPTY;
	}

	void SetValue (const _variant_t& varValue, BOOL bRedraw = TRUE);
	void EmptyValue (BOOL bRedraw = TRUE);
	void SetModifiedFlag (BOOL bSet = TRUE)
	{
		m_bIsChanged = bSet;
	}

	virtual const CString& GetLabel ()
	{
		if (m_bIsChanged)
		{
			m_strLabel = FormatItem ();
			m_bIsChanged = FALSE;
		}

		return m_strLabel;
	}

	DWORD_PTR GetData () const
	{
		return m_dwData;
	}

	void SetData (DWORD_PTR dwData)
	{
		m_dwData = dwData;
	}

	DWORD GetFlags () const
	{
		return m_dwFlags;
	}

	
	DWORD GetVertAlign() const
	{
		if ((m_dwFlags & (AFX_GRID_ITEM_VBOTTOM | AFX_GRID_ITEM_VTOP | AFX_GRID_ITEM_VCENTER)) == 0)
		{
			return AFX_GRID_ITEM_VCENTER;
		}

		return m_dwFlags & (AFX_GRID_ITEM_VBOTTOM | AFX_GRID_ITEM_VTOP | AFX_GRID_ITEM_VCENTER);
	}

	void SetVertAlign(DWORD nAlign)	// AFX_GRID_ITEM_VTOP, AFX_GRID_ITEM_VCENTER or AFX_GRID_ITEM_VBOTTOM
	{
		m_dwFlags &= ~(AFX_GRID_ITEM_VBOTTOM | AFX_GRID_ITEM_VTOP | AFX_GRID_ITEM_VCENTER);
		m_dwFlags |= nAlign;
	}

	int GetImage () const
	{
		return m_iImage;
	}

	void SetImage (int iImage, BOOL bRedraw = TRUE);

	void Select (BOOL bSelect = TRUE);
	BOOL IsSelected () const;

	void Enable (BOOL bEnable = TRUE);
	BOOL IsEnabled () const
	{
		return m_bEnabled;
	}

	void AllowEdit (BOOL bAllow = TRUE)
	{
		if (m_varValue.vt == VT_BOOL && bAllow)
		{
			ASSERT (FALSE);
			return;
		}
		m_bAllowEdit = bAllow;
	}
	
	void SetReadOnly (BOOL bReadOnly)
	{
		m_bReadOnly = bReadOnly;
	}

	BOOL IsReadOnly () const
	{
		return m_bReadOnly;
	}

	BOOL IsAllowEdit () const
	{
		return m_bAllowEdit;
	}

	CRect GetRect () const
	{
		return m_Rect;
	}

	CRect GetButtonRect () const
	{
		return m_rectButton;
	}

	BOOL IsInPlaceEditing () const
	{
		return m_bInPlaceEdit;
	}

	CWnd* GetInPlaceWnd () const
	{
		return IsInPlaceEditing () ? m_pWndInPlace : NULL;
	}
	
	CMFCGridItemID GetGridItemID () const
	{
		CMFCGridItemID id (m_pGridRow != NULL ? m_pGridRow->GetRowId () : -1,
							m_nIdColumn);
		return id;
	}
	
	int GetColumnId () const
	{
		return m_nIdColumn;
	}

	CMFCGridRow* GetParentRow () const
	{
		return m_pGridRow;
	}

	COLORREF GetBackgroundColor () const	// -1 - default value
	{
		return m_clrBackground;
	}

	COLORREF GetTextColor () const			// -1 - default value
	{
		return m_clrText;
	}

	void SetBackgroundColor (COLORREF color, BOOL bRedraw = TRUE);
	void SetTextColor (COLORREF color, BOOL bRedraw = TRUE);

	BOOL IsMultiline () const
	{
		return ((m_dwFlags & AFX_GRID_ITEM_MULTILINE) != 0);
	}
	
	void SetMultiline (BOOL bMultiline)
	{
		if (bMultiline)
		{
			m_dwFlags |= AFX_GRID_ITEM_MULTILINE | AFX_GRID_ITEM_WORDWRAP;
		}
		else
		{
			m_dwFlags &= ~(AFX_GRID_ITEM_MULTILINE | AFX_GRID_ITEM_WORDWRAP);
		}
	}

	BOOL IsWordWrap () const;

	CMFCGridCtrl* GetOwnerList () const
	{
		return (m_pGridRow != NULL) ? m_pGridRow->m_pWndList : NULL;
	}

// Operations methods
public:
	BOOL AddOption (LPCTSTR lpszOption, BOOL bInsertUnique = TRUE, DWORD_PTR dwData = 0);
	void RemoveAllOptions ();

	int GetOptionCount () const;
	
	LPCTSTR GetOption (int nIndex) const;
	DWORD_PTR GetOptionData(int nIndex) const;

	CMFCGridItem* HitTest (CPoint point, CMFCGridRow::ClickArea* pnArea = NULL);

	void Redraw ();

	void EnableSpinControl (BOOL bEnable = TRUE, int nMin = 0, int nMax = 0);

	// Conditional formatting methods:
	void SetDataBar (int nPercentage);
	void SetDataColorScale (int nPercentage);
	void SetDataIcon(int nPercentage);

// Implementation
public:
	virtual ~CMFCGridItem();

protected:
	virtual void Init ();
	virtual void SetFlags ();
	void SetOwnerRow (CMFCGridRow* pRow);

// Overrides
public:
	virtual int GetAlign () const;
	virtual void OnDrawValue (CDC* pDC, CRect rect);
	virtual void OnDrawIcon (CDC* pDC, CRect& rect);
	virtual void OnDrawStateIcon (CDC* pDC, CRect& rect);
	virtual COLORREF OnFillBackground (CDC* pDC, CRect rect);
	virtual void OnDrawButton (CDC* pDC, CRect rectButton);
	virtual void OnDrawBorders (CDC* pDC, CRect rect);
	virtual void OnDrawDataColorScale (CDC* pDC, CRect rect);
	virtual void OnDrawDataBar (CDC* pDC, CRect rect);

	virtual void OnPrintValue (CDC* pDC, CRect rect);
	virtual void OnPrintBorders (CDC* pDC, CRect rect);

	virtual	BOOL GetLabelBoundsRect (CDC* pDC, CRect& rect, BOOL bIncludeImage);

	virtual BOOL OnCreate (int /* nRow */, int /* nColumn */)	{	return TRUE;	}

	virtual CString FormatItem ();

	virtual BOOL OnUpdateValue ();
	virtual void SetItemChanged ();
	virtual BOOL OnEdit (LPPOINT lptClick);
	virtual CWnd* CreateInPlaceEdit (CRect rectEdit, BOOL& bDefaultFormat);
	virtual void SetInPlaceEditFont ();
	virtual void SetComboFont ();
	virtual CSpinButtonCtrl* CreateSpinControl (CRect rectSpin);

	virtual BOOL OnEndEdit ();

	virtual void OnBeginInplaceEdit ();
	virtual void OnEndInplaceEdit ();

	virtual void DoClickButton (CPoint point);

	virtual void OnClickButton (CPoint point);
	virtual BOOL OnClickValue (UINT uiMsg, CPoint point);
	virtual BOOL OnDblClick (CPoint point);

	virtual void OnSelectCombo ();
	virtual void OnCloseCombo();

	virtual BOOL OnSetCursor () const;
	virtual BOOL PushChar (UINT nChar);

	virtual CString GetValueTooltip ();
	virtual	CRect GetTooltipRect () const;

	virtual void OnRClickValue (CPoint /*point*/, BOOL /*bSelChanged*/) {}

	virtual void OnPosSizeChanged (CRect rectOld);

	virtual void OnSetSelection (CMFCGridItem* /*pOldSel*/) {}
	virtual void OnKillSelection (CMFCGridItem* /*pNewSel*/) {}

	virtual void AdjustButtonRect ();
	virtual void AdjustInPlaceEditRect (CRect& rectEdit, CRect& rectSpin);

	virtual void Merge (CMFCGridMergedCells* pMergedRange);
	virtual CMFCGridMergedCells* GetMergedCells ();
	virtual CRect GetMergedRect ();
	virtual BOOL GetMergedRange (CMFCGridRange& range);
	virtual CMFCGridItem* GetMergedMainItem () const;
	virtual void ReposMergedItem ();

	virtual void OnGetBorders (GRID_BORDERS& borders);
	virtual void OnGetBorders (CRect& rect);

	virtual BOOL HasButton () const;
	
	virtual BOOL HasValueField () const
	{
		return TRUE;
	}
	
	virtual BOOL TextToVar (const CString& strText);
	
	virtual BOOL CanUpdateData () const;

	virtual void Serialize (CArchive& ar);
	virtual BOOL ReadFromArchive(CArchive& ar, BOOL bTestMode = FALSE);
	virtual void WriteToArchive(CArchive& ar);

	virtual BOOL ClearContent (BOOL bRedraw = TRUE);
	virtual BOOL ChangeType (const _variant_t& var);

	virtual CString ExportToHTML(DWORD dwFlags);

	virtual BOOL SetACCData (CWnd* pParent, CAccessibilityData& data);
	
	// IAccessible	
	virtual HRESULT get_accParent(IDispatch **ppdispParent);
	virtual HRESULT get_accChildCount(long *pcountChildren);
	virtual HRESULT get_accName(VARIANT varChild, BSTR *pszName);
	virtual HRESULT get_accValue(VARIANT varChild, BSTR *pszValue);
	virtual HRESULT get_accRole(VARIANT varChild, VARIANT *pvarRole);
	virtual HRESULT get_accState(VARIANT varChild, VARIANT *pvarState);

	virtual HRESULT accLocation(long *pxLeft, long *pyTop, long *pcxWidth, long *pcyHeight, VARIANT varChild);
	virtual HRESULT accHitTest(long xLeft, long yTop, VARIANT *pvarChild);

	virtual void OnAfterChangeGridColors() {}

protected:
	virtual HBRUSH OnCtlColor(CDC* pDC, UINT nCtlColor);
	virtual CComboBox* CreateCombo (CWnd* pWndParent, CRect rect);
	virtual CEdit* NewInPlaceEdit ();
	virtual void OnDestroyWindow ();

	virtual BOOL OnKillFocus (CWnd* /*pNewWnd*/)
	{
		return TRUE;
	}

	virtual BOOL OnEditKillFocus ()
	{
		return TRUE;
	}

	virtual BOOL IsChangeSelectedBackground() const
	{
		return TRUE;
	}

	virtual BOOL IsPushButton() const
	{
		return FALSE;
	}

// Attributes
protected:
	_variant_t		m_varValue;		// Item value
	CString			m_strLabel;		// Text, representing the item value
	BOOL			m_bIsChanged;
	CMFCGridRow*	m_pGridRow;		// Pointer to the grid row
	DWORD_PTR		m_dwData;		// User-defined data
	CString			m_strEditMask;	// Item edit mask (see CMFCMaskedEdit for description)
	CString			m_strEditTempl;	// Item edit template (see CMFCMaskedEdit for description)
	CString			m_strValidChars;// Item edit valid chars (see CMFCMaskedEdit for description)

	CStringList		m_lstOptions;	// List of combobox items
	CList<DWORD_PTR, DWORD_PTR>	m_lstOptionsData;
	CSize			m_sizeCombo;	// Dimension of listbox	(400)

	BOOL			m_bInPlaceEdit;	// Is in InPlace editing mode

	CWnd*			m_pWndInPlace;	// Pointer to InPlace editing window
	CComboBox*		m_pWndCombo;	// Pointer to combobox
	CSpinButtonCtrl*	m_pWndSpin;		// Pointer to spin button

	CRect			m_Rect;			// Item rectangle (in the grid coordinates)
	CRect			m_rectButton;	// Drop down/open button rectangle
	BOOL			m_bButtonIsDown;// Is button pressed?
	
	BOOL			m_bSelected;	// Is item selected?
	BOOL			m_bEnabled;		// Is item enabled?
	BOOL			m_bAllowEdit;	// Is item editable?
	BOOL			m_bReadOnly;
	DWORD			m_dwFlags;		// Item flags

	BOOL			m_bValueIsTrancated;

	int				m_nMinValue;
	int				m_nMaxValue;

	int				m_nIdColumn;	// Index of this column

	COLORREF		m_clrBackground;// Custom item background color
	COLORREF		m_clrText;		// Custom item foreground color

	int				m_iImage;		// Image index

	CMFCGridMergedCells* m_pMerged;// Nonzero, if item is merged with others

	int									m_nDataBarPerc;	// 0-100; -1 if disabled
	int									m_nDataColorScalePerc;// 0-100; -1 if disabled
	int									m_nDataIconPerc;
};


/////////////////////////////////////////////////////////////////////////////
// CMFCGridColorItem object

class AFX_EXT_CLASS CMFCGridColorItem : public CMFCGridItem
{
	friend class CMFCGridCtrl;
	friend class CMFCGridRow;

	DECLARE_SERIAL(CMFCGridColorItem)

// Construction
protected:
	CMFCGridColorItem ();

public:
	CMFCGridColorItem(const COLORREF& color, 
		CPalette* pPalette = NULL, DWORD_PTR dwData = 0);
	virtual ~CMFCGridColorItem();

// Overrides
public:
	virtual void OnDrawValue (CDC* pDC, CRect rect);
	virtual void OnPrintValue (CDC* pDC, CRect rect);
	
	virtual void OnClickButton (CPoint point);
	virtual BOOL OnEdit (LPPOINT lptClick);
	virtual BOOL OnUpdateValue ();
	virtual CString FormatItem ();

	virtual	CRect GetTooltipRect () const;

	virtual BOOL ReadFromArchive(CArchive& ar, BOOL bTestMode = FALSE);
	virtual void WriteToArchive(CArchive& ar);

	virtual BOOL ClearContent (BOOL bRedraw = TRUE);

protected:
	virtual BOOL OnKillFocus (CWnd* pNewWnd)
	{
		return pNewWnd->GetSafeHwnd () != m_pPopup->GetSafeHwnd ();
	}

	virtual BOOL OnEditKillFocus ()
	{
		return m_pPopup == NULL;
	}

	virtual void AdjustInPlaceEditRect (CRect& rectEdit, CRect& rectSpin);

// Attributes
public:
	COLORREF GetColor () const
	{
		return m_Color;
	}

	void SetColor (COLORREF color);

	// Color popup attributes:
	void EnableAutomaticButton (LPCTSTR lpszLabel, COLORREF colorAutomatic, BOOL bEnable = TRUE);
	void EnableOtherButton (LPCTSTR lpszLabel, BOOL bAltColorDlg = TRUE, BOOL bEnable = TRUE);
	void SetColumnsNumber (int nColumnsNumber);

// Attributes
protected:
	COLORREF					m_Color;			// Color value
	COLORREF					m_ColorAutomatic;	// Automatic (default) color value
	CString						m_strAutoColor;		// Atomatic color label
	BOOL						m_bStdColorDlg;		// Use standard Windows color dialog
	CString						m_strOtherColor;	// Alternative color label
	CMFCColorPopupMenu*				m_pPopup;
	CArray<COLORREF, COLORREF>	m_Colors;
	int							m_nColumnsNumber;	// Number of columns in dropped-down colors list
	BOOL						m_bIsPainting;
};


/////////////////////////////////////////////////////////////////////////////
// CMFCGridDateTimeItem object

class AFX_EXT_CLASS CMFCGridDateTimeItem : public CMFCGridItem
{
	DECLARE_SERIAL(CMFCGridDateTimeItem)

// Construction
protected:
	CMFCGridDateTimeItem ();

public:
	CMFCGridDateTimeItem(const COleDateTime& date, DWORD_PTR dwData = 0,
		UINT nFlags = CMFCDateTimeCtrl::DTM_DATE | CMFCDateTimeCtrl::DTM_TIME);

	virtual ~CMFCGridDateTimeItem();

// Overrides
public:
	virtual void OnDrawValue (CDC* pDC, CRect rect);
	virtual CWnd* CreateInPlaceEdit (CRect rectEdit, BOOL& bDefaultFormat);
	virtual BOOL OnUpdateValue ();
	virtual CString FormatItem ();

	virtual void OnSetSelection (CMFCGridItem* pOldSel);
	virtual void OnKillSelection (CMFCGridItem* pNewSel);

	virtual BOOL PushChar (UINT nChar);

	virtual void AdjustInPlaceEditRect (CRect& rectEdit, CRect& rectSpin);

	virtual BOOL ReadFromArchive(CArchive& ar, BOOL bTestMode = FALSE);
	virtual void WriteToArchive(CArchive& ar);

// Attributes
public:
	void SetDate (COleDateTime date);
	void SetDateTime (const COleDateTime& date, DWORD_PTR dwData = 0,
		UINT nFlags = CMFCDateTimeCtrl::DTM_DATE | CMFCDateTimeCtrl::DTM_TIME,
		BOOL bRedraw = TRUE);
	COleDateTime GetDate () const
	{
		return (COleDateTime) (DATE) m_varValue;
	}

protected:
	UINT m_nFlags;

	void SetState (CMFCDateTimeCtrl& wnd);
};



/////////////////////////////////////////////////////////////////////////////
// CMFCGridCheckItem object

class AFX_EXT_CLASS CMFCGridCheckItem : public CMFCGridItem
{
	DECLARE_SERIAL(CMFCGridCheckItem)

// Construction
protected:
	CMFCGridCheckItem ();

public:
	CMFCGridCheckItem(bool bVal, DWORD_PTR dwData = 0);
	virtual ~CMFCGridCheckItem();

	void SetLabel(const CString& strLabel);
	const CString& GetLabel() const
	{
		return m_strCheckLabel;
	}

	enum CheckBoxStates
	{
		UnChecked     = 0, // BST_UNCHECKED
		Checked       = 1, // BST_CHECKED
		Indeterminate = 2, // BST_INDETERMINATE
	};

	void SetState(int nState, BOOL bRedraw = TRUE);
	int GetState() const;

	void Enable3StateCheckBox(BOOL bEnable = TRUE);
	BOOL Is3StateCheckBoxEnabled () const
	{
		return m_b3State;
	}

	BOOL Toggle ();

// Overrides
public:
	virtual void OnDrawValue (CDC* pDC, CRect rect);
	virtual void OnPrintValue (CDC* pDC, CRect rect);
	virtual BOOL PushChar (UINT nChar);
	virtual const CString& GetLabel ()	{	return m_strCheckLabel;	}
	virtual CString FormatItem ()	{	return _T("");	}
	virtual CString GetValueTooltip ();
	virtual	CRect GetTooltipRect () const;
	virtual BOOL OnClickValue (UINT uiMsg, CPoint point);
	virtual BOOL OnDblClick (CPoint point);

	virtual BOOL IsPushButton() const
	{
		return TRUE;
	}

	virtual BOOL ReadFromArchive(CArchive& ar, BOOL bTestMode = FALSE);
	virtual void WriteToArchive(CArchive& ar);

	virtual HRESULT get_accName(VARIANT varChild, BSTR *pszName);
	virtual HRESULT get_accRole(VARIANT varChild, VARIANT *pvarRole);
	virtual HRESULT get_accState(VARIANT varChild, VARIANT *pvarState);
	virtual HRESULT get_accDefaultAction(VARIANT varChild, BSTR *pszDefaultAction);
	virtual HRESULT accDoDefaultAction(VARIANT varChild);

protected:
	CString	m_strCheckLabel;
	BOOL	m_b3State;
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridURLItem object

class AFX_EXT_CLASS CMFCGridURLItem : public CMFCGridItem
{
	DECLARE_DYNCREATE(CMFCGridURLItem)

// Construction
protected:
	CMFCGridURLItem ();

public:
	CMFCGridURLItem(CString str, CString strURL, DWORD_PTR dwData = 0);
	virtual ~CMFCGridURLItem();

// Attributes:
public:
	CString GetURL () const
	{
		return m_strURL;
	}

	void SetURL (LPCTSTR lpszURL)
	{
		ASSERT (lpszURL != NULL);
		m_strURL = lpszURL;
	}

protected:
	CString m_strURL;

// Overrides
public:
	virtual void OnDrawValue (CDC* pDC, CRect rect);
	virtual BOOL OnSetCursor () const;
	virtual BOOL OnClickValue (UINT uiMsg, CPoint point);
	virtual BOOL OnEdit (LPPOINT lptClick);
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridPopupDlgItem object

class AFX_EXT_CLASS CMFCGridPopupDlgItem : public CMFCGridItem
{
	DECLARE_DYNCREATE(CMFCGridPopupDlgItem)
		
	friend class CMFCParentGridItemPtr;

	// Construction
protected:
	CMFCGridPopupDlgItem ();
	
public:
	CMFCGridPopupDlgItem(CString str, CRuntimeClass* pRTI, UINT nIDTemplate, BOOL bIsResizable = FALSE, BOOL bIsRightAligned = FALSE);

	CMFCGridPopupDlgItem(const _variant_t& varValue, DWORD_PTR dwData = 0,
		LPCTSTR lpszEditMask = NULL, LPCTSTR lpszEditTemplate = NULL,
		LPCTSTR lpszValidChars = NULL);

	virtual ~CMFCGridPopupDlgItem();

	// Operations methods
public:
	void EnablePopupDialog(CRuntimeClass* pRTI, UINT nIDTemplate, BOOL bIsResizable = FALSE, BOOL bIsRightAligned = FALSE);

	virtual BOOL CreatePopupDlg(CRect rectEdit);
	
	virtual void OnBeforeShowPopupDlg(CDialogEx* pDlg) 
	{
		UNREFERENCED_PARAMETER(pDlg);
	}

	virtual void ClosePopupDlg(LPCTSTR lpszEditValue, BOOL bOK, DWORD_PTR dwUserData = 0);

	// Overrides
	virtual void OnClickButton (CPoint point);

protected:
	virtual CComboBox* CreateCombo (CWnd*, CRect) { return NULL; }

	// Attributes
protected:
	CRuntimeClass*	m_pPopupDlgRTI;
	LPCTSTR			m_lpszPopupDlgTemplateName;
	UINT			m_nPopupDialogIDTemplate;
	BOOL			m_bPopupDlgIsResizable;
	BOOL			m_bPopupDlgIsRightAligned;

	CDialogEx*	m_pPopupDlg;
};

/////////////////////////////////////////////////////////////////////////////
// Helper classes for Filter Bar feature:

struct AFX_EXT_CLASS AFX_GRID_FILTER_PARAM
{
	// Construction
	AFX_GRID_FILTER_PARAM () : nColumn (-1) {}
	AFX_GRID_FILTER_PARAM (int nCol, const CString& str) : nColumn (nCol), strFilter (str) {}
	AFX_GRID_FILTER_PARAM (const AFX_GRID_FILTER_PARAM& src)
	{
		Copy (src);
	}
	
	void Copy (const AFX_GRID_FILTER_PARAM& src);
	BOOL IsEmpty () const;
	
	// Attributes
	int			nColumn;	// Column index
	CString		strFilter;	// Filter string text
};

struct AFX_EXT_CLASS AFX_GRID_FILTERBAR_PARAM
{
	// Construction
	AFX_GRID_FILTERBAR_PARAM (BOOL bCaseSensitive = FALSE) : bNoCase (!bCaseSensitive) {}
	void Clear ();
	
	// Attributes
	BOOL	bNoCase;
	CList<AFX_GRID_FILTER_PARAM, AFX_GRID_FILTER_PARAM&> lstFilter;
};

class CMFCGridCtrl;

class AFX_EXT_CLASS CMFCGridFilterEdit : public CMFCEditBrowseCtrl
{
	DECLARE_DYNAMIC(CMFCGridFilterEdit)

// Construction
public:
	CMFCGridFilterEdit (CMFCGridCtrl* pGrid = NULL, int nColumn = -1);

// Attributes
protected:
	CMFCGridCtrl*	m_pOwnerGrid;
	int				m_nColumnId;

	// Generated message map functions
protected:
	//{{AFX_MSG(CMFCGridFilterEdit)
	afx_msg BOOL OnChange();
 	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridMergedCells object

class AFX_EXT_CLASS CMFCGridMergedCells : public CObject
{
// Construction:
public:
	CMFCGridMergedCells (BOOL bAutoDelete = TRUE);
	virtual ~CMFCGridMergedCells ();

// Operations:
public:
	const CMFCGridItemID GetMainItemID () const;
	const CMFCGridItemID GetVisibleItemID () const;

	void SetRect (const CRect& rect);
	void SetRectEmpty ();
	void SetRange (const CMFCGridRange& r);

	CRect&			GetRect ();
	const CRect&	GetRect () const;
	CMFCGridRange&			GetRange ();
	const CMFCGridRange&	GetRange () const;

	void MarkChanged (const CRect& rectNew, const CMFCGridItemID& id);
	void MarkUpdated ();

	BOOL IsChanged () const
	{
		return m_bChanged;
	}

	void SetNeedRedraw (BOOL bNeedRedraw)
	{
		m_bNeedRedraw = bNeedRedraw;
	}

	BOOL IsNeedRedraw () const
	{
		return m_bNeedRedraw;
	}

	void AddRef ();
	void Release ();
	void SetAutoDelete (BOOL bAutoDelete);

// Attributes:
protected:
	CRect	m_rectMerged;	// Position in pixels of the merged cell
	CMFCGridRange	m_range;// Range boundaries
	CMFCGridItemID	m_idFirstVisible; // the first visible item of the merged cell
	BOOL	m_bChanged;		// TRUE, if range should be repositioned
	BOOL	m_bNeedRedraw;	// FALSE, if merged item is already painted

	int		m_nRefCount;
	BOOL	m_bAutoDelete;
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridHeaderParams object

class AFX_EXT_CLASS CMFCGridHeaderParams
{
public:
	CMFCGridHeaderParams ();
	~CMFCGridHeaderParams ();

	enum HeaderPart
	{
		HeaderTop = 1,		// Header
		HeaderLeft = 2,		// Row header
		HeaderTopLeft = 3	// "Select all" area
	};

	enum HeaderItemState
	{
		Normal = 1,
		Hot = 2,	// Item is hovered by mouse
		Pressed = 3	// Item is pressed
	};

	enum HeaderItemSelected
	{
		NotSelected = 0,
		Selected = 1,
		AllSelected = 2	// Whole row or whole column or whole grid is selected
	};

public:
	// functions:
	BOOL IsHighlighted () const
	{
		return (m_nItemState == Hot);
	}

	BOOL IsPressed () const
	{
		return (m_nItemState == Pressed);
	}

	BOOL IsSelected () const
	{
		return (m_nItemSelected == Selected);
	}

public:
	int m_nHeaderPart;  // HeaderTop, HeaderLeft or HeaderTopLeft
	int m_nItemState;   // Normal, Hot or Pressed
	int m_nItemSelected;// NotSelected, Selected or AllSelected

	CRect m_rect;		// Bounding rectangle
	CRect m_rectInnerBorders;// Left, top, right and bottom border's size
	CRect m_rectOuterBorders;// Left, top, right and bottom border's size

	// Header params: used when Header (m_nHeaderPart is HeaderTop)
	int m_nColumn;		// Column index, must be 0 if not used

	// Row header params: used when Row header (m_nHeaderPart is HeaderLeft)
	CMFCGridRow* m_pRow; // Pointer to the grid row or NULL if not used

	DWORD_PTR	m_dwData;	// Reserved for custom data
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridColumnsItem object

class AFX_EXT_CLASS CMFCGridColumnsItem : public CObject
{
	friend class CMFCGridColumnsInfo;

public:
	CMFCGridColumnsItem (LPCTSTR lpszColumn, int nWidth, int iImage = -1, BOOL bHideNameWithImage = TRUE)
		: m_bFixedSize (TRUE), m_nDefaultSize (nWidth), m_strName (lpszColumn),
		m_bHideName (bHideNameWithImage && iImage != -1),
		m_nAlignment (HDF_LEFT), m_nHeaderAlignment (HDF_LEFT),
		m_bVisible (TRUE), m_iImage (iImage), 
		m_bLocked (FALSE), m_bText (TRUE), m_bHeaderMultiLine (FALSE), m_bNameIsTrancated (FALSE),
		m_dwData (0),
		m_nAutoSize (0), m_pFilterBarCtrl (NULL), m_nFmt(0), m_pEditCtrl(NULL), m_nEditCtrlType(-1)

	{
	}
	virtual ~CMFCGridColumnsItem ();

	// Attributes:
	BOOL		m_bFixedSize;	// 1 - specific width, 0 - best fit
	int			m_nDefaultSize;	// Default width for each column
	CString		m_strName;		// Name for each column
	BOOL		m_bHideName;	// Do not show column name in the header
	int			m_nAlignment;	// HDF_LEFT - Left, HDF_RIGHT - Right, HDF_CENTER - Center, 
	int			m_nHeaderAlignment; // HDF_LEFT - Left, HDF_RIGHT - Right, HDF_CENTER - Center, 
	BOOL		m_bVisible;		// Is this column visible?
	int			m_iImage;		// Index for an image from an image list, -1 - no image
	BOOL		m_bLocked;		// Is width for this column locked? (locked for icons etc)
	BOOL		m_bText;		// Does column have text content (false for icons etc)
	BOOL		m_bHeaderMultiLine;	// FALSE - single line, TRUE - swap text and new line on '\n'
	BOOL		m_bNameIsTrancated;
	DWORD_PTR	m_dwData;		// User-defined data
	UINT		m_nFmt;
	UINT		m_nEditCtrlType;
	CWnd*		m_pEditCtrl;

protected:
	int		m_nAutoSize;	// calculated value

	CWnd*	m_pFilterBarCtrl;	// Filter editor for the column
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridColumnsInfo object

class AFX_EXT_CLASS CMFCGridColumnsInfo : public CObject
{
	friend class CMFCGridRow;
	friend class CMFCGridCtrl;
	friend class CMFCGridColumnListBox;
	friend class CMFCDBGridCtrl;
	friend class CMFCHeaderItemDragWnd;

public:
	enum ClickArea
	{
		ClickHeader,
		ClickDivider,
		ClickHeaderButton,
		ClickCheckBox
	};

public:
	// Operations methods:
	int  InsertColumn (int nPos, LPCTSTR lpszColumn, int nWidth, int iImage = -1, BOOL bHideNameWithImage = TRUE);
	BOOL DeleteColumn (int nPos);

	void InsertColumns (int nColumnsNum, int nDefaultWidth = 10);
	void DeleteAllColumns ();

	void Resize (int nTotalWidth, int nStartColumn = -1);
	BOOL ResizeColumn (int nColumn, int nWidth);
	BOOL OnChangeColumnWidth (int nColumn, int &nWidth) const;
	BOOL GetColumnWidthMinMax (int nColumn, int& nMin, int& nMax) const;

	void SetOwnerList (CMFCGridCtrl* pWndList);
	
	// Attributes methods:
	int GetColumnCount (BOOL bCalcVisibleOnly = FALSE) const;
	int GetItemCount() const { return GetColumnCount();  }

	int GetTotalWidth () const
	{
		return m_nTotalWidth;
	}

	int  GetColumnWidth (int nColumn) const;
	BOOL SetColumnWidth (int nColumn, int nWidth);
	int  GetColumnStyle(int nColumn) const;
	void SetColumnStyle(int nColumn, UINT nFmt);

	LPCTSTR GetColumnName (int nColumn) const;
	BOOL SetColumnName (int nColumn, LPCTSTR lpszColumn);

 	BOOL GetColumnTextHidden (int nColumn) const;
 	BOOL SetColumnTextHidden (int nColumn, BOOL bHideTextInHeader);

	int  GetColumnAlign (int nColumn) const;
	BOOL SetColumnAlign (int nColumn, int nAlign);

	int  GetHeaderAlign (int nColumn) const;
	BOOL SetHeaderAlign (int nColumn, int nAlign);

	BOOL GetHeaderMultiLine (int nColumn) const;
	BOOL SetHeaderMultiLine (int nColumn, BOOL bMultiLine);

	BOOL GetColumnNameTrancated (int nColumn) const;
	BOOL SetColumnNameTrancated (int nColumn, BOOL bIsTrancated);

	int  GetColumnImage (int nColumn) const;
	BOOL SetColumnImage (int nColumn, int nImage);

	BOOL GetColumnLocked (int nColumn) const;
	BOOL SetColumnLocked (int nColumn, BOOL bLocked);

	BOOL GetColumnWidthAutoSize (int nColumn) const;
	BOOL SetColumnWidthAutoSize (int nColumn, BOOL bBestFit); // bBestFit - TRUE, width is calculated
	
	BOOL GetColumnVisible (int nColumn) const;
	BOOL SetColumnVisible (int nColumn, BOOL bVisible);

	DWORD_PTR GetColumnData (int nColumn) const;
	BOOL SetColumnData (int nColumn, DWORD_PTR dwData);

	BOOL CanChangeWidth (int nColumn) const; // can't change width for icons etc
	int GetMinWidth (int nColumn) const;

	void GetColumnRect (int nColumn, CRect& rect) const;
	int HitTestColumn (CPoint point, BOOL bDelimiter = FALSE, int nDelta = 0,
		CMFCGridColumnsInfo::ClickArea* pnArea = NULL) const;

	

	//-----------
	// Check box:
	//-----------
	void EnableCheckBox (BOOL bEnable = TRUE);

	BOOL IsCheckBoxEnabled () const
	{
		return m_bCheckBox;
	}

	void SetCheckBoxState (int nState);	// BST_UNCHECKED, BST_CHECKED, BST_INDETERMINATE

	int GetCheckBoxState () const
	{
		return m_nCheckBoxState;
	}

	// ---------
	// Resizing:
	// ---------
	void EnableAutoSize (BOOL bEnable = TRUE);

	BOOL IsAutoSize () const
	{
		return m_bAutoSize;
	}

	// --------
	// Sorting:
	// --------
	int GetSortColumnCount () const;

	void SetSortColumn (int nColumn, BOOL bAscening = TRUE, BOOL bAdd = FALSE);
	BOOL RemoveSortColumn (int nColumn);
	void RemoveAllSortColumns ();

	int GetSortColumn () const;
	int GetColumnState (int nColumn) const;
		// Returns: 0 - not not sorted, -1 - descending, 1 - ascending

	void EnableMultipleSort (BOOL bEnable = TRUE);
	
	BOOL IsMultipleSort () const
	{
		ASSERT (m_bMultipleSort || GetSortColumnCount () <= 1);
		return m_bMultipleSort;
	}

	void SetColumnSortingPriority (LPINT piArray, int iCount);
	const int* GetColumnSortingPriority (int& nCount) const;

	// ---------
	// Grouping:
	// ---------
	int GetGroupColumnCount () const;

	int InsertGroupColumn (int nPos, int nColumn);
	BOOL RemoveGroupColumn (int nPos);
	BOOL RemoveGroupColumnByVal (int nColumn);
	int GetGroupColumn (int nPos) const;
	int GetGroupColumnPos (int nColumn);

	BOOL IsGroupColumn (int nColumn) const;

	int GetGroupingColumnOrderArray (LPINT piArray, int iCount = -1) const;

	// --------------
	// Columns order:
	// --------------
	BOOL SetColumnOrderArray (int iCount, LPINT piArray);
	int GetColumnOrderArray (LPINT piArray, int iCount = -1) const;

	BOOL ChangeColumnOrder (int nNewPos, int nColumn);

	int IndexToOrder (int nColumn) const;
	int OrderToIndex (int nPosition) const;

	int GetFirstVisibleColumn () const;
	int GetLastVisibleColumn () const;
	
	// Implementation:
	CMFCGridColumnsInfo ();
	virtual ~CMFCGridColumnsInfo ();

	virtual void DrawColumn (CDC* pDC, int nColumn, CRect rect,
		int nTextMargin = 5, int nArrowMargin = 5, BOOL bIsPrinting = FALSE,
		BOOL bNoSortArrow = FALSE,
		BOOL bIsGroupBox = FALSE);
	virtual void PrintColumn (CDC* pDC, int nColumn, CRect rectItem, CRect rectClipItem);

	virtual void GetHeaderTooltip (int nColumn, CPoint pt, CString& strText) const;

	void SetHighlightColumn (int nColumn);
	int GetHighlightColumn () const;
	void SetHighlightColumnBtn (int nColumn);
	int GetHighlightColumnBtn () const;

	BOOL IsTextColumn (int nColumn) const;
	BOOL SetTextColumn (int nColumn, BOOL bText);
	int GetLeftTextOffset () const;

	// ---------------
	// Freeze columns:
	// ---------------
	void EnableFreezeColumns (int nColumnCount);	// Add nonscrollable area

	BOOL IsFreezeColumnsEnabled () const
	{
		return (m_nFreezeColumns > 0);
	}

	int GetFrozenColumnCount () const
	{
		return m_nFreezeColumns;
	}

	BOOL IsColumnFrozen (int nColumn) const;
	void RecalcFreezeOffset ();

	int GetFreezeOffset () const
	{
		return m_nFreezeOffset;
	}


	// ----------------
	// Filter bar Mode:
	// ----------------
	BOOL SetColumnFilterBarCtrl (int nColumn, CWnd* pCtrl);
	CWnd* GetColumnFilterBarCtrl (int nColumn) const;

	CMFCGridColumnsItem* GetColumnItem(int nCol);

	BOOL GetItem(int nPos,HDITEM* pHeaderItem) const;

protected:
	int BestFitColumn (int nColumn) const;
	void OnInsertColumn (int nPos);
	virtual void OnColumnsOrderChanged ();
	
	// Helper functions: iterator for visible columns
public:
	int Begin () const;
	int End () const;
	int Next (int& i) const;
		// Returns next visible column, index in CMFCGridColumnsInfo::m_lstColumns.

protected:
	// Attributes:
	CArray<CMFCGridColumnsItem*, CMFCGridColumnsItem*>	m_arrColumns;
	CMap<int, int, int, int> m_mapSortColumn;	// sorted columns
	CList<int, int> m_lstGroupingColumns;		// grouping columns
	CArray<int, int> m_arrColumnOrder;			// groups order
	CArray<int, int> m_arrColumnSortingPriority;// used when multiple columns sort

	BOOL	m_bCheckBox;			// show a check box control at the first visible column
	int		m_nCheckBoxState;		// 0 - unchecked, 1 - checked, 2 - indeterminate

	BOOL	m_bAutoSize;
	int		m_nTotalWidth;

	BOOL	m_bMultipleSort;

	int		m_nFreezeColumns;		// Number of frozen columns
	int		m_nFreezeOffset;		// Right border of the frozen area

	BOOL	m_bDrawingDraggedColumn;// used for DrawColumn function
	int		m_nHighlightedItem;		// highlighted column
	int		m_nHighlightedItemBtn;	// column with highlighted button
	CMFCGridCtrl*	m_pWndList;		// owner window
public:
	BOOL	m_bInvertPressedColumn; // used for DrawColumn function
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridColumnsInfoEx - implements multiline header

class AFX_EXT_CLASS CMFCHeaderItem : public CObject
{
	DECLARE_DYNCREATE (CMFCHeaderItem)

public:
	CMFCHeaderItem ();
	CMFCHeaderItem (int nColumn, LPCTSTR lpszLabel = NULL, int nAlign = HDF_LEFT, int iImage = -1);
	virtual ~CMFCHeaderItem ();

	void Init ();

public:
	CString	m_strName;		// Label text
	int		m_iImage;		// Index for an image from an image list, -1 - no image
	int		m_nAlign;		// HDF_LEFT - Left, HDF_RIGHT - Right, HDF_CENTER - Center
	BOOL	m_bMultiLine;	// FALSE if single line
	BOOL	m_bVertical;	// reserved

	int		m_nColumn;		// Associated with a column

	// draw options
	int		m_nTextMargin;
	int		m_nArrowMargin;
	int		m_nHierarchyOffset;
	BOOL	m_bIsGroupBox;
	BOOL	m_bIsHeaderItemDragWnd;
	BOOL	m_bNoText;
	BOOL	m_bNoImage;
	BOOL	m_bNoSortArrow;
	BOOL	m_bNoButton;
	BOOL	m_bNotPressed;

	BOOL	m_bNameIsTrancated;
};

class AFX_EXT_CLASS CMFCMergedHeaderItem : public CMFCHeaderItem
{
	DECLARE_DYNCREATE (CMFCMergedHeaderItem)

public:
	CMFCMergedHeaderItem ();
	CMFCMergedHeaderItem (
		const CArray<int, int>* pCols,
		const CArray<int, int>* pLines,
		int nColumn, LPCTSTR lpszLabel = NULL, int nAlign = HDF_LEFT, int iImage = -1);

	virtual ~CMFCMergedHeaderItem ();

public:
	CArray<int, int>	m_arrColumns;		// zero-based indexes of the columns; all columns if list is empty
	CArray<int, int>	m_arrHeaderLines;	// zero-based indexes of the lines; all lines if list is empty
};

class AFX_EXT_CLASS CMFCGridColumnsInfoEx : public CMFCGridColumnsInfo 
{
// Operations
public:
	// Multi-Line Header:
	void SetHeaderLineCount (int nLineCount);
	int GetHeaderLineCount () const { return m_nMultiLineCount; }

	BOOL AddHeaderItem (const CArray<int, int>* pCols,
					    const CArray<int, int>* pLines = NULL,
					    int nColumn = 0, LPCTSTR lpszLabel = NULL, int nAlign = HDF_LEFT, int iImage = -1);
	CMFCMergedHeaderItem* AddHeaderItem(LPCTSTR lpszLabel,
						const CArray<int, int>* pCols, 
						const CArray<int, int>* pLines = NULL, 
						int nColumn = 0, int nAlign = HDF_LEFT, int iImage = -1);
	void RemoveAllHeaderItems ();
	void	SetItemHeight(int nHeight) { SetHeaderLineCount(nHeight);  }
	void	MergeCell(LPCTSTR lpszText, int nRow1, int nCol1, int nRow2, int nCol2, bool bBold = false, bool bItalic = false, COLORREF clrText = 0);


// Implementation
public:
	CMFCGridColumnsInfoEx ();
	virtual ~CMFCGridColumnsInfoEx ();

	virtual void DrawColumn (CDC* pDC, int nColumn, CRect rect,
		int nTextMargin = 5, int nArrowMargin = 5, BOOL bIsPrinting = FALSE,
		BOOL bNoSortArrow = FALSE,
		BOOL bIsGroupBox = FALSE);
	virtual void PrintColumn (CDC* pDC, int nColumn, CRect rectItem, CRect rectClipItem);
	virtual void GetHeaderTooltip (int nColumn, CPoint pt, CString& strText) const;
	virtual void OnColumnsOrderChanged ();

	void ReposHeaderItems ();
	void PrepareDrawHeader ();
	void PreparePrintHeader ();
	
protected:
	CMFCMergedHeaderItem* GetMergedHeaderItem (int nColumn, int nLine) const;
	void UpdateLayout ();
	void GetColumnPrintRect (int nColumn, CRect& rect) const;

protected:
	int m_nMultiLineCount;
	CArray<CMFCMergedHeaderItem*, CMFCMergedHeaderItem*>	m_arrMergedHeaderItems;

	/////////////////////////////////////////////////////////////
	// CHeaderLayout - helper class to implement multiline header
	class CHeaderLayout
	{
	public:
		struct HeaderLayoutData;

	// Operations:
	public:
		void SetLayout (int nColumns, int nLines);
		BOOL IsLayoutValid (int nColumns, int nLines) const;

		int GetIndex (int nCol, int nLine) const;
		void SetIndex (int nCol, int nLine, int nIndex);
		int AddData (const HeaderLayoutData& data);
		HeaderLayoutData& GetData (int nIndex);

		BOOL GetHeaderItem (int nCol, int nLine, CRect& rect, CMFCHeaderItem*& pItem) const;
		BOOL GetPaintedFlag (int nCol, int nLine) const;
		BOOL SetPaintedFlag (int nCol, int nLine, BOOL bPainted);
		void CleanPaintedFlags ();
		void SetRectsEmpty ();

	// Implemetation:
	public:
		CHeaderLayout () : m_nLines (0), m_nColumns (0) {}

		struct HeaderLayoutData
		{
			HeaderLayoutData (CMFCHeaderItem* pItem = NULL)
			{
				m_bPainted = FALSE;
				m_rect.SetRectEmpty ();
				m_pItem = pItem;
			}
			
			HeaderLayoutData& operator=(const HeaderLayoutData& rhs)
			{
				m_bPainted = rhs.m_bPainted;
				m_rect = rhs.m_rect;
				m_pItem = rhs.m_pItem;
				return *this;
			}
			
			BOOL				m_bPainted;
			CRect				m_rect;
			CMFCHeaderItem*	m_pItem;
		};

	protected:
		int m_nLines;
		int m_nColumns;
		CArray<int, int> m_arrLayout;
		CArray<HeaderLayoutData, HeaderLayoutData> m_arrLayoutData;
	};
	// CHeaderLayout
	/////////////////////////////////////////////////////////////

	CHeaderLayout m_layout;
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridPage - page of the grid control
class AFX_EXT_CLASS CMFCGridPage : public CObject
{
public:
	CMFCGridPage () :	m_nFirstInPage (0), m_nItems (0), m_nGroups (0), m_nTotal (0), 
		m_nHorzOffset (0), m_nWidth (0) , m_nFirstColumnInPage (0), m_nLastColumnInPage (0)
	{
	}

	CMFCGridPage (CMFCGridPage& src) 
		: m_nFirstInPage (0), m_nItems (0), m_nGroups (0), m_nTotal (0),
		m_nHorzOffset (0), m_nWidth (0) , m_nFirstColumnInPage (0), m_nLastColumnInPage (0)

	{
		*this = src;
	}

	CMFCGridPage& operator= (CMFCGridPage& src)
	{
		m_nFirstInPage = src.m_nFirstInPage;
		m_nItems = src.m_nItems;
		m_nGroups = src.m_nGroups;
		m_nTotal = src.m_nTotal;

		m_nHorzOffset = src.m_nHorzOffset;
		m_nWidth = src.m_nWidth;
		m_nFirstColumnInPage = src.m_nFirstColumnInPage;
		m_nLastColumnInPage = src.m_nLastColumnInPage;

		return *this;
	}

	// vertical pagination
	int m_nFirstInPage;	// index of the first item at the page
	int m_nItems;		// visible item count
	int m_nGroups;		// visible group count
	int m_nTotal;		// total item count

	// horizontal pagination
	int m_nHorzOffset;	// page scroll offset, pixels in print dc
	int m_nWidth;		// page width, pixels in print dc
	int m_nFirstColumnInPage;	// the first column to appear 
	int m_nLastColumnInPage;	// the last column to appear
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridPageInfo - implementation data for printing

struct AFX_EXT_CLASS CMFCGridPageInfo
{
	CMFCGridPageInfo () : m_nFirstItem (0), m_nLastItem (0), m_nFirstCol (0), m_nLastCol (0),
		m_lpData (NULL),
		m_nItemsCount (0), m_nGroupsCount (0),
		m_nPage (1), m_nFirstInPage (0),
		m_nItemsInPage (0), m_nGroupsInPage (0), m_nTotalInPage (0),
		m_nFirstColumnInPage (0), m_nLastColumnInPage (0),
		m_rectPageItems (0, 0, 0, 0), m_szOne (1, 1) {}

	void Init (int nFirstItem, int nLastItem, int nFirstCol, int nLastCol)
	{
		m_nFirstItem = nFirstItem;
		m_nLastItem = nLastItem;
		m_nFirstCol = nFirstCol;
		m_nLastCol = nLastCol;

		m_lpData = NULL;

		m_nItemsCount = 0;
		m_nGroupsCount = 0;
		m_nPage = 1;
		m_nFirstInPage = 0;
		m_nItemsInPage = 0;
		m_nGroupsInPage = 0;
		m_nTotalInPage = 0;
		m_nPageWidth = 0;
		m_nFirstColumnInPage = 0;
		m_nLastColumnInPage = 0;

		m_rectPageItems.SetRectEmpty ();
		m_szOne = CSize (1, 1);
	}

	int m_nFirstItem;	//	printing range
	int m_nLastItem;	//
	int m_nFirstCol;	//	printing range
	int m_nLastCol;		//

	LPVOID m_lpData;

	int m_nItemsCount;		// items before current page
	int m_nGroupsCount;		// groups before current page
	UINT m_nPage;			// current page
	int m_nFirstInPage;		// index of the first item at current page
	int m_nItemsInPage;		// printing items at current page
	int m_nGroupsInPage;	// printing groups at current page
	int m_nTotalInPage;		// count of all items at current page
	int m_nPageWidth;		// width of current page, in pixels of print dc
	int m_nFirstColumnInPage;	// the first column at current page
	int m_nLastColumnInPage;	// the last column at current page

	CRect m_rectPageItems;	// rect for items at current page
	CSize m_szOne;			// logical height and width of one point
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridCache object - page cache implementation for virtual mode

typedef CArray<CMFCGridRow*, CMFCGridRow*> CachePageArray;
struct AFX_EXT_CLASS CMFCGridCachePageInfo
{
	int				nFirst;			// Index of the first item in cache page
	int				nSize;			// Item count in cache page
	CachePageArray*	pArrCachePage;	// Items array
	BOOL			bReferenced;	// Is page accessed?
};

class AFX_EXT_CLASS CMFCGridCache : public CObject
{
	friend class CMFCGridCtrl;

public:
	// Operations methods:
	CMFCGridRow* GetCachedRow (int nId);
	BOOL SetCachedRow (int nId, CMFCGridRow* pRow);
	BOOL AddCache (int nId);
	void CleanUpCache ();

	// Implementation:
	CMFCGridCache ();
	virtual ~CMFCGridCache ();

protected:
	void DoAddCache (CachePageArray* pArray, int nIdFirst = 0);
	void DoFreeCachePage (CMFCGridCachePageInfo& cpi);
	void DoSwapCache ();

public:
	// Attributes:
	int		m_nCachePageSize;	// size of each page
	int		m_nCachePageCount;	// max count of pages

protected:
	CList<CMFCGridCachePageInfo, CMFCGridCachePageInfo&>	m_lstCache;
};

/////////////////////////////////////////////////////////////////////////////
// Grid OLE-Drop target

class AFX_EXT_CLASS CMFCGridCtrlDropTarget : public COleDropTarget
{
public:
	CMFCGridCtrlDropTarget()
	{
		m_pOwner = NULL;
	}
	
	// Attributes
protected:
	CMFCGridCtrl* m_pOwner;
	
	// Operations
public:
	BOOL Register (CMFCGridCtrl* pOwner);
	
	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDragDropGridCtrlDropTarget)
public:
	virtual DROPEFFECT OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual void OnDragLeave(CWnd* pWnd);
	virtual DROPEFFECT OnDragOver(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual DROPEFFECT OnDropEx(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT dropEffect, DROPEFFECT dropList, CPoint point);
	virtual DROPEFFECT OnDragScroll( CWnd* pWnd, DWORD dwKeyState, CPoint point );
	//}}AFX_VIRTUAL
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridCtrl window

class CMFCHeaderItemDragWnd;
class CMFCHeaderItemDropWnd;
class CMFCGridColumnChooser;
class CMFCGridSerializeManager;

AFX_EXT_CLASS extern UINT AFX_WM_GRID_ITEM_CHANGED;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_ITEM_BEGININPLACEEDIT;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_ITEM_ENDINPLACEEDIT;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_SEL_CHANGED;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_ITEM_DBLCLICK;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_ON_HIDE_COLUMNCHOOSER;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_BEGINDRAG;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_COLUMN_CLICK;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_ROW_CHECKBOX_CLICK;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_HEADERCHECKBOX_CLICK;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_ADJUST_LAYOUT;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_FIND_RESULT;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_COLUMN_BTN_CLICK;
AFX_EXT_CLASS extern UINT AFX_WM_GRID_SCALE_CHANGED;
AFX_EXT_CLASS extern UINT AFX_WM_REFRESH;

#define CMD_PRINT_ID	1001
#define CMD_EXPORT_ID	1002
#define CMD_REFRESH_ID	1003



// Internal iterator
typedef void (CALLBACK* AFX_GRID_ITERATOR_COLUMN_CALLBACK)(int nColumn, const CMFCGridRange& range, LPARAM lParam);
typedef void (CALLBACK* AFX_GRID_ITERATOR_ROW_CALLBACK)(CMFCGridRow* pRow, const CMFCGridRange& range, LPARAM lParam);
typedef void (CALLBACK* AFX_GRID_ITERATOR_ITEM_CALLBACK)(CMFCGridItem* pItem, const CMFCGridRange& range, LPARAM lParam);

class AFX_EXT_CLASS CMFCGridCtrl : public CWnd, public CGuiBase
{
	DECLARE_DYNAMIC(CMFCGridCtrl)

	friend class CMFCGridView;
	friend class CMFCGanttView;
	friend class CMFCGridRow;
	friend class CMFCGridItem;
	friend class CMFCReportRow;
	friend class CMFCGridCaptionRow;
	friend class CMFCGridDateTimeItem;
	friend class CMFCGridColorItem;
	friend class CMFCGridCheckItem;
	friend class CMFCGridURLItem;
	friend class CMFCGridColumnsInfo;
	friend class CMFCGridColumnsInfoEx;
	friend class CMFCHeaderItemDragWnd;
	friend class CMFCGridColumnChooser;
	friend class CMFCGridColumnListBox;
	friend class CMFCSortableArray;
	friend class CMFCGridSerializeManager;
	friend class CMFCGridFindDlg;

	enum AUTOGROUP_CLEANUP_MODE
	{
		AG_FULL_CLEANUP = 0,
		AG_COPY_AUTOGROUPS = 1,
		AG_CLEANUP_OLDAUTOGROUPS_ONLY = 2
	};


	COLORREF m_clrSeparator;
	CBrush	m_brHighlightDn;
	CBrush	m_brHighlight;
	CPen	m_penSeparator;
	CBrush				m_brAccent;
	CBrush				m_brAccentHighlight;
	CBrush				m_brFrame;
	COLORREF			m_clrAccentLight;
	COLORREF			m_clrAccentHilight;
	CBrush				m_brAccentLight;
	COLORREF			m_clrAccentText;
	COLORREF			m_clrTextDisabled;
	COLORREF			m_clrGripperBk;
	COLORREF			m_clrRibbonTabs;
	COLORREF			m_clrTabsBackground;
	COLORREF			m_clrHighlighDownText;
	BOOL				m_bCheckedRibbonButtonFrame;
	COLORREF			m_clrRibbonCategoryFill;
	CBrush				m_brRibbonCategoryFill;
	COLORREF			m_clrControl;
	CBrush				m_brControl;
	COLORREF			m_clrDlgBackground;
	COLORREF			m_clrEditPrompt;
	COLORREF			m_clrBorderActive;
	COLORREF			m_clrButtonsArea;

	COLORREF			m_clrNcTextActive;
	COLORREF			m_clrNcTextInactive;
	COLORREF			m_clrNcBorder;

	COLORREF			m_clrFace;
	COLORREF			m_clrComboHighlighted;

	COLORREF			m_clrAutohideBarInactive;
	COLORREF			m_clrAutohideBarActive;

	COLORREF			m_clrHighlightNC;
	CBrush				m_brHighlightNC;

	COLORREF			m_clrHighlightDnNC;
	CBrush				m_brHighlightDnNC;

	COLORREF			m_clrMenuImage;
	COLORREF			m_clrReportGroupText;

	CAccessibilityData	m_AccData;
	CWnd*		m_wndInput;
	int			m_nInputHeight;
	CRect		m_rcOrg;
	int			m_nLinesNumber;
	int			m_nItemHeight;
	bool		m_bEnableHotKeyFilter;

	virtual void OnFillGridBackground(CDC* pDC, CRect rect);
	virtual void OnFillGridHeaderBackground(CDC* pDC, CRect rect);
	virtual BOOL OnDrawGridHeaderItemBorder(CDC* pDC, CRect rect, BOOL bPressed);
	virtual COLORREF GetGridHeaderItemTextColor(BOOL bSelected, BOOL bGroupByBox);
	virtual void OnFillGridRowHeaderBackground(CDC* pDC, CRect rect);
	virtual void OnFillGridSelectAllAreaBackground(CDC* pDC, CRect rect, BOOL bPressed);
	virtual COLORREF GetGridLeftOffsetColor(CMFCGridCtrl* pCtrl);
	virtual COLORREF OnFillGridItem(CDC* pDC, CRect rectFill,
		BOOL bSelected, BOOL bActiveItem, BOOL bSortedColumn);
	virtual CBrush& GetGridCaptionBrush(CMFCGridCtrl* pCtrl);
	virtual COLORREF GetGridTreeLineColor(CMFCGridCtrl* pCtrl);

	virtual BOOL IsGridSparklineDefaultSelColor() const
	{
		return TRUE;
	}

	// Report control:
	virtual COLORREF GetReportCtrlGroupBackgoundColor();
	virtual COLORREF OnFillReportCtrlRowBackground(CDC* pDC, CRect rectFill, BOOL bSelected, BOOL bGroup);
	virtual void	DoDrawHeaderSortArrow(CDC* pDC, CRect rectArrow, BOOL bIsUp, BOOL /*bDlgCtrl*/);
	virtual BOOL OnDrawGridRowHeaderItemBorder(CDC* pDC, CRect rect, BOOL bPressed);

	virtual void OnDrawGridSelectAllMarker(CDC* pDC, CRect rect, int nPadding, BOOL bPressed);

	virtual BOOL OnDrawGridSelectAllAreaBorder(CDC* pDC, CRect rect, BOOL bPressed);
	virtual void OnDrawGridSortArrow(CDC* pDC, CRect rectArrow, BOOL bIsUp);
	virtual COLORREF OnFillGridGroupByBoxBackground(CDC* pDC, CRect rect);
	virtual COLORREF OnFillGridGroupByBoxTitleBackground(CDC* pDC, CRect rect);
	virtual COLORREF GetGridGroupByBoxLineColor() const;
	virtual void OnDrawGridGroupByBoxItemBorder(CDC* pDC, CRect rect);
	virtual COLORREF GetGridLeftOffsetColor();
	virtual COLORREF GetGridItemSortedColor();
	virtual void OnFillGridGroupBackground(CDC* pDC, CRect rectFill);
	virtual COLORREF GetGridGroupTextColor(BOOL bSelected) const;
	virtual BOOL IsGridGroupUnderline();
	virtual void OnDrawGridGroupUnderline(CDC* pDC, CRect rectFill);
	virtual COLORREF OnFillGridRowBackground(CDC* pDC, CRect rectFill, BOOL bSelected);
	virtual void OnDrawGridHeaderMenuButton(CDC* pDC, CRect rect,
		BOOL bHighlighted, BOOL bPressed, BOOL bDisabled);
	virtual void OnDrawGridSelectionBorder(CDC* pDC, CRect rect);
	virtual COLORREF OnFillGridCaptionRow(CDC* pDC, CRect rectFill);
	virtual CBrush& GetGridCaptionBrush();
	virtual void OnDrawGridDataBar(CDC* pDC, CRect rect);
	virtual void GetGridColorScaleBaseColors(COLORREF& clrLow, COLORREF& clrMid, COLORREF& clrHigh);
	virtual COLORREF GetOutOffFilterTextColor();
	virtual COLORREF GetGridDragHeaderTextColor();
	virtual COLORREF GetGridTreeLineColor();
	virtual COLORREF OnDrawGridColumnChooserItem(CDC* pDC, CRect rectItem, BOOL bIsSelected);


public:
	enum BeginEditFlags
	{
		BeginEdit_None = 0x0,

		// Key reasons:
		BeginEdit_Return = 0x10,
		BeginEdit_Tab = 0x20,
		BeginEdit_Left = 0x40,
		BeginEdit_Right = 0x80,
		BeginEdit_Up = 0x100,
		BeginEdit_Down = 0x200,
		BeginEdit_ArrowBtn = BeginEdit_Left | BeginEdit_Right | BeginEdit_Up | BeginEdit_Down,
		BeginEdit_F2 = 0x400,
		BeginEdit_F4 = 0x800,
		BeginEdit_Shift = 0x1000,
		BeginEdit_Ctrl = 0x2000,

		// Other reasons:
		BeginEdit_ReOpen = 0x4000,
		BeginEdit_MouseClick = 0x8000,
		BeginEdit_MouseDblClick = 0x10000,
		BeginEdit_Char = 0x20000,
		BeginEdit_ComboOpen = 0x40000,
		BeginEdit_ComboReturn = 0x80000
	};

	enum EndEditResultFlags
	{
		EndEdit_NoResult = 0x0,
		EndEdit_OK = 0x1,
		EndEdit_Cancel = 0x2,
		EndEdit_AutoApply = 0x4,

		// Key reasons:
		EndEdit_Return = 0x10,
		EndEdit_Tab = 0x20,
		EndEdit_Left = 0x40,
		EndEdit_Right = 0x80,
		EndEdit_Up = 0x100,
		EndEdit_Down = 0x200,
		EndEdit_Escape = 0x400,
		EndEdit_Shift = 0x1000,
		EndEdit_Ctrl = 0x2000,
		EndEdit_Home = 0x4000,
		EndEdit_End = 0x8000,
		EndEdit_KeyMask = 0xfff0,

		// Activation reasons:
		EndEdit_KillFocus = 0x10000,
		EndEdit_Selection = 0x20000,
		EndEdit_Layout = 0x40000
	};

	enum Direction
	{
		NoMove = 0x0,
		Up = 0x1,
		Down = 0x2,
		Left = 0x4,
		Right = 0x8,

		PrevColumn = 0x10,
		NextColumn = 0x20,
		FirstColumn = 0x40,
		LastColumn = 0x80,

		PrevRow = 0x100,
		NextRow = 0x200,
		FirstRow = 0x400,
		LastRow = 0x800
	};

	enum InplaceEditSetSelFlags
	{
		SetSel_CaretByCursor = 0x0,
		SetSel_CaretAtLeft = 0x1,
		SetSel_CaretAtRight = 0x2,
		SetSel_SelectAll = 0x4
	};

	// Construction
public:

	int			m_nFraction;
	CArray<LVEVENT, LVEVENT> m_arEvent;
	//CMap<int, int, UINT, UINT> m_ColFormats;
	CMFCGridColumnsInfoEx	m_ColumnsEx;
	int		m_nRowSelected;
	int		m_nCurrentPage;
	int		m_nPaginLines;
	int		m_nTotalPage;
	int		m_nPaginHit;
	int		m_nPaginStep;
	CArray<CRect, CRect> m_rcPagin;

	CMFCGridCtrl();
	CMFCGridCtrl(int nMemBlockSize);

	UINT GetItemState(int nItem, UINT nMask) const;
	BOOL	CreateInput(CWnd* pWnd, int nHeight);
	CMFCGridColumnsInfoEx* GetGridColumnInfoEx() { return &m_ColumnsEx; }
	CMFCGridColumnsInfoEx* GetHeaderControl() { return &m_ColumnsEx; }
	BOOL	IsRowSelected(int nIndex);
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
	void	SetCheckBox(BOOL bCheck = TRUE);
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
	void	AddEvent(int nID, LPCTSTR lpszName, int(*eventFnc)(CWnd* pWnd) = NULL, HICON hIcon = NULL, UINT nChar = -1, UINT nFlags = 0);
	int		FindItem(int nSubItem, LPCTSTR lpszText);


	CWnd* SetEditLabel(int nCol, int nCtrlType);
	void	SetStartEdit(int nItem, int nSubItem);
	void	CancelEditLabel();
	CWnd* GetCurrentEditControl();
	CWnd* GetEditControl(int nCol);
	CMFCHeaderItem* GetHeaderItem();
	void	ShowInputWindow(BOOL bTop = FALSE);
	void	HideInputWindow();

	void	BeginLoad(int nCount = 0);
	void	EndLoad(bool bRestore = false);
	BOOL	SetCheck(int nItem, BOOL fCheck = TRUE);
	BOOL	GetCheck(int nItem);
	void	SetCallChange(BOOL bFlags);
	void	SetGroupItem(int nItem, int nSubItem);
	void	SetSortHeader(bool bSortHeader = false);
	void	MergeCell(int nRow1, int nCol1, int nRow2, int nCol2, UINT nStyle = DT_LEFT | DT_VCENTER | DT_SINGLELINE, bool bBold = false, bool bItalic = false);
	int		Search(int nIndex, LPCTSTR lpszText, int nFlag = SEARCH_WORD);
	void	SetDisplayColor(bool bDisplay);
	void	SetAutoIndex(bool bAuto);
	void	RecalcColumnWidth();
	void	SetFractionDigits(int nFraction);
	void	RefreshView(void);
	BOOL	IsValidIndex(int nIndex);

	CString Key(int nIndex, LPCTSTR lpszName);

	void	EnableEdit(bool bFlag);
	void	EndEdit(bool bFlag);
	int		SetItemState(int nItem, int nState, UINT nMask=LVIS_SELECTED);
	void	SetSelectionMark(int nItem);
	void	SetLinesNumber(int nLines);
	void	SetItemHeight(int nHeight);	
	
	void	EnablePaginator(int nLines);
	void	AdjustPaginatorBarCtrls();

	// Attributes
public:
	// Set this member to TRUE if you wish to enable ASSERT_VALID checking in debug mode
	// (AFFECTS GRID PERFORMANCE IN DEBUG MODE!)
	static BOOL m_bEnableAssertValidInDebug;

	void EnableHeader(BOOL bEnable = TRUE, DWORD dwFlags = (DWORD)-1);
	BOOL IsHeaderEnabled() const
	{
		return m_bHeader;
	}

	void EnableHeaderSelectAllMarker(BOOL bEnable = TRUE);
	BOOL IsHeaderSelectAllMarkerEnabled() const
	{
		return m_bHeaderSelectAllMarker;
	}

	void EnableRowHeader(BOOL bEnable = TRUE, DWORD dwFlags = (DWORD)-1, int nWidth = 30);
	BOOL IsRowHeaderEnabled() const
	{
		return m_bRowHeader;
	}

	void SetRowHeaderWidth(int nWidth, BOOL bRedraw = TRUE);
	int GetRowHeaderWidth() const
	{
		return m_nRowHeaderWidth;
	}

	DWORD GetHeaderFlags() const
	{
		return m_dwHeaderFlags;
	}

	// Grid and header images:
	void SetHeaderImageList(CImageList* pImagesHeader);
	CImageList* GetHeaderImageList() const
	{
		return m_pImagesHeader;
	}

	void SetHeaderBtnImageList(CMFCToolBarImages* pImagesHeaderBtn);
	CMFCToolBarImages* GetHeaderBtnImageList() const
	{
		return m_pImagesHeaderBtn;
	}

	void SetImageList(CImageList* pImages);
	CImageList* GetImageList() const
	{
		return m_pImages;
	}

	// Virtual mode:
	void EnableVirtualMode(AFX_GRID_CALLBACK pCallback = NULL, LPARAM lParam = 0);
	// If the virtual mode was enabled once, you cannot disable it

	BOOL IsVirtualMode() const
	{
		return m_bVirtualMode;
	}

	AFX_GRID_CALLBACK GetCallbackFunc()
	{
		return m_pfnCallback;
	}

	void SetVirtualRows(int nRowsNum);

	// Grid scaling:
	void SetScale(double dblScale, BOOL bNotifyParent = FALSE, CPoint ptCenter = CPoint(0, 0));
	double GetScale() const
	{
		return m_dblScale;
	}

	void SetScalingRange(double dblMinScale, double dblMaxScale); // Call SetScalingRange(1.0, 1.0) to disable scaling

	double GetMinScale() const
	{
		return m_dblMinScale;
	}

	double GetMaxScale() const
	{
		return m_dblMaxScale;
	}

	virtual void OnScaleChanged(double dblOldScale);

	// Filter:
	void EnableFilter(AFX_GRID_FILTERCALLBACK pfnCallback = NULL, LPARAM lParam = 0);
	AFX_GRID_FILTERCALLBACK GetFilterCallbackFunct();

	BOOL IsFilterEnabled() const
	{
		return m_bFilter;
	}
	void EnableHotKeyFilter(bool bHot);

	void SetOutOfFilterLabel(const CString& strOutOfFilterLabel);

	const CString& GetOutOfFilterLabel() const
	{
		return m_strOutOfFilter;
	}

	void EnableDefaultFilterMenuPopup(BOOL bEnable = TRUE, UINT uiMenuResId = 0, UINT uiFilterCmd = 0);
	void OnDefaultFilterMenuApply();

	BOOL ShowFilterMenu(HMENU hMenu, UINT uiFilterCmd, int nColumn,
		AFX_FILTER_COLUMN_INFO* pFilterColumnInfo = NULL,	// Leave empty for the default filter
		const CStringList& lstValues = CStringList(),	// Leave empty for the auto-fill
		CPoint pt = CPoint(-1, -1));

	// Filter bar:
	void EnableFilterBar(BOOL bEnable, LPCTSTR lpszPrompt, BOOL bCaseSensitive = FALSE,
		const CList<int, int>* pListOfColumnIndexes = NULL, BOOL bUpdate = TRUE);

	BOOL IsFilterBarEnabled() const
	{
		return m_bFilterBar;
	}

	BOOL EnableColumnFilterEdit(BOOL bEnable, int nColumn, LPCTSTR lpszPrompt);
	void SetFocusToFilterBar(int nColumn);

	virtual CMFCGridFilter* CreateFilter() { return new CMFCGridFilter; }

	virtual int GetColumnValuesList(int nColumn, CStringList& lstValues, BOOL bSorted = TRUE, BOOL bVisibleOnly = FALSE);

	// Called by user-defined filter edit control.
	virtual void OnFilterBarChanged(int nColumn, const CString& strNewFilter);
	virtual void OnFilterBarClearAll();
	virtual void OnFilterBarSetFocus(int nColumn);
	virtual void OnFilterBarTab(BOOL bShift = FALSE);

	// Sorting operations:
	virtual void Sort(int nColumn, BOOL bAscending = TRUE, BOOL bAdd = FALSE);
	virtual void ToggleSortColumn(int nColumn);
	void SetSortColumn(int nColumn, BOOL bAscending = TRUE, BOOL bAdd = FALSE);
	void RemoveSortColumn(int nColumn);

	int GetSortColumn() const
	{
		return GetColumnsInfo().GetSortColumn();
	}

	void EnableMultipleSort(BOOL bEnable = TRUE);
	BOOL IsMultipleSort() const;

	void SetColumnSortingPriority(LPINT piArray, int iCount);
	const int* GetColumnSortingPriority(int& nCount) const;

	virtual BOOL IsSortingMode() const
	{
		return (GetColumnsInfo().GetSortColumnCount() > 0);
	}

	void EnableMarkSortedColumn(BOOL bMark = TRUE, BOOL bRedraw = TRUE);

	virtual BOOL IsMarkSortedColumn() const
	{
		return m_bMarkSortedColumn;
	}

	// Grouping operations:
	void EnableGroupByBox(BOOL bEnable = TRUE);

	BOOL IsGroupByBox() const
	{
		return m_bGroupByBox;
	}

	int InsertGroupColumn(int nPos, int nColumn);
	BOOL RemoveGroupColumn(int nPos);
	BOOL RemoveGroupColumnByVal(int nColumn);

	int GetGroupColumnRect(int nPos, CRect& rect, CDC* pDC);

	BOOL IsGrouping() const;	

	void SetBoolLabels(LPCTSTR lpszTrue, LPCTSTR lpszFalse);
	void SetListDelimiter(TCHAR c);

	CRect GetListRect() const
	{
		return m_rectList;
	}

	int GetBaseHeight() const
	{
		return m_nBaseHeight;
	}

	int	GetRowHeight() const
	{
		return m_nRowHeight;
	}

	int	GetLargeRowHeight() const
	{
		return m_nLargeRowHeight;
	}

	int GetButtonWidth() const
	{
		return m_nButtonWidth;
	}

	void AllowRowExtraHeight(BOOL bAllow = TRUE);
	BOOL IsRowExtraHeightAllowed() const;

	void SetGridHeaderHeight(int nHeight)
	{
		ASSERT(nHeight >= 0);
		m_nGridHeaderHeight = nHeight;
	}

	void SetGridFooterHeight(int nHeight)
	{
		ASSERT(nHeight >= 0);
		m_nGridFooterHeight = nHeight;
	}

	CRect GetHeaderRect() const
	{
		return m_rectHeader;
	}

	CRect GetGridHeaderRect() const;
	CRect GetGridFooterRect() const;

	virtual CMFCGridColumnsInfo& GetColumnsInfo()
	{
		return m_Columns;
	}

	virtual const CMFCGridColumnsInfo& GetColumnsInfo() const
	{
		return m_Columns;
	}

	virtual CMFCGridColumnsInfoEx& GetColumnsInfoEx()
	{
		return m_ColumnsEx;
	}

	virtual const CMFCGridColumnsInfoEx& GetColumnsInfoEx() const
	{
		return m_ColumnsEx;
	}

	BOOL IsFocused() const
	{
		return m_bFocused;
	}

	void SetReadOnly(BOOL bReadOnly = TRUE)
	{
		if (!bReadOnly)
		{
			m_bWholeRowSel = FALSE;
		}

		m_bReadOnly = bReadOnly;
	}

	BOOL IsReadOnly() const
	{
		return m_bReadOnly;
	}

	void SetSelectionBorder(BOOL bEnabled = TRUE)
	{
		m_bSelectionBorder = bEnabled;
	}

	BOOL IsSelectionBorder() const
	{
		return m_bSelectionBorder;
	}

	void SetSelectionBorderForActiveItem(BOOL bEnable = TRUE)
	{
		// by default - TRUE
		m_bSelectionBorderActiveItem = bEnable;
	}

	BOOL IsSelectionBorderForActiveItem() const
	{
		return m_bSelectionBorderActiveItem;
	}

	void SetHighlightActiveItem(BOOL bEnable = TRUE)
	{
		// by default - FALSE
		m_bHighlightActiveItem = bEnable;
	}

	BOOL IsHighlightActiveItem() const
	{
		return m_bHighlightActiveItem;
	}

	int GetTextLeftOffset() const
	{
		return 0;
	}

	int GetLeftItemBorderOffset() const
	{
		return m_nLeftItemBorderOffset;
	}

	void SetHighlightGroups(BOOL bHighlight = TRUE)
	{
		m_bHighlightGroups = bHighlight;
	}

	BOOL IsHighlightGroups() const
	{
		return m_bHighlightGroups;
	}

	BOOL IsControlBarColors() const
	{
		return m_bControlBarColors;
	}

	BOOL IsShowDragContext() const
	{
		return m_bShowDragContext;
	}

	void SetShowDragContext(BOOL bShowDragContext = TRUE)
	{
		m_bShowDragContext = bShowDragContext;
	}

	void SetClearInplaceEditOnEnter(BOOL bClear)
	{
		m_bClearInplaceEditOnEnter = bClear;
	}

	void SetEditFirstClick(BOOL bEditFirstClick = TRUE)
	{
		m_bEditFirstClick = bEditFirstClick;
	}

	BOOL IsSingleSel() const
	{
		return m_bSingleSel;
	}

	void SetSingleSel(BOOL bSingleSel = TRUE)
	{
		m_bSingleSel = bSingleSel;
	}

	BOOL IsWholeRowSel() const
	{
		return m_bWholeRowSel;
	}

	BOOL SetWholeRowSel(BOOL bWholeRowSel = TRUE)
	{
		if (bWholeRowSel && !m_bReadOnly)
		{
			return FALSE; // Allow in Read-only mode only
		}

		m_bWholeRowSel = bWholeRowSel;
		return TRUE;
	}

	void EnableInvertSelOnCtrl(BOOL bInvertSel = TRUE)
	{
		m_bInvertSelOnCtrl = bInvertSel;
	}

	BOOL IsInvertSelOnCtrlEnabled() const
	{
		return m_bInvertSelOnCtrl;
	}

	BOOL IsShowInPlaceToolTip() const
	{
		return m_bShowInPlaceToolTip;
	}

	void SetShowInPlaceToolTip(BOOL bShow = TRUE);

	void SetRowMarker(BOOL bShow = TRUE)
	{
		m_bRowMarker = bShow;
	}

	BOOL IsRowMarker() const
	{
		return m_bRowMarker;
	}

	BOOL IsRowMarkerOnRowHeader() const
	{
		return m_bRowMarker && m_bRowHeader && !m_bLineNumbers;
	}

	void EnableLineNumbers(BOOL bEnable = TRUE)
	{
		m_bLineNumbers = bEnable;
	}

	BOOL IsLineNumbersEnabled() const
	{
		return m_bLineNumbers;
	}

	void EnableGridLines(BOOL bEnable = TRUE)
	{
		m_bGridLines = bEnable;
	}

	BOOL IsGridLinesEnabled() const
	{
		return m_bGridLines;
	}

	void EnableTreeLines(BOOL bEnable = TRUE)
	{
		m_bTreeLines = bEnable;
	}

	BOOL IsTreeLinesEnabled() const
	{
		return m_bTreeLines;
	}

	void EnableTreeButtons(BOOL bEnable = TRUE)
	{
		m_bTreeButtons = bEnable;
	}

	BOOL IsTreeButtonsEnabled() const
	{
		return m_bTreeButtons;
	}

	void EnableCheckBoxes(BOOL bEnable = TRUE);

	BOOL IsCheckBoxesEnabled() const
	{
		return m_bCheckBoxes;
	}

	void CheckAll(BOOL bChecked = TRUE);
	void UpdateHeaderCheckbox();

	// Colors:
	void SetColorTheme(const CMFCGridColors& theme, BOOL bRedraw = TRUE, BOOL bFullCopy = FALSE);
	void SetVisualManagerColorTheme(BOOL bSet = TRUE, BOOL bRedraw = TRUE, BOOL bAutoUpdateOnVMChange = TRUE, BOOL bIncludeScrollbarTheme = TRUE);

	void EnableAlternateRows(BOOL bEnable = TRUE);

	BOOL IsAlternateRowsEnabled() const
	{
		return m_bAlternateRows;
	}

	const CMFCGridColors& GetColorTheme() const
	{
		return m_ColorData;
	}


	void SetCustomColors(			// Use (COLORREF)-1 for the default color
		COLORREF	clrBackground,
		COLORREF	clrText,
		COLORREF	clrGroupBackground,
		COLORREF	clrGroupText,
		COLORREF	clrLeftOffset,
		COLORREF	clrLine);

	void GetCustomColors(
		COLORREF& clrBackground,
		COLORREF& clrText,
		COLORREF& clrGroupBackground,
		COLORREF& clrGroupText,
		COLORREF& clrLeftOffset,
		COLORREF& clrLine);

	COLORREF GetTextColor() const
	{
		return m_ColorData.m_clrText == (COLORREF)-1 ?
			afxGlobalData.clrWindowText : m_ColorData.m_clrText;
	}

	COLORREF GetGroupTextColor(BOOL bSelected = FALSE) const;

	COLORREF GetBkColor() const
	{
		return m_ColorData.m_clrBackground == (COLORREF)-1 ?
			afxGlobalData.clrWindow : m_ColorData.m_clrBackground;
	}

	COLORREF GetSortedColor() const
	{
		return m_clrSortedColumn;
	}

	void SetPreviewTextColor(COLORREF clr);
	COLORREF GetPreviewTextColor(BOOL bSelected = FALSE) const;

	void SetDataBarColors(COLORREF clrBorder, COLORREF clrFill, COLORREF clrGradient, int nGradientAngle = 0);


	void ShowVertScrollBar(BOOL bShow = TRUE)
	{
		m_bScrollVert = bShow;

	}

	void ShowHorzScrollBar(BOOL bShow = TRUE)
	{
		m_bScrollHorz = bShow;

	}


	void SetMouseWheelSmoothScrollLimit(int nMaxLimit)
	{
		m_nMouseWheelSmoothScrollMaxLimit = nMaxLimit;
	}

	int GetMouseWheelSmoothScrollLimit() const
	{
		return m_nMouseWheelSmoothScrollMaxLimit;
	}

	int GetRowBlockSize() const
	{
		return m_nRowsBlockSize;
	}

	// Header items drag/drop:
	void EnableDragHeaderItems(BOOL bEnable = TRUE)
	{
		m_bDragHeaderItems = bEnable;
	}

	BOOL IsDragHeaderItemsEnabled() const
	{
		return m_bDragHeaderItems;
	}

	BOOL IsGridHeaderItemHovered() const
	{
		return m_bHeaderItemHovered;
	}

	// Items drag/drop:
	void EnableDragSelection(BOOL bEnable = TRUE)
	{
		if (bEnable)
		{
			m_bDragSelectionBorder = FALSE;
		}
		m_bDragSelection = bEnable;
	}

	BOOL IsDragSelectionEnabled() const
	{
		return m_bDragSelection;
	}

	void EnableDragSelectionBorder(BOOL bEnable = TRUE)
	{
		if (bEnable)
		{
			m_bDragSelection = FALSE;
		}
		m_bDragSelectionBorder = bEnable;
	}

	BOOL IsDragSelectionBorderEnabled() const
	{
		return m_bDragSelectionBorder;
	}

	BOOL IsColumnBeingResized() const
	{
		return m_bTracking;
	}

	BOOL IsPrinting() const
	{
		return m_bIsPrinting;
	}

	// Item fonts:
	HFONT SetBoldFont(CDC* pDC);

	CFont& GetBoldFont(BOOL bScaled = FALSE);
	CFont& GetUnderlineFont(BOOL bScaled = FALSE);

	/*
	CMFCGraphicsManager* GetGraphicsManager()
	{
		if (m_pGM == NULL)
		{

			m_pGM = CMFCGraphicsManager::CreateInstance();
		}

		return m_pGM;
	}
	*/

	const CString& GetNoContentLabel() const
	{
		return m_strNoContent;
	}

	void SetNoContentLabel(const CString& strNoContentLabel);

	void SetAllowDrag(BOOL bAllow);
protected:
	BOOL		m_bHeader;				// Is header visible?
	DWORD		m_dwHeaderFlags;		// Header flags (AFX_GRID_HEADER_...)
	BOOL		m_bHeaderSelectAllMarker;// Draw "Select all" triangle marker on the top-left area
	BOOL		m_bRowHeader;			// Is row header visible?
	DWORD		m_dwRowHeaderFlags;		// Row header flags
	BOOL		m_bGroupByBox;			// Is GroupByBox visible?

	BOOL		m_bVirtualMode;			// Control in virtual mode
	int			m_nVirtualRows;			// Number of rows in virtual mode

	int			m_nMultiLineExtraRows;	// Total number of additional rows in multi-line mode
	int mutable	m_nMultiLineExtraRowsCount; // Calculated by GetTotalItems

	AFX_GRID_CALLBACK   m_pfnCallback;		// Callback function in virtual mode
	LPARAM				m_lParamCallback;	// Lparam for callback function
	CMFCGridCache		m_CachedItems;		// Page cache for virtaul mode

	CMFCToolTipCtrl		m_ToolTip;	// Tooltip control
	CToolTipCtrl*			m_pToolTip; // Common tooltip used for header control

	CString		m_strTrue;				// Customized boolean value (e.g. "Yes")
	CString		m_strFalse;				// Customized boolean value (e.g. "No")

	TCHAR		m_cListDelimeter;		// Customized list delimeter character

	CString		m_strNoContent;			// Customized label if no content

	BOOL			m_bScrollVert;			// Show vertical scroll bar
	BOOL			m_bScrollHorz;			// Show horizontal scroll bar
	BOOL			m_bScrollHorzShowAlways;// Show horizontal scroll bar, never hide scrollbar
	float			m_fScrollRemainder;		// Accumulating the scroll value remainder
	int				m_nMouseWheelSmoothScrollMaxLimit; // If -1 then do not limit smooth scrolling
	BOOL			m_bFreezeGroups;		// If TRUE - disable horizontal scrolling for groups
	HFONT			m_hFont;				// Grid regular font
    CFont			m_fontRegular;
	CFont			m_fontScaled;			// Grid regular font (scaled)
	CFont			m_fontBoldScaled;		// Grid bold font (scaled)
	CFont			m_fontBold;				// Grid bold font
	CFont			m_fontUnderlineScaled;	// Grid underline font (scaled)
	CFont			m_fontUnderline;		// Grid underline font
	double			m_dblScale;				// Grid zoom factor
	double			m_dblMinScale;			// Grid zoom factor (min)
	double			m_dblMaxScale;			// Grid zoom factor (max)
	int				m_nEditLeftMargin;		// Edit control left margin
	int				m_nEditRightMargin;		// Edit control right margin
	int				m_nEditTopMargin;		// Edit control top margin
	BOOL			m_bTrimTextLeft;		// An option for DoDrawText method, TRUE by default
	int				m_nLeftItemBorderOffset;// Temporary value used while drawing item's borders

	CImageList*	m_pImagesHeader;			// Grid header
	CImageList*	m_pImages;					// Grid item images
	CMFCToolBarImages*	m_pImagesHeaderBtn;	// Grid header button's images
	CMFCToolBarImages	m_DefaultHeaderBtnImages;	// Grid header button's images (default)

	int			m_nGroupByBoxHeight;	// GroupByBox height
	CRect		m_rectList;				// Grid area
	CRect		m_rectClip;				// Clipping area
	CRgn		m_rgnClip;
	CRgn		m_rgnClipRow;
	CRgn		m_rgnClipItem;
	CRect		m_rectHeader;			// Header area
	CRect		m_rectRowHeader;		// Left header area
	CRect		m_rectSelectAllArea;	// "Select all" area at top left corner
	CRect		m_rectFilterBar;		// Filter bar area
	int			m_nBaseHeight;			// Height of the row with one line of text
	int			m_nRowHeight;			// Height of the single row
	int			m_nLargeRowHeight;		// Height of the group row
	BOOL		m_bAllowRowExtraHeight;	// If FALSE, the height for all rows is fixed
	int			m_nRowHeaderWidth;		// Width of the row header
	int			m_nButtonWidth;			// Width of buttons
	int			m_nGridHeaderHeight;	// Height of extra space at the top
	int			m_nGridFooterHeight;	// Height of extra space at the bottom

	CMFCGridColumnsInfo m_Columns;		// Width and names of grid columns
	int			m_nTreeColumn;			// Column for expanding boxes and hierarchy offsets

	int			m_nVertScrollOffset;	// In pixels
	int			m_nVertScrollTotal;
	int			m_nVertScrollPage;
	int			m_nHorzScrollOffset;	// In pixels
	int			m_nHorzScrollTotal;
	int			m_nHorzScrollPage;
	int			m_nFirstVisibleItem;

	//-----------------------------------------------------------
	// Tracking attributes: used for the vertical and description 
	// area splitters tracking:
	//-----------------------------------------------------------
	CRect		m_rectTrackHeader;
	CRect		m_rectTrackHeaderLeft;
	BOOL		m_bTracking;
	int			m_nTrackColumn;

	//-----------------------------
	// Mouse tracking, highlighting
	//-----------------------------
	BOOL		m_bMouseTracked;
	BOOL		m_bHeaderItemHovered;

	//--------------------------
	// In-place edit attributes:
	//--------------------------
	BOOL		m_bUpdateItemData;			// FALSE to cancel edit changes
	BOOL		m_bClearInplaceEditOnEnter;
	DWORD		m_dwBeginEditReason;// BeginEditFlags, reason why the in-place edit starts
	DWORD		m_dwEndEditResult;	// EndEditResultFlags, result of in-place edit, used in OnEndInplaceEdit()

	AFX_GRID_ITEM_INFO	m_CurrentItemInfo;

	int m_nRowsBlockSize;	// Specifies the memory-allocation granularity for internal containers

	CList<CMFCGridRow*, CMFCGridRow*>		m_lstItems;			// List of top-level items
	CList<CMFCGridRow*, CMFCGridRow*>		m_lstPaginItems;			// List of top-level items
	CList<CMFCGridRow*, CMFCGridRow*>		m_lstTerminalItems;	// List of terminal items
	CList<CMFCGridRow*, CMFCGridRow*>		m_lstGroupedItems;	// List of grouped items
	CList<CMFCGridRow*, CMFCGridRow*>		m_lstAutoGroups;
	CArray <CMFCGridPage, CMFCGridPage&>	m_arrPages;			// Pages, used when printing

	CMap<int, int, CRuntimeClass*, CRuntimeClass*>
					m_mapItemsRTC;			// Default item class by column
	CRuntimeClass*	m_pDefaultItemRTC;		// Default item class

	CList<CMFCGridRange*, CMFCGridRange*>	m_lstSel;		// Current selection
	CMFCGridItemID							m_idActive;		// Active item
	CMFCGridItemID							m_idLastSel;	// Last selected item
	CMFCGridRow*							m_pSelRow;		// Current selection
	CMFCGridItem*							m_pSelItem;		// Current selection
	CMFCGridRow*							m_pLastSelRow;	// Last selected row
	CMFCGridItem*							m_pLastSelItem;	// Last selected item
	CRect									m_rectTrackSel;	// Selected area
	CRect									m_rectClipSel;  // Clipped selected area

	CMFCGridItem*		m_pSetSelItem;	// used in CMFCGridCtrl::DoSetSelection

	//----------------------
	// Selecting attributes:
	//----------------------
	BOOL		m_bSelecting;			// Is selecting range of items?
	BOOL		m_bSelectingScroll;		// Need to scroll while selecting a range
	BOOL		m_bClickTimer;			// Used for deferred item click
	CPoint		m_ptClickOnce;			// Saved point for item click
	BOOL		m_bIsFirstClick;		// Is first click?
	BOOL		m_bIsButtonClick;		// Is button click?
	BOOL		m_bHeaderColSelecting;	// Is selecting by column header?
	BOOL		m_bHeaderRowSelecting;	// Is selecting by row header?
	
	BOOL		m_bRebuildTerminalItems;// If FALSE - do not rebuild terminal items
	BOOL		m_bNoUpdateWindow;		// To prevent flickering
	BOOL		m_bInAdjustLayout;		
	BOOL		m_bPostAdjustLayout;
	BOOL		m_bIgnoreShiftBtn;
	BOOL		m_bIgnoreCtrlBtn;

	BOOL		m_bFocused;				// Control has focus

	COLORREF	m_clrGray;				// Special gray color
	COLORREF	m_clrSortedColumn;		// Background color to mark sorted column

	BOOL		m_bReadOnly;			// Is control in read-only mode?
	BOOL		m_bSelectionBorder;		// Draw border around the selected items
	BOOL		m_bEditFirstClick;		// Create inplace edit on first click
	BOOL		m_bHighlightGroups;		// Highlight groups with grey color
	BOOL		m_bControlBarColors;	// Use colors of tye parent control bar
	BOOL		m_bShowDragContext;		// Show context while dragging spliters
	BOOL		m_bSingleSel;			// Allows only one item at a time to be selected
	BOOL		m_bWholeRowSel;			// Allows only the whole row to be selected
	BOOL		m_bInvertSelOnCtrl;		// If TRUE, deselect item on single click
	BOOL		m_bClearSelOnEmptySpace;// If TRUE, select nothing on click at empty space
	BOOL		m_bSetSelOnCheckBox;	// If TRUE, update selection on checkbox click
	BOOL		m_bMarkSortedColumn;	// Mark sorted column by background color
	BOOL		m_bDrawFocusRect;		// Draw frame rect around an active row
	BOOL		m_bShowInPlaceToolTip;	// Show in-place tooltips for truncated items
	BOOL		m_bRowMarker;			// Show marker at left of the currently active row
	BOOL		m_bLineNumbers;			// Show line numbers at the row header
	BOOL		m_bFillLeftOffsetArea;	// Fill left hierarchy offset area with special color
	BOOL		m_bHighlightActiveItem;	// If TRUE - fill active item with selected color
	BOOL		m_bSelectionBorderActiveItem; // Draw frame rect around an active item
	BOOL		m_bGridItemBorders;		// If FALSE - do not allow item to draw its borders
	BOOL		m_bUseQuickSort;		// If TRUE - use QSORT algorithm, TRUE by default
	BOOL		m_bGridLines;			// Draw grid lines
	BOOL		m_bTreeLines;			// Draw tree lines
	BOOL		m_bTreeButtons;			// Has buttons
	BOOL		m_bCheckBoxes;			// Check boxes for rows
	BOOL		m_bAlternateRows;		// If FALSE, do not use alternate coloring for Even and Odd rows
	BOOL		m_bWholeCellSel;		// If TRUE, only the whole cell may be selected

	//---------------
	// Custom colors:
	//---------------
	CMFCGridColors	m_ColorData;

	BOOL		m_bAutoUpdateThemeOnVMChange;

	CBrush		m_brBackground;
	CBrush		m_brGroupBackground;
	CBrush		m_brSelBackground;
	CPen		m_penHLine;
	CPen		m_penVLine;
	CPen		m_penTreeLine;

	//---------------
	// Print support:
	//---------------
	HFONT		m_hPrinterFont;		// if NULL, mirror display font
	HFONT		m_hPrinterBoldFont;	// if NULL, mirror display font
	HFONT		m_hMirrorFont;		// font object used when mirroring
	HFONT		m_hMirrorBoldFont;	// bold font object used when mirroring
	BOOL		m_bIsPrinting;		// TRUE, when printing
	CDC*		m_pPrintDC;			// DC for printing
	
	COLORREF	m_clrPrintBorder;	// Color of the grid border lines
	COLORREF	m_clrPrintHeader;	// Color of the header lines
	COLORREF	m_clrPrintHeaderBG;	// Header background
	COLORREF	m_clrPrintGroup;	// Color of the group underline
	COLORREF	m_clrPrintGroupBG;	// Group background
	COLORREF	m_clrPrintLeftOffset;// Background for the left hierarchy offset area
	COLORREF	m_clrPrintBG;		// Item background
	COLORREF	m_clrPrintLine;		// Color of the grid lines
	COLORREF	m_clrPrintText;		// Color of foreground text

	BOOL		m_bBreakColumnsAcrossPrintPages; // Allow column to break across pages

	// Printing parameters, used when printing:
	struct PrintParams {
		int				m_nRowHeight;		// Height of the single row
		int				m_nLargeRowHeight;	// Height of the group row
		int				m_nGroupByBoxHeight;// GroupByBox height
		int				m_nRowHeaderWidth;	// Width of the row header
		int				m_nPageHeaderHeight;// Page header height
		int				m_nPageFooterHeight;// Page footer height
		CRect			m_rectHeader;		// Header area
		CRect			m_rectRowHeader;	// Left header area
		CRect			m_rectSelectAllArea;// "Select all" area at top left corner
		CRect			m_rectList;			// Grid area
		CMFCGridCache	m_CachedPrintItems;	// Page cache for virtaul mode

		int				m_nVertScrollOffset;
		int				m_nHorzScrollOffset;// pixels in print dc

		CPrintInfo*			m_pPrintInfo;
		CMFCGridPageInfo	m_pageInfo;

		CMFCGridItemID	m_idCur;			// Cached index for currently processing item

		int				m_nBaseHeight;		// Height of the row with one line of text
		int				m_nButtonWidth;		// Width of buttons
	};
	PrintParams m_PrintParams;

	//------------------------
	// Header items drag/drop:
	//------------------------
	BOOL	m_bDragHeaderItems;
	int		m_nDraggedColumn;
	CRect	m_rectStartDrag;
	CPoint	m_ptStartDrag;
	BOOL	m_bDragGroupItem;
	BOOL	m_bDragFromChooser;
	
	CMFCHeaderItemDragWnd*	m_pWndHeaderDrag;			// Drag indicator
	CMFCHeaderItemDropWnd*	m_pWndHeaderDrop;			// Drop indicator

	CMFCGridColumnChooser*	m_pColumnChooser;
	CRect					m_rectColumnChooser;
	BOOL					m_bColumnChooserVisible;
	CString					m_strFieldChooserEmptyContentLabel;
	BOOL					m_bFieldChooserThemed;

	static HCURSOR m_hcurDeleteColumn;
	static HCURSOR m_hcurNoDropColumn;

	//-----------------
	// Items Drag/drop:
	//-----------------
	BOOL	m_bDragSelection;
	BOOL	m_bDragSelectionBorder;

	enum DropArea
	{
		DropBefore,
		DropAfter,
		DropAt
	};

	BOOL			m_bDragDrop;		// Is dragging items?
	BOOL			m_bDragEnter;		// Used when dragging items from another application
	BOOL			m_bClickDrag;		// Used for deferred item click
	BOOL			m_bDragRowHeader;	// Is dragging by row header?
	CMFCGridItemID	m_idDragFrom;
	CMFCGridItemID m_idDropTo;
	DROPEFFECT		m_DropEffect;
	DropArea		m_DropArea;
	CRect			m_rectDragFrame;	// Drag indicator
	CRect			m_rectDragMarker;	// Drag indicator
	CPen			m_penDrag;
	BOOL			m_bCut;				// TRUE after Cut operation

	CMFCGridSerializeManager*	m_pSerializeManager;
	CMFCGridCtrlDropTarget		m_DropTarget;

	enum {	GRID_CLICKVALUE_TIMER_ID = 1,
			GRID_AUTOSCROLL_TIMER_ID = 2,
			GRID_AUTOSCROLL_TIMER_INTERVAL = 100,
			GRID_CLICKVALUE_TIMER_INTERVAL = 200};

	//------------
	// Merge cells
	//------------
	CList <CMFCGridItem*, CMFCGridItem*>	m_lstMergedItemsToUpdate; // used in UpdateMergedItems()
	CList <CMFCGridItem*, CMFCGridItem*>	m_lstMergedItemsToRedraw; // used in RedrawMergedItems()

	//-------
	// Filter
	//-------
	BOOL					m_bFilter;				// Is filter enabled?
	AFX_GRID_FILTERCALLBACK m_pfnFilterCallback;	// callback function
	LPARAM					m_lFilterParam;			// filter info which is used by the callback function
	CMFCGridFilter*		m_pDefaultFilter;		// Implements the default callback function

	BOOL					m_bDefaultFilterMenuPopup;
	UINT					m_uiDefaultFilterMenuResId;
	UINT					m_uiDefaultFilterApplyCmd;

	BOOL						m_bFilterBar;			// Enables filter row
	AFX_GRID_FILTERBAR_PARAM	m_paramsFilterBar;
	CMFCToolBarImages			m_ImageSearch;
	BOOL						m_bNoFilterBarUpdate;	// Used in OnFilterBarUpdate
	int							m_nFocusedFilter;		// zero-based index of the active filter edit, -1 if none
	CMFCButton					m_btnFilterClear;

	BOOL					m_bOutOfFilter;
	CString					m_strOutOfFilter;

	//-------------
	// Find/Replace
	//-------------
	CFindReplaceDialog*	m_pFindDlg;

	static CString		m_strFindText;
	static DWORD		m_dwFindMask;
	static DWORD		m_dwFindParamsEx;

	//---------------
	// Export to HTML
	//---------------
	CString m_strExportCSVSeparator;
	DWORD	m_dwDefaultExportToHtmlFlags;
	DWORD	m_dwDefaultExportToCsvFlags;
	CList<int, int> m_lstExportSkipColumns;

	//----------------------
	// Accessibility support:
	//----------------------
	CMFCGridRow*	m_pAccRow;
	CMFCGridItem*	m_pAccItem;
	int				m_nAccLastIndex;

	//------------------------
	// Conditional formatting:
	//------------------------
	CMFCToolBarImages	m_StateImages;		    // Grid cell state icons
	CMFCGridDataStateIcons m_mapStateIcons;    // Custom data State Icon Set by column
	CMFCGridDataBarColors  m_mapDataBarColors; // Custom Data Bar Colors by column

	//-------------------------
	// For the chart renderrng:
	//-------------------------
	//CMFCGraphicsManager* m_pGM;

public:
	static BOOL	m_bUseSystemFont;

	//-------------------------
	// Accessibility support:
	//-------------------------
	BOOL m_bAccGridItemValueAsName;

private:
	CMFCGridItemID		m_idCur;		// Cached index for currently processing item
	CList<CMFCGridRow*, CMFCGridRow*>		m_lstOldAutoGroups;	// used in ReposItems()

	int* m_aSortOrder;	// Use SetSortOrder/GetSortOrder to access;
	int m_nSortCount;	// used in DoRebuildTerminalItems, DoMultiColumnCompare.
	int m_nGroupCount;	//

// Operations
public:
	int AddRow (BOOL bRedraw = TRUE);
	int AddRow (CMFCGridRow* pItem, BOOL bRedraw = TRUE);
	int AddCaptionRow (const CString& strCaption, BOOL bRedraw = TRUE);
	int InsertRowBefore (int nPos, CMFCGridRow* pItem, BOOL bRedraw = TRUE);
	int InsertRowAfter (int nPos, CMFCGridRow* pItem, BOOL bRedraw = TRUE);
	int RemoveRow (int nPos, BOOL bRedraw = TRUE);
	virtual void RemoveAll ();
	void RebuildIndexes (int nStartFrom = -1);

	CMFCGridRow* GetRow (int nPos) const;
	CMFCGridRow* GetVirtualRow (int nRow);
	BOOL IsEmpty () const;
	int GetRowCount (BOOL bIncludeAutoGroups = FALSE) const;

	int GetTotalRowCount (BOOL bCalcVisibleOnly = FALSE) const
	{
		return GetTotalItems (bCalcVisibleOnly);
	}

	CMFCGridRow* FindRowByData (DWORD_PTR dwData, BOOL bSearchSubItems = TRUE) const;

	CMFCGridRow* HitTest (CPoint pt, CMFCGridRow::ClickArea* pnArea = NULL, BOOL bItemsOnly = FALSE)
	{
		CMFCGridItemID id;
		CMFCGridItem* pItem = NULL;
		return HitTest (pt, id, pItem, pnArea, bItemsOnly);
	}

	CMFCGridRow* HitTest (CPoint pt, CMFCGridItemID &id, 
							CMFCGridItem*& pItem,
							CMFCGridRow::ClickArea* pnArea = NULL, 
							BOOL bItemsOnly = FALSE);

	void SetRowSel (CMFCGridRow* pItem, BOOL bRedraw=TRUE);
	virtual BOOL SetRowSel (CMFCGridItemID idItem,
				   DWORD dwSelMode = SM_SINGE_SEL_GROUP | SM_SINGLE_ITEM, 
				   BOOL bRedraw = TRUE);

	CMFCGridRow* GetRowCurSel () const;
	CMFCGridRow* GetRowCurSel (CMFCGridItemID &id) const;
	CMFCGridItem* GetCurSelItem (CMFCGridRow* pCurRow = NULL) const;
	CMFCGridItemID GetCurSelItemID () const;

	BOOL SelectColumn (int nColumn, BOOL bRedraw = TRUE);
	BOOL SelectRow (int nRow, BOOL bRedraw = TRUE);
	BOOL SelectAll (BOOL bRedraw = TRUE);

	BOOL IsRowSelected (int nRow, BOOL bAllItemsSelected = FALSE) const;
	BOOL IsColumnSelected (int nColumn, BOOL bAllItemsSelected = FALSE) const;
	BOOL IsAllSelected () const;
	BOOL IsItemSelected (const CMFCGridItemID& id) const;
	void GetSelectedItems (CList <CMFCGridItem*, CMFCGridItem*> &lstSelected);
	int  GetSelectionCount () const;
	BOOL GetSelection (int nIndex, CMFCGridRange& range) const;

	BOOL CanClearRange (const CMFCGridRange& range,
						BOOL bQueryNonEmptyItems = FALSE, BOOL* pbPrevQuery = NULL, BOOL bOnReplace = FALSE);
	BOOL ClearRange (const CMFCGridRange& range, BOOL bRedraw = TRUE,
					 BOOL bQueryNonEmptyItems = FALSE, BOOL* pbPrevQuery = NULL);

	BOOL NormalizeSelectionList ();
	int RemoveSelectedRows (BOOL bRedraw = TRUE);

	BOOL IsRowVisible (CMFCGridRow* pItem) const;

	virtual void EnsureVisible (CMFCGridRow* pItem, BOOL bExpandParents = FALSE);
	virtual void EnsureVisible(int nIndex, BOOL bPartialOK = TRUE);
	void EnsureVisibleColumn (int nColumn);
	void ExpandAll (BOOL bExpand = TRUE);

	CRect GetRect (const CMFCGridRange &range, BOOL bUpdateRect = TRUE);

	BOOL IsValidID (const CMFCGridItemID &id) const;
	BOOL IsValidRange (const CMFCGridRange &range) const;
	BOOL IsItemInRange (const CMFCGridRange &rangeIndex, const CMFCGridItemID &idItem) const;
	BOOL IndexToOrder (CMFCGridRange &rangeIndex) const;
	void UnionRange (CMFCGridRange* pRange, const CMFCGridRange* pRange2);

	virtual void CloseColorPopup ();
	virtual void UpdateColor (COLORREF color);

	// -------
	// Columns
	// -------
	int  InsertColumn (int nPos, LPCTSTR lpszColumn, UINT nFormat, int nWidth, int nImage=-1, BOOL bHideNameWithImage = TRUE);
	BOOL DeleteColumn (int nPos);
	virtual void DeleteAllColumns ();

	int GetColumnCount() const;

	int  GetColumnWidth(int nCol) const;
	BOOL SetColumnWidth(int nCol, int nWidth);

	CString GetColumnName(int nCol) const;
	BOOL GetColumn(int nCol, LVCOLUMN* pColumn) const;

	BOOL SetColumnName(int nCol, LPCTSTR lpszColumn);

	BOOL GetColumnTextHidden (int nColumn) const;
	BOOL SetColumnTextHidden (int nColumn, BOOL bHideTextInHeader);

	int  GetColumnAlign(int nCol) const;
	BOOL SetColumnAlign(int nCol, int nAlign);

	int  GetHeaderAlign(int nCol) const;
	BOOL SetHeaderAlign(int nCol, int nAlign);

	BOOL GetColumnLocked(int nCol) const;
	BOOL SetColumnLocked(int nCol, BOOL bLockedSize = TRUE);

	BOOL GetColumnVisible (int nColumn) const;
	BOOL SetColumnVisible (int nColumn, BOOL bVisible);
	
	BOOL IsTextColumn (int nColumn) const;
	BOOL SetTextColumn (int nColumn, BOOL bText);
	
	int  GetColumnOrderArray (LPINT piArray, int iCount) const;
	BOOL SetColumnOrderArray (int iCount, LPINT piArray);

	int GetColumnOrder (int nIndex) const
	{
		return (nIndex < 0 || nIndex >= GetColumnsInfo ().GetColumnCount ()) ? 
			-1 : GetColumnsInfo ().IndexToOrder (nIndex);
	}

	void EnableColumnAutoSize (BOOL bEnable = TRUE);

	BOOL IsColumnAutoSizeEnabled () const 
	{
		return GetColumnsInfo ().IsAutoSize ();
	}

	void ShowColumnsChooser (BOOL bShow = TRUE, BOOL bVisualManagerStyle = FALSE);
	BOOL IsColumnsChooserVisible () const;

	void UpdateColumnsChooser ();

	const CString& GetFieldChooserEmptyContentLabel() const
	{
		return m_strFieldChooserEmptyContentLabel;
	}

	void SetFieldChooserEmptyContentLabel(const CString& strFieldChooserEmptyContentLabel);

	//------------
	// Merge cells
	//------------
	void MergeSelection (BOOL bRedraw = TRUE);
	void UnMergeSelection (BOOL bRedraw = TRUE);
	void MergeRange (const CMFCGridRange& range, BOOL bRedraw = TRUE);
	void UnMergeRange (const CMFCGridRange& range, BOOL bRedraw = TRUE);

	//---------------
	// Freeze columns
	//---------------
	void FreezeColumns (int nColumnCount, BOOL bRedraw = TRUE);

	void UnfreezeColumns (BOOL bRedraw = TRUE)
	{
		FreezeColumns (-1, bRedraw);
	}

	void FreezeGroups (BOOL bFreeze = TRUE, BOOL bRedraw = TRUE);

	// -----
	// Print
	// -----
	void SetPrinterFont(CFont* pFont, CFont* pFontBold);
	void Print ();
	void ExportXLS();


	PrintParams& GetPrintParams ()	{ return m_PrintParams; }
	CDC* GetPrintDC ()	{ return m_pPrintDC; };
	CFont* GetPrinterFont()	{ return CFont::FromHandle (m_hPrinterFont); }
	COLORREF GetPrintTextColor () const	{ return m_clrPrintText; }

	//---------------
	// Export to HTML
	//---------------
	BOOL SetExportTextSeparator (DWORD dwExportFlags, CString strSeparator);

	//------------------------
	// Conditional formatting:
	//------------------------
	void SetCustomDataIconSet (CMFCToolBarImages* pImages, int nColumn = -1, BOOL bReverseOrder = FALSE, CMFCGridDataStateIconset::ImagePlacementHorz placement = CMFCGridDataStateIconset::ImagePlacementHorzLeft);
	CMFCToolBarImages* GetCustomDataIconSet (int nColumn = -1, CMFCGridDataStateIconset** ppInfo = NULL) const;

	void SetCustomDataBarColors (int nColumn = -1, COLORREF clrBorder = -1, COLORREF clrFill = -1, COLORREF clrGradient = -1, int nGradientAngle = 0);
	AFX_GRID_COLOR_DATA::ColorData* GetCustomDataBarColors (int nColumn = -1) const;

// Overrides
	virtual void OnItemChanged (CMFCGridItem* pItem, int nRow, int nColumn);
	virtual BOOL OnBeginDrag (CPoint point);

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCGridCtrl)
	public:
	virtual BOOL Create(CWnd* pParentWnd, int x, int y, int w, int h);
	virtual BOOL Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual CScrollBar* GetScrollBarCtrl(int nBar) const;
	protected:
	virtual void PreSubclassWindow();
	//}}AFX_VIRTUAL

public:
	virtual CMFCGridRow* CreateRow ()
	{
		return new CMFCGridRow (0, 0, GetRowBlockSize ());
	}

	virtual CMFCGridRow* CreateRow (int nColumns);
	virtual CMFCGridRow* CreateRow (CString strName);
	virtual CMFCGridRow* CreateCaptionRow (CString strCaption);
	virtual CMFCGridRow* CreateMultiLineRow (int nLines);
	
	virtual CMFCGridItem* CreateItem (int nRow, int nColumn);

	void SetItemRTC (int nColumn, CRuntimeClass* pRuntimeClass);
	void SetDefaultItemRTC (CRuntimeClass* pRTC) { m_pDefaultItemRTC = pRTC;}
	CRuntimeClass* GetItemRTC (int nColumn) const;
	CRuntimeClass* GetDefaultItemRTC () const	{ return m_pDefaultItemRTC; }
	virtual BOOL CanReplaceItem (int nRow, int nColumn, CRuntimeClass* pNewRTC);

	virtual void OnPosSizeChanged ();

	virtual void OnChangeSelection (CMFCGridRow* pNewSel, CMFCGridRow* pOldSel) 
	{
		UNREFERENCED_PARAMETER(pNewSel);
		UNREFERENCED_PARAMETER(pOldSel);
	}

	virtual BOOL EditItem (CMFCGridRow* pItem, LPPOINT lptClick = NULL);
	virtual void OnClickButton (CPoint point);
	virtual BOOL EndEditItem (BOOL bUpdateData = TRUE);
	virtual BOOL ValidateItemData (CMFCGridRow* /*pItem*/)
	{
		return TRUE;
	}

	virtual BOOL OnDrawItem (CDC* pDC, CMFCGridRow* pItem);
	virtual void OnMeasureListRect (CRect& rect);
	virtual void AdjustLayout ();

	virtual BOOL IsPreviewRowEnabled () const;
	virtual CRect OnGetPreviewRowMargins (CMFCGridRow* pRow) const;

	virtual int GetExtraHierarchyOffset () const;
	int GetHierarchyOffset (const CMFCGridRow* pRow) const;
	virtual int GetHierarchyOffset () const { return GetColumnsInfo ().GetGroupColumnCount () * GetHierarchyLevelOffset ();}
	virtual int GetHierarchyLevelOffset () const { return m_nBaseHeight/2;}
	virtual int GetLeftMarginWidth () const { return m_nBaseHeight/2; }

	//------------
	// Merge cells
	//------------
	virtual void OnMergeCellsChanging (const CMFCGridRange& range, BOOL bMerge) 
	{
		UNREFERENCED_PARAMETER(range);
		UNREFERENCED_PARAMETER(bMerge);
	}

	virtual void OnMergeCellsChanged (const CMFCGridRange& range, BOOL bMerge) 
	{
		UNREFERENCED_PARAMETER(range);
		UNREFERENCED_PARAMETER(bMerge);
	}

	virtual BOOL CanMergeRange (const CMFCGridRange& /*range*/, BOOL /*bMerge*/) {return TRUE;}

	// -----
	// Print
	// -----
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrintPageHeader(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrintPageFooter(CDC* pDC, CPrintInfo* pInfo);

	virtual CRect OnGetPageMargins (CDC* pDC, CPrintInfo* pInfo);

	virtual void OnPreparePrintPages (CPrintInfo* pInfo,
									int nFirstItem, int nLastItem);
	virtual int  OnCalcPrintPages (CDC* pDC, CPrintInfo* pInfo);
	virtual void PrintLayout (CDC* pDC, CPrintInfo* pInfo);
	virtual int  CalcPages (CDC* pDC, CPrintInfo* pInfo);
	virtual int  OnAddGridPageRowForPrint (CMFCGridPage& page, CRect rectPage);
	virtual BOOL OnStartColumnOnNewPrintPage (int nColumn);
	virtual BOOL OnBreakColumnAcrossPrintPages (int nColumn);

	virtual int OnPrintItem (CDC* pDC, CPrintInfo* pInfo, CMFCGridRow* pItem) const;

	//--------------
	// Drag and drop
	//--------------
	virtual BOOL OnHideInsertedGroupColumn (int /*nColumn*/) const
	{
		return FALSE;
	}

	virtual BOOL CanHideColumn (int nColumn) const
	{
		UNREFERENCED_PARAMETER(nColumn);
		return (m_dwHeaderFlags & AFX_GRID_HEADER_HIDE_ITEMS) != 0;
	}
	
	virtual BOOL CanDropColumn (int nNewPosition, int nOldPosition) const
	{
		UNREFERENCED_PARAMETER(nNewPosition);
		UNREFERENCED_PARAMETER(nOldPosition);
		return TRUE;
	}

	virtual BOOL CanDropColumnToColumnChooser (int nColumn) const
	{
		UNREFERENCED_PARAMETER(nColumn);
		return TRUE;
	}	

	virtual CMFCGridRow* CreateRowFromArchive (CArchive& ar, int nRow = -1);
	virtual CMFCGridItem* CreateItemFromArchive (CArchive& ar, int nRow, int nColumn);

	virtual BOOL ReplaceItemFromArchive(CArchive& ar, CMFCGridRow* pRow, int nColumn, BOOL bTestMode = FALSE);
	virtual BOOL AddItemFromArchive(CArchive& ar, CMFCGridRow* pRow, int nColumn, BOOL bTestMode = FALSE);

	virtual BOOL CreateSerializeManager ();

	virtual DROPEFFECT OnDragEnter(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual void OnDragLeave();
	virtual DROPEFFECT OnDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual BOOL OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point);
	virtual DROPEFFECT OnDragScroll(DWORD dwKeyState, CPoint point);

	//-----------------
	// Save/Load state:
	//-----------------
	virtual CString GetRegSectionPath (LPCTSTR lpszProfileName, int nIndex = 0);
	virtual BOOL LoadState (LPCTSTR lpszProfileName, int nIndex = 0);
	virtual BOOL SaveState (LPCTSTR lpszProfileName, int nIndex = 0);
	virtual BOOL ResetState ();
	
	//---------------
	// Export to HTML
	//---------------
	enum ExportOptions
	{						
		EF_IncludeTextColor	      = 0x0100,
		EF_IncludeBackgroundColor = 0x0200,

		EF_IncludeHeader          = 0x1000
	};

	void SetExportRangeSkipList(CList<int, int>& lstSkipColumns);

	virtual void ExportRangeToHTML (CString& strHTML, const CMFCGridRange& range, DWORD dwFlags);
	virtual void ExportToHTML (CString& strHTML, DWORD dwFlags);
	virtual void ExportRowToHTML (CMFCGridRow* pRow, CString& strHTML, DWORD dwFlags);
	virtual void OnPrepareHTMLString (CString& str) const;

	enum ExportTextFormat
	{
		Format_CSV		= 0x01,	// Comma Separated Values
		Format_TabSV	= 0x02,	// Tab Separated Values
		Format_Html		= 0x10	// Html Text
	};

	virtual void ExportToCSV (CString& strText, DWORD dwFlags);
	virtual void ExportRangeToText (CString& strText, const CMFCGridRange& range, 
									DWORD dwFlags); // dwFlags - Format_CSV or Format_TabSV
	virtual void OnPrepareTextString (CString& str, DWORD dwFlags) const;
	virtual CString GetExportTextDelimiter (DWORD dwFlags) const;

	//----------
	// Clipboard
	//----------
	virtual BOOL Cut (DWORD dwFlags = (DWORD) -1);	// dwFlags - Format_CSV, Format_TabSV, Format_Html
	virtual BOOL Copy (DWORD dwFlags = (DWORD) -1); // dwFlags - Format_CSV, Format_TabSV, Format_Html
	virtual BOOL Paste ();
	virtual BOOL Clear (BOOL bQueryNonEmptyItems = TRUE);
	virtual BOOL Delete ();
	
	virtual BOOL IsCutEnabled () const;
	virtual BOOL IsCopyEnabled () const;
	virtual BOOL IsPasteEnabled () const;
	virtual BOOL IsClearEnabled () const;
	virtual BOOL IsDeleteEnabled () const;

	virtual BOOL OnQueryClearNonEmptyItem (const CMFCGridItem* pItem) const;
	virtual BOOL OnQueryReplaceNonEmptyItem (const CMFCGridItem* pItem) const;

	virtual BOOL CopyHTML ();
	virtual BOOL CopyCSV ();

	//-------------
	// Find/Replace
	//-------------
	virtual BOOL OpenFindReplaceDlg (BOOL bFindDialogOnly = TRUE);
	virtual void CloseFindReplaceDlg ();
	virtual BOOL Find (const CString& strFind, DWORD dwFindMask, DWORD dwFindParamsEx);
	virtual void OnPrepareFindString (CString& strFind);
	virtual void OnTextNotFound (LPCTSTR lpszFind);
	virtual void OnTextFound (LPCTSTR lpszFind, CMFCGridItemID idPos);

	//----------------------
	// Accessibility support:
	//----------------------
	virtual BOOL OnSetAccData (long lVal);

// IAccessible
	virtual HRESULT get_accChildCount(long *pcountChildren);
	virtual HRESULT get_accChild(VARIANT varChild, IDispatch **ppdispChild);
	virtual HRESULT get_accName(VARIANT varChild, BSTR *pszName);
	virtual HRESULT get_accValue(VARIANT varChild, BSTR *pszValue);
	virtual HRESULT get_accDescription(VARIANT varChild, BSTR *pszDescription);
	virtual HRESULT get_accRole(VARIANT varChild, VARIANT *pvarRole);
	virtual HRESULT get_accState(VARIANT varChild, VARIANT *pvarState);
	virtual HRESULT get_accHelp(VARIANT varChild, BSTR *pszHelp);
	virtual HRESULT get_accHelpTopic(BSTR *pszHelpFile, VARIANT varChild, long *pidTopic);
	virtual HRESULT get_accKeyboardShortcut(VARIANT varChild, BSTR *pszKeyboardShortcut);
	virtual HRESULT get_accFocus(VARIANT *pvarChild);
	virtual HRESULT get_accSelection(VARIANT *pvarChildren);
	virtual HRESULT get_accDefaultAction(VARIANT varChild, BSTR *pszDefaultAction);

	virtual HRESULT accSelect(long flagsSelect, VARIANT varChild);
	virtual HRESULT accLocation(long *pxLeft, long *pyTop, long *pcxWidth, long *pcyHeight, VARIANT varChild);
	virtual HRESULT accHitTest(long xLeft, long yTop, VARIANT *pvarChild);

	//--------------
	// Color themes:
	//--------------
	virtual void OnColorThemeChanged ();
	virtual BOOL IsTreeControl() const { return FALSE; }

protected:
	virtual void InitConstructor ();
	virtual void Init ();
	virtual void InitColors ();
	virtual void CleanUpColors ();
	virtual void SetRowHeight ();
	virtual void SetRowHeaderWidth ();

	virtual void OnFillBackground (CDC* pDC, CRect rectClient);

	virtual COLORREF OnFillSelItem (CDC* pDC, CRect rectFill, CMFCGridItem* pItem);
	virtual void OnFillLeftOffset (CDC* pDC, CRect rectFill, CMFCGridRow* pRow,
									BOOL bDrawRightBorder = TRUE);
	virtual BOOL OnAlternateColor (const CMFCGridItemID& id);

	virtual void OnDraw(CDC* pDCPaint);
	virtual void OnDrawList (CDC* pDC);
	virtual void OnDrawGroupByBox (CDC* pDC, CRect rect);
	virtual void OnDrawHeader (CDC* pDC);
	virtual void OnDrawSortArrow (CDC* pDC, CRect rectArrow, BOOL bAscending);
	virtual void OnFillHeaderBackground (CDC* pDC, CRect rect);
	virtual void OnDrawHeaderItemBorder (CDC* pDC, CRect rect, int nCol);
	virtual COLORREF OnGetHeaderItemTextColor(BOOL bSelected, BOOL bIsGroupBox, int nCol, CMFCHeaderItem* pHeaderItem = NULL);
	virtual void OnFillRowHeaderBackground (CDC* pDC, CRect rect);
	virtual void OnDrawRowHeaderItem (CDC* pDC, CMFCGridRow* pItem);
	virtual void OnDrawSelectAllArea (CDC* pDC);
	virtual void OnDrawLineNumber (CDC* pDC, CMFCGridRow* pRow, CRect rect, BOOL bSelected, BOOL bPressed);
	virtual void OnDrawTreeLines (CDC* pDC, CMFCGridRow* pRow, CRect rect);
	virtual void OnFillFilterBar (CDC* pDC);
	virtual void OnDrawGridHeader (CDC* pDC);
	virtual void OnDrawGridFooter (CDC* pDC);
	virtual void OnDrawSelectionBorder (CDC* pDC);
	virtual void OnDrawDragMarker (CDC* pDC);
	virtual void OnDrawDragFrame (CDC* pDC);
	virtual void OnDrawCheckBox (CDC* pDC, CRect& rect, int nState, BOOL bHighlighted, BOOL bPressed, BOOL bEnabled, UINT nHorzAlign = 0, UINT nVertAlign = 0);

	virtual void DrawHeaderItem (CDC* pDC, CRect rect, CMFCHeaderItem* pHeaderItem);
	virtual void PrintHeaderItem (CDC* pDC, CRect rect, CRect rectClip, CMFCHeaderItem* pHeaderItem);
	virtual void DrawHeaderPart (CDC* pDC, const CMFCGridHeaderParams& params);
	virtual void FillHeaderPartBackground (CDC* pDC, const CMFCGridHeaderParams& params);
	virtual void OnGetHeaderBorders (CRect& rectInner, CRect& rectOuter, const CMFCGridHeaderParams& params);

	virtual CRect OnGetSelectionRect ();

	virtual BOOL OnGetPageHeaderRect (CDC* pDC, CPrintInfo* pInfo, CRect& rect);
	virtual BOOL OnGetPageFooterRect (CDC* pDC, CPrintInfo* pInfo, CRect& rect);
	virtual CRect OnGetGroupByBoxRect (CDC* pDC, const CRect& rectDraw);
	virtual CRect OnGetHeaderRect (CDC* pDC, const CRect& rectDraw);
	virtual CRect OnGetFilterBarRect (CDC* pDC, const CRect& rectDraw);
	virtual CRect OnGetRowHeaderRect (CDC* pDC, const CRect& rectDraw);
	virtual CRect OnGetSelectAllAreaRect (CDC* pDC, const CRect& rectDraw);
	virtual CRect OnGetGridRect (CDC* pDC, const CRect& rectDraw);

	virtual void SetPrintColors ();

	virtual void OnPrintHeader(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrintRowHeaderItem(CDC* pDC, CPrintInfo* pInfo, CMFCGridRow* pItem);
	virtual void OnPrintSelectAllArea(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrintLineNumber (CDC* pDC, CPrintInfo* pInfo, CMFCGridRow* pRow, CRect rect);
	virtual void OnPrintList(CDC* pDC, CPrintInfo* pInfo);

	virtual BOOL ProcessClipboardAccelerators (UINT nChar);

	virtual BOOL OnTrackHeader ()
	{
		return TRUE; // resize columns inside client area by mouse
	}

	virtual void OnRowCheckBoxClick(CMFCGridRow* pRow);
	virtual void OnHeaderCheckBoxClick(int nColumn);

	virtual void OnHeaderDividerDblClick (int /*nColumn*/) {}
	virtual void OnHeaderColumnClick (int nColumn);
	virtual void OnHeaderColumnRClick (int /*nColumn*/) {}
	virtual void GetHeaderTooltip (int nColumn, CPoint pt, CString& strText) const;

	virtual BOOL FilterItem (const CMFCGridRow* pRow);

	virtual BOOL IsHeaderMenuButtonEnabled (int nColumn) const;
	virtual int GetHeaderMenuButtonImageIndex (int nColumn, BOOL bSortArrow) const;
	virtual void OnDrawHeaderMenuButton (CDC* pDC, CRect rect, int nColumn, BOOL bSortArrow);
	virtual void OnHeaderMenuButtonClick (int nColumn, CRect rectMenuButton);
	virtual CRect GetHeaderMenuButtonRect (CRect rectItem, int nColumn) const;
	virtual void GetHeaderMenuButtonTooltip (int nColumn, CString& strText) const;

	virtual void OnSelectAllClick ();
	virtual void DoColumnHeaderClick (int nColumnHit, CPoint point, CMFCGridColumnsInfo::ClickArea clickAreaHeader);
	virtual void DoRowHeaderClick (CMFCGridRow* pRow, CPoint point, CRect rect);
	virtual void DoRowHeaderSelectClick (CMFCGridRow* pRow, CPoint point, CRect rect);
	virtual void OnRowHeaderClick (CMFCGridRow* pRow, CRect rect);
	virtual void OnRowHeaderDblClick (CMFCGridRow* pRow, CPoint point, CRect rect);

	virtual int CompareItems (const CMFCGridRow* pRow1, const CMFCGridRow* pRow2, int iColumn) const;
	virtual int CompareItems (const CMFCGridItem* pItem1, const CMFCGridItem* pItem2) const;
	virtual int CompareGroup (const CMFCGridRow* pRow1, const CMFCGridRow* pRow2, int iColumn);
	virtual int DoMultiColumnCompare (const CMFCGridRow* pRow1, const CMFCGridRow* pRow2);

	// Grouping:
	virtual BOOL OnDropToGroupByBox (int /*nColumn*/)
	{
		return TRUE; 
		// Return FALSE - to disable certain columns 
		// from being dropped in the group by list
	}

	virtual CString GetGroupName (int nGroupCol, CMFCGridItem* pItem);

	virtual int OnGetGroupNumber (const CMFCGridRow* /*pRow*/, int /*iSortedColumn*/)
	{
		return -1;
	}

	virtual CString OnGetGroupText (int /*nGroupNumber*/, int /*iSortedColumn*/) 
	{
		CString str; return str;
	}

	virtual BOOL GetRowName (CMFCGridRow* pRow, CString& strName);
	virtual CString GetRowNumber (CMFCGridRow* pRow);
	
	virtual void OnItemUpdateFailed ()
	{
		{
			ReleaseCapture ();
		}
	}

	virtual BOOL IsEditFirstClick () const
	{
		return m_bEditFirstClick;
	}

	virtual BOOL AllowInPlaceEdit () const
	{
		return !m_bReadOnly;
	}

    virtual void OnUpdateVScrollPos (int nVOffset, int nPrevVOffset);
    virtual void OnUpdateHScrollPos (int nHOffset, int nPrevHOffset);
    virtual void OnAfterVScroll (int nVOffset, int nPrevVOffset);
    virtual void OnAfterHScroll (int nHOffset, int nPrevHOffset);

	//--------------
	// In-place edit
	//--------------
	virtual void OnBeginInplaceEdit (CMFCGridItem* pItem);
	virtual void OnEndInplaceEdit (CMFCGridItem* pItem);
	virtual void OnAfterInplaceEditCreated (CMFCGridItem* /*pItem*/, CWnd* /*pInplaceEdit*/) {}
	
	virtual BOOL IsAcceleratorKey (UINT nChar, UINT nRepCnt, UINT nFlags) const;
	virtual BOOL CanBeginInplaceEditOnChar (UINT nChar, UINT nRepCnt, UINT nFlags) const;
	virtual BOOL CanEndInplaceEditOnChar (UINT nChar, UINT nRepCnt, UINT nFlags) const;
	virtual BOOL OnInplaceEditKeyDown (CMFCGridRow* pSel, MSG* pMsg);

	virtual UINT OnInplaceEditSetSel (CMFCGridItem* pCurItem, UINT nReason) const;	// returns InplaceEditSetSelFlags, used for CMFCGridItem::DoSetSel
	virtual void DoInplaceEditSetSel (UINT nFlags);
	virtual UINT OnGridKeybordNavigation (CMFCGridItem* pCurItem, UINT nReason); // returns combination of Direction flags, used for GoToNextItem

	BOOL GoToNextItem (UINT nDirectionFlags);
	virtual BOOL OnEditEmptyValue (int nRow, int nColumn, CMFCGridItem* pItem);

	//-------------
	// Select items
	//-------------
	virtual void OnBeforeSelChange () {}
	virtual void OnSelChanging (const CMFCGridRange &range, BOOL bSelect);
	virtual void OnSelChanged (const CMFCGridRange &range, BOOL bSelect);
	
	//--------
	// Columns
	//--------
	virtual void OnResizeColumns ();
	virtual void OnHideColumnChooser ();
	virtual int OnGetColumnMinWidth (int nColumn) const;
	virtual int OnGetColumnAutoSize (int nColumn) const;

	//-----------------
	// Filter bar mode:
	//-----------------
	virtual BOOL IsRowFilteredByFilterBar (const CMFCGridRow* pRow);	// FALSE - show item, TRUE - hide item
	virtual BOOL IsItemFilteredByFilterBar (CMFCGridItem* pItem, int nColumn, const CString& strFilter);
	virtual void OnFilterBarUpdate (int nColumn);
	
	virtual CWnd* OnCreateFilterBarCtrl (int nColumn, LPCTSTR lpszPrompt);
	virtual void AdjustFilterBarCtrls ();
	virtual void UpdateFilterBarCtrlsFont ();
	virtual void UpdateFilterBarCtrlsTheme ();

	//-------------
	// Find/Replace
	//-------------
	virtual BOOL Search (CMFCGridItemID &idPos, CMFCGridItemID idStart, const AFX_GRID_FINDREPLACE_PARAM &params);
	virtual CMFCGridItem* SearchRow (CMFCGridRow* pRow, int &nPos, int nStart, const AFX_GRID_FINDREPLACE_PARAM &params);
	virtual CMFCGridItem* SearchColumn (int nCol, int &nPos, int nStart, const AFX_GRID_FINDREPLACE_PARAM &params);
	virtual BOOL SearchItem (CMFCGridItem* pItem, const AFX_GRID_FINDREPLACE_PARAM &params);
	virtual BOOL SearchPreview (CMFCGridRow* pRow, int &nPos, int nStart, const AFX_GRID_FINDREPLACE_PARAM &params);

	virtual void OnPrepareFindReplaceParams (AFX_GRID_FINDREPLACE_PARAM &params, 
		DWORD dwFindMask, DWORD dwFindParamsEx);
	
	CMFCGridItemID GetNextItemID (CMFCGridItemID id, BOOL bNext, AFX_GRID_FINDREPLACE_PARAM::ScanOrder scanOrder) const;

	//----------------------
	// Accessibility support:
	//----------------------
	virtual void NotifyAccessibility (CMFCGridRow* pRow, CMFCGridItem* pItem);
	int GetAccRowCount();

// Implementation
public:
	virtual ~CMFCGridCtrl();

	virtual int HitTestGroupByBox (CPoint point, LPRECT lprectItem = NULL);
	virtual int GetGroupByBoxDropIndex (CPoint point, LPPOINT lpptDrop = NULL);

	virtual CMFCGridRow* HitTestRowHeader (CPoint point, LPRECT lprectItem = NULL);
	virtual BOOL HitTestSelectionBorder (CPoint point) const;

	virtual BOOL IsSelectionBorderEnabled () const
	{
		return m_bSelectionBorder && !m_bWholeRowSel;
	}

	virtual BOOL DoDrawText (CDC* pDC, CString strText, CRect rect, UINT uiDrawTextFlags, LPRECT lpRectClip = NULL, BOOL bNoCalcExtent = FALSE);

	// Generated message map functions
protected:
	//{{AFX_MSG(CMFCGridCtrl)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg UINT OnGetDlgCode();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnDestroy();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS FAR* lpncsp);
	afx_msg void OnNcPaint();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnSysColorChange();
	afx_msg void OnSettingChange(UINT uFlags, LPCTSTR lpszSection);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	//}}AFX_MSG
	afx_msg LRESULT OnSetFont (WPARAM, LPARAM);
	afx_msg LRESULT OnGetFont (WPARAM, LPARAM);
	afx_msg void OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct);
	afx_msg void OnSelectCombo();
	afx_msg void OnCloseCombo();
	afx_msg void OnEditKillFocus();
	afx_msg void OnComboKillFocus();
	afx_msg void OnButtonKillFocus();
	afx_msg LRESULT OnMouseLeave(WPARAM,LPARAM);
	afx_msg LRESULT OnPrintClient(WPARAM wp, LPARAM lp);
	afx_msg LRESULT OnGridAdjustLayout(WPARAM wp, LPARAM lp);
	afx_msg LRESULT OnUpdateToolTips (WPARAM, LPARAM);
	afx_msg BOOL OnNeedTipText(UINT id, NMHDR* pNMH, LRESULT* pResult);
	afx_msg LRESULT OnFindReplace(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnSetControlVMMode (WPARAM, LPARAM);
	afx_msg LRESULT OnGetObject (WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnChangeVisualManager(WPARAM, LPARAM);
	DECLARE_MESSAGE_MAP()

	//------------------
	// Internal helpers:
	//------------------
	static HFONT GetDefaultFont ();
	virtual HFONT SetCurrFont (CDC* pDC);
	virtual void TrackHeader (int nOffset);
	virtual BOOL SetHeaderItemWidth (int nPos, int nWidth);
	virtual void TrackToolTip (CPoint point);

	void SetScrollSizes ();
	int CalcExtraHeightTotal ();

	int GetPageItems (int& nFirst, int& nLast, int nSearchFrom = 0) const;
	int GetTotalItems (BOOL bCalcVisibleOnly = FALSE) const;
	int GetTotalItems (int nCountFrom, int nCountTo, 
						BOOL bCalcVisibleOnly = FALSE) const;
	int GetGroupsCount (BOOL bCalcVisibleOnly = FALSE) const;
	int GetGroupsCount (int nCountFrom, int nCountTo, 
						BOOL bCalcVisibleOnly = FALSE) const;
	int OffsetVisibleRow (int nStartFrom, int nOffsetCount, BOOL bDirForward = TRUE) const;

	void PrepareRemoveRow (int nPos,
		CList <POSITION, POSITION>& lstDelItemsPos, 
		CList <CMFCGridRow*, CMFCGridRow*>& lstDelItemsPtr);
	int DoRemoveRows (
		CList <POSITION, POSITION>& lstDelItemsPos, 
		CList <CMFCGridRow*, CMFCGridRow*>& lstDelItemsPtr);

	BOOL DoRemoveRow (CMFCGridRow* pItemDel, BOOL bRedraw);
	BOOL DoRemoveRow (POSITION posDel, BOOL bRedraw);

	void SetupRow(CMFCGridRow* pRow, int nColumns);

	void SetRebuildTerminalItems ()
	{
		m_bRebuildTerminalItems = TRUE;
	}

	virtual void ReposItems ();
	virtual void ShiftItems (int dx, int dy);
	virtual void DoRebuildTerminalItems ();
	void SetSortOrder (int* aSortOrder, int nSortCount, int nGroupCount);
	BOOL GetSortOrder (int*& aSortOrder, int& nSortCount, int& nGroupCount) const;
	void CleanUpAutoGroups (AUTOGROUP_CLEANUP_MODE nMode = AG_FULL_CLEANUP);
	void CleanUp();

	virtual void UpdateFonts ();
	virtual void UpdateScaledFonts();
	virtual void CleanUpFonts ();
	virtual void CalcEditMargin ();

	CMFCGridItemID GetGridItemID (const CMFCGridItem* pItem) const
	{
		ASSERT_VALID (pItem);
		return pItem->GetGridItemID ();
	}

	BOOL DoSetSelection (const CMFCGridItemID& idItem, const DWORD dwSelMode, 
		BOOL bAddSelGroup, BOOL bRedraw,
		const int nFirstColumn, const int nFirstRow,
		const int nLastColumn, const int nLastRow);
	BOOL DoInvertSelection (const CMFCGridItemID& idItem, const DWORD dwSelMode, 
		BOOL bRedraw,
		const int nFirstColumn, const int nFirstRow,
		const int nLastColumn, const int nLastRow);
	void SelectRange (const CMFCGridRange &range, BOOL bSelect = TRUE, BOOL bRedraw = TRUE);
	void DoSelectRowInRange (CMFCGridRow* pRow, const CMFCGridRange &range, 
							BOOL bSelect, BOOL bRedraw);
	void InvalidateRange (const CMFCGridRange &range);
	void DoInvalidateRowInRange (CMFCGridRow* pRow, const CMFCGridRange &range,
							CRect& rectUpdate, BOOL bRangeOnly = FALSE) const;
	static void IncludeRect (CRect& rect, const CRect& rectNew);

	BOOL SendNotification (AFX_GRID_NOTIFICATION* pn, UINT uCode) const;

	//---------------
	// In-place edit:
	//---------------
	BOOL SetBeginEditReason (DWORD dwReason,// BeginEditFlags
							 BOOL bShift = FALSE,
							 BOOL bCtrl = FALSE);
	void ClearBeginEditReason ();
	BOOL SetEndEditReason (DWORD dwResult,  // EndEditResultFlags, result of in-place edit is used in OnEndInplaceEdit()
						   BOOL bShift = FALSE,
						   BOOL bCtrl = FALSE);
	void ClearEndEditReason ();

	//--------------
	// Drag and drop
	//--------------
	virtual BOOL StartDragColumn (	int nItem, CRect rect, 
									BOOL bDragGroupItem, BOOL bDragFromChooser);
	virtual BOOL DragColumn (CPoint ptScreen);
	virtual BOOL StopDragColumn (CPoint point, BOOL bUpdate);

 	virtual BOOL StartDragItems (CPoint point);
	virtual BOOL DragItems (CPoint point);
	virtual void StopDragItems ();

	virtual void OnBeforeDragScroll ();
	virtual BOOL DoDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual BOOL DoDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point);

	DropArea HitTestDropArea (CPoint point, CMFCGridItemID idDropTo, CMFCGridRow* pHitRow);

	void ShowDragFrame ();
	void HideDragFrame ();
	void ShowDragInsertMarker ();
	void HideDragInsertMarker ();

	//-------------
	// Select items
	//-------------
	virtual BOOL StartSelectItems ();
	virtual BOOL SelectItems (CPoint ptClient);
	virtual void StopSelectItems ();
	BOOL DoClickValue (CMFCGridItem* pItem, UINT uiMsg, CPoint point, 
						BOOL bFirstClick, BOOL bButtonClick);

	//-------------
	// Merged cells
	//-------------
	void DoMergeInRange (const CMFCGridRange& rangeNormalized, CMFCGridMergedCells* pMergedCells);
	void DoMergeRowItemsInRange (CMFCGridRow* pRow, const CMFCGridRange& rangeNormalized,
								CMFCGridMergedCells* pMergedCells);
	BOOL ExtendMergedRange (CMFCGridRange& range);
	int GetMergedItemsInRange (const CMFCGridRange& range, CList <CMFCGridRange, CMFCGridRange&> &lstRanges);
	void DoGetMergedItemsInRange (CMFCGridRow* pRow, const CMFCGridRange& range, CList <CMFCGridRange, CMFCGridRange&> &lstRanges);
	void MarkMergedItemChanged (const CRect& rectNew, CMFCGridItem* pItem);
	void UpdateMergedItems ();
	void RedrawMergedItem (CMFCGridItem* pItem);
	void RedrawMergedItems (CDC* pDC);
	CRect GetMergedRect (const CMFCGridRange* pRange, const CMFCGridItemID& id);//TODO replace the 2nd parameter
	CMFCGridRange* GetMergedRange (CMFCGridItemID id, CMFCGridItem* pItem, CMFCGridRange& range);

	void ShowDropIndicator (CPoint pt);

	//--------------
	// Virtual mode:
	//--------------
	virtual BOOL SendDispInfoRequest (AFX_GRID_DISPINFO* pdi) const;

	virtual CMFCGridRow* CreateVirtualRow (int nIndex);
	virtual CMFCGridRow* OnCreateVirtualRow (AFX_GRID_DISPINFO* pdi);
	virtual CMFCGridItem* OnCreateVirtualItem (AFX_GRID_DISPINFO* pdi);

	CRect GetVirtualRowRect (int nRow) const;
	CRect GetVirtualItemRect (int nRow, int nColumn) const;

	CMFCGridItemID HitTestVirtual (CPoint pt, CMFCGridRow::ClickArea* pnArea = NULL) const;
	
	//-----------
	// Clipboard:
	//-----------
	HGLOBAL CopyHtmlToClipboardInternal ( LPCTSTR lpszText, int nLen) const; // copy to clipboard in "HTML Format"
	HGLOBAL CopyTextToClipboardInternal ( LPCTSTR lpszText, int nLen) const; // copy to clipboard in CF_TEXT format
	HGLOBAL CopySelectionToClipboardInternal (BOOL bCut = FALSE);	// copy to clipboard in custom registered format
	BOOL PasteFromDataObject (COleDataObject* pDataObject,			// paste from clipboard custom registered format
		CMFCGridItemID idPasteTo, BOOL bRedraw = FALSE);

	BOOL IsPlacedOnActiveMenu() const;
	
private:
	//----------------------
	// Iterator inside range
	//----------------------
	void IterateInRange (
		const CMFCGridRange& range, 
		AFX_GRID_ITERATOR_ROW_CALLBACK pCallbackRowBegin = NULL, LPARAM lParamRowBegin = 0,
		AFX_GRID_ITERATOR_ROW_CALLBACK pCallbackRowEnd = NULL, LPARAM lParamRowEnd = 0,
		AFX_GRID_ITERATOR_ITEM_CALLBACK pCallbackItem = NULL, LPARAM lParamItem = 0);
	void DoIterateInRange (
		CMFCGridRow* pRow, const CMFCGridRange& range,
		AFX_GRID_ITERATOR_ROW_CALLBACK pCallbackRowBegin = NULL, LPARAM lParamRowBegin = 0,
		AFX_GRID_ITERATOR_ROW_CALLBACK pCallbackRowEnd = NULL, LPARAM lParamRowEnd = 0,
		AFX_GRID_ITERATOR_ITEM_CALLBACK pCallbackItem = NULL, LPARAM lParamItem = 0);
	void IterateColumnInRange (const CMFCGridRange& range,
		AFX_GRID_ITERATOR_COLUMN_CALLBACK pCallbackColumn, LPARAM lParamColumn);

	static void CALLBACK pfnCallbackExportColumn (int nColumn, const CMFCGridRange& range, LPARAM lParam);
	static void CALLBACK pfnCallbackExportRowEnd (CMFCGridRow* pRow, const CMFCGridRange& range, LPARAM lParam);
	static void CALLBACK pfnCallbackExportItem (CMFCGridItem* pItem, const CMFCGridRange& range, LPARAM lParam);

	static void CALLBACK pfnCallbackExportTextColumn (int nColumn, const CMFCGridRange&, LPARAM lParam);
	static void CALLBACK pfnCallbackExportTextRowEnd (CMFCGridRow*, const CMFCGridRange&, LPARAM lParam);
	static void CALLBACK pfnCallbackExportTextItem (CMFCGridItem* pItem, const CMFCGridRange&, LPARAM lParam);

	static void CALLBACK pfnCallbackClearItem (CMFCGridItem* pItem, const CMFCGridRange& range, LPARAM lParam);
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
public:
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
};






/////////////////////////////////////////////////////////////////////////////


class AFX_EXT_CLASS CMFCGridEditView : public CMFCGridCtrl
{
	DECLARE_DYNCREATE(CMFCGridEditView)

	// Construction
public:
	CMFCGridEditView();

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
		//{{AFX_VIRTUAL(CMFCGridEditView)
		//}}AFX_VIRTUAL

	// Implementation
public:
	virtual ~CMFCGridEditView();

	void OnInplaceEditEnter(CMFCGridItem* pItem);
	void NextEditLabel(UINT nDirection, BOOL bUpdateData);

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
	//{{AFX_MSG(CMFCGridEditView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	//}}AFX_MSG
	afx_msg LRESULT OnEndLabelEdit(WPARAM, LPARAM);
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};



//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCGRIDCTRL_H__573C359C_D1FB_446F_B60D_B5E331228237__INCLUDED_)
