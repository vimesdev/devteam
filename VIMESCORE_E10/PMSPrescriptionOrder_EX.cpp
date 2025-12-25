#include "PMSPrescriptionOrder_EX.h"
#include "MainFrame_E10.h"
#include "PMSPrescriptionEditQuantityDialog.h"
#include "HMSReportForms/PrintForms.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionOrderEX* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStorageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionOrderEX* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionOrderEX* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnDocNoCheckValue();
}

static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnOrderNoCheckValue();
	return 0;
}

static void _OnFindSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrderEX *pVw = (CPMSPrescriptionOrderEX *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListDeleteItem();
} 

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListRollbackFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListRollback();
}

static int _OnPatientListRollback2Fnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListRollback2();
}

static int _OnPatientListResetPrintFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListResetPrint();
}

static int _OnPatientListRecalcFnc(CWnd *pWnd){
	 ((CPMSPrescriptionOrderEX*)pWnd)->OnRecalcOrder();
	 return 0;
}
static int _OnPatientListCancelOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListCancelOrder();
} 

static int _OnPatientListPrintFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX*)pWnd)->m_bPreview = false;
	 ((CPMSPrescriptionOrderEX*)pWnd)->OnPrintSelect();
	 return 0;
} 

static int _OnPatientListPrintPreviewFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX*)pWnd)->m_bPreview = true;
	 ((CPMSPrescriptionOrderEX*)pWnd)->OnPrintSelect();
	 return 0;
}

static int _OnPatientListReturnFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX*)pWnd)->m_bPreview = false;
	 ((CPMSPrescriptionOrderEX*)pWnd)->OnReturnSelect();
	 return 0;
}

static int _OnPatientListRefreshFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX*)pWnd)->OnPatientListLoadData();
	 return 0;
} 

static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionOrderEX*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrderEX *pVw = (CPMSPrescriptionOrderEX *)pWnd;
	pVw->m_bPreview=false;
	pVw->OnPrintSelect();
}


static void _OnIssueSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrderEX *pVw = (CPMSPrescriptionOrderEX *)pWnd;
	pVw->OnIssueSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrderEX *pVw = (CPMSPrescriptionOrderEX *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnShowDetailForItemsSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionOrderEX*)pWnd)->OnShowDetailForItemsSelect();
}
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalPaymentChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnTotalPaymentChange();
} */
/*static void _OnTotalPaymentSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnTotalPaymentSetfocus();} */ 
/*static void _OnTotalPaymentKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrderEX *)pWnd)->OnTotalPaymentKillfocus();
} */
static int _OnTotalPaymentCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrderEX *)pWnd)->OnTotalPaymentCheckValue();
} 
static int _OnAddPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnAddPMSPrescriptionOrder();
} 
static int _OnEditPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnEditPMSPrescriptionOrder();
} 
static int _OnDeletePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnDeletePMSPrescriptionOrder();
} 
static int _OnSavePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnSavePMSPrescriptionOrder();
} 
static int _OnCancelPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrderEX*)pWnd)->OnCancelPMSPrescriptionOrder();
} 
CPMSPrescriptionOrderEX::CPMSPrescriptionOrderEX(){
	m_nDlgWidth = 805;
	m_nDlgHeight = 595;
	SetDefaultValues();
	m_bPreview = false;
}
CPMSPrescriptionOrderEX::~CPMSPrescriptionOrderEX(){
}
void CPMSPrescriptionOrderEX::OnCreateComponents(){
	m_wndPatientProfiles.Create(this, _T("Patient Profile"), 5, 95, 810, 265);
	m_wndOrderLine.Create(this, _T("OrderLine"), 5, 270, 810, 590);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 340, 55);
	m_wndToDate.Create(this,345, 30, 465, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 470, 30, 570, 55);
	m_wndStorage.Create(this,575, 30, 775, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 60, 110, 85);
	m_wndStatus.Create(this,115, 60, 235, 85); 
	m_wndNameLabel.Create(this, _T("Name"), 240, 60, 340, 85);
	m_wndName.Create(this,345, 60, 465, 85); 
	m_wndDocNoLabel.Create(this, _T("Doc/Order No"), 470, 60, 570, 85);
	m_wndDocNo.Create(this,575, 60, 675, 85); 
	m_wndOrderNo.Create(this,680, 60, 775, 85); 
	m_wndFind.Create(this, _T("@"), 780, 60, 805, 85);
	m_wndPatientList.Create(this,10, 120, 805, 260); 
	m_wndDrugList.Create(this,10, 295, 805, 585); 
	m_wndPrint.Create(this, _T("&Print"), 5, 595, 95, 620);
	m_wndIssue.Create(this, _T("&Issue"), 100, 595, 190, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 195, 595, 285, 620);
	m_wndShowDetailForItems.Create(this, _T("Show detail"), 290, 595, 445, 620);
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 570, 595, 670, 620);
	m_wndTotalAmount.Create(this,675, 595, 810, 620); 
	
	m_wndDepartment.Create(this, 0, 0, 0, 0);
	m_wndDepartment.ShowWindow(SW_HIDE);
	m_wndDepartment.EnableWindow(FALSE);
	m_wndTotalPayment.Create(this, 0, 0, 0, 0);
	m_wndTotalPayment.ShowWindow(SW_HIDE);
	m_wndTotalPayment.EnableWindow(FALSE);
	}
