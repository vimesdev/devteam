#ifndef GUITEXTCTRL_H
#define GUITEXTCTRL_H
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
#include "GuiToolTip.h"
#include "datetime.h"
#include "GuiBitmapButton.h"

#define STYLE_INITCAP		1
#define STYLE_PREINITCAP	2
#define STYLE_UPPER			3
#define STYLE_LOWER			4
#define STYLE_UNMARK		5

#define BUTTON_NONE		0
#define BUTTON_ADD		2
#define BUTTON_EDIT		3	
#define BUTTON_FIND		4
#define BUTTON_HELP		5
#define BUTTON_ACCEPT	6
#define BUTTON_ADDFILE	7
#define BUTTON_FOLDER	8
#define BUTTON_CONFIGURE	9
#define BUTTON_CALENDAR		10
#define BUTTON_REFRESH		11
#define BUTTON_CUSTOM	12
#define BUTTON_SPIN		13
#define BUTTON_CALCULATOR	14
#define BUTTON_PASSWORD 15

class AFX_EXT_CLASS CGuiTextCtrl : public CEdit, public CGuiBase{
protected:
	
	LPCTSTR		m_szClassName;
	CString		m_szFieldName;
	BOOL		m_bMultiLine;
	BOOL		m_bFocus;
	BOOL		m_bCurrencyFormat;
	BOOL		m_bNumber;
	BOOL		m_bPassword;
	int			m_bIsInitCap;
	CBrush		m_brNormal;
	CBrush		m_brDisable;
	bool		m_bNotEmpty;
	BOOL		m_bReadOnly;
	
	bool		m_bUseSystemTextColor;
	bool		m_bUseSystemFont;
	HICON		m_hIcon;
	int			m_nButtonMode;
	BOOL		m_bEnableButton;
	UINT		m_nBitmap;
	CRect		m_rectBtn;
	BOOL		m_bIsButtonPressed;
	BOOL		m_bIsButtonHighlighted;
	BOOL		m_bIsButtonCaptured;
    BOOL		m_bShowPassword;
	void		OnDrawButton(CDC* pDC, CRect rect, BOOL bIsButtonPressed, BOOL bHighlight);
	virtual void		OnButton();
	void		OnChangeLayout();
public:
	CGuiTextCtrl();
	~CGuiTextCtrl();
    virtual BOOL	Create(DWORD dwStyle, const RECT &rect, CWnd *pParentWnd, UINT nID);
	virtual BOOL	Create(CWnd *pParent, int x, int y, int width, int height, BOOL bTabstop=TRUE, BOOL bReadOnly=FALSE, BOOL bMultiLine=FALSE);
	virtual BOOL	Create(CWnd*pParent, CRect rect, BOOL bTabstop=TRUE, BOOL bReadOnly=FALSE, BOOL bMultiLine=FALSE);
	virtual BOOL	IsMultiLine();
	BOOL			IsReadOnly();
	BOOL			IsCurrencyFormat();
	BOOL			IsPassword();
	void	SetMultiLine(BOOL bFlags=TRUE);
	void	SetReadOnly(BOOL bFlags=TRUE);
	void	SetCurrencyFormat(BOOL bFlags=TRUE);
	void	SetTextColor(COLORREF clrText);
	void	SetBkColor(COLORREF clrBk);
	void	SetPassword(BOOL bPassword);
	void	SetInitCap(int bInit);
	void	SetNotEmpty(bool bFlag=true){ m_bNotEmpty = bFlag;}
	void	SetAllowEmpty(bool bFlag);
	BOOL	IsInitCap();
	int		IsValidateData();
	void	SetTextUpper();
	void	SetTextLower();

	void	SetButtonMode(int nMode);
	void	EnableButton(BOOL bFlag);
	void	EnableCopy(BOOL bEnable=TRUE);
	void	SetButtonImage(UINT nIconID);
	void	SetButtonImage(HICON hIcon);
    void	ShowPassword(BOOL bShow);

protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void PreSubclassWindow();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	afx_msg void OnEnKillfocus();
	afx_msg void OnEnSetfocus();
	afx_msg void OnNcPaint();
	afx_msg void OnPaint();
	afx_msg HBRUSH CtlColor(CDC* /*pDC*/, UINT /*nCtlColor*/);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnEnChange();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnEnable(BOOL bEnable);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	LRESULT OnSetFont( WPARAM wParam, LPARAM lParam );
	afx_msg void OnDestroy();
#ifdef _WIN32_WINNT_MAXVER
	afx_msg LRESULT OnNcHitTest(CPoint point);
#else
	afx_msg UINT OnNcHitTest(CPoint point);
#endif

	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg LRESULT OnMouseHover(WPARAM wparam, LPARAM lparam) ;

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonUp(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonDblClk(UINT nHitTest, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnNcMouseHover(UINT nFlags, CPoint point);
	afx_msg void OnNcMouseLeave();
};

#endif