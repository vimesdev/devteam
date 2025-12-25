#ifndef MFCCWidget_H
#define MFCCWidget_H

#include <afxcontrolbars.h>
#include "icons.h"
#include "GuiPopup.h"
#pragma once

#define WM_SWITCH RegisterWindowMessage(L"WM_SWITCH")
#define rcDefault CRect(0,0,0,0)

#define CMD_DRAWER		15001
#define CMD_SYSTEM		15002
#define CMD_MENU		15003
#define CMD_CLOSE		15004
#define CMD_MINIMIZE	15005
#define CMD_MAXIMIZE	15006
#define CMD_SETTING		15007
#define CMD_OPTION		15008
#define CMD_HELP		15009
#define CMD_NOTIFICATION		15010
#define CMD_BACK		15011
#define CMD_SEARCH		15012
#define CMD_VOICE		15013
#define CMD_GIFTCARD	15014
#define CMD_APPS		15015
#define CMD_USER		15100



class CWidgetTile;
class CWidgetController;



class ItemState{
public:
	COLORREF backgroundColor;
	COLORREF textColor;
	CFont* font;

	ItemState(COLORREF clrBackground=RGB(250, 250, 250), COLORREF clrText=0): backgroundColor(clrBackground), textColor(clrText), font(NULL) {
	}
	~ItemState() {
		if (font)
		{
			delete font;
		}
		font = NULL;
	}

};



class AFX_EXT_CLASS CWidgetItem: public CObject
{
protected:
	
public:
	CRect	m_rect;
	UINT	m_nAlign;
	UINT	m_nStyle;
	UINT	m_nState;
	UINT	m_nCmdID;
	CWnd*	m_pWnd;
	CSize	m_size;
	CString		m_szCaption;
	CString		m_szTooltip;
	UINT		m_nID;
	IconData	m_icon;
	int			m_nImage;
	BOOL		m_bSelected;
	BOOL		m_bDynamicLayout;
	BOOL		m_bRoundBorder;
	BOOL		m_bVisible;
	COLORREF	m_clrBackground;
	COLORREF	m_clrText;
	CMap<CString, LPCTSTR, ItemState, ItemState>	m_ItemState;

