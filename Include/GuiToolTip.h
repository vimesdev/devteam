///////////////////////////////////////////////////////////////////////////
//                                                                         
// FILE NAME                                                               
//                                                                         
//		GuiTooltip.h
//                                                                         
// COMPONENT                                                               
//                                                                         
//		CGuiTooltip class interface
//                                                                         
// DESCRIPTION                                                             
//
//		This tooltip control implements:
//
//		o An immediate popup tip window
//		o Normal control tooltips
//
//		The tip window can display an icon and multi-line
//		tip text.  Seperate multiple text lines with a '\n'.
//		The tip window's colors are derrived from
//		system window, window text, and scroll bar colors.
//
//		Create the control by calling the Create() method.
//
//		To display immediate tips, call the Show() method.
//		Call SetIcon() to set the icon used for immediate tips.
//
//		Use AddTool() to add tool windows.  RelayEvent() must
//		be called from the parent windows's PreTranslateMessage().
//
//		Call SetShowDelay() to adjust the tip popup delay.
//
//		Call SetFont() to change the tooltip text font.  The default
//		is the system default GUI font.
//
// AUTHOR
//
//		Mark Bozeman		09-16-2001
//
///////////////////////////////////////////////////////////////////////////
// This software is released into the public domain.  
// You are free to use it in any way you like.
//
// This software is provided "as is" with no expressed 
// or implied warranty.  I accept no liability for any 
// damage or loss of business that this software may cause. 
///////////////////////////////////////////////////////////////////////////

#ifndef _XPOPUPTIP_H_INCLUDE_
#define _XPOPUPTIP_H_INCLUDE_

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

#include <afxtempl.h>

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class AFX_EXT_CLASS CGuiTooltip : public CWnd
{
protected:
	///////////////////////////////////////////////////////////////////////////
	// Tool information structure
	///////////////////////////////////////////////////////////////////////////
	typedef struct tagTipToolInfo
	{
		CString	szText;											// Tooltip text
		HICON	hIcon;											// Tooltip icon
	} TipToolInfo;

	// Timer identifiers
	enum eTimer
	{
		timerShow			= 100,								// Show timer
		timerHide			= 101								// Hide timer
	};

	LPCTSTR		m_szClass;										// Window class

	int			m_nShowDelay;									// Show delay

	CPoint		m_ptOrigin;										// Popup origin

	CString		m_szText;										// Tip text

	UINT		m_nTimer;										// Show/hide timer

	HICON		m_hIcon;										// Tip icon
	CSize		m_IconSize;										// Tip icon size

	CFont		*m_pFont;										// Tip font

	CMap<HWND, HWND, TipToolInfo, TipToolInfo>	m_ToolMap;		// Tools map

public:
	CGuiTooltip();
	virtual ~CGuiTooltip();

	BOOL Create(CWnd *parent);

	void AddTool(CWnd *pWnd, LPCTSTR szTooltipText, HICON hIcon = NULL);
	void RemoveTool(CWnd *pWnd);

	void Show(CString szText, CPoint *pt = NULL);
	void Hide() { ShowWindow(SW_HIDE); };

	// Sets the delay for the tooltip
	void SetShowDelay(int nDelay) { m_nShowDelay = nDelay; };

	void SetIcon(HICON hIcon);

	// Sets the tooltip font
	void SetFont(CFont *pFont) 
	{ 
		m_pFont = pFont; 
		if (IsWindow(m_hWnd))
			RedrawWindow();
	};

	void RelayEvent(LPMSG lpMsg);

protected:
	BOOL GetWindowRegion(CDC *pDC, HRGN* hRegion, CSize* Size = NULL);


protected:
	//{{AFX_MSG(CGuiTooltip)
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif 
