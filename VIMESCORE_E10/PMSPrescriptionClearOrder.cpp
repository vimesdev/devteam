#include "PMSPrescriptionClearOrder.h"
#include "MainFrame_E10.h"
#include "PMSPrescriptionEditQuantityDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "PMSysOrderToDuocQG.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionClearOrder* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStorageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionClearOrder* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionClearOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnDocNoCheckValue();
}

static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnOrderNoCheckValue();
}

static void _OnFindSelectFnc(CWnd *pWnd){
	CPMSPrescriptionClearOrder *pVw = (CPMSPrescriptionClearOrder *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListDeleteItem();
} 

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListRollbackFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListRollback();
}

static int _OnPatientListRollback2Fnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListRollback2();
}

static int _OnPatientListResetPrintFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListResetPrint();
}

static int _OnPatientListPostNationalGateFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListPostNationalGate();
}
static int _OnPatientListRecalcFnc(CWnd *pWnd){
	 ((CPMSPrescriptionClearOrder*)pWnd)->OnRecalcOrder();
	 return 0;
}
static int _OnPatientListCancelOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListCancelOrder();
} 

static int _OnPatientListPrintFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->m_bPreview = false;
	 ((CPMSPrescriptionClearOrder*)pWnd)->OnPrintSelect();
	 return 0;
} 

static int _OnPatientListPrintPreviewFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->m_bPreview = true;
	 ((CPMSPrescriptionClearOrder*)pWnd)->OnPrintSelect();
	 return 0;
}

static int _OnPatientListReturnFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->m_bPreview = false;
	 ((CPMSPrescriptionClearOrder*)pWnd)->OnReturnSelect();
	 return 0;
}

static int _OnPatientListRefreshFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->OnPatientListLoadData();
	 return 0;
} 

static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionClearOrder*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSPrescriptionClearOrder *pVw = (CPMSPrescriptionClearOrder *)pWnd;
	pVw->m_bPreview=false;
	pVw->OnPrintSelect();
}

static int _OnDrugListRollbackFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnDrugListRollback();
}


static void _OnIssueSelectFnc(CWnd *pWnd){
	CPMSPrescriptionClearOrder *pVw = (CPMSPrescriptionClearOrder *)pWnd;
	pVw->OnIssueSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSPrescriptionClearOrder *pVw = (CPMSPrescriptionClearOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnShowDetailForItemsSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionClearOrder*)pWnd)->OnShowDetailForItemsSelect();
}
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalPaymentChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnTotalPaymentChange();
} */
/*static void _OnTotalPaymentSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnTotalPaymentSetfocus();} */ 
/*static void _OnTotalPaymentKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder *)pWnd)->OnTotalPaymentKillfocus();
} */
static int _OnTotalPaymentCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionClearOrder *)pWnd)->OnTotalPaymentCheckValue();
} 
static int _OnAddPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnAddPMSPrescriptionOrder();
} 
static int _OnEditPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnEditPMSPrescriptionOrder();
} 
static int _OnDeletePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnDeletePMSPrescriptionOrder();
} 
static int _OnSavePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnSavePMSPrescriptionOrder();
} 
static int _OnCancelPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionClearOrder*)pWnd)->OnCancelPMSPrescriptionOrder();
}
static int _OnExportPatientListToExcel(CWnd *pWnd)
{
	return ((CPMSPrescriptionClearOrder*)pWnd)->ExportPatientListToExcel();
}

static int _OnListCheckAllFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	((CPMSPrescriptionClearOrder*)pWnd)->OnListUncheckAll();
	return 0;
}

static void _OnAllPatientSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionClearOrder*)pWnd)->OnAllPatientSelect();
}

