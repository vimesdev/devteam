#include "FAAdditionView.h"
#include "MainFrm.h"
static void _OnTaxrateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnTaxrateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxrateSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxrateSelendok();
}
/*static void _OnTaxrateSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxrateKillfocus();
}*/
/*static void _OnTaxrateKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxrateKillfocus();
}*/
static long _OnTaxrateLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnTaxrateLoadData();
}
/*static void _OnTaxrateAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxrateAddNew();
}*/
/*static void _OnTaxAmountChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxAmountChange();
} */
/*static void _OnTaxAmountSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxAmountSetfocus();} */ 
/*static void _OnTaxAmountKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxAmountKillfocus();
} */
static int _OnTaxAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnTaxAmountCheckValue();
} 
static void _OnTaxAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnTaxAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAcctSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxAcctSelendok();
}
/*static void _OnTaxAcctSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxAcctKillfocus();
}*/
/*static void _OnTaxAcctKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxAcctKillfocus();
}*/
static long _OnTaxAcctLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnTaxAcctLoadData();
}
/*static void _OnTaxAcctAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnTaxAcctAddNew();
}*/
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceTypeAddNew();
}*/
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceTemplateChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceTemplateChange();
} */
/*static void _OnInvoiceTemplateSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceTemplateSetfocus();} */ 
/*static void _OnInvoiceTemplateKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceTemplateKillfocus();
} */
static int _OnInvoiceTemplateCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnInvoiceTemplateCheckValue();
} 
/*static void _OnInvoiceSignedChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceSignedChange();
} */
/*static void _OnInvoiceSignedSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceSignedSetfocus();} */ 
/*static void _OnInvoiceSignedKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnInvoiceSignedKillfocus();
} */
static int _OnInvoiceSignedCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnInvoiceSignedCheckValue();
} 
static void _OnGroupServiceItemsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnGroupServiceItemsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupServiceItemsSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnGroupServiceItemsSelendok();
}
/*static void _OnGroupServiceItemsSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
/*static void _OnGroupServiceItemsKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
static long _OnGroupServiceItemsLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnGroupServiceItemsLoadData();
}
/*static void _OnGroupServiceItemsAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnGroupServiceItemsAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSourceAddNew();
}*/
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnChapterAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnItemAddNew();
}*/
static void _OnSubItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnSubItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSubItemSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSubItemSelendok();
}
/*static void _OnSubItemSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSubItemKillfocus();
}*/
/*static void _OnSubItemKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSubItemKillfocus();
}*/
static long _OnSubItemLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnSubItemLoadData();
}
/*static void _OnSubItemAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnSubItemAddNew();
}*/
static void _OnStatisticIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnStatisticIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatisticIDSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnStatisticIDSelendok();
}
/*static void _OnStatisticIDSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnStatisticIDKillfocus();
}*/
/*static void _OnStatisticIDKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnStatisticIDKillfocus();
}*/
static long _OnStatisticIDLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnStatisticIDLoadData();
}
/*static void _OnStatisticIDAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnStatisticIDAddNew();
}*/
static void _OnDistributionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnDistributionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistributionSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnDistributionSelendok();
}
/*static void _OnDistributionSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnDistributionKillfocus();
}*/
/*static void _OnDistributionKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnDistributionKillfocus();
}*/
static long _OnDistributionLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnDistributionLoadData();
}
/*static void _OnDistributionAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnDistributionAddNew();
}*/
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnExchangeRateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnExchangeChangeFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnExchangeChange();
} */
/*static void _OnExchangeSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnExchangeSetfocus();} */ 
/*static void _OnExchangeKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnExchangeKillfocus();
} */
static int _OnExchangeCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnExchangeCheckValue();
} 
static void _OnHCSNSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnHCSNSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHCSNSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnHCSNSelendok();
}
/*static void _OnHCSNSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnHCSNKillfocus();
}*/
/*static void _OnHCSNKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnHCSNKillfocus();
}*/
static long _OnHCSNLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnHCSNLoadData();
}
/*static void _OnHCSNAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnHCSNAddNew();
}*/
static void _OnCTMTDUANSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnCTMTDUANSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCTMTDUANSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCTMTDUANSelendok();
}
/*static void _OnCTMTDUANSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCTMTDUANKillfocus();
}*/
/*static void _OnCTMTDUANKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCTMTDUANKillfocus();
}*/
static long _OnCTMTDUANLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnCTMTDUANLoadData();
}
/*static void _OnCTMTDUANAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCTMTDUANAddNew();
}*/
static void _OnCCVONSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionView* )pWnd)->OnCCVONSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCCVONSelendokFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCCVONSelendok();
}
/*static void _OnCCVONSetfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCCVONKillfocus();
}*/
/*static void _OnCCVONKillfocusFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCCVONKillfocus();
}*/
static long _OnCCVONLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionView *)pWnd)->OnCCVONLoadData();
}
/*static void _OnCCVONAddNewFnc(CWnd *pWnd){
	((CFAAdditionView *)pWnd)->OnCCVONAddNew();
}*/
static int _OnAddFAAdditionViewFnc(CWnd *pWnd){
	 return ((CFAAdditionView*)pWnd)->OnAddFAAdditionView();
} 
static int _OnEditFAAdditionViewFnc(CWnd *pWnd){
	 return ((CFAAdditionView*)pWnd)->OnEditFAAdditionView();
} 
static int _OnDeleteFAAdditionViewFnc(CWnd *pWnd){
	 return ((CFAAdditionView*)pWnd)->OnDeleteFAAdditionView();
} 
static int _OnSaveFAAdditionViewFnc(CWnd *pWnd){
	 return ((CFAAdditionView*)pWnd)->OnSaveFAAdditionView();
} 
static int _OnCancelFAAdditionViewFnc(CWnd *pWnd){
	 return ((CFAAdditionView*)pWnd)->OnCancelFAAdditionView();
} 
CFAAdditionView::CFAAdditionView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAAdditionView::~CFAAdditionView(){
}
void CFAAdditionView::OnCreateComponents(){
	m_wndFATAXINFORMATION.Create(this, _T("FA_TAXINFORMATION"), 270, 5, 530, 305);
	m_wndFASOURCE.Create(this, _T("FA_SOURCE"), 5, 155, 265, 305);
	m_wndCurrencyInformation.Create(this, _T("Currency Information"), 5, 5, 265, 150);
	m_wndStatisticInformation.Create(this, _T("Statistic Information"), 536, 5, 799, 304);
	m_wndTaxrateLabel.Create(this, _T("Taxrate"), 277, 30, 399, 55);
	m_wndTaxrate.Create(this,404, 30, 526, 56); 
	m_wndTaxAmountLabel.Create(this, _T("Tax Amount"), 277, 60, 399, 85);
	m_wndTaxAmount.Create(this,404, 60, 526, 86); 
	m_wndTaxAcctLabel.Create(this, _T("Tax Acct"), 277, 90, 399, 115);
	m_wndTaxAcct.Create(this,404, 90, 526, 116); 
	m_wndInvoiceTypeLabel.Create(this, _T("Invoice Type"), 277, 120, 399, 145);
	m_wndInvoiceType.Create(this,404, 120, 526, 146); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 277, 150, 399, 175);
	m_wndInvoiceDate.Create(this,404, 150, 526, 176); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 277, 181, 399, 206);
	m_wndInvoiceNo.Create(this,404, 181, 526, 207); 
	m_wndInvoiceTemplateLabel.Create(this, _T("Invoice Template"), 277, 212, 399, 237);
	m_wndInvoiceTemplate.Create(this,404, 212, 526, 238); 
	m_wndInvoiceSignedLabel.Create(this, _T("Invoice signed"), 277, 243, 399, 268);
	m_wndInvoiceSigned.Create(this,404, 243, 526, 269); 
	m_wndGroupServiceItemsLabel.Create(this, _T("GroupServiceItems"), 277, 274, 399, 299);
	m_wndGroupServiceItems.Create(this,404, 274, 526, 300); 
	m_wndSourceLabel.Create(this, _T("Source"), 9, 180, 131, 205);
	m_wndSource.Create(this,136, 180, 258, 206); 
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 211, 132, 236);
	m_wndChapter.Create(this,137, 211, 259, 237); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 242, 132, 267);
	m_wndItem.Create(this,137, 242, 259, 268); 
	m_wndSubItemLabel.Create(this, _T("Sub Item"), 10, 273, 132, 298);
	m_wndSubItem.Create(this,137, 273, 259, 299); 
	m_wndStatisticIDLabel.Create(this, _T("Statistic ID"), 541, 30, 663, 55);
	m_wndStatisticID.Create(this,668, 30, 790, 56); 
	m_wndDistributionLabel.Create(this, _T("Distribution"), 541, 60, 663, 85);
	m_wndDistribution.Create(this,668, 60, 790, 86); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 10, 30, 132, 55);
	m_wndCurrency.Create(this,137, 30, 259, 55); 
	m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 10, 60, 132, 85);
	m_wndExchangeRate.Create(this,137, 60, 259, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 10, 90, 132, 115);
	m_wndAmount.Create(this,137, 90, 259, 115); 
	m_wndExchangeLabel.Create(this, _T("Exchange"), 10, 120, 132, 145);
	m_wndExchange.Create(this,137, 120, 259, 145); 
	m_wndHCSNLabel.Create(this, _T("HCSN"), 541, 89, 663, 114);
	m_wndHCSN.Create(this,668, 89, 790, 114); 
	m_wndCTMTDUANLabel.Create(this, _T("CTMTDUAN"), 541, 119, 663, 144);
	m_wndCTMTDUAN.Create(this,668, 119, 790, 144); 
	m_wndCCVONLabel.Create(this, _T("CCVON"), 541, 149, 663, 174);
	m_wndCCVON.Create(this,668, 149, 790, 174); 

}
void CFAAdditionView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTaxrate.SetCheckValue(true);
	m_wndTaxrate.LimitText(35);
	m_wndTaxAmount.SetLimitText(16);
	m_wndTaxAmount.SetCheckValue(true);
	m_wndTaxAcct.SetCheckValue(true);
	m_wndTaxAcct.LimitText(35);
	m_wndInvoiceType.SetCheckValue(true);
	m_wndInvoiceType.LimitText(35);
	m_wndInvoiceDate.SetLimitText(35);
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceTemplate.SetLimitText(35);
	m_wndInvoiceTemplate.SetCheckValue(true);
	m_wndInvoiceSigned.SetLimitText(35);
	m_wndInvoiceSigned.SetCheckValue(true);
	m_wndGroupServiceItems.SetCheckValue(true);
	m_wndGroupServiceItems.LimitText(35);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);
	m_wndChapter.SetCheckValue(true);
	m_wndChapter.LimitText(35);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);
	m_wndSubItem.SetCheckValue(true);
	m_wndSubItem.LimitText(35);
	m_wndStatisticID.SetCheckValue(true);
	m_wndStatisticID.LimitText(35);
	m_wndDistribution.SetCheckValue(true);
	m_wndDistribution.LimitText(35);
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(35);
	m_wndExchangeRate.SetLimitText(16);
	m_wndExchangeRate.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndExchange.SetLimitText(16);
	m_wndExchange.SetCheckValue(true);
	m_wndHCSN.SetCheckValue(true);
	m_wndHCSN.LimitText(35);
	m_wndCTMTDUAN.SetCheckValue(true);
	m_wndCTMTDUAN.LimitText(35);
	m_wndCCVON.SetCheckValue(true);
	m_wndCCVON.LimitText(35);


	m_wndTaxrate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxrate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTaxAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGroupServiceItems.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroupServiceItems.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChapter.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSubItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSubItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStatisticID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatisticID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDistribution.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistribution.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndHCSN.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHCSN.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCTMTDUAN.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCTMTDUAN.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCCVON.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCCVON.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFAAdditionView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTaxrate.SetEvent(WE_SELENDOK, _OnTaxrateSelendokFnc);
	//m_wndTaxrate.SetEvent(WE_SETFOCUS, _OnTaxrateSetfocusFnc);
	//m_wndTaxrate.SetEvent(WE_KILLFOCUS, _OnTaxrateKillfocusFnc);
	m_wndTaxrate.SetEvent(WE_SELCHANGE, _OnTaxrateSelectChangeFnc);
	m_wndTaxrate.SetEvent(WE_LOADDATA, _OnTaxrateLoadDataFnc);
	//m_wndTaxrate.SetEvent(WE_ADDNEW, _OnTaxrateAddNewFnc);
	//m_wndTaxAmount.SetEvent(WE_CHANGE, _OnTaxAmountChangeFnc);
	//m_wndTaxAmount.SetEvent(WE_SETFOCUS, _OnTaxAmountSetfocusFnc);
	//m_wndTaxAmount.SetEvent(WE_KILLFOCUS, _OnTaxAmountKillfocusFnc);
	m_wndTaxAmount.SetEvent(WE_CHECKVALUE, _OnTaxAmountCheckValueFnc);
	m_wndTaxAcct.SetEvent(WE_SELENDOK, _OnTaxAcctSelendokFnc);
	//m_wndTaxAcct.SetEvent(WE_SETFOCUS, _OnTaxAcctSetfocusFnc);
	//m_wndTaxAcct.SetEvent(WE_KILLFOCUS, _OnTaxAcctKillfocusFnc);
	m_wndTaxAcct.SetEvent(WE_SELCHANGE, _OnTaxAcctSelectChangeFnc);
	m_wndTaxAcct.SetEvent(WE_LOADDATA, _OnTaxAcctLoadDataFnc);
	//m_wndTaxAcct.SetEvent(WE_ADDNEW, _OnTaxAcctAddNewFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_CHANGE, _OnInvoiceTemplateChangeFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_SETFOCUS, _OnInvoiceTemplateSetfocusFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_KILLFOCUS, _OnInvoiceTemplateKillfocusFnc);
	m_wndInvoiceTemplate.SetEvent(WE_CHECKVALUE, _OnInvoiceTemplateCheckValueFnc);
	//m_wndInvoiceSigned.SetEvent(WE_CHANGE, _OnInvoiceSignedChangeFnc);
	//m_wndInvoiceSigned.SetEvent(WE_SETFOCUS, _OnInvoiceSignedSetfocusFnc);
	//m_wndInvoiceSigned.SetEvent(WE_KILLFOCUS, _OnInvoiceSignedKillfocusFnc);
	m_wndInvoiceSigned.SetEvent(WE_CHECKVALUE, _OnInvoiceSignedCheckValueFnc);
	m_wndGroupServiceItems.SetEvent(WE_SELENDOK, _OnGroupServiceItemsSelendokFnc);
	//m_wndGroupServiceItems.SetEvent(WE_SETFOCUS, _OnGroupServiceItemsSetfocusFnc);
	//m_wndGroupServiceItems.SetEvent(WE_KILLFOCUS, _OnGroupServiceItemsKillfocusFnc);
	m_wndGroupServiceItems.SetEvent(WE_SELCHANGE, _OnGroupServiceItemsSelectChangeFnc);
	m_wndGroupServiceItems.SetEvent(WE_LOADDATA, _OnGroupServiceItemsLoadDataFnc);
	//m_wndGroupServiceItems.SetEvent(WE_ADDNEW, _OnGroupServiceItemsAddNewFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndChapter.SetEvent(WE_SELENDOK, _OnChapterSelendokFnc);
	//m_wndChapter.SetEvent(WE_SETFOCUS, _OnChapterSetfocusFnc);
	//m_wndChapter.SetEvent(WE_KILLFOCUS, _OnChapterKillfocusFnc);
	m_wndChapter.SetEvent(WE_SELCHANGE, _OnChapterSelectChangeFnc);
	m_wndChapter.SetEvent(WE_LOADDATA, _OnChapterLoadDataFnc);
	//m_wndChapter.SetEvent(WE_ADDNEW, _OnChapterAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndSubItem.SetEvent(WE_SELENDOK, _OnSubItemSelendokFnc);
	//m_wndSubItem.SetEvent(WE_SETFOCUS, _OnSubItemSetfocusFnc);
	//m_wndSubItem.SetEvent(WE_KILLFOCUS, _OnSubItemKillfocusFnc);
	m_wndSubItem.SetEvent(WE_SELCHANGE, _OnSubItemSelectChangeFnc);
	m_wndSubItem.SetEvent(WE_LOADDATA, _OnSubItemLoadDataFnc);
	//m_wndSubItem.SetEvent(WE_ADDNEW, _OnSubItemAddNewFnc);
	m_wndStatisticID.SetEvent(WE_SELENDOK, _OnStatisticIDSelendokFnc);
	//m_wndStatisticID.SetEvent(WE_SETFOCUS, _OnStatisticIDSetfocusFnc);
	//m_wndStatisticID.SetEvent(WE_KILLFOCUS, _OnStatisticIDKillfocusFnc);
	m_wndStatisticID.SetEvent(WE_SELCHANGE, _OnStatisticIDSelectChangeFnc);
	m_wndStatisticID.SetEvent(WE_LOADDATA, _OnStatisticIDLoadDataFnc);
	//m_wndStatisticID.SetEvent(WE_ADDNEW, _OnStatisticIDAddNewFnc);
	m_wndDistribution.SetEvent(WE_SELENDOK, _OnDistributionSelendokFnc);
	//m_wndDistribution.SetEvent(WE_SETFOCUS, _OnDistributionSetfocusFnc);
	//m_wndDistribution.SetEvent(WE_KILLFOCUS, _OnDistributionKillfocusFnc);
	m_wndDistribution.SetEvent(WE_SELCHANGE, _OnDistributionSelectChangeFnc);
	m_wndDistribution.SetEvent(WE_LOADDATA, _OnDistributionLoadDataFnc);
	//m_wndDistribution.SetEvent(WE_ADDNEW, _OnDistributionAddNewFnc);
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
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndExchange.SetEvent(WE_CHANGE, _OnExchangeChangeFnc);
	//m_wndExchange.SetEvent(WE_SETFOCUS, _OnExchangeSetfocusFnc);
	//m_wndExchange.SetEvent(WE_KILLFOCUS, _OnExchangeKillfocusFnc);
	m_wndExchange.SetEvent(WE_CHECKVALUE, _OnExchangeCheckValueFnc);
	m_wndHCSN.SetEvent(WE_SELENDOK, _OnHCSNSelendokFnc);
	//m_wndHCSN.SetEvent(WE_SETFOCUS, _OnHCSNSetfocusFnc);
	//m_wndHCSN.SetEvent(WE_KILLFOCUS, _OnHCSNKillfocusFnc);
	m_wndHCSN.SetEvent(WE_SELCHANGE, _OnHCSNSelectChangeFnc);
	m_wndHCSN.SetEvent(WE_LOADDATA, _OnHCSNLoadDataFnc);
	//m_wndHCSN.SetEvent(WE_ADDNEW, _OnHCSNAddNewFnc);
	m_wndCTMTDUAN.SetEvent(WE_SELENDOK, _OnCTMTDUANSelendokFnc);
	//m_wndCTMTDUAN.SetEvent(WE_SETFOCUS, _OnCTMTDUANSetfocusFnc);
	//m_wndCTMTDUAN.SetEvent(WE_KILLFOCUS, _OnCTMTDUANKillfocusFnc);
	m_wndCTMTDUAN.SetEvent(WE_SELCHANGE, _OnCTMTDUANSelectChangeFnc);
	m_wndCTMTDUAN.SetEvent(WE_LOADDATA, _OnCTMTDUANLoadDataFnc);
	//m_wndCTMTDUAN.SetEvent(WE_ADDNEW, _OnCTMTDUANAddNewFnc);
	m_wndCCVON.SetEvent(WE_SELENDOK, _OnCCVONSelendokFnc);
	//m_wndCCVON.SetEvent(WE_SETFOCUS, _OnCCVONSetfocusFnc);
	//m_wndCCVON.SetEvent(WE_KILLFOCUS, _OnCCVONKillfocusFnc);
	m_wndCCVON.SetEvent(WE_SELCHANGE, _OnCCVONSelectChangeFnc);
	m_wndCCVON.SetEvent(WE_LOADDATA, _OnCCVONLoadDataFnc);
	//m_wndCCVON.SetEvent(WE_ADDNEW, _OnCCVONAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAAdditionViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAAdditionViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAAdditionViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAAdditionViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAAdditionViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFAAdditionView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTaxrate.GetDlgCtrlID(), m_szTaxrateKey);
	DDX_Text(pDX, m_wndTaxAmount.GetDlgCtrlID(), m_nTaxAmount);
	DDX_TextEx(pDX, m_wndTaxAcct.GetDlgCtrlID(), m_szTaxAcctKey);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_Text(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_Text(pDX, m_wndInvoiceTemplate.GetDlgCtrlID(), m_szInvoiceTemplate);
	DDX_Text(pDX, m_wndInvoiceSigned.GetDlgCtrlID(), m_szInvoiceSigned);
	DDX_TextEx(pDX, m_wndGroupServiceItems.GetDlgCtrlID(), m_szGroupServiceItemsKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_TextEx(pDX, m_wndSubItem.GetDlgCtrlID(), m_szSubItemKey);
	DDX_TextEx(pDX, m_wndStatisticID.GetDlgCtrlID(), m_szStatisticIDKey);
	DDX_TextEx(pDX, m_wndDistribution.GetDlgCtrlID(), m_szDistributionKey);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndExchange.GetDlgCtrlID(), m_nExchange);
	DDX_TextEx(pDX, m_wndHCSN.GetDlgCtrlID(), m_szHCSNKey);
	DDX_TextEx(pDX, m_wndCTMTDUAN.GetDlgCtrlID(), m_szCTMTDUANKey);
	DDX_TextEx(pDX, m_wndCCVON.GetDlgCtrlID(), m_szCCVONKey);

}
void CFAAdditionView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAAdditionView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAAdditionView::SetDefaultValues(){

	m_szTaxrateKey.Empty();
	m_nTaxAmount=0;
	m_szTaxAcctKey.Empty();
	m_szInvoiceTypeKey.Empty();
	m_szInvoiceDate.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceTemplate.Empty();
	m_szInvoiceSigned.Empty();
	m_szGroupServiceItemsKey.Empty();
	m_szSourceKey.Empty();
	m_szChapterKey.Empty();
	m_szItemKey.Empty();
	m_szSubItemKey.Empty();
	m_szStatisticIDKey.Empty();
	m_szDistributionKey.Empty();
	m_szCurrencyKey.Empty();
	m_nExchangeRate=0;
	m_nAmount=0;
	m_nExchange=0;
	m_szHCSNKey.Empty();
	m_szCTMTDUANKey.Empty();
	m_szCCVONKey.Empty();

}
int CFAAdditionView::SetMode(int nMode){
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
void CFAAdditionView::OnTaxrateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnTaxrateSelendok(){
	 
}
/*void CFAAdditionView::OnTaxrateSetfocus(){
	
}*/
/*void CFAAdditionView::OnTaxrateKillfocus(){
	
}*/
long CFAAdditionView::OnTaxrateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxrate.IsSearchKey() && !m_szTaxrateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxrateKey
};
	m_wndTaxrate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxrate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnTaxrateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditionView::OnTaxAmountChange(){
	
} */
/*void CFAAdditionView::OnTaxAmountSetfocus(){
	
} */
/*void CFAAdditionView::OnTaxAmountKillfocus(){
	
} */
int CFAAdditionView::OnTaxAmountCheckValue(){
	return 0;
} 
void CFAAdditionView::OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnTaxAcctSelendok(){
	 
}
/*void CFAAdditionView::OnTaxAcctSetfocus(){
	
}*/
/*void CFAAdditionView::OnTaxAcctKillfocus(){
	
}*/
long CFAAdditionView::OnTaxAcctLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxAcct.IsSearchKey() && !m_szTaxAcctKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxAcctKey
};
	m_wndTaxAcct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxAcct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnTaxAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnInvoiceTypeSelendok(){
	 
}
/*void CFAAdditionView::OnInvoiceTypeSetfocus(){
	
}*/
/*void CFAAdditionView::OnInvoiceTypeKillfocus(){
	
}*/
long CFAAdditionView::OnInvoiceTypeLoadData(){
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
/*void CFAAdditionView::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditionView::OnInvoiceDateChange(){
	
} */
/*void CFAAdditionView::OnInvoiceDateSetfocus(){
	
} */
/*void CFAAdditionView::OnInvoiceDateKillfocus(){
	
} */
int CFAAdditionView::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFAAdditionView::OnInvoiceNoChange(){
	
} */
/*void CFAAdditionView::OnInvoiceNoSetfocus(){
	
} */
/*void CFAAdditionView::OnInvoiceNoKillfocus(){
	
} */
int CFAAdditionView::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CFAAdditionView::OnInvoiceTemplateChange(){
	
} */
/*void CFAAdditionView::OnInvoiceTemplateSetfocus(){
	
} */
/*void CFAAdditionView::OnInvoiceTemplateKillfocus(){
	
} */
int CFAAdditionView::OnInvoiceTemplateCheckValue(){
	return 0;
} 
/*void CFAAdditionView::OnInvoiceSignedChange(){
	
} */
/*void CFAAdditionView::OnInvoiceSignedSetfocus(){
	
} */
/*void CFAAdditionView::OnInvoiceSignedKillfocus(){
	
} */
int CFAAdditionView::OnInvoiceSignedCheckValue(){
	return 0;
} 
void CFAAdditionView::OnGroupServiceItemsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnGroupServiceItemsSelendok(){
	 
}
/*void CFAAdditionView::OnGroupServiceItemsSetfocus(){
	
}*/
/*void CFAAdditionView::OnGroupServiceItemsKillfocus(){
	
}*/
long CFAAdditionView::OnGroupServiceItemsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupServiceItems.IsSearchKey() && !m_szGroupServiceItemsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupServiceItemsKey
};
	m_wndGroupServiceItems.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupServiceItems.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnGroupServiceItemsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnSourceSelendok(){
	 
}
/*void CFAAdditionView::OnSourceSetfocus(){
	
}*/
/*void CFAAdditionView::OnSourceKillfocus(){
	
}*/
long CFAAdditionView::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnChapterSelendok(){
	 
}
/*void CFAAdditionView::OnChapterSetfocus(){
	
}*/
/*void CFAAdditionView::OnChapterKillfocus(){
	
}*/
long CFAAdditionView::OnChapterLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey() && !m_szChapterKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChapterKey
};
	m_wndChapter.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnChapterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnItemSelendok(){
	 
}
/*void CFAAdditionView::OnItemSetfocus(){
	
}*/
/*void CFAAdditionView::OnItemKillfocus(){
	
}*/
long CFAAdditionView::OnItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemKey
};
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnSubItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnSubItemSelendok(){
	 
}
/*void CFAAdditionView::OnSubItemSetfocus(){
	
}*/
/*void CFAAdditionView::OnSubItemKillfocus(){
	
}*/
long CFAAdditionView::OnSubItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSubItem.IsSearchKey() && !m_szSubItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSubItemKey
};
	m_wndSubItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSubItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnSubItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnStatisticIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnStatisticIDSelendok(){
	 
}
/*void CFAAdditionView::OnStatisticIDSetfocus(){
	
}*/
/*void CFAAdditionView::OnStatisticIDKillfocus(){
	
}*/
long CFAAdditionView::OnStatisticIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatisticID.IsSearchKey() && !m_szStatisticIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatisticIDKey
};
	m_wndStatisticID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatisticID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnStatisticIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnDistributionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnDistributionSelendok(){
	 
}
/*void CFAAdditionView::OnDistributionSetfocus(){
	
}*/
/*void CFAAdditionView::OnDistributionKillfocus(){
	
}*/
long CFAAdditionView::OnDistributionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistribution.IsSearchKey() && !m_szDistributionKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDistributionKey
};
	m_wndDistribution.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistribution.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnDistributionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnCurrencySelendok(){
	 
}
/*void CFAAdditionView::OnCurrencySetfocus(){
	
}*/
/*void CFAAdditionView::OnCurrencyKillfocus(){
	
}*/
long CFAAdditionView::OnCurrencyLoadData(){
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
/*void CFAAdditionView::OnCurrencyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditionView::OnExchangeRateChange(){
	
} */
/*void CFAAdditionView::OnExchangeRateSetfocus(){
	
} */
/*void CFAAdditionView::OnExchangeRateKillfocus(){
	
} */
int CFAAdditionView::OnExchangeRateCheckValue(){
	return 0;
} 
/*void CFAAdditionView::OnAmountChange(){
	
} */
/*void CFAAdditionView::OnAmountSetfocus(){
	
} */
/*void CFAAdditionView::OnAmountKillfocus(){
	
} */
int CFAAdditionView::OnAmountCheckValue(){
	return 0;
} 
/*void CFAAdditionView::OnExchangeChange(){
	
} */
/*void CFAAdditionView::OnExchangeSetfocus(){
	
} */
/*void CFAAdditionView::OnExchangeKillfocus(){
	
} */
int CFAAdditionView::OnExchangeCheckValue(){
	return 0;
} 
void CFAAdditionView::OnHCSNSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnHCSNSelendok(){
	 
}
/*void CFAAdditionView::OnHCSNSetfocus(){
	
}*/
/*void CFAAdditionView::OnHCSNKillfocus(){
	
}*/
long CFAAdditionView::OnHCSNLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHCSN.IsSearchKey() && !m_szHCSNKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHCSNKey
};
	m_wndHCSN.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHCSN.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnHCSNAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnCTMTDUANSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnCTMTDUANSelendok(){
	 
}
/*void CFAAdditionView::OnCTMTDUANSetfocus(){
	
}*/
/*void CFAAdditionView::OnCTMTDUANKillfocus(){
	
}*/
long CFAAdditionView::OnCTMTDUANLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCTMTDUAN.IsSearchKey() && !m_szCTMTDUANKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCTMTDUANKey
};
	m_wndCTMTDUAN.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCTMTDUAN.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnCTMTDUANAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionView::OnCCVONSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionView::OnCCVONSelendok(){
	 
}
/*void CFAAdditionView::OnCCVONSetfocus(){
	
}*/
/*void CFAAdditionView::OnCCVONKillfocus(){
	
}*/
long CFAAdditionView::OnCCVONLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCCVON.IsSearchKey() && !m_szCCVONKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCCVONKey
};
	m_wndCCVON.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCCVON.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAAdditionView::OnCCVONAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CFAAdditionView::OnAddFAAdditionView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAAdditionView::OnEditFAAdditionView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAAdditionView::OnDeleteFAAdditionView(){
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
 		OnCancelFAAdditionView();
 	}
	return 0;
}
int CFAAdditionView::OnSaveFAAdditionView(){
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
 		//OnFAAdditionViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAAdditionView::OnCancelFAAdditionView(){
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
int CFAAdditionView::OnFAAdditionViewListLoadData(){
	return 0;
}