void CPMSPrescriptionOrderEX::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndName.SetNotEmpty(false);
	m_wndDocNo.SetLimitText(16);
	m_wndDocNo.SetCheckValue(true);
	m_wndDocNo.SetNotEmpty(false);

	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);
	m_wndTotalAmount.SetReadOnly(true);
	m_wndTotalPayment.SetLimitText(16);
	m_wndTotalPayment.SetCheckValue(true);
	m_wndTotalPayment.SetReadOnly(true);
	

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPatientList.InsertColumn(0, _T("Doc No"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(1, _T("Order No"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(2, _T("Order Date"), CFMT_DATETIME, 120);
	m_wndPatientList.InsertColumn(3, _T("Approved Date"), CFMT_DATETIME, 120);
	m_wndPatientList.InsertColumn(4, _T("Patient Name"), CFMT_TEXT, 170);
	m_wndPatientList.InsertColumn(5, _T("Age"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndPatientList.InsertColumn(6, _T("Sex"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndPatientList.InsertColumn(7, _T("Card No"), CFMT_TEXT, 180);
	m_wndPatientList.InsertColumn(8, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndPatientList.InsertColumn(9, _T("Dept"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(10, _T("Trạng thái phí"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndPatientList.InsertColumn(11, _T("ngày thanh toán"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(12, _T("ngày khóa sổ"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(13, _T("Approved By"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(14, _T("Doctor"), CFMT_TEXT, 40);
	m_wndPatientList.GetHeaderControl()->SetItemHeight(1);

	m_wndDrugList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndDrugList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 190);
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndDrugList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndDrugList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndDrugList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 80);
	m_wndDrugList.InsertColumn(6, _T("Prod. Country"), CFMT_TEXT, 90);
//	m_wndDrugList.InsertColumn(7, _T("Mfg Name"), CFMT_TEXT, 100);
	m_wndDrugList.InsertColumn(7, _T("Lot No"), CFMT_TEXT, 70);
	m_wndDrugList.InsertColumn(8, _T("Expire Date"), CFMT_DATE, 80);
	m_wndDrugList.InsertColumn(9, _T("itemid"), CFMT_TEXT, 0);
	m_wndDrugList.InsertColumn(10, _T("refidx"), CFMT_TEXT, 0);
	m_wndDrugList.InsertColumn(11, _T("orderqty"), CFMT_TEXT, 0);
	m_wndDrugList.InsertColumn(12, _T("Trạng thái phí"), CFMT_TEXT|CFMT_CENTER, 85);


}
void CPMSPrescriptionOrderEX::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	
	m_wndPatientList.SetWindowText(_T("Prescription"));
	m_wndPatientList.AddEvent(1, _T("Issue"), _OnPatientListIssueFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);

	//m_wndPatientList.AddEvent(2, _T("Rollback"), _OnPatientListRollbackFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);

	//m_wndPatientList.AddEvent(3, _T("Cancel Order"), _OnPatientListCancelOrderFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);

	m_wndPatientList.AddEvent(4, _T("Print"), _OnPatientListPrintFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
//	m_wndPatientList.AddEvent(5, _T("Print Preview"), _OnPatientListPrintPreviewFnc);
//	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	
	m_wndPatientList.AddEvent(6, _T("Return Order"), _OnPatientListReturnFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(8, _T("Recalc Order"), _OnPatientListRecalcFnc);
	
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(7, _T("Refresh"), _OnPatientListRefreshFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	LPCTSTR pcStr = pMF->GetLocalIP();
	//if (CString(pcStr) == _T("10.0.76.133"))
	m_wndPatientList.AddEvent(9, _T("Rollback Ins Order"), _OnPatientListRollback2Fnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(10, _T("Cho phép in lại đơn thuốc"), _OnPatientListResetPrintFnc);

	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	//m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndIssue.SetEvent(WE_CLICK, _OnIssueSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndShowDetailForItems.SetEvent(WE_CLICK, _OnShowDetailForItemsSelectFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndTotalPayment.SetEvent(WE_CHANGE, _OnTotalPaymentChangeFnc);
	//m_wndTotalPayment.SetEvent(WE_SETFOCUS, _OnTotalPaymentSetfocusFnc);
	//m_wndTotalPayment.SetEvent(WE_KILLFOCUS, _OnTotalPaymentKillfocusFnc);
	m_wndTotalPayment.SetEvent(WE_CHECKVALUE, _OnTotalPaymentCheckValueFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMSPrescriptionOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMSPrescriptionOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMSPrescriptionOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMSPrescriptionOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("C3ancel	Ctrl+T"), _OnCancelPMSPrescriptionOrderFnc, 0, 'T', VK_CONTROL);
*/

	
	m_wndTotalAmount.SetTextColor(RGB(255, 0, 0));
	m_wndTotalPayment.SetTextColor(RGB(255, 0, 0));

	m_wndTotalAmount.SetCurrencyFormat(true);

	SetWindowFont(&m_wndTotalAmount, GetFaceName(), GetFaceSize()+2, TRUE);

	m_wndTotalPayment.SetCurrencyFormat(true);
	SetWindowFont(&m_wndTotalPayment, GetFaceName(), GetFaceSize()+2, TRUE);
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
	EnableButtons(FALSE, 1, 2, -1);
	m_wndOrderNo.SetFocus();
	

}
void CPMSPrescriptionOrderEX::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	//DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_Check(pDX, m_wndShowDetailForItems.GetDlgCtrlID(), m_bShowDetailForItems);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	//DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);

}
void CPMSPrescriptionOrderEX::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSPrescriptionOrderEX::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSPrescriptionOrderEX::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szDepartmentKey.Empty();
	m_szStatusKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szName.Empty();
	m_nDocNo=0;
	m_bShowDetailForItems=TRUE;
	m_nTotalAmount=0;
	m_nTotalPayment=0;

}
int CPMSPrescriptionOrderEX::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
 			EnableControls(true); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
void CPMSPrescriptionOrderEX::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrderEX::OnStorageSelendok(){
	UpdateData(true);
	AfxGetApp()->WriteProfileInt(_T("PRESCRIPTION"), _T("DefaultStorageID"), str2int(m_szStorageKey)); 
}
/*void CPMSPrescriptionOrderEX::OnStorageSetfocus(){
	
}*/
/*void CPMSPrescriptionOrderEX::OnStorageKillfocus(){
	
}*/
long CPMSPrescriptionOrderEX::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	szWhere.AppendFormat(_T(" and msl_type <>'C' "));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szWhere);

}
/*void CPMSPrescriptionOrderEX::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSPrescriptionOrderEX::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrderEX::OnDepartmentSelendok(){
//	OnPatientListLoadData(); 
}
/*void CPMSPrescriptionOrderEX::OnDepartmentSetfocus(){
	
}*/
/*void CPMSPrescriptionOrderEX::OnDepartmentKillfocus(){
	
}*/
long CPMSPrescriptionOrderEX::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	return pMF->LoadDepartmentList(&m_wndDepartment, m_szDepartmentKey, szWhere);
/*
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and sd_id in(%s) "), pMF->m_szDepartmentPerm);

	szSQL.Format(_T(" SELECT * FROM sys_dept WHERE 0=0 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CPMSPrescriptionOrderEX::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSPrescriptionOrderEX::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrderEX::OnStatusSelendok(){
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("PRESCRIPTION"), _T("DefaultStatus"), m_szStatusKey); 
}
/*void CPMSPrescriptionOrderEX::OnStatusSetfocus(){
	
}*/
/*void CPMSPrescriptionOrderEX::OnStatusKillfocus(){
	
}*/
long CPMSPrescriptionOrderEX::OnStatusLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szWhere.Format(_T(" and ss_code in('S','A') "));
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id='pms_order_status'  %s ORDER BY ss_index "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSPrescriptionOrderEX::OnStatusAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPMSPrescriptionOrderEX::OnFromDateChange(){
	
} */
/*void CPMSPrescriptionOrderEX::OnFromDateSetfocus(){
	
} */
/*void CPMSPrescriptionOrderEX::OnFromDateKillfocus(){
	
} */
int CPMSPrescriptionOrderEX::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionOrderEX::OnToDateChange(){
	
} */
/*void CPMSPrescriptionOrderEX::OnToDateSetfocus(){
	
} */
/*void CPMSPrescriptionOrderEX::OnToDateKillfocus(){
	
} */
int CPMSPrescriptionOrderEX::OnToDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionOrderEX::OnNameChange(){
	
} */
/*void CPMSPrescriptionOrderEX::OnNameSetfocus(){
	
} */
/*void CPMSPrescriptionOrderEX::OnNameKillfocus(){
	
} */
int CPMSPrescriptionOrderEX::OnNameCheckValue(){
	OnPatientListLoadData();
	return 1;
} 
/*void CPMSPrescriptionOrderEX::OnDocNoChange(){
	
} */
/*void CPMSPrescriptionOrderEX::OnDocNoSetfocus(){
	
} */
/*void CPMSPrescriptionOrderEX::OnDocNoKillfocus(){
	
} */
int CPMSPrescriptionOrderEX::OnDocNoCheckValue()
{
    if (m_nDocNo < 0)
    {
        return -1;
    }
	OnPatientListLoadData();
	return 1;
}

int CPMSPrescriptionOrderEX::OnOrderNoCheckValue()
{
	UpdateData();
	OnIssueSelectEX();
	OnPatientListLoadData();
	m_wndDocNo.SetFocus();
	m_nOrderNo = 0;
	UpdateData(FALSE);
	return 0;
}

void CPMSPrescriptionOrderEX::OnFindSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStorageKey.IsEmpty())
	{
		ShowMessageBox(_T("You must select a warehouse"));
		m_wndStorage.SetFocus();
	}

	OnPatientListLoadData();
} 
void CPMSPrescriptionOrderEX::OnPatientListDblClick(){
	
} 
void CPMSPrescriptionOrderEX::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
	{
		m_wndDrugList.DeleteAllItems();
		return;
	}
	CString szStatus, szSQL;
	
	m_nOrderID = ToLong(m_wndPatientList.GetItemText(nNewItem, 1));
	//m_nDocNo = ToLong(m_wndPatientList.GetItemText(nNewItem, 0));
	//szStatus = m_wndPatientList.GetItemText(nNewItem, 6);
	m_wndPrint.EnableWindow(false);
	m_wndIssue.EnableWindow(false);
	m_wndCancel.EnableWindow(false);
		
	szStatus = GetCurrentStatus();

	if(((szStatus == _T("S") || szStatus ==_T("P"))&& (m_szIsPaid==_T("P") || m_szIsPaid==_T("A"))) || m_szStorageKey == _T("54") )
	{
		m_wndPrint.EnableWindow(true);
		m_wndIssue.EnableWindow(true);
		m_wndCancel.EnableWindow(false);
		m_wndPatientList.SetMenuState(1, true);
		m_wndPatientList.SetMenuState(2, false);
		m_wndPatientList.SetMenuState(3, true);
		m_wndPatientList.SetMenuState(4, false);
		m_wndPatientList.SetMenuState(5, false);
	}
	else if(szStatus == _T("A"))
	{
		m_wndPrint.EnableWindow(true);
		m_wndIssue.EnableWindow(false);
		m_wndCancel.EnableWindow(true);
		m_wndPatientList.SetMenuState(1, false);
		m_wndPatientList.SetMenuState(2, true);
		m_wndPatientList.SetMenuState(3, false);
		m_wndPatientList.SetMenuState(4, true);
		m_wndPatientList.SetMenuState(5, true);
	}
	else
	{
		m_wndPrint.EnableWindow(false);
		m_wndIssue.EnableWindow(false);
		m_wndCancel.EnableWindow(false);

		m_wndPatientList.SetMenuState(1, false);
		m_wndPatientList.SetMenuState(2, false);
		m_wndPatientList.SetMenuState(3, false);
		m_wndPatientList.SetMenuState(4, false);
		m_wndPatientList.SetMenuState(5, false);

	}
//	szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), pMF->GetCurrentUser(), m_nDocNo);
//	pMF->ExecSQL(szSQL);
	OnDrugListLoadData();

} 
int CPMSPrescriptionOrderEX::OnPatientListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 

int CPMSPrescriptionOrderEX::OnPatientListIssue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnIssueSelect();
	 return 0;
} 
int CPMSPrescriptionOrderEX::OnPatientListRollback(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnRollbackOrder();
	return 0;
} 

int CPMSPrescriptionOrderEX::OnPatientListRollback2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szEvent, szDesc;
	long nOrderID = 0, nDocNo = 0;

	if(!pMF->CheckPermission(_T("10.18")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return -1;
	int nMsg = ShowMessage(12);
	if(nMsg == IDNO)
		return 0;
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 0));
	szSQL.Format(_T("hms_pharmaorder_rollback2(%ld, '%s') "), nOrderID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		m_wndPatientList.DeleteItem(nSel);
		m_wndDrugList.DeleteAllItems();
		szEvent = _T("Rollback Approved Insurance Order");
		szDesc.Format(_T("Doc No: %ld|Order ID: %ld"), nDocNo, nOrderID);
		pMF->SystemLog(szEvent, szDesc);
	}
	return 0;
}


int CPMSPrescriptionOrderEX::OnPatientListResetPrint(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szEvent, szDesc;
	long nOrderID = 0, nDocNo = 0;

	if(!pMF->CheckPermission(_T("10.21")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}
	
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return -1;
	int nMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn hủy cho phép bác sỹ in lại đơn thuốc không?"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 0));
	szSQL.Format(_T("UPDATE hms_pharmaorder SET hpo_printed=0 WHERE hpo_orderid=%ld and hpo_orderstatus='S' "), nOrderID);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0){
		szEvent = _T("Hủy cho phép in lại đơn thuốc");
		szDesc.Format(_T("Số hồ sơ: %ld|Số phiếu: %ld"), nDocNo, nOrderID);
		pMF->SystemLog(szEvent, szDesc);
	}
	return 0;
}


int CPMSPrescriptionOrderEX::OnPatientListCancelOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelSelect();
	 return 0;
}


long CPMSPrescriptionOrderEX::OnPatientListLoadData(){
	if(!IsWindowVisible())
		return 0;
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("07.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szOrderBy, szObjectType;
	CString szStatus = m_szStatusKey;
	UpdateData(true);
	szSQL.Format(_T("SELECT ho_type FROM hms_object LEFT JOIN hms_doc ON (hd_object = ho_id) WHERE hd_docno = %ld"), m_nDocNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ho_type"), szObjectType);
	m_wndPatientList.BeginLoad(); 
	m_wndDrugList.DeleteAllItems();

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_deptid='%s' "), m_szDepartmentKey);
	if(!m_szStatusKey.IsEmpty())
	{
		if(m_szStatusKey == _T("P"))
		{
			szStatus = _T("S");
			szWhere.AppendFormat(_T(" AND hpo_orderstatus='%s' and hpo_printed > 0 "), szStatus);
		}
		else
			szWhere.AppendFormat(_T(" AND hpo_orderstatus='%s' "), szStatus);
	}
	
	if(!m_szName.IsEmpty())
	{
	//	InitCap(m_szName, tmpStr);
	//	szWhere.AppendFormat(_T(" AND lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
	}
	if(m_szStatusKey == _T("A") )
	{
		szWhere.AppendFormat(_T(" AND trunc(hpo_approvedate) between TO_DATE('%s','YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		szOrderBy.Format(_T("ORDER BY docno, name, orderid "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND trunc(hpo_orderdate) between TO_DATE('%s','YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		szOrderBy.Format(_T("ORDER BY docno, orderid "));
	}

	if(m_nDocNo > 0)
		szWhere.Format(_T(" AND hd_docno=%ld "), m_nDocNo);
	if(m_nOrderNo > 0)
	{
		szWhere.Format(_T(" and hpo_orderid=%ld "), m_nOrderNo);
	}
	
	//szWhere.AppendFormat(_T(" and hpo_payment='P' AND hpo_invoiceno > 0"));
	if (m_szStorageKey == _T("54"))
	{
		
	}
	else
	{
		if(m_szStorageKey != _T("P"))
			szWhere.AppendFormat(_T(" AND ((hpo_orderstatus NOT IN ('O', 'C') AND hpo_payment IN('A','P') ) or hpo_orderstatus = 'C')"));
		else
			szWhere.AppendFormat(_T(" AND (hpo_orderstatus NOT IN ('O', 'C') AND hpo_printed > 0 ) "));

		if (szObjectType == _T("I") || szObjectType == _T("P"))
			szWhere.AppendFormat(_T(" AND hpo_orderstatus <> 'O'"));
	}
	
	int nCount = 0;
	szSQL.Format(_T(" SELECT hd_docno   AS docno,") \
	_T("   hpo_orderid    AS orderid,") \
	_T("   hpo_orderstatus AS status,") \
	_T("   hpo_deptid as deptid, ") \
	_T("   hpo_orderdate AS orderdate,") \
	//_T("   hpo_approvedate as approvedate,") \//
	_T("   case when hpo_orderstatus not in ('A') then null else hpo_approvedate end  AS approvedate,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS name,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   HMS_GETSEX(hp_sex) as sex, ") \
	_T("   hd_cardno                                       AS cardno,") \
	_T("   hpo_approveby as approvedby,") \
	_T("   get_username(hpo_doctor) doctor, NVL(hms_get_paid_drug(hpo_docno, hpo_orderid), 'N') as ispayment,") \
	_T("  case when hfe_status = 'P' ") \
	_T("   then to_char(hfe_date, 'DD/MM/YYYY HH24:MI') ") \
	_T("   else NULL end as ngaytt,") \
	
	_T("  case when HFE_LOCKED = 'Y' ") \
	_T("   then to_char(HFE_LOCKEDDATE, 'DD/MM/YYYY HH24:MI') ") \
	_T("   else NULL end as ngaykhoaso") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN HMS_PHARMARETAILORDER_VIEW_VL ") \
	_T(" ON(hpo_docno        =hd_docno)") \
	_T(" LEFT JOIN hms_fee_invoice") \
	_T(" ON (hd_docno = hfe_docno and hpo_invoiceno = hfe_invoiceno)") \
	_T(" WHERE hpo_storage_id=%d ") \
	_T(" AND hpo_ordertype  IN('P','M', 'SOO') ") \
	_T(" %s %s "), ToInt(m_szStorageKey), szWhere, szOrderBy);

	//_msg(_T("%s"), szSQL);

	CString szFirstName, szMidName, szSurName, szSearchName, szpayment;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szName.IsEmpty())
	{
		StringLower(m_szName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("name"), tmpStr);
		if(!m_szName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}

		rs.GetValue(_T("ispayment"), szpayment);

		int nItem = m_wndPatientList.AddItems(
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Orderid")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("approvedate")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")),
			rs.GetValue(_T("CardNo")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("deptid")),
			szpayment,
			rs.GetValue(_T("ngaytt")),
			rs.GetValue(_T("ngaykhoaso")),
			rs.GetValue(_T("approvedby")),
			rs.GetValue(_T("doctor")),
			NULL);
		if(szpayment != _T("P"))
			{				
				m_wndPatientList.SetSubItemBkColor(nItem, 0, RGB(255, 0, 0));
				m_wndPatientList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255));

				m_wndPatientList.SetSubItemBkColor(nItem, 1, RGB(255, 0, 0));
				m_wndPatientList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255));

				m_wndPatientList.SetSubItemBkColor(nItem, 4, RGB(255, 0, 0));
				m_wndPatientList.SetSubItemTextColor(nItem, 4, RGB(255, 255, 255));

				m_wndPatientList.SetSubItemBkColor(nItem, 10, RGB(255, 0, 0));
				m_wndPatientList.SetSubItemTextColor(nItem, 10, RGB(255, 255, 255));
			}
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad();

	/*m_wndPatientList.SetCurSel(m_wndPatientList.GetItemCount()-1);
	m_wndPatientList.SetFocus();*/

	if (m_wndPatientList.GetItemCount() > 0)
	{
		const int row = 0;
		m_wndPatientList.SetCurSel(row);
		m_wndPatientList.SetItemState(row,
			LVIS_SELECTED | LVIS_FOCUSED,
			LVIS_SELECTED | LVIS_FOCUSED);
		m_wndPatientList.SetSelectionMark(row);
		m_wndPatientList.EnsureVisible(row, FALSE);
		::SetFocus(m_wndPatientList.GetSafeHwnd());
	}

	return nCount;
}
void CPMSPrescriptionOrderEX::OnDrugListDblClick(){
	return;
} 
void CPMSPrescriptionOrderEX::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSPrescriptionOrderEX::OnDrugListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPrescriptionOrderEX::OnDrugListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	if(m_bShowDetailForItems){
			szSQL.Format(_T(" SELECT hpol_orderid,") \
_T("   hpol_product_id,") \
_T("   hpol_productname,") \
_T("   hpol_productuom,") \
_T("   hpol_productcountry,") \
_T("   hpol_unitprice,") \
_T("   hpol_lotno,") \
_T("   hpol_expdate,") \
_T("   NVL(hfe_refstatus,'N') as feestatus,") \
_T("   SUM(hpol_qtyissue)                AS hpol_qtyissue,") \
_T("   SUM(hpol_qtyorder)                AS hpol_qtyorder,") \
_T("   SUM(hpol_qtyissue*hpol_unitprice) AS hpol_amount") \
_T(" FROM HMS_PHARMAORDERLINE_VIEW_VL ") \
_T(" WHERE hpol_orderid=%ld and hpol_qtyissue > 0 ") \
_T(" GROUP BY hpol_orderid,") \
_T("   hpol_product_id,") \
_T("   hpol_productname,") \
_T("   hpol_productuom,") \
_T("   hpol_productcountry,") \
_T("   hpol_unitprice,") \
_T("   hpol_lotno,") \
_T("   hpol_expdate,") \
_T("   hpol_line, hfe_refstatus") \
_T(" ORDER BY hpol_line "), m_nOrderID);
	}
	else
	{
		szSQL.Format(_T(" SELECT hpol_orderid,") \
_T("   hpol_product_id,") \
_T("   hpol_productname,") \
_T("   hpol_productuom,") \
_T("   hpol_productcountry,") \
_T("   NVL(hfe_refstatus,'N') as feestatus,") \
_T("   hpol_unitprice,") \
_T("   SUM(hpol_qtyissue)                AS hpol_qtyissue,") \
_T("   SUM(hpol_qtyorder)                AS hpol_qtyorder,") \
_T("   SUM(hpol_qtyissue*hpol_unitprice) AS hpol_amount") \
_T(" FROM HMS_PHARMAORDERLINE_VIEW_VL ") \
_T(" WHERE hpol_orderid=%ld and hpol_qtyissue > 0 ") \
_T(" GROUP BY hpol_orderid,") \
_T("   hpol_product_id,") \
_T("   hpol_productname,") \
_T("   hpol_productuom,") \
_T("   hpol_productcountry,") \
_T("   hpol_unitprice,") \
_T("   hpol_line, hfe_refstatus") \
_T(" ORDER BY hpol_line "), m_nOrderID);
	}

	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);

	int nIndex=1;
	CString tmpStr, szfeestatus;
	m_nTotalAmount = 0;
	m_nTotalPayment = 0;
	int nItem = 0;
	while(!rs.IsEOF())
	{ 
		
		rs.GetValue(_T("feestatus"), szfeestatus);
		m_nTotalAmount += ToDouble(rs.GetValue(_T("hpol_Amount")));
		rs.GetValue(_T("fee_status"), tmpStr);
		if(tmpStr == _T("P"))
			m_nTotalPayment  += ToDouble(rs.GetValue(_T("hpol_Amount")));
		
		tmpStr.Format(_T("%d"), nIndex++);

		nItem = m_wndDrugList.AddItems(
			tmpStr,
			rs.GetValue(_T("hpol_productname")), 
			rs.GetValue(_T("hpol_productuom")), 
			rs.GetValue(_T("hpol_qtyissue")), 
			rs.GetValue(_T("hpol_unitprice")), 
			rs.GetValue(_T("hpol_amount")), 
			rs.GetValue(_T("hpol_productCountry")), 
			rs.GetValue(_T("hpol_lotno")), 
			rs.GetValue(_T("hpol_expdate")),
			rs.GetValue(_T("hpol_product_id")),
			rs.GetValue(_T("refidx")),
			rs.GetValue(_T("hpol_qtyorder")),
			szfeestatus,
			NULL);
		if (szfeestatus == _T("C") || szfeestatus == _T("R"))
		{
			m_wndDrugList.SetSubItemBkColor(nItem, 12, RGB(255, 69, 0), FALSE);
			m_wndDrugList.SetSubItemTextColor(nItem, 12, RGB(255, 255, 255), FALSE);

			m_wndDrugList.SetSubItemBkColor(nItem, 1, RGB(255, 69, 0), FALSE);
			m_wndDrugList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
		}

		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	UpdateData(false);
	return nCount;

}
void CPMSPrescriptionOrderEX::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	long nOrderID;
	CString szStatus;

	if(!pMF->CheckPermission(_T("07.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	szStatus = GetCurrentStatus();
	if(szStatus != _T("A"))
		return;
	CPrintForms printer;
	printer.PMS_PrintDrugDelivery(nOrderID, m_bPreview);
//	pMF->PrintDrugDelivery(nOrderID, m_bPreview);	
} 
void CPMSPrescriptionOrderEX::OnIssueSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szStatus, szTotalPayment, tmpStr, szStorageType;
	long nOrderID;
//	long nDocumentNo;
	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("07.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;
	szStatus = GetCurrentStatus();
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));

	if(szStatus != _T("S") && szStatus != _T("P") )
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}

	int nMsg = ShowMessage(11);
	if(nMsg == IDNO)
		return;
	if (m_szStorageKey == _T("54"))
		szSQL.Format(_T("HMS_PHARMAORDER_APPROVAL_A11(%ld, '%s') "), nOrderID, pMF->GetCurrentUser());
	else
		szSQL.Format(_T("HMS_PHARMAORDER_APPROVAL(%ld, '%s') "), nOrderID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		m_wndPatientList.DeleteItem(nSel);
		m_wndDrugList.DeleteAllItems();
		m_wndDocNo.SetFocus();
		m_wndDocNo.SetSel(0, -1);
	}
	else
	{
		if (ret == -12)
		{
			//Bn quan chua ket thuc ho so
			ShowMessageBox(_T("H\x1ED3 s\x1A1 kh\xE1m \x63h\x1B0\x61 k\x1EBFt th\xFA\x63. Kh\xF4ng \x63ho ph\xE9p \x64uy\x1EC7t \x111\x1A1n."));
		}
		else if (ret == -11)
		{
			//Don chua thu phi
			ShowMessageBox(_T("\x110\x1A1n \x63h\x1B0\x61 thu ph\xED.Kh\xF4ng \x63ho ph\xE9p \x64uy\x1EC7t."));
		}
		else if (ret == -10)
		{
			//Don chua xac nhan va chua thu phi
			ShowMessageBox(_T("\x110\x1A1n \x63h\x1B0\x61 \x78\xE1\x63 nh\x1EADn v\xE0 \x63h\x1B0\x61 thu ph\xED.Kh\xF4ng \x63ho ph\xE9p \x64uy\x1EC7t."));
		}
		else
			ShowMessageBox(_T("Kh\xF4ng th\x1EC3 \x64uy\x1EC7t"));
	}
}
void CPMSPrescriptionOrderEX::OnIssueSelectEX()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szStatus, szTotalPayment, tmpStr, szStorageType, szdoctype, szispayment ;
	int nStockID;
	szdoctype == _T("PPO");

	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("07.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(m_szStorageKey.IsEmpty())
	{
		 ShowMessageBox(_T("Yêu cầu chọn kho!"), MB_OK);
		return ;
	}
	//Bổ sung check kho khi chọn <> kho trên đơn thì không cho duyệt
	szSQL.Format(_T("SELECT HPO_STORAGE_ID as stockid, NVL(hms_get_paid_drug(hpo_docno, hpo_orderid), 'N') AS ispayment FROM HMS_PHARMAORDER_VIEW_AUTO WHERE HPO_ORDERID =%ld "), m_nOrderNo);	
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		//ShowMessageBox(_T("Đơn đã được duyệt hoặc đã hủy, không duyệt được!"), MB_OK);
		return;
	}
	rs.GetValue(_T("stockid"), nStockID);

	if (nStockID != str2int(m_szStorageKey))
	{
		ShowMessageBox(_T("Kho thuốc trên đơn khác với kho được chọn, không duyệt được!"), MB_OK);
		return;
	}	
	rs.GetValue(_T("ispayment"), szispayment);

	if (szispayment != _T("P"))
	{
		ShowMessageBox(_T("Đơn thuốc không hợp lệ, không duyệt được!"), MB_ICONERROR);
		return;
	}

	szSQL.Format(_T("SELECT SO_DOCTYPE as doctype FROM sale_order WHERE so_sale_order_id =%ld "), m_nOrderNo);	
	rs.ExecSQL(szSQL);
	
	rs.GetValue(_T("doctype"), szdoctype);	
	
	//Bổ sung trường hợp thuốc bán lẻ tại quầy
	
	if (szdoctype == _T("SOO"))
	{
		szSQL.Format(_T("SALE_ORDER_APPROVAL_AUTO(%d,'%s')"), m_nOrderNo , pMF->GetCurrentUser());
	}
	else
	{
		szSQL.Format(_T("HMS_PHARMAORDER_APPROVAL(%ld, '%s') "), m_nOrderNo, pMF->GetCurrentUser());
	}
	int ret = str2int(pMF->ExecDML(szSQL));	

	if(ret > 0)
	{
		m_wndOrderNo.SetFocus();		
		m_wndOrderNo.SetSel(m_wndOrderNo.GetWindowTextLength());
	}
	else
	{
		
	}
} 
void CPMSPrescriptionOrderEX::OnRollbackOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szStatus;
	long nOrderID;

	if(!pMF->CheckPermission(_T("07.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;
	szStatus = GetCurrentStatus();
	if(szStatus != _T("A"))
		return;
	int nMsg = ShowMessage(12);
	if(nMsg == IDNO)
		return;
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	szSQL.Format(_T("hms_pharmaorder_rollback(%ld, '%s') "), nOrderID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		m_wndPatientList.DeleteItem(nSel);
		m_wndDrugList.DeleteAllItems();
	}
	
} 

void CPMSPrescriptionOrderEX::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szStatus;
	long nOrderID;

	if(!pMF->CheckPermission(_T("07.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;
	szStatus = GetCurrentStatus();
	if(szStatus != _T("S"))
		return;

	int nMsg = ShowMessageBox(_T("Do you want to cancel order?(Y/N)"), MB_YESNO);
	if(nMsg == IDNO)
		return;
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));

	szSQL.Format(_T("UPDATE hms_pharmaorder SET hpo_orderstatus='O' WHERE hpo_orderid=%ld AND hpo_orderstatus='S' AND hpo_payment<>'P' and hpo_type='P' "),  nOrderID);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		OnPatientListLoadData();
	}
	
} 


void CPMSPrescriptionOrderEX::OnRecalcOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("07.05")))
		return;
	CString szSQL, szStatus;
	long nOrderID;
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;
	szStatus = GetCurrentStatus();
	if(szStatus != _T("C"))
		return;
	int nMsg = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 \x63h\x1EAFn mu\x1ED1n t\xEDnh l\x1EA1i s\x1ED1 l\x1B0\x1EE3ng y\xEAu \x63\x1EA7u trong \x111\x1A1n thu\x1ED1\x63 kh\xF4ng?(Y/N)"), MB_YESNO);

	if(nMsg == IDNO)
		return;
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	szSQL.Format(_T("HMS_PHARMAORDER_RECALCORDER2(%ld, '%s') "), nOrderID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		OnPatientListLoadData();
		m_wndPatientList.SetCurSel(nSel);
	}
	else
	{
		ShowMessageBox(_T("Thu\x1ED1\x63 trong kho kh\xF4ng \x111\x1EE7 s\x1ED1 l\x1B0\x1EE3ng th\x65o y\xEAu \x63\x1EA7u"));
	}
	
} 


void CPMSPrescriptionOrderEX::OnShowDetailForItemsSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bShowDetailForItems)
		ShowDetail(true);
	else
		ShowDetail(false);
	OnDrugListLoadData();

	AfxGetApp()->WriteProfileInt(_T("PRESCRIPTION"), _T("ShowDetail"), m_bShowDetailForItems);

}

