#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#define LAST_INSERT -1 
// CGuiTaskbar
typedef void (*TASKBARPROC) (CWnd* pWnd, WPARAM wParam, LPARAM lParam);

#include "GuiBitmapButton.h"
class AFX_EXT_CLASS  CTaskItem{
public:
	CTaskItem(CWnd* pMainWnd);
	~CTaskItem();
	void	SetCurSel(int nIndex);
	int		GetCurSel();
	CWnd*	GetActiveWindow();
	int		AddItem(CTaskItem* o);
	void	SetRect(CRect rect);
	
	
	CString	m_szName;
	CString m_szCaption;
	HICON	m_hIcon;
	DWORD	m_dwStyle;
	CRect	m_rcItem;
	UINT	m_nState;
	DWORD	m_lParam;
	int		m_nCurSel;
	int		m_nTopIndex;
	UINT	m_nID;	//ID of item
	CWnd*	m_pWnd;
	CWnd*	m_pMainWnd;
	CPtrArray	m_Items;

	
};
class AFX_EXT_CLASS CGuiTaskbar : public CControlBar
{
	DECLARE_DYNAMIC(CGuiTaskbar)
	int		m_nWidth;
	int		m_nTaskHeight;
	int		m_nItemHeight;
	int		m_nTaskItemHeight;
	int		m_nLastIndex;
	int		m_nCurSel;
	int		m_nFontSize;
	bool	m_bScrollUp;
	CString	m_szTitle;
	CString	m_szTaskCaption;

	CBitmap	m_bmpButton;
	CBitmap	m_bmpButtonUpDown;
	CBitmap	m_bmpBackground;
	BITMAP	m_bm;
	int		m_nInterfaceColor;
	
	CPtrArray	m_Items;
	CTaskItem*	m_focus;
	CTaskItem*	m_subselected;
	void	DrawItem(CDC *pDC, CTaskItem* o);
	void	DrawTaskItemButton(CDC *pDC, CTaskItem* o);
	void	ModifyState(CTaskItem*o, UINT uRemove, UINT uAdd=0);
	void	InvalidObject(CTaskItem* o);
	void	RedrawTaskItem();
	CGuiBitmapButton	m_wndUpButton;
	CGuiBitmapButton	m_wndDownButton;

public:
	CGuiTaskbar();
	virtual ~CGuiTaskbar();
	BOOL	Create(CWnd *pParentWnd, int nWidth=250, UINT dwStyle=CBRS_ALIGN_LEFT|CBRS_BORDER_3D);

	virtual void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler);
	CSize	CalcFixedLayout (BOOL /*bStretch*/, BOOL bHorz);
	int		HitTest(int& nItem, int& nTaskItem, CPoint point);
	int		GetItemCount();
	CTaskItem*	AddItem(LPCTSTR lpszCaption, HICON hIcon=NULL, LPARAM lParam=0, int nIndex=LAST_INSERT);
	int		AddTaskItem(CTaskItem* o, LPCTSTR lpszCaption, CWnd* pWnd=NULL, HICON hIcon=NULL, UINT nID = 0, LPARAM lParam=0, int nIndex=LAST_INSERT);
	int		AddTaskItemCaption(CTaskItem* o, LPCTSTR lpszCaption, HICON hIcon=NULL, LPARAM lParam=0, int nIndex=LAST_INSERT);
	void	SetTaskChangeFnc(TASKBARPROC fnc);
	void	SetFontSize(int nSize);
	void	SetItemHeight(int nHeight);
	void	SetTaskItemHeight(int nHeight);
	int		GetFontSize();
	int		GetItemHeight();
	int		GetTaskItemHeight();
	void	SetCurSel(int nItem);
	void	SetTaskSel(int nSubItem);
	CTaskItem*	GetCurSel();
	int		GetCurSelIndex();
	int		GetTaskSelIndex();
	CTaskItem*	GetTaskSel();
	CString	GetTaskCaption();
	
protected:
	void	DrawCaption(CDC *pDC);
	void	DrawItem(CDC *pDC);
	void	DrawTaskItem(CDC *pDC);
	void	DrawTaskItem(CDC *pDC, CTaskItem* o);
	void	MeasureItem();
	void	MeasureTaskItem();
	void	ShowScrollButton();
	TASKBARPROC	m_TaskBarSelFnc;

	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	HRESULT OnMouseLeave(WPARAM wParam, LPARAM lParam) ;
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnDestroy();
};



#endif
