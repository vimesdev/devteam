#ifndef HMSPERFORROOMSETUPDLG_H
#define HMSPERFORROOMSETUPDLG_H

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
class AFX_EXT_CLASS CHMSPerforRoomSetupDlg : public CGuiDialog
{
protected:
	CString m_szPermGroupID;
public:
	CGuiGroupBox	m_wndFeeInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiListCtrl	m_wndPrefromRoom;
	CGuiLabel		m_wndFeeGroupLabel;
	CGuiComboBox	m_wndFeeGroup;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiComboBox	m_wndWorkplace;
	CGuiLabel		m_wndPrefromDeptLabel;
	CGuiComboBox	m_wndPrefromDept;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szName;
	CString	m_szFeeGroupKey;
	CString	m_szWorkplaceKey;
	CString	m_szPrefromDeptKey;
	CString m_szFeeID;
	CString m_szItemName;
	CString m_szItemID;
	CString m_szTmpz;
	CString m_szClassify;
	CString m_szExcludeObjs;
	CString m_szEmegencyRoom;
	float m_nRatio;
	long m_nLimited;
	int m_nRoomID;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	long			OnPrefromRoomLoadData(); 
	void			OnPrefromRoomSelectChange(int nOldItem, int nNewItem); 
	void			OnPrefromRoomDblClick(); 
	int			OnPrefromRoomDeleteItem(); 
	void			OnFeeGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeGroupSelendok(); 
	//void			OnFeeGroupSetfocus(); 
	//void			OnFeeGroupKillfocus(); 
	long			OnFeeGroupLoadData(); 
	//void			OnFeeGroupAddNew(); 
	void			OnWorkplaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWorkplaceSelendok(); 
	//void			OnWorkplaceSetfocus(); 
	//void			OnWorkplaceKillfocus(); 
	long			OnWorkplaceLoadData(); 
	//void			OnWorkplaceAddNew(); 
	void			OnPrefromDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPrefromDeptSelendok(); 
	//void			OnPrefromDeptSetfocus(); 
	//void			OnPrefromDeptKillfocus(); 
	long			OnPrefromDeptLoadData(); 
	//void			OnPrefromDeptAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
		int			OnListSelectAllItem(); 
	int			OnListUnSelectAllItem();
	int			OnPrefromDeptSelectAllItem(); 
	int			OnPrefromDeptUnSelectAllItem();
	void OnResizeLayout();
	CHMSPerforRoomSetupDlg(CWnd *pParent);
	~CHMSPerforRoomSetupDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPerforRoomSetupDlg(); 
	int OnEditHMSPerforRoomSetupDlg(); 
	int OnDeleteHMSPerforRoomSetupDlg(); 
	int OnSaveHMSPerforRoomSetupDlg(); 
	int OnCancelHMSPerforRoomSetupDlg(); 
	int OnHMSPerforRoomSetupDlgListLoadData(); 
};
#endif