#include "PMSPrescriptionReturnDialog.h"
#include ".\pmsprescriptionorder.h"

void CPMSPrescriptionOrderEX::OnReturnSelect(){
	int nSel  = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;

	CString szStatus = GetCurrentStatus();
	if(szStatus != _T("A"))
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}
	m_nDocNo = str2long(m_wndPatientList.GetItemText(nSel, 0));
	m_nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	int nStorageID = str2int(m_szStorageKey);

	CPMSPrescriptionReturnDialog dlg(this, VM_EDIT);
	dlg.m_nDocumentNo = m_nDocNo;
	dlg.m_nStorageID = nStorageID;
	dlg.m_nOrderID = m_nOrderID;
	if(dlg.DoModal() == IDOK){
	}
}

/*void CPMSPrescriptionOrderEX::OnTotalAmountChange(){
	
} */
/*void CPMSPrescriptionOrderEX::OnTotalAmountSetfocus(){
	
} */
/*void CPMSPrescriptionOrderEX::OnTotalAmountKillfocus(){
	
} */
int CPMSPrescriptionOrderEX::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionOrderEX::OnTotalPaymentChange(){
	
} */
/*void CPMSPrescriptionOrderEX::OnTotalPaymentSetfocus(){
	
} */
/*void CPMSPrescriptionOrderEX::OnTotalPaymentKillfocus(){
	
} */
int CPMSPrescriptionOrderEX::OnTotalPaymentCheckValue(){
	return 0;
} 
int CPMSPrescriptionOrderEX::OnAddPMSPrescriptionOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSPrescriptionOrderEX::OnEditPMSPrescriptionOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPrescriptionOrderEX::OnDeletePMSPrescriptionOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSPrescriptionOrder(); 
 	}
	return 0;
}
int CPMSPrescriptionOrderEX::OnSavePMSPrescriptionOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPMSPrescriptionOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSPrescriptionOrderEX::OnCancelPMSPrescriptionOrder(){
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
int CPMSPrescriptionOrderEX::OnPMSPrescriptionOrderListLoadData(){
	return 0;
}

CString CPMSPrescriptionOrderEX::GetCurrentStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hpo_orderstatus as status, ") \
				_T("	hpo_payment as ispayment ") \
				_T(" FROM hms_pharmaorder_view ") \
				_T(" WHERE hpo_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	m_szIsPaid = _T("O");
	if(rs.IsEOF())
	{
	
		return _T("");
	}
	rs.GetValue(_T("status"), szStatus);
	rs.GetValue(_T("ispayment"), m_szIsPaid);
	return szStatus;

}

void CPMSPrescriptionOrderEX::ShowDetail(bool bDetail){
	/*if(bDetail){
		m_wndDrugList.SetColumnWidth(7,  100);
		m_wndDrugList.SetColumnWidth(8,  70);
		m_wndDrugList.SetColumnWidth(9,  80);
	}
	else
	{
		m_wndDrugList.SetColumnWidth(7,  0);
		m_wndDrugList.SetColumnWidth(8,  0);
		m_wndDrugList.SetColumnWidth(9,  0);

	}*/

} 
BEGIN_MESSAGE_MAP(CPMSPrescriptionOrderEX, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSPrescriptionOrderEX::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndStorage.SetFocus();
}

BOOL CPMSPrescriptionOrderEX::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F3)
	{
		OnIssueSelect();
		return TRUE;
	}
	
	return CGuiView::PreTranslateMessage(pMsg);
}

void CPMSPrescriptionOrderEX::OnResizeLayout()
{
	AddResize(&m_wndPatientProfiles, 100, 100);
	AddResize(&m_wndPatientList, 100, 100);
	AddResize(&m_wndDrugList, 100, 100);
	AddResize(&m_wndOrderLine, 100, 100);
}