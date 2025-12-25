#ifndef STORAGEDEFAULTSETUPDLG_H
#define STORAGEDEFAULTSETUPDLG_H

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
#include "DbfMapParser.h"
class CStorageDefaultSetupDlg : public CGuiDialog{
protected:
    CDbfMapParser m_parser;
public:
	CGuiGroupBox	m_wndInformation;
	CGuiGroupBox	m_wndListInfo;
	CGuiLabel		m_wndStorageSearchIDLabel;
	CGuiComboBox	m_wndStorageSearchID;
	CGuiLabel		m_wndSDepartmentLabel;
	CGuiComboBox	m_wndSDepartment;
	CGuiLabel		m_wndSObjectLabel;
	CGuiComboBox	m_wndSObject;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndStorageIDLabel;
	CGuiComboBox	m_wndStorageID;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndPrintTypeLabel;
	CGuiNumberCtrl	m_wndPrintType;
	CGuiLabel		m_wndDefaultLabel;
	CGuiTextCtrl	m_wndDefault;
	CGuiLabel		m_wndZoneLabel;
	CGuiTextCtrl	m_wndZone;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndInPatient;
	CString	m_szStorageSearchIDKey;
	CString	m_szSDepartmentKey;
	CString	m_szSObjectKey;
	CString	m_szStorageIDKey;
	CString	m_szDepartmentKey;
	CString	m_szObjectKey;
	CString	m_szPrintType;
	int		m_nPrintType;
	CString	m_szDefault;
	CString m_szZone;
	CDbfMap m_tblTbl;
	CString m_szCurDept;
	CString m_szCurObj;
	CString m_szCurStorageID;
	BOOL	m_bInPatient;
	CString m_szTableName;
	void			OnStorageSearchIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSearchIDSelendok(); 
	//void			OnStorageSearchIDSetfocus(); 
	//void			OnStorageSearchIDKillfocus(); 
	long			OnStorageSearchIDLoadData(); 
	//void			OnStorageSearchIDAddNew();
	void			OnSDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSDepartmentSelendok(); 
	//void			OnSDepartmentSetfocus(); 
	//void			OnSDepartmentKillfocus(); 
	long			OnSDepartmentLoadData(); 
	//void			OnSDepartmentAddNew(); 
	void			OnSObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSObjectSelendok(); 
	//void			OnSObjectSetfocus(); 
	//void			OnSObjectKillfocus(); 
	long			OnSObjectLoadData(); 
	//void			OnSObjectAddNew(); 
	void			OnSearchSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnStorageIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageIDSelendok(); 
	//void			OnStorageIDSetfocus(); 
	//void			OnStorageIDKillfocus(); 
	long			OnStorageIDLoadData(); 
	//void			OnStorageIDAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnPrintTypeChange(); 
	//void			OnPrintTypeSetfocus(); 
	//void			OnPrintTypeKillfocus(); 
	int			OnPrintTypeCheckValue(); 
	//void			OnDefaultChange(); 
	//void			OnDefaultSetfocus(); 
	//void			OnDefaultKillfocus(); 
	int			OnDefaultCheckValue(); 
	//void			OnZoneChange(); 
	//void			OnZoneSetfocus(); 
	//void			OnZoneKillfocus(); 
	int			OnZoneCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			OnInPatientSelect(); 
	CStorageDefaultSetupDlg(CWnd *pParent);
	~CStorageDefaultSetupDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageDefaultSetupDlg(); 
	int OnEditStorageDefaultSetupDlg(); 
	int OnDeleteStorageDefaultSetupDlg(); 
	int OnSaveStorageDefaultSetupDlg(); 
	int OnCancelStorageDefaultSetupDlg(); 
	int OnStorageDefaultSetupDlgListLoadData(); 
	int OnSaveStorageDefault();
};
#endif
