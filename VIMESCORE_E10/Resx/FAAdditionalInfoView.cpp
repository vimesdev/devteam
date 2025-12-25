#include "FAAdditionalInfoView.h"
#include "MainFrm.h"
static void _OnTaxrateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnTaxrateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxrateSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxrateSelendok();
}
/*static void _OnTaxrateSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxrateKillfocus();
}*/
/*static void _OnTaxrateKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxrateKillfocus();
}*/
static long _OnTaxrateLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnTaxrateLoadData();
}
/*static void _OnTaxrateAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxrateAddNew();
}*/
/*static void _OnTaxAmountChangeFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxAmountChange();
} */
/*static void _OnTaxAmountSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxAmountSetfocus();} */ 
/*static void _OnTaxAmountKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxAmountKillfocus();
} */
static int _OnTaxAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnTaxAmountCheckValue();
} 
static void _OnTaxAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnTaxAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAcctSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxAcctSelendok();
}
/*static void _OnTaxAcctSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxAcctKillfocus();
}*/
/*static void _OnTaxAcctKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxAcctKillfocus();
}*/
static long _OnTaxAcctLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnTaxAcctLoadData();
}
/*static void _OnTaxAcctAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnTaxAcctAddNew();
}*/
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceTypeAddNew();
}*/
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnGroupServiceItemsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnGroupServiceItemsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupServiceItemsSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnGroupServiceItemsSelendok();
}
/*static void _OnGroupServiceItemsSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
/*static void _OnGroupServiceItemsKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
static long _OnGroupServiceItemsLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnGroupServiceItemsLoadData();
}
/*static void _OnGroupServiceItemsAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnGroupServiceItemsAddNew();
}*/
/*static void _OnInvoiceSignedChangeFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceSignedChange();
} */
/*static void _OnInvoiceSignedSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceSignedSetfocus();} */ 
/*static void _OnInvoiceSignedKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceSignedKillfocus();
} */
static int _OnInvoiceSignedCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnInvoiceSignedCheckValue();
} 
/*static void _OnInvoiceTemplateChangeFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceTemplateChange();
} */
/*static void _OnInvoiceTemplateSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceTemplateSetfocus();} */ 
/*static void _OnInvoiceTemplateKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnInvoiceTemplateKillfocus();
} */
static int _OnInvoiceTemplateCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnInvoiceTemplateCheckValue();
} 
static void _OnSubItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnSubItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSubItemSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSubItemSelendok();
}
/*static void _OnSubItemSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSubItemKillfocus();
}*/
/*static void _OnSubItemKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSubItemKillfocus();
}*/
static long _OnSubItemLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnSubItemLoadData();
}
/*static void _OnSubItemAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSubItemAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnSourceAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnItemAddNew();
}*/
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnChapterAddNew();
}*/
static void _OnHCSNSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnHCSNSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHCSNSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnHCSNSelendok();
}
/*static void _OnHCSNSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnHCSNKillfocus();
}*/
/*static void _OnHCSNKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnHCSNKillfocus();
}*/
static long _OnHCSNLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnHCSNLoadData();
}
/*static void _OnHCSNAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnHCSNAddNew();
}*/
static void _OnCTMTDUANSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnCTMTDUANSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCTMTDUANSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCTMTDUANSelendok();
}
/*static void _OnCTMTDUANSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCTMTDUANKillfocus();
}*/
/*static void _OnCTMTDUANKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCTMTDUANKillfocus();
}*/
static long _OnCTMTDUANLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnCTMTDUANLoadData();
}
/*static void _OnCTMTDUANAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCTMTDUANAddNew();
}*/
static void _OnCCVONSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnCCVONSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCCVONSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCCVONSelendok();
}
/*static void _OnCCVONSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCCVONKillfocus();
}*/
/*static void _OnCCVONKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCCVONKillfocus();
}*/
static long _OnCCVONLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnCCVONLoadData();
}
/*static void _OnCCVONAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnCCVONAddNew();
}*/
static void _OnStatisticIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnStatisticIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatisticIDSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnStatisticIDSelendok();
}
/*static void _OnStatisticIDSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnStatisticIDKillfocus();
}*/
/*static void _OnStatisticIDKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnStatisticIDKillfocus();
}*/
static long _OnStatisticIDLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnStatisticIDLoadData();
}
/*static void _OnStatisticIDAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnStatisticIDAddNew();
}*/
static void _OnDistributionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditionalInfoView* )pWnd)->OnDistributionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistributionSelendokFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnDistributionSelendok();
}
/*static void _OnDistributionSetfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnDistributionKillfocus();
}*/
/*static void _OnDistributionKillfocusFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnDistributionKillfocus();
}*/
static long _OnDistributionLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditionalInfoView *)pWnd)->OnDistributionLoadData();
}
/*static void _OnDistributionAddNewFnc(CWnd *pWnd){
	((CFAAdditionalInfoView *)pWnd)->OnDistributionAddNew();
}*/
static int _OnAddFAAdditionalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditionalInfoView*)pWnd)->OnAddFAAdditionalInfoView();
} 
static int _OnEditFAAdditionalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditionalInfoView*)pWnd)->OnEditFAAdditionalInfoView();
} 
static int _OnDeleteFAAdditionalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditionalInfoView*)pWnd)->OnDeleteFAAdditionalInfoView();
} 
static int _OnSaveFAAdditionalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditionalInfoView*)pWnd)->OnSaveFAAdditionalInfoView();
} 
static int _OnCancelFAAdditionalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditionalInfoView*)pWnd)->OnCancelFAAdditionalInfoView();
} 
CFAAdditionalInfoView::CFAAdditionalInfoView(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CFAAdditionalInfoView::~CFAAdditionalInfoView(){
}
void CFAAdditionalInfoView::OnCreateComponents(){
	m_wndFASOURCE.Create(this, _T("FA_SOURCE"), 5, 85, 795, 160);
	m_wndStatisticInformation.Create(this, _T("Statistic Information"), 5, 165, 795, 240);
	m_wndFATAXINFORMATION.Create(this, _T("FA_TAXINFORMATION"), 5, 5, 795, 80);
	m_wndTaxrate.Create(this,10, 25, 69, 49); 
	m_wndTaxAmount.Create(this,74, 25, 120, 49); 
	m_wndTaxAcct.Create(this,125, 25, 167, 49); 
	m_wndInvoiceType.Create(this,172, 25, 222, 49); 
	m_wndInvoiceDate.Create(this,311, 25, 433, 49); 
	m_wndInvoiceNo.Create(this,396, 25, 518, 49); 
	m_wndGroupServiceItems.Create(this,650, 25, 772, 49); 
	m_wndInvoiceSigned.Create(this,523, 25, 645, 49); 
	m_wndInvoiceTemplate.Create(this,227, 25, 349, 49); 
	m_wndSubItem.Create(this,392, 107, 514, 132); 
	m_wndSource.Create(this,11, 107, 133, 132); 
	m_wndItem.Create(this,265, 107, 387, 132); 
	m_wndChapter.Create(this,138, 107, 260, 132); 
	m_wndHCSN.Create(this,264, 190, 386, 214); 
	m_wndCTMTDUAN.Create(this,391, 190, 513, 214); 
	m_wndCCVON.Create(this,518, 190, 640, 214); 
	m_wndStatisticID.Create(this,10, 190, 132, 215); 
	m_wndDistribution.Create(this,137, 190, 259, 215); 

}
void CFAAdditionalInfoView::OnInitializeComponents(){
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
	m_wndGroupServiceItems.SetCheckValue(true);
	m_wndGroupServiceItems.LimitText(35);
	m_wndInvoiceSigned.SetLimitText(35);
	m_wndInvoiceSigned.SetCheckValue(true);
	m_wndInvoiceTemplate.SetLimitText(35);
	m_wndInvoiceTemplate.SetCheckValue(true);
	m_wndSubItem.SetCheckValue(true);
	m_wndSubItem.LimitText(35);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);
	m_wndChapter.SetCheckValue(true);
	m_wndChapter.LimitText(35);
	m_wndHCSN.SetCheckValue(true);
	m_wndHCSN.LimitText(35);
	m_wndCTMTDUAN.SetCheckValue(true);
	m_wndCTMTDUAN.LimitText(35);
	m_wndCCVON.SetCheckValue(true);
	m_wndCCVON.LimitText(35);
	m_wndStatisticID.SetCheckValue(true);
	m_wndStatisticID.LimitText(35);
	m_wndDistribution.SetCheckValue(true);
	m_wndDistribution.LimitText(35);


	m_wndTaxrate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxrate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTaxAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGroupServiceItems.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroupServiceItems.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSubItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSubItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChapter.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndHCSN.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHCSN.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCTMTDUAN.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCTMTDUAN.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCCVON.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCCVON.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStatisticID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatisticID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDistribution.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistribution.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFAAdditionalInfoView::OnSetWindowEvents(){
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
	m_wndGroupServiceItems.SetEvent(WE_SELENDOK, _OnGroupServiceItemsSelendokFnc);
	//m_wndGroupServiceItems.SetEvent(WE_SETFOCUS, _OnGroupServiceItemsSetfocusFnc);
	//m_wndGroupServiceItems.SetEvent(WE_KILLFOCUS, _OnGroupServiceItemsKillfocusFnc);
	m_wndGroupServiceItems.SetEvent(WE_SELCHANGE, _OnGroupServiceItemsSelectChangeFnc);
	m_wndGroupServiceItems.SetEvent(WE_LOADDATA, _OnGroupServiceItemsLoadDataFnc);
	//m_wndGroupServiceItems.SetEvent(WE_ADDNEW, _OnGroupServiceItemsAddNewFnc);
	//m_wndInvoiceSigned.SetEvent(WE_CHANGE, _OnInvoiceSignedChangeFnc);
	//m_wndInvoiceSigned.SetEvent(WE_SETFOCUS, _OnInvoiceSignedSetfocusFnc);
	//m_wndInvoiceSigned.SetEvent(WE_KILLFOCUS, _OnInvoiceSignedKillfocusFnc);
	m_wndInvoiceSigned.SetEvent(WE_CHECKVALUE, _OnInvoiceSignedCheckValueFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_CHANGE, _OnInvoiceTemplateChangeFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_SETFOCUS, _OnInvoiceTemplateSetfocusFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_KILLFOCUS, _OnInvoiceTemplateKillfocusFnc);
	m_wndInvoiceTemplate.SetEvent(WE_CHECKVALUE, _OnInvoiceTemplateCheckValueFnc);
	m_wndSubItem.SetEvent(WE_SELENDOK, _OnSubItemSelendokFnc);
	//m_wndSubItem.SetEvent(WE_SETFOCUS, _OnSubItemSetfocusFnc);
	//m_wndSubItem.SetEvent(WE_KILLFOCUS, _OnSubItemKillfocusFnc);
	m_wndSubItem.SetEvent(WE_SELCHANGE, _OnSubItemSelectChangeFnc);
	m_wndSubItem.SetEvent(WE_LOADDATA, _OnSubItemLoadDataFnc);
	//m_wndSubItem.SetEvent(WE_ADDNEW, _OnSubItemAddNewFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndChapter.SetEvent(WE_SELENDOK, _OnChapterSelendokFnc);
	//m_wndChapter.SetEvent(WE_SETFOCUS, _OnChapterSetfocusFnc);
	//m_wndChapter.SetEvent(WE_KILLFOCUS, _OnChapterKillfocusFnc);
	m_wndChapter.SetEvent(WE_SELCHANGE, _OnChapterSelectChangeFnc);
	m_wndChapter.SetEvent(WE_LOADDATA, _OnChapterLoadDataFnc);
	//m_wndChapter.SetEvent(WE_ADDNEW, _OnChapterAddNewFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAAdditionalInfoViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAAdditionalInfoViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAAdditionalInfoViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAAdditionalInfoViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAAdditionalInfoViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFAAdditionalInfoView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTaxrate.GetDlgCtrlID(), m_szTaxrateKey);
	DDX_Text(pDX, m_wndTaxAmount.GetDlgCtrlID(), m_nTaxAmount);
	DDX_TextEx(pDX, m_wndTaxAcct.GetDlgCtrlID(), m_szTaxAcctKey);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_Text(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndGroupServiceItems.GetDlgCtrlID(), m_szGroupServiceItemsKey);
	DDX_Text(pDX, m_wndInvoiceSigned.GetDlgCtrlID(), m_szInvoiceSigned);
	DDX_Text(pDX, m_wndInvoiceTemplate.GetDlgCtrlID(), m_szInvoiceTemplate);
	DDX_TextEx(pDX, m_wndSubItem.GetDlgCtrlID(), m_szSubItemKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_TextEx(pDX, m_wndHCSN.GetDlgCtrlID(), m_szHCSNKey);
	DDX_TextEx(pDX, m_wndCTMTDUAN.GetDlgCtrlID(), m_szCTMTDUANKey);
	DDX_TextEx(pDX, m_wndCCVON.GetDlgCtrlID(), m_szCCVONKey);
	DDX_TextEx(pDX, m_wndStatisticID.GetDlgCtrlID(), m_szStatisticIDKey);
	DDX_TextEx(pDX, m_wndDistribution.GetDlgCtrlID(), m_szDistributionKey);

}
void CFAAdditionalInfoView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAAdditionalInfoView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAAdditionalInfoView::SetDefaultValues(){

	m_szTaxrateKey.Empty();
	m_nTaxAmount=0;
	m_szTaxAcctKey.Empty();
	m_szInvoiceTypeKey.Empty();
	m_szInvoiceDate.Empty();
	m_szInvoiceNo.Empty();
	m_szGroupServiceItemsKey.Empty();
	m_szInvoiceSigned.Empty();
	m_szInvoiceTemplate.Empty();
	m_szSubItemKey.Empty();
	m_szSourceKey.Empty();
	m_szItemKey.Empty();
	m_szChapterKey.Empty();
	m_szHCSNKey.Empty();
	m_szCTMTDUANKey.Empty();
	m_szCCVONKey.Empty();
	m_szStatisticIDKey.Empty();
	m_szDistributionKey.Empty();

}
int CFAAdditionalInfoView::SetMode(int nMode){
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
void CFAAdditionalInfoView::OnTaxrateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnTaxrateSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnTaxrateSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnTaxrateKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnTaxrateLoadData(){
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
/*void CFAAdditionalInfoView::OnTaxrateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditionalInfoView::OnTaxAmountChange(){
	
} */
/*void CFAAdditionalInfoView::OnTaxAmountSetfocus(){
	
} */
/*void CFAAdditionalInfoView::OnTaxAmountKillfocus(){
	
} */
int CFAAdditionalInfoView::OnTaxAmountCheckValue(){
	return 0;
} 
void CFAAdditionalInfoView::OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnTaxAcctSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnTaxAcctSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnTaxAcctKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnTaxAcctLoadData(){
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
/*void CFAAdditionalInfoView::OnTaxAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnInvoiceTypeSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnInvoiceTypeSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnInvoiceTypeKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnInvoiceTypeLoadData(){
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
/*void CFAAdditionalInfoView::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditionalInfoView::OnInvoiceDateChange(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceDateSetfocus(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceDateKillfocus(){
	
} */
int CFAAdditionalInfoView::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFAAdditionalInfoView::OnInvoiceNoChange(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceNoSetfocus(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceNoKillfocus(){
	
} */
int CFAAdditionalInfoView::OnInvoiceNoCheckValue(){
	return 0;
} 
void CFAAdditionalInfoView::OnGroupServiceItemsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnGroupServiceItemsSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnGroupServiceItemsSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnGroupServiceItemsKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnGroupServiceItemsLoadData(){
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
/*void CFAAdditionalInfoView::OnGroupServiceItemsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditionalInfoView::OnInvoiceSignedChange(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceSignedSetfocus(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceSignedKillfocus(){
	
} */
int CFAAdditionalInfoView::OnInvoiceSignedCheckValue(){
	return 0;
} 
/*void CFAAdditionalInfoView::OnInvoiceTemplateChange(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceTemplateSetfocus(){
	
} */
/*void CFAAdditionalInfoView::OnInvoiceTemplateKillfocus(){
	
} */
int CFAAdditionalInfoView::OnInvoiceTemplateCheckValue(){
	return 0;
} 
void CFAAdditionalInfoView::OnSubItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnSubItemSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnSubItemSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnSubItemKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnSubItemLoadData(){
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
/*void CFAAdditionalInfoView::OnSubItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnSourceSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnSourceSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnSourceKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnSourceLoadData(){
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
/*void CFAAdditionalInfoView::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnItemSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnItemSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnItemKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnItemLoadData(){
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
/*void CFAAdditionalInfoView::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnChapterSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnChapterSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnChapterKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnChapterLoadData(){
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
/*void CFAAdditionalInfoView::OnChapterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnHCSNSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnHCSNSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnHCSNSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnHCSNKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnHCSNLoadData(){
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
/*void CFAAdditionalInfoView::OnHCSNAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnCTMTDUANSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnCTMTDUANSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnCTMTDUANSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnCTMTDUANKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnCTMTDUANLoadData(){
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
/*void CFAAdditionalInfoView::OnCTMTDUANAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnCCVONSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnCCVONSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnCCVONSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnCCVONKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnCCVONLoadData(){
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
/*void CFAAdditionalInfoView::OnCCVONAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnStatisticIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnStatisticIDSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnStatisticIDSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnStatisticIDKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnStatisticIDLoadData(){
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
/*void CFAAdditionalInfoView::OnStatisticIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditionalInfoView::OnDistributionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditionalInfoView::OnDistributionSelendok(){
	 
}
/*void CFAAdditionalInfoView::OnDistributionSetfocus(){
	
}*/
/*void CFAAdditionalInfoView::OnDistributionKillfocus(){
	
}*/
long CFAAdditionalInfoView::OnDistributionLoadData(){
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
/*void CFAAdditionalInfoView::OnDistributionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CFAAdditionalInfoView::OnAddFAAdditionalInfoView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAAdditionalInfoView::OnEditFAAdditionalInfoView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAAdditionalInfoView::OnDeleteFAAdditionalInfoView(){
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
 		OnCancelFAAdditionalInfoView();
 	}
	return 0;
}
int CFAAdditionalInfoView::OnSaveFAAdditionalInfoView(){
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
 		//OnFAAdditionalInfoViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAAdditionalInfoView::OnCancelFAAdditionalInfoView(){
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
int CFAAdditionalInfoView::OnFAAdditionalInfoViewListLoadData(){
	return 0;
}
