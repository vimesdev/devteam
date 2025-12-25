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
//****************************************************
//Them 2 truong duration(Thoi han ap dung)
//Gender(Gioi tinh ap dung(nam, nu, ca hai)
//****************************************************
class CHMSParaclinicalSetupDialog_new : public CGuiDialog
{

protected:
	long m_nLine;
	long m_nIndex;
public:
	CGuiGroupBox	m_wndInformationOfTestFee;
	CGuiGroupBox	m_wndThuoctinh;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiLabel		m_wndNewPriceLabel;
	CGuiNumberCtrl	m_wndNewPrice;
	CGuiCheckBox	m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndFeeCategoryLabel;
	CGuiComboBox	m_wndFeeCategory;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndPerformPlaceLabel;
	CGuiComboBox	m_wndPerformPlace;
	CGuiCheckBox	m_wndReturnDeptLabel;
	CGuiNumberCtrl	m_wndReturnDept;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiCheckBox	m_wndRequestPriceLabel;
	CGuiNumberCtrl	m_wndRequestPrice;
	CGuiLabel	m_wndInsDiffPaymentLabel;
	CGuiNumberCtrl	m_wndInsDiffPayment;
	CGuiLabel	m_wndPolDiffPaymentLabel;
	CGuiNumberCtrl	m_wndPolDiffPayment;
	CGuiLabel		m_wndSalaryLabel;
	CGuiNumberCtrl	m_wndSalary;
	CGuiLabel		m_wndObjectAppliedLabel;
	CGuiComboBox	m_wndObjectApplied;
	CGuiLabel		m_wndMaleIndexLabel;
	CGuiTextCtrl	m_wndMaleIndex;
	CGuiLabel		m_wndFemaleIndexLabel;
	CGuiTextCtrl	m_wndFemaleIndex;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndInsurancePayment;
	CGuiCheckBox	m_wndPolicyPayment;
	CGuiCheckBox	m_wndDifferencePayment;
	CGuiCheckBox	m_wndHitech;
	CGuiCheckBox	m_wndHitechMachine;
	CGuiCheckBox	m_wndPlasticSurgery;
	CGuiCheckBox	m_wndActive;
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
	CGuiCheckBox	m_wndObstetric;

	CGuiLabel		m_wndInsMapLabel;
	CGuiTextCtrl	m_wndInsMap;

	CGuiLabel		m_wndCiculerMapLabel;
	CGuiTextCtrl	m_wndCiculerMap;

	CGuiNumberCtrl	m_wndGiangansach;
	CGuiLabel		m_wndGiangansachlabel;
	CGuiCheckBox	m_wndNgansachtra;
	CGuiCheckBox	m_wndIsBlood;
	CGuiCheckBox	m_wndXncovid19;
	CGuiLabel		m_wndNhomBHLabel;
	CGuiComboBox	m_wndNhomBH;
	CGuiCheckBox	m_wndbhquankott;

	CString m_szType;
	CString m_szParentGroup;
	CString	m_szApplyDate;
	BOOL	m_bGroup;
	CString	m_szGroupKey;
	CString	m_szFeeCategoryKey;
	CString	m_szID;
	CString	m_szUnit;
	CString	m_szName;
	CString	m_szDepartmentKey;
	CString	m_szPerformPlaceKey;
	CString	m_szNhomBHKey;
	BOOL	m_bbhquankott;
	long	m_nReturnDept;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	long	m_nRequestPrice;
	long	m_nNewPrice;
	long	m_nInsDiffPayment;
	long	m_nPolDiffPayment;
	long	m_nSalary;
	CString	m_szObjectAppliedKey;
	CString	m_szMaleIndex;
	CString	m_szFemaleIndex;
	BOOL	m_bInsurancePayment;
	BOOL	m_bPolicyPayment;
	BOOL	m_bDifferencePayment;
	BOOL	m_bHitech;
	BOOL	m_bHitechMachine;
	BOOL	m_bPlasticSurgery;
	BOOL	m_bActive;
	BOOL	m_bRequestPriceFlg;
	BOOL	m_bInsDiffPaymentFlg;
	BOOL	m_bPolDiffPaymentFlg;
	BOOL	m_bReturnDeptFlag;
	BOOL	m_bPrintBold;
	BOOL	m_bObstetric;
	BOOL	m_bIsBlood;
	long	m_nMaxTime;
	long	m_nDuration;
	CString	m_szGenderKey;
	CString	m_szAdviceKey;
	CString	m_szApointmentKey;
	CString	m_szParaPlaceKey;
	CString m_szInsMap;
	CString m_szCiculerMap;
	long	m_nGiangansach;
	BOOL	m_bNgansachtra;
	BOOL	m_bXncovid19;

