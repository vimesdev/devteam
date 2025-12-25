#ifndef HMSTESTPROFILEDIALOG_H
#define HMSTESTPROFILEDIALOG_H

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
class CHMSTestProfileDialog : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndTestProfiles;
	CGuiListCtrl	m_wndProfileList;
	CGuiListCtrl	m_wndItemList;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndGroupsearchLabel;
	CGuiTextCtrl	m_wndGroupsearch;
	CGuiLabel		m_wndUser;
	CGuiTextCtrl	m_wndUsersearch;
	CGuiButton		m_wndSearch;
	CString	m_szGroupKey;
	CString	m_szNameKey;
	long	m_nQty;
	CString	m_szProfileID;
	CString	m_szGroupsearch;
	CString	m_szUsersearch;
	CDbfMap	m_hms_testprofileTbl;

	long			OnProfileListLoadData(); 
	void			OnProfileListSelectChange(int nOldItem, int nNewItem); 
	void			OnProfileListDblClick(); 
	int			OnProfileListAddItem(); 
	int			OnProfileListDeleteItem(); 
	long			OnItemListLoadData(); 
	void			OnItemListSelectChange(int nOldItem, int nNewItem); 
	void			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus();
	int			OnGroupsearchCheckValue(); 
	int			OnQtyCheckValue();
	int			OnUsersearchCheckValue();
	void		OnGroupsearchChange();
	void		OnUsersearchChange();
	void			OnSearchSelect(); 
	void			OnAddSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSTestProfileDialog(CWnd *pParent);
	~CHMSTestProfileDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTestProfileDialog(); 
	int OnEditHMSTestProfileDialog(); 
	int OnDeleteHMSTestProfileDialog(); 
	int OnSaveHMSTestProfileDialog(); 
	int OnCancelHMSTestProfileDialog(); 
	int OnHMSTestProfileDialogListLoadData(); 
};
#endif
