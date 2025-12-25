#ifndef HMSPATIENTDOCUMENT_H
#define HMSPATIENTDOCUMENT_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Vietnamese Medical Software Join Stock Company. 2006-2008.			
//	All rights reserved. 
//	This program is protected by Viet nam and interEthnical treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@VIMES.com.vn or hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@VIMES.com.vn hoac hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
#include "HMSBedInformation.h"
#include "HMSParaclinicalOrder.h"
//#include "HMSOperationOrder.h"
#include "HMSFeeDocument.h"
#include "HMSDrugInformation.h"
#include "HMSTreatmentExamine.h"
#include "HMSTreatmentExamineEx.h"
#include "HMSFeeDocumentInpatient.h"
#include "HMSTreatPackageView.h"
#include "IVFTheoDoiDieuTriView.h"
#include "IVFTheoDoiDieuTriView_V2.h"
#include "IVFOperationOrder.h"
#include "HMSOverview.h"
///////////////////////////////////////////
//HO SO BENH NHAN
///////////////////////////////////////////
class CHMSPatientDocument : public CGuiView{
public:
	
	CGuiTabCtrl	m_wndTab;
	//Tab kham hang ngay
	CHMSTreatmentExamineEx		m_wndExamine;
	//Tab kham benh
	CHMSBedInformation			m_wndBed;
	//Tab can lam sang
	CHMSParaclinicalOrder	m_wndParaclinicalOrder;
	//Tab phau thuat, thu thuat
	CIVFOperationOrder		m_wndOperationOrder;
	//Tab don thuoc
	CHMSDrugInformation		m_wndDrug;
	//Tab vien phi
	CHMSFeeDocumentInpatient m_wndFeeDocument;

	CHMSTreatPackageView	m_wndTreatPackageView;
	//CHMSFeeDocumentInpatient			m_wndFeeDocument2;
	
	//Theo dõi điều trị
	CIVFTheoDoiDieuTriView	m_wndTheodoidieutri;
	CIVFTheoDoiDieuTriView_V2	m_wndTheodoidieutri_V2;
    CHMSOverview m_wndOverview;

	CString	m_szDocStatus;
	CString	m_szDept;
	CString m_szBirthDate;
	CString	m_szUpdatedDate;
	bool	m_bCombinedTreatment;
	bool	m_bIsSurgeryExamination;
	CString	m_szDepartment_ID;
	CString m_szCancer;
	int     m_nHtrIdx;
	int     m_nCancerTime;

public:
	

	CGuiGroupBox	m_wndProfiles;
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiGroupBox	m_wndDepartments;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
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
	CGuiLabel		m_wndDetailAddrlLabel;
	CGuiTextCtrl	m_wndDetailAddress;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiTextCtrl	m_wndCardNo;
	CGuiButton		m_wndCardInfoBtn;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndDischargeDateLabel;
	CGuiDateCtrl	m_wndDischargeDate;
	CGuiLabel		m_wndMainDiseaseDiagnosticLabel;
	CGuiTextCtrl	m_wndMainDiseaseDiagnostic;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndSuggestionLabel;
	CGuiTextCtrl	m_wndSuggestion;
	CGuiButton		m_wndSuggestionBtn;
	CGuiTabCtrl	    m_wndTreatmentTab;
	CGuiListCtrl	m_wndDeptList;
	CGuiButton		m_wndAdditionInfo;
	CGuiButton		m_wndAntibioticUse;
	CGuiButton		m_wndPrehistory;
	//Benh an
	CGuiButton		m_wndClinicalRecord;
	//Benh trinh dieu tri
	CGuiButton		m_wndTreatmentTracking;
	//Phieu cham soc
	CGuiButton		m_wndPatientCare;
	//Mau bieu chuyen mon
	CGuiButton		m_wndElectronicRecord;
	//Goi dich vu
	CGuiButton		m_wndExtButton;

	long	m_nPatientNo;
	long	m_nDocumentNo;
	int		m_nIndex;
	int		m_nCardIdx;
	CString	m_szEthnic;

	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szOccupation;
	CString	m_szAddress;
	CString	m_szDetailAddress;
	CString	m_szWorkplace;
	CString	m_szObject;
	CString	m_szCardNo;
	CString	m_szDoctor;
	CString	m_szStatus;
	CString	m_szAdmitDate;
	CString	m_szDischargeDate;
	CString	m_szMainDiseaseDiagnostic;
	CString	m_szRelationDisease;
	CString	m_szSuggestion;
	CString	m_szSuggestionKey;
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
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnOccupationChange(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	int			OnOccupationCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnDetailAddressChange(); 
	//void			OnDetailAddressSetfocus(); 
	//void			OnDetailAddressKillfocus(); 
	int			OnDetailAddressCheckValue(); 
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
	//void			OnDoctorChange(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	//void			OnDischargeDateChange(); 
	//void			OnDischargeDateSetfocus(); 
	//void			OnDischargeDateKillfocus(); 
	int			OnDischargeDateCheckValue(); 
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

	void			OnAntibioticUseSelect(); 
	void			OnAdditionInfoSelect(); 

	void			OnTreatmentTabSelectChange(int nOld, int nNew); 
	long			OnDeptListLoadData(); 
	void			OnDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnDeptListDblClick(); 
	//void			OnEthnicChange(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	int			OnEthnicCheckValue(); 
	int			OnChangeModePatient();
	int			OnDeptListDeleteItem(); 
	void		OnPrehistorySelect();
	//Benh trinh dieu tri
	void		OnTreatmentTrackingSelect();
	//Phieu cham soc
	void		OnPatientCareSelect();
	//Mau bieu chuyen mon
	void		OnClinicalRecordSelect();
	//Benh an
	void		OnElectronicRecordSelect();
	//Theo doi dieu tri
	void		OnTreatInfoSelect();
	void			OnExtraInfoSelect(); 
	void OnViewEMR();
	CHMSPatientDocument();
	~CHMSPatientDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientDocument(); 
	int OnEditHMSPatientDocument(); 
	int OnDeleteHMSPatientDocument(); 
	int OnSaveHMSPatientDocument(); 
	int OnCancelHMSPatientDocument(); 
	int OnAddNewReception();
	int OnHMSPatientDocumentListLoadData(); 
	int	OnRollbackHMSPatientDocument();
	int	OnChangeTypePatientDocument();
	int	OnFoodtravelsupport();
	void LoadData(long nPatientNo, long nDocNo, int nIndex);
	int OnCreateTreatmentDocument();
	int OnSendPatientTreatment();
	bool OnCheckTerminateDocument(long nDocument);
	void	CreateDischargeSheet();
	void	OnRecordSummaryDischarge();
	void	OnViewSecurePatientProfile();
	void	CreateOperationTemplates();
	void	OnAddDentalTreatment();
	int OnPhieuDieuTriKhoaRang();
	int OnGiayChungNhanNghiViec();
	int OnAppointmentReTreatment();
	void OnCreateTreatmentPlan();
	void OnCreateTreatmentAppointment();
	int		OnBraceletInfoSelect();
	int		OnConsultationInfoSelect();
	int		OnPrintForms();
	int		OnCreateDeathRecord();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);

	void OnResizeLayout();
    

	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
