#ifndef DOCPANE_H
#define DOCPANE_H

#include "GuiButton.h"
#include "ListPane.h"
// CDocPane
//define docpane style
#define DPS_NONE	0x00
#define DPS_LEFT	0x01
#define DPS_RIGHT	0x02
#define DPS_OUTLOOK	0x04
#define DPS_SUBPANE	0x08

class AFX_EXT_CLASS CDocPane : public CWnd
{
	DECLARE_DYNAMIC(CDocPane)
	BOOL	m_bIsHovering;
	BOOL	m_bIsTracking;
	BOOL	m_bIsHome;
	int		m_nPaneStyle;
	int		m_nPaneWidth;
	int		m_nItemHeight;
	int		m_nButtonHeight;
	double	m_nDPI;
	int		m_nInfoHeight;
    bool	m_bExpanded;
    int		m_nHitTest;
	COLORREF	m_clrBackground;
	COLORREF	m_clrText;
	CString	m_szCaption;
	CString	m_szModuleCaption;
	HBITMAP	m_hBitmap;
	CWnd*	m_wndDashboard;
	CWnd*	m_pWindowActive;
	void	DrawButtonBar(CDC *pDC);
	void	DrawCaptionBar(CDC *pDC);
	void	DrawInfoBar(CDC *pDC);
	CRect	m_rcHome;
	CRect	m_rcExtra;
	CRect	m_rcPane;
	CRect	m_rcClient;
    CRect	m_rcMenu;
    CRect	m_rcFloating;

	CBitmap		m_bmpHome;
	CBitmap		m_bmpRecent;
	CGuiButton	m_wndHome;
	CGuiButton	m_wndRecentWindows;
	CListPane	m_wndPane;
	CListPane	m_wndSubPane;
	CFont		m_fontCaption;
	bool		m_bSingleMode;

	void	GoHome(BOOL bShow);

	void		RecalcLayout();
	int		OnMainListPaneItemChange(int nOld, int nNew);
	int		OnListPaneItemChange(int nOld, int nNew);


public:
	class AFX_EXT_CLASS CDocPaneInfo{
	public:
		CString		m_szCaption;
		CString		m_szDescription;
		UINT		m_nImage;
		IconData	m_icon;
		UINT		m_nID;
		int			m_nCurSel;
		bool		m_bDisable;
		CWnd*		m_pWnd;
		CWnd*		m_pDesktopPane;
		CPtrArray	m_arrayPanes;

		CDocPaneInfo();
		CDocPaneInfo(LPCTSTR lpszCaption, LPCTSTR lpszDescription, CWnd* pWnd=NULL, UINT nImage=0);
		CDocPaneInfo(LPCTSTR lpszCaption, LPCTSTR lpszDescription, CWnd* pWnd = NULL, IconData icon = IconData());
		~CDocPaneInfo();
		int	GetCount();
		CDocPaneInfo* Get(int nIndex);
		int	AddCaption(LPCTSTR lpszCaption);
		int	Add(LPCTSTR lpszCaption, LPCTSTR lpszDescription, CWnd* pView=NULL, UINT nImage=0);
		int	Add(LPCTSTR lpszCaption, IconData icon, CWnd* pView = NULL);
		
	};
	CDocPaneInfo*	m_pCurrentPane;
	CPtrArray	m_arrayPanes;

	CDocPane();
	virtual ~CDocPane();
	BOOL Create(CWnd *pParent, const RECT& rect, UINT nID=0, DWORD dwStyle=WS_CHILD|WS_VISIBLE, LPCTSTR lpszWindowName=_T(""));
	BOOL Create(CWnd *pParent, int x, int y, int width, int height, UINT nID=0, DWORD dwStyle=WS_CHILD|WS_VISIBLE, LPCTSTR lpszWindowName=_T(""));
	void	SetPaneStyle(int nStyle);
	int		GetPaneStyle();
	void	SetPaneWidth(int nWidth);
	int		GetPaneWidth();
	void	SetItemHeight(int nHeight);
	int		GetItemHeight();
	void	AddDashboard(CWnd* pWnd);
	void	SetSingleMode(bool bMode);
	CListPane*	GetPane();
	CListPane*	GetSubPane();

	CDocPaneInfo*	AddPane(LPCTSTR lpszCaption, LPCTSTR lpszDescription=_T(""), CWnd* pDesktopPane=NULL, UINT nImage=0);
	CDocPaneInfo*	AddPane(LPCTSTR lpszCaption, IconData icon, CWnd* pDesktopPane = NULL);

	int		AddCaption(CDocPaneInfo* pDocPane, LPCTSTR lpszCaption, LPCTSTR lpszDescription=_T(""));
	int		AddItem(CDocPaneInfo* pDocPane, LPCTSTR lpszCaption, LPCTSTR lpszDescription=_T(""), CWnd* pView=NULL, UINT nImage=0);
	int	AddCaption(LPCTSTR lpszCaption);
	
	virtual void	OnHomeSelect();
	virtual void	OnButtonSelect();
	
protected:
	DECLARE_MESSAGE_MAP()

	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg LRESULT OnMouseHover(WPARAM wparam, LPARAM lparam) ;

	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
};


#endif