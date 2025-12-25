#ifndef APORDERDIALOG_H
#define APORDERDIALOG_H

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

#include "APOrderExtra.h"
#include "APOrderInvoice.h"
#include "APOrderDelivery.h"
#include "APOrderVATTotals.h"

#include "AccCashInput.h"

class CAPOrderDialog : public CGuiDialog{
protected:
	CAPOrderExtra		m_wndExtraInfo;
	CAPOrderInvoice		m_wndInvoice;
	CAPOrderDelivery	m_wndDelivery;
	CAPOrderVATTotals	m_wndVATTotals;

	CString				m_szType;	//O: Order, Q: Quote;
	CString				m_szSupplierTypeKey;
	long				m_nLineIdx;
	CString				m_szStatus;
	CString				m_szPosted;

	CDbfMap				m_ap_orderTbl;
	
	CAccCashInput	m_wndInput;

public:
	CString			m_szID;

	CGuiGroupBox	m_wndSupplierInformation;
	CGuiGroupBox	m_wndPurchaseOrderInformation;
	CGuiGroupBox	m_wndLines;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndContactNameLabel;
	CGuiTextCtrl	m_wndContactName;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiLabel		m_wndExchangeRateLabel;
	CGuiNumberCtrl	m_wndExchangeRate;
	CGuiLabel		m_wndTransactionTypeLabel;
	CGuiComboBox	m_wndTransactionType;
	CGuiLabel		m_wndDiscountAmountLabel;
	CGuiNumberCtrl	m_wndDiscountAmount;
	CGuiLabel		m_wndNetAmountLabel;
	CGuiNumberCtrl	m_wndNetAmount;
	CGuiLabel		m_wndTaxesAmountLabel;
	CGuiNumberCtrl	m_wndTaxesAmount;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndTotalExchangeAmountLabel;
	CGuiNumberCtrl	m_wndTotalExchangeAmount;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndUtilities;
	CGuiButton		m_wndAddLine;
	CGridListCtrl	m_wndList;
	CGuiTabCtrl	m_wndTab;
	CString	m_szSupplierKey;
	CString	m_szContactName;
	CString	m_szPhone;
	CString	m_szAddress;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szCurrencyKey;
	float	m_nExchangeRate;
	CString	m_szTransactionTypeKey;
	long	m_nDiscountAmount;
	long	m_nNetAmount;
	long	m_nTaxesAmount;
	long	m_nTotalAmount;
	long	m_nTotalExchangeAmount;
	void			OnSupplierSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplierSelendok(); 
	//void			OnSupplierSetfocus(); 
	//void			OnSupplierKillfocus(); 
	long			OnSupplierLoadData(); 
	//void			OnSupplierAddNew(); 
	//void			OnContactNameChange(); 
	//void			OnContactNameSetfocus(); 
	//void			OnContactNameKillfocus(); 
	int			OnContactNameCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
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
	void			OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransactionTypeSelendok(); 
	//void			OnTransactionTypeSetfocus(); 
	//void			OnTransactionTypeKillfocus(); 
	long			OnTransactionTypeLoadData(); 
	//void			OnTransactionTypeAddNew(); 
	//void			OnDiscountAmountChange(); 
	//void			OnDiscountAmountSetfocus(); 
	//void			OnDiscountAmountKillfocus(); 
	int			OnDiscountAmountCheckValue(); 
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
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnPostSelect(); 
	void			OnUtilitiesSelect(); 
	void			OnAddLineSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListDeleteItem(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CAPOrderDialog(CWnd *pParent, int nMode, CString szType=_T("O"));
	~CAPOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAPOrderDialog(); 
	int OnEditAPOrderDialog(); 
	int OnDeleteAPOrderDialog(); 
	int OnSaveAPOrderDialog(); 
	int OnCancelAPOrderDialog(); 
	int OnAPOrderDialogListLoadData(); 

	void	RecalcTotalAmount();
	bool	OnCloseWindow();

	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
