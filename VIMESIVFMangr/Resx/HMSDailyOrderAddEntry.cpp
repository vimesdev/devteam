#include "HMSDailyOrderAddEntry.h"
#include "MainFrm.h"
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
/*static void _OnDaysChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnDaysChange();
} */
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
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnOrderDateChange();
} */
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
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry *)pWnd)->OnIndicationAddNew();
}*/
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
static void _OnDrugStoreOptionSelectFnc(CWnd *pWnd){
	 ((CHMSDailyOrderAddEntry*)pWnd)->OnDrugStoreOptionSelect();
}
static void _OnSearchForGenericSelectFnc(CWnd *pWnd){
	 ((CHMSDailyOrderAddEntry*)pWnd)->OnSearchForGenericSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntry *pVw = (CHMSDailyOrderAddEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntry *pVw = (CHMSDailyOrderAddEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntry*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntry*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderAddEntry*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntry*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntry *pVw = (CHMSDailyOrderAddEntry *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntry *pVw = (CHMSDailyOrderAddEntry *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrevPrescriptionSelectFnc(CWnd *pWnd){
	 ((CHMSDailyOrderAddEntry*)pWnd)->OnPrevPrescriptionSelect();
}
static void _OnAddToOrderSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntry *pVw = (CHMSDailyOrderAddEntry *)pWnd;
	pVw->OnAddToOrderSelect();
} 
static void _OnInsStorageSelectFnc(CWnd *pWnd){
	 ((CHMSDailyOrderAddEntry*)pWnd)->OnInsStorageSelect();
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
CHMSDailyOrderAddEntry::CHMSDailyOrderAddEntry(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDailyOrderAddEntry::~CHMSDailyOrderAddEntry(){
}
void CHMSDailyOrderAddEntry::OnCreateComponents(){
	m_wndStorageLabel.Create(this, _T("Storage"), 395, 5, 470, 30);
	m_wndStorage.Create(this,475, 5, 575, 30); 
	m_wndMultipleDay.Create(this, _T("Multiple Day"), 5, 5, 105, 30);
	m_wndDays.Create(this,110, 5, 160, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 105, 60);
	m_wndPatientName.Create(this,110, 35, 260, 60); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 395, 35, 470, 60);
	m_wndDocumentNo.Create(this,475, 35, 575, 60); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 165, 5, 255, 30);
	m_wndOrderDate.Create(this,260, 5, 390, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 65, 85, 90);
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
	m_wndDrugStoreOption.Create(this, _T("Buy in stall"), 265, 35, 390, 60);
	m_wndSearchForGeneric.Create(this, _T(""), 85, 65, 105, 90);
	m_wndSave.Create(this, _T("&Save"), 475, 125, 540, 150);
	m_wndClose.Create(this, _T("X"), 545, 125, 575, 150);
	m_wndList.Create(this,5, 155, 575, 330); 
	m_wndMark.Create(this, _T("Mark-F2"), 5, 335, 85, 360);
	m_wndUnMark.Create(this, _T(""), 0, 0, 25, 25);
	m_wndPrevPrescription.Create(this, _T("Prev Prescription"), 95, 335, 245, 360);
	m_wndAddToOrder.Create(this, _T("&Add to order-F3"), 440, 335, 575, 360);
	m_wndInsStorage.Create(this, _T("InsStorage"), 255, 335, 405, 360);

}
void CHMSDailyOrderAddEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndDays.SetLimitText(1024);
	m_wndDays.SetCheckValue(true);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(1024);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(1024);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(1024);
	m_wndTimeDay.SetLimitText(1024);
	m_wndTimeDay.SetCheckValue(true);
	m_wndTimeQty.SetLimitText(1024);
	m_wndTimeQty.SetCheckValue(true);
	m_wndUsage.SetLimitText(1024);
	m_wndUsage.SetCheckValue(true);











}
void CHMSDailyOrderAddEntry::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndMultipleDay.SetEvent(WE_CLICK, _OnMultipleDaySelectFnc);
	//m_wndDays.SetEvent(WE_CHANGE, _OnDaysChangeFnc);
	//m_wndDays.SetEvent(WE_SETFOCUS, _OnDaysSetfocusFnc);
	//m_wndDays.SetEvent(WE_KILLFOCUS, _OnDaysKillfocusFnc);
	m_wndDays.SetEvent(WE_CHECKVALUE, _OnDaysCheckValueFnc);
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
	m_wndDrugStoreOption.SetEvent(WE_CLICK, _OnDrugStoreOptionSelectFnc);
	m_wndSearchForGeneric.SetEvent(WE_CLICK, _OnSearchForGenericSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrevPrescription.SetEvent(WE_CLICK, _OnPrevPrescriptionSelectFnc);
	m_wndAddToOrder.SetEvent(WE_CLICK, _OnAddToOrderSelectFnc);
	m_wndInsStorage.SetEvent(WE_CLICK, _OnInsStorageSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDailyOrderAddEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDailyOrderAddEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDailyOrderAddEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDailyOrderAddEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDailyOrderAddEntryFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSDailyOrderAddEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Check(pDX, m_wndMultipleDay.GetDlgCtrlID(), m_bMultipleDay);
	DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_szTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_szTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Check(pDX, m_wndDrugStoreOption.GetDlgCtrlID(), m_bDrugStoreOption);
	DDX_Check(pDX, m_wndSearchForGeneric.GetDlgCtrlID(), m_bSearchForGeneric);
	DDX_Check(pDX, m_wndPrevPrescription.GetDlgCtrlID(), m_bPrevPrescription);
	DDX_Check(pDX, m_wndInsStorage.GetDlgCtrlID(), m_bInsStorage);

}
void CHMSDailyOrderAddEntry::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("MultipleDay")] =  m_bMultipleDay;
	m_jData[_T("Days")] =  m_nDays;
	m_jData[_T("PatientName")] =  m_szPatientNameKey;
	m_jData[_T("DocumentNo")] =  m_szDocumentNo;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("Name")] =  m_szNameKey;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("MaxQuantity")] =  m_nMaxQuantity;
	m_jData[_T("Indication")] =  m_szIndicationKey;
	m_jData[_T("TimeDay")] =  m_szTimeDay;
	m_jData[_T("TimeQty")] =  m_szTimeQty;
	m_jData[_T("Usage")] =  m_szUsage;
	m_jData[_T("DrugStoreOption")] =  m_bDrugStoreOption;
	m_jData[_T("SearchForGeneric")] =  m_bSearchForGeneric;
	m_jData[_T("PrevPrescription")] =  m_bPrevPrescription;
	m_jData[_T("InsStorage")] =  m_bInsStorage;
	}
	else
	{
			
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("MultipleDay")].GetValue(m_bMultipleDay);
	m_jData[_T("Days")].GetValue(m_nDays);
	m_jData[_T("PatientName")].GetValue(m_szPatientNameKey);
	m_jData[_T("DocumentNo")].GetValue(m_szDocumentNo);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("Name")].GetValue(m_szNameKey);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("MaxQuantity")].GetValue(m_nMaxQuantity);
	m_jData[_T("Indication")].GetValue(m_szIndicationKey);
	m_jData[_T("TimeDay")].GetValue(m_szTimeDay);
	m_jData[_T("TimeQty")].GetValue(m_szTimeQty);
	m_jData[_T("Usage")].GetValue(m_szUsage);
	m_jData[_T("DrugStoreOption")].GetValue(m_bDrugStoreOption);
	m_jData[_T("SearchForGeneric")].GetValue(m_bSearchForGeneric);
	m_jData[_T("PrevPrescription")].GetValue(m_bPrevPrescription);
	m_jData[_T("InsStorage")].GetValue(m_bInsStorage);
	}

}
void CHMSDailyOrderAddEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyOrderAddEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderAddEntry::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_bMultipleDay=FALSE;
	m_nDays=0;
	m_szPatientNameKey.Empty();
	m_szDocumentNo.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szTimeDay.Empty();
	m_szTimeQty.Empty();
	m_szUsage.Empty();
	m_bDrugStoreOption=FALSE;
	m_bSearchForGeneric=FALSE;
	m_bPrevPrescription=FALSE;
	m_bInsStorage=FALSE;

}
int CHMSDailyOrderAddEntry::SetMode(int nMode){
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
void CHMSDailyOrderAddEntry::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnStorageSelendok(){
	 
}
/*void CHMSDailyOrderAddEntry::OnStorageSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntry::OnStorageKillfocus(){
	
}*/
long CHMSDailyOrderAddEntry::OnStorageLoadData(){
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
	
}
/*void CHMSDailyOrderAddEntry::OnDaysChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnDaysSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnDaysKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnDaysCheckValue(){
	return 0;
} 
void CHMSDailyOrderAddEntry::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnPatientNameSelendok(){
	 
}
/*void CHMSDailyOrderAddEntry::OnPatientNameSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntry::OnPatientNameKillfocus(){
	
}*/
long CHMSDailyOrderAddEntry::OnPatientNameLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDailyOrderAddEntry::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDailyOrderAddEntry::OnDocumentNoChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnDocumentNoSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnDocumentNoKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSDailyOrderAddEntry::OnOrderDateChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnOrderDateKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSDailyOrderAddEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnNameSelendok(){
	 
}
/*void CHMSDailyOrderAddEntry::OnNameSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntry::OnNameKillfocus(){
	
}*/
long CHMSDailyOrderAddEntry::OnNameLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
	 
}
/*void CHMSDailyOrderAddEntry::OnIndicationSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntry::OnIndicationKillfocus(){
	
}*/
long CHMSDailyOrderAddEntry::OnIndicationLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
	return 0;
} 
/*void CHMSDailyOrderAddEntry::OnTimeQtyChange(){
	
} */
/*void CHMSDailyOrderAddEntry::OnTimeQtySetfocus(){
	
} */
/*void CHMSDailyOrderAddEntry::OnTimeQtyKillfocus(){
	
} */
int CHMSDailyOrderAddEntry::OnTimeQtyCheckValue(){
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
	void CHMSDailyOrderAddEntry::OnDrugStoreOptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDailyOrderAddEntry::OnSearchForGenericSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDailyOrderAddEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnListDblClick(){
	
} 
void CHMSDailyOrderAddEntry::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderAddEntry::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderAddEntry::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDailyOrderAddEntry::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntry::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CHMSDailyOrderAddEntry::OnPrevPrescriptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDailyOrderAddEntry::OnAddToOrderSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CHMSDailyOrderAddEntry::OnInsStorageSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 		//OnHMSDailyOrderAddEntryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
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
