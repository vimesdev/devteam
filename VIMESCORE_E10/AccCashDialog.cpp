#include "AccCashDialog.h"
#include "MainFrame_E10.h"
//#include "..\VIMESCORE_E10R\FAPrintForm.h"
#include "AccTaxCreationDialog.h"
#include "AccCashLineInputPopup.h"

/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashDialog* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnExchangeRateCheckValue();
} 
static void _OnExpenseIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashDialog* )pWnd)->OnExpenseIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExpenseIDSelendokFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnExpenseIDSelendok();
}
/*static void _OnExpenseIDSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnExpenseIDKillfocus();
}*/
/*static void _OnExpenseIDKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnExpenseIDKillfocus();
}*/
static long _OnExpenseIDLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnExpenseIDLoadData();
}
/*static void _OnExpenseIDAddNewFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnExpenseIDAddNew();
}*/
static void _OnObjectTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashDialog* )pWnd)->OnObjectTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectTypeSelendok();
}
/*static void _OnObjectTypeSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectTypeKillfocus();
}*/
/*static void _OnObjectTypeKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectTypeKillfocus();
}*/
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnObjectTypeLoadData();
}
/*static void _OnObjectTypeAddNewFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectTypeAddNew();
}*/
static void _OnContractNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashDialog* )pWnd)->OnContractNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractNoSelendokFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnContractNoSelendok();
}
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnContractNoKillfocus();
}*/
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnContractNoKillfocus();
}*/
static long _OnContractNoLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnContractNoLoadData();
}
/*static void _OnContractNoAddNewFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnContractNoAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnTransactorChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTransactorChange();
} */
/*static void _OnTransactorSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTransactorSetfocus();} */ 
/*static void _OnTransactorKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTransactorKillfocus();
} */
static int _OnTransactorCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTransactorCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnIncludedChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnIncludedChange();
} */
/*static void _OnIncludedSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnIncludedSetfocus();} */ 
/*static void _OnIncludedKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnIncludedKillfocus();
} */
static int _OnIncludedCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnIncludedCheckValue();
}

static int _OnIncludingTaxSelectFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnIncludingTaxSelect();
}
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnNoteKillfocus();
} */

static void _OnTaxInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashDialog* )pWnd)->OnTaxInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceTypeSelendok();
}
/*static void _OnTaxInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceTypeKillfocus();
}*/
/*static void _OnTaxInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceTypeKillfocus();
}*/
static long _OnTaxInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxInvoiceTypeLoadData();
}
/*static void _OnTaxInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceTypeAddNew();
}*/
/*static void _OnTaxInvoiceNoChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceNoChange();
} */
/*static void _OnTaxInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceNoSetfocus();} */ 
/*static void _OnTaxInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceNoKillfocus();
} */
static int _OnTaxInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxInvoiceNoCheckValue();
} 
/*static void _OnTaxInvoiceDateChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceDateChange();
} */
/*static void _OnTaxInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceDateSetfocus();} */ 
/*static void _OnTaxInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxInvoiceDateKillfocus();
} */
static int _OnTaxInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxInvoiceDateCheckValue();
} 
/*static void _OnTaxSerialNoChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxSerialNoChange();
} */
/*static void _OnTaxSerialNoSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxSerialNoSetfocus();} */ 
/*static void _OnTaxSerialNoKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxSerialNoKillfocus();
} */
static int _OnTaxSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxSerialNoCheckValue();
} 
/*static void _OnTaxCodeChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxCodeChange();
} */
/*static void _OnTaxCodeSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxCodeSetfocus();} */ 
/*static void _OnTaxCodeKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxCodeKillfocus();
} */
static int _OnTaxCodeCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxCodeCheckValue();
} 
/*static void _OnTaxSignedChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxSignedChange();
} */
/*static void _OnTaxSignedSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxSignedSetfocus();} */ 
/*static void _OnTaxSignedKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxSignedKillfocus();
} */
static int _OnTaxSignedCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxSignedCheckValue();
} 
/*static void _OnTaxTemplateNoChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxTemplateNoChange();
} */
/*static void _OnTaxTemplateNoSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxTemplateNoSetfocus();} */ 
/*static void _OnTaxTemplateNoKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxTemplateNoKillfocus();
} */
static int _OnTaxTemplateNoCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxTemplateNoCheckValue();
} 
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnNoteCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAccCashDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAccCashDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnListEditItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnListDeleteItem();
}



static long _OnTaxInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CAccCashDialog*)pWnd)->OnTaxInvoiceListLoadData();
} 
static void _OnTaxInvoiceListDblClickFnc(CWnd *pWnd){
	((CAccCashDialog*)pWnd)->OnTaxInvoiceListDblClick();
} 
static void _OnTaxInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAccCashDialog*)pWnd)->OnTaxInvoiceListSelectChange(nOldItem, nNewItem);
}

static int _OnTaxInvoiceListAddItemFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnTaxInvoiceListAddItem();
}
static int _OnTaxInvoiceListEditItemFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnTaxInvoiceListEditItem();
}
static int _OnTaxInvoiceListDeleteItemFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnTaxInvoiceListDeleteItem();
}

