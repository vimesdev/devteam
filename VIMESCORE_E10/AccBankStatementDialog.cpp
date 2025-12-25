#include "AccBankStatementDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/PrintForms.h"
#include "AccTaxCreationDialog.h"


static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnExchangeRateCheckValue();
} 
static void _OnExpenseIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnExpenseIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExpenseIDSelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnExpenseIDSelendok();
}
/*static void _OnExpenseIDSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnExpenseIDKillfocus();
}*/
/*static void _OnExpenseIDKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnExpenseIDKillfocus();
}*/
static long _OnExpenseIDLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnExpenseIDLoadData();
}
/*static void _OnExpenseIDAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnExpenseIDAddNew();
}*/
static void _OnContractNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnContractNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractNoSelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnContractNoSelendok();
}
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnContractNoKillfocus();
}*/
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnContractNoKillfocus();
}*/
static long _OnContractNoLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnContractNoLoadData();
}
/*static void _OnContractNoAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnContractNoAddNew();
}*/
static void _OnObjectTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnObjectTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectTypeSelendok();
}
/*static void _OnObjectTypeSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectTypeKillfocus();
}*/
/*static void _OnObjectTypeKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectTypeKillfocus();
}*/
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnObjectTypeLoadData();
}
/*static void _OnObjectTypeAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectTypeAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnAddressCheckValue();
} 
static void _OnPartnerBankAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnPartnerBankAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPartnerBankAccountSelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnPartnerBankAccountSelendok();
}
/*static void _OnPartnerBankAccountSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnPartnerBankAccountKillfocus();
}*/
/*static void _OnPartnerBankAccountKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnPartnerBankAccountKillfocus();
}*/
static long _OnPartnerBankAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnPartnerBankAccountLoadData();
}
/*static void _OnPartnerBankAccountAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnPartnerBankAccountAddNew();
}*/
/*static void _OnPartnerBankNameChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnPartnerBankNameChange();
} */
/*static void _OnPartnerBankNameSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnPartnerBankNameSetfocus();} */ 
/*static void _OnPartnerBankNameKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnPartnerBankNameKillfocus();
} */
static int _OnPartnerBankNameCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnPartnerBankNameCheckValue();
} 
static void _OnBankAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementDialog* )pWnd)->OnBankAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankAccountSelendokFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnBankAccountSelendok();
}
/*static void _OnBankAccountSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnBankAccountKillfocus();
}*/
/*static void _OnBankAccountKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnBankAccountKillfocus();
}*/
static long _OnBankAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnBankAccountLoadData();
}
/*static void _OnBankAccountAddNewFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnBankAccountAddNew();
}*/
/*static void _OnBankNameChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnBankNameChange();
} */
/*static void _OnBankNameSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnBankNameSetfocus();} */ 
/*static void _OnBankNameKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnBankNameKillfocus();
} */
static int _OnBankNameCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnBankNameCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnUntaxedAmountChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnUntaxedAmountChange();
} */
/*static void _OnUntaxedAmountSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnUntaxedAmountSetfocus();} */ 
/*static void _OnUntaxedAmountKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnUntaxedAmountKillfocus();
} */
static int _OnUntaxedAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnUntaxedAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnUtilitiesSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnUtilitiesSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CAccBankStatementDialog *pVw = (CAccBankStatementDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAccBankStatementDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAccBankStatementDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnListDeleteItem();
} 


static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnListEditItem();
}




static long _OnTaxInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementDialog*)pWnd)->OnTaxInvoiceListLoadData();
} 
static void _OnTaxInvoiceListDblClickFnc(CWnd *pWnd){
	((CAccBankStatementDialog*)pWnd)->OnTaxInvoiceListDblClick();
} 
static void _OnTaxInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAccBankStatementDialog*)pWnd)->OnTaxInvoiceListSelectChange(nOldItem, nNewItem);
} 
static int _OnTaxInvoiceListDeleteItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnTaxInvoiceListDeleteItem();
} 


static int _OnTaxInvoiceListAddItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnTaxInvoiceListAddItem();
}
static int _OnTaxInvoiceListEditItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnTaxInvoiceListEditItem();
}

static int _OnAddAccBankStatementDialogFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnAddAccBankStatementDialog();
} 
static int _OnEditAccBankStatementDialogFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnEditAccBankStatementDialog();
} 
static int _OnDeleteAccBankStatementDialogFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnDeleteAccBankStatementDialog();
} 
static int _OnSaveAccBankStatementDialogFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnSaveAccBankStatementDialog();
} 
static int _OnCancelAccBankStatementDialogFnc(CWnd *pWnd){
	 return ((CAccBankStatementDialog*)pWnd)->OnCancelAccBankStatementDialog();
} 
CAccBankStatementDialog::CAccBankStatementDialog(CWnd *pParent, int nMode, CString szVoucherType):
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);	
	m_szVoucherType = szVoucherType;
	
	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAccBankStatementDialog::~CAccBankStatementDialog(){
}
void CAccBankStatementDialog::OnCreateComponents(){
	//Chuyen tien noi bo
	if(m_szVoucherType == _T("T")){
		m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 180);
		m_wndGeneralInformation.Create(this, _T("General Information"), 230, 5, 800, 180);
		m_wndVoucherLine.Create(this, _T("Lines"), 5, 185, 800, 570);
		m_wndTypeLabel.Create(this, _T("Transaction Type"), 10, 29, 110, 54);
		m_wndType.Create(this,115, 30, 220, 55); 
		m_wndTypeLabel.ShowWindow(SW_HIDE);
		m_wndType.ShowWindow(SW_HIDE);
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
//Truong hop chuyen tien noi bo thi bien m_wndObject se la tu ngan hang nao chuyen di
		m_wndObjectLabel.Create(this, _T("From Bank Account"), 235, 30, 365, 55);
		m_wndObject.Create(this,370, 30, 505, 55); 
		m_wndObjectName.Create(this,510, 30, 795, 55); 

//Cac control nay khong dung nhung van phai tao tranh truong hop sinh ra roi.
		m_wndPartnerBankAccountLabel.Create(this, _T("Bank Account"), 235, 120, 335, 145);
		m_wndPartnerBankAccount.Create(this,340, 120, 490, 145); 
		m_wndPartnerBankName.Create(this,495, 120, 795, 145); 
		m_wndTransactor.Create(this,340, 120, 490, 145);
		m_wndTransactor.ShowWindow(SW_HIDE);
		m_wndPartnerBankAccountLabel.ShowWindow(SW_HIDE);
		m_wndPartnerBankName.ShowWindow(SW_HIDE);
		m_wndPartnerBankAccount.ShowWindow(SW_HIDE);

//Ngan hang nhan tien
		m_wndBankAccountLabel.Create(this, _T("To Bank Account"), 235, 60, 365, 85);
		m_wndBankAccount.Create(this,370, 60, 505, 85); 
		m_wndBankName.Create(this,510, 60, 795, 85); 
		m_wndReasonLabel.Create(this, _T("Description"), 235, 90, 365, 115);
		m_wndReason.Create(this,370, 90, 795, 175); 
		m_wndUntaxedAmountLabel.Create(this, _T("Untaxed Amount"), 565, 480, 675, 505);
		m_wndUntaxedAmount.Create(this,680, 480, 795, 505); 
		m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 565, 510, 675, 535);
		m_wndTaxesAmount.Create(this,680, 510, 795, 535); 
		m_wndAmountLabel.Create(this, _T("Total Amount"), 565, 540, 675, 565);
		m_wndAmount.Create(this,680, 540, 795, 565); 
		m_wndAdd.Create(this, _T("&Add"), 120, 575, 200, 600);
		m_wndEdit.Create(this, _T("&Edit"), 205, 575, 285, 600);
		m_wndDelete.Create(this, _T("&Delete"), 290, 575, 370, 600);
		m_wndSave.Create(this, _T("&Save"), 375, 575, 455, 600);
		m_wndCancel.Create(this, _T("&Cancel"), 460, 575, 540, 600);
		m_wndPrint.Create(this, _T("&Print"), 545, 575, 625, 600);
		m_wndPost.Create(this, _T("Post"), 630, 575, 710, 600);
		m_wndUtilities.Create(this, _T("&Utilities"), 715, 575, 795, 600);
		m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
		m_wndList.Create(this,10, 210, 795, 475); 
		m_wndTaxInvoiceList.Create(this,10, 480, 560, 565); 


	}
	else

	{
		m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 240);
		m_wndGeneralInformation.Create(this, _T("General Information"), 230, 5, 800, 150);
		m_wndVoucherLine.Create(this, _T("Lines"), 5, 245, 800, 570);
		m_wndBankTransaction.Create(this, _T("Bank Transaction"), 230, 155, 800, 240);
		m_wndTypeLabel.Create(this, _T("Transaction Type"), 10, 29, 110, 54);
		m_wndType.Create(this,115, 30, 220, 55); 
		m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 60, 110, 85);
		m_wndVoucherNo.Create(this,115, 60, 220, 85); 
		m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 90, 110, 115);
		m_wndVoucherDate.Create(this,115, 90, 220, 115); 
		m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 120, 110, 145);
		m_wndAccountingDate.Create(this,115, 120, 220, 145); 
		m_wndCurrencyLabel.Create(this, _T("Currency"), 10, 150, 110, 175);
		m_wndCurrency.Create(this,115, 150, 220, 175); 
		m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 10, 180, 110, 205);
		m_wndExchangeRate.Create(this,115, 180, 220, 205); 
		m_wndExpenseIDLabel.Create(this, _T("Expense ID"), 10, 210, 110, 235);
		m_wndExpenseID.Create(this,115, 210, 220, 235); 
		m_wndContractNoLabel.Create(this, _T("Contract No"), 235, 30, 335, 55);
		m_wndContractNo.Create(this,340, 30, 490, 55); 
		m_wndObjectTypeLabel.Create(this, _T("Object Type"), 495, 30, 595, 55);
		m_wndObjectType.Create(this,600, 30, 795, 55); 
		m_wndObjectLabel.Create(this, _T("Object"), 235, 60, 335, 85);
		m_wndObject.Create(this,340, 60, 490, 85); 
		m_wndObjectName.Create(this,495, 60, 795, 85); 
		m_wndAddressLabel.Create(this, _T("Address"), 235, 90, 335, 115);
		m_wndAddress.Create(this,340, 90, 795, 115);
		m_wndPartnerBankAccountLabel.Create(this, _T("Bank Account"), 235, 120, 335, 145);
		m_wndPartnerBankAccount.Create(this,340, 120, 490, 145); 
		m_wndTransactor.Create(this,340, 120, 490, 145);
		m_wndTransactor.ShowWindow(SW_HIDE);

