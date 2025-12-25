#ifndef ContractPaymentOrderDialog_H
#define ContractPaymentOrderDialog_H

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
//alter table purchase_payment add pp_payment_order_id integer;

class CContractPaymentOrderDialog : public CGuiDialog
{
protected:
	bool	m_bRefresh;
	CString m_szCreatedBy;
	CString m_szPaymentStatus;

public:
	long	m_nID;
	long double	m_nTotalAmount;
	CDbfMap	m_purchase_paymentTbl;

	CGuiGroupBox	m_wndGeneralInformation;
	CGuiLabel		m_wndPayOrderLabel;
	CGuiComboBox	m_wndPayOrder;
	CGuiLabel		m_wndResourceLabel;
	CGuiComboBox	m_wndResource;
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndDebitAcctLabel;
	CGuiComboBox	m_wndDebitAcct;
	CGuiLabel		m_wndCreditAcctLabel;
	CGuiComboBox	m_wndCreditAcct;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndAddInvoice;
	CString	m_szPayOrderKey;
	CString	m_szResourceKey;
	CString	m_szPaymentMethodKey;
	CString	m_szDebitAcctKey;
	CString	m_szCreditAcctKey;
	CString	m_szDescription;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szAccountingDate;

	void			OnPayOrderLabelClick(); 
	void			OnPayOrderSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayOrderSelendok(); 
	//void			OnPayOrderSetfocus(); 
	//void			OnPayOrderKillfocus(); 
	long			OnPayOrderLoadData(); 
	//void			OnPayOrderAddNew(); 
	void			OnResourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResourceSelendok(); 
	//void			OnResourceSetfocus(); 
	//void			OnResourceKillfocus(); 
	long			OnResourceLoadData(); 
	//void			OnResourceAddNew(); 
	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	//void			OnPaymentMethodAddNew(); 
	void			OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDebitAcctSelendok(); 
	//void			OnDebitAcctSetfocus(); 
	//void			OnDebitAcctKillfocus(); 
	long			OnDebitAcctLoadData(); 
	//void			OnDebitAcctAddNew(); 
	void			OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCreditAcctSelendok(); 
	//void			OnCreditAcctSetfocus(); 
	//void			OnCreditAcctKillfocus(); 
	long			OnCreditAcctLoadData(); 
	//void			OnCreditAcctAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnAccountingDateChange(); 
	//void			OnAccountingDateSetfocus(); 
	//void			OnAccountingDateKillfocus(); 
	int			OnAccountingDateCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnApprovalSelect(); 
	void			OnCloseSelect(); 
	void			OnAddInvoiceSelect();
	void			OnSendSelect();
	CContractPaymentOrderDialog(CWnd *pParent, int nMode);
	~CContractPaymentOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddContractPaymentOrderDialog(); 
	int OnEditContractPaymentOrderDialog(); 
	int OnDeleteContractPaymentOrderDialog(); 
	int OnSaveContractPaymentOrderDialog(); 
	int OnCancelContractPaymentOrderDialog(); 
	int OnContractPaymentOrderDialogListLoadData(); 
	int kiem_tra_sua_xoa();
	CString GetPaymentStatus();

protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
#endif
