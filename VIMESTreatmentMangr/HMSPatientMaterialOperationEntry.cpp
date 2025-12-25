#include "HMSPatientMaterialOperationEntry.h"
#include "MainFrm.h"
#include "HMSDailyOperationMaterialDialog.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageAddNew();
}*/
static void _OnMultipleDaySelectFnc(CWnd *pWnd){
	 ((CHMSPatientMaterialOperationEntry*)pWnd)->OnMultipleDaySelect();
}
static void _OnDaysChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnDaysChange();
} 

/*static void _OnDaysSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnDaysSetfocus();} */ 
/*static void _OnDaysKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnDaysKillfocus();
} */
static int _OnDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnDaysCheckValue();
} 
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameAddNew();
}*/
static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateChange();
} 
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnOperationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnOperationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationSelendok();
}
/*static void _OnOperationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationKillfocus();
}*/
/*static void _OnOperationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationKillfocus();
}*/
static long _OnOperationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationLoadData();
}
/*static void _OnOperationAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationAddNew();
}*/

static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnIndicationKillfocus();
}*/
static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnIndicationKillfocus();
}
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientMaterialOperationEntry *pVw = (CHMSPatientMaterialOperationEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientMaterialOperationEntry *pVw = (CHMSPatientMaterialOperationEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientDrugMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnAddHMSPatientDrugMaterialOperationEntry();
} 
static int _OnEditHMSPatientDrugMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnEditHMSPatientDrugMaterialOperationEntry();
} 
static int _OnDeleteHMSPatientDrugMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnDeleteHMSPatientDrugMaterialOperationEntry();
} 
static int _OnSaveHMSPatientDrugMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnSaveHMSPatientDrugMaterialOperationEntry();
} 
static int _OnCancelHMSPatientDrugMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnCancelHMSPatientDrugMaterialOperationEntry();
} 
CHMSPatientMaterialOperationEntry::CHMSPatientMaterialOperationEntry(CWnd *pParent, int nMode, int nType):
CGuiPopup(pParent)
{
	CGuiPopup::SetMode(nMode);
	
	m_nDlgWidth = 555;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_szPatientNameKey.Empty();
	m_szOrderDate.Empty();
	m_pWndOrder = pParent;
	m_nType = nType;	
	m_nDocumentNo = 0;

}
CHMSPatientMaterialOperationEntry::~CHMSPatientMaterialOperationEntry(){
}
void CHMSPatientMaterialOperationEntry::OnCreateComponents(){	
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 5, 105, 30);
	m_wndStorage.Create(this,110, 5, 390, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 105, 60);
	m_wndPatientName.Create(this,110, 35, 390, 60); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 395, 35, 470, 60);
	m_wndDocumentNo.Create(this,475, 35, 575, 60); 
	m_wndOperationLabel.Create(this, _T("Operation"), 5, 65, 105, 90);
	m_wndOperation.Create(this,110, 65, 575, 90); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 395, 6, 470, 31);
	m_wndOrderDate.Create(this,475, 5, 575, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 95, 105, 120);
	m_wndName.Create(this,110, 95, 390, 120); 
	m_wndQtyLabel.Create(this, _T("Qty"), 395, 95, 470, 120);
	m_wndQty.Create(this,475, 95, 515, 120); 
	m_wndMaxQuantity.Create(this,520, 95, 575, 120); 
	m_wndSave.Create(this, _T("&Save"), 475, 125, 540, 150);
	m_wndClose.Create(this, _T("X"), 545, 125, 575, 150);

}
void CHMSPatientMaterialOperationEntry::OnInitializeComponents(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndMultipleDay.ModifyStyle(WS_TABSTOP, 0);
	m_wndDays.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndQty.SetLimitText(6);
	m_wndQty.SetNumberDecimal(0);
	m_wndOperation.SetCheckValue(true);

	m_wndDocumentNo.SetReadOnly(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndMaxQuantity.SetCurrencyFormat(true);
/*	
//	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(35);
	m_wndTimeDay.SetLimitText(16);
	//m_wndTimeDay.SetCheckValue(true);
	m_wndTimeQty.SetLimitText(16);
	//m_wndTimeQty.SetCheckValue(true);
//	m_wndUsage.SetLimitText(128);
*/
	m_wndUsage.SetCheckValue(TRUE);
	m_wndUsage.SetAllowEmpty(true);
	
	m_wndMaxQuantity.SetReadOnly(TRUE);	
	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndStorage.SetReadOnly(true);
	m_wndPatientName.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 85);
	m_wndPatientName.InsertColumn(1, _T("Record No"), CFMT_TEXT, 80);
	m_wndPatientName.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndPatientName.InsertColumn(3, _T("Age"), CFMT_TEXT, 50);
	m_wndPatientName.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientName.InsertColumn(5, _T("Object"), CFMT_TEXT, 150);
	m_wndPatientName.InsertColumn(6, _T("Room"), CFMT_NUMBER, 50);
	m_wndPatientName.InsertColumn(7, _T("patientno"), CFMT_NUMBER, 0);
	m_wndPatientName.InsertColumn(8, _T("Refindex"), CFMT_NUMBER, 0);
	m_wndPatientName.InsertColumn(9, _T("objectid"), CFMT_NUMBER, 0);
	m_wndPatientName.Format(9, 2, 10);

	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //refidx
	m_wndName.InsertColumn(1, _T("Storage"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
	m_wndName.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndName.InsertColumn(5, _T("Generic"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(6, _T("Onhand"), CFMT_MONEY, 70);
	m_wndName.InsertColumn(7, _T("Product Country"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(8, _T("Original"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(9, _T("precision"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(10, _T("storage_id"), CFMT_TEXT, 0);
	m_wndName.Format(10, 2, 10);
	m_wndName.SetSearchStyle(SS_COMPARE);

	/*m_wndIndication.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndIndication.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);*/

	m_wndOperation.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndOperation.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndOperation.InsertColumn(2, _T("ItemID"), CFMT_TEXT, 0);
	m_wndOperation.InsertColumn(3, _T("type"), CFMT_TEXT, 0);
	m_wndOperation.InsertColumn(4, _T("Order Date"), CFMT_TEXT, 90);

	
	/*
	m_hms_pharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));	
	m_hms_pharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_storage_id"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_scaledrug"), dfInteger);
	m_hms_pharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong);
	m_hms_pharmaorderTbl.AddField(_T("hpo_reference_id"), dfLong);
	m_hms_pharmaorderTbl.AddField(_T("hpo_refitem_id"), dfText, 15); 

	
	
	m_hms_pharmaorder_lineTbl.SetTableName(_T("hms_pharmaorder_line"));
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_reforder_id"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_orderid"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_storage_id"), dfInteger); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_dousage"), dfText, 128);	
	*/

	m_hms_pharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_storage_id"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_scaledrug"), dfInteger);
	m_hms_pharmaorderTbl.AddField(_T("hpo_batch_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_reference_id"), dfLong);
	m_hms_pharmaorderTbl.AddField(_T("hpo_refitem_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_feetype"), dfText); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_dousage"), dfText, 128); 
	

	
}
void CHMSPatientMaterialOperationEntry::OnSetWindowEvents(){

	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndMultipleDay.SetEvent(WE_CLICK, _OnMultipleDaySelectFnc);
	m_wndDays.SetEvent(WE_CHANGE, _OnDaysChangeFnc);
	//m_wndDays.SetEvent(WE_SETFOCUS, _OnDaysSetfocusFnc);
	//m_wndDays.SetEvent(WE_KILLFOCUS, _OnDaysKillfocusFnc);
	m_wndDays.SetEvent(WE_CHECKVALUE, _OnDaysCheckValueFnc);
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	//m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
	m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
/*	
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	//m_wndTimeDay.SetEvent(WE_CHANGE, _OnTimeDayChangeFnc);
	//m_wndTimeDay.SetEvent(WE_SETFOCUS, _OnTimeDaySetfocusFnc);
	//m_wndTimeDay.SetEvent(WE_KILLFOCUS, _OnTimeDayKillfocusFnc);
	m_wndTimeDay.SetEvent(WE_CHECKVALUE, _OnTimeDayCheckValueFnc);
	//m_wndTimeQty.SetEvent(WE_CHANGE, _OnTimeQtyChangeFnc);
	//m_wndTimeQty.SetEvent(WE_SETFOCUS, _OnTimeQtySetfocusFnc);
	//m_wndTimeQty.SetEvent(WE_KILLFOCUS, _OnTimeQtyKillfocusFnc);
	m_wndTimeQty.SetEvent(WE_CHECKVALUE, _OnTimeQtyCheckValueFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
*/	
	m_wndOperation.SetEvent(WE_SELENDOK, _OnOperationSelendokFnc);
	//m_wndOperation.SetEvent(WE_SETFOCUS, _OnOperationSetfocusFnc);
	//m_wndOperation.SetEvent(WE_KILLFOCUS, _OnOperationKillfocusFnc);
	m_wndOperation.SetEvent(WE_SELCHANGE, _OnOperationSelectChangeFnc);
	m_wndOperation.SetEvent(WE_LOADDATA, _OnOperationLoadDataFnc);
	//m_wndOperation.SetEvent(WE_ADDNEW, _OnOperationAddNewFnc);


	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);	
	
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);
	
}
void CHMSPatientMaterialOperationEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	//DDX_Check(pDX, m_wndMultipleDay.GetDlgCtrlID(), m_bMultipleDay);
	//DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
/*
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_szTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_szTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
*/
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndOperation.GetDlgCtrlID(), m_szOperationKey);
}
void CHMSPatientMaterialOperationEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	/*
	szSQL.Format(_T("SELECT * FROM "));
//	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_storage_id"), m_szPatientNameKey);
	rs.GetValue(_T("product_name"), m_szNameKey);
	rs.GetValue(_T("hpol_qtyorder"), m_nQty);
	rs.GetValue(_T("hpo_usage"), m_szUsage);
	*/
	
	szSQL.Format(_T("SELECT mt_storage_id FROM m_transaction WHERE mt_orderno='%s' and mt_status='O' "), m_szBatchNo);
	rs.ExecSQL(szSQL);
	m_szStorageString = _T("-100");
	int nStorageID;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_storage_id"), nStorageID);
		m_szStorageString.AppendFormat(_T(", %d"), nStorageID);
		rs.MoveNext();
	}

}
void CHMSPatientMaterialOperationEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_hms_pharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"), m_nOID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_patientno"), m_nPatientNo);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_docno"), str2long(m_szPatientNameKey));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_roomid"), m_nRoomID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_bedid"), m_nBedID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_refidx"), m_nRefIndex);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

	m_hms_pharmaorderTbl.SetValue(_T("hpo_ordertype"), _T("M"));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_scaledrug"), 0);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_reference_id"),str2long(m_szOperationKey));
	m_hms_pharmaorderTbl.SetValue(_T("hfo_refitem_id"), _T(""));
	m_hms_pharmaorderTbl.SetValue(_T("hpol_feetype"), _T("PT"));
	m_hms_pharmaorderTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_dousage"), m_szUsage);



	
}
void CHMSPatientMaterialOperationEntry::SetDefaultValues(){
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szTimeDay.Empty();
	m_szTimeQty.Empty();
	m_szUsage.Empty();
	m_szMsg.Empty();
}
int CHMSPatientMaterialOperationEntry::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();			
			m_szOperationKey.Empty();
			m_szOrderDate = pMF->GetSysDate();
			//_tprintf(_T("\r\ncheck:%d, %d, %s"), m_bMultipleDay, m_nDays, m_szOrderDate);
			
			if(m_szPatientNameKey.IsEmpty())
				m_wndPatientName.SetFocus();
			else
				m_wndOperation.SetFocus();

			m_wndOrderDate.EnableWindow(false);
			m_bAddOrder = true;
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
			m_wndName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 

		//m_wndOrderDate.EnableWindow(FALSE);
		m_wndStorage.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}


