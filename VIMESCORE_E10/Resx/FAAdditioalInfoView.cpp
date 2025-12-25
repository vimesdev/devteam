#include "FAAdditioalInfoView.h"
#include "MainFrm.h"
static void _OnTaxrateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnTaxrateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxrateSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxrateSelendok();
}
/*static void _OnTaxrateSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxrateKillfocus();
}*/
/*static void _OnTaxrateKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxrateKillfocus();
}*/
static long _OnTaxrateLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnTaxrateLoadData();
}
/*static void _OnTaxrateAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxrateAddNew();
}*/
/*static void _OnTaxAmountChangeFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxAmountChange();
} */
/*static void _OnTaxAmountSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxAmountSetfocus();} */ 
/*static void _OnTaxAmountKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxAmountKillfocus();
} */
static int _OnTaxAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnTaxAmountCheckValue();
} 
static void _OnTaxAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnTaxAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAcctSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxAcctSelendok();
}
/*static void _OnTaxAcctSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxAcctKillfocus();
}*/
/*static void _OnTaxAcctKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxAcctKillfocus();
}*/
static long _OnTaxAcctLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnTaxAcctLoadData();
}
/*static void _OnTaxAcctAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnTaxAcctAddNew();
}*/
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceTypeAddNew();
}*/
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnGroupServiceItemsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnGroupServiceItemsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupServiceItemsSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnGroupServiceItemsSelendok();
}
/*static void _OnGroupServiceItemsSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
/*static void _OnGroupServiceItemsKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
static long _OnGroupServiceItemsLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnGroupServiceItemsLoadData();
}
/*static void _OnGroupServiceItemsAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnGroupServiceItemsAddNew();
}*/
/*static void _OnInvoiceSignedChangeFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceSignedChange();
} */
/*static void _OnInvoiceSignedSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceSignedSetfocus();} */ 
/*static void _OnInvoiceSignedKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceSignedKillfocus();
} */
static int _OnInvoiceSignedCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnInvoiceSignedCheckValue();
} 
/*static void _OnInvoiceTemplateChangeFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceTemplateChange();
} */
/*static void _OnInvoiceTemplateSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceTemplateSetfocus();} */ 
/*static void _OnInvoiceTemplateKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnInvoiceTemplateKillfocus();
} */
static int _OnInvoiceTemplateCheckValueFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnInvoiceTemplateCheckValue();
} 
static void _OnSubItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnSubItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSubItemSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSubItemSelendok();
}
/*static void _OnSubItemSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSubItemKillfocus();
}*/
/*static void _OnSubItemKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSubItemKillfocus();
}*/
static long _OnSubItemLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnSubItemLoadData();
}
/*static void _OnSubItemAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSubItemAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnSourceAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnItemAddNew();
}*/
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnChapterAddNew();
}*/
static void _OnHCSNSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnHCSNSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHCSNSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnHCSNSelendok();
}
/*static void _OnHCSNSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnHCSNKillfocus();
}*/
/*static void _OnHCSNKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnHCSNKillfocus();
}*/
static long _OnHCSNLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnHCSNLoadData();
}
/*static void _OnHCSNAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnHCSNAddNew();
}*/
static void _OnCTMTDUANSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnCTMTDUANSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCTMTDUANSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCTMTDUANSelendok();
}
/*static void _OnCTMTDUANSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCTMTDUANKillfocus();
}*/
/*static void _OnCTMTDUANKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCTMTDUANKillfocus();
}*/
static long _OnCTMTDUANLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnCTMTDUANLoadData();
}
/*static void _OnCTMTDUANAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCTMTDUANAddNew();
}*/
static void _OnCCVONSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnCCVONSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCCVONSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCCVONSelendok();
}
/*static void _OnCCVONSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCCVONKillfocus();
}*/
/*static void _OnCCVONKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCCVONKillfocus();
}*/
static long _OnCCVONLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnCCVONLoadData();
}
/*static void _OnCCVONAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnCCVONAddNew();
}*/
static void _OnStatisticIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnStatisticIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatisticIDSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnStatisticIDSelendok();
}
/*static void _OnStatisticIDSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnStatisticIDKillfocus();
}*/
/*static void _OnStatisticIDKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnStatisticIDKillfocus();
}*/
static long _OnStatisticIDLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnStatisticIDLoadData();
}
/*static void _OnStatisticIDAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnStatisticIDAddNew();
}*/
static void _OnDistributionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAAdditioalInfoView* )pWnd)->OnDistributionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistributionSelendokFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnDistributionSelendok();
}
/*static void _OnDistributionSetfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnDistributionKillfocus();
}*/
/*static void _OnDistributionKillfocusFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnDistributionKillfocus();
}*/
static long _OnDistributionLoadDataFnc(CWnd *pWnd){
	return ((CFAAdditioalInfoView *)pWnd)->OnDistributionLoadData();
}
/*static void _OnDistributionAddNewFnc(CWnd *pWnd){
	((CFAAdditioalInfoView *)pWnd)->OnDistributionAddNew();
}*/
static int _OnAddFAAdditioalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditioalInfoView*)pWnd)->OnAddFAAdditioalInfoView();
} 
static int _OnEditFAAdditioalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditioalInfoView*)pWnd)->OnEditFAAdditioalInfoView();
} 
static int _OnDeleteFAAdditioalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditioalInfoView*)pWnd)->OnDeleteFAAdditioalInfoView();
} 
static int _OnSaveFAAdditioalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditioalInfoView*)pWnd)->OnSaveFAAdditioalInfoView();
} 
static int _OnCancelFAAdditioalInfoViewFnc(CWnd *pWnd){
	 return ((CFAAdditioalInfoView*)pWnd)->OnCancelFAAdditioalInfoView();
} 
CFAAdditioalInfoView::CFAAdditioalInfoView(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CFAAdditioalInfoView::~CFAAdditioalInfoView(){
}
void CFAAdditioalInfoView::OnCreateComponents(){
	m_wndFASOURCE.Create(this, _T("FA_SOURCE"), 5, 84, 795, 159);
	m_wndStatisticInformation.Create(this, _T("Statistic Information"), 5, 165, 795, 240);
	m_wndTaxrate.Create(this,9, 28, 131, 54); 
	m_wndTaxAmount.Create(this,134, 28, 256, 54); 
	m_wndFATAXINFORMATION.Create(this, _T("FA_TAXINFORMATION"), 5, 5, 795, 80);
	m_wndTaxAcct.Create(this,261, 28, 383, 54); 
	m_wndInvoiceType.Create(this,387, 28, 509, 54); 
	m_wndInvoiceDate.Create(this,516, 28, 638, 54); 
	m_wndInvoiceNo.Create(this,613, 28, 735, 54); 
	m_wndGroupServiceItems.Create(this,667, 28, 789, 54); 
	m_wndInvoiceSigned.Create(this,676, 28, 798, 54); 
	m_wndInvoiceTemplate.Create(this,694, 28, 816, 54); 
	m_wndSubItem.Create(this,401, 107, 523, 133); 
	m_wndSource.Create(this,11, 107, 133, 133); 
	m_wndItem.Create(this,270, 107, 392, 133); 
	m_wndChapter.Create(this,140, 107, 262, 133); 
	m_wndHCSN.Create(this,257, 190, 379, 215); 
	m_wndCTMTDUAN.Create(this,388, 190, 510, 215); 
	m_wndCCVON.Create(this,517, 190, 639, 215); 
	m_wndStatisticID.Create(this,9, 190, 131, 216); 
	m_wndDistribution.Create(this,135, 190, 257, 216); 

}
void CFAAdditioalInfoView::OnInitializeComponents(){
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
void CFAAdditioalInfoView::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAAdditioalInfoViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAAdditioalInfoViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAAdditioalInfoViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAAdditioalInfoViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAAdditioalInfoViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFAAdditioalInfoView::OnDoDataExchange(CDataExchange* pDX){
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
void CFAAdditioalInfoView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAAdditioalInfoView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAAdditioalInfoView::SetDefaultValues(){

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
int CFAAdditioalInfoView::SetMode(int nMode){
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
void CFAAdditioalInfoView::OnTaxrateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnTaxrateSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnTaxrateSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnTaxrateKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnTaxrateLoadData(){
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
/*void CFAAdditioalInfoView::OnTaxrateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditioalInfoView::OnTaxAmountChange(){
	
} */
/*void CFAAdditioalInfoView::OnTaxAmountSetfocus(){
	
} */
/*void CFAAdditioalInfoView::OnTaxAmountKillfocus(){
	
} */
int CFAAdditioalInfoView::OnTaxAmountCheckValue(){
	return 0;
} 
void CFAAdditioalInfoView::OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnTaxAcctSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnTaxAcctSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnTaxAcctKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnTaxAcctLoadData(){
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
/*void CFAAdditioalInfoView::OnTaxAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnInvoiceTypeSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnInvoiceTypeSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnInvoiceTypeKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnInvoiceTypeLoadData(){
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
/*void CFAAdditioalInfoView::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditioalInfoView::OnInvoiceDateChange(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceDateSetfocus(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceDateKillfocus(){
	
} */
int CFAAdditioalInfoView::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFAAdditioalInfoView::OnInvoiceNoChange(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceNoSetfocus(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceNoKillfocus(){
	
} */
int CFAAdditioalInfoView::OnInvoiceNoCheckValue(){
	return 0;
} 
void CFAAdditioalInfoView::OnGroupServiceItemsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnGroupServiceItemsSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnGroupServiceItemsSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnGroupServiceItemsKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnGroupServiceItemsLoadData(){
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
/*void CFAAdditioalInfoView::OnGroupServiceItemsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAAdditioalInfoView::OnInvoiceSignedChange(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceSignedSetfocus(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceSignedKillfocus(){
	
} */
int CFAAdditioalInfoView::OnInvoiceSignedCheckValue(){
	return 0;
} 
/*void CFAAdditioalInfoView::OnInvoiceTemplateChange(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceTemplateSetfocus(){
	
} */
/*void CFAAdditioalInfoView::OnInvoiceTemplateKillfocus(){
	
} */
int CFAAdditioalInfoView::OnInvoiceTemplateCheckValue(){
	return 0;
} 
void CFAAdditioalInfoView::OnSubItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnSubItemSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnSubItemSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnSubItemKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnSubItemLoadData(){
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
/*void CFAAdditioalInfoView::OnSubItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnSourceSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnSourceSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnSourceKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnSourceLoadData(){
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
/*void CFAAdditioalInfoView::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnItemSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnItemSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnItemKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnItemLoadData(){
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
/*void CFAAdditioalInfoView::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnChapterSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnChapterSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnChapterKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnChapterLoadData(){
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
/*void CFAAdditioalInfoView::OnChapterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnHCSNSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnHCSNSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnHCSNSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnHCSNKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnHCSNLoadData(){
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
/*void CFAAdditioalInfoView::OnHCSNAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnCTMTDUANSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnCTMTDUANSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnCTMTDUANSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnCTMTDUANKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnCTMTDUANLoadData(){
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
/*void CFAAdditioalInfoView::OnCTMTDUANAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnCCVONSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnCCVONSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnCCVONSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnCCVONKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnCCVONLoadData(){
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
/*void CFAAdditioalInfoView::OnCCVONAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnStatisticIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnStatisticIDSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnStatisticIDSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnStatisticIDKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnStatisticIDLoadData(){
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
/*void CFAAdditioalInfoView::OnStatisticIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAAdditioalInfoView::OnDistributionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAAdditioalInfoView::OnDistributionSelendok(){
	 
}
/*void CFAAdditioalInfoView::OnDistributionSetfocus(){
	
}*/
/*void CFAAdditioalInfoView::OnDistributionKillfocus(){
	
}*/
long CFAAdditioalInfoView::OnDistributionLoadData(){
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
/*void CFAAdditioalInfoView::OnDistributionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CFAAdditioalInfoView::OnAddFAAdditioalInfoView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAAdditioalInfoView::OnEditFAAdditioalInfoView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAAdditioalInfoView::OnDeleteFAAdditioalInfoView(){
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
 		OnCancelFAAdditioalInfoView();
 	}
	return 0;
}
int CFAAdditioalInfoView::OnSaveFAAdditioalInfoView(){
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
 		//OnFAAdditioalInfoViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAAdditioalInfoView::OnCancelFAAdditioalInfoView(){
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
int CFAAdditioalInfoView::OnFAAdditioalInfoViewListLoadData(){
	return 0;
}
