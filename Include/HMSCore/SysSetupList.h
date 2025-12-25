#ifndef SYSSETUPLIST_H
#define SYSSETUPLIST_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CSysSetupList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel	m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiListCtrl	m_wndItemList;
	CGuiGroupBox	m_wndDetails;
	CGuiLabel		m_wndIDLabel;
	CGuiMaskCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiTextCtrl	m_wndSearchID;
	CGuiButton	m_wndAdd;
	CGuiButton	m_wndEdit;
	CGuiButton	m_wndDelete;
	CGuiButton	m_wndSave;
	CGuiButton	m_wndCancel;
	CGuiButton	m_wndClose;
	CGuiGroupBox	m_wndSetupListInformation;
	CGuiListCtrl	m_wndList;
	CString	m_szSearch;
	CString	m_szID;
	CString m_szOldID;
	CString	m_szName;
	CString m_szListID;
	CDbfMap	m_vimesselTbl;
	CDbfMap	m_vimesDeptTbl;

	int			OnSearchChange(); 
	int			OnSearchSetfocus(); 
	int			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	int			OnItemListLoadData(); 
	int			OnItemListSelChange(int nOldItem, int nNewItem); 
	int			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	int			OnIDChange(); 
	int			OnIDSetfocus(); 
	int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	int			OnNameChange(); 
	int			OnNameSetfocus(); 
	int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	int			OnAddSel(); 
	int			OnEditSel(); 
	int			OnDeleteSel(); 
	int			OnSaveSel(); 
	int			OnCancelSel(); 
	int			OnCloseSel(); 
	int			OnListLoadData(); 
	int			OnListSelChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	CSysSetupList();
	~CSysSetupList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void Refresh();
};
#endif
