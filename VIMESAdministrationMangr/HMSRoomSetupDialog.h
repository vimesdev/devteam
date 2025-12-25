#ifndef HMSRoomSetupDialog_H
#define HMSRoomSetupDialog_H

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

class CHMSRoomSetupDialog : public CGuiDialog
{
protected:
public:
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndRoomList;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndSectionLabel;
	CGuiTextCtrl	m_wndSection;
	CGuiLabel		m_wndZoneLabel;
	CGuiComboBox	m_wndZone;
	CGuiCheckBox	m_wndActive;
	CGuiCheckBox	m_wndSOD;
	CGuiLabel		m_wndExamTypeLabel;
	CGuiComboBox	m_wndExamType;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroupType;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndAdressLabel;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndexNo;
	CGuiLabel		m_wndDescription;
	CGuiTextCtrl	m_wndMo_ta;
	CGuiLabel		m_wndBckhthLabel;
	CGuiComboBox	m_wndBckhth;
	CGuiLabel		m_wndChuyenkhoaLabel;
	CGuiComboBox	m_wndChuyenkhoa;
	CGuiCheckBox	m_wndForOutpatient;
	
	int		m_nID;
	CString	m_szDeptID;
	CString	m_szName;
	CString	m_szTypeKey;
	CString	m_szSection;
	CString	m_szZoneKey;
	BOOL	m_bActive;
	BOOL	m_bSOD;
	CDbfMap	m_hms_roomlistTbl;
	CString	m_szExamTypeKey;
	CString	m_szGroupTypeKey;
	CString	m_szAddress;
	long	m_nIndexNo;
	CString	m_szMo_ta;
	CString	m_szBckhthKey;
	CString	m_szChuyenkhoaKey;
	BOOL	m_bForOutpatient;
	
	long		OnExamTypeLoadData();
	void			OnAddSelect();
	void			OnEditSelect();
	void			OnDeleteSelect();
	void			OnSaveSelect();
	void			OnCancelSelect();
	long			OnRoomListLoadData();
	void			OnRoomListSelectChange(int nOldItem, int nNewItem);
	void			OnRoomListDblClick();
	int			OnRoomListDeleteItem();
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue();
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTypeSelendok();
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData();
	void			OnTypeAddNew();
	//void			OnSectionChange(); 
	//void			OnSectionSetfocus(); 
	//void			OnSectionKillfocus(); 
	int			OnSectionCheckValue();
	int			OnZoneCheckValue();
	long		OnZoneLoadData();
	long	    OnGroupTypeLoadData();
	int			OnAddressCheckValue();
	int			OnIndexNoCheckValue();
	long			OnBckhthLoadData();
	void			OnForOutpatientSelect(); 
	CHMSRoomSetupDialog(CWnd* pParent);
	~CHMSRoomSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSRoomSetupDialog();
	int OnEditHMSRoomSetupDialog();
	int OnDeleteHMSRoomSetupDialog();
	int OnSaveHMSRoomSetupDialog();
	int OnCancelHMSRoomSetupDialog();
	int OnHMSRoomSetupDialogListLoadData();
	void OnRoomListSearch();
	int			OnMo_taCheckValue();
	long			OnChuyenkhoaLoadData();
};

#endif