#ifndef HMSPATIENTDOCUMENT_H
#define HMSPATIENTDOCUMENT_H

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
class CHMSPatientDocument : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndProfiles;
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiGroupBox	m_wndDepartments;
	CGuiTabCtrl	m_wndTab;
	CGuiTextCtrl	m_wndDetailAddress;
	CGuiLabel		m_wndDetailAddrlLabel;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndAdditionInfo;
	CGuiLabel		m_wndMainDiseaseDiagnosticLabel;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndEthnicLabel;
	CGuiTextCtrl	m_wndEthnic;
	CGuiLabel		m_wndOccupationLabel;
	CGuiTextCtrl	m_wndOccupation;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiTextCtrl	m_wndCardNo;
	CGuiButton		m_wndCardInfoBtn;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndDischargeDateLabel;
	CGuiDateCtrl	m_wndDischargeDate;
	CGuiButton		m_wndAntibioticUse;
	CGuiTextCtrl	m_wndMainDiseaseDiagnostic;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndSuggestionLabel;
	CGuiTextCtrl	m_wndSuggestion;
	CGuiButton		m_wndSuggestionBtn;
	CGuiTabCtrl	m_wndTreatmentTab;
	CGuiListCtrl	m_wndDeptList;
	CGuiButton		m_wndClinicalRecord;
	CGuiButton		m_wndElectronicRecord;
	CGuiButton		m_wndTheodoidieutri;
	CGuiButton		m_wndTreatmentTracking;
	CGuiButton		m_wndPatientCare;
	CGuiButton		m_wndExtButton;
	CString	m_szDetailAddress;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szEthnic;
	CString	m_szOccupation;
	CString	m_szAddress;
	CString	m_szWorkplace;
	CString	m_szObject;
	CString	m_szCardNo;
	CString	m_szStatus;
	CString	m_szDoctor;
	CString	m_szAdmitDate;
	CString	m_szDischargeDate;
	CString	m_szMainDiseaseDiagnostic;
	CString	m_szRelationDisease;
	CString	m_szSuggestion;
	void			OnTabSelectChange(int nOld, int nNew); 
	//void			OnDetailAddressChange(); 
	//void			OnDetailAddressSetfocus(); 
	//void			OnDetailAddressKillfocus(); 
	int			OnDetailAddressCheckValue(); 
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnAdditionInfoSelect(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnEthnicChange(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	int			OnEthnicCheckValue(); 
	//void			OnOccupationChange(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	int			OnOccupationCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnWorkplaceChange(); 
	//void			OnWorkplaceSetfocus(); 
	//void			OnWorkplaceKillfocus(); 
	int			OnWorkplaceCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	void			OnCardInfoBtnSelect(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnDoctorChange(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	//void			OnDischargeDateChange(); 
	//void			OnDischargeDateSetfocus(); 
	//void			OnDischargeDateKillfocus(); 
	int			OnDischargeDateCheckValue(); 
	void			OnAntibioticUseSelect(); 
	//void			OnMainDiseaseDiagnosticChange(); 
	//void			OnMainDiseaseDiagnosticSetfocus(); 
	//void			OnMainDiseaseDiagnosticKillfocus(); 
	int			OnMainDiseaseDiagnosticCheckValue(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	//void			OnSuggestionChange(); 
	//void			OnSuggestionSetfocus(); 
	//void			OnSuggestionKillfocus(); 
	int			OnSuggestionCheckValue(); 
	void			OnSuggestionBtnSelect(); 
	void			OnTreatmentTabSelectChange(int nOld, int nNew); 
	long			OnDeptListLoadData(); 
	void			OnDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnDeptListDblClick(); 
	int			OnDeptListDeleteItem(); 
	void			OnClinicalRecordSelect(); 
	void			OnElectronicRecordSelect(); 
	void			OnTheodoidieutriSelect(); 
	void			OnTreatmentTrackingSelect(); 
	void			OnPatientCareSelect(); 
	void			OnExtButtonSelect(); 
	CHMSPatientDocument();
	~CHMSPatientDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientDocument(); 
	int OnEditHMSPatientDocument(); 
	int OnDeleteHMSPatientDocument(); 
	int OnSaveHMSPatientDocument(); 
	int OnCancelHMSPatientDocument(); 
	int OnHMSPatientDocumentListLoadData(); 
};
#endif