/*static void _OnUntaxedAmountChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnUntaxedAmountChange();
} */
/*static void _OnUntaxedAmountSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnUntaxedAmountSetfocus();} */ 
/*static void _OnUntaxedAmountKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnUntaxedAmountKillfocus();
} */
static int _OnUntaxedAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnUntaxedAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAccCashDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccCashDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnUtilitiesSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnUtilitiesSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CAccCashDialog *pVw = (CAccCashDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static int _OnAddAccCashDialogFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnAddAccCashDialog();
} 
static int _OnEditAccCashDialogFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnEditAccCashDialog();
} 
static int _OnDeleteAccCashDialogFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnDeleteAccCashDialog();
} 
static int _OnSaveAccCashDialogFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnSaveAccCashDialog();
} 
static int _OnCancelAccCashDialogFnc(CWnd *pWnd){
	 return ((CAccCashDialog*)pWnd)->OnCancelAccCashDialog();
} 
CAccCashDialog::CAccCashDialog(CWnd *pParent, int nMode, CString szVoucherType):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szVoucherType = szVoucherType;
	m_bIncludingTax = TRUE;
	m_szDefCreditAcct = _T("511");
	m_szDefDebitAcct = _T("1111");
	m_szDefTaxAcct = _T("721");
}
CAccCashDialog::~CAccCashDialog(){
}
void CAccCashDialog::OnCreateComponents(){
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 210);
	m_wndGeneralInformation.Create(this, _T("General Information"), 230, 5, 800, 210);
	m_wndVoucherLine.Create(this, _T("Lines"), 5, 215, 800, 570);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 10, 120, 110, 145);
	m_wndCurrency.Create(this,115, 120, 220, 145); 
	m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 10, 150, 110, 175);
	m_wndExchangeRate.Create(this,115, 150, 220, 175); 
	m_wndExpenseIDLabel.Create(this, _T("Expense ID"), 10, 180, 110, 205);
	m_wndExpenseID.Create(this,115, 180, 220, 205); 
	m_wndObjectTypeLabel.Create(this, _T("FA_OBJECT_TYPE"), 235, 30, 335, 55);
	m_wndObjectType.Create(this,340, 30, 565, 55); 
	m_wndContractNoLabel.Create(this, _T("Contract No"), 570, 30, 670, 55);
	m_wndContractNo.Create(this,675, 30, 795, 55); 
	m_wndObjectLabel.Create(this, _T("FA_OBJECT_NAME"), 235, 60, 335, 85);
	m_wndObject.Create(this,340, 60, 795, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 90, 335, 115);
	m_wndAddress.Create(this,340, 90, 795, 115); 
	m_wndTrasactorLabel.Create(this, _T("Transactor"), 235, 120, 335, 145);
	m_wndTransactor.Create(this,340, 120, 795, 145); 
	m_wndReasonLabel.Create(this, _T("Reason"), 235, 150, 335, 175);
	m_wndReason.Create(this,340, 150, 795, 175); 
	m_wndIncludedLabel.Create(this, _T("Included"), 235, 180, 335, 205);
	m_wndIncluded.Create(this,340, 180, 565, 205); 
	m_wndOriginalDocument.Create(this, _T("Original Document"), 570, 180, 695, 205);
	m_wndIncludingTax.Create(this, _T("Including Tax"), 700, 180, 795, 205);
	m_wndUntaxedAmountLabel.Create(this, _T("Untaxed Amount"), 570, 450, 680, 475);
	m_wndUntaxedAmount.Create(this,685, 450, 795, 475); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 570, 480, 680, 505);
	m_wndTaxesAmount.Create(this,685, 480, 795, 505); 
	m_wndAmountLabel.Create(this, _T("Total Amount"), 570, 510, 680, 535);
	m_wndAmount.Create(this,685, 511, 795, 536); 
	m_wndConversionLabel.Create(this, _T("Conversion"), 570, 540, 680, 565);
	m_wndConversion.Create(this,685, 540, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 120, 575, 200, 600);
	m_wndEdit.Create(this, _T("&Edit"), 205, 575, 285, 600);
	m_wndDelete.Create(this, _T("&Delete"), 290, 575, 370, 600);
	m_wndSave.Create(this, _T("&Save"), 375, 575, 455, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 460, 575, 540, 600);
	m_wndPrint.Create(this, _T("&Print"), 545, 575, 625, 600);
	m_wndPost.Create(this, _T("FA_POST"), 630, 575, 710, 600);
	m_wndUtilities.Create(this, _T("&Close"), 715, 575, 795, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndList.SetAutoIndex(TRUE);
	//m_wndList.SetAllowDrag(TRUE);
	m_wndList.Create(this,10, 240, 795, 450); 
	m_wndTab.Create(this, 10, 450, 565, 565);
	m_wndTaxInvoiceList.Create(&m_wndTab, 10, 450, 565, 565); 
	m_wndNote.Create(&m_wndTab, 10, 450, 565, 565);
	m_wndTab.Add(_T("Note"), &m_wndNote);
	m_wndTab.Add(_T("Tax"), &m_wndTaxInvoiceList);
//	m_wndTab.Add(_T("Discount"), NULL);


}
void CAccCashDialog::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndBookNo.SetLimitText(35);
//	m_wndBookNo.SetCheckValue(true);
	m_wndVoucherNo.SetLimitText(11);
	m_wndVoucherNo.SetCheckValue(true);
//	m_wndVoucherDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndVoucherDate.SetCheckValue(true);
//	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);
	//m_wndExpenseID.SetCheckValue(true);
	m_wndExpenseID.LimitText(15);
	
	
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(3);
	m_wndExchangeRate.SetLimitText(15);
	m_wndExchangeRate.SetCheckValue(true);
	m_wndExchangeRate.SetNumberDecimal(3);
	m_wndObjectType.SetCheckValue(true);
	m_wndObjectType.LimitText(128);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(254);
	m_wndAddress.SetLimitText(250);
//	m_wndAddress.SetCheckValue(true);
	m_wndTransactor.SetLimitText(250);
//	m_wndTransactor.SetCheckValue(true);
//	m_wndReason.SetCheckValue(true);
	m_wndReason.LimitText(250);
	m_wndIncluded.SetLimitText(250);
//	m_wndIncluded.SetCheckValue(true);
	m_wndNote.SetLimitText(2048);
//	m_wndNote.SetCheckValue(true);
	m_wndUntaxedAmount.SetLimitText(16);
	m_wndUntaxedAmount.SetReadOnly(TRUE);
//	m_wndUntaxedAmount.SetCheckValue(true);
	m_wndUntaxedAmount.SetCurrencyFormat(true);
	m_wndUntaxedAmount.SetTextColor(RGB(0, 128, 192));
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetReadOnly(TRUE);
	m_wndAmount.SetCurrencyFormat(true);
	m_wndAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndAmount.SetCheckValue(true);
	m_wndConversion.SetReadOnly(true);
	m_wndTaxesAmount.SetLimitText(16);
	m_wndTaxesAmount.SetReadOnly(TRUE);
	m_wndTaxesAmount.SetCurrencyFormat(true);
	m_wndTaxesAmount.SetTextColor(RGB(0, 64, 128));
//	m_wndTaxesAmount.SetCheckValue(true);
	m_wndAddress.SetReadOnly(true);
	
	m_wndExpenseID.Format(2, 0, 10, 1);
	
	m_wndExpenseID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExpenseID.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndCurrency.Format(2, 0, 10, 1);
	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


