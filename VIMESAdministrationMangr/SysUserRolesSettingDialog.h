#ifndef SysUserRolesSettingDialog_H
#define SysUserRolesSettingDialog_H

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
#include "SysUserRolesDialog.h"
#include "SysUserRolesList.h"
#include "SysUserRolesPermisionList.h"
#include "SysUserRoleStoragePermList.h"
class CSysUserRolesSettingDialog : public CGuiDialog{
protected:
public:
	CGuiTabCtrl	m_wndRoles;
	CGuiTabCtrl	m_wndPermissions;
	CGuiListCtrl	m_wndUsers;
	CGuiButton		m_wndAddUsers;
	CGuiButton		m_wndClose;
	CGuiButton      m_wndDelete;

	CSysUserRolesList m_wndSysURL;
	CSysUserRolesPermisionList m_wndSysURPList;
	CSysUserRoleStoragePermList m_wndSysURStoragePermList;
	CString m_szRoleID;
	CString m_szTmp;
	CString m_szCurUser;
	long			OnRolesLoadData(); 
	void			OnRolesSelectChange(int nOldItem, int nNewItem); 
	void			OnRolesDblClick(); 
	int			OnRolesDeleteItem(); 
	void			OnPermissionsSelectChange(int nOld, int nNew); 
	long			OnUsersLoadData(); 
	void			OnUsersSelectChange(int nOldItem, int nNewItem); 
	void			OnUsersDblClick(); 
	int			OnUsersDeleteItem(); 
	void			OnAddUsersSelect(); 
	void			OnCloseSelect(); 
	void			OnDeleteSelect();
	CSysUserRolesSettingDialog(CWnd *pParent);
	~CSysUserRolesSettingDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSysUserRolesSettingDialog(); 
	int OnEditSysUserRolesSettingDialog(); 
	int OnDeleteSysUserRolesSettingDialog(); 
	int OnSaveSysUserRolesSettingDialog(); 
	int OnCancelSysUserRolesSettingDialog(); 
	int OnSysUserRolesSettingDialogListLoadData(); 
};
#endif
