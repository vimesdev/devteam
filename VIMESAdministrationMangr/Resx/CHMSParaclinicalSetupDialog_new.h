#ifndef CHMSPARACLINICALSETUPDIALOG_NEW_H
#define CHMSPARACLINICALSETUPDIALOG_NEW_H

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
class CCHMSParaclinicalSetupDialog_new : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformationOfTestFee;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndFeeCategoryLabel;
	CGuiComboBox	m_wndFeeCategory;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndObjectAppliedLabel;
	CGuiComboBox	m_wndObjectApplied;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiCheckBox	m_wndDifferencePayment;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiCheckBox	m_wndInsurancePayment;
	CGuiNumberCtrl	m_wndInsDiffPayment;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiCheckBox	m_wndPolicyPayment;
	CGuiNumberCtrl	m_wndPolDiffPayment;
	CGuiCheckBox	m_wndRequestPriceLabel;
	CGuiNumberCtrl	m_wndRequestPrice;
	CGuiCheckBox	m_wndReturnDeptLabel;
	CGuiNumberCtrl	m_wndReturnDept;
	CGuiLabel		m_wndMaleIndexLabel;
	CGuiTextCtrl	m_wndMaleIndex;
	CGuiLabel		m_wndFemaleIndexLabel;
	CGuiTextCtrl	m_wndFemaleIndex;
	CGuiCheckBox	m_wndHitech;
	CGuiCheckBox	m_wndPlasticSurgery;
	CGuiCheckBox	m_wndHitechMachine;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szGroupKey;
	CString	m_szFeeCategoryKey;
	CString	m_szID;
	CString	m_szObjectAppliedKey;
	CString	m_szName;
	CString	m_szUnit;
	CString	m_szApplyDate;
	CString	m_szDepartmentKey;
	long	m_nServicePrice;
	BOOL	m_bDifferencePayment;
	long	m_nInsurancePrice;
	BOOL	m_bInsurancePayment;
	long	m_nInsDiffPayment;
	long	m_nPolicyPrice;
	BOOL	m_bPolicyPayment;
	long	m_nPolDiffPayment;
	BOOL	m_bRequestPriceLabel;
	long	m_nRequestPrice;
	BOOL	m_bReturnDeptLabel;
	long	m_nReturnDept;
	CString	m_szMaleIndex;
	CString	m_szFemaleIndex;
	BOOL	m_bHitech;
	BOOL	m_bPlasticSurgery;
	BOOL	m_bHitechMachine;
	BOOL	m_bActive;
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
	void			OnObjectAppliedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectAppliedSelendok(); 
	//void			OnObjectAppliedSetfocus(); 
	//void			OnObjectAppliedKillfocus(); 
	long			OnObjectAppliedLoadData(); 
	//void			OnObjectAppliedAddNew(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnApplyDateChange(); 
	//void			OnApplyDateSetfocus(); 
	//void			OnApplyDateKillfocus(); 
	int			OnApplyDateCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	void			OnDifferencePaymentSelect(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	void			OnInsurancePaymentSelect(); 
	//void			OnInsDiffPaymentChange(); 
	//void			OnInsDiffPaymentSetfocus(); 
	//void			OnInsDiffPaymentKillfocus(); 
	int			OnInsDiffPaymentCheckValue(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	void			OnPolicyPaymentSelect(); 
	//void			OnPolDiffPaymentChange(); 
	//void			OnPolDiffPaymentSetfocus(); 
	//void			OnPolDiffPaymentKillfocus(); 
	int			OnPolDiffPaymentCheckValue(); 
	void			OnRequestPriceLabelSelect(); 
	//void			OnRequestPriceChange(); 
	//void			OnRequestPriceSetfocus(); 
	//void			OnRequestPriceKillfocus(); 
	int			OnRequestPriceCheckValue(); 
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
	void			OnPlasticSurgerySelect(); 
	void			OnHitechMachineSelect(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CCHMSParaclinicalSetupDialog_new(CWnd *pParent);
	~CCHMSParaclinicalSetupDialog_new();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSParaclinicalSetupDialog_new(); 
	int OnEditCHMSParaclinicalSetupDialog_new(); 
	int OnDeleteCHMSParaclinicalSetupDialog_new(); 
	int OnSaveCHMSParaclinicalSetupDialog_new(); 
	int OnCancelCHMSParaclinicalSetupDialog_new(); 
	int OnCHMSParaclinicalSetupDialog_newListLoadData(); 
};
#endif
