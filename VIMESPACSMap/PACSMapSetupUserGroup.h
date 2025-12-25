#ifndef PACSMapSetupUserGroup_H
#define PACSMapSetupUserGroup_H

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
class CPACSMapSetupUserGroup : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndUserIDLabel;
	CGuiComboBox	m_wndUserID;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndRoomIDLabel;
	CGuiComboBox	m_wndRoomID;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CString	m_szUserIDKey;
	CString	m_szDepartmentKey;
	CString	m_szRoomIDKey;
	CString	m_szGroupKey;
	CDbfMap m_tbl_UserGroup;
	CString m_curUserID;
	CString m_curDeptID;
	long	m_curRoomID;
	CString m_szGroups;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnUserIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUserIDSelendok(); 
	//void			OnUserIDSetfocus(); 
	//void			OnUserIDKillfocus(); 
	long			OnUserIDLoadData(); 
	//void			OnUserIDAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnRoomIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomIDSelendok(); 
	//void			OnRoomIDSetfocus(); 
	//void			OnRoomIDKillfocus(); 
	long			OnRoomIDLoadData(); 
	//void			OnRoomIDAddNew(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	void			OnAddSelect(); 
	void			OnDeleteSelect(); 
	void			OnCloseSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	CPACSMapSetupUserGroup(CWnd *pParent);
	~CPACSMapSetupUserGroup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSMapSetupUserGroup(); 
	int OnEditPACSMapSetupUserGroup(); 
	int OnDeletePACSMapSetupUserGroup(); 
	int OnSavePACSMapSetupUserGroup(); 
	int OnCancelPACSMapSetupUserGroup(); 
	int OnPACSMapSetupUserGroupListLoadData(); 
};
#endif
