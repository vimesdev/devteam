#ifndef HMSEXAMINE2_H
#define HMSEXAMINE2_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSExamine2 : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndExaminationInformation;
	CGuiGroupBox	m_wndDiseasePrehistory;
	CGuiLabel		m_wndOwnerLabel;
	CGuiTextCtrl	m_wndOwner;
	CGuiLabel		m_wndFamilyLabel;
	CGuiTextCtrl	m_wndFamily;
	CGuiLabel		m_wndDrugAllergyLabel;
	CGuiTextCtrl	m_wndDrugAllergy;
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndPathologyProcessLabel;
	CGuiTextCtrl	m_wndPathologyProcess;
	CGuiLabel		m_wndExamineLabel;
	CGuiTextCtrl	m_wndExamine;
	CGuiLabel		m_wndPulseLabel;
	CGuiNumberCtrl	m_wndPulse;
	CGuiLabel		m_wndTemperatureLabel;
	CGuiNumberCtrl	m_wndTemperature;
	CGuiLabel		m_wndBloodPressureLabel;
	CGuiNumberCtrl	m_wndBloodPressure;
	CGuiNumberCtrl	m_wndBloodPressurex;
	CGuiLabel		m_wndBreathingIntervalLabel;
	CGuiNumberCtrl	m_wndBreathingInterval;
	CGuiLabel		m_wndWeightLabel;
	CGuiNumberCtrl	m_wndWeight;
	CGuiLabel		m_wndHeightLabel;
	CGuiNumberCtrl	m_wndHeight;
	CGuiLabel		m_wndPreDiagnosticLabel;
	CGuiTextCtrl	m_wndPreDiagnostic;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndICDDiagnosticLabel;
	CGuiComboBox	m_wndICDDiagnostic;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiButton		m_wndPrehistory;
	CGuiButton		m_wndReloadInfo;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndTerminate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndHATD;
	CString	m_szOwner;
	CString	m_szFamily;
	CString	m_szDrugAllergy;
	CString	m_szDate;
	CString	m_szDoctorKey;
	CString	m_szPathologyProcess;
	CString	m_szExamine;
	long	m_nPulse;
	long	m_nTemperature;
	long	m_nBloodPressure;
	long	m_nBloodPressurex;
	long	m_nBreathingInterval;
	long	m_nWeight;
	long	m_nHeight;
	CString	m_szPreDiagnostic;
	CString	m_szRelationDisease;
	CString	m_szICDDiagnosticKey;
	CString	m_szConclusion;
	BOOL	m_bHATD;
	CDbfMap	m_hms_examTbl;
	//void			OnOwnerChange(); 
	//void			OnOwnerSetfocus(); 
	//void			OnOwnerKillfocus(); 
	int			OnOwnerCheckValue(); 
	//void			OnFamilyChange(); 
	//void			OnFamilySetfocus(); 
	//void			OnFamilyKillfocus(); 
	int			OnFamilyCheckValue(); 
	//void			OnDrugAllergyChange(); 
	//void			OnDrugAllergySetfocus(); 
	//void			OnDrugAllergyKillfocus(); 
	int			OnDrugAllergyCheckValue(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	//void			OnPathologyProcessChange(); 
	//void			OnPathologyProcessSetfocus(); 
	//void			OnPathologyProcessKillfocus(); 
	int			OnPathologyProcessCheckValue(); 
	//void			OnExamineChange(); 
	//void			OnExamineSetfocus(); 
	//void			OnExamineKillfocus(); 
	int			OnExamineCheckValue(); 
	//void			OnPulseChange(); 
	//void			OnPulseSetfocus(); 
	//void			OnPulseKillfocus(); 
	int			OnPulseCheckValue(); 
	//void			OnTemperatureChange(); 
	//void			OnTemperatureSetfocus(); 
	//void			OnTemperatureKillfocus(); 
	int			OnTemperatureCheckValue(); 
	//void			OnBloodPressureChange(); 
	//void			OnBloodPressureSetfocus(); 
	//void			OnBloodPressureKillfocus(); 
	int			OnBloodPressureCheckValue(); 
	//void			OnBloodPressurexChange(); 
	//void			OnBloodPressurexSetfocus(); 
	//void			OnBloodPressurexKillfocus(); 
	int			OnBloodPressurexCheckValue(); 
	//void			OnBreathingIntervalChange(); 
	//void			OnBreathingIntervalSetfocus(); 
	//void			OnBreathingIntervalKillfocus(); 
	int			OnBreathingIntervalCheckValue(); 
	//void			OnWeightChange(); 
	//void			OnWeightSetfocus(); 
	//void			OnWeightKillfocus(); 
	int			OnWeightCheckValue(); 
	//void			OnHeightChange(); 
	//void			OnHeightSetfocus(); 
	//void			OnHeightKillfocus(); 
	int			OnHeightCheckValue(); 
	//void			OnPreDiagnosticChange(); 
	//void			OnPreDiagnosticSetfocus(); 
	//void			OnPreDiagnosticKillfocus(); 
	int			OnPreDiagnosticCheckValue(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	void			OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICDDiagnosticSelendok(); 
	//void			OnICDDiagnosticSetfocus(); 
	//void			OnICDDiagnosticKillfocus(); 
	long			OnICDDiagnosticLoadData(); 
	//void			OnICDDiagnosticAddNew(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnPrehistorySelect(); 
	void			OnReloadInfoSelect(); 
	void			OnUpdateSelect(); 
	void			OnTerminateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnHATDSelect(); 
	CHMSExamine2();
	~CHMSExamine2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExamine2(); 
	int OnEditHMSExamine2(); 
	int OnDeleteHMSExamine2(); 
	int OnSaveHMSExamine2(); 
	int OnCancelHMSExamine2(); 
	int OnHMSExamine2ListLoadData(); 
};
#endif
