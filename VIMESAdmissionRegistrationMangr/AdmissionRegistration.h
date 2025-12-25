#ifndef ADMISSIONREGISTRATION_H
#define ADMISSIONREGISTRATION_H

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
#define	HOSPITAL_108 1;
class CAdmissionRegistration : public CGuiView
{
protected:
	CString	m_szOutPatient;//BN ngoai tru hay ko(Y/N)
	CString	m_szTreatment;
	BOOL	m_bIsAdmitted;
	CString m_szDept;
	long	m_nOldNumInward;
	CString m_szTab;
	CString m_szSkip;
	CString m_szSkipName2;
	bool	m_bRegisted;
	CString m_szNumInward;
public:
	CGuiLabel		m_wndDocNoLabel;
	CGuiLabel		m_wndFromLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndNumInwardLabel;
	CGuiTextCtrl	m_wndNumInward;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndInwardDateLabel;
	CGuiDateTimeCtrl	m_wndInwardDate;
	CGuiLabel		m_wndInwardTimeLabel;
	CGuiNumberCtrl	m_wndInwardTime;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndTreatmentDeptLabel;
	CGuiTextCtrl	m_wndTreatmentDept;
	CGuiLabel		m_wndExamDateLabel;
	CGuiDateTimeCtrl	m_wndExamDate;
	CGuiLabel		m_wndRoomIDLabel;
	CGuiNumberCtrl	m_wndRoomID;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiButton		m_wndSearch;
	CGuiCheckBox	m_wndAll;
	CGuiCheckBox	m_wndWaiting;
	CGuiCheckBox	m_wndOutpatient;
	CGuiCheckBox	m_wndCreated;
	CGuiCheckBox	m_wndInward;
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
	CGuiLabel		m_wndRelPhoneLabel;
	CGuiTextCtrl	m_wndRelPhone;
	CGuiLabel		m_wndRelAddressLabel;
	CGuiTextCtrl	m_wndRelAddress;
	CGuiLabel		m_wndTranferHospitalLabel;
	CGuiTextCtrl	m_wndTransferHospital;
	CGuiLabel		m_wndTransferDiagnosticLabel;
	CGuiTextCtrl	m_wndTransferDiagnostic;
	CGuiLabel		m_wndFoodModeLabel;
	CGuiTextCtrl	m_wndFoodMode;
	CGuiLabel		m_wndICDDiagnosticLabel;
	CGuiTextCtrl	m_wndICDDiagnostic;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndObjLabel;
	CGuiTextCtrl	m_wndObj;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndLogList;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintExmSheet;
	CGuiButton		m_wndPrintFiles;
	CGuiButton		m_wndPrintFoodSheet;
	CGuiLabel		m_wndLunchLabel;
	CGuiComboBox	m_wndLunch;
	CGuiLabel		m_wndDinnerLabel;
	CGuiComboBox	m_wndDinner;
	CGuiLabel		m_wndEatingDateLabel;
	CGuiDateCtrl	m_wndEatingDate;
	CGuiCheckBox	m_wndCancerRec;
	CGuiNumberCtrl	m_wndTimes;
	CGuiButton		m_wndInTem;

	CString	m_szFromDate;
	CString	m_szToDate;

	CString	m_szFromTime;
	CString	m_szToTime;
	
	long	m_nDocumentNo;
	long	m_nPatientNo;
	long	m_nNumInward;
	BOOL	m_bAll;
	BOOL	m_bWaiting;
	BOOL	m_bOutpatient;
	BOOL	m_bInward;
	BOOL	m_bCreated;
	CString	m_szInwardDate;
	long	m_nInwardTime;
	CString	m_szRecordNo;
    CString	m_szName;
	CString	m_szInDeptID;
	CString	m_szTreatmentDept;
	CString	m_szExamDate;
	CString	m_szLunchKey;
	CString	m_szDinnerKey;
	CString	m_szDoctor;
	CString m_szUsage;
	CString	m_szInwardC13Date;

	long	m_nOID;
	long	m_nRoomID;	
	int		m_nBedID;
	int		m_nQty;
	int		m_nQty2;
	int		m_nRefIndex;
	int		m_nType;
	int		m_nTimes;
	int		m_nadmitC13;
	CString	m_szDeptKey;
	CString m_szReportName;
	CString	m_szPatientName;
	CString	m_szBirthDate;
	CString	m_szSexKey;
	CString	m_szSex;
	CString	m_szEthnicKey;
	CString	m_szOccupationKey;
	CString	m_szProvinceKey;
	CString	m_szDistrictKey;
	CString	m_szVillageKey;
	CString	m_szDetailAddress;
	CString	m_szWorkplace;
	CString	m_szRankKey;
	CString	m_szPositionKey;
	CString	m_szPosition;
	CString	m_szRelative;
	CString	m_szRelationKey;
	CString	m_szRelation;
	CString	m_szRelPhone;
	CString	m_szRelAddress;
	CString	m_szTransferHospital;
	CString	m_szTransferDiagnostic;
	CString	m_szFoodMode;
	CString	m_szICD;
	CString	m_szICDDiagnostic;
	CString	m_szConclusion;
	CString m_szObjectKey;
	CString	m_szObj;
	CString m_szCardNo;
	CString m_szObjectType;
	CString	m_szSuggestion;

	CString	m_szEatingDate;

    CDbfMap	m_hms_xdocTbl;
	CDbfMap	m_hms_patientTbl;
	CDbfMap	m_hms_docTbl;
	CDbfMap	m_hms_clinical_recordTbl;
	CDbfMap	m_hms_treatment_recordTbl;

