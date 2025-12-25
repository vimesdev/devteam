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
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	
	
	CString	m_szDepartmentKey;
	CString	m_szGroupKey;
	CString	m_szName;
	CString	m_szID;
	CString	m_szUnit;
	CString	m_szMaleIndex;
	CString	m_szFemaleIndex;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	long	m_nOptPrice;
	long	m_nRetDeptPrice;
	BOOL	m_bDifferencePayment;
	int		m_nLine;
	int		m_nItemType;
	CString	m_szSubgroup;
	CString	m_szSubItem;
	CString	m_szCurGroup;
	CString	m_szCurID;
	CDbfMap	m_hms_fee_listTbl;
	int		m_nIndex;

	int			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnGroupSelendok(); 
	//int			OnGroupSetfocus(); 
	//int			OnGroupKillfocus(); 
	int			OnGroupLoadData(); 
	int			OnGroupAddNew(); 
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
	
	int			OnSaveSelect(); 
	int			OnCloseSelect(); 
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
