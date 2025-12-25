#ifndef HMSPARACLINICALSETUPDIALOG_NEW_H
#define HMSPARACLINICALSETUPDIALOG_NEW_H

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
class CHMSParaclinicalSetupDialog_new : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiLabel		m_wndNewPriceLabel;
	CGuiNumberCtrl	m_wndNewPrice;
	CGuiCheckBox	m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndFeeCategoryLabel;
	CGuiGroupBox	m_wndInformationOfTestFee;
	CGuiComboBox	m_wndFeeCategory;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndPerformPlaceLabel;
	CGuiComboBox	m_wndPerformPlace;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiCheckBox	m_wndInsurancePayment;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiCheckBox	m_wndPolicyPayment;
	CGuiCheckBox	m_wndRequestPriceLabel;
	CGuiNumberCtrl	m_wndRequestPrice;
	CGuiLabel		m_wndInsDiffPaymentLabel;
	CGuiNumberCtrl	m_wndInsDiffPayment;
	CGuiCheckBox	m_wndDifferencePayment;
	CGuiLabel		m_wndPolDiffPaymentLabel;
	CGuiNumberCtrl	m_wndPolDiffPayment;
	CGuiLabel		m_wndSalaryLabel;
	CGuiNumberCtrl	m_wndSalary;
	CGuiLabel		m_wndObjectAppliedLabel;
	CGuiComboBox	m_wndObjectApplied;
	CGuiCheckBox	m_wndReturnDeptLabel;
	CGuiNumberCtrl	m_wndReturnDept;
	CGuiLabel		m_wndMaleIndexLabel;
	CGuiTextCtrl	m_wndMaleIndex;
	CGuiLabel		m_wndFemaleIndexLabel;
	CGuiTextCtrl	m_wndFemaleIndex;
	CGuiCheckBox	m_wndHitech;
	CGuiCheckBox	m_wndHitechMachine;
	CGuiCheckBox	m_wndPlasticSurgery;
	CGuiCheckBox	m_wndObstetric;
	CGuiCheckBox	m_wndPrintBold;
	CGuiLabel		m_wndMaxTimeLabel;
	CGuiNumberCtrl	m_wndMaxTime;
	CGuiLabel		m_wndDurationLabel;
	CGuiNumberCtrl	m_wndDuration;
	CGuiLabel		m_wndGenderLabel;
	CGuiComboBox	m_wndGender;
	CGuiLabel		m_wndParaPlaceLabel;
	CGuiComboBox	m_wndParaPlace;
	CGuiLabel		m_wndAdviceLabel;
	CGuiComboBox	m_wndAdvice;
	CGuiLabel		m_wndApointmentLabel;
	CGuiComboBox	m_wndApointment;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szApplyDate;
	long	m_nNewPrice;
	BOOL	m_bGroupLabel;
	CString	m_szGroupKey;
	CString	m_szFeeCategoryKey;
	CString	m_szDepartmentKey;
	CString	m_szPerformPlaceKey;
	CString	m_szID;
	CString	m_szName;
	CString	m_szUnit;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	BOOL	m_bInsurancePayment;
	long	m_nPolicyPrice;
	BOOL	m_bPolicyPayment;
	BOOL	m_bRequestPriceLabel;
	long	m_nRequestPrice;
	long	m_nInsDiffPayment;
	BOOL	m_bDifferencePayment;
	long	m_nPolDiffPayment;
	long	m_nSalary;
	CString	m_szObjectAppliedKey;
	BOOL	m_bReturnDeptLabel;
	long	m_nReturnDept;
	CString	m_szMaleIndex;
	CString	m_szFemaleIndex;
	BOOL	m_bHitech;
	BOOL	m_bHitechMachine;
	BOOL	m_bPlasticSurgery;
	BOOL	m_bObstetric;
	BOOL	m_bPrintBold;
	long	m_nMaxTime;
	long	m_nDuration;
	CString	m_szGenderKey;
	CString	m_szParaPlaceKey;
	CString	m_szAdviceKey;
	CString	m_szApointmentKey;
	BOOL	m_bActive;
	//void			OnApplyDateChange(); 
	//void			OnApplyDateSetfocus(); 
	//void			OnApplyDateKillfocus(); 
	int			OnApplyDateCheckValue(); 
	//void			OnNewPriceChange(); 
	//void			OnNewPriceSetfocus(); 
	//void			OnNewPriceKillfocus(); 
	int			OnNewPriceCheckValue(); 
	void			OnGroupLabelSelect(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	void			OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeCategorySelendok(); 
	//void			OnFeeCategorySetfocus(); 
	//void			OnFeeCategoryKillfocus(); 
	long			OnFeeCategoryLoadData(); 
	//void			OnFeeCategoryAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnPerformPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformPlaceSelendok(); 
	//void			OnPerformPlaceSetfocus(); 
	//void			OnPerformPlaceKillfocus(); 
	long			OnPerformPlaceLoadData(); 
	//void			OnPerformPlaceAddNew(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	void			OnInsurancePaymentSelect(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	void			OnPolicyPaymentSelect(); 
	void			OnRequestPriceLabelSelect(); 
	//void			OnRequestPriceChange(); 
	//void			OnRequestPriceSetfocus(); 
	//void			OnRequestPriceKillfocus(); 
	int			OnRequestPriceCheckValue(); 
	//void			OnInsDiffPaymentChange(); 
	//void			OnInsDiffPaymentSetfocus(); 
	//void			OnInsDiffPaymentKillfocus(); 
	int			OnInsDiffPaymentCheckValue(); 
	void			OnDifferencePaymentSelect(); 
	//void			OnPolDiffPaymentChange(); 
	//void			OnPolDiffPaymentSetfocus(); 
	//void			OnPolDiffPaymentKillfocus(); 
	int			OnPolDiffPaymentCheckValue(); 
	//void			OnSalaryChange(); 
	//void			OnSalarySetfocus(); 
	//void			OnSalaryKillfocus(); 
	int			OnSalaryCheckValue(); 
	void			OnObjectAppliedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectAppliedSelendok(); 
	//void			OnObjectAppliedSetfocus(); 
	//void			OnObjectAppliedKillfocus(); 
	long			OnObjectAppliedLoadData(); 
	//void			OnObjectAppliedAddNew(); 
	void			OnReturnDeptLabelSelect(); 
	//void			OnReturnDeptChange(); 
	//void			OnReturnDeptSetfocus(); 
	//void			OnReturnDeptKillfocus(); 
	int			OnReturnDeptCheckValue(); 
	//void			OnMaleIndexChange(); 
	//void			OnMaleIndexSetfocus(); 
	//void			OnMaleIndexKillfocus(); 
	int			OnMaleIndexCheckValue(); 
	//void			OnFemaleIndexChange(); 
	//void			OnFemaleIndexSetfocus(); 
	//void			OnFemaleIndexKillfocus(); 
	int			OnFemaleIndexCheckValue(); 
	void			OnHitechSelect(); 
	void			OnHitechMachineSelect(); 
	void			OnPlasticSurgerySelect(); 
	void			OnObstetricSelect(); 
	void			OnPrintBoldSelect(); 
	//void			OnMaxTimeChange(); 
	//void			OnMaxTimeSetfocus(); 
	//void			OnMaxTimeKillfocus(); 
	int			OnMaxTimeCheckValue(); 
	//void			OnDurationChange(); 
	//void			OnDurationSetfocus(); 
	//void			OnDurationKillfocus(); 
	int			OnDurationCheckValue(); 
	void			OnGenderSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGenderSelendok(); 
	//void			OnGenderSetfocus(); 
	//void			OnGenderKillfocus(); 
	long			OnGenderLoadData(); 
	//void			OnGenderAddNew(); 
	void			OnParaPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnParaPlaceSelendok(); 
	//void			OnParaPlaceSetfocus(); 
	//void			OnParaPlaceKillfocus(); 
	long			OnParaPlaceLoadData(); 
	//void			OnParaPlaceAddNew(); 
	void			OnAdviceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAdviceSelendok(); 
	//void			OnAdviceSetfocus(); 
	//void			OnAdviceKillfocus(); 
	long			OnAdviceLoadData(); 
	//void			OnAdviceAddNew(); 
	void			OnApointmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnApointmentSelendok(); 
	//void			OnApointmentSetfocus(); 
	//void			OnApointmentKillfocus(); 
	long			OnApointmentLoadData(); 
	//void			OnApointmentAddNew(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSParaclinicalSetupDialog_new(CWnd *pParent);
	~CHMSParaclinicalSetupDialog_new();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalSetupDialog_new(); 
	int OnEditHMSParaclinicalSetupDialog_new(); 
	int OnDeleteHMSParaclinicalSetupDialog_new(); 
	int OnSaveHMSParaclinicalSetupDialog_new(); 
	int OnCancelHMSParaclinicalSetupDialog_new(); 
	int OnHMSParaclinicalSetupDialog_newListLoadData(); 
};
#endif
