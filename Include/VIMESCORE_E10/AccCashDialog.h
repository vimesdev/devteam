#ifndef ACCCASHDIALOG_H
#define ACCCASHDIALOG_H

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

class CAccCashDialog : public CGuiDialog{
protected:
	CAccCashInput	m_wndInput;
	CString			m_szVoucherType;
	CString			m_szInvoiceVATID;
	CString			m_szOrg_ID;
public:
	BOOL	m_bIncludingTax;
	CString	m_szDefDebitAcct;
	CString	m_szDefCreditAcct;
	CString	m_szDefTaxAcct;
	CString	m_szTaxID;


	long	m_nCash_ID;
	long	m_nLineIdx;
	CString	m_szBookNo;
	CString	m_szStatus;
	CString	m_szPosted;

	CGuiGroupBox	m_wndVoucherInformation;
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndVoucherLine;
	CGuiLabel		m_wndVoucherNoLabel;
	CGuiTextCtrl	m_wndVoucherNo;
	CGuiLabel		m_wndVoucherDateLabel;
	CGuiDateCtrl	m_wndVoucherDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiLabel		m_wndExchangeRateLabel;
	CGuiNumberCtrl	m_wndExchangeRate;
	CGuiLabel		m_wndExpenseIDLabel;
	CGuiComboBox	m_wndExpenseID;
	CGuiLabel		m_wndObjectTypeLabel;
	CGuiComboBox	m_wndObjectType;
	CGuiLabel		m_wndContractNoLabel;
	CGuiTextCtrl	m_wndContractNo;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndTrasactorLabel;
	CGuiTextCtrl	m_wndTransactor;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndIncludedLabel;
	CGuiTextCtrl	m_wndIncluded;
	CGuiLabel		m_wndOriginalDocument;
	CGuiCheckBox	m_wndIncludingTax;

	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	
	CGridListCtrl	m_wndList;
	CGuiTabCtrl		m_wndTab;
	CGridListCtrl	m_wndTaxInvoiceList;
	CGuiLabel		m_wndUntaxedAmountLabel;
	CGuiNumberCtrl	m_wndUntaxedAmount;
	CGuiLabel		m_wndTaxesAmountLabel;
	CGuiNumberCtrl	m_wndTaxesAmount;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndConversionLabel;
	CGuiNumberCtrl	m_wndConversion;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndUtilities;
	CGuiButton		m_wndAddLine;
	CString	m_szVoucherNo;
	CString	m_szVoucherDate;
	CString	m_szAccountingDate;
	CString	m_szCurrencyKey;
	float	m_nExchangeRate;
	CString	m_szExpenseIDKey;
	CString	m_szObjectTypeKey;
	CString	m_szContractNoKey;
	CString	m_szObjectKey;
	CString	m_szObjectName;
	CString	m_szAddress;
	CString	m_szTransactor;
	CString	m_szReason;
	CString	m_szIncluded;
	CString	m_szTaxInvoiceTypeKey;
	CString	m_szTaxInvoiceNo;
	CString	m_szTaxInvoiceDate;
	CString	m_szTaxSerialNo;
	CString	m_szTaxCode;
	CString	m_szTaxSigned;
	CString	m_szTaxTemplateNo;
	CString	m_szNote;
	double	m_nUntaxedAmount;
	double	m_nTaxesAmount;
	double	m_nAmount;
	double	m_nConversionAmount;

	CDbfMap	m_fa_cashTbl;
	