	CWidgetItem();
	CWidgetItem(UINT nCmdID, IconData icon, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	CWidgetItem(UINT nCmdID, int image, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	virtual ~CWidgetItem();
	void	Initialize();
	void	Cleanup();
	void	SetSize(CSize sz);
	CSize	GetSize();
	void	Move(CRect rect);
	CRect	GetRect();
	CRect	Rect();
	void	SetOwner(CWnd* hWnd);
	CWnd*	GetOwner();
	void	SetBkColor(COLORREF clrBackground);
	void	SetTextColor(COLORREF clrBackground);
	COLORREF GetBkColor();
	COLORREF GetTextColor();
	CSize	CalcTextSize();
	void	SetStyle(UINT nStyle);
	UINT	GetStyle();
	void	SetCmdID(UINT nID);
	UINT	GetCmdID();
	void	SetState(UINT nState);
	UINT	GetState();
	void	SetAlign(UINT nAlign);
	UINT	GetAlign();
	BOOL	IsVisible();
	void	ShowWindow(int nShow);
	void	SetItemState(LPCTSTR lpszName, ItemState state);
	
	virtual void Draw(CDC *pDC);
	virtual BOOL OnHitTest(UINT nFlag, CPoint pt);
	virtual void OnLButtonDown(UINT nFlag, CPoint pt);
	virtual void OnLButtonUp(UINT nFlag, CPoint pt);
	virtual void OnMouseMove(UINT nFlag, CPoint pt);
	virtual void OnMouseLeave();
	virtual void OnKeyDow(UINT nFlag, UINT nChar);


};

class AFX_EXT_CLASS  CWidgetIconButton : public CWidgetItem {
public:
	int			m_image;
	IconData	m_icon;

	CWidgetIconButton();
	CWidgetIconButton(IconData icon, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	CWidgetIconButton(int image, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	~CWidgetIconButton();
	virtual void Draw(CDC *pDC);
};

class AFX_EXT_CLASS  CWidgetTile : public CWidgetItem {
public:
	CWidgetItem* m_Leading;
	CString		m_szTitle;
	CString		m_szSubtitle;
	CWidgetItem*	m_Trailing;
	CWidgetItem*	m_Ending;

	CWidgetTile();
	CWidgetTile(IconData leading_icon, LPCTSTR lpszTitle, LPCTSTR lpszSubTitle = _T(""), CWidgetItem* trailing = NULL, CWidgetItem* ending = NULL);
	CWidgetTile(UINT nID, IconData leading_icon, LPCTSTR lpszTitle, LPCTSTR lpszSubTitle = _T(""), CWidgetItem* trailing = NULL, CWidgetItem* ending = NULL);
	CWidgetTile(int  leading_image, LPCTSTR lpszTitle, LPCTSTR lpszSubTitle = _T(""), CWidgetItem* trailing = NULL, CWidgetItem* ending = NULL);
	CWidgetTile(UINT nID, int  leading_image, LPCTSTR lpszTitle, LPCTSTR lpszSubTitle = _T(""), CWidgetItem* trailing = NULL, CWidgetItem* ending = NULL);
	CWidgetTile(CWidgetItem* leading, LPCTSTR lpszTitle, LPCTSTR lpszSubTitle = _T(""), CWidgetItem* trailing = NULL, CWidgetItem* ending = NULL);
	~CWidgetTile();
	CWidgetTile* Clone();

	virtual void Draw(CDC *pDC);
};






class AFX_EXT_CLASS  CWidgetController : public CPane {
	
public:
	BOOL	m_bTracked;
	CWidgetItem* m_Leading;
	CSize		m_szItemSize;
	COLORREF	m_clrText;
	COLORREF	m_clrBackground;
	CSize		m_szActionsSize;
	int			m_nFocused;
	int			m_nCurSel;
	int			m_nCWidgetControllerWidth;
	BOOL		m_bTabStyle;
	BOOL		m_bEnableLeading;
	CString		m_szTitle;

	CArray<CWidgetItem*, CWidgetItem*>	m_Actions;
	int(*_OnSelChangeFnc)(CWnd *, UINT nCmdId, int nNewSel);


	CWidgetController();
	virtual ~CWidgetController();
	BOOL	Create(CWnd* pParent, CRect rc = rcDefault, UINT nID = 0, DWORD dwStyle = WS_CHILD | WS_VISIBLE);
	virtual void	SetCurSel(int nIndex);
	virtual int		GetCurSel();
	virtual void	OnDraw(CDC *pDC);
	virtual void	RecalcLayout(BOOL bRedraw = TRUE);
	virtual void	OnSelected(int nIndex);
	virtual int		Add(CWidgetItem* pNewItem);
	virtual void	Remove(int nIndex);
	virtual void	RemoveAll();

	void	EnableTabstyle(BOOL bFlag);
	void	EnableLeading(BOOL bFlag);
	void	SetCallback(UINT nEvent, void* pCallback);
	int		HitTest(CPoint pt);

protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnMouseHover(UINT nFlags, CPoint point);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

	DECLARE_MESSAGE_MAP()
};





/////////////////////////////
//class CWidgetAppBarItem
////////////////////////////


class AFX_EXT_CLASS  CWidgetAppBarItem : public CWidgetIconButton {
public:
	CWidgetAppBarItem();
	CWidgetAppBarItem(IconData icon, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	CWidgetAppBarItem(UINT nCmd, IconData icon, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	CWidgetAppBarItem(int image, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	~CWidgetAppBarItem() {}
};




/////////////////////////////
//class CWidgetAppBar
////////////////////////////

class AFX_EXT_CLASS  CWidgetAppBar : public CWidgetController {
	DECLARE_MESSAGE_MAP()


public:
	CWidgetAppBar();
	~CWidgetAppBar();
	void OnSelected(int nIndex);

	virtual void RecalcLayout(BOOL bRedraw = TRUE);
	virtual void OnDraw(CDC *pDC);
	CSize	GetSize();

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();


	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};




/////////////////////////////
//class CWidgetAppBar
////////////////////////////

class AFX_EXT_CLASS  CWidgetTitleBar : public CWidgetController {
	DECLARE_MESSAGE_MAP()

	bool	m_bRestore;
	bool	m_bTracking;
public:
	CWidgetTitleBar();
	~CWidgetTitleBar();

	virtual void RecalcLayout(BOOL bRedraw = TRUE);
	virtual void OnDraw(CDC *pDC);
	CSize	GetSize();

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();


	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
};





class AFX_EXT_CLASS  CWidgetBottomNavigationBarItem : public CWidgetIconButton {
public:
	CString m_szCaption;

	CWidgetBottomNavigationBarItem(IconData icon, LPCTSTR lpszCaption) :CWidgetIconButton(icon) {
		m_szCaption = lpszCaption;
	}
	~CWidgetBottomNavigationBarItem() {}
	virtual void Draw(CDC* pDC);
};

class AFX_EXT_CLASS CWidgetBottomNavigationBar : public CWidgetController {
	DECLARE_MESSAGE_MAP()
public:
	CWidgetBottomNavigationBar();
	~CWidgetBottomNavigationBar();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
};



class AFX_EXT_CLASS CWidgetListView :
	public CWidgetController
{
protected:


public:
	CWidgetListView();
	~CWidgetListView();

	virtual void RecalcLayout(BOOL bRedraw);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};

////////////////////////////
//
class AFX_EXT_CLASS  CWidgetTabItem : public CWidgetIconButton {
public:
	CWidgetTabItem(LPCTSTR lpszCaption);
	~CWidgetTabItem();
	void Draw(CDC *pDC);
};

////////////////////////////
//
////////////////////////////
class AFX_EXT_CLASS CWidgetTabView :
	public CWidgetController
{
protected:
	int		m_nTabHeight;

public:
	CMap<int, int, CWnd*, CWnd*>	m_wndViews;
	CWidgetTabView();
	~CWidgetTabView();
	int		Add(LPCTSTR lpszCaption, CWnd* pWnd, IconData icon = icons::tab);
	void	Remove(int nIndex);
	void	RemoveAll();
	void	SetCurSel(int nIndex);
	void	RecalcLayout(BOOL bNotify = TRUE);
	int		GetItemCount();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
};


class AFX_EXT_CLASS CWidgetGridView :
	public CWidgetController
{
public:
	int		m_nColumn;
	CWidgetGridView();
	~CWidgetGridView();
	virtual void RecalcLayout(BOOL bRedraw = TRUE);
};



class AFX_EXT_CLASS CWidgetDrawerItem : public CWidgetIconButton {
public:
	CWidgetDrawerItem();
	CWidgetDrawerItem(UINT nID, IconData icon, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	CWidgetDrawerItem(UINT nID, int image, LPCTSTR lpszCaption = _T(""), LPCTSTR lpszTooltip = _T(""));
	~CWidgetDrawerItem() {}
};


#define ID_DRAWER_HOME			0
#define ID_DRAWER_FUNCTIONS		1
#define ID_DRAWER_REPORTS		2
#define ID_DRAWER_OPTIONS		3
#define ID_DRAWER_HELP			4
#define ID_DRAWER_ACCOUNT		6
#define ID_DRAWER_MODULES		7
#define ID_DRAWER_FEEDBACK		8
#define ID_DRAWER_EXIT			9

class AFX_EXT_CLASS CWidgetDrawer : public CGuiPopup
{

	DECLARE_MESSAGE_MAP()
public:

	int		m_nDrawerWidth;
	int		m_nModSelected;
	int		m_nItemSelected;
	CMap<UINT, UINT, CWnd*, CWnd*>	m_wndPanes;

	CWidgetListView	m_wndMainMenu;
	CWidgetGridView	m_wndModules;
	CWidgetGridView	m_wndFunctions;

	CWidgetDrawer(CWnd *pParent);
	~CWidgetDrawer();
	void	Show();
	void	RecalcLayout(BOOL bRedraw = TRUE);
	void	SetCurSel(int nIndex);
	void	LoadModules();
	void	LoadFunctions();
	void	OnMainMenuSelect(UINT nCmd, int nItem);
	void	OnModuleSelect(UINT nCmd, int nItem);
	void	OnFunctionSelect(UINT nCmd, int nItem);

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();

	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	virtual void PostNcDestroy();
};

extern CWidgetDrawer* theDrawerApp;

#endif

