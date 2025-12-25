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
#include "HMSDischarge.h"
#include "HMSExamine.h"
#include "HMSExamineV2.h"
#include "HMSParaclinicalOrder.h"
#include "HMSOperationOrder.h"
#include "HMSPrescription.h"
#include "HMSFeeDocument.h"
#include "HMSGeneralRankExamine.h"
#include "TMBenhAnDialog.h"
#include "HMSDrugInformation.h"
#include "HMSSignatureView.h"
#include "EMRPatientProfile.h"
#include "HMSOverview.h"


class CHMSPatientDocument : public CGuiView
{
public:
	CHMSOverview			m_wndOverview;
	//Tab kham benh
	CHMSExamine				m_wndExamine;
	//Tab kham benh C13
	CHMSExamineV2				m_wndExamineV2;
	//Tab can lam sang
	CHMSParaclinicalOrder	m_wndParaclinicalOrder;
	//Tab phau thuat, thu thuat
	CHMSOperationOrder		m_wndOperationOrder;
	//Tab don thuoc
	CHMSPrescription		m_wndPrescription;
	//Tab vien phi
	CHMSFeeDocument			m_wndFeeDocument;	
	CHMSDrugInformation		m_wndDrugInformation;
	CHMSDischarge			m_wndDischarge;
	
	CHMSSignatureView		m_wndSignatureView;

	//CEMRPatientProfile		m_wndPatientEMR;



	CString	m_szDocStatus;
	CString	m_szAdmissionDept;
	CString m_szBirthDate;
	CString	m_szAccident;
public:
	CGuiLabel		m_wndOutpatientDesc;
	CGuiLabel		m_wndSoluongkhamDesc;
	CGuiButton		m_wndPrintSummarize;
	CGuiButton		m_wndPrintPrescrition;
	CGuiButton		m_wndCancelReceipt;	
	CGuiButton		m_wndParaclinical;

	CGuiGroupBox	m_wndProfiles;
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiTabCtrl		m_wndExaminationReceipts;
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
	CGuiLabel		m_wndOccupationLabel;
	CGuiTextCtrl	m_wndOccupation;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDetailAddrlLabel;
	CGuiTextCtrl	m_wndDetailAddress;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndObjectLabel;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiTextCtrl	m_wndObject;
	CGuiTextCtrl	m_wndCardNo;
	CGuiButton		m_wndCardInfoBtn;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndExamDateLabel;
	CGuiDateCtrl	m_wndExamDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateCtrl	m_wndFinishedDate;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndICDLabel;
	CGuiComboBox	m_wndICD;
	CGuiLabel		m_wndSuggestionLabel;
	CGuiComboBox	m_wndSuggestion;
	CGuiLabel		m_wndInDeptLabel;
	CGuiComboBox	m_wndInDept;
	CGuiButton		m_wndBedUsage;
	CGuiLabel		m_wndHospitalLabel;
	CGuiComboBox	m_wndHospital;
	CGuiListCtrl	m_wndExamList;
	CGuiListCtrl	m_wndHistoryList;
	CGuiListCtrl	m_wndDiseaseHistory;
	CGuiButton		m_wndAntibioticUse;
	CGuiButton		m_wndHenkhamlai;
	CGuiLabel		m_wndLoaiKCBLabel;
	CGuiComboBox	m_wndLoaiKCB;

	
	CGuiTabCtrl	m_wndExaminationTab;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	int		m_nRoomID;
	int		m_nReceptIdx;	
	int		m_nNumberPrescrition;
	int		m_nNumberSummarize;
	CString	m_szPatientName;
	CString m_szEndDate;
	
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szOccupation;
	CString	m_szAddress;
	CString	m_szDetailAddress;
	CString	m_szWorkplace;
	CString	m_szPhone;
	CString	m_szObject;
	CString	m_szCardNo;
	CString	m_szDoctor;
	CString m_szCreatedBy;
	CString	m_szStatus;	
	CString	m_szExamDate;
	CString	m_szFinishedDate;
	CString	m_szICDKey;
	CString	m_szConclusion;
	CString	m_szDiagnostic;
	CString	m_szSuggestion;
	CString	m_szSuggestionKey;
	CString	m_szInDeptKey;
	CString	m_szHospitalKey;
	CString	m_szRelationDisease;
	CString	m_szStdPatientName;
	CString	m_szDischargeDate;
	CString m_szLoaiKCBKey;

