#ifndef FINANCIALACCOUNTSETUPDIALOG_H
#define FINANCIALACCOUNTSETUPDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CFinancialAccountSetupDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndAccountIDLabel;
	CGuiTextCtrl	m_wndAccountID;
	CGuiLabel		m_wndAccountNameLabel;
	CGuiTextCtrl	m_wndAccountName;
	CGuiLabel		m_wndEnglishNameLabel;
	CGuiTextCtrl	m_wndEnglishName;
	CGuiLabel		m_wndAccountTypeLabel;
	CGuiComboBox	m_wndAccountType;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndParentIDLabel;
	CGuiComboBox	m_wndParentID;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiTextCtrl	m_wndCurrency;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szAccountID;
	CString	m_szAccountName;
	CString	m_szEnglishName;
	CString	m_szAccountTypeKey;
	CString	m_szCategoryKey;
	CString	m_szParentIDKey;
	CString	m_szCurrency;
	int m_nGrade;
	int m_nIndex;
	CDbfMap	m_accountTbl;
	//void			OnAccountIDChange(); 
	//void			OnAccountIDSetfocus(); 
	//void			OnAccountIDKillfocus(); 
	int			OnAccountIDCheckValue(); 
	//void			OnAccountNameChange(); 
	//void			OnAccountNameSetfocus(); 
	//void			OnAccountNameKillfocus(); 
	int			OnAccountNameCheckValue(); 
	//void			OnEnglishNameChange(); 
	//void			OnEnglishNameSetfocus(); 
	//void			OnEnglishNameKillfocus(); 
	int			OnEnglishNameCheckValue(); 
	void			OnAccountTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAccountTypeSelendok(); 
	//void			OnAccountTypeSetfocus(); 
	//void			OnAccountTypeKillfocus(); 
	long			OnAccountTypeLoadData(); 
	void			OnAccountTypeAddNew(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	void			OnCategoryAddNew(); 
	void			OnParentIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnParentIDSelendok(); 
	//void			OnParentIDSetfocus(); 
	//void			OnParentIDKillfocus(); 
	long			OnParentIDLoadData(); 
	void			OnParentIDAddNew(); 
	//void			OnCurrencyChange(); 
	//void			OnCurrencySetfocus(); 
	//void			OnCurrencyKillfocus(); 
	int			OnCurrencyCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			LoadAccount(CGuiListCtrl *pList, CString szParentID);
	void			SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);

	CFinancialAccountSetupDialog(CWnd *pParent);
	~CFinancialAccountSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFinancialAccountSetupDialog(); 
	int OnEditFinancialAccountSetupDialog(); 
	int OnDeleteFinancialAccountSetupDialog(); 
	int OnSaveFinancialAccountSetupDialog(); 
	int OnCancelFinancialAccountSetupDialog(); 
	int OnFinancialAccountSetupDialogListLoadData(); 
};
#endif
