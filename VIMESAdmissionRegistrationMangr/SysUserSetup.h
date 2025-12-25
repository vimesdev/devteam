#ifndef SYSUSERSETUP_H
#define SYSUSERSETUP_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company 2008-2010.			
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
//	Ban quyen cua Cong Ty Co Phan Thiet Bi Va Cong Nghe Tin Hoc Y Te MITECO., JSC. 2006-2008.
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
class CSysUserSetup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndUserInformation;
	CGuiGroupBox	m_wndPermissionInformation;
	CGuiListCtrl	m_wndUserList;
	CGuiListCtrl	m_wndPermList;
	CGuiLabel		m_wndSearchDeptLabel;
	CGuiComboBox	m_wndSearchDept;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndUserIDLabel;
	CGuiTextCtrl	m_wndUserID;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndUserNameLabel;
	CGuiTextCtrl	m_wndUserName;
	CGuiLabel		m_wndPasswordLabel;
	CGuiTextCtrl	m_wndPassword;
	CGuiLabel		m_wndConfirmLabel;
	CGuiTextCtrl	m_wndConfirm;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndApply;
	CString	m_szSearchDeptKey;
	CString	m_szSearchName;
	CString	m_szDepartmentKey;
	CString	m_szRoomKey;
	CString	m_szUserID;
	CString	m_szGroupKey;
	CString	m_szUserName;
	CString	m_szPassword;
	CString	m_szConfirm;
	CString m_szModules;
	
	CString	m_szEMModule;
	CString	m_szRMModule;
	CString	m_szTMModule;
	CString	m_szHFModule;
	CString	m_szPMModule;
	CString	m_szPACSModule;
	CString	m_szSysModule;
	CString	m_szCurrentPassword;

	CString	m_szLIMSModule;
	CDbfMap	m_sys_userTbl;
	CDbfMap	m_sys_userpermTbl;
	long			OnUserListLoadData(); 
	void			OnUserListSelectChange(int nOldItem, int nNewItem); 
	void			OnUserListDblClick(); 
	int			OnUserListPermission(); 
	int			OnUserListAddSignature(); 
	long			OnPermListLoadData(); 
	void			OnPermListSelectChange(int nOldItem, int nNewItem); 
	void			OnPermListDblClick(); 
	int			OnPermListDeleteItem(); 
	void			OnPermListChange(); 
	void			OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchDeptSelendok(); 
	//void			OnSearchDeptSetfocus(); 
	//void			OnSearchDeptKillfocus(); 
	long			OnSearchDeptLoadData(); 
	void			OnSearchDeptAddNew(); 
	void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	void			OnRoomAddNew(); 
	//void			OnUserIDChange(); 
	//void			OnUserIDSetfocus(); 
	//void			OnUserIDKillfocus(); 
	int			OnUserIDCheckValue(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	//void			OnUserNameChange(); 
	//void			OnUserNameSetfocus(); 
	//void			OnUserNameKillfocus(); 
	int			OnUserNameCheckValue(); 
	//void			OnPasswordChange(); 
	//void			OnPasswordSetfocus(); 
	//void			OnPasswordKillfocus(); 
	int			OnPasswordCheckValue(); 
	//void			OnConfirmChange(); 
	//void			OnConfirmSetfocus(); 
	//void			OnConfirmKillfocus(); 
	int			OnConfirmCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnApplySelect(); 
	int				OnUserAdditionPermission();
	int			OnUserListStockPermission();
	CSysUserSetup(CWnd* pParent);
	~CSysUserSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSysUserSetup(); 
	int OnEditSysUserSetup(); 
	int OnDeleteSysUserSetup(); 
	int OnSaveSysUserSetup(); 
	int OnCancelSysUserSetup(); 
	int OnSysUserSetupListLoadData(); 
	void SetModules(LPCTSTR lpszModule) { m_szModules = lpszModule; }
	void Refresh();
};
#endif
