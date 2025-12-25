#include "HMSPatientDrugOrderEntry.h"
#include "MainFrm.h"
static void _OnMultipleDaySelectFnc(CWnd *pWnd){
	 ((CHMSPatientDrugOrderEntry*)pWnd)->OnMultipleDaySelect();
}
/*static void _OnDaysChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnDaysChange();
} */
/*static void _OnDaysSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnDaysSetfocus();} */ 
/*static void _OnDaysKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnDaysKillfocus();
} */
static int _OnDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnDaysCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDrugOrderEntry* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnPatientNameAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDrugOrderEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDrugOrderEntry* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientDrugOrderEntry *pVw = (CHMSPatientDrugOrderEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientDrugOrderEntry *pVw = (CHMSPatientDrugOrderEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDrugOrderEntry* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDrugOrderEntry *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSPatientDrugOrderEntry *)pWnd)->OnStorageAddNew();
}*/
static int _OnAddHMSPatientDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugOrderEntry*)pWnd)->OnAddHMSPatientDrugOrderEntry();
} 
static int _OnEditHMSPatientDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugOrderEntry*)pWnd)->OnEditHMSPatientDrugOrderEntry();
} 
static int _OnDeleteHMSPatientDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugOrderEntry*)pWnd)->OnDeleteHMSPatientDrugOrderEntry();
} 
static int _OnSaveHMSPatientDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugOrderEntry*)pWnd)->OnSaveHMSPatientDrugOrderEntry();
} 
static int _OnCancelHMSPatientDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugOrderEntry*)pWnd)->OnCancelHMSPatientDrugOrderEntry();
} 
CHMSPatientDrugOrderEntry::CHMSPatientDrugOrderEntry(){

	m_nDlgWidth = 585;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CHMSPatientDrugOrderEntry::~CHMSPatientDrugOrderEntry(){
}
void CHMSPatientDrugOrderEntry::OnCreateComponents(){
	m_wndMultipleDay.Create(this, _T("Multiple Day"), 5, 5, 105, 30);
	m_wndDays.Create(this,110, 5, 160, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 165, 5, 255, 30);
	m_wndOrderDate.Create(this,260, 5, 390, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 105, 60);
	m_wndPatientName.Create(this,110, 35, 390, 60); 
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
void CHMSPatientDrugOrderEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDays.SetLimitText(16);
	m_wndDays.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(35);
	m_wndTimeDay.SetLimitText(16);
	m_wndTimeDay.SetCheckValue(true);
	m_wndTimeQty.SetLimitText(16);
	m_wndTimeQty.SetCheckValue(true);
	m_wndUsage.SetLimitText(128);
	m_wndUsage.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);


	m_wndPatientName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPatientName.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(1, _T("Drug Name /Cnt"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(3, _T("Generic"), CFMT_TEXT, 150);


	m_wndIndication.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndIndication.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
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
void CHMSPatientDrugOrderEntry::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMultipleDay.SetEvent(WE_CLICK, _OnMultipleDaySelectFnc);
	//m_wndDays.SetEvent(WE_CHANGE, _OnDaysChangeFnc);
	//m_wndDays.SetEvent(WE_SETFOCUS, _OnDaysSetfocusFnc);
	//m_wndDays.SetEvent(WE_KILLFOCUS, _OnDaysKillfocusFnc);
	m_wndDays.SetEvent(WE_CHECKVALUE, _OnDaysCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	//m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
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
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDrugOrderEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDrugOrderEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDrugOrderEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDrugOrderEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDrugOrderEntryFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientDrugOrderEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndMultipleDay.GetDlgCtrlID(), m_bMultipleDay);
	DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_nTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_nTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);

}
void CHMSPatientDrugOrderEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_stockid"), m_szPatientNameKey);
	rs.GetValue(_T("hpol_name"), m_szNameKey);
	rs.GetValue(_T("hpol_orderqty"), m_nQty);
	rs.GetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSPatientDrugOrderEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_stockid"), m_szPatientNameKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_name"), m_szNameKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_orderqty"), m_nQty);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSPatientDrugOrderEntry::SetDefaultValues(){

	m_bMultipleDay=FALSE;
	m_nDays=0;
	m_szOrderDate.Empty();
	m_szPatientNameKey.Empty();
	m_nDocumentNo=0;
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_nTimeDay=0;
	m_nTimeQty=0;
	m_szUsage.Empty();
	m_szStorageKey.Empty();

}
int CHMSPatientDrugOrderEntry::SetMode(int nMode){
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
	void CHMSPatientDrugOrderEntry::OnMultipleDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPatientDrugOrderEntry::OnDaysChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnDaysSetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnDaysKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnDaysCheckValue(){
	return 0;
} 
/*void CHMSPatientDrugOrderEntry::OnOrderDateChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnOrderDateKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPatientDrugOrderEntry::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugOrderEntry::OnPatientNameSelendok(){
	 
}
/*void CHMSPatientDrugOrderEntry::OnPatientNameSetfocus(){
	
}*/
/*void CHMSPatientDrugOrderEntry::OnPatientNameKillfocus(){
	
}*/
long CHMSPatientDrugOrderEntry::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && !m_szPatientNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPatientNameKey
};
	m_wndPatientName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDrugOrderEntry::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDrugOrderEntry::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSPatientDrugOrderEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugOrderEntry::OnNameSelendok(){
	 
}
/*void CHMSPatientDrugOrderEntry::OnNameSetfocus(){
	
}*/
/*void CHMSPatientDrugOrderEntry::OnNameKillfocus(){
	
}*/
long CHMSPatientDrugOrderEntry::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
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
/*void CHMSPatientDrugOrderEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDrugOrderEntry::OnQtyChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnQtySetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnQtyKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSPatientDrugOrderEntry::OnMaxQuantityChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnMaxQuantityKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSPatientDrugOrderEntry::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugOrderEntry::OnIndicationSelendok(){
	 
}
/*void CHMSPatientDrugOrderEntry::OnIndicationSetfocus(){
	
}*/
/*void CHMSPatientDrugOrderEntry::OnIndicationKillfocus(){
	
}*/
long CHMSPatientDrugOrderEntry::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szIndicationKey
};
	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDrugOrderEntry::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDrugOrderEntry::OnTimeDayChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnTimeDaySetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnTimeDayKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnTimeDayCheckValue(){
	return 0;
} 
/*void CHMSPatientDrugOrderEntry::OnTimeQtyChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnTimeQtySetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnTimeQtyKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnTimeQtyCheckValue(){
	return 0;
} 
/*void CHMSPatientDrugOrderEntry::OnUsageChange(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnUsageSetfocus(){
	
} */
/*void CHMSPatientDrugOrderEntry::OnUsageKillfocus(){
	
} */
int CHMSPatientDrugOrderEntry::OnUsageCheckValue(){
	return 0;
} 
void CHMSPatientDrugOrderEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugOrderEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugOrderEntry::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugOrderEntry::OnStorageSelendok(){
	 
}
/*void CHMSPatientDrugOrderEntry::OnStorageSetfocus(){
	
}*/
/*void CHMSPatientDrugOrderEntry::OnStorageKillfocus(){
	
}*/
long CHMSPatientDrugOrderEntry::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSPatientDrugOrderEntry::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSPatientDrugOrderEntry::OnAddHMSPatientDrugOrderEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientDrugOrderEntry::OnEditHMSPatientDrugOrderEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientDrugOrderEntry::OnDeleteHMSPatientDrugOrderEntry(){
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
 		OnCancelHMSPatientDrugOrderEntry();
 	}
	return 0;
}
int CHMSPatientDrugOrderEntry::OnSaveHMSPatientDrugOrderEntry(){
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
 		//OnHMSPatientDrugOrderEntryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientDrugOrderEntry::OnCancelHMSPatientDrugOrderEntry(){
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
int CHMSPatientDrugOrderEntry::OnHMSPatientDrugOrderEntryListLoadData(){
	return 0;
}