//		m_wndPartnerBankNameLabel.Create(this, _T(""), 495, 120, 495, 145);
		m_wndPartnerBankName.Create(this,495, 120, 795, 145); 

		m_wndBankAccountLabel.Create(this, _T("Bank Account"), 235, 180, 335, 205);
		m_wndBankAccount.Create(this,340, 180, 490, 205); 
		m_wndBankName.Create(this,495, 180, 792, 205); 
		m_wndReasonLabel.Create(this, _T("Description"), 235, 210, 335, 235);
		m_wndReason.Create(this,340, 210, 795, 235); 
		m_wndUntaxedAmountLabel.Create(this, _T("Untaxed Amount"), 565, 480, 675, 505);
		m_wndUntaxedAmount.Create(this,680, 480, 795, 505); 
		m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 565, 510, 675, 535);
		m_wndTaxesAmount.Create(this,680, 510, 795, 535); 
		m_wndAmountLabel.Create(this, _T("Total Amount"), 565, 540, 675, 565);
		m_wndAmount.Create(this,680, 540, 795, 565); 
		m_wndAdd.Create(this, _T("&Add"), 120, 575, 200, 600);
		m_wndEdit.Create(this, _T("&Edit"), 205, 575, 285, 600);
		m_wndDelete.Create(this, _T("&Delete"), 290, 575, 370, 600);
		m_wndSave.Create(this, _T("&Save"), 375, 575, 455, 600);
		m_wndCancel.Create(this, _T("&Cancel"), 460, 575, 540, 600);
		m_wndPrint.Create(this, _T("&Print"), 545, 575, 625, 600);
		m_wndPost.Create(this, _T("Post"), 630, 575, 710, 600);
		m_wndUtilities.Create(this, _T("&Utilities"), 715, 575, 795, 600);
		m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
		m_wndList.Create(this,10, 270, 795, 475); 
		m_wndTaxInvoiceList.Create(this,10, 480, 560, 565); 
	}
}
void CAccBankStatementDialog::OnInitializeComponents(){
	
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
	m_wndExpenseID.Format(2, 0, 10, 1);
	m_wndCurrency.Format(2, 0, 10, 1);
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
//	m_wndPartnerBankAccount.SetLimitText(250);
//	m_wndPartnerBankAccount.SetCheckValue(true);
//	m_wndReason.SetCheckValue(true);
	m_wndReason.LimitText(250);

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
	m_wndTaxesAmount.SetLimitText(16);
	m_wndTaxesAmount.SetReadOnly(TRUE);
	m_wndTaxesAmount.SetCurrencyFormat(true);
	m_wndTaxesAmount.SetTextColor(RGB(0, 64, 128));
//	m_wndTaxesAmount.SetCheckValue(true);
	

	m_wndBankAccount.SetCheckValue(TRUE);

	m_wndBankName.SetReadOnly(true);

	m_wndPartnerBankName.SetReadOnly(true);
	m_wndObjectName.SetReadOnly(true);
	m_wndAddress.SetReadOnly(true);
	
	m_wndType.Format(2, 0, 10, 1);
	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndType.SetCheckValue(TRUE);

	m_wndExpenseID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExpenseID.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndContractNo.InsertColumn(0, _T("Contract No"), CFMT_TEXT, 120);
	m_wndContractNo.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndObject.Format(2, 0, 10, 1);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObject.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndObject.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);

	m_wndPartnerBankAccount.Format(2, 0, 10, 1);
	m_wndPartnerBankAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndPartnerBankAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndBankAccount.Format(2, 0, 10, 1);
	m_wndBankAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndBankAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndList.GetHeaderControl()->SetItemHeight(1);

	m_wndList.InsertColumn(0, _T("Debit Account"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Credit Account"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 185);
	m_wndList.InsertColumn(3, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(4, _T("% Tax Rate"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(5, _T("Tax Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Tax Account"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("Job ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(8, _T("lineidx"), CFMT_TEXT, 0);


	m_wndTaxInvoiceList.InsertColumn(0, _T("Tax Description"), CFMT_TEXT, 150);
	m_wndTaxInvoiceList.InsertColumn(1, _T("Tax Account"), CFMT_TEXT, 80);
	m_wndTaxInvoiceList.InsertColumn(2, _T("Base"), CFMT_MONEY, 80);
	m_wndTaxInvoiceList.InsertColumn(3, _T("%"), CFMT_NUMBER, 30);
	m_wndTaxInvoiceList.InsertColumn(4, _T("Tax Amount"), CFMT_MONEY, 80);
	m_wndTaxInvoiceList.InsertColumn(5, _T("Invoice"), CFMT_TEXT, 95);
	m_wndTaxInvoiceList.InsertColumn(5, _T("Invoice Date"), CFMT_DATE, 90);
	m_wndTaxInvoiceList.InsertColumn(6, _T("bankstatementtax_id"), CFMT_TEXT, 0);

	m_fa_bankStatementTbl.SetTableName(_T("fa_bankstatement"));
	m_fa_bankStatementTbl.AddField(_T("fabs_bankstatement_id"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_client_id"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_org_id"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_user_id"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_invoicetype"), dfText, 1); 
	m_fa_bankStatementTbl.AddField(_T("fabs_invoiceno"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_invoicedate"), dfDate); 
	m_fa_bankStatementTbl.AddField(_T("fabs_acctdate"), dfDate); 
	m_fa_bankStatementTbl.AddField(_T("fabs_currency_id"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_exchangerate"), dfDouble); 
	m_fa_bankStatementTbl.AddField(_T("fabs_expense_id"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_contract_id"), dfText, 32);
	m_fa_bankStatementTbl.AddField(_T("fabs_partner_type_id"), dfText, 3); 
	m_fa_bankStatementTbl.AddField(_T("fabs_partner_id"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_partner_address"), dfText, 255); 
	m_fa_bankStatementTbl.AddField(_T("fabs_reason"), dfText, 255); 
	m_fa_bankStatementTbl.AddField(_T("fabs_description"), dfText, 255); 
	m_fa_bankStatementTbl.AddField(_T("fabs_transactor"), dfText, 128); 
	m_fa_bankStatementTbl.AddField(_T("fabs_paymethod"), dfText, 3); 
	m_fa_bankStatementTbl.AddField(_T("fabs_bank_account"), dfText, 32); 
	m_fa_bankStatementTbl.AddField(_T("fabs_partner_bank_account"), dfText, 32); 
	

}

void CAccBankStatementDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
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
	m_wndContractNo.SetEvent(WE_SELENDOK, _OnContractNoSelendokFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_SELCHANGE, _OnContractNoSelectChangeFnc);
	m_wndContractNo.SetEvent(WE_LOADDATA, _OnContractNoLoadDataFnc);
	//m_wndContractNo.SetEvent(WE_ADDNEW, _OnContractNoAddNewFnc);
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	//m_wndObjectType.SetEvent(WE_SETFOCUS, _OnObjectTypeSetfocusFnc);
	//m_wndObjectType.SetEvent(WE_KILLFOCUS, _OnObjectTypeKillfocusFnc);
	m_wndObjectType.SetEvent(WE_SELCHANGE, _OnObjectTypeSelectChangeFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	//m_wndObjectType.SetEvent(WE_ADDNEW, _OnObjectTypeAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndObjectName.SetEvent(WE_CHANGE, _OnObjectNameChangeFnc);
	//m_wndObjectName.SetEvent(WE_SETFOCUS, _OnObjectNameSetfocusFnc);
	//m_wndObjectName.SetEvent(WE_KILLFOCUS, _OnObjectNameKillfocusFnc);
	m_wndObjectName.SetEvent(WE_CHECKVALUE, _OnObjectNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndPartnerBankAccount.SetEvent(WE_SELENDOK, _OnPartnerBankAccountSelendokFnc);
	//m_wndPartnerBankAccount.SetEvent(WE_SETFOCUS, _OnPartnerBankAccountSetfocusFnc);
	//m_wndPartnerBankAccount.SetEvent(WE_KILLFOCUS, _OnPartnerBankAccountKillfocusFnc);
	m_wndPartnerBankAccount.SetEvent(WE_SELCHANGE, _OnPartnerBankAccountSelectChangeFnc);
	m_wndPartnerBankAccount.SetEvent(WE_LOADDATA, _OnPartnerBankAccountLoadDataFnc);
	//m_wndPartnerBankAccount.SetEvent(WE_ADDNEW, _OnPartnerBankAccountAddNewFnc);
	//m_wndPartnerBankName.SetEvent(WE_CHANGE, _OnPartnerBankNameChangeFnc);
	//m_wndPartnerBankName.SetEvent(WE_SETFOCUS, _OnPartnerBankNameSetfocusFnc);
	//m_wndPartnerBankName.SetEvent(WE_KILLFOCUS, _OnPartnerBankNameKillfocusFnc);
	m_wndPartnerBankName.SetEvent(WE_CHECKVALUE, _OnPartnerBankNameCheckValueFnc);
	m_wndBankAccount.SetEvent(WE_SELENDOK, _OnBankAccountSelendokFnc);
	//m_wndBankAccount.SetEvent(WE_SETFOCUS, _OnBankAccountSetfocusFnc);
	//m_wndBankAccount.SetEvent(WE_KILLFOCUS, _OnBankAccountKillfocusFnc);
	m_wndBankAccount.SetEvent(WE_SELCHANGE, _OnBankAccountSelectChangeFnc);
	m_wndBankAccount.SetEvent(WE_LOADDATA, _OnBankAccountLoadDataFnc);
	//m_wndBankAccount.SetEvent(WE_ADDNEW, _OnBankAccountAddNewFnc);
	//m_wndBankName.SetEvent(WE_CHANGE, _OnBankNameChangeFnc);
	//m_wndBankName.SetEvent(WE_SETFOCUS, _OnBankNameSetfocusFnc);
	//m_wndBankName.SetEvent(WE_KILLFOCUS, _OnBankNameKillfocusFnc);
	m_wndBankName.SetEvent(WE_CHECKVALUE, _OnBankNameCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
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
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndTaxInvoiceList.SetEvent(WE_SELCHANGE, _OnTaxInvoiceListSelectChangeFnc);
	m_wndTaxInvoiceList.SetEvent(WE_LOADDATA, _OnTaxInvoiceListLoadDataFnc);
	m_wndTaxInvoiceList.SetEvent(WE_DBLCLICK, _OnTaxInvoiceListDblClickFnc);
//	m_wndTaxInvoiceList.AddEvent(1, _T("Delete"), _OnTaxInvoiceListDeleteItemFnc, 0);

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

	m_wndInput.Create(&m_wndList);
	m_wndInput.OnInitDialog();
	m_wndList.SetEditView(&m_wndInput);
	

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
void CAccBankStatementDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_TextEx(pDX, m_wndExpenseID.GetDlgCtrlID(), m_szExpenseIDKey);
	DDX_TextEx(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNoKey);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_TextEx(pDX, m_wndPartnerBankAccount.GetDlgCtrlID(), m_szPartnerBankAccountKey);
	DDX_Text(pDX, m_wndTransactor.GetDlgCtrlID(), m_szTransactor);
	if(m_szVoucherType == _T("T"))
		DDX_Text(pDX, m_wndPartnerBankName.GetDlgCtrlID(), m_szDescription);
	else
		DDX_Text(pDX, m_wndPartnerBankName.GetDlgCtrlID(), m_szPartnerBankName);
	DDX_TextEx(pDX, m_wndBankAccount.GetDlgCtrlID(), m_szBankAccountKey);
	DDX_Text(pDX, m_wndBankName.GetDlgCtrlID(), m_szBankName);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndUntaxedAmount.GetDlgCtrlID(), m_nUntaxedAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CAccBankStatementDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_bankstatement WHERE fabs_bankstatement_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fabs_bankstatement_id"), m_szID);
		rs.GetValue(_T("fabs_paymethod"), m_szTypeKey);
		rs.GetValue(_T("fabs_invoiceno"), m_szVoucherNo);
		rs.GetValue(_T("fabs_invoicedate"), m_szVoucherDate);
		rs.GetValue(_T("fabs_acctdate"), m_szAccountingDate);

		rs.GetValue(_T("fabs_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("fabs_exchangerate"), m_nExchangeRate);
		rs.GetValue(_T("fabs_expense_id"), m_szExpenseIDKey);
		rs.GetValue(_T("fabs_contract_id"), m_szContractNoKey);
		rs.GetValue(_T("fabs_partner_type_id"), m_szObjectTypeKey);
		rs.GetValue(_T("fabs_partner_id"), m_szObjectKey);
		rs.GetValue(_T("fabs_partner_address"), m_szAddress);
		rs.GetValue(_T("fabs_transactor"), m_szTransactor);
		rs.GetValue(_T("fabs_reason"), m_szReason);
		rs.GetValue(_T("fabs_description"), m_szDescription);
		rs.GetValue(_T("fabs_status"), m_szStatus);
		rs.GetValue(_T("fabs_baseamt"), m_nUntaxedAmount);
		rs.GetValue(_T("fabs_taxamt"), m_nTaxesAmount);
		rs.GetValue(_T("fabs_amount"), m_nAmount);
		rs.GetValue(_T("fabs_posted"), m_szPosted);
		rs.GetValue(_T("fabs_bank_account"), m_szBankAccountKey);
		rs.GetValue(_T("fabs_partner_bank_account"), m_szPartnerBankAccountKey);
		
		
		OnListLoadData();
		OnTaxInvoiceListLoadData();
	}

}

void CAccBankStatementDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetMode() == VM_ADD){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		m_szID = pMF->ExecDML(_T("get_uuid()"));
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE fabs_bankstatement_id='%s' "), m_szID);
		m_fa_bankStatementTbl.Open(&pMF->m_db, szWhere);
	}

	m_fa_bankStatementTbl.SetValue(_T("fabs_bankstatement_id"), m_szID);
	m_fa_bankStatementTbl.SetValue(_T("fabs_client_id"), _T(""));
	m_fa_bankStatementTbl.SetValue(_T("fabs_org_id"), _T(""));
	m_fa_bankStatementTbl.SetValue(_T("fabs_user_id"), pMF->GetCurrentUser());
	
	m_fa_bankStatementTbl.SetValue(_T("fabs_invoicetype"), m_szVoucherType);
	m_fa_bankStatementTbl.SetValue(_T("fabs_paymethod"), m_szTypeKey);
	m_fa_bankStatementTbl.SetValue(_T("fabs_invoiceno"), m_szVoucherNo);
	m_fa_bankStatementTbl.SetValue(_T("fabs_invoicedate"), m_szVoucherDate);
	m_fa_bankStatementTbl.SetValue(_T("fabs_acctdate"), m_szAccountingDate);

	m_fa_bankStatementTbl.SetValue(_T("fabs_currency_id"), m_szCurrencyKey);
	m_fa_bankStatementTbl.SetValue(_T("fabs_exchangerate"), m_nExchangeRate);
	m_fa_bankStatementTbl.SetValue(_T("fabs_expense_id"), m_szExpenseIDKey);
	if(m_szVoucherType != _T("T"))
	{
		m_fa_bankStatementTbl.SetValue(_T("fabs_contract_id"), m_szContractNoKey);
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_type_id"), m_szObjectTypeKey);
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_id"), m_szObjectKey);
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_address"), m_szAddress);
		m_fa_bankStatementTbl.SetValue(_T("fabs_transactor"), m_szTransactor);
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_bank_account"), m_szPartnerBankAccountKey);
		m_fa_bankStatementTbl.SetValue(_T("fabs_transactor_note"), m_szTransactorNote);
		m_fa_bankStatementTbl.SetValue(_T("fabs_bank_account"), m_szBankAccountKey);
		m_fa_bankStatementTbl.SetValue(_T("fabs_reason"), m_szReason);
	}
	else
	{
		m_fa_bankStatementTbl.SetValue(_T("fabs_contract_id"), _T(""));
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_type_id"), _T(""));
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_id"), _T(""));
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_address"), _T(""));
		m_fa_bankStatementTbl.SetValue(_T("fabs_transactor"), _T(""));
		m_fa_bankStatementTbl.SetValue(_T("fabs_reason"), m_szReason);
		m_fa_bankStatementTbl.SetValue(_T("fabs_bank_account"), m_szBankAccountKey);
		m_fa_bankStatementTbl.SetValue(_T("fabs_partner_bank_account"), m_szObjectTypeKey);
	}

}

void CAccBankStatementDialog::SetDefaultValues(){

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
	m_szPartnerBankAccountKey.Empty();
	m_szReason.Empty();
	m_nUntaxedAmount=0;
	m_nTaxesAmount=0;
	m_nAmount=0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
}

int CAccBankStatementDialog::SetMode(int nMode){
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
				szSQL.Format(_T("ADM_GETNEXTVAL('ACC_BANKSTATEMENT_RINVOICENO_ASQ','N') "));
			else
				szSQL.Format(_T("ADM_GETNEXTVAL('ACC_BANKSTATEMENT_PINVOICENO_ASQ','N') "));

			m_szVoucherNo = pMF->ExecDML(szSQL);
			m_wndType.SetFocus();
			m_wndList.DeleteAllItems();
			m_wndTaxInvoiceList.DeleteAllItems();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndVoucherNo.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szVoucherNo.Empty();
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

void CAccBankStatementDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccBankStatementDialog::OnTypeSelendok(){
	 UpdateData(TRUE);
	 if(m_szTypeKey.IsEmpty())
		 return;

	 CString szLabel;

	 if(m_szTypeKey == _T("TM"))
	 {
		 TranslateString(_T("Transactor"), szLabel);
		 m_wndPartnerBankAccountLabel.SetWindowText(szLabel);
		 m_wndPartnerBankAccount.ShowWindow(SW_HIDE);
		 m_wndTransactor.ShowWindow(SW_SHOW);
		 m_wndPartnerBankAccount.SetCheckValue(false);
		 m_wndPartnerBankName.EnableWindow(TRUE);
	 }
	 else
	 {
		TranslateString(_T("Account"), szLabel);
		 m_wndPartnerBankAccountLabel.SetWindowText(szLabel);
		 m_wndPartnerBankAccount.ShowWindow(SW_SHOW);
		 m_wndTransactor.ShowWindow(SW_HIDE);
		 m_wndPartnerBankAccount.SetCheckValue(true);
		 m_wndPartnerBankName.EnableWindow(FALSE);
	 }
}
/*void CAccBankStatementDialog::OnTypeSetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnTypeKillfocus(){
	
}*/
long CAccBankStatementDialog::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	if(m_szVoucherType == _T("D"))
		szFilter.Format(_T(" and ads_category='FA_BANK_DEBIT_VOUCHERTYPE'  "));
	else
		szFilter.Format(_T(" and ads_category='FA_BANK_CREDIT_VOUCHERTYPE'  "));

	return pMF->LoadVoucherTypeList(&m_wndType, m_szTypeKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccBankStatementDialog::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccBankStatementDialog::OnVoucherNoChange(){
	
} */
/*void CAccBankStatementDialog::OnVoucherNoSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnVoucherNoKillfocus(){
	
} */
int CAccBankStatementDialog::OnVoucherNoCheckValue(){
	return 0;
}
 
/*void CAccBankStatementDialog::OnVoucherDateChange(){
	
} */
/*void CAccBankStatementDialog::OnVoucherDateSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnVoucherDateKillfocus(){
	
} */
int CAccBankStatementDialog::OnVoucherDateCheckValue(){
	return 0;
}
 
/*void CAccBankStatementDialog::OnAccountingDateChange(){
	
} */
/*void CAccBankStatementDialog::OnAccountingDateSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnAccountingDateKillfocus(){
	
} */
int CAccBankStatementDialog::OnAccountingDateCheckValue(){
	return 0;
}
 
void CAccBankStatementDialog::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccBankStatementDialog::OnCurrencySelendok(){
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

/*void CAccBankStatementDialog::OnCurrencySetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnCurrencyKillfocus(){
	
}*/
long CAccBankStatementDialog::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCurrencyList(&m_wndCurrency, m_szCurrencyKey);
}

/*void CAccBankStatementDialog::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccBankStatementDialog::OnExchangeRateChange(){
	
} */
/*void CAccBankStatementDialog::OnExchangeRateSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnExchangeRateKillfocus(){
	
} */
int CAccBankStatementDialog::OnExchangeRateCheckValue(){
	return 0;
}
 
void CAccBankStatementDialog::OnExpenseIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccBankStatementDialog::OnExpenseIDSelendok(){
	
}

/*void CAccBankStatementDialog::OnExpenseIDSetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnExpenseIDKillfocus(){
	
}*/
long CAccBankStatementDialog::OnExpenseIDLoadData(){
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

/*void CAccBankStatementDialog::OnExpenseIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccBankStatementDialog::OnContractNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccBankStatementDialog::OnContractNoSelendok(){
	 
}

/*void CAccBankStatementDialog::OnContractNoSetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnContractNoKillfocus(){
	
}*/
long CAccBankStatementDialog::OnContractNoLoadData(){
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

/*void CAccBankStatementDialog::OnContractNoAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccBankStatementDialog::OnObjectTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAccBankStatementDialog::OnObjectTypeSelendok(){
	 UpdateData(TRUE);
}

/*void CAccBankStatementDialog::OnObjectTypeSetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnObjectTypeKillfocus(){
	
}*/
long CAccBankStatementDialog::OnObjectTypeLoadData(){
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

/*void CAccBankStatementDialog::OnObjectTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccBankStatementDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItemSel == m_wndList.GetItemCount()-1){
		m_wndList.DeleteItem(nNewItemSel);
		m_wndList.AddItems(_T(""), NULL);
	}
}
 
void CAccBankStatementDialog::OnObjectSelendok(){
	UpdateData(TRUE);
	m_szObjectName = m_wndObject.GetCurrent(1);
	m_szAddress = m_wndObject.GetCurrent(2);
	m_szTaxCode = m_wndObject.GetCurrent(3);
	UpdateData(FALSE);
}

/*void CAccBankStatementDialog::OnObjectSetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnObjectKillfocus(){
	
}*/
long CAccBankStatementDialog::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szVoucherType == _T("T")){
		CString szFilter;
		szFilter.Format(_T(" and (adba_partner_id IS NULL or adba_partner_id='' ) and adba_bank_account_id<>'%s' "), m_szBankAccountKey);
		return pMF->LoadBankAccountList(&m_wndObject, m_szObjectKey, szFilter);
	}
	else
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

/*void CAccBankStatementDialog::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccBankStatementDialog::OnObjectNameChange(){
	
} */
/*void CAccBankStatementDialog::OnObjectNameSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnObjectNameKillfocus(){
	
} */
int CAccBankStatementDialog::OnObjectNameCheckValue(){
	return 0;
} 
/*void CAccBankStatementDialog::OnAddressChange(){
	
} */
/*void CAccBankStatementDialog::OnAddressSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnAddressKillfocus(){
	
} */
int CAccBankStatementDialog::OnAddressCheckValue(){
	return 0;
}
 
void CAccBankStatementDialog::OnPartnerBankAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccBankStatementDialog::OnPartnerBankAccountSelendok(){
	 UpdateData(TRUE);
	 m_szPartnerBankName = m_wndPartnerBankAccount.GetCurrent(1);
	 UpdateData(FALSE);
}
/*void CAccBankStatementDialog::OnPartnerBankAccountSetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnPartnerBankAccountKillfocus(){
	
}*/
long CAccBankStatementDialog::OnPartnerBankAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	//Load cac tai khoan cua doi tuong .
	if (!m_szObjectKey.IsEmpty())
		szFilter.Format(_T(" and adba_partner_id='%s' "), m_szObjectKey);
	return pMF->LoadBankAccountList(&m_wndPartnerBankAccount, m_szPartnerBankAccountKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPartnerBankAccount.IsSearchKey() && !m_szPartnerBankAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPartnerBankAccountKey
};
	m_wndPartnerBankAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPartnerBankAccount.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccBankStatementDialog::OnPartnerBankAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccBankStatementDialog::OnPartnerBankNameChange(){
	
} */
/*void CAccBankStatementDialog::OnPartnerBankNameSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnPartnerBankNameKillfocus(){
	
} */
int CAccBankStatementDialog::OnPartnerBankNameCheckValue(){
	return 0;
} 
void CAccBankStatementDialog::OnBankAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccBankStatementDialog::OnBankAccountSelendok(){
	 UpdateData(TRUE);
	 m_szBankName = m_wndBankAccount.GetCurrent(1);
	 UpdateData(FALSE);
}
/*void CAccBankStatementDialog::OnBankAccountSetfocus(){
	
}*/
/*void CAccBankStatementDialog::OnBankAccountKillfocus(){
	
}*/
long CAccBankStatementDialog::OnBankAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	//Chi load cac tai khoan cua cong ty
	szFilter.Format(_T(" and adba_partner_id in(select adc_company_id from ad_company ) "));
	if(m_szVoucherType == _T("T")){
		szFilter.AppendFormat(_T(" and adba_bank_account_id <>'%s' "), m_szObjectKey);
	}
	return pMF->LoadBankAccountList(&m_wndBankAccount, m_szBankAccountKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBankAccount.IsSearchKey() && !m_szBankAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBankAccountKey
};
	m_wndBankAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBankAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccBankStatementDialog::OnBankAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccBankStatementDialog::OnBankNameChange(){
	
} */
/*void CAccBankStatementDialog::OnBankNameSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnBankNameKillfocus(){
	
} */
int CAccBankStatementDialog::OnBankNameCheckValue(){
	return 0;
} 
/*void CAccBankStatementDialog::OnReasonChange(){
	
} */
/*void CAccBankStatementDialog::OnReasonSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnReasonKillfocus(){
	
} */
int CAccBankStatementDialog::OnReasonCheckValue(){
	return 0;
}
 
/*void CAccBankStatementDialog::OnUntaxedAmountChange(){
	
} */
/*void CAccBankStatementDialog::OnUntaxedAmountSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnUntaxedAmountKillfocus(){
	
} */
int CAccBankStatementDialog::OnUntaxedAmountCheckValue(){
	return 0;
}
 
/*void CAccBankStatementDialog::OnTaxesAmountChange(){
	
} */
/*void CAccBankStatementDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnTaxesAmountKillfocus(){
	
} */
int CAccBankStatementDialog::OnTaxesAmountCheckValue(){
	return 0;
}
 
/*void CAccBankStatementDialog::OnAmountChange(){
	
} */
/*void CAccBankStatementDialog::OnAmountSetfocus(){
	
} */
/*void CAccBankStatementDialog::OnAmountKillfocus(){
	
} */
int CAccBankStatementDialog::OnAmountCheckValue(){
	return 0;
}
 
void CAccBankStatementDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnAddAccBankStatementDialog();
}
 
void CAccBankStatementDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnEditAccBankStatementDialog();
}
 
void CAccBankStatementDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnDeleteAccBankStatementDialog();
}
 
void CAccBankStatementDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAccBankStatementDialog();
}
 
void CAccBankStatementDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelAccBankStatementDialog();
}
 
void CAccBankStatementDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	CPrintForms printer;
	//printer.PrintBankReceipts(m_szVoucherNo, _T("R"));
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	if (m_szVoucherType == _T("C"))
		menu.AppendMenu(MF_BYPOSITION, 1, _T("Print Credit Note"));
	else if (m_szVoucherType == _T("D"))
		menu.AppendMenu(MF_BYPOSITION, 1, _T("Print Debit Note"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Voucher"));
	if (m_szVoucherType == _T("D"))
		menu.AppendMenu(MF_BYPOSITION, 3, _T("Payment Order"));
	menu.MakeOwnerDraw(FALSE);
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.right;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret){
	case 1:
		printer.PrintCreditNote(m_szVoucherNo, m_szVoucherType);
		break;
	case 2:
		printer.PrintBankVoucher(m_szVoucherNo, m_szVoucherType);
		break;
	case 3:
		printer.PrintPaymentOrder(m_szVoucherNo);
		break;
	case 4:
		break;
	}

}
 
void CAccBankStatementDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	CString szSQL, tmpStr;
	if(m_szPosted != _T("Y"))
	{
		szSQL.Format(_T("UPDATE fa_bankstatement SET fabs_posted='Y', fabs_posteddate=systimestamp, fabs_postedby='%s', fabs_status='P' ") \
			_T(" WHERE fabs_bankstatement_id='%s' and fabs_status='O' and fabs_posted<>'Y'"), pMF->GetCurrentUser(), m_szID);

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
		szSQL.Format(_T("UPDATE fa_bankstatement SET fabs_posted='N', fabs_status='O' ") \
			_T(" WHERE fabs_bankstatement_id='%s' and fabs_status='P' and fabs_posted='Y'"),  m_szID);
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
 
void CAccBankStatementDialog::OnUtilitiesSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
 
void CAccBankStatementDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListAddItem();

}
 
void CAccBankStatementDialog::OnListDblClick(){
	OnListEditItem();
}
 
void CAccBankStatementDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	CString szLineID = m_wndList.GetItemText(nNewItem, 8);
	m_wndInput.SetReference(m_szVoucherType, m_szID , szLineID);

}
 
int CAccBankStatementDialog::OnListAddItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't add item with current status"), MB_OK);
		return -1;
	}
_tprintf(_T("\r\n%d"), m_wndInput.GetMode());
	if(m_wndInput.IsWindowVisible()){
		return -1;
	}
	m_wndInput.SetMode(VM_ADD);
	m_wndList.AddNewLine();
	return 0;
}
int CAccBankStatementDialog::OnListEditItem(){
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
	if(m_wndInput.IsWindowVisible()){
		return -1;
	}

	m_wndInput.SetMode(VM_EDIT);
	m_wndList.EditLine(nSel);

	return 0;
}
int CAccBankStatementDialog::OnListDeleteItem(){
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
	CString szLineID = m_wndList.GetItemText(nSel, 8);
	int retMsg = ShowMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
 		return -1; 

 	szSQL.Format(_T("fa_bankstatementline_delete('%s', '%s', '%s') "), m_szID, szLineID, pMF->GetCurrentUser()); 
//Notice(szSQL);
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
		m_wndList.DeleteItem(nSel);
		RecalcTotalAmount();
 	}
	return 0;
}


long CAccBankStatementDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	int nIndex = 1;
	CString tmpStr;
	szSQL.Format(_T("SELECT fabsl_bankstatementline_id as bankstatementline_id, ") \
		_T("fabsl_line as lineidx, ") \
		_T("fabsl_description as description, ") \
		_T("fabsl_debit_acct as debitaccount, ") \
		_T("fabsl_credit_acct as creditaccount, ") \
		_T("fabsl_baseamt as amount, ") \
		_T("fabsl_taxamt as taxamount, ") \
		_T("fabsl_tax_id as taxid, ") \
		_T("fabsl_tax_acct as taxaccount, ") \
		_T("fabsl_job_id as jobid ") \
		_T("FROM fa_bankstatementline WHERE fabsl_bankstatement_id='%s' ORDER BY fabsl_line "), m_szID);



	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("DebitAccount")), 
			rs.GetValue(_T("CreditAccount")),
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("TaxID")), 
			rs.GetValue(_T("TaxAmount")), 
			rs.GetValue(_T("TaxAccount")), 
			rs.GetValue(_T("JobID")), 
			rs.GetValue(_T("bankstatementline_id")),
			rs.GetValue(_T("lineidx")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;
}

void CAccBankStatementDialog::OnTaxInvoiceListDblClick(){
	OnTaxInvoiceListEditItem();
}
 
void CAccBankStatementDialog::OnTaxInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;



}
 
int CAccBankStatementDialog::OnTaxInvoiceListAddItem(){
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
//	dlg.m_szReferenceID = m_szID;


	if(dlg.DoModal() == IDOK){

	}
	return 0;
}
int CAccBankStatementDialog::OnTaxInvoiceListEditItem(){
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
	dlg.m_szTaxInvoiceID = m_wndTaxInvoiceList.GetItemText(nSel, 6);
	dlg.m_szInvoiceDate = m_szAccountingDate;
	dlg.m_szReferenceID = m_szID;
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
int CAccBankStatementDialog::OnTaxInvoiceListDeleteItem(){
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

 	szSQL.Format(_T("fa_bankstatementline_delete('%s', '%s', '%s') "), m_szID, szLineID, pMF->GetCurrentUser()); 
//Notice(szSQL);
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
		m_wndTaxInvoiceList.DeleteItem(nSel);
		RecalcTotalAmount();
 	}
	return 0;
}
 
 
long CAccBankStatementDialog::OnTaxInvoiceListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTaxInvoiceList.BeginLoad(); 
	
	int nCount = 0;
	int nIndex = 1;
	CString tmpStr;
	szSQL.Format(_T("SELECT fabst_bankstatementtax_id as bankstatementtax_id, ") \
		_T("fabst_invoicetax_id as invoice_id, ") \
		_T("fabst_description as description, ") \
		_T("fabst_tax_acct as taxaccount, ") \
		_T("fabst_baseamt as baseamt, ") \
		_T("fabst_taxrate as taxrate, ") \
		_T("fabst_amount as amount ") \
		_T("FROM fa_bankstatementtax ") \
		_T("WHERE fabst_bankstatement_id='%s' ORDER BY fabst_taxrate "), m_szID);



	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxInvoiceList.AddItems(
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("TaxAccount")), 
			rs.GetValue(_T("baseamt")), 
			rs.GetValue(_T("TaxRate")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("invoice_id")),
			rs.GetValue(_T("bankstatementtax_id")),
			NULL);
		rs.MoveNext();
	}

	m_wndTaxInvoiceList.EndLoad(); 
	return nCount;
}

int CAccBankStatementDialog::OnAddAccBankStatementDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAccBankStatementDialog::OnEditAccBankStatementDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAccBankStatementDialog::OnDeleteAccBankStatementDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessageBox(_T("Do you want to delete voucher?(Y/)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("fa_bankstatement_delete('%s', '','','%s') "), m_szID, pMF->GetCurrentUser()); 
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
 		SetMode(VM_NONE); 
 		OnCancelAccBankStatementDialog(); 
		
 	}
	return 0;
}

int CAccBankStatementDialog::OnSaveAccBankStatementDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szWhere; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("fa_bankstatement_create(%s) "), m_fa_bankStatementTbl.FormatSQL());
	else
		szSQL.Format(_T("fa_bankstatement_update(%s) "),  m_fa_bankStatementTbl.FormatSQL());
 
 //Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("%s"), m_fa_bankStatementTbl.GetInsertSQL());
	}
	else
	{
		szWhere.Format(_T(" WHERE fabs_bankstatement_id = '%s'"), m_szID);
		szSQL.Format(_T("%s"), m_fa_bankStatementTbl.GetUpdateSQL(_T("fabs_bankstatement_id")));
		szSQL += szWhere;
	}
//Notice(szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
  { 

		
		if(GetMode() == VM_EDIT){
//			CGuiDialog::OnCancel();
			SetMode(VM_VIEW);

		}
		else{
//			m_szID = szRes;
			SetMode(VM_VIEW);
			OnListAddItem();
		}
		return 1;
 	} 
 	return -1; 
}

int CAccBankStatementDialog::OnCancelAccBankStatementDialog(){
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
 
int CAccBankStatementDialog::OnAccBankStatementDialogListLoadData(){
	return 0;
}


void CAccBankStatementDialog::RecalcTotalAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_bankstatement WHERE fabs_bankstatement_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fabs_baseamt"), m_nUntaxedAmount);
		rs.GetValue(_T("fabs_taxamt"), m_nTaxesAmount);
		rs.GetValue(_T("fabs_amount"), m_nAmount);
		UpdateData(false);
		OnTaxInvoiceListLoadData();
	}
}



bool CAccBankStatementDialog::OnCloseWindow(){

	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		int nMsg = ShowMessageBox(_T("Data is not save. Do you want to save?"), MB_YESNOCANCEL|MB_ICONWARNING);
		if(nMsg == IDNO)
			return true;
		if(nMsg == IDCANCEL)
			return false;
		if(OnSaveAccBankStatementDialog() > 0)
			return true;
		else
			return false;
	}
	return true;
}