	CDbfMap m_hms_fee_listTbl;
	CWnd* m_pWnd;
	void			GetDataToScreen();
	void			GetScreenToData();
	void			OnIsBloodSelect();
	//void			OnApplyDateChange(); 
	//void			OnApplyDateSetfocus(); 
	//void			OnApplyDateKillfocus(); 
	int			OnApplyDateCheckValue();
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
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
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
	//void			OnReturnDeptChange(); 
	//void			OnReturnDeptSetfocus(); 
	//void			OnReturnDeptKillfocus(); 
	int			OnReturnDeptCheckValue(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	//void			OnRequestPriceChange(); 
	//void			OnRequestPriceSetfocus(); 
	//void			OnRequestPriceKillfocus(); 
	int			OnRequestPriceCheckValue(); 
	//void			OnInsDiffPaymentChange(); 
	//void			OnInsDiffPaymentSetfocus(); 
	//void			OnInsDiffPaymentKillfocus(); 
	int			OnInsDiffPaymentCheckValue(); 
	//void			OnPolDiffPaymentChange(); 
	//void			OnPolDiffPaymentSetfocus(); 
	//void			OnPolDiffPaymentKillfocus(); 
	int			OnPolDiffPaymentCheckValue();
	int			OnSalaryCheckValue(); 
	void			OnObjectAppliedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectAppliedSelendok(); 
	//void			OnObjectAppliedSetfocus(); 
	//void			OnObjectAppliedKillfocus(); 
	long			OnObjectAppliedLoadData(); 
	//void			OnObjectAppliedAddNew(); 
	//void			OnMaleIndexChange(); 
	//void			OnMaleIndexSetfocus(); 
	//void			OnMaleIndexKillfocus(); 
	int			OnMaleIndexCheckValue(); 
	//void			OnFemaleIndexChange(); 
	//void			OnFemaleIndexSetfocus(); 
	//void			OnFemaleIndexKillfocus(); 
	int			OnFemaleIndexCheckValue();	
	int			    OnMaxTimeCheckValue();	 
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
	//void			OnAdviceSetfocus(); 
	//void			OnAdviceKillfocus(); 
	long			OnAdviceLoadData();
	void			OnAdviceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnApointmentSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnParaPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	//void			OnAdviceAddNew(); 	
	//void			OnApointmentSetfocus(); 
	//void			OnApointmentKillfocus(); 
	long			OnApointmentLoadData();
	long			OnParaPlaceLoadData();
	long			OnNhomBHLoadData();
	//void			OnApointmentAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnInsurancePaymentSelect(); 
	void			OnPolicyPaymentSelect(); 
	void			OnDifferencePaymentSelect(); 
	void			OnHitechSelect(); 
	void			OnHitechMachineSelect(); 
	void			OnPlasticSurgerySelect(); 
	void			OnActiveSelect(); 
	void			OnRequestPriceLabel();
	void			OnInsDiffPaymentLabel(); 
	void			OnPolDiffPaymentLabel(); 
	void			OnReturnDepartmentLabel();
	void			OnObstetricSelect();
	int			    OnGiangansachCheckValue(); 
	void			OnNgansachtraSelect();
	void			OnXncovid19Select();
	void			OnbhquankottSelect(); 

	CHMSParaclinicalSetupDialog_new(CWnd *pParent);
	~CHMSParaclinicalSetupDialog_new();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int	 OnSaveParaclinicalSetupDialog_new();
	int SetMode(int nMode);
};
#endif