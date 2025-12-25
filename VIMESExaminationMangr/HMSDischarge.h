#ifndef HMSDISCHARGE_H
#define HMSDISCHARGE_H

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
class CHMSDischarge : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndDischargeInformation;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndResultLabel;
	CGuiComboBox	m_wndResult;
	CGuiLabel		m_wndICD10Label;
	CGuiComboBox	m_wndICD10;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndTreatMethodLabel;
	CGuiTextCtrl	m_wndTreatMethod;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiCheckBox	m_wndSurgery;
	CString	m_szEndDate;
	CString	m_szResultKey;
	CString	m_szICD10Key;
	CString	m_szMainDisease;
	CString	m_szRelationDisease;
	CString	m_szTreatMethod;
	CString	m_szConclusion;
	CDbfMap	m_hms_docTbl;

	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	void			OnResultSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResultSelendok(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	long			OnResultLoadData(); 
	void			OnResultAddNew(); 
	void			OnICD10SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICD10Selendok(); 
	//void			OnICD10Setfocus(); 
	//void			OnICD10Killfocus(); 
	long			OnICD10LoadData(); 
	void			OnICD10AddNew(); 
	//void			OnMainDiseaseChange(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	int			OnMainDiseaseCheckValue(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	//void			OnTreatMethodChange(); 
	//void			OnTreatMethodSetfocus(); 
	//void			OnTreatMethodKillfocus(); 
	int			OnTreatMethodCheckValue(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnPrintOutPatientRecord();
	int				OnUpdateDeathInformation();
	CHMSDischarge();
	~CHMSDischarge();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDischarge(); 
	int OnEditHMSDischarge(); 
	int OnDeleteHMSDischarge(); 
	int OnSaveHMSDischarge(); 
	int OnCancelHMSDischarge(); 
	int OnHMSDischargeListLoadData(); 
};
#endif