//	m_wndContractNo.Format(2, 0, 10, 1);
//	m_wndContractNo.InsertColumn(0, _T("Contract No"), CFMT_TEXT, 120);
//	m_wndContractNo.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndObject.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndObject.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);


	m_wndList.GetHeaderControl()->SetItemHeight(1);

	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //cashline_id

	m_wndList.InsertColumn(1, _T("Debit Account"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Credit Account"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("UnTaxed Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(5, _T("Tax Account"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(6, _T("% Tax Rate"), CFMT_TEXT|CFMT_RIGHT, 50);
	m_wndList.InsertColumn(7, _T("Tax Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Job ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("lineidx"), CFMT_TEXT, 0);


	m_wndTaxInvoiceList.InsertColumn(0, _T("Tax Description"), CFMT_TEXT, 150);
	m_wndTaxInvoiceList.InsertColumn(1, _T("Tax Account"), CFMT_TEXT, 80);
	m_wndTaxInvoiceList.InsertColumn(2, _T("Base"), CFMT_MONEY, 80);
	m_wndTaxInvoiceList.InsertColumn(3, _T("%"), CFMT_NUMBER, 30);
	m_wndTaxInvoiceList.InsertColumn(4, _T("Tax Amount"), CFMT_MONEY, 80);
	m_wndTaxInvoiceList.InsertColumn(5, _T("Tax Invoice"), CFMT_TEXT, 95);
	m_wndTaxInvoiceList.InsertColumn(6, _T("cashtax_id"), CFMT_TEXT, 0);

	m_fa_cashTbl.SetTableName(_T("fa_cash"));
	m_fa_cashTbl.AddField(_T("fac_cash_id"), dfLong); 
	m_fa_cashTbl.AddField(_T("fac_client_id"), dfText, 32); 
	m_fa_cashTbl.AddField(_T("fac_org_id"), dfText, 32); 
	m_fa_cashTbl.AddField(_T("fac_user_id"), dfText, 32); 
	m_fa_cashTbl.AddField(_T("fac_invoicetype"), dfText, 1); 
	m_fa_cashTbl.AddField(_T("fac_invoiceno"), dfText, 32); 
	m_fa_cashTbl.AddField(_T("fac_invoicedate"), dfDate); 
	m_fa_cashTbl.AddField(_T("fac_acctdate"), dfDate); 
	m_fa_cashTbl.AddField(_T("fac_currency_id"), dfText, 32); 
	m_fa_cashTbl.AddField(_T("fac_exchangerate"), dfDouble); 
	m_fa_cashTbl.AddField(_T("fac_expense_id"), dfText, 32); 
	m_fa_cashTbl.AddField(_T("fac_contract_id"), dfText, 32);
	m_fa_cashTbl.AddField(_T("fac_partner_type_id"), dfText, 3); 
	m_fa_cashTbl.AddField(_T("fac_partner_id"), dfText, 32); 
	m_fa_cashTbl.AddField(_T("fac_partner_address"), dfText, 255); 
	m_fa_cashTbl.AddField(_T("fac_reason"), dfText, 255); 
	m_fa_cashTbl.AddField(_T("fac_description"), dfText, 255); 
	m_fa_cashTbl.AddField(_T("fac_transactor"), dfText, 128); 
	m_fa_cashTbl.AddField(_T("fac_org_document"), dfText, 255); 
	m_fa_cashTbl.AddField(_T("fac_istaxincluded"), dfText, 1); 
	m_fa_cashTbl.AddField(_T("fac_debit_acct"), dfText, 7); 
	m_fa_cashTbl.AddField(_T("fac_credit_acct"), dfText, 7); 


	m_wndIncludingTax.ShowWindow(SW_HIDE);
}

void CAccCashDialog::OnSetWindowEvents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndVoucherNo.SetEvent(WE_CHANGE, _OnVoucherNoChangeFnc);
	//m_wndVoucherNo.SetEvent(WE_SETFOCUS, _OnVoucherNoSetfocusFnc);
	//m_wndVoucherNo.SetEvent(WE_KILLFOCUS, _OnVoucherNoKillfocusFnc);
	m_wndVoucherNo.SetEvent(WE_CHECKVALUE, _OnVoucherNoCheckValueFnc);
	//m_wndVoucherDate.SetEvent(WE_CHANGE, _OnVoucherDateChangeFnc);
	//m_wndVoucherDate.SetEvent(WE_SETFOCUS, _OnVoucherDateSetfocusFnc);
	//m_wndVoucherDate.SetEvent(WE_KILLFOCUS, _OnVoucherDateKillfocusFnc);
	m_wndVoucherDate.SetEvent(WE_CHECKVALUE, _OnVoucherDateCheckValueFnc);
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
	m_wndCurrency.SetEvent(WE_SELENDOK, _OnCurrencySelendokFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_SELCHANGE, _OnCurrencySelectChangeFnc);
	m_wndCurrency.SetEvent(WE_LOADDATA, _OnCurrencyLoadDataFnc);
	//m_wndCurrency.SetEvent(WE_ADDNEW, _OnCurrencyAddNewFnc);
	//m_wndExchangeRate.SetEvent(WE_CHANGE, _OnExchangeRateChangeFnc);
	//m_wndExchangeRate.SetEvent(WE_SETFOCUS, _OnExchangeRateSetfocusFnc);
	//m_wndExchangeRate.SetEvent(WE_KILLFOCUS, _OnExchangeRateKillfocusFnc);
	m_wndExchangeRate.SetEvent(WE_CHECKVALUE, _OnExchangeRateCheckValueFnc);
	m_wndExpenseID.SetEvent(WE_SELENDOK, _OnExpenseIDSelendokFnc);
	//m_wndExpenseID.SetEvent(WE_SETFOCUS, _OnExpenseIDSetfocusFnc);
	//m_wndExpenseID.SetEvent(WE_KILLFOCUS, _OnExpenseIDKillfocusFnc);
	m_wndExpenseID.SetEvent(WE_SELCHANGE, _OnExpenseIDSelectChangeFnc);
	m_wndExpenseID.SetEvent(WE_LOADDATA, _OnExpenseIDLoadDataFnc);
	//m_wndExpenseID.SetEvent(WE_ADDNEW, _OnExpenseIDAddNewFnc);
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	//m_wndObjectType.SetEvent(WE_SETFOCUS, _OnObjectTypeSetfocusFnc);
	//m_wndObjectType.SetEvent(WE_KILLFOCUS, _OnObjectTypeKillfocusFnc);
	m_wndObjectType.SetEvent(WE_SELCHANGE, _OnObjectTypeSelectChangeFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	//m_wndObjectType.SetEvent(WE_ADDNEW, _OnObjectTypeAddNewFnc);
	m_wndContractNo.SetEvent(WE_SELENDOK, _OnContractNoSelendokFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_SELCHANGE, _OnContractNoSelectChangeFnc);
	m_wndContractNo.SetEvent(WE_LOADDATA, _OnContractNoLoadDataFnc);
	//m_wndContractNo.SetEvent(WE_ADDNEW, _OnContractNoAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndTransactor.SetEvent(WE_CHANGE, _OnTransactorChangeFnc);
	//m_wndTransactor.SetEvent(WE_SETFOCUS, _OnTransactorSetfocusFnc);
	//m_wndTransactor.SetEvent(WE_KILLFOCUS, _OnTransactorKillfocusFnc);
	m_wndTransactor.SetEvent(WE_CHECKVALUE, _OnTransactorCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	//m_wndIncluded.SetEvent(WE_CHANGE, _OnIncludedChangeFnc);
	//m_wndIncluded.SetEvent(WE_SETFOCUS, _OnIncludedSetfocusFnc);
	//m_wndIncluded.SetEvent(WE_KILLFOCUS, _OnIncludedKillfocusFnc);
	m_wndIncluded.SetEvent(WE_CHECKVALUE, _OnIncludedCheckValueFnc);
	m_wndIncludingTax.SetEvent(WE_CLICK, _OnIncludingTaxSelectFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);

	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	

	m_wndTaxInvoiceList.SetEvent(WE_SELCHANGE, _OnTaxInvoiceListSelectChangeFnc);
	m_wndTaxInvoiceList.SetEvent(WE_LOADDATA, _OnTaxInvoiceListLoadDataFnc);
	m_wndTaxInvoiceList.SetEvent(WE_DBLCLICK, _OnTaxInvoiceListDblClickFnc);
	

	//m_wndUntaxedAmount.SetEvent(WE_CHANGE, _OnUntaxedAmountChangeFnc);
	//m_wndUntaxedAmount.SetEvent(WE_SETFOCUS, _OnUntaxedAmountSetfocusFnc);
	//m_wndUntaxedAmount.SetEvent(WE_KILLFOCUS, _OnUntaxedAmountKillfocusFnc);
	m_wndUntaxedAmount.SetEvent(WE_CHECKVALUE, _OnUntaxedAmountCheckValueFnc);
	//m_wndTaxesAmount.SetEvent(WE_CHANGE, _OnTaxesAmountChangeFnc);
	//m_wndTaxesAmount.SetEvent(WE_SETFOCUS, _OnTaxesAmountSetfocusFnc);
	//m_wndTaxesAmount.SetEvent(WE_KILLFOCUS, _OnTaxesAmountKillfocusFnc);
	m_wndTaxesAmount.SetEvent(WE_CHECKVALUE, _OnTaxesAmountCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndUtilities.SetEvent(WE_CLICK, _OnUtilitiesSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);

	m_wndList.SetWindowText(_T("Receipt Vouchers"));
	m_wndList.AddEvent(1, _T("Add Line"), _OnListAddItemFnc, 0, VK_INSERT, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Edit Line"), _OnListEditItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Delete Line"), _OnListDeleteItemFnc, 0);

	m_wndTaxInvoiceList.SetWindowText(_T("Receipt Vouchers"));
//	m_wndTaxInvoiceList.AddEvent(1, _T("Add Tax Line"), _OnTaxInvoiceListAddItemFnc, 0, VK_INSERT, 0);
//	m_wndTaxInvoiceList.AddEvent(0, _T("-"));
	m_wndTaxInvoiceList.AddEvent(2, _T("Update Tax Invoice"), _OnTaxInvoiceListEditItemFnc, 0);
//	m_wndTaxInvoiceList.AddEvent(0, _T("-"));
//	m_wndTaxInvoiceList.AddEvent(3, _T("Delete Tax Line"), _OnTaxInvoiceListDeleteItemFnc, 0);

	/*m_wndList.EnableEdit(true);
	m_wndInput.Create(this);
	m_wndInput.OnInitDialog();
	m_wndList.SetEditView(&m_wndInput);*/
	

	m_szVoucherDate = m_szAccountingDate = pMF->GetSysDate();
	int nMode = GetMode();
	if(nMode == VM_EDIT){
		GetDataToScreen();
		SetMode(VM_EDIT);
	}
	else if(nMode == VM_ADD){
		SetMode(VM_ADD);
	}
	else
	{
		GetDataToScreen();
		SetMode(VM_VIEW);
	}


}
void CAccCashDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_TextEx(pDX, m_wndExpenseID.GetDlgCtrlID(), m_szExpenseIDKey);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_TextEx(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNoKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndTransactor.GetDlgCtrlID(), m_szTransactor);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndIncluded.GetDlgCtrlID(), m_szIncluded);
	DDX_Check(pDX, m_wndIncludingTax.GetDlgCtrlID(), m_bIncludingTax);
	DDX_Text(pDX, m_wndUntaxedAmount.GetDlgCtrlID(), m_nUntaxedAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndConversion.GetDlgCtrlID(), m_nConversionAmount);

}
void CAccCashDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_cash WHERE fac_cash_id=%ld "), m_nCash_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fac_org_id"), m_szOrg_ID);
		rs.GetValue(_T("fac_cash_id"), m_nCash_ID);
		rs.GetValue(_T("fac_invoiceno"), m_szVoucherNo);
		rs.GetValue(_T("fac_invoicedate"), m_szVoucherDate);
		rs.GetValue(_T("fac_acctdate"), m_szAccountingDate);

		rs.GetValue(_T("fac_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("fac_exchangerate"), m_nExchangeRate);
		rs.GetValue(_T("fac_expense_id"), m_szExpenseIDKey);
		rs.GetValue(_T("fac_contract_id"), m_szContractNoKey);
		rs.GetValue(_T("fac_partner_type_id"), m_szObjectTypeKey);
		rs.GetValue(_T("fac_partner_id"), m_szObjectKey);
		rs.GetValue(_T("fac_partner_address"), m_szAddress);
		rs.GetValue(_T("fac_transactor"), m_szTransactor);
		rs.GetValue(_T("fac_reason"), m_szReason);
		rs.GetValue(_T("fac_org_document"), m_szIncluded);
		rs.GetValue(_T("fac_description"), m_szNote);
		rs.GetValue(_T("fac_status"), m_szStatus);
		rs.GetValue(_T("fac_baseamt"), m_nUntaxedAmount);
		rs.GetValue(_T("fac_taxamt"), m_nTaxesAmount);
		rs.GetValue(_T("fac_amount"), m_nAmount);
		rs.GetValue(_T("fac_posted"), m_szPosted);
		rs.GetValue(_T("fac_istaxincluded"), m_bIncludingTax);
		rs.GetValue(_T("fac_debit_acct"), m_szDefDebitAcct);
		rs.GetValue(_T("fac_credit_acct"), m_szDefCreditAcct);
		rs.GetValue(_T("fac_tax_acct"), m_szDefTaxAcct);
		rs.GetValue(_T("fac_tax_id"), m_szTaxID);
			
		m_wndNote.SetWindowText(m_szNote);
		m_wndTab.SetCurSel(0);


		szSQL.Format(_T("SELECT * FROM fa_taxinvoice WHERE fati_reference_id=%ld "), m_nCash_ID);
		rsv.ExecSQL(szSQL);
		m_szTaxInvoiceTypeKey = _T("01");
		if(!rsv.IsEOF()){
			rsv.GetValue(_T("fati_taxinvoice_id"), m_szInvoiceVATID);
			rsv.GetValue(_T("fati_invoicetype"), m_szTaxInvoiceTypeKey);
			rsv.GetValue(_T("fati_invoiceno"), m_szTaxInvoiceNo);
			rsv.GetValue(_T("fati_invoicedate"), m_szTaxInvoiceDate);
			rsv.GetValue(_T("fati_serialno"), m_szTaxSerialNo);
			rsv.GetValue(_T("fati_signed"), m_szTaxSigned);
			rsv.GetValue(_T("fati_templateno"), m_szTaxTemplateNo);
			rsv.GetValue(_T("fati_taxcode"), m_szTaxCode);
		}

		OnListLoadData();
		if(m_nTaxesAmount > 0 && m_bIncludingTax)
		{
			OnTaxInvoiceListLoadData();
		}
		else
		{
			m_wndTab.DeleteItem(1);
		}
	}

}

void CAccCashDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	if(GetMode() == VM_ADD){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("ADM_GETNEXTVAL('FA_CASH_ID','Y') "));
		m_nCash_ID = str2long(pMF->ExecDML(szSQL));
		
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE fac_cash_id=%ld "), m_nCash_ID);
		m_fa_cashTbl.Open(&pMF->m_db, szWhere);
	}
	m_fa_cashTbl.SetValue(_T("fac_cash_id"), m_nCash_ID);
	m_fa_cashTbl.SetValue(_T("fac_client_id"), _T(""));
	m_fa_cashTbl.SetValue(_T("fac_org_id"), _T("GL"));
	m_fa_cashTbl.SetValue(_T("fac_user_id"), pMF->GetCurrentUser());
	m_fa_cashTbl.SetValue(_T("fac_invoicetype"), m_szVoucherType);
	m_fa_cashTbl.SetValue(_T("fac_invoiceno"), m_szVoucherNo);
	m_fa_cashTbl.SetValue(_T("fac_invoicedate"), m_szVoucherDate);
	m_fa_cashTbl.SetValue(_T("fac_acctdate"), m_szAccountingDate);

	m_fa_cashTbl.SetValue(_T("fac_currency_id"), m_szCurrencyKey);
	m_fa_cashTbl.SetValue(_T("fac_exchangerate"), m_nExchangeRate);
	m_fa_cashTbl.SetValue(_T("fac_expense_id"), m_szExpenseIDKey);
	m_fa_cashTbl.SetValue(_T("fac_contract_id"), m_szContractNoKey);
	m_fa_cashTbl.SetValue(_T("fac_partner_type_id"), m_szObjectTypeKey);
	m_fa_cashTbl.SetValue(_T("fac_partner_id"), m_szObjectKey);
	m_fa_cashTbl.SetValue(_T("fac_partner_address"), m_szAddress);
	m_fa_cashTbl.SetValue(_T("fac_transactor"), m_szTransactor);
	m_fa_cashTbl.SetValue(_T("fac_reason"), m_szReason);
	m_fa_cashTbl.SetValue(_T("fac_org_document"), m_szIncluded);
	m_wndNote.GetWindowText(m_szNote);
	m_fa_cashTbl.SetValue(_T("fac_description"), m_szNote);
	m_fa_cashTbl.SetValue(_T("fac_debit_acct"), m_szDefDebitAcct);
	m_fa_cashTbl.SetValue(_T("fac_credit_acct"), m_szDefCreditAcct);
	m_fa_cashTbl.SetValue(_T("fac_tax_acct"), m_szDefTaxAcct);

	m_fa_cashTbl.SetValue(_T("fac_istaxincluded"), m_bIncludingTax?_T("Y"):_T("N"));



}

