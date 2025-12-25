#ifndef EMParaclinicalListSetup_H
#define EMParaclinicalListSetup_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
#include "ListPane.h"
class CEMParaclinicalListSetup : public CGuiDialog{
protected:
	CArray<CString, CString&> m_arCode;
public:
	CString	m_szCode;
	CString	m_szFeeID;
	CListPane	m_wndParaclinicalList;
	CGuiListCtrl	m_wndFeeList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiLabel		m_wndFindLabel;
	CGuiTextCtrl	m_wndFind;
	CGuiButton		m_wndFilter;
	
	CString	m_szFind;


	int			OnParaclinicalListLoadData(); 
	int			OnParaclinicalListSelectChange(int nOldItem, int nNewItem); 
	int			OnParaclinicalListDblClick(); 
	int			OnParaclinicalListDeleteItem(); 
	int			OnFeeListLoadData(); 
	int			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	int			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	int			OnFeeListSortIndex();
	int			OnListShowLogItem();
	int			OnFilterSelect(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnFindChange();
	int			OnSetSubGroup();
	int			OnSetSubItem();
	CEMParaclinicalListSetup(CWnd* pParent);
	~CEMParaclinicalListSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalListSetup(); 
	int OnEditHMSParaclinicalListSetup(); 
	int OnDeleteHMSParaclinicalListSetup(); 
	int OnSaveHMSParaclinicalListSetup(); 
	int OnCancelHMSParaclinicalListSetup(); 
	int OnHMSParaclinicalListSetupListLoadData(); 
};
#endif