void CHMSPatientMaterialOperationEntry::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnStorageSelendok(){
	UpdateData(true);
	m_nStorageID = str2long(m_szStorageKey);
}
/*void CHMSPatientMaterialOperationEntry::OnStorageSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnStorageKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id in(select msd_storage_id from m_storage_default) "));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientMaterialOperationEntry::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSPatientMaterialOperationEntry::OnMultipleDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(!m_bAddOrder){
		m_bAddOrder = true;
	}
	UpdateData(false);
	
}
void CHMSPatientMaterialOperationEntry::OnDaysChange(){
	m_bAddOrder	= true;
} 
/*void CHMSPatientMaterialOperationEntry::OnDaysSetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnDaysKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnDaysCheckValue(){
	return 0;
} 
void CHMSPatientMaterialOperationEntry::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnPatientNameSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	
	UpdateData(true);
	SetDefaultValues();	
	m_szStorageKey.Empty();
	m_szOperationKey.Empty();
	m_wndOrderDate.SetCheckValue(true);
//	m_szOrderDate = m_szCurrentOrderDate.Left(10);
	CGuiPopup::SetMode(VM_ADD);
	m_bAddOrder = true;
	
	if(m_nDocumentNo != str2long(m_szPatientNameKey))
	{
		m_nDocumentNo = str2long(m_szPatientNameKey);
		m_nPatientNo  = str2long(m_wndPatientName.GetCurrent(7));

		szSQL.Format(_T("SELECT ") \
				_T("htr_patientno as patientno, ") \
				_T("htr_docno as docno, ") \
				_T("htr_deptid as deptid, ") \
				_T("htr_idx as refidx, ") \
				_T("htr_doctor as doctor, ") \
				_T("hb_roomid as roomid, ") \
				_T("hb_bedid as bedid ") \
			_T("FROM hms_treatment_record ") \
			_T("LEFT JOIN hms_bed on(hb_docno=htr_docno and hb_deptid=htr_deptid and hb_refidx=htr_idx and hb_status='O') ") \
			_T("WHERE htr_docno=%ld AND htr_status='I' AND htr_deptid='%s' "), m_nDocumentNo,  pMF->m_szDept);
	_fmsg(_T("%s"), szSQL);
		
		rs.ExecSQL(szSQL);
		m_nRefIndex = 0;
		m_nRoomID = 0;
		m_nBedID = 0;
		if(!rs.IsEOF()){
			rs.GetValue(_T("refidx"), m_nRefIndex);
			rs.GetValue(_T("docotor"), m_szDoctor);
			rs.GetValue(_T("roomid"), m_nRoomID);
			rs.GetValue(_T("bedid"), m_nBedID);
		}

		szSQL.Format(_T("SELECT hpo_orderid as orderid ") \
			_T("FROM hms_pharmaorder ") \
			_T("WHERE hpo_docno=%ld and hpo_transaction_id=%ld and hpo_orderstatus='O' and hpo_ordertype='M'"),
			str2long(m_szPatientNameKey), m_nOID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			((CHMSDailyOperationMaterialDialog*)m_pWndOrder)->OnDrugListLoadData();
		}
		else
		{
			
			((CHMSDailyOperationMaterialDialog*) m_pWndOrder)->m_wndDrugList.DeleteAllItems();

		}
		
	}
	
	int nObjectID = str2int(m_wndPatientName.GetCurrent(9));
	szSQL.Format(_T("select distinct msd_storage_id from m_storage_default ") \
		_T("WHERE msd_object_id=%d and msd_storage_id in(%s) "), 
		nObjectID, m_szStorageString);
//_tprintf(_T("%s"), m_szStorageString);
	rs.ExecSQL(szSQL);
	m_szStorages = _T("-100");
	while(!rs.IsEOF()){
			int nStorageID;
			rs.GetValue(_T("msd_storage_id"), nStorageID);
			m_szStorages.AppendFormat(_T(",%d"), nStorageID);
			rs.MoveNext();
	}


	CString szObjectType = m_wndPatientName.GetCurrent(10);
	if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		szSQL.Format(_T("SELECT trunc(hd_insexpdate)-trunc(sysdate) as expdate from hms_doc where hd_docno=%ld "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <= 0)
		{
			m_szMsg.Format(_T("Th\x1EBB  \x62\x1EA3o  hi\x1EC3m \x63\x1EE7\x61 \x62\x1EC7nh nh\xE2n \x111\xE3 h\x1EBFt h\x1EA1n [%\x64] ng\xE0y"), -1*rs.GetIntValue());

		}
		
	}
	
	UpdateData(FALSE);
}
/*void CHMSPatientMaterialOperationEntry::OnPatientNameSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnPatientNameKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && str2long(m_szPatientNameKey) > 0){
		szWhere.Format(_T(" AND hd_docno=%d "), str2long(m_szPatientNameKey));
	};
	m_wndPatientName.DeleteAllItems(); 
	m_wndName.DeleteAllItems();
	int nCount = 0;
	/*
	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
_T("   hp_patientno           AS patientno,") \
_T("   htr_recordno           AS recordno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                     AS pname,") \
_T("   hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS age,") \
_T("   HMS_GETSEX(hp_sex)                                  AS sex,") \
_T("   hb_refidx                                           AS refidx,") \
_T("   hd_object                                           AS objectid,") \
_T("   HMS_GetObjectName(hd_object)                        AS objectname,") \
_T("   hb_roomid                                           AS roomid,") \
_T("   hb_idx                                              AS bedid") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_treatment_record") \
_T(" ON(htr_docno=hd_docno)") \
_T(" LEFT JOIN hms_bed") \
_T(" ON(hb_docno       =hd_docno") \
_T(" AND hb_deptid     =htr_deptid") \
_T(" AND hb_refidx     =htr_idx)") \
_T(" WHERE (htr_deptid ='%s'") \
_T(" OR htr_ctdeptid   ='%s')") \
_T(" AND htr_status    ='I'") \
_T(" AND htr_docno    IN") \
_T("   ( SELECT DISTINCT ho_docno") \
_T("   FROM hms_operation") \
_T("   WHERE (ho_pdeptid='%s'") \
_T("   OR ho_deptid     ='%s')") \
_T("   AND ho_status   in('S','T') ") \
_T("   UNION ALL") \
_T("   SELECT DISTINCT hpc_docno") \
_T("   FROM hms_pacsorder") \
_T("   WHERE (hpc_pdeptid='%s'") \
_T("   OR hpc_deptid     ='%s')") \
_T("   AND hpc_status   IN('S')") \
_T("   AND hpc_groupid   ='B3100'") \
_T("   ) %s ") \
_T(" ORDER BY pname,") \
_T("   docno "), pMF->m_szDept, pMF->m_szDept, 
			pMF->m_szDept, pMF->m_szDept, 
			pMF->m_szDept, pMF->m_szDept, 
			szWhere);
*/
	//Sua lai cau lenh de toc do load nhanh hon
		szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
