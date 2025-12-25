#ifndef GUIRADIOBUTTON_H
#define GUIRADIOBUTTON_H
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


class AFX_EXT_CLASS CGuiRadioButton : public CButton, public CGuiBase
{
	COLORREF	m_clrText;
public:
	CGuiRadioButton();
	~CGuiRadioButton();
	BOOL	Create(CWnd *pParent, CString szCaption, int x, int y, int width, int height);
	void	SetTextColor(COLORREF clrText);
protected:
    BOOL m_bChecked;

	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	afx_msg void OnBnClicked();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);	
	LRESULT OnSetText (WPARAM wParam,LPARAM lParam);
    LRESULT OnGetCheck(WPARAM, LPARAM);
    LRESULT OnSetCheck(WPARAM fCheck, LPARAM);
	BOOL CheckNextPrevRadioButton(BOOL bNext);
    void UncheckRadioButtonsInGroup();


	DECLARE_MESSAGE_MAP()
    HRESULT CGuiRadioButton::get_accState(VARIANT varChild, VARIANT *pvarState);

public:
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);    
    virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#endif