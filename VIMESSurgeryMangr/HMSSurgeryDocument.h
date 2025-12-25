#ifndef HMSSURGERYDOCUMENT_H
#define HMSSURGERYDOCUMENT_H

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
#include "HMSSurgeryMaterialDrugDialog.h"
#include "HMSSurgeryProfiles.h"
#include "HMSSurgeryAnesthesia.h"
typedef CMap<CWnd*, CWnd*, CString, CString> CUserMap;
class CHMSSurgeryDocument : public CGuiView
{
protected:
	long m_nReforderid_old;
	CString	m_szLocked;
	CUserMap m_mUsers;
    bool	m_bShowMores;
	void SetMapValue(CWnd* pWnd = NULL, CString szValue=_T(""));
	CString GetSelectedUser(CWnd* pExcept);
public:
	

	CHMSSurgeryMaterialDrugDialog m_wndInput;

	CGuiGroupBox	m_wndPatientProfile;
	CGuiGroupBox	m_wndSurgeryInformation;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;

	CGuiLabel		m_wndProvillLabel;
	CGuiTextCtrl	m_wndProvill;

	CGuiLabel		m_wndDistrictLabel;
	CGuiTextCtrl	m_wndDistrict;

	CGuiLabel		m_wndVillageLabel;
	CGuiTextCtrl	m_wndVillage;

	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndRankLabel;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndInsuranceCardLabel;
	CGuiTextCtrl	m_wndInsuranceCard;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateTimeCtrl	m_wndPerformDate;
	CGuiLabel		m_wndSurgeryTableLabel;
	CGuiComboBox	m_wndSurgeryTable;
	CGuiLabel		m_wndDiagnosisLabel;
	CGuiTextCtrl	m_wndDiagnosis;
	CGuiLabel		m_wndSurgeryNameLabel;
	CGuiComboBox	m_wndSurgeryName;
	CGuiLabel		m_wndSurgeryLabel;
	CGuiLabel		m_wndCommentLabel;
	CGuiTextCtrl	m_wndComment;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndHitechTypeLabel;
	CGuiComboBox	m_wndHitechType;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiRadioButton	m_wndMajorSurgery;
	CGuiRadioButton	m_wndMinorSurgery;
	CGuiLabel		m_wndAnesthesiaMethodLabel;
	CGuiComboBox	m_wndAnesthesiaMethod;
	CGuiLabel		m_wndAnesthesiaMethod2Label;
	CGuiComboBox	m_wndAnesthesiaMethod2;
	CGuiLabel		m_wndAnesthesiaResultLabel;
	CGuiComboBox	m_wndAnesthesiaResult;	
	CGuiLabel		m_wndAnaestheticMethodLabel;
	CGuiComboBox	m_wndAnaestheticMethod;
	CGuiLabel		m_wndSurgeonLabel;
	CGuiComboBox	m_wndSurgeon;
	CGuiLabel		m_wndAnesthetistLabel;
	CGuiComboBox	m_wndAnesthetist;
	CGuiLabel		m_wndAssistLabel;
	CGuiComboBox	m_wndAssist;
	CGuiLabel		m_wndAssist1Label;
	CGuiComboBox	m_wndAssist1;
	CGuiLabel		m_wndAssist2Label;
	CGuiComboBox	m_wndAssist2;
	CGuiLabel		m_wndAssist3Label;
	CGuiComboBox	m_wndAssist3;
	CGuiLabel		m_wndBeforeSurgeryLabel;
	CGuiTextCtrl	m_wndBeforeSurgery;
	CGuiLabel		m_wndAfterSurgeryLabel;
	CGuiTextCtrl	m_wndAfterSurgery;
	CGuiLabel		m_wndReferenceOperationLabel;
	CGuiComboBox	m_wndReferenceOperation;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndAddDrug;
	CGuiListCtrl	m_wndSurgeryList;
	CGuiListCtrl	m_wndDrugList;
	CGuiLabel		m_wndPayrateLabel;
	CGuiComboBox	m_wndPayrate;
	CGuiTextCtrl	m_wndEmergencyType;
	CString			m_szEmergencyType;
	CString			m_szReferenceOperationKey;


	CHMSSurgeryProfiles	m_wndProfiles;
	CHMSSurgeryAnesthesia	m_wndAnesthesiaList;


	CGuiButton m_wndShowMores;
	CGuiTabCtrl		m_wndTab;


	long	m_nDocumentNo;
	long	m_nRecordNo;
	CString m_szRecordNo;
	long	m_nPatientNo;
	bool	m_bThuoc;
	bool	m_bThuocdoc;
	long	m_nDrugOrderID;
	float	m_nQty;
	float	m_nMaxQty;

	CString	m_szPatientName;
	CString	m_szBirthDate;
	CString	m_szSexKey;

	CString	m_szProvill;
	CString	m_szDistrict;
	CString	m_szVillage;

