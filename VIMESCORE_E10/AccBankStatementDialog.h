#ifndef ACCBANKSTATEMENTDIALOG_H
#define ACCBANKSTATEMENTDIALOG_H

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
#include "AccBankStatementInput.h"

class CAccBankStatementDialog : public CGuiDialog{
protected:
	CAccBankStatementInput	m_wndInput;
	CString			m_szVoucherType;
	CString			m_szInvoiceVATID;
	CString			m_szTaxCode;
	
public:
	bool	m_bIncludingTax;

	CString	m_szID;
	long	m_nLineIdx;
	CString	m_szBookNo;
	CString	m_szStatus;
	CString	m_szPosted;
	CString	m_szTaxInvoiceTypeKey;

	CGuiGroupBox	m_wndVoucherInformation;
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndVoucherLine;
	CGuiGroupBox	m_wndBankTransaction;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
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
	CGuiLabel		m_wndContractNoLabel;
	CGuiComboBox	m_wndContractNo;
	CGuiLabel		m_wndObjectTypeLabel;
	CGuiComboBox	m_wndObjectType;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiTextCtrl	m_wndObjectName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPartnerBankAccountLabel;
	CGuiComboBox	m_wndPartnerBankAccount;
	CGuiTextCtrl	m_wndTransactor;
	CGuiTextCtrl	m_wndPartnerBankName;
	CGuiLabel		m_wndBankAccountLabel;
	CGuiComboBox	m_wndBankAccount;
	CGuiTextCtrl	m_wndBankName;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndUntaxedAmountLabel;
	CGuiNumberCtrl	m_wndUntaxedAmount;
	CGuiLabel		m_wndTaxesAmountLabel;
	CGuiNumberCtrl	m_wndTaxesAmount;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
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
	CGridListCtrl	m_wndTaxInvoiceList;

	CString	m_szTypeKey;
	CString	m_szVoucherNo;
	CString	m_szVoucherDate;
	CString	m_szAccountingDate;
	CString	m_szCurrencyKey;
	long	m_nExchangeRate;
	CString	m_szExpenseIDKey;
	CString	m_szContractNoKey;
	CString	m_szObjectTypeKey;
	CString	m_szObjectKey;
	CString	m_szObjectName;
	CString	m_szAddress;
	CString	m_szPartnerBankAccountKey;
	CString	m_szPartnerBankName;
	CString	m_szBankAccountKey;
	CString	m_szBankName;
	CString	m_szReason;
	CString	m_szTransactor;
	CString	m_szTransactorNote;
	CString	m_szDescription;
	

	long	m_nUntaxedAmount;
	long	m_nTaxesAmount;
	long	m_nAmount;

	CDbfMap		m_fa_bankStatementTbl;
	

	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
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
	void			OnContractNoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractNoSelendok(); 
	//void			OnContractNoSetfocus(); 
	//void			OnContractNoKillfocus(); 
	long			OnContractNoLoadData(); 
	//void			OnContractNoAddNew(); 
	void			OnObjectTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectTypeSelendok(); 
	//void			OnObjectTypeSetfocus(); 
	//void			OnObjectTypeKillfocus(); 
	long			OnObjectTypeLoadData(); 
	//void			OnObjectTypeAddNew(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnObjectNameChange(); 
	//void			OnObjectNameSetfocus(); 
	//void			OnObjectNameKillfocus(); 
	int			OnObjectNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnPartnerBankAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPartnerBankAccountSelendok(); 
	//void			OnPartnerBankAccountSetfocus(); 
	//void			OnPartnerBankAccountKillfocus(); 
	long			OnPartnerBankAccountLoadData(); 
	//void			OnPartnerBankAccountAddNew(); 
	//void			OnPartnerBankNameChange(); 
	//void			OnPartnerBankNameSetfocus(); 
	//void			OnPartnerBankNameKillfocus(); 
	int			OnPartnerBankNameCheckValue(); 
	void			OnBankAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBankAccountSelendok(); 
	//void			OnBankAccountSetfocus(); 
	//void			OnBankAccountKillfocus(); 
	long			OnBankAccountLoadData(); 
	//void			OnBankAccountAddNew(); 
	//void			OnBankNameChange(); 
	//void			OnBankNameSetfocus(); 
	//void			OnBankNameKillfocus(); 
	int			OnBankNameCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
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


	CAccBankStatementDialog(CWnd *pParent, int nMode, CString szVoucherType);
	~CAccBankStatementDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAccBankStatementDialog(); 
	int OnEditAccBankStatementDialog(); 
	int OnDeleteAccBankStatementDialog(); 
	int OnSaveAccBankStatementDialog(); 
	int OnCancelAccBankStatementDialog(); 
	int OnAccBankStatementDialogListLoadData(); 
	void	RecalcTotalAmount();
	bool	OnCloseWindow();

};
#endif