	CDbfMap	m_hms_feefodorderTbl;
	CDbfMap	m_hms_feefodorderlineTbl;
	
	CString	m_szHealthService;
	CString	m_szHospitalName;
	//bool	m_bIsSave;
	bool	m_bIsInward;//BN lam BA hay chua(Y/N)
	int		m_nPolicy;
	bool	m_bPrint;//In hay ko (Ko in khi an Ctrl + S)
	bool	m_bIsRegister;//BN co BA NGT hay ko(Y/N)

	BOOL	m_bCancer;

	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	void		OnAllSelect();
	void		OnWaitingSelect();
	void		OnOutpatientSelect();
	void		OnInwardSelect();
	void		OnCreatedSelect();
	int			OnDocNoCheckValue(); 
	//void			OnNumInwardChange(); 
	//void			OnNumInwardSetfocus(); 
	//void			OnNumInwardKillfocus(); 
	int			OnNumInwardCheckValue(); 
	//void			OnInwardDateChange(); 
	//void			OnInwardDateSetfocus(); 
	//void			OnInwardDateKillfocus(); 
	int			OnInwardDateCheckValue(); 
	//void			OnInwardTimeChange(); 
	//void			OnInwardTimeSetfocus(); 
	//void			OnInwardTimeKillfocus(); 
	int			OnInwardTimeCheckValue(); 
	void			OnSearchSelect(); 
	void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnTreatmentDeptChange(); 
	//void			OnTreatmentDeptSetfocus(); 
	//void			OnTreatmentDeptKillfocus(); 
	int			OnTreatmentDeptCheckValue(); 
	//void			OnExamDateChange(); 
	//void			OnExamDateSetfocus(); 
	//void			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	//void			OnRoomIDChange(); 
	//void			OnRoomIDSetfocus(); 
	//void			OnRoomIDKillfocus(); 
	int			OnRoomIDCheckValue(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	//void			OnDeptAddNew(); 

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
	//void			OnRelPhoneChange(); 
	//void			OnRelPhoneSetfocus(); 
	//void			OnRelPhoneKillfocus(); 
	int			OnRelPhoneCheckValue(); 
	//void			OnRelAddressChange(); 
	//void			OnRelAddressSetfocus(); 
	//void			OnRelAddressKillfocus(); 
	int			OnRelAddressCheckValue(); 
	//void			OnTransferHospitalChange(); 
	//void			OnTransferHospitalSetfocus(); 
	//void			OnTransferHospitalKillfocus(); 
	int			OnTransferHospitalCheckValue(); 
	//void			OnTransferDiagnosticChange(); 
	//void			OnTransferDiagnosticSetfocus(); 
	//void			OnTransferDiagnosticKillfocus(); 
	int			OnTransferDiagnosticCheckValue(); 
	//void			OnFoodModeChange(); 
	//void			OnFoodModeSetfocus(); 
	//void			OnFoodModeKillfocus(); 
	int			OnFoodModeCheckValue(); 
	//void			OnICDDiagnosticChange(); 
	//void			OnICDDiagnosticSetfocus(); 
	//void			OnICDDiagnosticKillfocus(); 
	int			OnICDDiagnosticCheckValue(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	long		OnObjectLoadData();
	void		OnObjectSelectChange();
	void		OnObjectSelenok();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int				OnListAlterObj();
	int				OnListCancelRecord();
	int			OnListDeleteItem(); 
	int			OnAddArmlet();
	void OnResizeLayout();
	long			OnLogListLoadData();
	void			OnUpdateSelect(); 
	void			OnUpdateAdmissionRegistration();
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintExmSheetSelect(); 
	void			OnPrintFilesSelect(); 
	void			OnPrintFoodSheetSelect(); 
	int				OnLunchCheckValue();			
	void			OnLunchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLunchSelendok(); 
	//void			OnLunchSetfocus(); 
	//void			OnLunchKillfocus(); 
	long			OnLunchLoadData(); 
	//void			OnLunchAddNew(); 
	void			OnDinnerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDinnerSelendok(); 
	//void			OnDinnerSetfocus(); 
	//void			OnDinnerKillfocus(); 
	long			OnDinnerLoadData(); 
	//void			OnDinnerAddNew(); 
	//void			OnEatingDateChange(); 
	//void			OnEatingDateSetfocus(); 
	//void			OnEatingDateKillfocus(); 
	int			OnEatingDateCheckValue(); 

	void			OnCreateOrderFood();
	void			OnInTemSelect();
	CAdmissionRegistration();
	~CAdmissionRegistration();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdmissionRegistration(); 
	int OnEditAdmissionRegistration(); 
	int OnDeleteAdmissionRegistration(); 
	int OnSaveAdmissionRegistration(); 
	int OnSaveAdmissionRegistration_v2(); 
	int OnCancelAdmissionRegistration(); 
	int OnAdmissionRegistrationListLoadData(); 
	void LoadData(long nDocNo);
	int	GetPatientObject();
	void PrintMedicalFile(bool bPreview);
	void PrintFoodSheet(bool bPreview);
	void PrintExamSheet(bool bPreview);
	void InTemSelect(bool bPreview);
	void InTem_V2();
	BOOL IsAllowCreate();//KT lai huong dieu tri truoc khi tao BA
	BOOL PreTranslateMessage(MSG * pMsg);
	int	 CheckBeforeUpdate();
	BOOL	IsRegister(long nDocumentNo, CString& szRecordNo, long& nNumInward);
	CString PrepareRecordNo(CString szInc=_T("N"));
	CString PreparePrefix();
	long	PrepareNumber(CString szPrefix);
};
#endif