void CAccCashDialog::SetDefaultValues(){

	m_szBookNo.Empty();
	//m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szExpenseIDKey.Empty();
	m_szCurrencyKey = _T("VND");
	m_nExchangeRate=1;
	m_szContractNoKey.Empty();
	m_szObjectTypeKey.Empty();
	m_szObjectKey.Empty();
	m_szAddress.Empty();
	m_szTransactor.Empty();
	m_szReason.Empty();
	m_szIncluded.Empty();
	m_szNote.Empty();
	m_nUntaxedAmount=0;
	m_nTaxesAmount=0;
	m_nAmount=0;
	m_nConversionAmount = 0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
	m_bIncludingTax = TRUE;
}

int CAccCashDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szVoucherDate = m_szAccountingDate = pMF->GetSysDate();
			
			if(m_szVoucherType == _T("R"))
				szSQL.Format(_T("ADM_GETNEXTVAL('FA_CASH_RINVOICENO_ASQ','Y') "));
			else
				szSQL.Format(_T("ADM_GETNEXTVAL('FA_CASH_PINVOICENO_ASQ','Y') "));

			m_szVoucherNo = pMF->ExecDML(szSQL);
			m_wndVoucherDate.SetFocus();
			m_wndList.DeleteAllItems();
			m_wndTaxInvoiceList.DeleteAllItems();
			m_wndNote.EnableWindow(TRUE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndObject.SetFocus();
			m_wndNote.EnableWindow(TRUE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndNote.EnableWindow(FALSE);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szVoucherNo.Empty();
			m_wndNote.EnableWindow(FALSE);
 			break; 
 		};

		if(m_szStatus != _T("O")){
			m_wndPost.SetWindowText(_T("Unpost"));
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
			m_wndList.EnableEdit(false);
		}
		m_wndUtilities.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CAccCashDialog::OnVoucherNoChange(){
	
} */
/*void CAccCashDialog::OnVoucherNoSetfocus(){
	
} */
/*void CAccCashDialog::OnVoucherNoKillfocus(){
	
} */
int CAccCashDialog::OnVoucherNoCheckValue(){
	return 0;
}
 
/*void CAccCashDialog::OnVoucherDateChange(){
	
} */
/*void CAccCashDialog::OnVoucherDateSetfocus(){
	
} */
/*void CAccCashDialog::OnVoucherDateKillfocus(){
	
} */
int CAccCashDialog::OnVoucherDateCheckValue(){
	return 0;
}
 
/*void CAccCashDialog::OnAccountingDateChange(){
	
} */
/*void CAccCashDialog::OnAccountingDateSetfocus(){
	
} */
/*void CAccCashDialog::OnAccountingDateKillfocus(){
	
} */
int CAccCashDialog::OnAccountingDateCheckValue(){
	return 0;
}
 
void CAccCashDialog::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccCashDialog::OnCurrencySelendok(){
	 UpdateData(TRUE);
	 if(m_szCurrencyKey != _T("VND"))
	 {
		 m_wndList.SetColumnWidth(4, 90);
	 }
	 else
	 {
		 m_wndList.SetColumnWidth(4, 0);
	 } 
}

/*void CAccCashDialog::OnCurrencySetfocus(){
	
}*/
/*void CAccCashDialog::OnCurrencyKillfocus(){
	
}*/
long CAccCashDialog::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCurrencyList(&m_wndCurrency, m_szCurrencyKey);

	
}

