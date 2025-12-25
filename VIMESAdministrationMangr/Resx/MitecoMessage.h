#ifndef VIMESMESSAGE_H
#define VIMESMESSAGE_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CVIMESMessage : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndMessageList;
	CGuiLabel	m_wndSearchModuleLabel;
	CGuiComboBox	m_wndSearchModule;
	CGuiLabel	m_wndFindNameLabel;
	CGuiTextCtrl	m_wndFindName;
	CGuiListCtrl	m_wndMsgList;
	CGuiLabel	m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel	m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel	m_wndEnglishMessageLabel;
	CGuiTextCtrl	m_wndEnglishMessage;
	CGuiLabel	m_wndOtherMessageLabel;
	CGuiTextCtrl	m_wndOtherMessage;
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
	CString	m_szOtherMessage;
	CDbfMap	m_vimes_msgTbl;
	int			OnSearchModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnSearchModuleSetfocus(); 
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
	int			OnOtherMessageChange(); 
	int			OnOtherMessageSetfocus(); 
	int			OnOtherMessageKillfocus(); 
	int			OnOtherMessageCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CVIMESMessage();
	~CVIMESMessage();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddVIMESMessage(); 
	int OnEditVIMESMessage(); 
	int OnDeleteVIMESMessage(); 
	int OnSaveVIMESMessage(); 
	int OnCancelVIMESMessage(); 
};
#endif
