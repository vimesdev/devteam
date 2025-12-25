#ifndef VIMESPERMISSION_H
#define VIMESPERMISSION_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CVIMESPermission : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndPermissionInformatioin;
	CGuiListCtrl	m_wndPermissionList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szID;
	CString	m_szModuleKey;
	CString	m_szDescription;
	CDbfMap	m_vimes_permissionTbl;
	int			OnPermissionListLoadData(); 
	int			OnPermissionListSelectChange(int nOldItem, int nNewItem); 
	int			OnPermissionListDblClick(); 
	int			OnPermissionListDeleteItem(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	int			OnModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnModuleSelendok(); 
	//int			OnModuleSetfocus(); 
	//int			OnModuleKillfocus(); 
	int			OnModuleLoadData(); 
	int			OnModuleAddNew(); 
	//int			OnDescriptionChange(); 
	//int			OnDescriptionSetfocus(); 
	//int			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CVIMESPermission();
	~CVIMESPermission();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddVIMESPermission(); 
	int OnEditVIMESPermission(); 
	int OnDeleteVIMESPermission(); 
	int OnSaveVIMESPermission(); 
	int OnCancelVIMESPermission(); 
};
#endif
