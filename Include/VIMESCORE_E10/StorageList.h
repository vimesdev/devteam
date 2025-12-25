#ifndef STORAGELIST_H
#define STORAGELIST_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Storage Company. 2005-2010. 			
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
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CStorageList : public CGuiView{
protected:
	
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndStorageInformation;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndStorageNameLabel;
	CGuiTextCtrl	m_wndStorageName;
	CGuiButton		m_wndFind;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiListCtrl	m_wndStorageList;
	CGuiCheckBox	m_wndInactive;
	CString	m_szTypeKey;
	CString	m_szDepartmentKey;
	CString	m_szStorageName;
	int		m_nStorageID;
	BOOL	m_bInactive;
	CDbfMap	m_storagelistTbl;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	//void			OnStorageNameChange(); 
	//void			OnStorageNameSetfocus(); 
	//void			OnStorageNameKillfocus(); 
	int			OnStorageNameCheckValue(); 
	void			OnFindSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	long			OnStorageListLoadData(); 
	void			OnStorageListSelectChange(int nOldItem, int nNewItem); 
	void			OnStorageListDblClick();
	int			OnStorageListAddItem();
	int			OnStorageListEditItem();
	int			OnStorageListDeleteItem(); 
	int			OnStorageListSetActive(); 
	void		OnInactiveSelect();
	void OnResizeLayout();
	CStorageList();
	~CStorageList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageList(); 
	int OnEditStorageList(); 
	int OnDeleteStorageList(); 
	int OnSaveStorageList(); 
	int OnCancelStorageList(); 
	int OnStorageListListLoadData(); 
	void Refresh(LPCTSTR szActive=_T(""));
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};
#endif
