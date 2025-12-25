#ifndef HMSEXAMINATIONTYPESETUP_H
#define HMSEXAMINATIONTYPESETUP_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSExaminationTypeSetup : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndExaminationTypes;
	CGuiLabel		m_wndFindLabel;
	CGuiTextCtrl	m_wndFind;
	CGuiListCtrl	m_wndExamTypeList;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiCheckBox	m_wndDifferencePay;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndInactive;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CString	m_szFind;
	CString	m_szName;
	CString	m_szID;
	CString	m_szUnit;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	BOOL	m_bDifferencePay;
	BOOL	m_bInactive;
	BOOL	m_bRefActive;
	CDbfMap	m_hms_feeTbl;
	int			OnFindChange();
	int			OnExamTypeListLoadData(); 
	int			OnExamTypeListSelectChange(int nOldItem, int nNewItem); 
	int			OnExamTypeListDblClick(); 
	int			OnExamTypeListDeleteItem(); 
	int			OnListShowLogItem();
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
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
	int			OnUnitCheckValue();
	//int			OnPolicyPriceChange(); 
	//int			OnPolicyPriceSetfocus(); 
	//int			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	int			OnDifferencePaySelect(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect();
	void		OnInactiveSelect();
	CHMSExaminationTypeSetup();
	~CHMSExaminationTypeSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExaminationTypeSetup(); 
	int OnEditHMSExaminationTypeSetup(); 
	int OnDeleteHMSExaminationTypeSetup(); 
	int OnSaveHMSExaminationTypeSetup(); 
	int OnCancelHMSExaminationTypeSetup(); 
	int OnHMSExaminationTypeSetupListLoadData(); 
};
#endif
