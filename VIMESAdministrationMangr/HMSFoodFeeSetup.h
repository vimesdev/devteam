#ifndef HMSFoodFeeSetup_H
#define HMSFoodFeeSetup_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSFoodFeeSetup : public CGuiView
{

protected:
	long m_nSelectedLine;
public:
	CGuiGroupBox	m_wndFeeInformation;
	CGuiLabel		m_wndFindLabel;
	CGuiTextCtrl	m_wndFind;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndSecondNameLabel;
	CGuiTextCtrl	m_wndSecondName;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiCheckBox	m_wndDifferencePay;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndInactive;
	CGuiLabel		m_wndMedicalCodeLabel;
	CGuiTextCtrl	m_wndMedicalCode;
	CString	m_szFind;
	CString	m_szName;
	CString	m_szSecondName;
	CString	m_szMedicalCode;
	CString	m_szID;
	CString	m_szUnit;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	CString m_szGroupKey;
	BOOL	m_bDifferencePay;
	CDbfMap	m_hms_feeTbl;
	BOOL	m_bInactive;

	int			OnFindChange();
	int			OnListLoadData(); 
	int			OnListSelectChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListShowLogItem();
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue();
	int			OnMedicalCodeCheckValue(); 
	int			OnUnitCheckValue(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
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
	long		OnGroupLoadData();
	int			OnDifferencePaySelect(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	void		OnInactiveSelect();
	void		OnListEditOldPrice();
	CHMSFoodFeeSetup();
	~CHMSFoodFeeSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFoodFeeSetup(); 
	int OnEditHMSFoodFeeSetup(); 
	int OnDeleteHMSFoodFeeSetup(); 
	int OnSaveHMSFoodFeeSetup(); 
	int OnCancelHMSFoodFeeSetup(); 
	int OnHMSFoodFeeSetupListLoadData(); 
};
#endif