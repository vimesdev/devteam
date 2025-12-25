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
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
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
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	
	CString	m_szDepartmentKey;
	CString	m_szName;
	CString	m_szID;
	CString	m_szUnit;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	int		m_nLine;
	CString	m_szGroupKey;
	CString	m_szCurID;
	CString	m_szCurGroup;
	int		m_nIndex;
	
	CDbfMap	m_hms_fee_listTbl;
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
	int			OnDifferencePaymentSelect(); 
	//int			OnLineChange(); 
	//int			OnLineSetfocus(); 
	//int			OnLineKillfocus(); 
	int			OnLineCheckValue(); 
	int			OnSaveSelect(); 
	int			OnCloseSelect(); 
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
