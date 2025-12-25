#ifndef SYSDICTIONARYSETUP_H
#define SYSDICTIONARYSETUP_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"

class AFX_EXT_CLASS CSysDictionarySetup : public CGuiView{
protected:
	CDbfMap m_dbfDict;

public:
	CGuiGroupBox	m_wndDictionaryList;
	CGuiLabel	m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiCheckBox	m_wndEnglishLanguage;
	CGuiListCtrl	m_wndDictList;
	CGuiGroupBox	m_wndDetails;
	CGuiLabel	m_wndEnglishWordLabel;
	CGuiTextCtrl	m_wndEnglishWord;
	CGuiLabel	m_wndVnLanguegeLabel;
	CGuiTextCtrl	m_wndVnLanguege;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;


	CGuiButton	m_wndAdd;
	CGuiButton	m_wndEdit;
	CGuiButton	m_wndDelete;
	CGuiButton	m_wndSave;
	CGuiButton	m_wndCancel;
	CGuiButton	m_wndClose;
	CString	m_szSearch;
	BOOL	m_bEnglishLanguage;
	CString	m_szEnglishWord;
	CString	m_szVnLanguege;
	CString m_szID;
	int			OnSearchChange(); 
	int			OnSearchSetfocus(); 
	int			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	int			OnEnglishLanguageSel(); 
	int			OnDictListLoadData(); 
	int			OnDictListSelChange(int nOldItem, int nNewItem); 
	int			OnDictListDblClick(); 
	int			OnDictListDeleteItem(); 
	int			OnEnglishWordChange(); 
	int			OnEnglishWordSetfocus(); 
	int			OnEnglishWordKillfocus(); 
	int			OnEnglishWordCheckValue(); 
	int			OnVnLanguegeChange(); 
	int			OnVnLanguegeSetfocus(); 
	int			OnVnLanguegeKillfocus(); 
	int			OnVnLanguegeCheckValue(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 

	int			OnAddSel(); 
	int			OnEditSel(); 
	int			OnDeleteSel(); 
	int			OnSaveSel(); 
	int			OnCancelSel(); 
	int			OnCloseSel(); 
	CSysDictionarySetup();
	~CSysDictionarySetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void EnableControls(BOOL bFlags=TRUE);
	void Refresh();
};
#endif