	CDbfMap	m_hms_docTbl;
	CDbfMap	m_hms_clinical_recordTbl;
	CDbfMap	m_hms_treatment_recordTbl;

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
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnExamDateChange(); 
	//void			OnExamDateSetfocus(); 
	//void			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	void			OnICDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICDSelendok(); 
	//void			OnICDSetfocus(); 
	//void			OnICDKillfocus(); 
	long			OnICDLoadData(); 
	void			OnICDAddNew(); 
	void			OnConclusionSelect();
	//void			OnConclusionChange(); 
	void			OnConclusionSetfocus();
	void			OnConclusionLabelSelect();
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSuggestionSelendok(); 
	//void			OnSuggestionSetfocus(); 
	//void			OnSuggestionKillfocus(); 
	long			OnSuggestionLoadData(); 
	void			OnSuggestionAddNew(); 
	void			OnInDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInDeptSelendok(); 
	//void			OnInDeptSetfocus(); 
	//void			OnInDeptKillfocus(); 
	long			OnInDeptLoadData(); 
	void			OnInDeptAddNew(); 
	void			OnBedUsageSelect();
	void			OnHospitalSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHospitalSelendok(); 
	//void			OnHospitalSetfocus(); 
	//void			OnHospitalKillfocus(); 
	long			OnHospitalLoadData(); 
	void			OnHospitalAddNew(); 
	long			OnExamListLoadData(); 
	void			OnExamListSelectChange(int nOldItem, int nNewItem); 
	void			OnExamListDblClick();
	void			OnSendOrderStatus();
	int			OnExamListDeleteItem(); 
	int			OnExamListCreateExaminationReceipt(); 
	int			OnExamListMoveExaminationReceipt(); 

	long			OnHistoryListLoadData();
	void			OnHistoryListSelectChange(int nOldItem, int nNewItem);
	void			OnHistoryListDblClick();
	int			OnHistoryListDeleteItem();

	long			OnDiseaseHistoryLoadData();
	void			OnDiseaseHistorySelectChange(int nOldItem, int nNewItem);
	void			OnDiseaseHistoryDblClick();
	int			OnDiseaseHistoryDeleteItem();


	void		OnPrintAdmissionSheet();
	void		PrintAdmissionSheet(bool bPreview);
	void OnSurgeryReq();
	void	OnAntibioticUseSelect();
	void	OnHenKhamLaiSelect();
	void	OnViewEMR();
	//Cap nhat che do dieu tri trong ngay khu TYC
	void OnUpdateTreatMode();
	int OnTerminateDocumentInformation();
    void OnCreateHospitalTransfer();

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
	int OnRollbackHMSPatientDocument();
	int OnEnterAccidentHMSPatientDocument();
	int OnPrintSummarizeExaminationSheet();
	int OnAddNewReception();
	int OnHMSPatientDocumentListLoadData(); 
	void LoadData(long nPatientNo, long nDocNo, int nRoomID, int nReceptIdx);
	int OnExaminationTabSelectChange(int nOld, int nNew);
	void OnTerminateDocument();
	void OnPaymentAndPrintPrescription();
	void OnCancelReceipt();
	void OnParaclinical();
	bool OnCheckTerminateDocument(long nDocument);
	void OnConclusionLoad(long nDocumentNo);
	int OnLoadEmergencyReceipt(long nDocNo, long nReceptIdx);
	int OnPrintEmergencyReceipt(bool bPreview=false);
	int OnPrintLaserReceiptList();
	int	OnSecurityPatientProfile();
	void	OnViewSecurePatientProfile();
	void OnAppointmentReceipt();
	void OnMauBenhAn();
	void OnGiayChungNhanNghiViec();
	int OnThudungdtngt();
	int OnPhieuDieuTriKhoaRang();
	void OnPrintRehabilitationCertify();
	void OnClinicalRecordInput();
	bool CheckClinicalRecordInput();
	void OnCreateSpecificForm();
	void OnPatientCareEMSelect();
	void OnExamTracking();
	void CreateOperationTemplates();
	void OnSearchDocumentInformation();
	
	void			OnLoaiKCBSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLoaiKCBSelendok();
	void			OnLoaiKCBKillfocus(); 
	long			OnLoaiKCBLoadData(); 
	void			OnLoaiKCBAddNew();

	void OnExaminationReceiptsSelectChange(int nOldItemSel, int nNewItemSel); 

	
	DECLARE_MESSAGE_MAP()
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual BOOL PreTranslateMessage(MSG *pMsg);
	
	void OnResizeLayout();	
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif