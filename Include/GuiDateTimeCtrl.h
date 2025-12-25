#ifndef GUIDATETIMECTRL_H
#define GUIDATETIMECTRL_H
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


#include "GuiMaskCtrl.h"
#include "DateTime.h"


class AFX_EXT_CLASS CGuiDateTimeCtrl : public CGuiMaskCtrl
{
protected:
	CDateTime	m_dMin, m_dMax;
	BOOL		m_bHasMin;
	BOOL		m_bHasMax;
	bool		m_bHasCalendar;

	virtual void OnButton();

public:
	CGuiDateTimeCtrl(void);
	~CGuiDateTimeCtrl(void);
	void	SetMinMax(CDateTime dMin, CDateTime mMax);
	void	SetMinMax(LPCTSTR lpszMin, LPCTSTR lpszMax);
	void	SetMin(CDateTime& dMin);
	void	SetMax(CDateTime& dMax);
	void	SetMin(CString lpszMin);
	void	SetMax(CString lpszMax);
	BOOL	CreateCalendar();
	int		IsValidateData();
	void	EnableCalendar(bool bEnable=true);

	DECLARE_MESSAGE_MAP()
	afx_msg void OnEnSetfocus();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void PreSubclassWindow();
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

#endif