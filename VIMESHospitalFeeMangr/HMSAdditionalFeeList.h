#ifndef HMSADDITIONALFEELIST_H
#define HMSADDITIONALFEELIST_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSAdditionalFeeList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndPatientProfiles;
	CGuiGroupBox	m_wndPatientFeeInformation;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndFeeList;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAdd;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndPatientNameLable;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndAdmissionDeposit;
	CGuiButton		m_wndOtherReceipt;
	CGuiButton		m_wndOtherPayment;

	CString	m_szToDate;
	CString	m_szFromDate;
	CString	m_szFromTime;
	CString	m_szToTime;

	CString	m_szDepartmentKey;
	CString	m_szPatientName;
	CString	m_szPerformDepartmentKey;
	CString	m_szStatus;
	CString m_szAge;
	long	m_nInvoiceNo;
	long	m_nDocumentNo;
	long	m_nPatientNo;
	CString	m_szType;
	CString	m_szInvoiceType;

	//Table hms_fee_invoice
	CDbfMap	m_hms_fee_invoieceTbl;

	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	void			OnSearchSelect(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int				OnFeeListAddItem();
	int				OnFeeListEditItem();
	int				OnFeeListDeleteItem();
	
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnPrintSelect(); 
	void			OnAddSelect(); 
	void			OnOtherReceiptSelect();
	void			OnOtherPaymentSelect();

	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	void			OnPaymentPaid();
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 

	int			OnPatientListPaymentItem(); 
	int			OnPatientListPrintInvoiceItem(); 
	int			OnPatientListDepositItem();
	int			OnPatientListEditItem();

	void			OnAdmissionDepositSelect(); 
	CHMSAdditionalFeeList();
	~CHMSAdditionalFeeList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdditionalFeeList(); 
	int OnEditHMSAdditionalFeeList(); 
	int OnDeleteHMSAdditionalFeeList(); 
	int OnSaveHMSAdditionalFeeList(); 
	int OnCancelHMSAdditionalFeeList(); 
	int OnHMSAdditionalFeeListListLoadData();
	void PrintInvoice(long nInvoiceNo, bool bPreview=true, bool bDirect=false);
	void PrintDeposit(long nInvoiceNo, bool bPreview=true);
	void PrintRefund(long nInvoiceNo, bool bPreview = true);

	int OnCreateOtherFeeRefund();
	int OnPrintOtherFeeRefund();
	int OnModifyFeeItems();

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void OnResizeLayout();
};
#endif
