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
#include "GuiView.h"
#include "DbField.h"
#include "DbfMapParser.h"

class CSysUserSetup : public CGuiView {
protected:
	CString	m_szUserStatus;
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mSkipPermID;
	CDbfMapParser	m_parser;
public:
	CGuiGroupBox	m_wndUserInformation;
	CGuiGroupBox	m_wndPermissionInformation;
	CGuiListCtrl	m_wndUserList;
	CGuiListCtrl	m_wndPermList;
	CGuiLabel		m_wndSearchDeptLabel;
	CGuiComboBox	m_wndSearchDept;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiCheckBox	m_wndInactiveUser;
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
	CGuiLabel		m_wndCertificateLabel;
	CGuiTextCtrl	m_wndCertificate;
	CGuiLabel		m_wndZoneLabel;
	CGuiTextCtrl	m_wndZone;
	CGuiLabel		m_wndSignIDLabel;
	CGuiTextCtrl	m_wndSignID;
	CGuiLabel		m_wndSignCertLabel;
	CGuiComboBox	m_wndSignPart;
	CGuiPictureCtrl		m_wndSignImage;
	CGuiPictureCtrl		m_wndSign2Image;
	CGuiLabel		m_wndSoBHYTLabel;
	CGuiTextCtrl	m_wndSoBHYT;
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndTitleLabel;
	CGuiComboBox	m_wndTitle;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndAddGroup;

	CString	m_szSearchDeptKey;
	CString	m_szSearchName;
	BOOL	m_bInactiveUser;
	CString	m_szDepartmentKey;
	CString	m_szRoomKey;
	CString	m_szUserID;
	CString	m_szGroupKey;
	CString	m_szUserName;
	CString	m_szPassword;
	CString	m_szConfirm;
	CString m_szCertificate;
	CString	m_szZone;
	CString	m_szSignID;
	CString	m_szSignPartKey;
	CString m_szModules;

	CString m_szSignImage;
	CString m_szSignImage2;
	CString	m_szPositionKey;

	CString	m_szEMModule;
	CString	m_szRMModule;
	CString	m_szTMModule;
	CString	m_szHFModule;
	CString	m_szPMModule;
	CString	m_szPACSModule;
	CString m_szSMModule;
	CString	m_szSysModule;
	CString	m_szMMModule;
	CString	m_szWMModule;
	CString	m_szLIMSModule;
	CString m_szARModule;
	CString m_szMAModule;
	CString	m_szBBModule;
	CString m_szFAMModule;
	CString m_szSIPModule;
	CString m_szSTModule;
	CString m_szSRMModule;
	CString m_szMRAModule;
	CString m_szSM2Module;
	CString m_szSRModule;
	CString m_szVPMModule;
	CString m_szHCModule;
	CString m_szMATRECModule;
	CDbfMap	m_sys_userTbl;
	CDbfMap	m_sys_userpermTbl;
	CString	m_szSoBHYT;
	CString	m_szPosisionKey;
	CString	m_szTitleKey;

	long			OnUserListLoadData();
	int			OnUserListSelectChange(int nOldItem, int nNewItem);
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
	void		OnInactiveUserSelect();
	int			OnDuplicateUser();
	int			OnDuplicateMultiUser();
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
	int			OnUserListExamTypePermission();
	int			OnUserListPerformDeptPermission();
	int			OnUserListExport();
	int			OnZoneCheckValue();
	//void			OnSignIDChange(); 
	//void			OnSignIDSetfocus(); 
	//void			OnSignIDKillfocus(); 
	int			OnSignIDCheckValue();
	void			OnSignPartSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnSignPartSelendok();
	//void			OnSignPartSetfocus(); 
	//void			OnSignPartKillfocus(); 
	long			OnSignPartLoadData();
	//void			OnSignPartAddNew(); 
	void		OnPermListSearch();
	void		OnPermListSearchByName();
	void			OnAddGroupSelect();
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnPositionSelendok();
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData();
	//void			OnPositionAddNew(); 
	int			OnSoBHYTCheckValue();
	long		OnPosisionLoadData();
	void			OnTitleSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTitleSelendok();
	//void			OnTitleSetfocus(); 
	//void			OnTitleKillfocus(); 
	long			OnTitleLoadData();
	//void			OnTitleAddNew();
	CSysUserSetup();
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

	int OnViewSignature();
	int	OnManipulateUser();
	int OnExportSignatureUser();
	int OnCreateCertificate();
	CString GetPermListQueryString(CString szWhere);
	void SkipPermission(CGuiListCtrl* pList);
	void OnSetupAdUser();
	void OnDeleteSignature();
	CString GetQueryString_user(bool bExport = false);

	BOOL OnAddSignImage(CString szFile);
	BOOL OnEditSignImage(CString szFile);
	BOOL OnRemoveSignImage(CString szFile);

	BOOL OnAddSign2Image(CString szFile);
	BOOL OnEditSign2Image(CString szFile);
	BOOL OnRemoveSign2Image(CString szFile);

};
#endif
