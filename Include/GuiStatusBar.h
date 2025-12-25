#ifndef GUISTATUSBAR_H
#define GUISTATUSBAR_H
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

#include <afxext.h>
#include <afxtempl.h>
#include <afxstatusbar.h>

///////////////////////////////////////////////////////////////////////////////
class AFX_EXT_CLASS CGuiStatusBar : public CMFCStatusBar
{
    DECLARE_DYNCREATE(CGuiStatusBar)
	CBitmap	m_bmpBkgnd;
	CFont	m_Font;
	CMap<int,int, COLORREF, COLORREF> m_clrPanes;
	COLORREF	m_clrText;

public:
	CGuiStatusBar();
	~CGuiStatusBar();
	void	SetTextColor(COLORREF clrText);
	void	SetTextColor(int nIndex, COLORREF clrText);

protected:
	virtual CSize CalcFixedLayout(BOOL bStretch, BOOL bHorz);
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnWindowPosChanging(WINDOWPOS* lpwndpos);
	virtual void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHandler);
	virtual void OnDrawPane(CDC* pDC, CMFCStatusBarPaneInfo* pPane);

	DECLARE_MESSAGE_MAP()

};


#endif