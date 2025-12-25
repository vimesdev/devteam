#ifndef CUSTOMERVISITLISTVIEW_H
#define CUSTOMERVISITLISTVIEW_H

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
class CCustomerVisitListView : public CGuiView{
protected:
public:
	CGuiButton		m_wndSearch;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndCardTypeLabel;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiComboBox	m_wndCardType;
	CGuiLabel		m_wndCardNumberLabel;
	CGuiTextCtrl	m_wndCardNumber;
	CGuiButton		m_wndClear;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndUIDLabel;
	CGuiNumberCtrl	m_wndUID;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiButton		m_wndRegister;
	CGuiLabel		m_wndStatus;
	CGuiRadioButton	m_wndPendingOption;
	CGuiRadioButton	m_wndTerminateOption;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndTerminate;
	CString	m_szDepartmentKey;
	CString	m_szCardTypeKey;
	CString	m_szCardNumber;
	CString	m_szPatientName;
	long	m_nUID;
	CString	m_szPhone;
	int	m_nPendingOption;
	int	m_nTerminateOption;
	CString	m_szFromDate;
	CString	m_szToDate;
	void			OnSearchSelect(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCardTypeSelendok(); 
	//void			OnCardTypeSetfocus(); 
	//void			OnCardTypeKillfocus(); 
	long			OnCardTypeLoadData(); 
	//void			OnCardTypeAddNew(); 
	//void			OnCardNumberChange(); 
	//void			OnCardNumberSetfocus(); 
	//void			OnCardNumberKillfocus(); 
	int			OnCardNumberCheckValue(); 
	void			OnClearSelect(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnUIDChange(); 
	//void			OnUIDSetfocus(); 
	//void			OnUIDKillfocus(); 
	int			OnUIDCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	void			OnRegisterSelect(); 
	void			OnPendingOptionSelect(); 
	void			OnTerminateOptionSelect(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnTerminateSelect(); 
	CCustomerVisitListView();
	~CCustomerVisitListView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCustomerVisitListView(); 
	int OnEditCustomerVisitListView(); 
	int OnDeleteCustomerVisitListView(); 
	int OnSaveCustomerVisitListView(); 
	int OnCancelCustomerVisitListView(); 
	int OnCustomerVisitListViewListLoadData(); 
};
#endif
