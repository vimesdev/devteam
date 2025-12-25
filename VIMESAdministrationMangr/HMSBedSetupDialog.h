#ifndef HMSBEDSETUPDIALOG_H
#define HMSBEDSETUPDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSBedSetupDialog : public CGuiDialog{
protected:
public:
	int		m_nIndex;
	CGuiGroupBox	m_wndBedInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndLimitLabel;
	CGuiNumberCtrl	m_wndLimit;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiCheckBox	m_wndDifferencePaid;
	CGuiCheckBox	m_wndInsurancePaid;
	CGuiCheckBox	m_wndPolicyPaid;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szDepartmentKey;
	CString	m_szRoomKey;
	CString	m_szName;
	CString m_szTypeKey;
	long	m_nLimit;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	BOOL	m_bDifferencePaid;
	BOOL	m_bInsurancePaid;
	BOOL	m_bPolicyPaid;
	BOOL	m_bActive;
	CDbfMap	m_hms_bedlistTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
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
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	long		OnTypeLoadData();
	//void			OnLimitChange(); 
	//void			OnLimitSetfocus(); 
	//void			OnLimitKillfocus(); 
	int			OnLimitCheckValue(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	void			OnDifferencePaidSelect(); 
	void			OnInsurancePaidSelect(); 
	void			OnPolicyPaidSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSBedSetupDialog(CWnd *pParent);
	~CHMSBedSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBedSetupDialog(); 
	int OnEditHMSBedSetupDialog(); 
	int OnDeleteHMSBedSetupDialog(); 
	int OnSaveHMSBedSetupDialog(); 
	int OnCancelHMSBedSetupDialog(); 
	int OnHMSBedSetupDialogListLoadData(); 
};
#endif