_T("   hp_patientno           AS patientno,") \
_T("   htr_recordno           AS recordno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                     AS pname,") \
_T("   hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS age,") \
_T("   HMS_GETSEX(hp_sex)                                  AS sex,") \
_T("   hb_refidx                                           AS refidx,") \
_T("   hd_object                                           AS objectid,") \
_T("   HMS_GetObjectName(hd_object)                        AS objectname,") \
_T("   hb_roomid                                           AS roomid,") \
_T("   hb_idx                                              AS bedid") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_treatment_record") \
_T(" ON(htr_docno=hd_docno)") \
_T(" LEFT JOIN HMS_TREAT_MOVEMENT ON(htr_docno=htm_docno AND htr_idx=htm_refidx and htm_status='O') ") \
_T(" LEFT JOIN hms_bed") \
_T(" ON(hb_docno       =hd_docno") \
_T(" AND hb_deptid     =htr_deptid") \
_T(" AND hb_refidx     =htr_idx and hb_status='O')") \
/*_T(" WHERE (htr_deptid ='%s'") \
_T(" OR htr_ctdeptid   ='%s')") \*/
_T(" WHERE (htr_deptid='%s' or htr_ctdeptid='%s' or (HTM_PERFORM_DEPTID='%s' and htm_status='O')) ") \
_T(" AND htr_status    ='I' %s") \
_T(" ORDER BY pname,") \
_T("   docno "), pMF->m_szDept, pMF->m_szDept, pMF->m_szDept, szWhere);


