#ifndef HMSOperationSetupDialog_H
#define HMSOperationSetupDialog_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSOperationListSetup;
class CHMSOperationSetupDialog : public CGuiDialog{
protected:
	CHMSOperationListSetup*	m_wndOperationList;
public:
	CGuiGroupBox	m_wndInformationOfTestFee;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiLabel		m_wndNewPriceLabel;
	CGuiNumberCtrl	m_wndNewPrice;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndFeeCategoryLabel;
	CGuiComboBox	m_wndFeeCategory;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndRequestPriceLabel;
	CGuiNumberCtrl	m_wndRequestPrice;
	CGuiLabel		m_wndInsDiffPaymentLabel;
	CGuiNumberCtrl	m_wndInsDiffPayment;
	CGuiLabel		m_wndPolDiffPaymentLabel;
	CGuiNumberCtrl	m_wndPolDiffPayment;
	CGuiLabel		m_wndReturnDeptLabel;
	CGuiNumberCtrl	m_wndReturnDept;

	CGuiLabel		m_wndInsMapLabel;
	CGuiTextCtrl	m_wndInsMap;

	CGuiLabel		m_wndCiculerMapLabel;
	CGuiTextCtrl	m_wndCiculerMap;

	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndActive;

	CGuiCheckBox	m_wndDifferencePayment;
	CGuiCheckBox	m_wndInsurancePayment;
	CGuiCheckBox	m_wndPolicyPayment;
	CGuiCheckBox	m_wndHitech;
	CGuiCheckBox	m_wndHitechMachine;
	CGuiCheckBox	m_wndPlasticSurgery;
	CString	m_szDepartmentKey;
	CString	m_szName;
	CString	m_szID;
	CString	m_szUnit;
	CString m_szInsMap;
	CString m_szCiculerMap;

	double	m_nServicePrice;
	double	m_nInsurancePrice;
	double	m_nPolicyPrice;
	double	m_nRequestPrice;
	double	m_nReturnDept;
	long	m_nInsDiffPayment;
	long	m_nPolDiffPayment;
	int		m_nLine;
	CString m_szApplyDate;
	CString	m_szGroupKey;
	CString	m_szCurID;
	CString	m_szCurGroup;
	CString m_szFeeCategoryKey;
	int		m_nIndex;

	BOOL	m_bDifferencePayment;
	BOOL	m_bInsurancePayment;
	BOOL	m_bPolicyPayment;

	BOOL	m_bHitech;
	BOOL	m_bHitechMachine;
	BOOL	m_bPlasticSurgery;
	BOOL	m_bActive;
	CDbfMap	m_hms_fee_listTbl;
	int			OnFeeCategoryLoadData();
	int			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnDepartmentSelendok(); 
	//int			OnDepartmentSetfocus(); 
	//int			OnDepartmentKillfocus(); 
	int			OnDepartmentLoadData(); 
	int			OnDepartmentAddNew(); 
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//int			OnUnitChange(); 
	//int			OnUnitSetfocus(); 
	//int			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//int			OnServicePriceChange(); 
	//int			OnServicePriceSetfocus(); 
	//int			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//int			OnInsurancePriceChange(); 
	//int			OnInsurancePriceSetfocus(); 
	//int			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//int			OnPolicyPriceChange(); 
	//int			OnPolicyPriceSetfocus(); 
	//int			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	//int			OnOptPriceChange(); 
	//int			OnOptPriceSetfocus(); 
	//int			OnOptPriceKillfocus(); 
	int			OnOptPriceCheckValue();
	//void			OnRequestPriceChange(); 
	//void			OnRequestPriceSetfocus(); 
	//void			OnRequestPriceKillfocus(); 
	int			OnRequestPriceCheckValue(); 
	//void			OnReturnDeptChange(); 
	//void			OnReturnDeptSetfocus(); 
	//void			OnReturnDeptKillfocus(); 
	int			OnReturnDeptCheckValue();

	//int			OnDifferencePaymentSelect(); 
	//int			OnLineChange(); 
	//int			OnLineSetfocus(); 
	//int			OnLineKillfocus(); 
	int			OnLineCheckValue(); 
	int			OnSaveSelect(); 
	int			OnCloseSelect(); 

	void			OnDifferencePaymentSelect();
	void			OnInsurancePaymentSelect();
	void			OnPolicyPaymentSelect();
	void			OnHitechSelect();

	int			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnGroupSelendok(); 
	//int			OnGroupSetfocus(); 
	//int			OnGroupKillfocus(); 
	int			OnGroupLoadData(); 
	int			OnGroupAddNew(); 

	CHMSOperationSetupDialog(CWnd *pParent, CWnd *pList);
	~CHMSOperationSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationSetupDialog(); 
	int OnEditHMSOperationSetupDialog(); 
	int OnDeleteHMSOperationSetupDialog(); 
	int OnSaveHMSOperationSetupDialog(); 
	int OnCancelHMSOperationSetupDialog(); 
	int OnHMSOperationSetupDialogListLoadData(); 
};
#endif