/*void CAccCashDialog::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccCashDialog::OnExchangeRateChange(){
	
} */
/*void CAccCashDialog::OnExchangeRateSetfocus(){
	
} */
/*void CAccCashDialog::OnExchangeRateKillfocus(){
	
} */
int CAccCashDialog::OnExchangeRateCheckValue(){
	return 0;
}
 
void CAccCashDialog::OnExpenseIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccCashDialog::OnExpenseIDSelendok(){
	
}

/*void CAccCashDialog::OnExpenseIDSetfocus(){
	
}*/
/*void CAccCashDialog::OnExpenseIDKillfocus(){
	
}*/
long CAccCashDialog::OnExpenseIDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;

//	szFilter.Format(_T(" and aa_parentid ='111' and length(aa_id) > 3"));
	return pMF->LoadExpenseClassList(&m_wndExpenseID, m_szExpenseIDKey, szFilter);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExpenseID.IsSearchKey() && !m_szExpenseIDKey.IsEmpty()){
		szWhere.Format(_T(" and aa_id='%s' "), m_szExpenseIDKey);
	};
	m_wndExpenseID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT aa_id as id, aa_name as name FROM ad_account WHERE aa_active='Y' %s ORDER BY aa_grade, aa_id, aa_parentid "), szWhere);
