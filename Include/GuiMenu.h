#ifndef GUIMENU_H
#define GUIMENU_H
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

/////////////////////////////////////////////
// CGuiMenu - Version 1.1 - August 30, 2004 //
// --------------------------------------- //
// MFC-derived class for owner-drawn and   //
// Office XP style menus.                  //
// --------------------------------------- //
// Copyright (C) 2004 by C. Buegenburg     //
// All rights reserved.                    //
// --------------------------------------- //
// You are permitted to freely use and     //
// distribute this class, as long as you   //
// a) give proper credit to me and         //
// b) do not remove my Copyright notes and //
// c) report any code changes to me.       //
/////////////////////////////////////////////

#pragma once

#if (WINVER < 0x0501)
#define COLOR_MENUHILIGHT	29
#define COLOR_MENUBAR		30
#endif // (WINVER < 0x0501)

#if !defined OBM_CHECK
#define OBM_CHECK 32760
#endif // !defined OBM_CHECK
#define MENUTITLE_ID	100001

struct MENUITEMEX
{
	UINT		m_uiID;
	CString		m_sCaption;
	CString		m_sEnCaption;
	BOOL		m_bIsTopLevel;
	INT_PTR		m_nListEnabled;
	INT_PTR		m_nListDisabled;
	INT			m_nImageEnabled;
	INT			m_nImageDisabled;
};

class AFX_EXT_CLASS CGuiMenu : public CMenu
{
	// Construction & Destruction
public:
			 CGuiMenu(CWnd* pWnd);
	virtual	~CGuiMenu();

	// Public methods
public:
			BOOL	LoadMenu		(UINT nIDResource);
			BOOL	LoadMenu		(LPCTSTR lpszResourceName);
			BOOL	Attach			(HMENU hMenu, BOOL bTop=FALSE);
	virtual	void	DrawItem		(LPDRAWITEMSTRUCT lpDrawItemStruct);
	virtual	void	MeasureItem		(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	static	void	OnMeasureItem	(LPMEASUREITEMSTRUCT lpMeasureItemStruct, CWnd* pWnd);
	void	UseToolBarImages(CToolBar* pToolBar);
	void	MakeOwnerDraw	(BOOL bTopLevel);
	BOOL TrackPopupMenu(UINT nFlags,int x,int y,CWnd* pWnd,	LPCRECT lpRect = 0);
	void	AddTitle(CString szTitle);
	CString m_szTitle;
	
	// Protected methods
protected:
			
	void	SetItemImages	(UINT uiID, INT nImage, CToolBar* pToolBar);

	// Public properties
public:
	static	COLORREF	m_colHead;			// Default: COLOR_MENUBAR
	static	COLORREF	m_colBackground;	// Default: COLOR_MENU
	static	COLORREF	m_colHorzBar;		// Default: COLOR_MENUBAR
	static	COLORREF	m_colText;			// Default: COLOR_MENUTEXT
	static	COLORREF	m_colGrayText;		// Default: COLOR_GRAYTEXT
	static	COLORREF	m_colSeparator;		// Default: COLOR_MENUBAR
	static	COLORREF	m_colHilightBorder;	// Default: COLOR_3DSHADOW
	static	COLORREF	m_colHilight;		// Default: COLOR_MENUHILIGHT
	static	COLORREF	m_colGrayHilight;	// Default: COLOR_MENU
	static	BOOL		m_bHighlightGray;	// Default: FALSE
	static	CSize		m_szImage;			// Default: 16x16
	static	CSize		m_szImagePadding;	// Default: 3x3
	static	CSize		m_szTextPadding;	// Default: 5x3

	// Protected properties
protected:
	CWnd*		m_pWnd;
	CPtrArray	m_TempMenus;
	CPtrArray	m_TempItems;
	CPtrArray	m_ToolBars;
	CPtrArray	m_ImageLists;
	CBitmap		m_BitmapItems;
	// Helper-Defines
#define DECLARE_GUIMENU()																\
protected:																				\
	afx_msg void OnMeasureItem(int nIDControl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);

#define ON_GUIMENU_MESSAGES()	\
	ON_WM_MEASUREITEM()

#define IMPLEMENT_GUIMENU(theClass, baseClass)												\
	void theClass::OnMeasureItem(int, LPMEASUREITEMSTRUCT lpMeasureItemStruct)	\
	{																						\
		CGuiMenu::OnMeasureItem(lpMeasureItemStruct, this);									\
	}


};

#endif
