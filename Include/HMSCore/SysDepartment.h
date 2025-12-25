#ifndef SYSDEPARTMENT_H
#define SYSDEPARTMENT_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CSysDepartmentSetup : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndDepartmentInformations;
	CGuiLabel		m_wndFindNameLabel;
	CGuiTextCtrl	m_wndFindName;
	CGuiListCtrl	m_wndDeptList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndZoneLabel;
	CGuiTextCtrl	m_wndZone;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szFindName;
	CString	m_szID;
	CString m_szOldID;
	CString	m_szTypeKey;
	CString	m_szCategoryKey;
	CString	m_szName;
	CString	m_szZone;
	CDbfMap	m_sys_deptTbl;
	//int			OnFindNameChange(); 
	//int			OnFindNameSetfocus(); 
	//int			OnFindNameKillfocus(); 
	int			OnFindNameCheckValue(); 
	int			OnDeptListLoadData(); 
	int			OnDeptListSelectChange(int nOldItem, int nNewItem); 
	int			OnDeptListDblClick(); 
	int			OnDeptListDeleteItem(); 
	int		OnDeptWardAdd();
	void		OnDeptListAddBed();	
	void		OnDeptListDynamicBedList();
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	int			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnTypeSelendok(); 
	//int			OnTypeSetfocus(); 
	//int			OnTypeKillfocus(); 
	int			OnTypeLoadData(); 
	int			OnTypeAddNew(); 
	int			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnCategorySelendok(); 
	//int			OnCategorySetfocus(); 
	//int			OnCategoryKillfocus(); 
	int			OnCategoryLoadData(); 
	int			OnCategoryAddNew(); 
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//int			OnZoneChange(); 
	//int			OnZoneSetfocus(); 
	//int			OnZoneKillfocus(); 
	int			OnZoneCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CSysDepartmentSetup();
	~CSysDepartmentSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESDepartment(); 
	int OnEditVIMESDepartment(); 
	int OnDeleteVIMESDepartment(); 
	int OnSaveVIMESDepartment(); 
	int OnCancelVIMESDepartment(); 
	int OnVIMESDepartmentListLoadData(); 
	bool OnCheckBeforeDelete();
	void Refresh();
};
#endif
