#ifndef HMSParaclinicalSetupDialog_H
#define HMSParaclinicalSetupDialog_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSParaclinicalSetupDialog : public CGuiDialog{
protected:
	CWnd*	m_wndParent;
public:
	CGuiGroupBox	m_wndParaclinicalInformation;
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
	CGuiLabel		m_wndMaleIndexLabel;
	CGuiTextCtrl	m_wndMaleIndex;
	CGuiLabel		m_wndFemaleIndexLabel;
	CGuiTextCtrl	m_wndFemaleIndex;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndRequestPriceLabel;
	CGuiNumberCtrl	m_wndRequestPrice;
	CGuiLabel		m_wndReturnDeptLabel;
	CGuiNumberCtrl	m_wndReturnDept;
	CGuiLabel		m_wndObjectAppliedLabel;
	CGuiComboBox	m_wndObjectApplied;

	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;

	CGuiCheckBox	m_wndDifferencePayment;
	CGuiCheckBox	m_wndInsurancePayment;
	CGuiCheckBox	m_wndPolicyPayment;
	CGuiCheckBox	m_wndHitech;
	CGuiCheckBox	m_wndBloodFee;

	CGuiCheckBox	m_wndTypeOperation;
	CGuiLabel		m_wndOperationGroupLabel;
	CGuiComboBox	m_wndOperationGroup;

	
	CString	m_szDepartmentKey;
	CString	m_szGroupKey;
	CString	m_szOperationGroupKey;
	CString	m_szName;
	CString	m_szID;
	CString	m_szUnit;
	CString	m_szMaleIndex;
	CString	m_szFemaleIndex;
	CString m_szFeeCategoryKey;
	CString	m_szObjectAppliedKey;

	BOOL	m_bTypeOperation;

	double	m_nServicePrice;
	double	m_nInsurancePrice;
	double	m_nPolicyPrice;
	double	m_nRequestPrice;
	double	m_nRetDeptPrice;

	double	m_nOptPrice;

	BOOL	m_bDifferencePayment;
	BOOL	m_bInsurancePayment;
	BOOL	m_bPolicyPayment;
	BOOL	m_bHitech;
	BOOL	m_bBloodFee;

	int		m_nLine;
	int		m_nItemType;

	CString	m_szSubgroup;
	CString	m_szSubItem;
	CString	m_szCurGroup;
	CString	m_szCurID;
	CDbfMap	m_hms_fee_listTbl;
	int		m_nIndex;

	void			OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeCategorySelendok(); 
	//void			OnFeeCategorySetfocus(); 
	//void			OnFeeCategoryKillfocus(); 
	long			OnFeeCategoryLoadData(); 
	//void			OnFeeCategoryAddNew();	
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
	//int			OnMaleIndexChange(); 
	//int			OnMaleIndexSetfocus(); 
	//int			OnMaleIndexKillfocus(); 
	int			OnMaleIndexCheckValue(); 
	//int			OnFemaleIndexChange(); 
	//int			OnFemaleIndexSetfocus(); 
	//int			OnFemaleIndexKillfocus(); 
	int			OnFemaleIndexCheckValue(); 
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
	//void			OnRequestPriceChange(); 
	//void			OnRequestPriceSetfocus(); 
	//void			OnRequestPriceKillfocus(); 
	int			OnRequestPriceCheckValue(); 
	//void			OnReturnDeptChange(); 
	//void			OnReturnDeptSetfocus(); 
	//void			OnReturnDeptKillfocus(); 
	int			OnReturnDeptCheckValue();
	long		OnObjectAppliedLoadData();
	void			OnTypeOperationSelect(); 

	void			OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOperationGroupSelendok(); 
	//void			OnOperationGroupSetfocus(); 
	//void			OnOperationGroupKillfocus(); 
	long			OnOperationGroupLoadData(); 
	//void			OnOperationGroupAddNew(); 



	int			OnSaveSelect(); 
	int			OnCloseSelect();

	void			OnDifferencePaymentSelect(); 
	void			OnInsurancePaymentSelect(); 
	void			OnPolicyPaymentSelect(); 
	void			OnHitechSelect();

	CHMSParaclinicalSetupDialog(CWnd *pParent, CWnd *pView);
	~CHMSParaclinicalSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalSetupDialog(); 
	int OnEditHMSParaclinicalSetupDialog(); 
	int OnDeleteHMSParaclinicalSetupDialog(); 
	int OnSaveHMSParaclinicalSetupDialog(); 
	int OnCancelHMSParaclinicalSetupDialog(); 
	int OnHMSParaclinicalSetupDialogListLoadData(); 
};
#endif
