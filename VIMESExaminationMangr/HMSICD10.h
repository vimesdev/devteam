#ifndef HMSICD10_H
#define HMSICD10_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSICD10Setup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndICDInformations;
	CGuiLabel		m_wndChapterFillterLabel;
	CGuiComboBox	m_wndChapterFillter;
	CGuiLabel		m_wndNameFillterLabel;
	CGuiTextCtrl	m_wndNameFillter;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndChapterLabel;
	CGuiComboBox	m_wndChapter;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndChapterButton;
	CGuiButton		m_wndGroupButton;
	CString	m_szChapterFillterKey;
	CString	m_szNameFillter;
	CString	m_szChapterKey;
	CString	m_szGroupKey;
	CString	m_szID;
	CString	m_szName;
	CDbfMap	m_hms_icdextraTbl;
	int			OnChapterFillterSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnChapterFillterSelendok(); 
	//int			OnChapterFillterSetfocus(); 
	//int			OnChapterFillterKillfocus(); 
	int			OnChapterFillterLoadData(); 
	int			OnChapterFillterAddNew(); 
	//int			OnNameFillterChange(); 
	//int			OnNameFillterSetfocus(); 
	//int			OnNameFillterKillfocus(); 
	int			OnNameFillterCheckValue(); 
	int			OnListLoadData(); 
	int			OnListSelectChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnChapterSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnChapterSelendok(); 
	//int			OnChapterSetfocus(); 
	//int			OnChapterKillfocus(); 
	int			OnChapterLoadData(); 
	int			OnChapterAddNew(); 
	int			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnGroupSelendok(); 
	//int			OnGroupSetfocus(); 
	//int			OnGroupKillfocus(); 
	int			OnGroupLoadData(); 
	int			OnGroupAddNew(); 
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
	int			OnChapterButtonSelect(); 
	int			OnGroupButtonSelect(); 
	CHMSICD10Setup(CWnd *pParent);
	~CHMSICD10Setup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSICD10(); 
	int OnEditHMSICD10(); 
	int OnDeleteHMSICD10(); 
	int OnSaveHMSICD10(); 
	int OnCancelHMSICD10(); 
	int OnHMSICD10ListLoadData(); 
	void Refresh();
};
#endif