_debug(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExpenseID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

/*void CAccCashDialog::OnExpenseIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccCashDialog::OnObjectTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccCashDialog::OnObjectTypeSelendok(){
	 UpdateData(TRUE);
}

/*void CAccCashDialog::OnObjectTypeSetfocus(){
	
}*/
/*void CAccCashDialog::OnObjectTypeKillfocus(){
	
}*/
long CAccCashDialog::OnObjectTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerTypeList(&m_wndObjectType, m_szObjectTypeKey);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObjectType.IsSearchKey() && !m_szObjectTypeKey.IsEmpty()){
		szWhere.Format(_T(" and aot_id='%s' "), m_szObjectTypeKey);
	};
	m_wndObjectType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT aot_id as id, aot_name as name FROM acc_object_type WHERE aot_active='Y' %s ORDER BY aot_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CAccCashDialog::OnObjectTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccCashDialog::OnContractNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccCashDialog::OnContractNoSelendok(){
	 
}

/*void CAccCashDialog::OnContractNoSetfocus(){
	
}*/
/*void CAccCashDialog::OnContractNoKillfocus(){
	
}*/
long CAccCashDialog::OnContractNoLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadContractList(&m_wndContractNo, m_szContractNoKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContractNo.IsSearchKey() && !m_szContractNoKeyKey.IsEmpty()){
	};
	m_wndContractNo.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContractNo.AddItems(
			rs.GetValue(_T("contractno")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CAccCashDialog::OnContractNoAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccCashDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItemSel == m_wndList.GetItemCount()-1){
		m_wndList.DeleteItem(nNewItemSel);
		m_wndList.AddItems(_T(""), NULL);
	}
}
 
void CAccCashDialog::OnObjectSelendok(){
	UpdateData(TRUE);
	 m_szAddress = m_wndObject.GetCurrent(2);
	 m_szTaxCode = m_wndObject.GetCurrent(3);
	 UpdateData(FALSE);
}

/*void CAccCashDialog::OnObjectSetfocus(){
	
}*/
/*void CAccCashDialog::OnObjectKillfocus(){
	
}*/
long CAccCashDialog::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndObject, m_szObjectKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	

	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ao_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ao_id as id, ao_name as name FROM acc_object WHERE ao_typeid='%s' %s ORDER BY ao_id "), m_szObjectTypeKey, szWhere);
_debug(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

/*void CAccCashDialog::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccCashDialog::OnAddressChange(){
	
} */
/*void CAccCashDialog::OnAddressSetfocus(){
	
} */
/*void CAccCashDialog::OnAddressKillfocus(){
	
} */
int CAccCashDialog::OnAddressCheckValue(){
	return 0;
}
 
/*void CAccCashDialog::OnTransactorChange(){
	
} */
/*void CAccCashDialog::OnTransactorSetfocus(){
	
} */
/*void CAccCashDialog::OnTransactorKillfocus(){
	
} */
int CAccCashDialog::OnTransactorCheckValue(){
	return 0;
}
 
/*void CAccCashDialog::OnReasonChange(){
	
} */
/*void CAccCashDialog::OnReasonSetfocus(){
	
} */
/*void CAccCashDialog::OnReasonKillfocus(){
	
} */
int CAccCashDialog::OnReasonCheckValue(){
	return 0;
}
 
/*void CAccCashDialog::OnIncludedChange(){
	
} */
/*void CAccCashDialog::OnIncludedSetfocus(){
	
} */
/*void CAccCashDialog::OnIncludedKillfocus(){
	
} */
int CAccCashDialog::OnIncludedCheckValue(){
	return 0;
}
int CAccCashDialog::OnIncludingTaxSelect(){
	UpdateData(TRUE);
/*
	if(m_bIncludingTax){
		m_wndList.SetColumnWidth(2, 185);
		m_wndList.SetColumnWidth(4, 50);
		m_wndList.SetColumnWidth(5, 90);
		m_wndList.SetColumnWidth(6, 90);
		m_wndTab.InsertAt(1, _T("Tax"), &m_wndTaxInvoiceList);
	}
	else
	{
		m_wndList.SetColumnWidth(2, 285);
		m_wndList.SetColumnWidth(4, 0);
		m_wndList.SetColumnWidth(5, 0);
		m_wndList.SetColumnWidth(6, 0);
		m_wndTab.DeleteItem(1);
		m_wndTaxInvoiceList.ShowWindow(SW_HIDE);
	}
	*/
	m_wndTab.SetCurSel(0);

	return 0;
}
 

/*void CAccCashDialog::OnNoteChange(){
	
} */
/*void CAccCashDialog::OnNoteSetfocus(){
	
} */
/*void CAccCashDialog::OnNoteKillfocus(){
	
} */
int CAccCashDialog::OnNoteCheckValue(){
	return 0;
} 
void CAccCashDialog::OnListDblClick(){
	OnListEditItem();
}
 
void CAccCashDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	CString szLineID = m_wndList.GetItemText(nNewItem, 8);
//	m_wndInput.SetReference(m_szVoucherType, m_nCash_ID , szLineID);

}
 
