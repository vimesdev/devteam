#ifndef MACHINELIST_H
#define MACHINELIST_H

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
class CMachineList : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndMachineListBox;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndMachineNameLabel;
	CGuiTextCtrl	m_wndMachineName;
	CGuiLabel		m_wndSohieumayLabel;
	CGuiTextCtrl	m_wndSohieumay;
	CGuiLabel		m_wndShortNameLabel;
	CGuiTextCtrl	m_wndShortName;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndQtyLabel;
	CGuiLabel		m_wndMachineCodeLabel;
	CGuiTextCtrl	m_wndMachineCode;
	CGuiLabel		m_wndSourceLabel;
	CGuiComboBox	m_wndSource;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndActive;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CString	m_szGroupKey;
	CString	m_szMachineName;
	CString	m_szShortName;
	CString	m_szSohieumay;
	long	m_nQty;
	CString	m_szMachineCode;
	CString	m_szSourceKey;
	BOOL	m_bActive;
	CDbfMap	m_hms_machine_list_for_ins;
	CString	m_szDepartmentKey;
	CString	m_szRoomKey;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick();
	void			OnActiveSelect();
	int			OnListDeleteItem(); 
	int			OnListSetupTask();
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	//void			OnMachineNameChange(); 
	//void			OnMachineNameSetfocus(); 
	//void			OnMachineNameKillfocus(); 
	int			OnMachineNameCheckValue(); 
	//void			OnShortNameChange(); 
	//void			OnShortNameSetfocus(); 
	//void			OnShortNameKillfocus(); 
	int			OnShortNameCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	//void			OnMachineCodeChange(); 
	//void			OnMachineCodeSetfocus(); 
	//void			OnMachineCodeKillfocus(); 
	int			OnMachineCodeCheckValue(); 
	//void			OnSourceChange(); 
	//void			OnSourceSetfocus(); 
	//void			OnSourceKillfocus(); 
	int			OnSourceCheckValue();
	int			OnSohieumayCheckValue();
	long			OnSourceLoadData();
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnDepartmentSelendok();
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData();
	//void			OnDepartmentAddNew(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnRoomSelendok();
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData();
	//void			OnRoomAddNew(); 
	CMachineList(CWnd *pParent);
	~CMachineList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddMachineList();
	int OnEditMachineList();
	int OnDeleteMachineList();
	int OnSaveMachineList();
	int OnCancelMachineList();
	int OnMachineListListLoadData();
};
#endif