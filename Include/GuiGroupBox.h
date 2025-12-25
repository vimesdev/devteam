#ifndef GUIGROUPBOX_H
#define GUIGROUPBOX_H
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
#include <afxwin.h>


class AFX_EXT_CLASS CGuiGroupBox : public CStatic{

public:
	CGuiGroupBox();
	~CGuiGroupBox();
	//Function: Create
	//Description: Ham tao control kieu group dung de nhom cac o nhap lieu lai theo nhom
	//szCaption: Ten label hien thi
	//x, y, width, height: Toa do cua control.
	//dwStyle: BS_TOP(draw caption on top of group), BS_LEFT(draw caption on left of group);
	virtual BOOL Create(CWnd *pParent, CString szCaption, int x, int y, int width, int height, DWORD dwStyle=BS_TOP, int nLabelWidth=0);
	//Thiet lap mau chu cho control
	void	SetColorText(COLORREF clrText);
protected:
	UINT		m_nTextStyle;
	COLORREF	m_clrText;
	CFont		m_Font;
	void	DrawText(CDC *pDC, CRect rect, CString szString);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	afx_msg void OnPaint();
	afx_msg void OnNcPaint();;
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDestroy();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#endif