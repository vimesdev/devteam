#ifndef CHMSUPDATEOVER5YEAR_H
#define CHMSUPDATEOVER5YEAR_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSUpdateOver5Year : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndGroupBox;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndOver5YearsLabel;
	CGuiTextCtrl	m_wndOver5Years;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndOver5YearApplyDate;
	CGuiLabel		m_wndDiscountApplyDateLabel;
	CGuiDateCtrl	m_wndOver5YearDiscountApplyDate;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	int	            m_nDiscount;
	CString	m_szOver5Years;
	CString	m_szOver5YearApplyDate;
	CString	m_szOver5YearDiscountApplyDate;
	CString	m_szNote;
	CDbfMap m_hms_docTbl;
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//void			OnOver5YearsChange(); 
	//void			OnOver5YearsSetfocus(); 
	//void			OnOver5YearsKillfocus(); 
	int			OnOver5YearsCheckValue(); 
	//void			OnOver5YearApplyDateChange(); 
	//void			OnOver5YearApplyDateSetfocus(); 
	//void			OnOver5YearApplyDateKillfocus(); 
	int			OnOver5YearApplyDateCheckValue();
	int			OnOver5YearDiscountApplyDateCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSUpdateOver5Year(CWnd *pParent);
	~CHMSUpdateOver5Year();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSUpdateOver5Year(); 
	int OnEditCHMSUpdateOver5Year(); 
	int OnDeleteCHMSUpdateOver5Year(); 
	int OnSaveCHMSUpdateOver5Year(); 
	int OnCancelCHMSUpdateOver5Year(); 
	int OnCHMSUpdateOver5YearListLoadData(); 
};
#endif