	//void			OnVoucherNoChange(); 
	//void			OnVoucherNoSetfocus(); 
	//void			OnVoucherNoKillfocus(); 
	int			OnVoucherNoCheckValue(); 
	//void			OnVoucherDateChange(); 
	//void			OnVoucherDateSetfocus(); 
	//void			OnVoucherDateKillfocus(); 
	int			OnVoucherDateCheckValue(); 
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
	void			OnExpenseIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpenseIDSelendok(); 
	//void			OnExpenseIDSetfocus(); 
	//void			OnExpenseIDKillfocus(); 
	long			OnExpenseIDLoadData(); 
	//void			OnExpenseIDAddNew(); 
	void			OnObjectTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectTypeSelendok(); 
	//void			OnObjectTypeSetfocus(); 
	//void			OnObjectTypeKillfocus(); 
	long			OnObjectTypeLoadData(); 
	//void			OnObjectTypeAddNew(); 
	void			OnContractNoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractNoSelendok(); 
	//void			OnContractNoSetfocus(); 
	//void			OnContractNoKillfocus(); 
	long			OnContractNoLoadData(); 
	//void			OnContractNoAddNew(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnTransactorChange(); 
	//void			OnTransactorSetfocus(); 
	//void			OnTransactorKillfocus(); 
	int			OnTransactorCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	//void			OnIncludedChange(); 
	//void			OnIncludedSetfocus(); 
	//void			OnIncludedKillfocus(); 
	int			OnIncludedCheckValue(); 
	int			OnIncludingTaxSelect(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnTaxInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxInvoiceTypeSelendok(); 
	//void			OnTaxInvoiceTypeSetfocus(); 
	//void			OnTaxInvoiceTypeKillfocus(); 
	long			OnTaxInvoiceTypeLoadData(); 
	//void			OnTaxInvoiceTypeAddNew(); 
	//void			OnTaxInvoiceNoChange(); 
	//void			OnTaxInvoiceNoSetfocus(); 
	//void			OnTaxInvoiceNoKillfocus(); 
	int			OnTaxInvoiceNoCheckValue(); 
	//void			OnTaxInvoiceDateChange(); 
	//void			OnTaxInvoiceDateSetfocus(); 
	//void			OnTaxInvoiceDateKillfocus(); 
	int			OnTaxInvoiceDateCheckValue(); 
	//void			OnTaxSerialNoChange(); 
	//void			OnTaxSerialNoSetfocus(); 
	//void			OnTaxSerialNoKillfocus(); 
	int			OnTaxSerialNoCheckValue(); 
	//void			OnTaxCodeChange(); 
	//void			OnTaxCodeSetfocus(); 
	//void			OnTaxCodeKillfocus(); 
	int			OnTaxCodeCheckValue(); 
	//void			OnTaxSignedChange(); 
	//void			OnTaxSignedSetfocus(); 
	//void			OnTaxSignedKillfocus(); 
	int			OnTaxSignedCheckValue(); 
	//void			OnTaxTemplateNoChange(); 
	//void			OnTaxTemplateNoSetfocus(); 
	//void			OnTaxTemplateNoKillfocus(); 
	int			OnTaxTemplateNoCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListDeleteItem(); 

	long			OnTaxInvoiceListLoadData(); 
	void			OnTaxInvoiceListSelectChange(int nOldItem, int nNewItem); 
	void			OnTaxInvoiceListDblClick(); 
	int			OnTaxInvoiceListAddItem(); 
	int			OnTaxInvoiceListEditItem(); 
	int			OnTaxInvoiceListDeleteItem(); 

	//void			OnUntaxedAmountChange(); 
	//void			OnUntaxedAmountSetfocus(); 
	//void			OnUntaxedAmountKillfocus(); 
	int			OnUntaxedAmountCheckValue(); 
	//void			OnTaxesAmountChange(); 
	//void			OnTaxesAmountSetfocus(); 
	//void			OnTaxesAmountKillfocus(); 
	int			OnTaxesAmountCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnPostSelect(); 
	void			OnUtilitiesSelect(); 
	void			OnAddLineSelect(); 
	CAccCashDialog(CWnd *pParent, int nMode, CString szVoucherType);
	~CAccCashDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAccCashDialog(); 
	int OnEditAccCashDialog(); 
	int OnDeleteAccCashDialog(); 
	int OnSaveAccCashDialog(); 
	int OnCancelAccCashDialog(); 
	int OnAccCashDialogListLoadData(); 
	void	RecalcTotalAmount();
	void	EnableTaxMode(BOOL bFlag);
	bool	OnCloseWindow();
	void	RefreshData();

};
#endif
