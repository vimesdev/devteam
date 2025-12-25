#include "HMSPrescriptionPopup.h"
#include "MainFrm.h"
static long _OnSynthListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup*)pWnd)->OnSynthListLoadData();
} 
static void _OnSynthListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup*)pWnd)->OnSynthListDblClick();
} 
static void _OnSynthListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionPopup*)pWnd)->OnSynthListSelectChange(nOldItem, nNewItem);
} 
static int _OnSynthListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnSynthListDeleteItem();
} 
static long _OnInteractionListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup*)pWnd)->OnInteractionListLoadData();
} 
static void _OnInteractionListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup*)pWnd)->OnInteractionListDblClick();
} 
static void _OnInteractionListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionPopup*)pWnd)->OnInteractionListSelectChange(nOldItem, nNewItem);
} 
static int _OnInteractionListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnInteractionListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionPopup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnListDeleteItem();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionPopup* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStockAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionPopup* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnProdCountryChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnProdCountryChange();
} */
/*static void _OnProdCountrySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnProdCountrySetfocus();} */ 
/*static void _OnProdCountryKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnProdCountryKillfocus();
} */
static int _OnProdCountryCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnProdCountryCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnUsageCheckValue();
} 
static void _OnSearchForGenericNameSelectFnc(CWnd *pWnd){
	 ((CHMSPrescriptionPopup*)pWnd)->OnSearchForGenericNameSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionPopup *pVw = (CHMSPrescriptionPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSPrescriptionPopup *pVw = (CHMSPrescriptionPopup *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionPopup *pVw = (CHMSPrescriptionPopup *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnPatientPaidChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnPatientPaidChange();
} */
/*static void _OnPatientPaidSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnPatientPaidSetfocus();} */ 
/*static void _OnPatientPaidKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnPatientPaidKillfocus();
} */
static int _OnPatientPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnPatientPaidCheckValue();
} 
static int _OnAddHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnAddHMSPrescriptionPopup();
} 
static int _OnEditHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnEditHMSPrescriptionPopup();
} 
static int _OnDeleteHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnDeleteHMSPrescriptionPopup();
} 
static int _OnSaveHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnSaveHMSPrescriptionPopup();
} 
static int _OnCancelHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnCancelHMSPrescriptionPopup();
} 
CHMSPrescriptionPopup::CHMSPrescriptionPopup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 970;
	m_nDlgHeight = 610;
	SetDefaultValues();
}
CHMSPrescriptionPopup::~CHMSPrescriptionPopup(){
}
void CHMSPrescriptionPopup::OnCreateComponents(){
	m_wndPrescriptionInput.Create(this, _T("Prescription Input"), 5, 425, 550, 600);
	m_wndPrescription.Create(this, _T("Prescription"), 5, 5, 550, 420);
	m_wndPrescriptionSynthesis.Create(this, _T("Prescription Synthesis"), 556, 5, 966, 420);
	m_wndDrugInteractions.Create(this, _T("Drug Interactions"), 556, 425, 966, 560);
	m_wndSynthList.Create(this,561, 30, 961, 415); 
	m_wndInteractionList.Create(this,561, 450, 961, 555); 
	m_wndList.Create(this,10, 30, 545, 415); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 450, 110, 475);
	m_wndStock.Create(this,115, 450, 365, 475); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 370, 450, 435, 475);
	m_wndOrderDate.Create(this,440, 450, 545, 475); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 10, 480, 110, 505);
	m_wndName.Create(this,115, 480, 365, 505); 
	m_wndUnitLabel.Create(this, _T("Unit"), 370, 480, 435, 505);
	m_wndUnit.Create(this,440, 480, 545, 505); 
	m_wndProdCountryLabel.Create(this, _T("Prod. Country"), 10, 510, 110, 535);
	m_wndProdCountry.Create(this,115, 510, 365, 535); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 370, 510, 435, 535);
	m_wndQty.Create(this,440, 510, 485, 535); 
	m_wndMaxQuantity.Create(this,490, 510, 545, 535); 
	m_wndUsageLabel.Create(this, _T("Usage"), 10, 540, 110, 565);
	m_wndUsage.Create(this,115, 540, 485, 565); 
	m_wndSearchForGenericName.Create(this, _T("Search for generic name"), 370, 570, 545, 595);
	m_wndSave.Create(this, _T("&Save"), 490, 540, 545, 565);
	m_wndConfirm.Create(this, _T("Con&firm"), 115, 570, 195, 595);
	m_wndClose.Create(this, _T("&Close"), 200, 570, 280, 595);
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 556, 570, 651, 595);
	m_wndTotalCost.Create(this,656, 570, 756, 595); 
	m_wndPatientPaidLabel.Create(this, _T("Patient Paid"), 759, 570, 854, 595);
	m_wndPatientPaid.Create(this,859, 570, 959, 595); 

}
void CHMSPrescriptionPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStock.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);
	m_wndProdCountry.SetLimitText(35);
	m_wndProdCountry.SetCheckValue(true);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndUsage.SetLimitText(128);
	m_wndUsage.SetCheckValue(true);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndPatientPaid.SetLimitText(16);
	m_wndPatientPaid.SetCheckValue(true);


	m_wndSynthList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndSynthList.InsertColumn(1, _T("Drug Name/ Cnt"), CFMT_TEXT, 200);
	m_wndSynthList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndSynthList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndSynthList.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 100);


	m_wndInteractionList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndInteractionList.InsertColumn(1, _T("Drug Interactions"), CFMT_TEXT, 200);
	m_wndInteractionList.InsertColumn(2, _T("Level"), CFMT_TEXT, 140);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Drug Name/ Cnt"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 120);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName.InsertColumn(1, _T("Drug Name /Cnt"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(3, _T("Generic"), CFMT_TEXT, 150);
	m_hms_pharmacyorderTbl.SetTableName(_T("hms_pharmacyorder"));
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_roomid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_bedid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_receptidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuedate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuer"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_status"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_payment"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_type"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_stockid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_sheetidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_advice"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.SetTableName(_T("hms_pharmacyorderln"));
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderno"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_idx"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_itemid"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_stockline"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_name"), dfText, 35); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_unit"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_issueqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_return"), dfText, 1); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_usage"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_dose"), dfText, 35); 

}
void CHMSPrescriptionPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSynthList.SetEvent(WE_SELCHANGE, _OnSynthListSelectChangeFnc);
	m_wndSynthList.SetEvent(WE_LOADDATA, _OnSynthListLoadDataFnc);
	m_wndSynthList.SetEvent(WE_DBLCLICK, _OnSynthListDblClickFnc);
	m_wndSynthList.AddEvent(1, _T("Delete"), _OnSynthListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndInteractionList.SetEvent(WE_SELCHANGE, _OnInteractionListSelectChangeFnc);
	m_wndInteractionList.SetEvent(WE_LOADDATA, _OnInteractionListLoadDataFnc);
	m_wndInteractionList.SetEvent(WE_DBLCLICK, _OnInteractionListDblClickFnc);
	m_wndInteractionList.AddEvent(1, _T("Delete"), _OnInteractionListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndProdCountry.SetEvent(WE_CHANGE, _OnProdCountryChangeFnc);
	//m_wndProdCountry.SetEvent(WE_SETFOCUS, _OnProdCountrySetfocusFnc);
	//m_wndProdCountry.SetEvent(WE_KILLFOCUS, _OnProdCountryKillfocusFnc);
	m_wndProdCountry.SetEvent(WE_CHECKVALUE, _OnProdCountryCheckValueFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndSearchForGenericName.SetEvent(WE_CLICK, _OnSearchForGenericNameSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndPatientPaid.SetEvent(WE_CHANGE, _OnPatientPaidChangeFnc);
	//m_wndPatientPaid.SetEvent(WE_SETFOCUS, _OnPatientPaidSetfocusFnc);
	//m_wndPatientPaid.SetEvent(WE_KILLFOCUS, _OnPatientPaidKillfocusFnc);
	m_wndPatientPaid.SetEvent(WE_CHECKVALUE, _OnPatientPaidCheckValueFnc);
	SetMode(VM_NONE);

}
void CHMSPrescriptionPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndProdCountry.GetDlgCtrlID(), m_szProdCountry);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Check(pDX, m_wndSearchForGenericName.GetDlgCtrlID(), m_bSearchForGenericName);
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndPatientPaid.GetDlgCtrlID(), m_nPatientPaid);

}
void CHMSPrescriptionPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_stockid"), m_szStockKey);
	rs.GetValue(_T("hpol_name"), m_szNameKey);
	rs.GetValue(_T("hpol_orderqty"), m_nQty);
	rs.GetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSPrescriptionPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_stockid"), m_szStockKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_name"), m_szNameKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_orderqty"), m_nQty);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSPrescriptionPopup::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_szUnit.Empty();
	m_szProdCountry.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szUsage.Empty();
	m_bSearchForGenericName=FALSE;
	m_nTotalCost=0;
	m_nPatientPaid=0;

}
int CHMSPrescriptionPopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
void CHMSPrescriptionPopup::OnSynthListDblClick(){
	
} 
void CHMSPrescriptionPopup::OnSynthListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionPopup::OnSynthListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionPopup::OnSynthListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSynthList.BeginLoad(); 
	m_wndSynthList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSynthList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DrugName/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Prod.Country")), NULL);
		rs.MoveNext();
	}
	m_wndSynthList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionPopup::OnInteractionListDblClick(){
	
} 
void CHMSPrescriptionPopup::OnInteractionListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionPopup::OnInteractionListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionPopup::OnInteractionListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndInteractionList.BeginLoad(); 
	m_wndInteractionList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInteractionList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DrugInteractions")), 
			rs.GetValue(_T("Level")), NULL);
		rs.MoveNext();
	}
	m_wndInteractionList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionPopup::OnListDblClick(){
	
} 
void CHMSPrescriptionPopup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionPopup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionPopup::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DrugName/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Prod.Country")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionPopup::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnStockSelendok(){
	 
}
/*void CHMSPrescriptionPopup::OnStockSetfocus(){
	
}*/
/*void CHMSPrescriptionPopup::OnStockKillfocus(){
	
}*/
long CHMSPrescriptionPopup::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionPopup::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionPopup::OnOrderDateChange(){
	
} */
/*void CHMSPrescriptionPopup::OnOrderDateSetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnOrderDateKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPrescriptionPopup::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnNameSelendok(){
	 
}
/*void CHMSPrescriptionPopup::OnNameSetfocus(){
	
}*/
/*void CHMSPrescriptionPopup::OnNameKillfocus(){
	
}*/
long CHMSPrescriptionPopup::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("drugname/cnt")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("generic")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionPopup::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionPopup::OnUnitChange(){
	
} */
/*void CHMSPrescriptionPopup::OnUnitSetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnUnitKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnProdCountryChange(){
	
} */
/*void CHMSPrescriptionPopup::OnProdCountrySetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnProdCountryKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnProdCountryCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnQtyChange(){
	
} */
/*void CHMSPrescriptionPopup::OnQtySetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnQtyKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnMaxQuantityChange(){
	
} */
/*void CHMSPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnMaxQuantityCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnUsageChange(){
	
} */
/*void CHMSPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnUsageKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnUsageCheckValue(){
	return 0;
} 
	void CHMSPrescriptionPopup::OnSearchForGenericNameSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPrescriptionPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPrescriptionPopup::OnTotalCostChange(){
	
} */
/*void CHMSPrescriptionPopup::OnTotalCostSetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnTotalCostKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnPatientPaidChange(){
	
} */
/*void CHMSPrescriptionPopup::OnPatientPaidSetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnPatientPaidKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnPatientPaidCheckValue(){
	return 0;
} 
int CHMSPrescriptionPopup::OnAddHMSPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPrescriptionPopup::OnEditHMSPrescriptionPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionPopup::OnDeleteHMSPrescriptionPopup(){
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
 		OnCancelHMSPrescriptionPopup(); 
 	}
	return 0;
}
int CHMSPrescriptionPopup::OnSaveHMSPrescriptionPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_pharmacyorderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pharmacyorderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPrescriptionPopupListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrescriptionPopup::OnCancelHMSPrescriptionPopup(){
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
int CHMSPrescriptionPopup::OnHMSPrescriptionPopupListLoadData(){
	return 0;
}
