#ifndef GUINUMBERCTRL_H
#define GUINUMBERCTRL_H
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


#include "GuiTextCtrl.h"


class AFX_EXT_CLASS CGuiNumberCtrl : 
	public CGuiTextCtrl
{
	BOOL	IsCharPass(UINT nChar);
	int		m_nNumberDecimal;
	int		m_nDecimalPlace;
	BOOL	m_bIsDecimalUsed;
	BOOL	m_bHasValue;
	BOOL	m_bUseMinMax;
	double	m_dMinValue, m_dMaxValue, m_dValue;
	

public:
	CGuiNumberCtrl(void);
	~CGuiNumberCtrl(void);
	void	SetNumberDecimal(int nDecimal);
	void	SetMinMax(double dMin, double dMax);
	int		IsValidateData();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnEnKillfocus();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnEnChange();
	afx_msg LRESULT OnPaste(WPARAM wParam, LPARAM lParam);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
};

#endif