#include "HMSDailyOrderAddEntry.h"
#include "MainFrm.h"
#include "HMSDailyOrderView.h"
#include "HMSMedicalCabinetDrug.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyOrderAddEntry* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnStorageAddNew();
}*/
static void _OnMultipleDaySelectFnc(CWnd *pWnd){
	 ((CHMSDailyOrderAddEntry*)pWnd)->OnMultipleDaySelect();
}
static void _OnDaysChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnDaysChange();
} 

/*static void _OnDaysSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnDaysSetfocus();} */ 
/*static void _OnDaysKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnDaysKillfocus();
} */
static int _OnDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnDaysCheckValue();
} 
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyOrderAddEntry* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnPatientNameAddNew();
}*/
static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnOrderDateChange();
} 
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyOrderAddEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyOrderAddEntry* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationKillfocus();
}*/
static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationKillfocus();
}
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationAddNew();
}*/

static long _OnIndicationCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationCheckValue();
}

/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntry *pVw = (CHMSDailyOrderAddEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntry *pVw = (CHMSDailyOrderAddEntry *)pWnd;
	pVw->OnCloseSelect();
} 


static void _OnInDrugstoreSelectFnc(CWnd *pWnd){
	 ((CHMSDailyOrderAddEntry*)pWnd)->OnInDrugstoreCheck();
}

static int _OnAddHMSDailyOrderAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntry*)pWnd)->OnAddHMSDailyOrderAddEntry();
} 
static int _OnEditHMSDailyOrderAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntry*)pWnd)->OnEditHMSDailyOrderAddEntry();
} 
static int _OnDeleteHMSDailyOrderAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntry*)pWnd)->OnDeleteHMSDailyOrderAddEntry();
} 
static int _OnSaveHMSDailyOrderAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntry*)pWnd)->OnSaveHMSDailyOrderAddEntry();
} 
static int _OnCancelHMSDailyOrderAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntry*)pWnd)->OnCancelHMSDailyOrderAddEntry();
} 
CHMSDailyOrderAddEntry::CHMSDailyOrderAddEntry(CWnd *pParent, int nMode, int nType):
CGuiPopup(pParent)
{
	CGuiPopup::SetMode(nMode);
	
	m_nDlgWidth = 555;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_szPatientNameKey.Empty();
	m_bMultipleDay=FALSE;
	m_nDays=1;
	m_szOrderDate.Empty();
	m_pWndOrder = pParent;
	m_nType = nType;	
	m_bInDrugstore = FALSE;

}
CHMSDailyOrderAddEntry::~CHMSDailyOrderAddEntry(){
}
void CHMSDailyOrderAddEntry::OnCreateComponents(){	
	m_wndMultipleDay.Create(this, _T("Multiple Day"), 5, 5, 105, 30);
	m_wndDays.Create(this,110, 5, 160, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 165, 5, 255, 30);
	m_wndOrderDate.Create(this,260, 5, 390, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 105, 60);
	m_wndPatientName.Create(this,110, 35, 260, 60); 
	m_wndDrugStoreOption.Create(this,_T("Buy in stall"), 265, 35, 390, 60);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 395, 35, 470, 60);
	m_wndDocumentNo.Create(this,475, 35, 575, 60); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 65, 105, 90);
	m_wndName.Create(this,110, 65, 390, 90); 
	
	m_wndQtyLabel.Create(this, _T("Qty"), 395, 65, 470, 90);
	m_wndQty.Create(this,475, 65, 515, 90); 
	m_wndMaxQuantity.Create(this,520, 65, 575, 90); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 5, 95, 105, 120);
	m_wndIndication.Create(this,110, 95, 260, 120); 
	m_wndTimeDayLabel.Create(this, _T("Time/Day"), 265, 95, 345, 120);
	m_wndTimeDay.Create(this,350, 95, 390, 120); 
	m_wndTimeQtyLabel.Create(this, _T("Time/Qty"), 395, 95, 470, 120);
	m_wndTimeQty.Create(this,475, 95, 575, 120); 
	m_wndUsageLabel.Create(this, _T("Usage"), 5, 125, 105, 150);
	m_wndUsage.Create(this,110, 125, 470, 150); 
	m_wndSave.Create(this, _T("&Save"), 475, 125, 540, 150);
	m_wndClose.Create(this, _T("X"), 545, 125, 575, 150);
	m_wndStorageLabel.Create(this, _T("Storage"), 395, 5, 470, 30);
	m_wndStorage.Create(this,475, 5, 575, 30);
}
void CHMSDailyOrderAddEntry::OnInitializeComponents(){
	
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

	m_wndDocumentNo.SetReadOnly(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndMaxQuantity.SetCurrencyFormat(true);

//	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(35);
	m_wndTimeDay.SetLimitText(16);
	//m_wndTimeDay.SetCheckValue(true);
	m_wndTimeQty.SetLimitText(16);
	//m_wndTimeQty.SetCheckValue(true);
	m_wndUsage.SetLimitText(128);
	m_wndMaxQuantity.SetReadOnly(TRUE);	
	
	m_wndDrugStoreOption.ModifyStyle(WS_TABSTOP, 0);

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
	m_wndPatientName.InsertColumn(10, _T("objectid"), CFMT_TEXT, 0);
	m_wndPatientName.Format(10, 2, 10);

	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //refidx
	m_wndName.InsertColumn(1, _T("Storage"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
	m_wndName.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 0);
	m_wndName.InsertColumn(5, _T("Generic"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(6, _T("OnHand"), CFMT_MONEY, 70);
	m_wndName.InsertColumn(7, _T("Product Country"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(8, _T("Original"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(9, _T("precision"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(10, _T("storage_id"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(11, _T("saleprice"), CFMT_NUMBER, 0);
	m_wndName.Format(10, 2, 10);
	m_wndName.SetSearchStyle(SS_COMPARE);

	m_wndIndication.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndIndication.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	
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
	m_hms_pharmaorderTbl.AddField(_T("hpo_batch_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_reference_id"), dfLong);
	m_hms_pharmaorderTbl.AddField(_T("hpo_refitem_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_feetype"), dfText); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_dousage"), dfText, 128); 
	
	/*
	
	m_hms_pharmaorder_lineTbl.SetTableName(_T("hms_pharmaorder_line"));
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_reforder_id"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_orderid"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_storage_id"), dfInteger); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_dousage"), dfText, 128); 
	*/
	
}
void CHMSDailyOrderAddEntry::OnSetWindowEvents(){

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
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	m_wndIndication.SetEvent(WE_CHECKVALUE, _OnIndicationCheckValueFnc);
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
	m_wndDrugStoreOption.SetEvent(WE_CLICK, _OnInDrugstoreSelectFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);	

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);
	if(m_nType  != 0)
	{
		m_wndMultipleDay.ShowWindow(SW_HIDE);
		m_wndDays.ShowWindow(SW_HIDE);
	}

	
}
void CHMSDailyOrderAddEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Check(pDX, m_wndMultipleDay.GetDlgCtrlID(), m_bMultipleDay);
	DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_szTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_szTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Check(pDX, m_wndDrugStoreOption.GetDlgCtrlID(), m_bInDrugstore);
}
void CHMSDailyOrderAddEntry::GetDataToScreen(){
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
	
	szSQL.Format(_T("SELECT mt_storage_id FROM m_transaction WHERE mt_orderno='%s' and mt_status='O' and mt_ordertype ='T'"), m_szBatchNo);
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
void CHMSDailyOrderAddEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_batch_id"), m_nBatchID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"), m_nTransactionID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_patientno"), m_nPatientNo);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_docno"), str2long(m_szPatientNameKey));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_roomid"), m_nRoomID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_bedid"), m_nBedID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_refidx"), m_nRefIndex);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

	m_hms_pharmaorderTbl.SetValue(_T("hpo_ordertype"), _T("D"));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_scaledrug"), 0);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_reference_id"),0);
	m_hms_pharmaorderTbl.SetValue(_T("hfo_refitem_id"), _T(""));
	m_hms_pharmaorderTbl.SetValue(_T("hpol_feetype"), _T("CP"));
	m_hms_pharmaorderTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_dousage"), m_szUsage);


	/*
	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_reforder_id"), m_nTransactionID);
	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_orderid"), 0);
	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_storage_id"), m_nStorageID);
	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_dousage"), m_szUsage);
*/
	
}
void CHMSDailyOrderAddEntry::SetDefaultValues(){
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szTimeDay.Empty();
	m_szTimeQty.Empty();
	m_szUsage.Empty();	

}
int CHMSDailyOrderAddEntry::SetMode(int nMode){
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
			
	
			//_tprintf(_T("\r\ncheck:%d, %d, %s"), m_bMultipleDay, m_nDays, m_szOrderDate);
			if(!m_bMultipleDay){
				m_nDays = 1;				
				m_bMultipleDay = FALSE;
				m_szOrderDate = pMF->GetSysDate();
				m_wndDays.EnableWindow(false);				
			}

			if(m_szPatientNameKey.IsEmpty())
				m_wndPatientName.SetFocus();
			else
				m_wndName.SetFocus();

			//m_wndOrderDate.EnableWindow(false);
			m_bAddOrder = true;
			for (int i =0; i < m_nDaysMax; i++)
				m_nID[i] = 0;		

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


void CHMSDailyOrderAddEntry::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnStorageSelendok(){
	UpdateData(true);
	m_nStorageID = str2long(m_szStorageKey);
}
/*void CHMSDailyOrderAddEntry::OnStorageSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntry::OnStorageKillfocus(){
	
}*/
long CHMSDailyOrderAddEntry::OnStorageLoadData(){
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
/*void CHMSDailyOrderAddEntry::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSDailyOrderAddEntry::OnMultipleDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bMultipleDay){
		m_wndDays.EnableWindow(true);
		m_wndOrderDate.EnableWindow(true);
		m_nDays = 3;
	}
	else
	{
		m_nDays = 1;
		m_wndDays.EnableWindow(false);
		//m_wndOrderDate.EnableWindow(false);
	}
	if(!m_bAddOrder){
		for (int i =0; i < m_nDaysMax; i++)
			m_nID[i] = 0;
		m_bAddOrder = true;
	}
	UpdateData(false);
	
}
void CHMSDailyOrderAddEntry::OnDaysChange(){
	m_bAddOrder	= true;
} 
/*void CHMSDailyOrderAddEntry::OnDaysSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnDaysKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnDaysCheckValue(){
	UpdateData(true);
	if(m_nDays < 0 || m_nDays > m_nDaysMax)
		return -1;
	return 0;
} 
void CHMSDailyOrderAddEntry::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnPatientNameSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	
	UpdateData(true);
	SetDefaultValues();	
	m_szStorageKey.Empty();
	m_wndOrderDate.SetCheckValue(true);
//	m_szOrderDate = m_szCurrentOrderDate.Left(10);
	CGuiPopup::SetMode(VM_ADD);
	if(m_nDays <= 1)
	{
		m_nDays = 1;
		//m_wndOrderDate.EnableWindow(false);
	}
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
	//_fmsg(_T("%s"), szSQL);
		
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
			_T("FROM hms_ipharmaorder ") \
			_T("WHERE hpo_docno=%ld and hpo_transaction_id=%ld and hpo_orderstatus='O' and hpo_ordertype='D'"),
			str2long(m_szPatientNameKey), m_nTransactionID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			((CHMSDailyOrderView*)m_pWndOrder)->OnDrugListLoadData();
		}
		else
		{
			
			((CHMSDailyOrderView*) m_pWndOrder)->m_wndDrugList.DeleteAllItems();

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
	if(szObjectType == _T("I"))
	{
		m_wndDrugStoreOption.EnableWindow(TRUE);
		
	}
	else
	{
		m_wndDrugStoreOption.EnableWindow(FALSE);
		m_bInDrugstore = FALSE;
	}

	UpdateData(FALSE);
}
/*void CHMSDailyOrderAddEntry::OnPatientNameSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntry::OnPatientNameKillfocus(){
	
}*/
long CHMSDailyOrderAddEntry::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && str2long(m_szPatientNameKey) > 0){
		szWhere.Format(_T(" AND hd_docno=%d "), str2long(m_szPatientNameKey));
	};
	m_wndPatientName.DeleteAllItems(); 
	m_wndName.DeleteAllItems();
	int nCount = 0;

	//szWhere.AppendFormat(_T(" and hd_object <> 7 "));
	szSQL.Format(_T("SELECT distinct hd_docno as docno, ") \
		_T(" hp_patientno as patientno, ") \
		_T(" htr_recordno as recordno, ") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age, ") \
		_T(" HMS_GETSEX(hp_sex) as sex, hb_refidx as refidx, hd_object as objectid, ") \
		_T(" HMS_GetObjectName(hd_object) as objectname, hms_getobjecttype(hd_object) as objecttype, hb_roomid as roomid, hb_idx as bedid ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_bed ON(hb_docno=hd_docno and hb_deptid=htr_deptid and hb_refidx=htr_idx) ") \
		_T(" WHERE (htr_deptid='%s' or htr_ctdeptid='%s') AND htr_status='I' and (htr_outpatient='Y' OR hb_status='O') ") \
		_T(" %s ORDER BY pname, docno "), pMF->m_szDept, pMF->m_szDept, szWhere);

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
			rs.GetValue(_T("objecttype")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDailyOrderAddEntry::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyOrderAddEntry::OnOrderDateChange(){
	m_bAddOrder	= true;
} 
/*void CHMSDailyOrderAddEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnOrderDateKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnOrderDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	CString szDate,m_szInBedDate;
	int nNumberOrderDate = m_nDays ;
	if(!m_bMultipleDay) nNumberOrderDate += 3; 
	szDate = m_szCurrentOrderDate.Left(10);

	szSQL.Format(_T("select MAX(trunc_date(hb_admitdate)) from hms_bed ") \
		_T(" where hb_docno =%ld and hb_deptid='%s'  ")\
		_T(" and hb_refidx=%d ") \
		,str2long(m_szPatientNameKey), pMF->m_szDept,ToInt(m_wndPatientName.GetCurrent(8)));
	
	rs.ExecSQL(szSQL);
	m_szInBedDate = rs.GetStringValue();

	if (!m_szInBedDate.IsEmpty()) 
		szDate = m_szInBedDate;	
	
	m_nMaxDays = CompareDate(m_szOrderDate, m_szCurrentOrderDate);	
	int n = CompareDate(m_szOrderDate, m_szCurrentOrderDate);	

	_tprintf(_T("Orderdate: %s, CurrentDate: %s, szDate :%s, N: %d, MaxDay: %d "), m_szOrderDate, m_szCurrentOrderDate, szDate, n, m_nMaxDays);
	if (n < -10  || m_nMaxDays < -10 || m_nMaxDays > m_nDaysMax)
		return -1;
	UpdateData(false);
	return 0;
} 
void CHMSDailyOrderAddEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnNameSelendok(){

	UpdateData(true);
	m_szNameKey = m_wndName.GetCurrent(0);
	m_nMaxQuantity = str2float(m_wndName.GetCurrent(6));
	m_szStorageKey  = m_wndName.GetCurrent(10);
	
	UpdateData(false);
	CString szPrecision = m_wndName.GetCurrent(9);

	if(szPrecision == _T("Y"))
		m_wndQty.SetNumberDecimal(2);
	else
		m_wndQty.SetNumberDecimal(0);

	//m_wndQty.SetMinMax(1, m_nMaxQuantity);


}
/*void CHMSDailyOrderAddEntry::OnNameSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntry::OnNameKillfocus(){
	
}*/
long CHMSDailyOrderAddEntry::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_szStorages.IsEmpty())
		return 0;

	if(m_wndName.IsSearchKey() && str2long(m_szNameKey)){
		szWhere.Format(_T(" AND msl_product_id=%ld "), str2long(m_szNameKey));
	};
	
	m_wndName.DeleteAllItems(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and msl_storage_id in(%s) and msl_expdate > cast_string2date('%s') "), m_szStorages, m_szOrderDate);
	
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

	nCount = rs.ExecSQL(szSQL);

	CString szStorageName;
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
/*void CHMSDailyOrderAddEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDailyOrderAddEntry::OnQtyChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnQtySetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnQtyKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnQtyCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_nQty < 0) 
		return -1;
	if(m_nQty*m_nDays > m_nMaxQuantity)
	{
		m_wndQty.SetToolTipMessage(_T("Quantity order > onhand quantity"));
		return -1;
	}

	bool res = pMF->CheckDepositAmount(str2long(m_szPatientNameKey), m_szNameKey, m_nQty*m_nDays, _T("Y"), str2int(m_szStorageKey));
	if(!res)
	{
		m_wndQty.SetToolTipMessage(_T("S\x1ED1 ti\x1EC1n \x62\x1EC7nh nh\xE2n t\x1EA1m g\x1EEDi \x111\xE3 h\x1EBFt"));
		return -1;
	}

	return 0;
} 
/*void CHMSDailyOrderAddEntry::OnMaxQuantityChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnMaxQuantityKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnMaxQuantityCheckValue(){
	return 0;
} 

void CHMSDailyOrderAddEntry::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnIndicationSelendok(){
	m_wndIndication.GetWindowText(m_szUsage);
	m_wndUsage.SetWindowText(m_szUsage);
	
}
/*void CHMSDailyOrderAddEntry::OnIndicationSetfocus(){
	
}*/
void CHMSDailyOrderAddEntry::OnIndicationKillfocus(){
	
}
long CHMSDailyOrderAddEntry::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndIndication, m_szIndicationKey);
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_usage_way' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDailyOrderAddEntry::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDailyOrderAddEntry::OnTimeDayChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnTimeDaySetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnTimeDayKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnTimeDayCheckValue(){

	m_wndTimeDay.UpdateData(true);
	UpdateData(true);
	
	if(m_szUsage.IsEmpty())
	{
		m_szTimeDay.Empty();
		m_szTimeQty.Empty();
		m_wndUsage.SetFocus();
		return 0;
	}
	m_szUsage.Format(_T("%s ngày %s l\x1EA7n"), m_wndIndication.GetCurrent(1),  m_szTimeDay);
	UpdateData(false);
	return 0;
} 
/*void CHMSDailyOrderAddEntry::OnTimeQtyChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnTimeQtySetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnTimeQtyKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnTimeQtyCheckValue(){
	m_wndTimeQty.UpdateData(true);
	if(m_szUsage.IsEmpty() || m_szTimeQty.IsEmpty())
		return 0;

	CString szUnit;
	szUnit = m_wndName.GetCurrent(3);
	m_szUsage.Format(_T("%s ngày %s l\x1EA7n m\x1ED7i l\x1EA7n %s %s"), m_wndIndication.GetCurrent(1),  m_szTimeDay, m_szTimeQty, szUnit);
	UpdateData(false);
	return 0;
} 
/*void CHMSDailyOrderAddEntry::OnUsageChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnUsageSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnUsageKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnUsageCheckValue(){
	
	return 0;
} 
void CHMSDailyOrderAddEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDailyOrderAddEntry();
} 
void CHMSDailyOrderAddEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	((CHMSDailyOrderView*)m_pWndOrder)->GetDataToScreen();	
	CGuiPopup::ClosePopup();
	
} 
int CHMSDailyOrderAddEntry::OnAddHMSDailyOrderAddEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDailyOrderAddEntry::OnEditHMSDailyOrderAddEntry(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyOrderAddEntry::OnDeleteHMSDailyOrderAddEntry(){
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
 		OnCancelHMSDailyOrderAddEntry(); 
 	}
	return 0;
}
int CHMSDailyOrderAddEntry::OnSaveHMSDailyOrderAddEntry(){
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int ret;
	long nOrderID = 0;
	bool bAddFlag = true;
	CString szMfgID;
	

	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
		return -1; 

	if(!IsValidateData()) 
 		return -1; 
	m_nStorageID = str2int(m_wndName.GetCurrent(10));	
	
	
	if(m_nDocumentNo <= 0)
		return -1;

	if(m_nStorageID <= 0)
		return 0;
	for (int i =0; i < m_nDaysMax; i++)
		m_nID[i] = 0;


	m_nStorageID = str2int(m_szStorageKey);

	//Kiem tra neu doi tuong dich vu thi gan loai phieu=S
	CString szObjectType=_T("I");
	int nObjectID = str2int(m_wndPatientName.GetCurrent(9));
	if(nObjectID == 7)
		szObjectType = _T("S");
	long nTransactionID = ((CHMSDailyOrderView*)m_pWndOrder)->GetTransactionID(m_nStorageID, szObjectType);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_batch_id"), m_nBatchID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"), nTransactionID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);	
//	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_reforder_id"), m_nTransactionID);
//	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_storage_id"), m_nStorageID);

_tprintf(_T("\r\n%ld"), m_nTransactionID);
	ret = -1;
	pMF->BeginTransaction();
	for (int i=0; i < m_nDays; i++)
	{
		CDate odate;
		odate.ParseDate(m_szOrderDate);
		odate += i;
		CString szOrderDate = odate.GetDate();
		szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());

		m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), szOrderDate);

		
		szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE(%s) "), m_hms_pharmaorderTbl.FormatSQL());
_tprintf(_T("%s"), szSQL);
		nOrderID = str2long(pMF->ExecDML(szSQL));
		if(nOrderID <= 0)
		{
			bAddFlag = false;
			break;
		}
/*
		m_nID[i] = nOrderID;
		m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_orderid"), nOrderID);
		szSQL.Format(_T("HMS_IPHARMAORDER_ADDLINE(%s) "), m_hms_pharmaorder_lineTbl.FormatSQL());
		
		ret = str2long(pMF->ExecDML(szSQL));
 		if(ret <= 0) 
 		{ 
			bAddFlag = false;
			break;
 		}
*/
		
	}
	if(bAddFlag){
		pMF->Commit();
		ret = 1;
		if(nOrderID > 0)
		{

			long nDocumentNo = str2long(m_szPatientNameKey);
			((CHMSDailyOrderView*)m_pWndOrder)->m_szOrderDateEmtry = m_szOrderDate;
			((CHMSDailyOrderView*)m_pWndOrder)->m_szPatientNameKey = m_szPatientNameKey;
			((CHMSDailyOrderView*)m_pWndOrder)->m_nDays = m_nDays;
			((CHMSDailyOrderView*)m_pWndOrder)->m_bMultipleDay = m_bMultipleDay;

			((CHMSDailyOrderView*)m_pWndOrder)->Refresh(nTransactionID, nDocumentNo);
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
int CHMSDailyOrderAddEntry::OnCancelHMSDailyOrderAddEntry(){
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
int CHMSDailyOrderAddEntry::OnHMSDailyOrderAddEntryListLoadData(){
	return 0;
}

BOOL CHMSDailyOrderAddEntry::PreTranslateMessage(MSG* pMsg){

	BOOL ret = CGuiPopup::PreTranslateMessage(pMsg);
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE){		
	}
	return ret;
}

int CHMSDailyOrderAddEntry::OnIndicationCheckValue(){
	UpdateData(true);
	if(m_szIndicationKey.IsEmpty()){
		m_szUsage.Empty();
		m_szTimeDay.Empty();
		m_szTimeQty.Empty();
		m_wndUsage.SetFocus();
		UpdateData(FALSE);
	}
	return 0;
}

void CHMSDailyOrderAddEntry::OnInDrugstoreCheck(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	UpdateData(true);
	CString szObjects, szSQL;
	int nObjectID = str2int(m_wndPatientName.GetCurrent(9));
	szObjects.Format(_T("-1, %d"), nObjectID);
	if(m_bInDrugstore){
		szSQL.Format(_T("select distinct msd_storage_id from m_storage_default ") \
		_T("WHERE msd_object_id =7  "));
	}
	else
	{
	szSQL.Format(_T("select distinct msd_storage_id from m_storage_default ") \
		_T("WHERE msd_object_id = %d and msd_storage_id in(%s) "), 
		nObjectID, m_szStorageString);

	}
//_tprintf(_T("%s"), m_szStorageString);
	rs.ExecSQL(szSQL);
	m_szStorages = _T("-100");
	while(!rs.IsEOF()){
			int nStorageID;
			rs.GetValue(_T("msd_storage_id"), nStorageID);
			m_szStorages.AppendFormat(_T(",%d"), nStorageID);
			rs.MoveNext();
	}

	
	
}