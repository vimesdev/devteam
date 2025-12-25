#ifndef TASKDIALOGBAR_H
#define TASKDIALOGBAR_H

#include <afxtempl.h>
// CTaskDialogBar

typedef void (*TaskProc) (CWnd* pWnd, int nItem);

#define TDS_DESKTOP	1
#define TDS_TASK		2
#define TDS_FIND		3

class AFX_EXT_CLASS CTaskDialogBar : public CWnd
{
	DECLARE_DYNAMIC(CTaskDialogBar)
	CBitmap	m_bmpButton;
	CBitmap	m_bmpButtonUpDown;
	CBitmap	m_bmpBackground;
	BITMAP	m_bm;
	bool	m_bLoaded;
	int		m_nFontSize;
	int nOldItem;
	int nOldTaskItem;
	int nOldFindItem;
	int nSelectedItem;
	int nSelectedTaskItem;
	int nSelectedFindItem;
	int nFirstTaskItem;
	bool bScrollingUp;
	bool bScrollingDown;
	CRect	rcFocus;
	CRect	rcScrollDown;
	CRect	rcScrollUp;

protected:
	class CTaskItem{
	public:
		CTaskItem();
		~CTaskItem();
		CString szName;
		CString	szTitle;
		int		nState;
		CRect	rcItem;
		HICON	hIcon;
		int		nItemID;
		int		nVisibleLine;
		bool	bVisible;
		bool	bEnable;
		int		nCurSel;
		UINT	nSelID;
		CWnd*	pWnd;
		CArray<CTaskItem*,CTaskItem*> m_TaskItems;
		CArray<CTaskItem*,CTaskItem*> m_FindItems;
		int		AddTaskItem(CTaskItem* pTaskItem);
		int		AddFindItem(CTaskItem* pTaskItem);
	};

	CRect	m_rcDesktop;
	CRect	m_rcTask;
	CRect	m_rcFind;
	int		m_nCurSel;	
	int		m_nCurTaskSel;
	int		m_nHitTest;
	int		m_nItemHeight;
	int		m_nTaskHeight;
	int		m_nVisibleLine;
	int		m_nActiveFrame;
	int		m_nInterfaceColor;
	int		m_nWidth;
	CString m_szTitle;	
	CString	m_szFirstCaption;
	CString	m_szSecondCaption;
	CString	m_szCaptionName;
	TaskProc	m_selFnc;
	CPoint	m_ptTopright;
	CWnd*	m_pWndFocus;
	CTaskItem*	m_pTaskFocus;
	CArray<CTaskItem*, CTaskItem*> m_DesktopItems;
	CMap<int, int, CTaskItem*, CTaskItem*> m_mapItems;
	void	RemoveDesktopItems();
	void	RecalcSize();
	int		HitTest(CPoint point);
	void	DrawCaption(CDC *pDC);
	void	DrawDesktop(CDC *pDC, CRect& rect);
	void	DrawTask(CDC *pDC, CRect& rect);
	void	DrawFind(CDC *pDC, CRect& rect);
public:
	CTaskDialogBar();
	virtual ~CTaskDialogBar();
	BOOL	Create(CWnd *pParentWnd, int nWidth=200, UINT dwStyle=CBRS_ALIGN_LEFT|CBRS_BORDER_3D);
	
	//Add new desktop item (primary group)
	int		AddDesktopItem(LPCTSTR lpszTitle, CWnd* pWnd=NULL, HICON hIcon=0, int nVisibleLine=0);
	//Add new task item
	int		AddTaskItem(int nItem, LPCTSTR lpszTitle, CWnd* pWnd=NULL, HICON hIcon=0);
	//Add new find item
	int		AddFindItem(int nItem, LPCTSTR lpszTitle, CWnd* pWnd=NULL, HICON hIcon=0);
	//Set current selected of desktop group
	void	SetCurSel(int nSel);
	//Get current selected of task group
	void	SetTaskSel(int nSel);
	void	SetFindSel(int nSel);
	//Color = 0: Mau xanh, khong thi mau vang.
	void	SetInterfaceColor(int nColor);
	//Set desktop height
	void	SetDesktopHeight(int nHeight);
	void	SetTaskHeight(int nHeight);
	//Set default visible of line used for task group
	void	SetVisibleLine(int nLine);
	//Get Current selected of desktop item
	int		GetCurSel();
	int		GetTaskSel();
	//When click mount on item this function return point top right of item.
	CPoint	GetCurPos();
	//return Point of desktop item selected.
	CTaskItem*	GetSelectedDesktop();
	//return desktop item from index
	CTaskItem*	GetDesktop(int nIndex);
	void	SetTaskCaption(LPCTSTR lpszCaption);	
	void	SetFindCaption(LPCTSTR lpszCaption);
	int		GetWidth();
	int		GetActiveFrame();
	LPCTSTR	GetCaptionName();
	void	SetSelChangeFnc(TaskProc proc);
	void	SetFontSize(int nSize);
protected:
	DECLARE_MESSAGE_MAP()
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	HRESULT OnMouseLeave(WPARAM wParam, LPARAM lParam) ;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	virtual void OnDestroy();
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


#endif
