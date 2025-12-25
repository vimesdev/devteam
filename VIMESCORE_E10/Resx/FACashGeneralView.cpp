#include "FACashGeneralView.h"
#include "MainFrm.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnReferenceCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashGeneralView* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnIncludedChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnIncludedChange();
} */
/*static void _OnIncludedSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnIncludedSetfocus();} */ 
/*static void _OnIncludedKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnIncludedKillfocus();
} */
static int _OnIncludedCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnIncludedCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashGeneralView* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchageRateChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnExchageRateChange();
} */
/*static void _OnExchageRateSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnExchageRateSetfocus();} */ 
/*static void _OnExchageRateKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnExchageRateKillfocus();
} */
static int _OnExchageRateCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnExchageRateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnExchangeAmountChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnExchangeAmountChange();
} */
/*static void _OnExchangeAmountSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnExchangeAmountSetfocus();} */ 
/*static void _OnExchangeAmountKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnExchangeAmountKillfocus();
} */
static int _OnExchangeAmountCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnExchangeAmountCheckValue();
} 
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashGeneralView* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceTypeAddNew();
}*/
/*static void _OnInvoiceTemplateNoChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceTemplateNoChange();
} */
/*static void _OnInvoiceTemplateNoSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceTemplateNoSetfocus();} */ 
/*static void _OnInvoiceTemplateNoKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceTemplateNoKillfocus();
} */
static int _OnInvoiceTemplateNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnInvoiceTemplateNoCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnInvoiceSignedChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceSignedChange();
} */
/*static void _OnInvoiceSignedSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceSignedSetfocus();} */ 
/*static void _OnInvoiceSignedKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnInvoiceSignedKillfocus();
} */
static int _OnInvoiceSignedCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnInvoiceSignedCheckValue();
} 
static int _OnAddFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnAddFACashGeneralView();
} 
static int _OnEditFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnEditFACashGeneralView();
} 
static int _OnDeleteFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnDeleteFACashGeneralView();
} 
static int _OnSaveFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnSaveFACashGeneralView();
} 
static int _OnCancelFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnCancelFACashGeneralView();
} 
CFACashGeneralView::CFACashGeneralView(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CFACashGeneralView::~CFACashGeneralView(){
}
void CFACashGeneralView::OnCreateComponents(){
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 150);
	m_wndGeneralInformation.Create(this, _T("General Information"), 230, 5, 800, 150);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndReferenceLabel.Create(this, _T("Reference"), 10, 120, 110, 145);
	m_wndReference.Create(this,115, 120, 220, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 235, 30, 335, 55);
	m_wndObject.Create(this,340, 30, 460, 55); 
	m_wndObjectName.Create(this,465, 30, 795, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 60, 335, 85);
	m_wndAddress.Create(this,340, 60, 795, 85); 
	m_wndReasonLabel.Create(this, _T("Reason"), 235, 90, 335, 115);
	m_wndReason.Create(this,340, 90, 795, 115); 
	m_wndIncludedLabel.Create(this, _T("Included"), 235, 120, 335, 145);
	m_wndIncluded.Create(this,340, 120, 795, 145); 
	m_wndCurrency.Create(this,5, 159, 85, 184); 
	m_wndExchageRate.Create(this,86, 159, 166, 184); 
	m_wndAmount.Create(this,172, 159, 252, 184); 
	m_wndExchangeAmount.Create(this,252, 159, 332, 184); 
	m_wndInvoiceType.Create(this,337, 159, 417, 184); 
	m_wndInvoiceTemplateNo.Create(this,420, 159, 500, 184); 
	m_wndInvoiceNo.Create(this,504, 159, 584, 184); 
	m_wndInvoiceDate.Create(this,576, 159, 656, 184); 
	m_wndInvoiceSigned.Create(this,665, 159, 745, 184); 

}
void CFACashGeneralView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndVoucherNo.SetLimitText(1024);
	m_wndVoucherNo.SetCheckValue(true);
	m_wndVoucherDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndVoucherDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);
	m_wndReference.SetLimitText(35);
	m_wndReference.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndObjectName.SetLimitText(35);
	m_wndObjectName.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndReason.SetLimitText(1024);
	m_wndReason.SetCheckValue(true);
	m_wndIncluded.SetLimitText(1024);
	m_wndIncluded.SetCheckValue(true);
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(35);
	m_wndExchageRate.SetLimitText(16);
	m_wndExchageRate.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndExchangeAmount.SetLimitText(16);
	m_wndExchangeAmount.SetCheckValue(true);
	m_wndInvoiceType.SetCheckValue(true);
	m_wndInvoiceType.LimitText(35);
	m_wndInvoiceTemplateNo.SetLimitText(35);
	m_wndInvoiceTemplateNo.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndInvoiceSigned.SetLimitText(35);
	m_wndInvoiceSigned.SetCheckValue(true);




	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFACashGeneralView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
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
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	//m_wndIncluded.SetEvent(WE_CHANGE, _OnIncludedChangeFnc);
	//m_wndIncluded.SetEvent(WE_SETFOCUS, _OnIncludedSetfocusFnc);
	//m_wndIncluded.SetEvent(WE_KILLFOCUS, _OnIncludedKillfocusFnc);
	m_wndIncluded.SetEvent(WE_CHECKVALUE, _OnIncludedCheckValueFnc);
	m_wndCurrency.SetEvent(WE_SELENDOK, _OnCurrencySelendokFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_SELCHANGE, _OnCurrencySelectChangeFnc);
	m_wndCurrency.SetEvent(WE_LOADDATA, _OnCurrencyLoadDataFnc);
	//m_wndCurrency.SetEvent(WE_ADDNEW, _OnCurrencyAddNewFnc);
	//m_wndExchageRate.SetEvent(WE_CHANGE, _OnExchageRateChangeFnc);
	//m_wndExchageRate.SetEvent(WE_SETFOCUS, _OnExchageRateSetfocusFnc);
	//m_wndExchageRate.SetEvent(WE_KILLFOCUS, _OnExchageRateKillfocusFnc);
	m_wndExchageRate.SetEvent(WE_CHECKVALUE, _OnExchageRateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndExchangeAmount.SetEvent(WE_CHANGE, _OnExchangeAmountChangeFnc);
	//m_wndExchangeAmount.SetEvent(WE_SETFOCUS, _OnExchangeAmountSetfocusFnc);
	//m_wndExchangeAmount.SetEvent(WE_KILLFOCUS, _OnExchangeAmountKillfocusFnc);
	m_wndExchangeAmount.SetEvent(WE_CHECKVALUE, _OnExchangeAmountCheckValueFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	//m_wndInvoiceTemplateNo.SetEvent(WE_CHANGE, _OnInvoiceTemplateNoChangeFnc);
	//m_wndInvoiceTemplateNo.SetEvent(WE_SETFOCUS, _OnInvoiceTemplateNoSetfocusFnc);
	//m_wndInvoiceTemplateNo.SetEvent(WE_KILLFOCUS, _OnInvoiceTemplateNoKillfocusFnc);
	m_wndInvoiceTemplateNo.SetEvent(WE_CHECKVALUE, _OnInvoiceTemplateNoCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	//m_wndInvoiceSigned.SetEvent(WE_CHANGE, _OnInvoiceSignedChangeFnc);
	//m_wndInvoiceSigned.SetEvent(WE_SETFOCUS, _OnInvoiceSignedSetfocusFnc);
	//m_wndInvoiceSigned.SetEvent(WE_KILLFOCUS, _OnInvoiceSignedKillfocusFnc);
	m_wndInvoiceSigned.SetEvent(WE_CHECKVALUE, _OnInvoiceSignedCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFACashGeneralViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFACashGeneralViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFACashGeneralViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFACashGeneralViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFACashGeneralViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFACashGeneralView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndIncluded.GetDlgCtrlID(), m_szIncluded);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchageRate.GetDlgCtrlID(), m_nExchageRate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndExchangeAmount.GetDlgCtrlID(), m_nExchangeAmount);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_Text(pDX, m_wndInvoiceTemplateNo.GetDlgCtrlID(), m_szInvoiceTemplateNo);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndInvoiceSigned.GetDlgCtrlID(), m_szInvoiceSigned);

}
void CFACashGeneralView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFACashGeneralView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFACashGeneralView::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szReference.Empty();
	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szAddress.Empty();
	m_szReason.Empty();
	m_szIncluded.Empty();
	m_szCurrencyKey.Empty();
	m_nExchageRate=0;
	m_nAmount=0;
	m_nExchangeAmount=0;
	m_szInvoiceTypeKey.Empty();
	m_szInvoiceTemplateNo.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szInvoiceSigned.Empty();

}
int CFACashGeneralView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CFACashGeneralView::OnVoucherNoChange(){
	
} */
/*void CFACashGeneralView::OnVoucherNoSetfocus(){
	
} */
/*void CFACashGeneralView::OnVoucherNoKillfocus(){
	
} */
int CFACashGeneralView::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnVoucherDateChange(){
	
} */
/*void CFACashGeneralView::OnVoucherDateSetfocus(){
	
} */
/*void CFACashGeneralView::OnVoucherDateKillfocus(){
	
} */
int CFACashGeneralView::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnAccountingDateChange(){
	
} */
/*void CFACashGeneralView::OnAccountingDateSetfocus(){
	
} */
/*void CFACashGeneralView::OnAccountingDateKillfocus(){
	
} */
int CFACashGeneralView::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnReferenceChange(){
	
} */
/*void CFACashGeneralView::OnReferenceSetfocus(){
	
} */
/*void CFACashGeneralView::OnReferenceKillfocus(){
	
} */
int CFACashGeneralView::OnReferenceCheckValue(){
	return 0;
} 
void CFACashGeneralView::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFACashGeneralView::OnObjectSelendok(){
	 
}
/*void CFACashGeneralView::OnObjectSetfocus(){
	
}*/
/*void CFACashGeneralView::OnObjectKillfocus(){
	
}*/
long CFACashGeneralView::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFACashGeneralView::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFACashGeneralView::OnObjectNameChange(){
	
} */
/*void CFACashGeneralView::OnObjectNameSetfocus(){
	
} */
/*void CFACashGeneralView::OnObjectNameKillfocus(){
	
} */
int CFACashGeneralView::OnObjectNameCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnAddressChange(){
	
} */
/*void CFACashGeneralView::OnAddressSetfocus(){
	
} */
/*void CFACashGeneralView::OnAddressKillfocus(){
	
} */
int CFACashGeneralView::OnAddressCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnReasonChange(){
	
} */
/*void CFACashGeneralView::OnReasonSetfocus(){
	
} */
/*void CFACashGeneralView::OnReasonKillfocus(){
	
} */
int CFACashGeneralView::OnReasonCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnIncludedChange(){
	
} */
/*void CFACashGeneralView::OnIncludedSetfocus(){
	
} */
/*void CFACashGeneralView::OnIncludedKillfocus(){
	
} */
int CFACashGeneralView::OnIncludedCheckValue(){
	return 0;
} 
void CFACashGeneralView::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFACashGeneralView::OnCurrencySelendok(){
	 
}
/*void CFACashGeneralView::OnCurrencySetfocus(){
	
}*/
/*void CFACashGeneralView::OnCurrencyKillfocus(){
	
}*/
long CFACashGeneralView::OnCurrencyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCurrency.IsSearchKey() && !m_szCurrencyKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCurrencyKey
};
	m_wndCurrency.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCurrency.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFACashGeneralView::OnCurrencyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFACashGeneralView::OnExchageRateChange(){
	
} */
/*void CFACashGeneralView::OnExchageRateSetfocus(){
	
} */
/*void CFACashGeneralView::OnExchageRateKillfocus(){
	
} */
int CFACashGeneralView::OnExchageRateCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnAmountChange(){
	
} */
/*void CFACashGeneralView::OnAmountSetfocus(){
	
} */
/*void CFACashGeneralView::OnAmountKillfocus(){
	
} */
int CFACashGeneralView::OnAmountCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnExchangeAmountChange(){
	
} */
/*void CFACashGeneralView::OnExchangeAmountSetfocus(){
	
} */
/*void CFACashGeneralView::OnExchangeAmountKillfocus(){
	
} */
int CFACashGeneralView::OnExchangeAmountCheckValue(){
	return 0;
} 
void CFACashGeneralView::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFACashGeneralView::OnInvoiceTypeSelendok(){
	 
}
/*void CFACashGeneralView::OnInvoiceTypeSetfocus(){
	
}*/
/*void CFACashGeneralView::OnInvoiceTypeKillfocus(){
	
}*/
long CFACashGeneralView::OnInvoiceTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceType.IsSearchKey() && !m_szInvoiceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInvoiceTypeKey
};
	m_wndInvoiceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFACashGeneralView::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFACashGeneralView::OnInvoiceTemplateNoChange(){
	
} */
/*void CFACashGeneralView::OnInvoiceTemplateNoSetfocus(){
	
} */
/*void CFACashGeneralView::OnInvoiceTemplateNoKillfocus(){
	
} */
int CFACashGeneralView::OnInvoiceTemplateNoCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnInvoiceNoChange(){
	
} */
/*void CFACashGeneralView::OnInvoiceNoSetfocus(){
	
} */
/*void CFACashGeneralView::OnInvoiceNoKillfocus(){
	
} */
int CFACashGeneralView::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnInvoiceDateChange(){
	
} */
/*void CFACashGeneralView::OnInvoiceDateSetfocus(){
	
} */
/*void CFACashGeneralView::OnInvoiceDateKillfocus(){
	
} */
int CFACashGeneralView::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnInvoiceSignedChange(){
	
} */
/*void CFACashGeneralView::OnInvoiceSignedSetfocus(){
	
} */
/*void CFACashGeneralView::OnInvoiceSignedKillfocus(){
	
} */
int CFACashGeneralView::OnInvoiceSignedCheckValue(){
	return 0;
} 
int CFACashGeneralView::OnAddFACashGeneralView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACashGeneralView::OnEditFACashGeneralView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashGeneralView::OnDeleteFACashGeneralView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelFACashGeneralView();
 	}
	return 0;
}
int CFACashGeneralView::OnSaveFACashGeneralView(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFACashGeneralViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFACashGeneralView::OnCancelFACashGeneralView(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFACashGeneralView::OnFACashGeneralViewListLoadData(){
	return 0;
}