_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientName.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("recordno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("objectname")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("refidx")),
			rs.GetValue(_T("objectid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPatientMaterialOperationEntry::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientMaterialOperationEntry::OnOrderDateChange(){
	m_bAddOrder	= true;
} 
/*void CHMSPatientMaterialOperationEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnOrderDateKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnOrderDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//CRecord rs(&pMF->m_db);
	//CString szSQL;
	//UpdateData(true);
	//CString szDate,m_szInBedDate;
	//
	//szDate = m_szCurrentOrderDate.Left(10);

	//szSQL.Format(_T("select MAX(trunc_date(hb_admitdate)) from hms_bed ") \
	//	_T(" where hb_docno =%ld and hb_deptid='%s'  ")\
	//	_T(" and hb_refidx=%d ") \
	//	,str2long(m_szPatientNameKey), pMF->m_szDept,ToInt(m_wndPatientName.GetCurrent(8)));
	//
	//rs.ExecSQL(szSQL);
	//m_szInBedDate = rs.GetStringValue();

	//if (!m_szInBedDate.IsEmpty()) 
	//	szDate = m_szInBedDate;	
	//
	//m_nMaxDays = CompareDate(m_szOrderDate, m_szCurrentOrderDate);	

	//int n = CompareDate(m_szOrderDate, szDate);	
	//if (n < 0  || m_nMaxDays < 0 || m_nMaxDays > nNumberOrderDate)	
	//	return -1;

	return 0;
} 
void CHMSPatientMaterialOperationEntry::OnOperationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnOperationSelendok(){
	 
}
/*void CHMSPatientMaterialOperationEntry::OnOperationSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnOperationKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnOperationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperation.IsSearchKey() && str2long(m_szOperationKey) > 0){
		szWhere.Format(_T(" AND idx=%ld "), str2long(m_szOperationKey));
	};
	m_wndOperation.DeleteAllItems(); 
	int nCount = 0;
	
	if(pMF->IsOutPatient() || pMF->IsCancerPatient())
	{
		
		szWhere.AppendFormat(_T(" and (treattime=0 OR treattime=%d) "), pMF->GetTreatTime());
	}
	szSQL.Format(_T(" SELECT idx,") \
_T("   itemid,") \
_T("   hfl_name as name, orderdate ") \
_T(" FROM") \
_T("   (SELECT ho_idx AS idx,") \
_T("     ho_itemid    AS itemid, to_char(ho_orderdate,'DD/MM/YYYY') as orderdate, ho_treattime as treattime ") \
_T("   FROM hms_operation") \
_T("   WHERE ho_docno     =:docno") \
_T("   AND (ho_deptid     =':deptid'") \
_T("   OR ho_pdeptid      =':deptid')") \
_T("   AND ho_status     IN('S','T')") \
_T("   UNION ALL") \
_T("   SELECT hpcl_orderlineid AS idx,") \
_T("     hpcl_itemid, to_char(hpc_orderdate,'DD/MM/YYYY') as orderdate, hpc_treattime ") \
_T("   FROM hms_pacsorder") \
_T("   LEFT JOIN hms_pacsorderline") \
_T("   ON(hpcl_orderid   =hpc_orderid)") \
_T("   WHERE hpcl_docno  =:docno") \
_T("   AND (hpc_deptid   =':deptid'") \
_T("   OR hpc_pdeptid    =':deptid')") \
_T("   AND hpc_status   <> 'T'") \
_T("   AND hpc_groupid   ='B3100'") \
_T("   ) tbl") \
_T(" LEFT JOIN hms_fee_list") \
_T(" ON(hfl_feeid=itemid)") \
_T("WHERE hfl_active='Y' %s ORDER BY hfl_name "), szWhere);

	CString tmpStr;
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	szSQL.Replace(_T(":docno"), tmpStr);
	szSQL.Replace(_T(":deptid"), pMF->m_szDept);

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperation.AddItems(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("itemid")),
			_T("CL"), 
			rs.GetValue(_T("orderdate")),
			NULL);
		rs.MoveNext();
	}

	return nCount;
}
/*void CHMSPatientMaterialOperationEntry::OnOperationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientMaterialOperationEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnNameSelendok(){

	UpdateData(true);
	m_szNameKey = m_wndName.GetCurrent(0);
	m_nMaxQuantity = str2float(m_wndName.GetCurrent(6));
	m_szStorageKey  = m_wndName.GetCurrent(10);
	m_szOperationKey = m_wndOperation.GetCurrent(0);
	m_szItem_ID = m_wndOperation.GetCurrent(2);
	//_tprintf(_T("\r\nOperation:%s\r\n"), m_szOperationKey);
	UpdateData(false);
	CString szPrecision = m_wndName.GetCurrent(9);
	if(szPrecision == _T("Y"))
		m_wndQty.SetNumberDecimal(2);
	else
		m_wndQty.SetNumberDecimal(0);

	//m_wndQty.SetMinMax(1, m_nMaxQuantity);


}
/*void CHMSPatientMaterialOperationEntry::OnNameSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnNameKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && str2long(m_szNameKey) > 0){
		szWhere.Format(_T(" AND msl_product_id=%ld "), str2long(m_szNameKey));
	};
	
	m_wndName.DeleteAllItems(); 
	int nCount = 0;


	szWhere.AppendFormat(_T(" and msl_storage_id in(%s) and msl_expdate > to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szStorages, m_szOrderDate);


	szSQL.Format(_T(" SELECT msl_product_id             AS product_id,") \
_T("   msl_product_name                AS product_name,") \
_T("   msl_product_uomname             AS product_uomname,") \
_T("   msl_classname                   AS product_genericname,") \
_T("   msl_countryname                 AS product_countryname,") \
_T("   0                  AS product_unitprice,") \
_T("   0                  AS product_saleprice,") \
_T("   msl_isprecision                 AS product_isprecision,") \
_T("   msl_storage_id                  AS storage_id,") \
_T("   Get_StorageCode(msl_storage_id) AS storage_code,") \
_T("   SUM(msl_qtyavaiable)            AS product_qtyavaiable") \
_T(" FROM m_storage_view") \
_T(" WHERE msl_isactive ='Y' %s ") \
_T(" GROUP BY msl_product_id,") \
_T("   msl_product_name,") \
_T("   msl_product_uomname,") \
_T("   msl_classname,") \
_T("   msl_countryname,") \
_T("   msl_isprecision,") \
_T("   msl_storage_id") \
_T(" HAVING SUM(msl_qtyavaiable) > 0") \
_T(" ORDER BY product_name,") \
_T("   product_uomname"), szWhere );

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);

	CString szStorageName;
	CString szName, szGeneric;
	while(!rs.IsEOF()){ 
	

		m_wndName.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("storage_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_unitprice")), 
			rs.GetValue(_T("product_genericname")), 
			rs.GetValue(_T("product_qtyavaiable")), 
			rs.GetValue(_T("product_countryname")),
			_T(""),
			rs.GetValue(_T("product_isprecision")),
			rs.GetValue(_T("storage_id")), 
			rs.GetValue(_T("product_saleprice")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;



}
/*void CHMSPatientMaterialOperationEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientMaterialOperationEntry::OnQtyChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnQtySetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnQtyKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnQtyCheckValue(){
	UpdateData(true);
	_tprintf(_T("\r\n%f: %f"), m_nMaxQuantity, m_nQty);
	if(m_nQty > m_nMaxQuantity || m_nQty <= 0)
	{
		m_wndQty.SetToolTipMessage(_T("Quantity order > onhand quantity"));
		return -1;
	}



	return 0;
} 
/*void CHMSPatientMaterialOperationEntry::OnMaxQuantityChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnMaxQuantityKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnMaxQuantityCheckValue(){
	return 0;
} 

void CHMSPatientMaterialOperationEntry::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnIndicationSelendok(){
	m_wndIndication.GetWindowText(m_szUsage);
	m_wndUsage.SetWindowText(m_szUsage);
}
/*void CHMSPatientMaterialOperationEntry::OnIndicationSetfocus(){
	
}*/

void CHMSPatientMaterialOperationEntry::OnIndicationKillfocus(){
}
long CHMSPatientMaterialOperationEntry::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndIndication, m_szIndicationKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientMaterialOperationEntry::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientMaterialOperationEntry::OnTimeDayChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnTimeDaySetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnTimeDayKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnTimeDayCheckValue(){

	m_wndTimeDay.UpdateData(true);
	if(m_szUsage.IsEmpty() || m_szTimeDay.IsEmpty())
	{
		m_wndUsage.SetFocus();
		return 0;
	}
	m_szUsage.Format(_T("%s ngày %s l\x1EA7n"), m_wndIndication.GetCurrent(1),  m_szTimeDay);
	UpdateData(false);
	return 0;
} 
/*void CHMSPatientMaterialOperationEntry::OnTimeQtyChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnTimeQtySetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnTimeQtyKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnTimeQtyCheckValue(){
	m_wndTimeQty.UpdateData(true);
	if(m_szUsage.IsEmpty() || m_szTimeQty.IsEmpty())
		return 0;

	CString szUnit;
	szUnit = m_wndName.GetCurrent(3);
	m_szUsage.Format(_T("%s ngày %s l\x1EA7n m\x1ED7i l\x1EA7n %s %s"), m_wndIndication.GetCurrent(1),  m_szTimeDay, m_szTimeQty, szUnit);
	UpdateData(false);
	return 0;
} 
/*void CHMSPatientMaterialOperationEntry::OnUsageChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnUsageSetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnUsageKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnUsageCheckValue(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szUsage.Trim();
	if(m_szUsage.IsEmpty() && pMF->IsRequireUsage(m_szNameKey))
		return -1;
	return 0;
} 
void CHMSPatientMaterialOperationEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSPatientDrugMaterialOperationEntry();
} 
void CHMSPatientMaterialOperationEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	((CHMSDailyOperationMaterialDialog*)m_pWndOrder)->GetDataToScreen();	
	CGuiPopup::ClosePopup();
	
} 
int CHMSPatientMaterialOperationEntry::OnAddHMSPatientDrugMaterialOperationEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientMaterialOperationEntry::OnEditHMSPatientDrugMaterialOperationEntry(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientMaterialOperationEntry::OnDeleteHMSPatientDrugMaterialOperationEntry(){
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
 		OnCancelHMSPatientDrugMaterialOperationEntry(); 
 	}
	return 0;
}
int CHMSPatientMaterialOperationEntry::OnSaveHMSPatientDrugMaterialOperationEntry(){
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int ret;
	long nOrderID = 0;
	bool bAddFlag = true;
	CString szMfgID;
	CString szItemID, szFeeType;


	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
		return -1; 

 	if(!IsValidateData()) 
 		return -1; 
	m_nStorageID = str2int(m_wndName.GetCurrent(10));
	
	if(m_nDocumentNo <= 0)
		return -1;

	if(m_nStorageID <= 0)
		return 0;


	m_nStorageID = str2int(m_szStorageKey);
	szItemID = m_wndOperation.GetCurrent(2);
	szFeeType = m_wndOperation.GetCurrent(3);

	long nTransactionID = ((CHMSDailyOperationMaterialDialog*)m_pWndOrder)->GetTransactionID(m_nStorageID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_batch_id"), m_nOID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"), nTransactionID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);	
	m_hms_pharmaorderTbl.SetValue(_T("hpo_reference_id"), str2long(m_szOperationKey));	
	m_hms_pharmaorderTbl.SetValue(_T("hpo_refitem_id"), szItemID);	
	m_hms_pharmaorderTbl.SetValue(_T("hpol_feetype"), szFeeType);	
	CString szOrderDate;
	szOrderDate.AppendFormat(_T("%s %s"), m_szOrderDate, pMF->GetSysTime());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), szOrderDate);


		
	szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE(%s) "), m_hms_pharmaorderTbl.FormatSQL());

		nOrderID = str2long(pMF->ExecDML(szSQL));
		if(nOrderID <= 0)
		{
			bAddFlag = false;
		}
		
	if(bAddFlag){
		pMF->Commit();
		ret = 1;
		if(nOrderID > 0)
		{

			long nDocumentNo = str2long(m_szPatientNameKey);
			((CHMSDailyOperationMaterialDialog*)m_pWndOrder)->m_szOrderDateEmtry = m_szOrderDate;
			((CHMSDailyOperationMaterialDialog*)m_pWndOrder)->m_szPatientNameKey = m_szPatientNameKey;
			((CHMSDailyOperationMaterialDialog*)m_pWndOrder)->Refresh(nTransactionID, nDocumentNo);
		}
		else
		{
//			((CHMSMedicalCabinetDrug*)m_pWndOrder)->Refresh(nOrderID);
		}
		SetMode(VM_ADDCHILD);
	}
	else
	{
		pMF->Rollback();
		ret = -1;

	//	ShowMessageBox(_T("Can not add item"), 0);
	}
	


 	return ret; 

}
int CHMSPatientMaterialOperationEntry::OnCancelHMSPatientDrugMaterialOperationEntry(){
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
int CHMSPatientMaterialOperationEntry::OnHMSPatientDrugMaterialOperationEntryListLoadData(){
	return 0;
}

BOOL CHMSPatientMaterialOperationEntry::PreTranslateMessage(MSG* pMsg){

	BOOL ret = CGuiPopup::PreTranslateMessage(pMsg);
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE){		
	}

	if(!m_szMsg.IsEmpty())
	{
				CRect rect;
				
				GetFocus()->GetWindowRect(&rect);
				CPoint pt = rect.TopLeft();
				m_wndToolTip->SetFont(GetFocus()->GetFont());
				m_wndToolTip->Show(m_szMsg, &pt);
				m_szMsg.Empty();
	}
	return ret;
}