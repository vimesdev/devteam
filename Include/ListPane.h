#ifndef LISTPANE_H
#define LISTPANE_H
#include <afxwin.h>
#include "Icons.h"

// CListPane
class AFX_EXT_CLASS CListPane : public CListBox
{
	DECLARE_DYNAMIC(CListPane)
	int		m_nHotLight;
	COLORREF	m_clrText;
	COLORREF	m_clrBackground;
	COLORREF	m_clrButtonBkColor;
	int		m_nCurSel;
	BOOL	m_bIsHovering;
	BOOL	m_bIsTracking;
	bool	m_bAutoItemHeight;
	int		m_nItemHeight;
	bool	m_bBold;
	int		m_nFaceSize;

	int	(*_OnItemChangeFnc)(CWnd* pWnd, int nOldItem, int nNewItem);
	CFont	m_Font;
	CFont	m_fontDisable;
	CFont	m_fontNormal;

	int		m_StartYPos;
	int		m_PageHeight;
	int			m_OldMouseYPos, m_SBOffset;
	CPoint	m_ptOrg;
	UINT	m_nItemStyle;

	void	DrawScrollBar();
	void	SetItemStyle(UINT nStyle);

public:
	class CListPaneInfo{
	public:
		CString		m_szCaption;
		CString		m_szDescription;
		UINT		m_nImage;
		UINT		m_nID;
		bool		m_bDisable;
		CWnd*		m_pWnd;
		HICON		m_hIcon;
		CListPaneInfo();
		~CListPaneInfo();
	};


	CListPane();
	virtual ~CListPane();
	BOOL	Create(CWnd *pParent, CRect rect, DWORD dwStyle=WS_CHILD|WS_VISIBLE|LBS_OWNERDRAWFIXED|WS_HSCROLL, UINT nID=0);
	BOOL	Create(CWnd *pParent, int x, int y, int w, int h, DWORD dwStyle=WS_CHILD|WS_VISIBLE|LBS_OWNERDRAWFIXED|WS_HSCROLL, UINT nID=0);
	void	AddCaption(CString szCaption);
	void	Add(CString szCaption, CString szDescription, CWnd *pWnd=NULL, UINT nID=0, UINT nImage=-1, bool bDisable=false);
	void	Add(CString szCaption, IconData icon, CWnd* pWnd = NULL, UINT nID = 0, bool bDisable = false);
	

	void	Delete(int nIndex);
	void	DeleteAll();
	int		SetCurSel(int nIndex);
	virtual int OnItemChange(int nOldItem, int nNewItem);
	void	SetCallback(int (*_OnItemChangeFnc)(CWnd* pWnd, int nOld, int nNew));
	void	SetAutoItemHeight(bool bAuto);
	void	SetFontSize(int nSize);
	void	SetFontBold(bool bBold);
	void	SetBkColor(COLORREF clrBk);
	void	SetButtonBkColor(COLORREF clrBk);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void PreSubclassWindow();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	afx_msg void MeasureItem(LPMEASUREITEMSTRUCT /*lpMeasureItemStruct*/);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg LRESULT OnMouseHover(WPARAM wparam, LPARAM lparam) ;
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLbnSelchange();

public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonUp(UINT nHitTest, CPoint point);
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnNcPaint();
	afx_msg void OnNcLButtonDblClk(UINT nHitTest, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
};


#endif