	CString	m_szAddress;
	CString	m_szObjectKey;
	CString	m_szObjectTemp;
	CString	m_szRankKey;
	CString	m_szDepartmentKey;
	CString	m_szInsuranceCard;
	CString	m_szInsuranceCardTmp;
	CString m_szBirthDate1;
	long	m_nDiscount;
	int  m_nEmergency;
	CString	m_szOrderDate;
	CString	m_szPerformDate;
	CString	m_szSurgeryTableKey;
	CString	m_szDiagnosis;
	CString	m_szSurgeryNameKey;
	CString	m_szComment;
	CString	m_szCategoryKey;
	CString	m_szHitechTypeKey;
	CString	m_szTypeKey;
	int	m_nMajorSurgery;	
	int m_nListHeight;
	CString	m_szAnesthesiaMethodKey;
	CString	m_szAnesthesiaMethod2Key;
	CString	m_szAnesthesiaResultKey;
	CString	m_szAnaestheticMethodKey;	
	CString	m_szSurgeonKey;
	CString	m_szAnesthetistKey;
	CString	m_szAssistKey;
	CString	m_szAssist1Key;
	CString	m_szAssist2Key;
	CString	m_szAssist3Key;
	CString	m_szBeforeSurgery;
	CString	m_szAfterSurgery;
	CString m_szDoctor;
	
	CDbfMap	m_hms_patient_surgeryTbl;
	CDbfMap	m_hms_surgery_detailTbl;
	CDbfMap m_hms_operation_Tbl;
	long	m_nRefIndex;
	long    m_nIdx;

	long	m_nProductID;

	CString	m_szStatus;
	CString m_szPerformDept;

	CString m_szOID;
	bool m_bExpireFlag;

	CString	m_szAdmitDate;
	
	CString	m_szPayrateKey;


	//void			OnDiagnosisChange(); 
	//void			OnDiagnosisSetfocus(); 
	//void			OnDiagnosisKillfocus(); 
	int			OnDiagnosisCheckValue(); 

	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue();
	int			OnAddSmartPrescription();
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	void			OnSexAddNew();
	void				OnDrugListSearch();

	//void			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	//void			OnProvillSelendok(); 
	//void			OnProvillSetfocus(); 
	//void			OnProvillKillfocus(); 
	//long			OnProvillLoadData(); 
	//void			OnProvillAddNew(); 

	//void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	//void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	//long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew();

