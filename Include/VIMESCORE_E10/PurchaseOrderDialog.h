#ifndef PURCHASEORDERDIALOG_H
#define PURCHASEORDERDIALOG_H

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
#include "PurchaseOrderLines.h"

class CPurchaseOrderDialog : public CGuiDialog{
protected:
	

public:
	CPurchaseOrderLines	m_wndLines;

	CDbfMap			m_purchase_orderTbl;
	CString			m_szSupplierTypeKey;
	int				m_nStorageID;
	int				m_nTaxID;
	long			m_nID;
	long			m_nLineIdx;
	CString			m_szStatus;
	CString			m_szPosted;
	CString			m_szType;

	CGuiGroupBox	m_wndPurchaseOrderInformation;
	CGuiGroupBox	m_wndSupplierInformation;
	CGuiGroupBox	m_wndTerms;
	CGuiGroupBox	m_wndSummary;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndDelivererLabel;
	CGuiTextCtrl	m_wndDeliverer;
	CGuiLabel		m_wndReceiverLabel;
	CGuiTextCtrl	m_wndReceiver;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndReferneceLabel;
	CGuiTextCtrl	m_wndRefernece;
	CGuiLabel		m_wndOriginalDocument;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiLabel		m_wndExchangeRateLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiNumberCtrl	m_wndExchangeRate;
	CGuiLabel		m_wndWarehouseLabel;
	CGuiComboBox	m_wndWarehouse;
	CGuiLabel		m_wndResourceLabel;
	CGuiComboBox	m_wndResource;
	CGuiLabel		m_wndDebitAcctLabel;
	CGuiComboBox	m_wndDebitAcct;
	CGuiLabel		m_wndCreditAcctLabel;
	CGuiComboBox	m_wndCreditAcct;
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndPaymentTermsLabel;
	CGuiComboBox	m_wndPaymentTerms;
	CGuiLabel		m_wndDeliveryMethodLabel;
	CGuiComboBox	m_wndDeliveryMethod;
	CGuiLabel		m_wndDeliveryDateLabel;
	CGuiDateCtrl	m_wndDeliveryDate;
	CGuiLabel		m_wndDeliveryAddressLabel;
	CGuiTextCtrl	m_wndDeliveryAddress;
	CGuiLabel		m_wndNetAmountLabel;
	CGuiNumberCtrl	m_wndNetAmount;
	CGuiLabel		m_wndTaxesAmountLabel;
	CGuiNumberCtrl	m_wndTaxesAmount;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndTotalExchangeAmountLabel;
	CGuiNumberCtrl	m_wndTotalExchangeAmount;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndPostMenu;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAddLine;
	CGuiTabCtrl	m_wndTab;
	CString	m_szSupplierKey;
	CString	m_szDeliverer;
	CString	m_szReceiver;
	CString	m_szAddress;
	CString	m_szDescription;
	CString	m_szRefernece;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szAccountingDate;
	CString	m_szCurrencyKey;
	float	m_nExchangeRate;
	CString	m_szWarehouseKey;
	CString	m_szResourceKey;
	CString	m_szDebitAcctKey;
	CString	m_szCreditAcctKey;
	CString	m_szPaymentMethodKey;
	CString	m_szPaymentTermsKey;
	CString	m_szDeliveryMethodKey;
	CString	m_szDeliveryDate;
	CString	m_szDeliveryAddress;
	double	m_nNetAmount;
	double	m_nTaxesAmount;
	double	m_nTotalAmount;
	double	m_nTotalExchangeAmount;
	void			OnSupplierSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplierSelendok(); 
	//void			OnSupplierSetfocus(); 
	//void			OnSupplierKillfocus(); 
	long			OnSupplierLoadData(); 
	//void			OnSupplierAddNew(); 
	//void			OnDelivererChange(); 
	//void			OnDelivererSetfocus(); 
	//void			OnDelivererKillfocus(); 
	int			OnDelivererCheckValue(); 
	//void			OnReceiverChange(); 
	//void			OnReceiverSetfocus(); 
	//void			OnReceiverKillfocus(); 
	int			OnReceiverCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnReferneceChange(); 
	//void			OnReferneceSetfocus(); 
	//void			OnReferneceKillfocus(); 
	int			OnReferneceCheckValue(); 
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
	void			OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWarehouseSelendok(); 
	//void			OnWarehouseSetfocus(); 
	//void			OnWarehouseKillfocus(); 
	long			OnWarehouseLoadData(); 
	//void			OnWarehouseAddNew(); 
	void			OnResourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResourceSelendok(); 
	//void			OnResourceSetfocus(); 
	//void			OnResourceKillfocus(); 
	long			OnResourceLoadData(); 
	//void			OnResourceAddNew(); 
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
	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	//void			OnPaymentMethodAddNew(); 
	void			OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentTermsSelendok(); 
	//void			OnPaymentTermsSetfocus(); 
	//void			OnPaymentTermsKillfocus(); 
	long			OnPaymentTermsLoadData(); 
	//void			OnPaymentTermsAddNew(); 
	void			OnDeliveryMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeliveryMethodSelendok(); 
	//void			OnDeliveryMethodSetfocus(); 
	//void			OnDeliveryMethodKillfocus(); 
	long			OnDeliveryMethodLoadData(); 
	//void			OnDeliveryMethodAddNew(); 
	//void			OnDeliveryDateChange(); 
	//void			OnDeliveryDateSetfocus(); 
	//void			OnDeliveryDateKillfocus(); 
	int			OnDeliveryDateCheckValue(); 
	//void			OnDeliveryAddressChange(); 
	//void			OnDeliveryAddressSetfocus(); 
	//void			OnDeliveryAddressKillfocus(); 
	int			OnDeliveryAddressCheckValue(); 
	//void			OnNetAmountChange(); 
	//void			OnNetAmountSetfocus(); 
	//void			OnNetAmountKillfocus(); 
	int			OnNetAmountCheckValue(); 
	//void			OnTaxesAmountChange(); 
	//void			OnTaxesAmountSetfocus(); 
	//void			OnTaxesAmountKillfocus(); 
	int			OnTaxesAmountCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//void			OnTotalExchangeAmountChange(); 
	//void			OnTotalExchangeAmountSetfocus(); 
	//void			OnTotalExchangeAmountKillfocus(); 
	int			OnTotalExchangeAmountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnPostSelect(); 
	void			OnCloseSelect(); 
	void			OnAddLineSelect(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CPurchaseOrderDialog(CWnd *pParent, int nMode);
	~CPurchaseOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseOrderDialog(); 
	int OnEditPurchaseOrderDialog(); 
	int OnDeletePurchaseOrderDialog(); 
	int OnSavePurchaseOrderDialog(); 
	int OnDiscardPurchaseOrderDialog(); 
	int OnPurchaseOrderDialogListLoadData(); 
	void CreateTabViews();
	void	RecalcAmount();
	
};
#endif
