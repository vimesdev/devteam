#ifndef ARQUOTEDIALOG_H
#define ARQUOTEDIALOG_H

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
#include "GridListCtrl.h"
#include "AccCashInput.h"

class CARQuoteDialog : public CGuiDialog{
protected:
public:
	CAccCashInput	m_wndInput;

	CString			m_szID;
	CString			m_szStatus;
	CString			m_szPosted;
	CString			m_szCustomerTypeKey;

	CGuiGroupBox	m_wndQuoteInformation;
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndLines;
	CGuiLabel		m_wndQuoteNoLabel;
	CGuiTextCtrl	m_wndQuoteNo;
	CGuiLabel		m_wndQuoteDateLabel;
	CGuiDateCtrl	m_wndQuoteDate;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiLabel		m_wndExchangeRateLabel;
	CGuiNumberCtrl	m_wndExchangeRate;
	CGuiLabel		m_wndSalesPersonLabel;
	CGuiComboBox	m_wndSalesPerson;
	CGuiLabel		m_wndCustomerLabel;
	CGuiComboBox	m_wndCustomer;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndContactNameLabel;
	CGuiTextCtrl	m_wndContactName;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndPaymentTermsLabel;
	CGuiComboBox	m_wndPaymentTerms;
	CGuiLabel		m_wndExpirationDateLabel;
	CGuiDateCtrl	m_wndExpirationDate;
	CGuiLabel		m_wndTransportMethodLabel;
	CGuiComboBox	m_wndTransportMethod;
	CGuiLabel		m_wndDeliveryDateLabel;
	CGuiDateCtrl	m_wndDeliveryDate;
	CGridListCtrl	m_wndList;
	CGuiLabel		m_wndMemoLabel;
	CGuiTextCtrl	m_wndMemo;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiLabel		m_wndNetAmountLabel;
	CGuiNumberCtrl	m_wndNetAmount;
	CGuiLabel		m_wndTaxesAmountLabel;
	CGuiNumberCtrl	m_wndTaxesAmount;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndTotalExchangeAmountLabel;
	CGuiNumberCtrl	m_wndTotalExchangeAmount;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndUtilities;
	CString	m_szQuoteNo;
	CString	m_szQuoteDate;
	CString	m_szCurrencyKey;
	long	m_nExchangeRate;
	CString	m_szSalesPersonKey;
	CString	m_szCustomerKey;
	CString	m_szAddress;
	CString	m_szContactName;
	CString	m_szPhone;
	CString	m_szPaymentTermsKey;
	CString	m_szExpirationDate;
	CString	m_szTransportMethodKey;
	CString	m_szDeliveryDate;
	CString	m_szMemo;
	CString	m_szReference;
	long	m_nNetAmount;
	long	m_nTaxesAmount;
	long	m_nAmount;
	long	m_nTotalExchangeAmount;

	CDbfMap	m_ar_quoteTbl;

	//void			OnQuoteNoChange(); 
	//void			OnQuoteNoSetfocus(); 
	//void			OnQuoteNoKillfocus(); 
	int			OnQuoteNoCheckValue(); 
	//void			OnQuoteDateChange(); 
	//void			OnQuoteDateSetfocus(); 
	//void			OnQuoteDateKillfocus(); 
	int			OnQuoteDateCheckValue(); 
	void			OnCurrencySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCurrencySelendok(); 
	//void			OnCurrencySetfocus(); 
	//void			OnCurrencyKillfocus(); 
	long			OnCurrencyLoadData(); 
	//void			OnCurrencyAddNew(); 
	//void			OnExchangeRateChange(); 
	//void			OnExchangeRateSetfocus(); 
	//void			OnExchangeRateKillfocus(); 
	int			OnExchangeRateCheckValue(); 
	void			OnSalesPersonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSalesPersonSelendok(); 
	//void			OnSalesPersonSetfocus(); 
	//void			OnSalesPersonKillfocus(); 
	long			OnSalesPersonLoadData(); 
	//void			OnSalesPersonAddNew(); 
	void			OnCustomerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCustomerSelendok(); 
	//void			OnCustomerSetfocus(); 
	//void			OnCustomerKillfocus(); 
	long			OnCustomerLoadData(); 
	//void			OnCustomerAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnContactNameChange(); 
	//void			OnContactNameSetfocus(); 
	//void			OnContactNameKillfocus(); 
	int			OnContactNameCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	void			OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentTermsSelendok(); 
	//void			OnPaymentTermsSetfocus(); 
	//void			OnPaymentTermsKillfocus(); 
	long			OnPaymentTermsLoadData(); 
	//void			OnPaymentTermsAddNew(); 
	//void			OnExpirationDateChange(); 
	//void			OnExpirationDateSetfocus(); 
	//void			OnExpirationDateKillfocus(); 
	int			OnExpirationDateCheckValue(); 
	void			OnTransportMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransportMethodSelendok(); 
	//void			OnTransportMethodSetfocus(); 
	//void			OnTransportMethodKillfocus(); 
	long			OnTransportMethodLoadData(); 
	//void			OnTransportMethodAddNew(); 
	//void			OnDeliveryDateChange(); 
	//void			OnDeliveryDateSetfocus(); 
	//void			OnDeliveryDateKillfocus(); 
	int			OnDeliveryDateCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListDeleteItem(); 
	//void			OnMemoChange(); 
	//void			OnMemoSetfocus(); 
	//void			OnMemoKillfocus(); 
	int			OnMemoCheckValue(); 
	//void			OnReferenceChange(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	//void			OnNetAmountChange(); 
	//void			OnNetAmountSetfocus(); 
	//void			OnNetAmountKillfocus(); 
	int			OnNetAmountCheckValue(); 
	//void			OnTaxesAmountChange(); 
	//void			OnTaxesAmountSetfocus(); 
	//void			OnTaxesAmountKillfocus(); 
	int			OnTaxesAmountCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnTotalExchangeAmountChange(); 
	//void			OnTotalExchangeAmountSetfocus(); 
	//void			OnTotalExchangeAmountKillfocus(); 
	int			OnTotalExchangeAmountCheckValue(); 
	void			OnAddLineSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnPostSelect(); 
	void			OnUtilitiesSelect(); 
	CARQuoteDialog(CWnd *pParent, int nMode);
	~CARQuoteDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddARQuoteDialog(); 
	int OnEditARQuoteDialog(); 
	int OnDeleteARQuoteDialog(); 
	int OnSaveARQuoteDialog(); 
	int OnCancelARQuoteDialog(); 
	int OnARQuoteDialogListLoadData(); 

	void	RecalcTotalAmount();
	bool	OnCloseWindow();
};
#endif
