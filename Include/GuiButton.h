#ifndef GUIBUTTON_H
#define GUIBUTTON_H
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
#include "GuiTooltip.h"
class CGuiButton;

/*
	if(szText == _T("add"))
	{
		nID = IDR_ADD_BUTTON;
	}
	else if(szText == _T("accept") || szText == _T("approval") || szText == _T("confirm"))
		nID = IDR_ACCEPT_BUTTON;
	else if(szText == _T("close") || szText == _T("x"))
		nID = IDR_CLOSE_BUTTON2;
	else if(szText == _T("delete"))
		nID = IDR_DELETE_BUTTON;
	else if(szText == _T("save"))
		nID = IDR_SAVE_BUTTON;
	else if(szText == _T("cancel") || szText == _T("discard"))
		nID = IDR_CANCEL_BUTTON;
	else if(szText == _T("refresh") || szText == _T("load"))
		nID = IDR_REFRESH_BUTTON;
	else if(szText == _T("edit") || szText == _T("update"))
		nID = IDR_EDIT_BUTTON;
	else if(szText == _T("preview") || szText == _T("print preview"))
		nID = IDR_PRINTPREVIEW_BUTTON;
	else if(szText == _T("print"))
		nID = IDR_PRINTER_BUTTON;

	if(szText == _T("x"))
	{
		nID = IDR_CLOSE_BUTTON2;
		szText.Empty();
		SetWindowText(szText);
	}
	else if(szText.Left(2) == _T("@>"))
	{
		nID = IDR_REFRESH_BUTTON;
		GetWindowText(szText);
		szText.Replace(_T("@>"), _T(""));
		SetWindowText(szText);
	}
	else if(szText.Left(1) == _T("@"))
	{
		nID = IDR_SEARCH_BUTTON;
		GetWindowText(szText);
		szText.Replace(_T("@"), _T(""));
		SetWindowText(szText);
	}
	else if(szText == _T("+"))
	{
		nID = IDR_ADD_BUTTON;
		szText.Empty();
		SetWindowText(szText);
	}
	else if(szText == _T("-"))
	{
		nID = IDR_DELETE_BUTTON;
		szText.Empty();
		SetWindowText(szText);
	}
	else if(szText == _T("#"))
	{
		nID = IDR_EDIT_BUTTON;
		szText.Empty();
		SetWindowText(szText);
	}
	else if(szText == _T("^"))
	{
		nID = IDR_ACCEPT_BUTTON;
		szText.Empty();
		SetWindowText(szText);
	}
	else if(szText == _T("###"))
	{
		nID = IDR_COMBOBOX_BUTTON;
		szText.Empty();
		SetWindowText(szText);
	}
	else if(szText == _T("home"))
	{
		nID = IDR_HOME_BUTTON;
	}
*/

class AFX_EXT_CLASS CGuiButton : public CButton, public CGuiBase{
	HICON	m_hIcon;
	UINT	m_nImageID;
	bool	m_bHasMenu;
	COLORREF	m_clrFocus;

	BOOL		m_bIsHovering;
	BOOL		m_bIsTracking;
	UINT		m_nButtonStyle;
	CBitmap*	m_bmpBitmap;
	CString		m_szDescription;
	CWnd*		m_wndSubButton;
	
public:
	CGuiButton();
	virtual ~CGuiButton();
	virtual BOOL Create(CWnd *pParent, CString szCaption, int left, int top, int right, int button, UINT nID=-1);
	virtual BOOL Create(CWnd *pParent, CString szCaption, CRect& rect, UINT nID=-1);

	void	SetMenuButton(bool bFlag);
	void	SetTextColor(COLORREF clrText);
	void	SetBackgroundColor(COLORREF clrBackground);
	void	SetBackgroundFocus(COLORREF clrFocus);
	void	SetButtonInfo(HBITMAP hBitmap,  CString szDescription, COLORREF clrText=RGB(255, 255, 255), COLORREF clrBackground=RGB(0, 128, 192), COLORREF clrFocus=RGB(255, 128, 0), bool bTitle = false);
	void	LoadIcon(UINT nID);
	void	SetImageID(int nImage);
	
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	afx_msg void OnBnClicked();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg LRESULT OnMouseHover(WPARAM wparam, LPARAM lparam) ;
	
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};



#endif