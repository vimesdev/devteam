#ifndef IVFSETUPLIST_H
#define IVFSETUPLIST_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CIVFSetupList : public CGuiDialog{
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
	CGuiLabel		m_wndDescLabel;
	CGuiTextCtrl	m_wndDesc;
	CGuiButton	m_wndAdd;
	CGuiButton	m_wndEdit;
	CGuiButton	m_wndDelete;
	CGuiButton	m_wndSave;
	CGuiButton	m_wndCancel;
	CGuiButton	m_wndClose;
	CGuiGroupBox	m_wndSetupListInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndFindLabel;
	CGuiTextCtrl	m_wndFind;
	CString	m_szSearch;
	CString	m_szID;
	CString m_szOldID;
	CString	m_szName;
	CString m_szListID;
	CString	m_szDesc;
	CString	m_szFind;
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
	int			OnFindChange(); 
	//void			OnFindSetfocus(); 
	//void			OnFindKillfocus(); 
	int			OnFindCheckValue(); 
	CIVFSetupList();
	~CIVFSetupList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void Refresh();
	int	SetMode(int nMode);
	int OnItemListAddParaclinic();
};
#endif