int CAccCashDialog::OnListAddItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't add item with current status"), MB_OK);
		return -1;
	}

	CAccCashLineInputPopup *newPopup = new CAccCashLineInputPopup(this, VM_ADD);
	newPopup->m_nCash_ID =m_nCash_ID;
	newPopup->m_bTaxIncluded = m_bIncludingTax;
	newPopup->m_szDefDebitAcct = m_szDefDebitAcct;
	newPopup->m_szDefCreditAcct = m_szDefCreditAcct;
	newPopup->m_szDefTaxAcct = m_szDefTaxAcct;
	newPopup->ShowPopup(&m_wndList);
	return 0;
	m_wndInput.SetMode(VM_ADD);
	m_wndList.AddNewLine();


//	CAccCashInput* newPopup = new CAccCashInput(this);
//	newPopup->SetMode(VM_ADD);
//	newPopup->ShowPopup(&m_wndList);
	return 0;
}
int CAccCashDialog::OnListEditItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0){
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return -1;
	}
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't edit item with current status"), MB_OK);
		return -1;
	}

	return 0;
}
int CAccCashDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CString szSQL; 
 	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't delete item with current status"), MB_OK);
		return -1;
	}
	long nLine_ID = str2long(m_wndList.GetItemText(nSel, 0));
	int retMsg = ShowMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
 		return -1; 

 	szSQL.Format(_T("FA_CASHLINE_DELETE(%ld, %ld, '%s') "), m_nCash_ID, nLine_ID, pMF->GetCurrentUser()); 
//Notice(szSQL);

 	int ret  = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){ 
		m_wndList.DeleteItem(nSel);
		RecalcTotalAmount();
 	}
	else
	{
		ShowMessageBox(_T("Cannot delete item"));
	}
	return 0;
}
 
long CAccCashDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	int nIndex = 1;
	CString tmpStr;
	szSQL.Format(_T("SELECT facl_cashline_id as cashline_id, ") \
		_T("facl_line as lineidx, ") \
		_T("facl_description as description, ") \
		_T("facl_debit_acct as debitaccount, ") \
		_T("facl_credit_acct as creditaccount, ") \
		_T("facl_tax_acct as taxaccount, ") \
		_T("facl_baseamt as baseamount, ") \
		_T("facl_taxamt as taxamount, ") \
		_T("facl_tax_id as taxid, ") \
		_T("facl_amount as amount, ") \
		_T("facl_job_id as jobid ") \
		_T("FROM fa_cashline WHERE facl_cash_id=%ld  ORDER BY facl_line "),  m_nCash_ID);



	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("cashline_id")),
			rs.GetValue(_T("DebitAccount")), 
			rs.GetValue(_T("CreditAccount")),
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")),
			rs.GetValue(_T("TaxAccount")), 
			rs.GetValue(_T("TaxID")), 
			rs.GetValue(_T("TaxAmount")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("JobID")), 
			rs.GetValue(_T("lineidx")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;
}





void CAccCashDialog::OnTaxInvoiceListDblClick(){
	OnTaxInvoiceListEditItem();
}
 
void CAccCashDialog::OnTaxInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;



}
 
int CAccCashDialog::OnTaxInvoiceListAddItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't add item with current status"), MB_OK);
		return -1;
	}

	CAccTaxCreationDialog dlg(this, VM_ADD);
//	dlg.m_szTaxInvoiceID = m_wndTaxInvoiceList.GetItemText(nSel, 6);
//	dlg.m_szInvoiceDate = m_szAccountingDate;
//	dlg.m_szReferenceID = m_nCash_ID;


	if(dlg.DoModal() == IDOK){

	}
	return 0;
}
int CAccCashDialog::OnTaxInvoiceListEditItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	
	int nSel = m_wndTaxInvoiceList.GetCurSel();
	if(nSel < 0){
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return -1;
	}
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't edit item with current status"), MB_OK);
		return -1;
	}
	
	CAccTaxCreationDialog dlg(this, VM_EDIT);
	dlg.m_szTaxInvoiceID = m_wndTaxInvoiceList.GetItemText(nSel, 5);
	dlg.m_szInvoiceDate = m_szAccountingDate;
	dlg.m_szReferenceID = ToString(m_nCash_ID);
	dlg.m_szAccountingObjectName = m_wndObject.GetCurrent(1);
	dlg.m_szAccountingObjectAddress = m_szAddress;
	dlg.m_szVATCode = m_wndObject.GetCurrent(3);
	if(dlg.DoModal() == IDOK){
		if(dlg.m_bApplyAll)
		{
			for(int i =0; i < m_wndTaxInvoiceList.GetItemCount(); i++)
			{
				m_wndTaxInvoiceList.SetItemText(i, 0, dlg.m_szDescription);
				m_wndTaxInvoiceList.SetItemText(i, 5, dlg.m_szInvoiceNo);
			}
		}
		else
		{
			m_wndTaxInvoiceList.SetItemText(nSel, 0, dlg.m_szDescription);
			m_wndTaxInvoiceList.SetItemText(nSel, 5, dlg.m_szInvoiceNo);

		}
	}

	return 0;
}
int CAccCashDialog::OnTaxInvoiceListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CString szSQL; 
 	
	int nSel = m_wndTaxInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't delete item with current status"), MB_OK);
		return -1;
	}
	CString szLineID = m_wndTaxInvoiceList.GetItemText(nSel, 8);
	int retMsg = ShowMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
 		return -1; 

 	szSQL.Format(_T("fa_cashline_delete('%s', '%s', '%s') "), m_nCash_ID, szLineID, pMF->GetCurrentUser()); 
//Notice(szSQL);
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
		m_wndTaxInvoiceList.DeleteItem(nSel);
		RecalcTotalAmount();
 	}
	return 0;
}
 
long CAccCashDialog::OnTaxInvoiceListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	return 0;
	m_wndTaxInvoiceList.BeginLoad(); 
	
	int nCount = 0;
	int nIndex = 1;
	CString tmpStr;
	szSQL.Format(_T("SELECT fact_cashtax_id as cashtax_id, ") \
		_T("fact_invoicetax_id as invoice_id, ") \
		_T("fact_description as description, ") \
		_T("fact_tax_acct as taxaccount, ") \
		_T("fact_baseamt as baseamt, ") \
		_T("fact_taxrate as taxrate, ") \
		_T("fact_amount as amount ") \
		_T("FROM fa_cashtax ") \
		_T("WHERE fact_cash_id=%ld ORDER BY fact_taxrate "), m_nCash_ID);



	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxInvoiceList.AddItems(
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("TaxAccount")), 
			rs.GetValue(_T("baseamt")), 
			rs.GetValue(_T("TaxRate")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("invoice_id")),
			rs.GetValue(_T("cashtax_id")),
			NULL);
		rs.MoveNext();
	}

	m_wndTaxInvoiceList.EndLoad(); 
	return nCount;
}

