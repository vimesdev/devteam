#ifndef HMSTREATMENTTDUNG_H
#define HMSTREATMENTTDUNG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
#include "GuiView.h"
#include "DbField.h"
class CHMSTreatmentTDung : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiLabel		m_wndInfectiousFormLabel;
	CGuiComboBox	m_wndInfectiousForm;
	CGuiLabel		m_wndLabourGroupLabel;
	CGuiComboBox	m_wndLabourGroup;
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szInfectiousFormKey;
	CString	m_szLabourGroupKey;
	CString	m_szDate;
	CDbfMap	m_hms_treatment_dttdTbl;
	void			OnInfectiousFormSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInfectiousFormSelendok(); 
	//void			OnInfectiousFormSetfocus(); 
	//void			OnInfectiousFormKillfocus(); 
	long			OnInfectiousFormLoadData(); 
	void			OnInfectiousFormAddNew(); 
	void			OnLabourGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLabourGroupSelendok(); 
	//void			OnLabourGroupSetfocus(); 
	//void			OnLabourGroupKillfocus(); 
	long			OnLabourGroupLoadData(); 
	void			OnLabourGroupAddNew(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSTreatmentTDung();
	~CHMSTreatmentTDung();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentTDung(); 
	int OnEditHMSTreatmentTDung(); 
	int OnDeleteHMSTreatmentTDung(); 
	int OnSaveHMSTreatmentTDung(); 
	int OnCancelHMSTreatmentTDung(); 
	int OnHMSTreatmentTDungListLoadData(); 
};
#endif