	//void			OnVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	//void			OnVillageSelendok(); 
	//void			OnVillageSetfocus(); 
	//void			OnVillageKillfocus(); 
	//long			OnVillageLoadData(); 
	//void			OnVillageAddNew();

	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	void			OnObjectAddNew(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	void			OnRankAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	//void			OnInsuranceCardChange(); 
	//void			OnInsuranceCardSetfocus(); 
	//void			OnInsuranceCardKillfocus(); 
	int			OnInsuranceCardCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	void			OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeryNameSelendok(); 
	//void			OnSurgeryNameSetfocus(); 
	//void			OnSurgeryNameKillfocus(); 
	long			OnSurgeryNameLoadData(); 
	void			OnSurgeryNameAddNew(); 
	//void			OnCommentChange(); 
	//void			OnCommentSetfocus(); 
	//void			OnCommentKillfocus(); 
	int			OnCommentCheckValue(); 

	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	void			OnCategoryAddNew(); 
	void			OnMajorSurgerySelect(); 
	void			OnMinorSurgerySelect(); 
	void			OnSurgeryTableSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeryTableSelendok(); 
	//void			OnSurgeryTableSetfocus(); 
	//void			OnSurgeryTableKillfocus(); 
	long			OnSurgeryTableLoadData(); 
	void			OnSurgeryTableAddNew(); 
	void			OnHitechTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHitechTypeSelendok(); 
	//void			OnHitechTypeSetfocus(); 
	//void			OnHitechTypeKillfocus(); 
	long			OnHitechTypeLoadData(); 
	void			OnHitechTypeAddNew(); 
	long			OnTypeLoadData();
	void			OnAnaestheticMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnaestheticMethodSelendok(); 
	//void			OnAnaestheticMethodSetfocus(); 
	//void			OnAnaestheticMethodKillfocus(); 
	long			OnAnaestheticMethodLoadData(); 
	void			OnAnaestheticMethodAddNew(); 
	void			OnAnesthesiaMethod2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthesiaMethod2Selendok(); 
	//void			OnAnesthesiaMethod2Setfocus(); 
	//void			OnAnesthesiaMethod2Killfocus(); 
	long			OnAnesthesiaMethod2LoadData(); 
	void			OnAnesthesiaMethod2AddNew(); 
	void			OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthesiaMethodSelendok(); 
	//void			OnAnesthesiaMethodSetfocus(); 
	//void			OnAnesthesiaMethodKillfocus(); 
	long			OnAnesthesiaMethodLoadData(); 
	void			OnAnesthesiaMethodAddNew(); 
	void			OnAnesthesiaResultSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthesiaResultSelendok(); 
	//void			OnAnesthesiaResultSetfocus(); 
	//void			OnAnesthesiaResultKillfocus(); 
	long			OnAnesthesiaResultLoadData(); 
	void			OnAnesthesiaResultAddNew(); 
	void			OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeonSelendok(); 
	//void			OnSurgeonSetfocus(); 
	//void			OnSurgeonKillfocus(); 
	long			OnSurgeonLoadData(); 
	void			OnSurgeonAddNew(); 
	//void			OnPerformDateChange(); 
	//void			OnPerformDateSetfocus(); 
	//void			OnPerformDateKillfocus(); 
	int			OnPerformDateCheckValue(); 
	void			OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthetistSelendok(); 
	//void			OnAnesthetistSetfocus(); 
	//void			OnAnesthetistKillfocus(); 
	long			OnAnesthetistLoadData(); 
	void			OnAnesthetistAddNew(); 
	void			OnAssistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssistSelendok(); 
	//void			OnAssistSetfocus(); 
	//void			OnAssistKillfocus(); 
	long			OnAssistLoadData(); 
	void			OnAssistAddNew(); 
	void			OnAssist1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssist1Selendok(); 
	//void			OnAssist1Setfocus(); 
	//void			OnAssist1Killfocus(); 
	long			OnAssist1LoadData(); 
	void			OnAssist1AddNew(); 
	void			OnAssist2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssist2Selendok(); 
	//void			OnAssist2Setfocus(); 
	//void			OnAssist2Killfocus(); 
	long			OnAssist2LoadData(); 
	void			OnAssist2AddNew(); 
	void			OnAssist3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssist3Selendok(); 
	//void			OnAssist3Setfocus(); 
	//void			OnAssist3Killfocus(); 
	long			OnAssist3LoadData(); 
	void			OnAssist3AddNew(); 

	//void			OnBeforeSurgeryChange(); 
	//void			OnBeforeSurgerySetfocus(); 
	//void			OnBeforeSurgeryKillfocus(); 
	int			OnBeforeSurgeryCheckValue(); 
	//void			OnAfterSurgeryChange(); 
	//void			OnAfterSurgerySetfocus(); 
	//void			OnAfterSurgeryKillfocus(); 
	int			OnAfterSurgeryCheckValue(); 
	int			OnQtyCheckValue();
	void		PrintSurgeryPayment();
	void		PrintSurgeryPayment_OLD();
	void		OnPrintPrescriptionDrug(int nSotckID);
	void		OnPrintPrescriptionDrugEX(int nSotckID);
	void		OnPrintPrescriptionSingle(int nStockID);
	void		OnPrintGroup(CString szGroup, int nStockID, bool bMultiGroup=false, long nOrderID=0, CString szOrderDate=_T(""));
	void		OnPrintGroupEX(CString szGroup, int nStockID, bool bMultiGroup=false, long nOrderID=0, CString szOrderDate=_T(""));
	void		PrintOperationHitechMaterial(long nOperationIdx, long nOrderID);
	int			OnPrintCostSurgery();
	void		OnPrintOperationHitechMaterial();
	int			OnSurgeryCreateFee();
	long		OnReferenceOperationLoadData();
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnAddDrugSelect(); 
	long			OnSurgeryListLoadData(); 
	void			OnSurgeryListSelectChange(int nOldItem, int nNewItem); 
	void			OnSurgeryListDblClick(); 
	int			OnSurgeryListDeleteItem(); 
	int			OnSurgeryListConfirm();
	int			OnSurgeryListCancelConfirm();
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	void		OnDrugListPrintPrescription();
	void		OnDrugListPrintPrescriptionEX();
	void		OnAcceptSelect();
	int			OnDrugListConfirmItem();
	int			OnDrugListConfirmItemV2();
	void			OnPayrateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayrateSelendok(); 
	//void			OnPayrateSetfocus(); 
	//void			OnPayrateKillfocus(); 
	long			OnPayrateLoadData(); 
	//void			OnPayrateAddNew(); 
	void			OnTabSelectChange(int nOldItemSel, int nNewItemSel);

	void ShowMores();
    void RecalcLayout();

	CHMSSurgeryDocument();
	~CHMSSurgeryDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryDocument(); 
	int OnEditHMSSurgeryDocument(); 
	int OnDeleteHMSSurgeryDocument(); 
	int OnSaveHMSSurgeryDocument(); 
	int OnCancelHMSSurgeryDocument(); 
	int OnHMSSurgeryDocumentListLoadData(); 
	void LoadSurgeryData(long nIdx);
	void ShowInput(bool bShow);
	void CloseInput();
	void SetDrugFocus(CString szProductID);

	long OnLoadOutPatientDrug();
	long OnLoadInPatientDrug();
	CString GetEmergencyType(int nType);

	BOOL virtual PreTranslateMessage(MSG* pMsg);

	bool CheckInvalidate();

	bool CheckCardExpire();
	void	OnViewParaclinicalInformation();
	void	OnOpenOperationBoard();
	void	OnGenerateFee();
	void CreateBloodOrder();
	CString GetCategory(CString szId);
	void SetModeEx();
	void	OnResizeLayout();
    void OnViewEMR();
    int OnRollBackSignOrder();
	/*DECLARE_MESSAGE_MAP()
	afx_msg UINT OnNcHitTest(CPoint point);*/
	DECLARE_MESSAGE_MAP()
	afx_msg void OnTimer(UINT nIDEvent);
	
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
