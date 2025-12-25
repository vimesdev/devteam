#ifndef CATEGORYSETUPDIALOG_H
#define CATEGORYSETUPDIALOG_H

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
class CCategorySetupDialog : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndCategoryList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndCategoryIDLabel;
	CGuiTextCtrl	m_wndCategoryID;
	CGuiLabel		m_wndCategoryNameLabel;
	CGuiTextCtrl	m_wndCategoryName;
	CGuiLabel		m_wndEquipmentIDLabel;
	CGuiComboBox	m_wndEquipmentID;
	CGuiLabel		m_wndTypeIDLabel;
	CGuiComboBox	m_wndTypeID;
	CGuiLabel		m_wndGroupIDLabel;
	CGuiComboBox	m_wndGroupID;
	CGuiLabel		m_wndDeprMethodLabel;
	CGuiComboBox	m_wndDeprMethod;
	CGuiLabel		m_wndCreditAccountLabel;
	CGuiComboBox	m_wndCreditAccount;
	CGuiLabel		m_wndDebitAccountLabel;
	CGuiComboBox	m_wndDebitAccount;
	CString	m_szCategoryID;
	CString	m_szCategoryName;
	CString	m_szTypeIDKey;
	CString	m_szEquipmentIDKey;
	CString	m_szGroupIDKey;
	CString	m_szDeprMethodKey;
	CString	m_szCreditAccountKey;
	CString	m_szDebitAccountKey;
	int m_nIndex;
	CDbfMap	m_fam_categoryTbl;
	long			OnCategoryListLoadData(); 
	void			OnCategoryListSelectChange(int nOldItem, int nNewItem); 
	void			OnCategoryListDblClick(); 
	int			OnCategoryListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	//void			OnCategoryIDChange(); 
	//void			OnCategoryIDSetfocus(); 
	//void			OnCategoryIDKillfocus(); 
	int			OnCategoryIDCheckValue(); 
	//void			OnCategoryNameChange(); 
	//void			OnCategoryNameSetfocus(); 
	//void			OnCategoryNameKillfocus(); 
	int			OnCategoryNameCheckValue(); 
	void			OnTypeIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeIDSelendok(); 
	//void			OnTypeIDSetfocus(); 
	//void			OnTypeIDKillfocus(); 
	long			OnTypeIDLoadData(); 
	void			OnTypeIDAddNew(); 
	void			OnEquipmentIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEquipmentIDSelendok(); 
	//void			OnEquipmentIDSetfocus(); 
	//void			OnEquipmentIDKillfocus(); 
	long			OnEquipmentIDLoadData(); 
	//void			OnEquipmentIDAddNew();
	void			OnGroupIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupIDSelendok(); 
	//void			OnGroupIDSetfocus(); 
	//void			OnGroupIDKillfocus(); 
	long			OnGroupIDLoadData(); 
	//void			OnGroupIDAddNew(); 
	void			OnDeprMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeprMethodSelendok(); 
	//void			OnDeprMethodSetfocus(); 
	//void			OnDeprMethodKillfocus(); 
	long			OnDeprMethodLoadData(); 
	void			OnDeprMethodAddNew(); 
	void			OnCreditAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCreditAccountSelendok(); 
	//void			OnCreditAccountSetfocus(); 
	//void			OnCreditAccountKillfocus(); 
	long			OnCreditAccountLoadData(); 
	void			OnCreditAccountAddNew(); 
	void			OnDebitAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDebitAccountSelendok(); 
	//void			OnDebitAccountSetfocus(); 
	//void			OnDebitAccountKillfocus(); 
	long			OnDebitAccountLoadData(); 
	void			OnDebitAccountAddNew(); 
	void			SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);

	CCategorySetupDialog(CWnd *pParent);
	~CCategorySetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCategorySetupDialog(); 
	int OnEditCategorySetupDialog(); 
	int OnDeleteCategorySetupDialog(); 
	int OnSaveCategorySetupDialog(); 
	int OnCancelCategorySetupDialog(); 
	int OnCategorySetupDialogListLoadData(); 
};
#endif
