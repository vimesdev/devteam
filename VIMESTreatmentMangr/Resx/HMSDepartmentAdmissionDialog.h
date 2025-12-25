#ifndef HMSDEPARTMENTADMISSIONDIALOG_H
#define HMSDEPARTMENTADMISSIONDIALOG_H

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
class CHMSDepartmentAdmissionDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndContactInformation;
	CGuiGroupBox	m_wndDepartmentAdmitedInformation;
	CGuiGroupBox	m_wndAdmissionInformation;
	CGuiLabel		m_wndExamDateLabel;
	CGuiDateCtrl	m_wndExamDate;
	CGuiLabel		m_wndExamDeptLabel;
	CGuiTextCtrl	m_wndExamDept;
	CGuiLabel		m_wndExamRoomLabel;
	CGuiTextCtrl	m_wndExamRoom;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;
	CGuiLabel		m_wndOccupationLabel;
	CGuiComboBox	m_wndOccupation;
	CGuiLabel		m_wndProvinceLabel;
	CGuiComboBox	m_wndProvince;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVillageLabel;
	CGuiComboBox	m_wndVillage;
	CGuiLabel		m_wndDetailAddressLabel;
	CGuiTextCtrl	m_wndDetailAddress;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndRankLabel;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndRelativeLabel;
	CGuiTextCtrl	m_wndRelative;
	CGuiLabel		m_wndRelationLabel;
	CGuiComboBox	m_wndRelation;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndAdmissionNoLabel;
	CGuiTextCtrl	m_wndAdmissionNo;
	CGuiLabel		m_wndTimes;
	CGuiNumberCtrl	m_wndTimesOfAdmision;
	CGuiLabel		m_wndAdmisionDateLabel;
	CGuiDateTimeCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndAdmitedDirectionLabel;
	CGuiComboBox	m_wndAdmitedDirection;
	CGuiLabel		m_wndTransferPlaceLabel;
	CGuiComboBox	m_wndTransferPlace;
	CGuiLabel		m_wndTransferHospitalLabel;
	CGuiTextCtrl	m_wndTransferHospital;
	CGuiLabel		m_wndTransferDiagnosticLabel;
	CGuiTextCtrl	m_wndTransferDiagnostic;
	CGuiLabel		m_wndExamineDiseaseLabel;
	CGuiTextCtrl	m_wndExamineDisease;
	CGuiLabel		m_wndInDateLabel;
	CGuiDateTimeCtrl	m_wndInDate;
	CGuiCheckBox	m_wndOutpatient;
	CGuiCheckBox	m_wndEmergency;
	CGuiCheckBox	m_wndCancer;
	CGuiLabel		m_wndAdmissionDiseaseLabel;
	CGuiComboBox	m_wndAdmissionDisease;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szExamDate;
	CString	m_szExamDept;
	CString	m_szExamRoom;
	CString	m_szPatientName;
	CString	m_szBirthDate;
	CString	m_szSexKey;
	CString	m_szEthnicKey;
	CString	m_szOccupationKey;
	CString	m_szProvinceKey;
	CString	m_szDistrictKey;
	CString	m_szVillageKey;
	CString	m_szDetailAddress;
	CString	m_szWorkplace;
	CString	m_szRankKey;
	CString	m_szPositionKey;
	CString	m_szRelative;
	CString	m_szRelationKey;
	CString	m_szAddress;
	CString	m_szPhone;
	CString	m_szAdmissionNo;
	long	m_nTimesOfAdmision;
	CString	m_szAdmitDate;
	CString	m_szAdmitedDirectionKey;
	CString	m_szTransferPlaceKey;
	CString	m_szTransferHospital;
	CString	m_szTransferDiagnostic;
	CString	m_szExamineDisease;
	CString	m_szInDate;
	BOOL	m_bOutpatient;
	BOOL	m_bEmergency;
	BOOL	m_bCancer;
	CString	m_szAdmissionDiseaseKey;
	CString	m_szMainDisease;
	CString	m_szRelationDisease;
	//void			OnExamDateChange(); 
	//void			OnExamDateSetfocus(); 
	//void			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	//void			OnExamDeptChange(); 
	//void			OnExamDeptSetfocus(); 
	//void			OnExamDeptKillfocus(); 
	int			OnExamDeptCheckValue(); 
	//void			OnExamRoomChange(); 
	//void			OnExamRoomSetfocus(); 
	//void			OnExamRoomKillfocus(); 
	int			OnExamRoomCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	void			OnEthnicSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEthnicSelendok(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	long			OnEthnicLoadData(); 
	//void			OnEthnicAddNew(); 
	void			OnOccupationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOccupationSelendok(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	long			OnOccupationLoadData(); 
	//void			OnOccupationAddNew(); 
	void			OnProvinceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvinceSelendok(); 
	//void			OnProvinceSetfocus(); 
	//void			OnProvinceKillfocus(); 
	long			OnProvinceLoadData(); 
	//void			OnProvinceAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew(); 
	void			OnVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVillageSelendok(); 
	//void			OnVillageSetfocus(); 
	//void			OnVillageKillfocus(); 
	long			OnVillageLoadData(); 
	//void			OnVillageAddNew(); 
	//void			OnDetailAddressChange(); 
	//void			OnDetailAddressSetfocus(); 
	//void			OnDetailAddressKillfocus(); 
	int			OnDetailAddressCheckValue(); 
	//void			OnWorkplaceChange(); 
	//void			OnWorkplaceSetfocus(); 
	//void			OnWorkplaceKillfocus(); 
	int			OnWorkplaceCheckValue(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	//void			OnRankAddNew(); 
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPositionSelendok(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData(); 
	//void			OnPositionAddNew(); 
	//void			OnRelativeChange(); 
	//void			OnRelativeSetfocus(); 
	//void			OnRelativeKillfocus(); 
	int			OnRelativeCheckValue(); 
	void			OnRelationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRelationSelendok(); 
	//void			OnRelationSetfocus(); 
	//void			OnRelationKillfocus(); 
	long			OnRelationLoadData(); 
	//void			OnRelationAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnAdmissionNoChange(); 
	//void			OnAdmissionNoSetfocus(); 
	//void			OnAdmissionNoKillfocus(); 
	int			OnAdmissionNoCheckValue(); 
	//void			OnTimesOfAdmisionChange(); 
	//void			OnTimesOfAdmisionSetfocus(); 
	//void			OnTimesOfAdmisionKillfocus(); 
	int			OnTimesOfAdmisionCheckValue(); 
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	void			OnAdmitedDirectionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAdmitedDirectionSelendok(); 
	//void			OnAdmitedDirectionSetfocus(); 
	//void			OnAdmitedDirectionKillfocus(); 
	long			OnAdmitedDirectionLoadData(); 
	//void			OnAdmitedDirectionAddNew(); 
	void			OnTransferPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransferPlaceSelendok(); 
	//void			OnTransferPlaceSetfocus(); 
	//void			OnTransferPlaceKillfocus(); 
	long			OnTransferPlaceLoadData(); 
	//void			OnTransferPlaceAddNew(); 
	//void			OnTransferHospitalChange(); 
	//void			OnTransferHospitalSetfocus(); 
	//void			OnTransferHospitalKillfocus(); 
	int			OnTransferHospitalCheckValue(); 
	//void			OnTransferDiagnosticChange(); 
	//void			OnTransferDiagnosticSetfocus(); 
	//void			OnTransferDiagnosticKillfocus(); 
	int			OnTransferDiagnosticCheckValue(); 
	//void			OnExamineDiseaseChange(); 
	//void			OnExamineDiseaseSetfocus(); 
	//void			OnExamineDiseaseKillfocus(); 
	int			OnExamineDiseaseCheckValue(); 
	//void			OnInDateChange(); 
	//void			OnInDateSetfocus(); 
	//void			OnInDateKillfocus(); 
	int			OnInDateCheckValue(); 
	void			OnOutpatientSelect(); 
	void			OnEmergencySelect(); 
	void			OnCancerSelect(); 
	void			OnAdmissionDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAdmissionDiseaseSelendok(); 
	//void			OnAdmissionDiseaseSetfocus(); 
	//void			OnAdmissionDiseaseKillfocus(); 
	long			OnAdmissionDiseaseLoadData(); 
	//void			OnAdmissionDiseaseAddNew(); 
	//void			OnMainDiseaseChange(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	int			OnMainDiseaseCheckValue(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSDepartmentAdmissionDialog(CWnd *pParent);
	~CHMSDepartmentAdmissionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDepartmentAdmissionDialog(); 
	int OnEditHMSDepartmentAdmissionDialog(); 
	int OnDeleteHMSDepartmentAdmissionDialog(); 
	int OnSaveHMSDepartmentAdmissionDialog(); 
	int OnCancelHMSDepartmentAdmissionDialog(); 
	int OnHMSDepartmentAdmissionDialogListLoadData(); 
};
#endif
