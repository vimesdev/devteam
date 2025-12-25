#ifndef CHMSCREATEMULTIUSER_H
#define CHMSCREATEMULTIUSER_H

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
class CCHMSCreateMultiUser : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndCreateUser;
	CGuiLabel		m_wndUserIDLabel;
	CGuiTextCtrl	m_wndUserID;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroupUser;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiLabel		m_wndNameLabel;
	CGuiListCtrl	m_wndName;
	CGuiButton		m_wndCreate;
	CGuiButton		m_wndCreateJob;
	CGuiButton		m_wndCreateStockJob;
	CGuiButton		m_wndClose;
	CString	m_szUserID, m_szOriginID;
	CString	m_szDeptKey;
	CString	m_szGroupUserKey;
	CString	m_szSearch;
	CString	m_szModuleKey;
	//void			OnUserIDChange(); 
	//void			OnUserIDSetfocus(); 
	//void			OnUserIDKillfocus(); 
	int			OnUserIDCheckValue(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	//void			OnDeptAddNew(); 
	void			OnGroupUserSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupUserSelendok(); 
	//void			OnGroupUserSetfocus(); 
	//void			OnGroupUserKillfocus(); 
	long			OnGroupUserLoadData();
	long			OnModuleLoadData(); 
	//void			OnGroupUserAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	long			OnNameLoadData(); 
	void			OnNameSelectChange(int nOldItem, int nNewItem); 
	void			OnNameDblClick(); 
	int			OnNameDeleteItem(); 
	void			OnCreateSelect();
	void			OnCreateJobSelect(); 
	void			OnCreateStockJobSelect();
	void			OnCloseSelect(); 
	void			OnListCheckAll();
	void			OnListUnCheckAll();
	CCHMSCreateMultiUser(CWnd *pParent);
	~CCHMSCreateMultiUser();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSCreateMultiUser(); 
	int OnEditCHMSCreateMultiUser(); 
	int OnDeleteCHMSCreateMultiUser(); 
	int OnSaveCHMSCreateMultiUser(); 
	int OnCancelCHMSCreateMultiUser(); 
	int OnCHMSCreateMultiUserListLoadData(); 
};
#endif