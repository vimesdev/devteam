#ifndef GUIBITMAPBUTTONEX_H
#define GUIBITMAPBUTTONEX_H

#include "GuiBase.h"
#define  WM_SETMESSAGESTRING 0x0362

class AFX_EXT_CLASS CGuiBitmapButton :
	public CButton, public CGuiBase
{
	CBitmap		m_bmpBitmap;
	bool		m_bMouseMove;
	bool		m_bIsHovering;
	bool		m_bIsTracking;
	bool		m_bIsFocus;
	bool		m_bBorder;
	CFont		m_Font;
	bool		m_bBold;
	CString		m_szTooltip;
	bool		m_bChecked;
	bool		m_bFixedSize;
	CDC			m_dcFocus;
	CDC			m_dcPressed;
	CDC			m_dcBk;
	CDC			m_dcStd;
	CDC			m_dcDisabled;
	CDC*		m_pCurrentDC;
	COLORREF	m_clrText;
	void		DrawBackground(CDC *pDC);
	void		DrawButton(CDC *pDC);
	void		SetBkgnd(CDC* pDC);
	bool		m_bHaveBitmaps;

public:
	CGuiBitmapButton(void);
	~CGuiBitmapButton(void);
	// Ham tao control button
	// dwStyle = BS_TOP, BS_LEFT, BS_RIGHT, BS_BOTTOM, BS_CENTER
	BOOL	Create(CWnd *pParentWnd, CRect rect, UINT nID = 0, LPCTSTR lpszTitle=_T(""), DWORD dwStyle=BS_TOP);
	void	SetBitmap(HBITMAP hBitmap);
	void	LoadBitmap(UINT nID, bool bFixedSize=true);
	void	SetBold(bool bBold);
	void	SetTooltip(LPCTSTR lpszTooltip);
	void	DeleteToolTip();
	void	SetCheck(bool bCheck);
	void	EnableButton(BOOL bEnable=TRUE);
	void	SetColorText(COLORREF clrText);

protected:
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	virtual void PreSubclassWindow();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg LRESULT OnMouseHover(WPARAM wparam, LPARAM lparam) ;
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnBnClicked();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg HBRUSH CtlColor(CDC* /*pDC*/, UINT /*nCtlColor*/);
	afx_msg void OnDestroy();
	afx_msg void OnBnKillfocus();
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	DECLARE_MESSAGE_MAP()
};

#endif
