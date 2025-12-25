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
	long	m_nPatientNo;
	long	m_nDocumentNo;
	int		m_nIndex;
	CString	m_szPreRecordNo;
	CString m_szDocStatus;
	CString	m_szStatus;
	
	
	CString	m_szWard;
	CString m_szTiles;
	int		m_nObject;
	bool	m_bHasAdmissionRegistration;
	bool	m_bRegisted;
	CString m_szCurStatus;
	CString	m_szObjectType;

	CDbfMap	m_hms_patientTbl;
	CDbfMap	m_hms_clinicalTbl;
	CDbfMap	m_hms_treatment_recordTbl;

	CGuiGroupBox	m_wndPatientProfiles;
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
	CGuiLabel		m_wndContactAddressLabel;
	CGuiTextCtrl	m_wndContactAddress;
	CGuiLabel		m_wndContactPhoneLabel;
	CGuiTextCtrl	m_wndContactPhone;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndTimes;
	CGuiNumberCtrl	m_wndTreatTime;
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
	CGuiLabel		m_wndIndeptRecordLabel;
	CGuiTextCtrl	m_wndIndeptRecord;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel	m_wndIVFTypeLabel;
	CGuiComboBox	m_wndIVFType;
	//CGuiCheckBox	m_wndCancer;
	//sCGuiNumberCtrl	m_wndCancerTime;
	CGuiLabel		m_wndAdmissionDiseaseLabel;
	CGuiComboBox	m_wndAdmissionDisease;
	CGuiLabel		m_wndRegimenLabel;
	CGuiTextCtrl	m_wndRegimen;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndIssueNumberLabel;
	CGuiNumberCtrl	m_wndIssueNumber;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndFirstDayLastPeriodLabel;
	CGuiDateCtrl	m_wndFirstDayLastPeriod;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
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
	CString	m_szContactAddress;
	CString	m_szContactPhone;
	CString	m_szRecordNo;
	long	m_nNumInward;
	long	m_nTreatTime;
	CString	m_szAdmitDate;
	CString	m_szAdmitedDirectionKey;
	CString	m_szTransferPlaceKey;
	CString	m_szTransferHospital;
	CString	m_szTransferDiagnostic;
	CString	m_szExamineDisease;
	CString	m_szInDate;
	CString m_szIndeptRecord;
	CString	m_szDoctorKey;
	CString m_szIVFTypeKey;
//	BOOL	m_bCancer;
//	int		m_nCancerTime;
	CString	m_szAdmissionDiseaseKey;
	CString	m_szRegimen;
	CString	m_szMainDisease;
	CString	m_szRelationDisease;
	long	m_nIssueNumber;
	CString	m_szNote;
	CString	m_szFirstDayLastPeriod;
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
	//void			OnContactAddressChange(); 
	//void			OnContactAddressSetfocus(); 
	//void			OnContactAddressKillfocus(); 
	int			OnContactAddressCheckValue(); 
	//void			OnContactPhoneChange(); 
	//void			OnContactPhoneSetfocus(); 
	//void			OnContactPhoneKillfocus(); 
	int			OnContactPhoneCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnTreatTimeChange(); 
	//void			OnTreatTimeSetfocus(); 
	//void			OnTreatTimeKillfocus(); 
	int			OnTreatTimeCheckValue(); 
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
	long		OnDoctorLoadData();
	void			OnIUISelect(); 
	void			OnSCSISelect(); 
	void			OnCancerSelect(); 
	int			OnCancerTimeCheckValue(); 
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
	void			OnRelationDiseaseSelect();
	//void			OnIssueNumberChange(); 
	//void			OnIssueNumberSetfocus(); 
	//void			OnIssueNumberKillfocus(); 
	int			OnIssueNumberCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	long		OnIVFTypeLoadData();
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
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


	bool		CheckRollbackDocument(int m_nDocno);

	CString PrepareRecordNo(CString szInc=_T("N"));
	CString PreparePrefix();
	long	PrepareNumber(CString szPrefix);

	BOOL IsRegister(long nDocumentNo, CString& szRecordNo, long& nNumInward);

};
#endif
