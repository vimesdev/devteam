#ifndef SYSMESSAGESETUP_H
#define SYSMESSAGESETUP_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CSysMessageSetup : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndMessageList;
	CGuiLabel		m_wndSearchModuleLabel;
	CGuiComboBox	m_wndSearchModule;
	CGuiLabel		m_wndFindNameLabel;
	CGuiTextCtrl	m_wndFindName;
	CGuiListCtrl	m_wndMsgList;
	CGuiLabel	m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel	m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel	m_wndEnglishMessageLabel;
	CGuiTextCtrl	m_wndEnglishMessage;
	CGuiLabel	m_wndVnMessageLabel;
	CGuiTextCtrl	m_wndVnMessage;
	CGuiButton	m_wndAdd;
	CGuiButton	m_wndEdit;
	CGuiButton	m_wndDelete;
	CGuiButton	m_wndSave;
	CGuiButton	m_wndCancel;
	CString	m_szSearchModuleKey;
	CString	m_szFindName;
	long	m_nID;
	CString	m_szModuleKey;
	CString	m_szEnglishMessage;
	CString	m_szVnMessage;
	CDbfMap	m_sys_msgTbl;
	int			OnSearchModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnSearchModuleSetfocus(); 
	int			OnSearchModuleSelendok(); 
	int			OnSearchModuleKillfocus(); 
	int			OnSearchModuleLoadData(); 
	int			OnSearchModuleAddNew(); 
	int			OnFindNameChange(); 
	int			OnFindNameSetfocus(); 
	int			OnFindNameKillfocus(); 
	int			OnFindNameCheckValue(); 
	int			OnMsgListLoadData(); 
	int			OnMsgListSelectChange(int nOldItem, int nNewItem); 
	int			OnMsgListDblClick(); 
	int			OnMsgListDeleteItem(); 
	int			OnIDChange(); 
	int			OnIDSetfocus(); 
	int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	int			OnModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnModuleSetfocus(); 
	int			OnModuleKillfocus(); 
	int			OnModuleLoadData(); 
	int			OnModuleAddNew(); 
	int			OnEnglishMessageChange(); 
	int			OnEnglishMessageSetfocus(); 
	int			OnEnglishMessageKillfocus(); 
	int			OnEnglishMessageCheckValue(); 
	int			OnVnMessageChange(); 
	int			OnVnMessageSetfocus(); 
	int			OnVnMessageKillfocus(); 
	int			OnVnMessageCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CSysMessageSetup();
	~CSysMessageSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddVIMESMessageSetup(); 
	int OnEditVIMESMessageSetup(); 
	int OnDeleteVIMESMessageSetup(); 
	int OnSaveVIMESMessageSetup(); 
	int OnCancelVIMESMessageSetup(); 
	void EnableControls(BOOL bFlag);
	void Refresh();
	int SetMode(int nMode);
};
#endif