/*void CAccCashDialog::OnUntaxedAmountChange(){
	
} */
/*void CAccCashDialog::OnUntaxedAmountSetfocus(){
	
} */
/*void CAccCashDialog::OnUntaxedAmountKillfocus(){
	
} */
int CAccCashDialog::OnUntaxedAmountCheckValue(){
	return 0;
}
 
/*void CAccCashDialog::OnTaxesAmountChange(){
	
} */
/*void CAccCashDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CAccCashDialog::OnTaxesAmountKillfocus(){
	
} */
int CAccCashDialog::OnTaxesAmountCheckValue(){
	return 0;
}
 
/*void CAccCashDialog::OnAmountChange(){
	
} */
/*void CAccCashDialog::OnAmountSetfocus(){
	
} */
/*void CAccCashDialog::OnAmountKillfocus(){
	
} */
int CAccCashDialog::OnAmountCheckValue(){
	return 0;
}
 
void CAccCashDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnAddAccCashDialog();
}
 
void CAccCashDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnEditAccCashDialog();
}
 
void CAccCashDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnDeleteAccCashDialog();
}
 
void CAccCashDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAccCashDialog();
}
 
void CAccCashDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelAccCashDialog();
}
 
void CAccCashDialog::OnPrintSelect(){
//	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndList.EndEdit(TRUE);
//	CFAPrintForm printer;
//	//printer.PrintReceipts(m_szVoucherNo, m_szVoucherType);
//	CGuiMenu menu(this);
//	menu.CreatePopupMenu();
//	if (m_szVoucherType == _T("R"))
//		menu.AppendMenu(MF_BYPOSITION, 1, _T("Print Receipt"));
//	else if (m_szVoucherType == _T("P"))
//		menu.AppendMenu(MF_BYPOSITION, 1, _T("Print Payment"));
//	menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Voucher"));
//	menu.MakeOwnerDraw(FALSE);
//	CPoint pt;
//	CRect rect;
//	m_wndPrint.GetWindowRect(&rect);
//	pt.x = rect.right;
//	pt.y = rect.top-2;
//	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
//	switch (ret){
//	case 1:	
////		printer.PrintCashSheet(m_szVoucherNo, m_szVoucherType);
//		printer.CASH_PrintReceipt(m_nCash_ID);
//		break;
//	case 2:
////		printer.PrintVoucher(m_szVoucherNo, m_szVoucherType);
//		break;
//	case 3: 
//		break;
//	case 4:
//		break;
//	}
}
 
void CAccCashDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	CString szSQL, tmpStr;
	if(m_szPosted != _T("Y"))
	{
		szSQL.Format(_T("UPDATE fa_cash SET fac_posted='Y', fac_posteddate=systimestamp, fac_postedby='%s', fac_status='P' ") \
			_T(" WHERE fac_cash_id=%ld and fac_status='O' and fac_posted<>'Y'"), pMF->GetCurrentUser(), m_nCash_ID);

		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndList.EnableEdit(false);
			TranslateString(_T("Unpost"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);
			m_szPosted = _T("Y");
			m_szStatus = _T("P");
		}
	}
	else
	{
		szSQL.Format(_T("UPDATE fa_cash SET fac_posted='N', fac_status='O' ") \
			_T(" WHERE fac_cash_id=%ld and fac_status='P' and fac_posted='Y'"),  m_nCash_ID);
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			m_wndEdit.EnableWindow(TRUE);
			m_wndDelete.EnableWindow(TRUE);
			m_wndList.EnableEdit(true);
			TranslateString(_T("Post"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);
			m_szPosted = _T("N");
			m_szStatus = _T("O");

		}

	}
_fmsg(_T("%s"), szSQL);
} 
void CAccCashDialog::OnUtilitiesSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	return;
	CGuiMenu menu(this);
	
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Add Customer-Vendor"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Add Employeer"));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("Add Expense"));
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Add Job"));

	menu.MakeOwnerDraw(FALSE);
	CPoint pt;
	CRect rect;
	m_wndUtilities.GetWindowRect(&rect);
	pt.x = rect.right;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret){
	case 1:
		break;
	case 2:
		break;
	case 3: 
		break;
	case 4:
		break;
	}
	_msg(_T("\r\nSelected: %d"), ret);
}
 
void CAccCashDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListAddItem();

}
 
int CAccCashDialog::OnAddAccCashDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAccCashDialog::OnEditAccCashDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAccCashDialog::OnDeleteAccCashDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessageBox(_T("Do you want to delete voucher?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("FA_CASH_DELETE(%ld, '%s') "), m_nCash_ID, pMF->GetCurrentUser()); 
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
 		SetMode(VM_NONE); 
 		OnCancelAccCashDialog(); 
 	}
	return 0;
}

int CAccCashDialog::OnSaveAccCashDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szWhere; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("fa_cash_create(%s) "), m_fa_cashTbl.FormatSQL());
	else
		szSQL.Format(_T("fa_cash_update(%s) "),  m_fa_cashTbl.FormatSQL());
 
 //Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("%s"), m_fa_cashTbl.GetInsertSQL());
	}
	else
	{
		szWhere.Format(_T(" WHERE fac_cash_id = %ld"), m_nCash_ID);
		szSQL.Format(_T("%s"), m_fa_cashTbl.GetUpdateSQL(_T("fac_cash_id")));
		szSQL += szWhere;
	}
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		
		if(GetMode() == VM_EDIT){
//			CGuiDialog::OnCancel();
			SetMode(VM_VIEW);

		}
		else{
//			m_nCash_ID = szRes;
			SetMode(VM_VIEW);
			OnListAddItem();
		}
		return 1;
 	} 
 	return -1; 
}

int CAccCashDialog::OnCancelAccCashDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	return 0;
}
 
int CAccCashDialog::OnAccCashDialogListLoadData(){
	return 0;
}

void CAccCashDialog::RecalcTotalAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_cash WHERE fac_cash_id=%ld "), m_nCash_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fac_baseamt"), m_nUntaxedAmount);
		rs.GetValue(_T("fac_taxamt"), m_nTaxesAmount);
		rs.GetValue(_T("fac_amount"), m_nAmount);
		UpdateData(false);
		OnTaxInvoiceListLoadData();
	}
}



bool CAccCashDialog::OnCloseWindow(){
_tprintf(_T("adas"));
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		int nMsg = ShowMessageBox(_T("Data is not save. Do you want to save?"), MB_YESNOCANCEL|MB_ICONWARNING);
		if(nMsg == IDNO)
			return true;
		if(nMsg == IDCANCEL)
			return false;
		if(OnSaveAccCashDialog() > 0)
			return true;
		else
			return false;
	}
	return true;
}

void CAccCashDialog::RefreshData()
{
	OnListLoadData();
}