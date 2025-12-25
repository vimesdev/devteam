#ifndef HMSHTMLFORMSETUPDIALOG_H
#define HMSHTMLFORMSETUPDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSHtmlFormSetupDialog : public CGuiDialog
{
protected:
	CString			m_szTableName;
public:
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndFind;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndPrintFileLabel;
	CGuiTextCtrl	m_wndPrintFile;
	CGuiLabel		m_wndDataViewLabel;
	CGuiTextCtrl	m_wndDataView;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiCheckBox	m_wndActive;
	CGuiCheckBox	m_wndIsView;
	CGuiCheckBox	m_wndIsMultSheet;
	CGuiCheckBox	m_wndInOpt;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndCategorySearchLabel;
	CGuiComboBox	m_wndCategorySearch;
	CGuiCheckBox	m_wndTT32;
	CString	m_szSearch;
	CString	m_szID;
	CString	m_szName;
	CString	m_szModuleKey;
	CString	m_szDeptKey;
	CString	m_szCategoryKey;
	CString	m_szPrintFile;
	CString	m_szDataView;
	long	m_nIndex;
	BOOL	m_bActive;
	BOOL	m_bIsView;
	BOOL	m_bIsMultiSheet;
	BOOL	m_bInOpt;
	CDbfMap	m_hms_html_form_setupTbl;
	CString	m_szCategorySearchKey;
	BOOL	m_bTT32;
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnFindSelect(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnModuleSelendok(); 
	//void			OnModuleSetfocus(); 
	//void			OnModuleKillfocus(); 
	long			OnModuleLoadData(); 
	//void			OnModuleAddNew(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	//void			OnDeptAddNew(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	//void			OnCategoryAddNew(); 
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	void			OnActiveSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSHtmlFormSetupDialog(CWnd *pParent);
	~CHMSHtmlFormSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSHtmlFormSetupDialog(); 
	int OnEditHMSHtmlFormSetupDialog(); 
	int OnDeleteHMSHtmlFormSetupDialog(); 
	int OnSaveHMSHtmlFormSetupDialog(); 
	int OnCancelHMSHtmlFormSetupDialog(); 
	int OnHMSHtmlFormSetupDialogListLoadData();
	long			OnCategorySearchLoadData();
	void			OnCategorySearchSelendok();
	void OnTT32Select();
	void SetCheckData(CGuiComboBox* pCombo, CString szData);
};
#endif
