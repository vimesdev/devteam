#ifndef VIMESSETUPLIST_H
#define VIMESSETUPLIST_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CVIMESSetupList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiListCtrl	m_wndItemList;
	CGuiGroupBox	m_wndDetails;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiGroupBox	m_wndSetupListInformation;
	CGuiListCtrl	m_wndList;
	CString	m_szSearch;
	long	m_nID;
	CString	m_szName;
	//int			OnSearchChange(); 
	//int			OnSearchSetfocus(); 
	//int			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	int			OnItemListLoadData(); 
	int			OnItemListSelectChange(int nOldItem, int nNewItem); 
	int			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	int			OnListLoadData(); 
	int			OnListSelectChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CVIMESSetupList();
	~CVIMESSetupList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddVIMESSetupList(); 
	int OnEditVIMESSetupList(); 
	int OnDeleteVIMESSetupList(); 
	int OnSaveVIMESSetupList(); 
	int OnCancelVIMESSetupList(); 
};
#endif
