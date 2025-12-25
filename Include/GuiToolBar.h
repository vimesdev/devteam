#ifndef GUITOOLBAR_H
#define GUITOOLBAR_H
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


///////////////////////////////////////////////////////////////////////////////
class AFX_EXT_CLASS CGuiToolBar : public CToolBar
{
	UINT		m_nBitmapID;
	CBitmap		m_bmpButtons;
	CBitmap		m_bmpTitle;
	bool		m_bLoadBitmap;

public:
    CGuiToolBar ();
	~CGuiToolBar();

// Operations
public:
	BOOL	LoadToolBar (UINT nIDResource);
    bool	InsertControl (int nIndex, CWnd& Ctrl);
	void	SetBitmapID(UINT nID);

// Implementation
protected:
    // Use the BYTE type because we need 3 states (not a boolean !)
    BYTE m_bCheckVisibility;

protected:
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CGuiToolBar)
    virtual LRESULT DefWindowProc (UINT nMsg, WPARAM wParam, LPARAM lParam);
    virtual CSize CalcDynamicLayout (int nLength, DWORD nMode);
    //}}AFX_VIRTUAL

    // Message Handlers
protected:
    //{{AFX_MSG(CGuiToolBar)
    afx_msg void OnPaint();
    afx_msg void OnButtonDropDown(NMHDR*, LRESULT*);
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP();
    DECLARE_DYNAMIC(CGuiToolBar);
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnDestroy();
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};



#endif