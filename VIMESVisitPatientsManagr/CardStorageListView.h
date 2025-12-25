#ifndef CardStorageListView_H
#define CardStorageListView_H

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
#include "GuiView.h"
#include "DbField.h"
#include "GridListView.h"
class CCardStorageListView : public CGuiView
{
protected:
public:
	long	m_nID;
	CString		m_szStatus;

	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndCustomerNameLabel;
	CGuiTextCtrl	m_wndCustomerName;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndCardNumberLabel;
	CGuiTextCtrl	m_wndCardNumber;
	CGuiLabel		m_wndUIDLabel;
	CGuiNumberCtrl	m_wndUID;
	CGuiLabel		m_wndCardTypeLabel;
	CGuiComboBox	m_wndCardType;
	CGuiLabel		m_wndStatus;
	CGuiRadioButton	m_wndPendingOption;
	CGuiRadioButton	m_wndRegistedOption;
	CGuiRadioButton	m_wndTerminateOption;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndSearch;
	CGuiButton		m_wndClear;
	CGuiButton		m_wndRegister;
	CGuiButton		m_wndTerminate;
	CGridListView	m_wndList;
	CGuiLabel		m_wndLoaithe_label;
	CGuiComboBox	m_wndloaithe;
	CGuiLabel		m_wndKhoa_Label;
	CGuiComboBox	m_wndKhoa;
	CGuiLabel		m_wndSothe_Label;
	CGuiTextCtrl	m_wndSothe;
	CGuiLabel		m_wndSothe_Morong_Label;
	CGuiTextCtrl	m_wndSotheMorong;
	CGuiCheckBox	m_wndHoatDong;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiRadioButton	m_wndAllOption;
	
	CString	m_szCustomerName;
	CString	m_szPhone;
	CString	m_szDepartmentKey;
	CString	m_szCardNumber;
	CString	m_szCardTypeKey;
	long	m_nUID;
	CString	m_szloaitheKey;
	CString	m_szKhoaKey;
	CString	m_szSothe;
	CString	m_szSothe_Old;
	CString	m_szSotheMorong;
	CString	m_szSotheMorong_Old;
	BOOL	m_bHoatDong;	
	CString	m_szFromDate;
	CString	m_szToDate;
	int	m_nStatusOption;
	int	m_nPendingOption;
	int	m_nTerminateOption;
	int	m_nAllOption;
	CDbfMap	m_hms_card_settingTbl;
	//void			OnCustomerNameChange(); 
	//void			OnCustomerNameSetfocus(); 
	//void			OnCustomerNameKillfocus(); 
	int			OnCustomerNameCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	long			OnCardTypeLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnCardNumberChange(); 
	//void			OnCardNumberSetfocus(); 
	//void			OnCardNumberKillfocus(); 
	int			OnCardNumberCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnUIDChange(); 
	//void			OnUIDSetfocus(); 
	//void			OnUIDKillfocus(); 
	int			OnUIDCheckValue(); 

	void			OnPendingOptionSelect(); 
	void			OnRegistedOptionSelect(); 
	void			OnTerminateOptionSelect(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnSearchSelect(); 
	void			OnClearSelect(); 
	void			OnRegisterSelect(); 
	void			OnTerminateSelect();
	void			OnAllOptionSelect();
	

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	
	int			OnListRegisterItem(); 
	int			OnListEditItem(); 
	int			OnListTerminateItem(); 
	int			OnListPrintItem(long nId = 0); 
	int			OnListRollbackItem(); 
	int			OnListRevokeItem();

	void			OnloaitheSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnloaitheSelendok(); 
	//void			OnloaitheSetfocus(); 
	//void			OnloaitheKillfocus(); 
	long			OnloaitheLoadData(); 
	//void			OnloaitheAddNew(); 
	void			OnKhoaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnKhoaSelendok(); 
	//void			OnKhoaSetfocus(); 
	//void			OnKhoaKillfocus(); 
	long			OnKhoaLoadData(); 
	//void			OnKhoaAddNew(); 
	//void			OnSotheChange(); 
	//void			OnSotheSetfocus(); 
	//void			OnSotheKillfocus(); 
	int			OnSotheCheckValue(); 
	//void			OnSotheMorongChange(); 
	//void			OnSotheMorongSetfocus(); 
	//void			OnSotheMorongKillfocus(); 
	int			OnSotheMorongCheckValue(); 
	void			OnHoatDongSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 

	CCardStorageListView();
	~CCardStorageListView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCardStorageListView(); 
	int OnEditCardStorageListView(); 
	int OnDeleteCardStorageListView(); 
	int OnSaveCardStorageListView(); 
	int OnCancelCardStorageListView(); 
	int OnCardStorageListViewListLoadData(); 
	void OnResizeLayout();
	BOOL PreTranslateMessage(MSG *pMsg);
	CString		GetOrderStatus();
};
#endif