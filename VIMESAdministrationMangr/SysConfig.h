#ifndef SYSCONFIG_H
#define SYSCONFIG_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CSysConfigSetup : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndConfigurationInformation;
	CGuiListCtrl	m_wndConfigList;
	CGuiLabel		m_wndModuleIDLabel;
	CGuiComboBox	m_wndModuleID;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndValueTypeLabel;
	CGuiComboBox	m_wndValueType;
	CGuiLabel		m_wndDescLabel;
	CGuiTextCtrl	m_wndDesc;
	CGuiLabel		m_wndValueLabel;
	CGuiMaskCtrl	m_wndValue;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szModuleIDKey;
	long	m_nID;
	CString	m_szName;
	CString	m_szValueTypeKey;
	CString	m_szDesc;
	CString	m_szValue;
	CDbfMap	m_sys_configTbl;
	int			OnConfigListLoadData(); 
	int			OnConfigListSelectChange(int nOldItem, int nNewItem); 
	int			OnConfigListDblClick(); 
	int			OnConfigListDeleteItem(); 
	int			OnModuleIDSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnModuleIDSelendok(); 
	//int			OnModuleIDSetfocus(); 
	//int			OnModuleIDKillfocus(); 
	int			OnModuleIDLoadData(); 
	int			OnModuleIDAddNew(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	int			OnValueTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnValueTypeSelendok(); 
	//int			OnValueTypeSetfocus(); 
	//int			OnValueTypeKillfocus(); 
	int			OnValueTypeLoadData(); 
	int			OnValueTypeAddNew(); 
	//int			OnDescChange(); 
	//int			OnDescSetfocus(); 
	//int			OnDescKillfocus(); 
	int			OnDescCheckValue(); 
	//int			OnValueChange(); 
	//int			OnValueSetfocus(); 
	//int			OnValueKillfocus(); 
	int			OnValueCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CSysConfigSetup();
	~CSysConfigSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESConfig(); 
	int OnEditVIMESConfig(); 
	int OnDeleteVIMESConfig(); 
	int OnSaveVIMESConfig(); 
	int OnCancelVIMESConfig(); 
	int OnVIMESConfigLoadData(); 
};
#endif