CPMSPrescriptionClearOrder::CPMSPrescriptionClearOrder()
{
	m_nDlgWidth = 805;
	m_nDlgHeight = 595;
	SetDefaultValues();
	m_bPreview = false;
}
CPMSPrescriptionClearOrder::~CPMSPrescriptionClearOrder(){
}
void CPMSPrescriptionClearOrder::OnCreateComponents(){
	
	
	m_wndPatientProfiles.Create(this, _T("Patient Profile"), 5, 122, 810, 401);
	m_wndOrderLine.Create(this, _T("OrderLine"), 5, 410, 810, 594);
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
	m_wndPatientList.Create(this,10, 147, 805, 396); 
	m_wndPatientList.SetCheckBox(true);
	m_wndDrugList.Create(this,10, 435, 805, 589); 	

	m_wndPrint.Create(this, _T("&Print"), 5, 601, 95, 626);

	m_wndIssue.Create(this, _T("&Hủy đơn - Gửi tài chính"), 100, 601, 309, 626);
	m_wndCancel.Create(this, _T("&Cancel"), 314, 601, 404, 626);
	m_wndShowDetailForItems.Create(this, _T("Show detail"), 409, 601, 564, 626);
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 570, 601, 670, 626);
	m_wndTotalAmount.Create(this,675, 601, 810, 626);	
	
	m_wndDepartment.Create(this, 0, 0, 0, 0);
	m_wndDepartment.ShowWindow(SW_HIDE);
	m_wndDepartment.EnableWindow(FALSE);
	m_wndTotalPayment.Create(this, 0, 0, 0, 0);
	m_wndTotalPayment.ShowWindow(SW_HIDE);
	m_wndTotalPayment.EnableWindow(FALSE);
	
	m_wndAllPatient.Create(this, _T("Tất cả các đối tượng bệnh nhân"), 10, 91, 340, 116);

}
void CPMSPrescriptionClearOrder::OnInitializeComponents(){
	
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
	m_wndPatientList.InsertColumn(2, _T("Ngày kê đơn"), CFMT_DATE, 90);
	m_wndPatientList.InsertColumn(3, _T("Ngày gửi tài chính"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(4, _T("Ngày tài chính duyệt"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(5, _T("Patient Name"), CFMT_TEXT, 170);
	m_wndPatientList.InsertColumn(6, _T("Age"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndPatientList.InsertColumn(7, _T("Sex"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndPatientList.InsertColumn(8, _T("Card No"), CFMT_TEXT, 180);
	m_wndPatientList.InsertColumn(9, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndPatientList.InsertColumn(10, _T("Dept"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(11, _T("Trạng thái phí"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndPatientList.InsertColumn(12, _T("Ngày thu"), CFMT_DATETIME, 90);
	m_wndPatientList.InsertColumn(13, _T("Ngày khóa sổ"), CFMT_DATETIME, 90);
	m_wndPatientList.InsertColumn(14, _T("Approved By"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(15, _T("Doctor"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(16, _T("Liên thông"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(17, _T("Kho"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(18, _T("Đơn bản sao"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(19, _T("Hóa đơn thu"), CFMT_NUMBER, 90);
	m_wndPatientList.GetHeaderControl()->SetItemHeight(2);

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
	m_wndDrugList.InsertColumn(12, _T("Trạng thái phí"), CFMT_TEXT|CFMT_CENTER, 70);


}
void CPMSPrescriptionClearOrder::OnSetWindowEvents(){
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
	//m_wndPatientList.AddEvent(1, _T("Issue"), _OnPatientListIssueFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);

	//m_wndPatientList.AddEvent(2, _T("Rollback"), _OnPatientListRollbackFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);

	//m_wndPatientList.AddEvent(3, _T("Cancel Order"), _OnPatientListCancelOrderFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);

	//m_wndPatientList.AddEvent(4, _T("Print"), _OnPatientListPrintFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);
//	m_wndPatientList.AddEvent(5, _T("Print Preview"), _OnPatientListPrintPreviewFnc);
//	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	
	//m_wndPatientList.AddEvent(6, _T("Return Order"), _OnPatientListReturnFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);
	//m_wndPatientList.AddEvent(8, _T("Recalc Order"), _OnPatientListRecalcFnc);
	
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);
	//m_wndPatientList.AddEvent(7, _T("Refresh"), _OnPatientListRefreshFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);
	//LPCTSTR pcStr = pMF->GetLocalIP();
	//if (CString(pcStr) == _T("10.0.76.133"))
	//m_wndPatientList.AddEvent(9, _T("Rollback Ins Order"), _OnPatientListRollback2Fnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);
	//m_wndPatientList.AddEvent(10, _T("Cho phép in lại đơn thuốc"), _OnPatientListResetPrintFnc);
	//m_wndPatientList.AddEvent(0, _T("-"), NULL);
	//m_wndPatientList.AddEvent(11, _T("Liên thông dược quốc gia"), _OnPatientListPostNationalGateFnc);

	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(12, _T("Export to Excel"), _OnExportPatientListToExcel);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(13, _T("Check All"), _OnListCheckAllFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(14, _T("UnCheck All"), _OnListUncheckAllFnc);

	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	//m_wndDrugList.AddEvent(1, _T("Khôi phục lại trạng thái đơn đã trả tiền TC"), _OnDrugListRollbackFnc);
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
	m_wndAllPatient.SetEvent(WE_CLICK, _OnAllPatientSelectFnc);

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
}
void CPMSPrescriptionClearOrder::OnDoDataExchange(CDataExchange* pDX){
	
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
	DDX_Check(pDX, m_wndAllPatient.GetDlgCtrlID(), m_bAllPatient);
	//DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);

}
void CPMSPrescriptionClearOrder::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSPrescriptionClearOrder::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSPrescriptionClearOrder::SetDefaultValues(){

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
	m_bAllPatient=FALSE;

}
int CPMSPrescriptionClearOrder::SetMode(int nMode){
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
void CPMSPrescriptionClearOrder::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionClearOrder::OnStorageSelendok(){
	UpdateData(true);
	AfxGetApp()->WriteProfileInt(_T("PRESCRIPTION"), _T("DefaultStorageID"), str2int(m_szStorageKey)); 
}
/*void CPMSPrescriptionClearOrder::OnStorageSetfocus(){
	
}*/
/*void CPMSPrescriptionClearOrder::OnStorageKillfocus(){
	
}*/
long CPMSPrescriptionClearOrder::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	szWhere.AppendFormat(_T(" and msl_type <>'C' "));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szWhere);

}
/*void CPMSPrescriptionClearOrder::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSPrescriptionClearOrder::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionClearOrder::OnDepartmentSelendok(){
//	OnPatientListLoadData(); 
}
/*void CPMSPrescriptionClearOrder::OnDepartmentSetfocus(){
	
}*/
/*void CPMSPrescriptionClearOrder::OnDepartmentKillfocus(){
	
}*/
long CPMSPrescriptionClearOrder::OnDepartmentLoadData(){
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
/*void CPMSPrescriptionClearOrder::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSPrescriptionClearOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionClearOrder::OnStatusSelendok(){
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("PRESCRIPTION"), _T("DefaultStatus"), m_szStatusKey); 
}
/*void CPMSPrescriptionClearOrder::OnStatusSetfocus(){
	
}*/
/*void CPMSPrescriptionClearOrder::OnStatusKillfocus(){
	
}*/
long CPMSPrescriptionClearOrder::OnStatusLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szWhere.Format(_T(" and ss_code in('O','S','A','C') "));
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
/*void CPMSPrescriptionClearOrder::OnStatusAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPMSPrescriptionClearOrder::OnFromDateChange(){
	
} */
/*void CPMSPrescriptionClearOrder::OnFromDateSetfocus(){
	
} */
/*void CPMSPrescriptionClearOrder::OnFromDateKillfocus(){
	
} */
int CPMSPrescriptionClearOrder::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionClearOrder::OnToDateChange(){
	
} */
/*void CPMSPrescriptionClearOrder::OnToDateSetfocus(){
	
} */
/*void CPMSPrescriptionClearOrder::OnToDateKillfocus(){
	
} */
int CPMSPrescriptionClearOrder::OnToDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionClearOrder::OnNameChange(){
	
} */
/*void CPMSPrescriptionClearOrder::OnNameSetfocus(){
	
} */
/*void CPMSPrescriptionClearOrder::OnNameKillfocus(){
	
} */
int CPMSPrescriptionClearOrder::OnNameCheckValue(){
	OnPatientListLoadData();
	return 1;
} 
/*void CPMSPrescriptionClearOrder::OnDocNoChange(){
	
} */
/*void CPMSPrescriptionClearOrder::OnDocNoSetfocus(){
	
} */
/*void CPMSPrescriptionClearOrder::OnDocNoKillfocus(){
	
} */
int CPMSPrescriptionClearOrder::OnDocNoCheckValue(){
	OnPatientListLoadData();
	return 1;
}

int CPMSPrescriptionClearOrder::OnOrderNoCheckValue(){
	OnPatientListLoadData();
	return 1;
}

void CPMSPrescriptionClearOrder::OnFindSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	/*if(m_szStorageKey.IsEmpty())
	{
		ShowMessageBox(_T("You must select a warehouse"));
		m_wndStorage.SetFocus();
	}*/
	OnPatientListLoadData();
} 
void CPMSPrescriptionClearOrder::OnPatientListDblClick(){
	
} 
void CPMSPrescriptionClearOrder::OnPatientListSelectChange(int nOldItem, int nNewItem){
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
int CPMSPrescriptionClearOrder::OnPatientListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 

int CPMSPrescriptionClearOrder::OnPatientListIssue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnIssueSelect();
	 return 0;
} 
int CPMSPrescriptionClearOrder::OnPatientListRollback(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnRollbackOrder();
	return 0;
} 

int CPMSPrescriptionClearOrder::OnPatientListRollback2()
{
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
//Hàm Clear Order những thuốc tài chính đã thu tiền, chưa cấp nhưng lại tạo phiếu trả lại -> manual -> đưa vào crontab
int CPMSPrescriptionClearOrder::OnDrugListRollback()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szEvent, szDesc;
	long nOrderID = 0, nDocNo = 0;

	if(!pMF->CheckPermission(_T("50.1")))
	{
		ShowMessageBox(_T("Permission Denined(50.1)"), 0);
		return -1;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return -1;
	int nMsg = ShowMessage(12);
	if(nMsg == IDNO)
		return 0;
	nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 0));
	szSQL.Format(_T("M_STORAGELINE_RESETORDER_RT_1(%ld, %ld, %ld) "), ToLong(m_szStorageKey), nDocNo, nOrderID);
	int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if(ret > 0)
	{
		OnDrugListLoadData();
		szEvent = _T("Clear Order");
		szDesc.Format(_T("Doc No: %ld|Order ID: %ld"), nDocNo, nOrderID);
		pMF->SystemLog(szEvent, szDesc);
	}
	return 0;
}


int CPMSPrescriptionClearOrder::OnPatientListResetPrint(){
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


int CPMSPrescriptionClearOrder::OnPatientListCancelOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelSelect();
	 return 0;
}


long CPMSPrescriptionClearOrder::OnPatientListLoadData(){
	if(!IsWindowVisible())
		return 0;
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("07.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere0, tmpStr, szOrderBy, szObjectType, szdonsao, szPayment;
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
		szWhere.AppendFormat(_T(" AND hpo_approvedate between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		szOrderBy.Format(_T("ORDER BY docno, name, orderid "));
	}
	else
	{
		//szWhere.AppendFormat(_T(" AND trunc(hpo_orderdate) between TO_DATE('%s','YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND hpo_orderdate between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		szOrderBy.Format(_T("ORDER BY docno, orderid "));
	}

	if (!m_szStorageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id= %ld "), ToInt(m_szStorageKey));
	}

	if(m_nDocNo > 0)
		szWhere.Format(_T(" AND hd_docno=%ld "), m_nDocNo);
	if(m_nOrderNo > 0)
	{
		szWhere.Format(_T(" and hpo_orderid=%ld "), m_nOrderNo);
	}


	if (m_bAllPatient)
	{
		szWhere.AppendFormat(_T(" AND hpo_orderstatus NOT IN ('O' , 'A', 'C') "));
		szWhere0 += _T(" LEFT JOIN HMS_PHARMAORDER_VIEW_ALL ");
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hpo_orderstatus NOT IN ('O' , 'A') and hpo_payment='P' AND hpo_invoiceno > 0 and hpo_object_id <> 7"));
		szWhere0 += _T(" LEFT JOIN hms_pharmaorder ");
	}
	int nCount = 0;
	szSQL.Format(_T(" SELECT hd_docno   AS docno,") \
	_T("   hpo_orderid    AS orderid,") \
	_T("   hpo_orderstatus AS status,") \
	_T("   hpo_deptid as deptid, ") \
	_T("	trunc_date(hpo_orderdate) AS orderdate,") \
	_T("   case when hpo_orderstatus not in ('A') then null else hpo_approvedate end AS approvedate,") \
	_T("   to_char(hpo_recall_send, 'DD/MM/YYYY') as recall_send_date,") \
	_T("   to_char(hpo_recall_approvedate, 'DD/MM/YYYY') as recall_approve_date,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS name,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   HMS_GETSEX(hp_sex) as sex, ") \
	_T("   hd_cardno                                       AS cardno,") \
	_T("   hpo_approveby as approvedby,") \
	_T("   get_username(hpo_doctor) doctor,") \
	_T("   NULL as post_status, NVL(hms_get_paid_drug(hpo_docno, hpo_orderid), 'N') as ispayment,") \
	_T("  case when hfe_status = 'P' ") \
	_T("   then to_char(hfe_date, 'DD/MM/YYYY HH24:MI') ") \
	_T("   else NULL end as ngaytt,") \
	_T("  case when HFE_LOCKED = 'Y' ") \
	_T("   then to_char(HFE_LOCKEDDATE, 'DD/MM/YYYY HH24:MI') ") \
	_T("   else NULL end as ngaykhoaso,") \
	_T(" (select msl_name from m_storagelist where msl_storage_id=hpo_storage_id) as kho,") \
	_T(" NVL(hpo_recall, 'N') as donsao,") \
	_T(" NVL(hpo_invoiceno, 0) as sohoadon") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" %s ") \
	_T(" ON(hpo_docno        =hd_docno)") \
	_T(" LEFT JOIN m_storagelist ON (hpo_storage_id=msl_storage_id)") \
	_T(" LEFT JOIN hms_fee_invoice") \
	_T(" ON (hd_docno = hfe_docno and hpo_invoiceno = hfe_invoiceno)") \
	_T(" WHERE 1=1") \
	_T(" AND hpo_ordertype  IN('P','M') ") \
	_T(" and msl_dept_id = 'KD'") \
	_T(" %s %s "), szWhere0, szWhere, szOrderBy);

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
		rs.GetValue(_T("donsao"), szdonsao);
		rs.GetValue(_T("ispayment"), szpayment);

		int nItem = m_wndPatientList.AddItems(
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Orderid")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("recall_send_date")),
			rs.GetValue(_T("recall_approve_date")), 
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
			rs.GetValue(_T("post_status")),
			rs.GetValue(_T("kho")),
			rs.GetValue(_T("donsao")),
			rs.GetValue(_T("sohoadon")),
			NULL);
		
		if(szdonsao == _T("Y"))
			{				
				int nColumnCount = m_wndPatientList.GetColumnCount();
				for (int iCol = 0; iCol < nColumnCount; ++iCol)
				{
					m_wndPatientList.SetSubItemBkColor(nItem, iCol, RGB(255, 165, 0));     // Cam nền
					m_wndPatientList.SetSubItemTextColor(nItem, iCol, RGB(255, 255, 255)); // Trắng chữ
				}
			}
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad();

	m_wndPatientList.SetCurSel(m_wndPatientList.GetItemCount()-1);
	m_wndPatientList.SetFocus();

	return nCount;
}
void CPMSPrescriptionClearOrder::OnDrugListDblClick(){
	return;
} 
void CPMSPrescriptionClearOrder::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSPrescriptionClearOrder::OnDrugListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPrescriptionClearOrder::OnDrugListLoadData(){
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
			_T(" FROM HMS_PHARMAORDERLINE_VIEW_VL55 ") \
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
			_T(" FROM hms_pharmaorderline_view ") \
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
void CPMSPrescriptionClearOrder::OnPrintSelect(){
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
void CPMSPrescriptionClearOrder::OnIssueSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szStatus, szTotalPayment, tmpStr, szStorageType;
	long nOrderID;
	long nDocno;
	long nInvoiceno;

	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("07.09")))
	{
		ShowMessageBox(_T("Cấp quyền 07.09 để sử dụng chức năng này!"), MB_ICONERROR);
		return;
	}	

	int nMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn yêu cầu hủy đơn gửi tài chính duyệt?"), MB_YESNO);
	if(nMsg == IDNO)
	return;


	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;

	for (int i =0; i < m_wndPatientList.GetItemCount(); i++)
	{		
		
		nOrderID = str2long(m_wndPatientList.GetItemText(i, 1));
		nDocno = str2long(m_wndPatientList.GetItemText(i, 0));
		nInvoiceno = str2long(m_wndPatientList.GetItemText(i, 19));

		//Đoạn này tạo bản sao ở dược, tạm comment lại
		/*if(m_wndPatientList.GetCheck(i))
		{
			szSQL.Format(_T("HMS_PHARMAORDER_RECALL(%ld, %ld) "), nDocno, nOrderID);		
			int ret = str2int(pMF->ExecDML(szSQL));
					
			if (ret > 0)
			{
				szSQL.Format(_T("COPY_HMS_FEE_TO_RECALL_FUNC(%ld, %ld) "), nDocno, nInvoiceno);		
				pMF->ExecDML(szSQL);
			}			
		}*/
		//Sửa lại theo yêu cầu TC -> Dược chỉ đánh dấu thôi

		if(m_wndPatientList.GetCheck(i))
		{
			szSQL.Format(_T("HMS_PHARMAORDER_RECALL_CREATE(%ld, %ld, '%s') "), nDocno, nOrderID, pMF->GetCurrentUser());		
			int ret = str2int(pMF->ExecDML(szSQL));
			//_msg(_T("%s"), szSQL);
					
			if (ret <= 0)
			{
				ShowMessageBox(_T("Không cập nhật được đơn thuốc"), MB_ICONERROR);
			}			
		}
	}
	OnPatientListLoadData();
	
} 
void CPMSPrescriptionClearOrder::OnRollbackOrder(){
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

void CPMSPrescriptionClearOrder::OnCancelSelect(){
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


void CPMSPrescriptionClearOrder::OnRecalcOrder(){
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
void CPMSPrescriptionClearOrder::OnShowDetailForItemsSelect(){
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

void CPMSPrescriptionClearOrder::OnReturnSelect(){
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

/*void CPMSPrescriptionClearOrder::OnTotalAmountChange(){
	
} */
/*void CPMSPrescriptionClearOrder::OnTotalAmountSetfocus(){
	
} */
/*void CPMSPrescriptionClearOrder::OnTotalAmountKillfocus(){
	
} */
int CPMSPrescriptionClearOrder::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionClearOrder::OnTotalPaymentChange(){
	
} */
/*void CPMSPrescriptionClearOrder::OnTotalPaymentSetfocus(){
	
} */
/*void CPMSPrescriptionClearOrder::OnTotalPaymentKillfocus(){
	
} */
int CPMSPrescriptionClearOrder::OnTotalPaymentCheckValue(){
	return 0;
} 
int CPMSPrescriptionClearOrder::OnAddPMSPrescriptionOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSPrescriptionClearOrder::OnEditPMSPrescriptionOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPrescriptionClearOrder::OnDeletePMSPrescriptionOrder(){
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
int CPMSPrescriptionClearOrder::OnSavePMSPrescriptionOrder(){
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
int CPMSPrescriptionClearOrder::OnCancelPMSPrescriptionOrder(){
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
int CPMSPrescriptionClearOrder::OnPMSPrescriptionOrderListLoadData(){
	return 0;
}

CString CPMSPrescriptionClearOrder::GetCurrentStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hpo_orderstatus as status, hpo_payment as ispayment FROM hms_pharmaorder_view WHERE hpo_orderid=%ld"), m_nOrderID);
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

void CPMSPrescriptionClearOrder::ShowDetail(bool bDetail){
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

} BEGIN_MESSAGE_MAP(CPMSPrescriptionClearOrder, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSPrescriptionClearOrder::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndStorage.SetFocus();
}

BOOL CPMSPrescriptionClearOrder::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F3)
	{
		OnIssueSelect();
		return TRUE;
	}

	return CGuiView::PreTranslateMessage(pMsg);
}

int CPMSPrescriptionClearOrder::OnPatientListPostNationalGate()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nDocNo = ToLong(m_wndPatientList.GetItemText(m_wndPatientList.GetCurSel(), 0));
	CPMSysOrderToDuocQG dlg(this);
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_nDocNo = m_nDocNo;
	dlg.DoModal();
	return 1;	
}
int CPMSPrescriptionClearOrder::ExportPatientListToExcel()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	ShowMessageBox(_T("Chức năng này sẽ Export ra Excel danh sách trên màn hình!"), MB_OK);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
	CExcel xls;
	CString szSQL, tmpStr, strtype;
	double nTmp = 0;
	long double nTotalAmount = 0;
	int nIdx = 1, nRow = 0, nCol = 0, nTotalOrder = 0;
	
	//strtype = m_szStorageKey;
	strtype = m_wndStorage.GetCurrent(1);
	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 17);
	xls.SetColumnWidth(3, 17);
	xls.SetColumnWidth(4, 17);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6,5);

	xls.SetColumnWidth(7,20);
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,10);
	xls.SetColumnWidth(11,15);
	xls.SetColumnWidth(12,15);
	xls.SetColumnWidth(13,15);
	xls.SetColumnWidth(14,15);
	xls.SetColumnWidth(15,15);
	xls.SetColumnWidth(16,15);	


	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 11);
	xls.SetCellMergedColumns(0, 3, 11);
	xls.SetCellMergedColumns(0, 4, 11);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	xls.SetCellText(0, 2, _T("Danh sách đơn thuốc"), 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	xls.SetCellText(0, 4, strtype, 4098, true);

	//TODO: Write Column Header
	
	arrCol.Add(_T("Số HS"));
	arrCol.Add(_T("Số phiếu"));
	arrCol.Add(_T("Ngày yêu cầu"));
	arrCol.Add(_T("Ngày duyệt"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Tuổi"));
	arrCol.Add(_T("Giới"));
	arrCol.Add(_T("Số thẻ"));
	arrCol.Add(_T("Trạng thái"));
	arrCol.Add(_T("Khoa"));
	arrCol.Add(_T("Trạng thái phí"));
	arrCol.Add(_T("Người duyêt"));
	arrCol.Add(_T("Bác sĩ"));
	arrCol.Add(_T("Liên thông"));	
	

	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 5, arrCol.GetAt(i), 4098, true);
		nRow = 6;
		
	for( int i=0; i < m_wndPatientList.GetItemCount();i++)
	{
		for(int j=0; j < m_wndPatientList.GetColumnCount(); j++)
		{
			
			tmpStr= m_wndPatientList.GetItemText(i,j);
		
			switch(j)
			{
			case 0:
			
				xls.SetCellText(j, nRow, tmpStr, FMT_INTEGER);
				break;
			
			case 1:
			
				xls.SetCellText(j, nRow, tmpStr, FMT_INTEGER);
				break;		
		
			default:
			xls.SetCellText(j, nRow, tmpStr, FMT_TEXT);
			break;
			}
		}
		nRow++;

	}	
	
	EndWaitCursor();

	xls.Save(_T("Exports\\Danhsachdonthuoc.xls"));
	
	return 1;
}

void CPMSPrescriptionClearOrder::OnListCheckAll()
{
	int i = 0;
	for (i = 0; i < m_wndPatientList.GetItemCount(); i++)
		m_wndPatientList.SetCheck(i, true);

	_msg(_T("Tổng số phiếu = %d"), i);
}

void CPMSPrescriptionClearOrder::OnListUncheckAll(){
	for (int i = 0; i < m_wndPatientList.GetItemCount(); i++)
		m_wndPatientList.SetCheck(i, false);
}

void  CPMSPrescriptionClearOrder::OnAllPatientSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//OnPatientListLoadData();	
}