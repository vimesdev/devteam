#include "CancerPrescriptionOrderIN.h"
#include "MainFrame_E10.h"
#include "PMSPrescriptionEditQuantityDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "CancerStorageImportDialog.h"
#include "CancerPrescriptionPrepare.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionOrderIN* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStorageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionOrderIN* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionOrderIN* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnDocNoCheckValue();
}

static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnOrderNoCheckValue();
}

static void _OnFindSelectFnc(CWnd *pWnd){
	CCancerPrescriptionOrderIN *pVw = (CCancerPrescriptionOrderIN *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCancerPrescriptionOrderIN*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnPatientListDeleteItem();
} 

static int _OnStorageImportFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnStorageImport();
} 

static int _OnPreparationDrugFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnPreparationDrug();
} 


static int _OnPatientListRecalcOrderFnc(CWnd *pWnd){
	 ((CCancerPrescriptionOrderIN*)pWnd)->OnRecalcOrder();
	 return 0;
}

static int _OnPatientListExportOrderFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnPatientListExportOrder();
} 

static int _OnPatientListPrintFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN*)pWnd)->m_bPreview = false;
	 ((CCancerPrescriptionOrderIN*)pWnd)->OnPrintSelect();
	 return 0;
} 

static int _OnPatientListPrintPreviewFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN*)pWnd)->m_bPreview = true;
	 ((CCancerPrescriptionOrderIN*)pWnd)->OnPrintSelect();
	 return 0;
}

static int _OnPatientListReturnFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN*)pWnd)->m_bPreview = false;
	 ((CCancerPrescriptionOrderIN*)pWnd)->OnReturnSelect();
	 return 0;
}

static int _OnPatientListRefreshFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN*)pWnd)->OnPatientListLoadData();
	 return 0;
} 

static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCancerPrescriptionOrderIN*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnDrugListEditUnitPriceFnc(CWnd* pWnd){
	((CCancerPrescriptionOrderIN*)pWnd)->OnDrugListEditUnitPrice();
	return 0;
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCancerPrescriptionOrderIN *pVw = (CCancerPrescriptionOrderIN *)pWnd;
	pVw->m_bPreview=false;
	pVw->OnPrintSelect();
}


static void _OnImportSelectFnc(CWnd *pWnd){
	CCancerPrescriptionOrderIN *pVw = (CCancerPrescriptionOrderIN *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CCancerPrescriptionOrderIN *pVw = (CCancerPrescriptionOrderIN *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnShowDetailForItemsSelectFnc(CWnd *pWnd){
	 ((CCancerPrescriptionOrderIN*)pWnd)->OnShowDetailForItemsSelect();
}
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalPaymentChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnTotalPaymentChange();
} */
/*static void _OnTotalPaymentSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnTotalPaymentSetfocus();} */ 
/*static void _OnTotalPaymentKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionOrderIN *)pWnd)->OnTotalPaymentKillfocus();
} */
static int _OnTotalPaymentCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionOrderIN *)pWnd)->OnTotalPaymentCheckValue();
} 
static int _OnAddPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnAddPMSPrescriptionOrder();
} 
static int _OnEditPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnEditPMSPrescriptionOrder();
} 
static int _OnDeletePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnDeletePMSPrescriptionOrder();
} 
static int _OnSavePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnSavePMSPrescriptionOrder();
} 
static int _OnExportPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionOrderIN*)pWnd)->OnExportPMSPrescriptionOrder();
} 
CCancerPrescriptionOrderIN::CCancerPrescriptionOrderIN(){
	m_nDlgWidth = 805;
	m_nDlgHeight = 595;
	SetDefaultValues();
	m_bPreview = false;
}

CCancerPrescriptionOrderIN::~CCancerPrescriptionOrderIN(){
}
void CCancerPrescriptionOrderIN::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndPatientProfiles.Create(this, _T("Patient Profile"), 5, 95, 810, 265);
	//m_wndOrderLine.Create(this, _T("OrderLine"), 5, 270, 810, 590);
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
	m_wndPatientList.Create(this,10, 120, 805, 590);
	//m_wndDrugList.Create(this,10, 295, 805, 585); 
	m_wndPrint.Create(this, _T("&Print"), 5, 595, 95, 620);
	m_wndImport.Create(this, _T("&Pha chế"), 100, 595, 190, 620);
	//m_wndExport.Create(this, _T("&Báo cáo số liệu"), 195, 595, 385, 620);
	
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 585, 595, 685, 620);
	m_wndTotalAmount.Create(this,690, 595, 810, 620); 

	//m_wndTab.Create(this,10, 270, 805, 590); 
	m_wndDepartment.Create(this, 0, 0, 0, 0);
	m_wndDepartment.ShowWindow(SW_HIDE);
	m_wndDepartment.EnableWindow(FALSE);
	m_wndShowDetailForItems.Create(this, _T(""), 0, 0, 0, 0);
	m_wndShowDetailForItems.ShowWindow(SW_HIDE);
	m_wndShowDetailForItems.EnableWindow(FALSE);
	m_wndTotalPayment.Create(this, 0, 0, 0, 0);
	m_wndTotalPayment.ShowWindow(SW_HIDE);
	m_wndTotalPayment.EnableWindow(FALSE);

}
void CCancerPrescriptionOrderIN::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
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


	m_wndPatientList.GetHeaderControl()->SetItemHeight(1);
	m_wndPatientList.InsertColumn(0, _T("Doc No"), CFMT_NUMBER, 85);
	m_wndPatientList.InsertColumn(1, _T("Order No"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(2, _T("Order Date"), CFMT_DATE, 90);
	m_wndPatientList.InsertColumn(3, _T("Approved Date"), CFMT_DATE, 0);
	m_wndPatientList.InsertColumn(4, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(5, _T("Age"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndPatientList.InsertColumn(6, _T("Sex"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndPatientList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndPatientList.InsertColumn(8, _T("Dept"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(9, _T("Object"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(10, _T("Card No"), CFMT_TEXT, 180);
	m_wndPatientList.InsertColumn(11, _T("Approved By"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(12, _T(""), CFMT_TEXT, 0);//TYPE

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

	/*m_wndLines.Create(&m_wndTab);
	m_wndTab.Add(_T(""), &m_wndLines);
	m_wndLines.m_pWndOrder = this;
	m_wndLines.OnInitDialog();
	m_wndTab.SetCurSel(0);*/
}
void CCancerPrescriptionOrderIN::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndPatientList.AddEvent(1, _T("Chọn bệnh nhân"), _OnStorageImportFnc);
	/*m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(2, _T("Preparation Drug"), _OnPreparationDrugFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(4, _T("Print"), _OnPatientListPrintFnc);*/
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(7, _T("Refresh"), _OnPatientListRefreshFnc);

	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnStorageImportFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnPreparationDrugFnc);
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
	AddEvent(5, _T("C3ancel	Ctrl+T"), _OnExportPMSPrescriptionOrderFnc, 0, 'T', VK_CONTROL);
*/

	
	m_wndTotalAmount.SetTextColor(RGB(255, 0, 0));
	m_wndTotalPayment.SetTextColor(RGB(255, 0, 0));

	m_wndTotalAmount.SetCurrencyFormat(true);

	SetWindowFont(&m_wndTotalAmount, GetFaceName(), GetFaceSize()+2, TRUE);

	m_wndTotalPayment.SetCurrencyFormat(true);
	SetWindowFont(&m_wndTotalPayment, GetFaceName(), GetFaceSize()+2, TRUE);
	
//	m_wndPatientList.SetAutoColumnSize(true);
	//m_wndDrugList.SetAutoColumnSize(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);

}
void CCancerPrescriptionOrderIN::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	//DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	//DDX_Check(pDX, m_wndShowDetailForItems.GetDlgCtrlID(), m_bShowDetailForItems);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	//DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);

}
void CCancerPrescriptionOrderIN::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCancerPrescriptionOrderIN::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CCancerPrescriptionOrderIN::SetDefaultValues(){

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
int CCancerPrescriptionOrderIN::SetMode(int nMode){
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

		if(m_szStatus == _T("P") || m_szStatus == _T("A"))
			m_wndImport.EnableWindow(true);

 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CCancerPrescriptionOrderIN::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionOrderIN::OnStorageSelendok(){
	UpdateData(true);
	AfxGetApp()->WriteProfileInt(_T("PRESCRIPTION"), _T("DefaultStorageID"), str2int(m_szStorageKey)); 
}
/*void CCancerPrescriptionOrderIN::OnStorageSetfocus(){
	
}*/
/*void CCancerPrescriptionOrderIN::OnStorageKillfocus(){
	
}*/
long CCancerPrescriptionOrderIN::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	szWhere.AppendFormat(_T(" and msl_type <>'C' "));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szWhere);

}
/*void CCancerPrescriptionOrderIN::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCancerPrescriptionOrderIN::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionOrderIN::OnDepartmentSelendok(){
//	OnPatientListLoadData(); 
}
/*void CCancerPrescriptionOrderIN::OnDepartmentSetfocus(){
	
}*/
/*void CCancerPrescriptionOrderIN::OnDepartmentKillfocus(){
	
}*/
long CCancerPrescriptionOrderIN::OnDepartmentLoadData(){
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
/*void CCancerPrescriptionOrderIN::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCancerPrescriptionOrderIN::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionOrderIN::OnStatusSelendok(){
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("PRESCRIPTION"), _T("DefaultStatus"), m_szStatusKey); 
}
/*void CCancerPrescriptionOrderIN::OnStatusSetfocus(){
	
}*/
/*void CCancerPrescriptionOrderIN::OnStatusKillfocus(){
	
}*/
long CCancerPrescriptionOrderIN::OnStatusLoadData(){
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
/*void CCancerPrescriptionOrderIN::OnStatusAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCancerPrescriptionOrderIN::OnFromDateChange(){
	
} */
/*void CCancerPrescriptionOrderIN::OnFromDateSetfocus(){
	
} */
/*void CCancerPrescriptionOrderIN::OnFromDateKillfocus(){
	
} */
int CCancerPrescriptionOrderIN::OnFromDateCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionOrderIN::OnToDateChange(){
	
} */
/*void CCancerPrescriptionOrderIN::OnToDateSetfocus(){
	
} */
/*void CCancerPrescriptionOrderIN::OnToDateKillfocus(){
	
} */
int CCancerPrescriptionOrderIN::OnToDateCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionOrderIN::OnNameChange(){
	
} */
/*void CCancerPrescriptionOrderIN::OnNameSetfocus(){
	
} */
/*void CCancerPrescriptionOrderIN::OnNameKillfocus(){
	
} */
int CCancerPrescriptionOrderIN::OnNameCheckValue(){
	OnPatientListLoadData();
	return 1;
} 
/*void CCancerPrescriptionOrderIN::OnDocNoChange(){
	
} */
/*void CCancerPrescriptionOrderIN::OnDocNoSetfocus(){
	
} */
/*void CCancerPrescriptionOrderIN::OnDocNoKillfocus(){
	
} */
int CCancerPrescriptionOrderIN::OnDocNoCheckValue(){
	OnPatientListLoadData();
	return 1;
}

int CCancerPrescriptionOrderIN::OnOrderNoCheckValue(){
	OnPatientListLoadData();
	return 1;
}

void CCancerPrescriptionOrderIN::OnFindSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStorageKey.IsEmpty())
	{
		ShowMessageBox(_T("You must select a warehouse"));
		m_wndStorage.SetFocus();
	}
	OnPatientListLoadData();
} 
void CCancerPrescriptionOrderIN::OnPatientListDblClick(){
	OnStorageImport();
} 
void CCancerPrescriptionOrderIN::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szStatus, szSQL;

	if(nNewItem < 0)
	{
		return;
	}
	
	m_nDocNo = ToLong(m_wndPatientList.GetItemText(nNewItem, 0));
	m_nOrderID = ToLong(m_wndPatientList.GetItemText(nNewItem, 1));
	m_szName = m_wndPatientList.GetItemText(nNewItem, 4);
	m_nTreatIdx = ToLong(m_wndPatientList.GetItemText(nNewItem, 12));
	m_szStatus = m_wndPatientList.GetItemText(nNewItem, 7);
	
	//OnDrugListLoadData();

	/*if(m_szStatus == _T("P") || m_szStatus == _T("A"))
		m_wndExport.EnableWindow(true);
	else
		m_wndExport.EnableWindow(false);*/

	//m_wndLines.m_nDocumentNo = m_nDocNo;
	//m_wndLines.m_nTreatIdx = m_nTreatIdx;
	//m_wndLines.GetDataToScreen();
} 
int CCancerPrescriptionOrderIN::OnPatientListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 

int CCancerPrescriptionOrderIN::OnStorageImport(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL,szDesc, szStatus;
	CRecord rs(&pMF->m_db);
	if(m_nTreatIdx < 0) return -1;

	CCancerPrescriptionPrepare dlg(this, VM_VIEW);
	dlg.m_nDocumentNo = m_nDocNo;
	dlg.m_nTreatIdx = m_nTreatIdx;
	dlg.DoModal();

	return 0;
} 
#include "CancerStorageExportOrderDialog.h"
int CCancerPrescriptionOrderIN::OnPreparationDrug(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL,szDesc, szStatus;
	CRecord rs(&pMF->m_db);
	
	long nTransaction_import_id, nTransaction_export_id;
	szSQL.Format(_T("SELECT hco_status, hco_transaction_import_id, hco_transaction_export_id FROM hms_cancer_order WHERE hco_docno = %ld AND hco_treatidx = %ld"), m_nDocNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("hco_status"), szStatus);
	rs.GetValue(_T("hco_transaction_import_id"), nTransaction_import_id);
	rs.GetValue(_T("hco_transaction_export_id"), nTransaction_export_id);
//_msg(_T("%s, %s"), szSQL, szStatus);
	if(szStatus == _T("P"))
	{
		CCancerStorageExportOrderDialog dlg(this, VM_ADD);
		dlg.m_nImportID = nTransaction_import_id;
		dlg.m_szFromStorageKey = _T("450");
		dlg.m_szTransactionTypeKey = _T("DOO");
		dlg.m_nDocNo = m_nDocNo;
		dlg.m_nTreatIdx = m_nTreatIdx;

		if(dlg.DoModal() == IDOK){
		
		}
	}
	else
	{
		CCancerStorageExportOrderDialog dlg(this, VM_VIEW);
		dlg.m_nID = nTransaction_export_id;
		if(dlg.DoModal() == IDOK){
		
		}
	}

	return 0;
} 

int CCancerPrescriptionOrderIN::OnPatientListExportOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnExportSelect();
	 return 0;
} 
long CCancerPrescriptionOrderIN::OnPatientListLoadData(){
	
	if(!IsWindowVisible())
		return 0;
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szOrderBy;
	UpdateData(true);
	m_wndPatientList.BeginLoad(); 
	m_wndDrugList.DeleteAllItems();

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_deptid='%s' "), m_szDepartmentKey);
	if(!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_orderstatus='%s' "), m_szStatusKey);
	
	if(!m_szName.IsEmpty())
	{
	//	InitCap(m_szName, tmpStr);
	//	szWhere.AppendFormat(_T(" AND lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
	}
	if(m_szStatusKey == _T("I") )
	{
		szWhere.AppendFormat(_T(" AND trunc(hpo_approvedate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);
		szOrderBy.Format(_T("ORDER BY docno, name, orderid "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);
		szOrderBy.Format(_T("ORDER BY docno, orderid "));
	}

	if(m_nDocNo > 0)
		szWhere.Format(_T(" AND hd_docno=%ld "), m_nDocNo);
	if(m_nOrderNo > 0)
	{
		szWhere.Format(_T(" and hpo_orderid=%ld "), m_nOrderNo);
	}

	int nCount = 0;
	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
	_T("   hpo_type,") \
	_T("   hpo_orderid     AS orderid,") \
	_T("   hpo_orderstatus,") \
	_T("   hco_status	   AS status,") \
	_T("   hco_treatidx    AS treatidx,") \
	_T("   hpo_deptid      AS deptid,") \
	_T("   CASE") \
	_T("     WHEN hpo_orderstatus='I'") \
	_T("     THEN trunc_date(hpo_approvedate)") \
	_T("     ELSE trunc_date(hpo_orderdate)") \
	_T("   END             AS issuedate,") \
	_T("   hpo_approvedate AS approvedate,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS name,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   HMS_GETSEX(hp_sex)                                 AS sex,") \
	_T("   hd_cardno                                          AS cardno,") \
	_T("   HMS_GetObjectName(hd_object)                       AS objectname,") \
	_T("   hpo_approveby                                      AS approvedby") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN") \
	_T("   (SELECT hco_docno,") \
	_T("     hpo_orderid,") \
	_T("     hpo_orderdate,") \
	_T("     hpo_approvedate,") \
	_T("     hpo_approveby,") \
	_T("     hpo_orderstatus,") \
	_T("     hpo_deptid,") \
	_T("     hpo_ordertype,") \
	_T("     hpo_storage_id,") \
	_T("     hpo_processed,") \
	_T("     hco_treatidx,") \
	_T("     hco_status,") \
	_T("     'I' AS hpo_type") \
	_T("   FROM hms_ipharmaorder") \
	_T("   LEFT JOIN hms_cancer_order ") \
	_T("   ON(hco_docno=hpo_docno ") \
	_T("	AND hco_treatidx=hpo_treatidx ") \
	_T("	AND hco_cancer_order_id = hpo_cancer_order_id) ") \
	_T("   ) otbl") \
	_T(" ON(hco_docno         =hd_docno)") \
	_T(" WHERE hpo_storage_id =%d") \
	_T(" AND hpo_ordertype   IN('D')") \
	_T(" AND hpo_orderstatus ='A'") \
	_T(" %s %s "), ToInt(m_szStorageKey), szWhere, szOrderBy);

	//_msg(_T("%s"), szSQL);

	CString szFirstName, szMidName, szSurName, szSearchName;
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

		m_wndPatientList.AddItems(
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Orderid")), 
			rs.GetValue(_T("issuedate")), 
			rs.GetValue(_T("approvedate")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("objectname")),
			rs.GetValue(_T("CardNo")),
			rs.GetValue(_T("approvedby")),
			rs.GetValue(_T("treatidx")),
			NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
}
void CCancerPrescriptionOrderIN::OnDrugListDblClick(){
	int nSel = m_wndDrugList.GetCurSel();

} 
void CCancerPrescriptionOrderIN::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nProductID = str2long(m_wndDrugList.GetItemText(nNewItem, 9));
	m_nUnitPrice = str2double(m_wndDrugList.GetItemText(nNewItem, 4));
} 
int CCancerPrescriptionOrderIN::OnDrugListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
#include "EditUnitPriceDialog.h"
void CCancerPrescriptionOrderIN::OnDrugListEditUnitPrice(){
	CEditUnitPriceDialog dlg(this);
	dlg.m_pWnd = this;
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_nProductID = m_nProductID;
	dlg.m_nOldPrice = m_nUnitPrice;
	dlg.DoModal();
}
long CCancerPrescriptionOrderIN::OnDrugListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szTable = _T("HMS_IPHARMAORDERLINE_VIEW");
	if(m_szType == _T("E"))
	{
		szTable = _T("HMS_PHARMAORDERLINE_VIEW");
	}
//_msg(_T("%s"), szTable);
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
		_T("   SUM(hpol_qtyissue)                AS hpol_qtyissue,") \
		_T("   SUM(hpol_qtyorder)                AS hpol_qtyorder,") \
		_T("   SUM(hpol_qtyissue*hpol_unitprice) AS hpol_amount") \
		_T(" FROM %s ") \
		_T(" WHERE hpol_orderid=%ld") \
		_T(" GROUP BY hpol_orderid,") \
		_T("   hpol_product_id,") \
		_T("   hpol_productname,") \
		_T("   hpol_productuom,") \
		_T("   hpol_productcountry,") \
		_T("   hpol_unitprice,") \
		_T("   hpol_lotno,") \
		_T("   hpol_expdate,") \
		_T("   hpol_line") \
		_T(" ORDER BY hpol_line "), szTable, m_nOrderID);
	}
	else
	{
		szSQL.Format(_T(" SELECT hpol_orderid,") \
		_T("   hpol_product_id,") \
		_T("   hpol_productname,") \
		_T("   hpol_productuom,") \
		_T("   hpol_productcountry,") \
		_T("   hpol_unitprice,") \
		_T("   SUM(hpol_qtyissue)                AS hpol_qtyissue,") \
		_T("   SUM(hpol_qtyorder)                AS hpol_qtyorder,") \
		_T("   SUM(hpol_qtyissue*hpol_unitprice) AS hpol_amount") \
		_T(" FROM %s ") \
		_T(" WHERE hpol_orderid=%ld") \
		_T(" GROUP BY hpol_orderid,") \
		_T("   hpol_product_id,") \
		_T("   hpol_productname,") \
		_T("   hpol_productuom,") \
		_T("   hpol_productcountry,") \
		_T("   hpol_unitprice,") \
		_T("   hpol_line") \
		_T(" ORDER BY hpol_line "), szTable, m_nOrderID);
	}

	nCount = rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);

	int nIndex=1;
	CString tmpStr;
	m_nTotalAmount = 0;
	m_nTotalPayment = 0;
	while(!rs.IsEOF()){ 
		
		m_nTotalAmount += ToDouble(rs.GetValue(_T("hpol_Amount")));
		rs.GetValue(_T("fee_status"), tmpStr);
		if(tmpStr == _T("P"))
			m_nTotalPayment  += ToDouble(rs.GetValue(_T("hpol_Amount")));
		
		tmpStr.Format(_T("%d"), nIndex++);

		m_wndDrugList.AddItems(
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
			NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	UpdateData(false);
	return nCount;

}
void CCancerPrescriptionOrderIN::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	long nOrderID =0;
	CString szStatus;

	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	CRect rect;
	CString tmpStr;
	m_wndPrint.GetWindowRect(&rect);
	TranslateString(_T("In đơn hóa trị liệu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR, 0);
	TranslateString(_T("In phiếu pha chế"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_LEFTALIGN, rect.left, rect.top, this);
	switch (nPos)
	{
		case 1:
			InDonhoatrilieu();
			break;
		case 2:
			InPhieudieuche();
			break;
	}
} 
void CCancerPrescriptionOrderIN::OnImportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szStatus, szTotalPayment, tmpStr, szStorageType;	
} 

void CCancerPrescriptionOrderIN::OnRollbackOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szStatus;
	long nOrderID = 0;

	if(!pMF->CheckPermission(_T("07.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	/*int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;
	szStatus = GetCurrentStatus();
	if(szStatus != _T("A"))
		return;
	int nMsg = ShowMessage(12);
	if(nMsg == IDNO)
		return;*/
	

	//CCancerPrescriptionPrepareDialog dlg(this, VM_EDIT);
	//dlg.m_nDocumentNo = m_nDocNo;
	//dlg.m_nTreatIdx = m_nTreatIdx;
	////dlg.m_szDoctorKey = pMF->GetCurrentUser();
	//if(dlg.DoModal() == IDOK)
	//{
	//}
} 

void CCancerPrescriptionOrderIN::OnExportSelect(){
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
	CString szType = m_szType;
	if (szType == _T("E"))
	{
		szSQL.Format(_T("UPDATE hms_pharmaorder SET hpo_orderstatus='O' WHERE hpo_orderid=%ld AND hpo_orderstatus='S' AND hpo_payment<>'P' and hpo_type='P' "),  nOrderID);
	}
	else
		szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='O' WHERE hpo_orderid=%ld AND hpo_orderstatus='S' AND hpo_payment<>'P' and hpo_type='P' "),  nOrderID);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		OnPatientListLoadData();
	}


	
} 


void CCancerPrescriptionOrderIN::OnRecalcOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	szSQL.Format(_T("HMS_IPHARMAORDER_RECALCORDER(%ld, '%s') "), nOrderID, pMF->GetCurrentUser());
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


void CCancerPrescriptionOrderIN::OnShowDetailForItemsSelect(){
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

void CCancerPrescriptionOrderIN::OnReturnSelect(){
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

	CPMSPrescriptionReturnDialog dlg(this, VM_EDIT, _T("Y"));
	dlg.m_nDocumentNo = m_nDocNo;
	dlg.m_nStorageID = nStorageID;
	dlg.m_nOrderID = m_nOrderID;
	if(dlg.DoModal() == IDOK){
	}
}

/*void CCancerPrescriptionOrderIN::OnTotalAmountChange(){
	
} */
/*void CCancerPrescriptionOrderIN::OnTotalAmountSetfocus(){
	
} */
/*void CCancerPrescriptionOrderIN::OnTotalAmountKillfocus(){
	
} */
int CCancerPrescriptionOrderIN::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionOrderIN::OnTotalPaymentChange(){
	
} */
/*void CCancerPrescriptionOrderIN::OnTotalPaymentSetfocus(){
	
} */
/*void CCancerPrescriptionOrderIN::OnTotalPaymentKillfocus(){
	
} */
int CCancerPrescriptionOrderIN::OnTotalPaymentCheckValue(){
	return 0;
} 
int CCancerPrescriptionOrderIN::OnAddPMSPrescriptionOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCancerPrescriptionOrderIN::OnEditPMSPrescriptionOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CCancerPrescriptionOrderIN::OnDeletePMSPrescriptionOrder(){
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
 		OnExportPMSPrescriptionOrder(); 
 	}
	return 0;
}
int CCancerPrescriptionOrderIN::OnSavePMSPrescriptionOrder(){
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
int CCancerPrescriptionOrderIN::OnExportPMSPrescriptionOrder(){
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
int CCancerPrescriptionOrderIN::OnPMSPrescriptionOrderListLoadData(){
	return 0;
}

CString CCancerPrescriptionOrderIN::GetCurrentStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szStatus.Empty();
	if(m_szType==_T("E"))
	{
		szSQL.Format(_T("SELECT hpo_orderstatus as status, hpo_processed as processed ") \
		_T("FROM hms_pharmaorder WHERE hpo_orderid=%ld"), m_nOrderID);
	}
	else
	{
		szSQL.Format(_T("SELECT hpo_orderstatus as status, hpo_processed as processed ") \
		_T("FROM hms_ipharmaorder WHERE hpo_orderid=%ld"), m_nOrderID);
	}

	rs.ExecSQL(szSQL);
	m_szIsPaid = _T("N");
	szStatus.Empty();
	if(rs.IsEOF())
	{
		return szStatus;
	}
	rs.GetValue(_T("status"), szStatus);
	rs.GetValue(_T("processed"), m_szIsPaid);
	return szStatus;

}

void CCancerPrescriptionOrderIN::ShowDetail(bool bDetail){
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
void CCancerPrescriptionOrderIN::InPhieudieuche(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CReport rpt;
	long nOrderID;

	
	if(!rpt.Init(_T("Reports/HMS/PMS_PHIEUDIEUCHE.RPT")) )
		return;

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
	_T("   hpo_type,") \
	_T("   hpo_orderid     AS orderid,") \
	_T("   hpo_orderstatus,") \
	_T("   hco_cancer_order_id,") \
	_T("   hco_status	   AS status,") \
	_T("   hco_treatidx    AS treatidx,") \
	_T("   hpo_deptid      AS deptid,") \
	_T("   hcr_recordno, ") \
	_T("   HCO_WEIGHT, ") \
	_T("   HCO_HEIGHT, ") \
	_T("   HCO_SBA_METHOD, ") \
	_T("   HCO_CYCLE, ") \
	_T("   HCO_SBA_AREA, ") \
	_T("   HCO_CYCLE_DATE, ") \
	_T("   HCO_ORDER_DATE, ") \
	_T("   HCO_DIAGNOSTIC, ") \
	_T("   HCO_NOTE, ") \
	_T("   treatdiagname, ") \
	_T("   hco_transaction_export_id, ") \
	_T("   CASE") \
	_T("     WHEN hpo_orderstatus='I'") \
	_T("     THEN trunc_date(hpo_approvedate)") \
	_T("     ELSE trunc_date(hpo_orderdate)") \
	_T("   END             AS issuedate,") \
	_T("   hpo_approvedate AS approvedate,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS name,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   HMS_GETSEX(hp_sex)                                 AS sex,") \
	_T("   hd_cardno                                          AS cardno,") \
	_T("   HMS_GetObjectName(hd_object)                       AS objectname,") \
	_T("   hpo_approveby                                      AS approvedby") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_clinical_record") \
	_T(" ON(hd_docno=hcr_docno)") \
	_T(" LEFT JOIN") \
	_T("   (SELECT hco_docno,") \
	_T("     hpo_orderid,") \
	_T("     hpo_orderdate,") \
	_T("     hpo_approvedate,") \
	_T("     hpo_approveby,") \
	_T("     hpo_orderstatus,") \
	_T("     hpo_deptid,") \
	_T("     hpo_ordertype,") \
	_T("     hpo_storage_id,") \
	_T("     hpo_processed,") \
	_T("     hco_cancer_order_id,") \
	_T("     hco_treatidx,") \
	_T("     hco_status,") \
	_T("	 HCO_WEIGHT, ") \
	_T("	 HCO_HEIGHT, ") \
	_T("	 HCO_SBA_METHOD, ") \
	_T("	 HCO_SBA_AREA, ") \
	_T("     HCO_CYCLE, ") \
	_T("	 HCO_CYCLE_DATE, ") \
	_T("	 HCO_ORDER_DATE, ") \
	_T("	 HCO_DIAGNOSTIC, ") \
	_T("	 HCO_NOTE, ") \
	_T("     (SELECT hct_desc as name FROM hms_cancer_treatdiag WHERE hct_cancer_treatdiag_id=hco_cancer_treatdiag_id) as treatdiagname, ") \
	_T("	 hco_transaction_export_id, ") \
	_T("     'I' AS hpo_type") \
	_T("   FROM hms_ipharmaorder") \
	_T("   LEFT JOIN hms_cancer_order ") \
	_T("   ON(hco_docno=hpo_docno AND hco_treatidx=hpo_treatidx) ") \
	_T("   ) otbl") \
	_T(" ON(hco_docno         =hd_docno)") \
	_T(" WHERE hco_docno =%d") \
	_T(" AND hco_treatidx = %ld ") \
	_T(" AND hpo_ordertype   IN('D')") \
	_T(" AND hpo_orderstatus ='A'"), m_nDocNo, m_nTreatIdx);
//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return ;
	}

	tmpStr.Empty();
	//StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	//StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rs.GetValue(_T("docno"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode"), tmpStr);
	rs.GetValue(_T("hco_cancer_order_id"), nOrderID);	
	rpt.GetReportHeader()->SetValue(_T("OrderID"), tmpStr);
	
	
	CString szPatientName;
	rs.GetValue(_T("name"), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	
	rs.GetValue(_T("birthyear"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("HCO_WEIGHT"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Weight"), tmpStr);
	rs.GetValue(_T("HCO_HEIGHT"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Height"), tmpStr);
	rs.GetValue(_T("HCO_SBA_METHOD"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sba_method"), tmpStr);
	rs.GetValue(_T("HCO_SBA_AREA"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sba_aren"), tmpStr);
	rs.GetValue(_T("HCO_CYCLE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cycle"), tmpStr);
	rs.GetValue(_T("HCO_CYCLE_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cycle_date"), tmpStr);
	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("order_date"), tmpStr);
	rs.GetValue(_T("HCO_DIAGNOSTIC"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("diagnstic"), tmpStr);
	rs.GetValue(_T("HCO_CANCER_TREATDIAG_ID"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cancer_treatdiag"), tmpStr);
	rs.GetValue(_T("HCO_NOTE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("note"), tmpStr);

	rs.GetValue(_T("treatdiagname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("treatdiagname"), tmpStr);
	
	rs.GetValue(_T("hcr_recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("recordno"), tmpStr);

	rs.GetValue(_T("objectname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("objectname"), tmpStr);
	
	CString szDate;
	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	long nTransaction_id;
	rs.GetValue(_T("hco_transaction_export_id"), nTransaction_id);

	szSQL.Format(_T(" SELECT *") \
	_T(" FROM hms_cancer_orderline") \
	_T(" LEFT JOIN hms_cancer_orderitem") \
	_T(" ON(hms_cancer_orderitem.hcoi_cancer_order_id = hcol_cancer_order_id") \
	_T(" AND hms_cancer_orderitem.hcoi_cancer_orderline_id                 = hcol_cancer_orderline_id)") \
	_T(" LEFT JOIN m_product_item") \
	_T(" ON(mpi_product_item_id = hcoi_product_item_id)") \
	_T(" LEFT JOIN m_product") \
	_T(" ON(mp_product_id           = mpi_product_id)") \
	_T(" WHERE hcol_cancer_order_id = %ld ") \
	_T(" ORDER BY hcol_index,") \
	_T("   hcol_tenthuoc"), nOrderID);
	_debug(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);
	
	int nCount = rsl.ExecSQL(szSQL);
	int nItem =1;
	CReportSection* rptDetail = rpt.GetDetail(0); 
	while(!rsl.IsEOF()){ 
				
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);	
		rsl.GetValue(_T("hcol_tenthuoc"),tmpStr); 		
		rptDetail->SetValue(_T("2"), tmpStr);	
		rsl.GetValue(_T("hcoi_qtyissue"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rsl.GetValue(_T("hcoi_orderqty"), tmpStr);
		rptDetail->SetValue(_T("3.1"), tmpStr);
	/*	rsl.GetValue(_T("hcoi_dm_qtyissue"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rsl.GetValue(_T("hcoi_dm_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("4.1"), tmpStr);*/
		rsl.GetValue(_T("hcol_madungmoi"), tmpStr);
		
		if(tmpStr == _T("NA"))
		{
			rsl.GetValue(_T("hcoi_dm_qtyissue"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rptDetail->SetValue(_T("5"), _T(""));
		}
		else
		{
			rsl.GetValue(_T("hcoi_dm_qtyissue"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rptDetail->SetValue(_T("4"), _T(""));
		}
		
		rsl.GetValue(_T("hcol_thetich"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rsl.MoveNext();
	}


	rpt.PrintPreview();
}

void CCancerPrescriptionOrderIN::InDonhoatrilieu(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CReport rpt;
	long nOrderID;

	
	if(!rpt.Init(_T("Reports/HMS/PMS_DONHOATRILIEU.RPT")) )
		return;

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
	_T("   hpo_type,") \
	_T("   hpo_orderid     AS orderid,") \
	_T("   hpo_orderstatus,") \
	_T("   hco_cancer_order_id,") \
	_T("   hco_status	   AS status,") \
	_T("   hco_treatidx    AS treatidx,") \
	_T("   hpo_deptid      AS deptid,") \
	_T("   hcr_recordno, ") \
	_T("   HCO_WEIGHT, ") \
	_T("   HCO_HEIGHT, ") \
	_T("   HCO_SBA_METHOD, ") \
	_T("   HCO_CYCLE, ") \
	_T("   HCO_SBA_AREA, ") \
	_T("   HCO_CYCLE_DATE, ") \
	_T("   HCO_ORDER_DATE, ") \
	_T("   HCO_DIAGNOSTIC, ") \
	_T("   HCO_NOTE, ") \
	_T("   treatdiagname, ") \
	_T("   hco_transaction_export_id, ") \
	_T("   CASE") \
	_T("     WHEN hpo_orderstatus='I'") \
	_T("     THEN trunc_date(hpo_approvedate)") \
	_T("     ELSE trunc_date(hpo_orderdate)") \
	_T("   END             AS issuedate,") \
	_T("   hpo_approvedate AS approvedate,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS name,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   HMS_GETSEX(hp_sex)                                 AS sex,") \
	_T("   hd_cardno                                          AS cardno,") \
	_T("   HMS_GetObjectName(hd_object)                       AS objectname,") \
	_T("   hpo_approveby                                      AS approvedby") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_clinical_record") \
	_T(" ON(hd_docno=hcr_docno)") \
	_T(" LEFT JOIN") \
	_T("   (SELECT hco_docno,") \
	_T("     hpo_orderid,") \
	_T("     hpo_orderdate,") \
	_T("     hpo_approvedate,") \
	_T("     hpo_approveby,") \
	_T("     hpo_orderstatus,") \
	_T("     hpo_deptid,") \
	_T("     hpo_ordertype,") \
	_T("     hpo_storage_id,") \
	_T("     hpo_processed,") \
	_T("     hco_cancer_order_id,") \
	_T("     hco_treatidx,") \
	_T("     hco_status,") \
	_T("	 HCO_WEIGHT, ") \
	_T("	 HCO_HEIGHT, ") \
	_T("	 HCO_SBA_METHOD, ") \
	_T("	 HCO_SBA_AREA, ") \
	_T("     HCO_CYCLE, ") \
	_T("	 HCO_CYCLE_DATE, ") \
	_T("	 HCO_ORDER_DATE, ") \
	_T("	 HCO_DIAGNOSTIC, ") \
	_T("	 HCO_NOTE, ") \
	_T("     (SELECT hct_desc as name FROM hms_cancer_treatdiag WHERE hct_cancer_treatdiag_id=hco_cancer_treatdiag_id) as treatdiagname, ") \
	_T("	 hco_transaction_export_id, ") \
	_T("     'I' AS hpo_type") \
	_T("   FROM hms_ipharmaorder") \
	_T("   LEFT JOIN hms_cancer_order ") \
	_T("   ON(hco_docno=hpo_docno AND hco_treatidx=hpo_treatidx) ") \
	_T("   ) otbl") \
	_T(" ON(hco_docno         =hd_docno)") \
	_T(" WHERE hco_docno =%d") \
	_T(" AND hco_treatidx = %ld ") \
	_T(" AND hpo_ordertype   IN('D')") \
	_T(" AND hpo_orderstatus ='A'"), m_nDocNo, m_nTreatIdx);
//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return ;
	}

	tmpStr.Empty();
	//StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	//StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rs.GetValue(_T("docno"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode"), tmpStr);
	rs.GetValue(_T("hco_cancer_order_id"), nOrderID);	
	rpt.GetReportHeader()->SetValue(_T("OrderID"), tmpStr);
	
	
	CString szPatientName;
	rs.GetValue(_T("name"), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	
	rs.GetValue(_T("birthyear"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("HCO_WEIGHT"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Weight"), tmpStr);
	rs.GetValue(_T("HCO_HEIGHT"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Height"), tmpStr);
	rs.GetValue(_T("HCO_SBA_METHOD"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sba_method"), tmpStr);
	rs.GetValue(_T("HCO_SBA_AREA"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sba_aren"), tmpStr);
	rs.GetValue(_T("HCO_CYCLE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cycle"), tmpStr);
	rs.GetValue(_T("HCO_CYCLE_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cycle_date"), tmpStr);
	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("order_date"), tmpStr);
	rs.GetValue(_T("HCO_DIAGNOSTIC"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("diagnstic"), tmpStr);
	rs.GetValue(_T("HCO_CANCER_TREATDIAG_ID"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cancer_treatdiag"), tmpStr);
	rs.GetValue(_T("HCO_NOTE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("note"), tmpStr);

	rs.GetValue(_T("treatdiagname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("treatdiagname"), tmpStr);
	
	rs.GetValue(_T("hcr_recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("recordno"), tmpStr);

	rs.GetValue(_T("objectname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("objectname"), tmpStr);
	
	CString szDate;
	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	
	szSQL.Format(_T(" SELECT hms_cancer_orderline.*,") \
	_T("   hcoi_product_item_id,") \
	_T("   mp_name") \
	_T("   ||' ['") \
	_T("   ||hcoi_qtyorder") \
	_T("   ||']' AS tenbietduoc") \
	_T(" FROM hms_cancer_orderline") \
	_T(" LEFT JOIN hms_cancer_orderitem") \
	_T(" ON(hms_cancer_orderitem.hcoi_cancer_order_id = hcol_cancer_order_id") \
	_T(" AND hms_cancer_orderitem.hcoi_cancer_orderline_id                 = hcol_cancer_orderline_id)") \
	_T(" LEFT JOIN m_product_item") \
	_T(" ON(mpi_product_item_id = hcoi_product_item_id)") \
	_T(" LEFT JOIN m_product") \
	_T(" ON(mp_product_id           = mpi_product_id)") \
	_T(" WHERE hcol_cancer_order_id = %ld ") \
	_T(" ORDER BY hcol_index,") \
	_T("   hcol_tenthuoc"), nOrderID);
	_debug(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);
	
	int nCount = rsl.ExecSQL(szSQL);
	int nItem =1;
	CReportSection* rptDetail = rpt.GetDetail(0); 
	while(!rsl.IsEOF()){ 
		
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);	
		rsl.GetValue(_T("hcol_tenthuoc"),tmpStr); 
		rptDetail->SetValue(_T("2"), tmpStr);
		rsl.GetValue(_T("hcol_donvi"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rsl.GetValue(_T("hcol_lieudung_m2"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rsl.GetValue(_T("hcol_lieudung_bn"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rsl.GetValue(_T("hcol_soluong_linh"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rsl.GetValue(_T("hcol_dungmoi"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rsl.GetValue(_T("hcol_thetich"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rsl.GetValue(_T("hcol_thoigian_sd"),tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rsl.GetValue(_T("tenbietduoc"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rsl.GetValue(_T("hcoi_product_item_id"),tmpStr); 
		rptDetail->SetValue(_T("11"), tmpStr);
		rsl.GetValue(_T("hcol_cancer_orderline_id"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
	
		rsl.MoveNext();
	}

	//long nTransaction_id;
	//rs.GetValue(_T("hco_transaction_export_id"), nTransaction_id);
//
//	szSQL.Format(_T(" SELECT mtl_transactionline_id, ") \
//	_T("   product_code,") \
//	_T("   product_name,") \
//	_T("   product_uomname,") \
//	_T("   mtl_qtyorder  AS product_qtyorder,") \
//	_T("   mtl_qtydelivery  AS product_qtydelivery,") \
//	_T("   product_taxprice,") \
//	_T("   mtl_qtyorder*product_taxprice AS product_amount,") \
//	_T("   product_lotno,") \
//	_T("   product_expdate,") \
//	_T("   product_manufacturename ") \
//	_T(" FROM m_transactionline") \
//	_T(" LEFT JOIN m_productitem_view") \
//	_T(" ON(product_item_id              =mtl_product_item_id)") \
//	_T(" WHERE mtl_transaction_id=%ld and mtl_product_item_id > 0 ") \
//	_T(" ORDER BY mtl_line,") \
//	_T("   product_id,") \
//	_T("   product_vatprice"), nTransaction_id);
//	_debug(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);
//	
//	int nCount = rsl.ExecSQL(szSQL);
//	int nItem =1;
//	CReportSection* rptDetail = rpt.GetDetail(0); 
//	while(!rsl.IsEOF()){ 
//		
//		rptDetail = rpt.AddDetail();
//		tmpStr.Format(_T("%d"), nItem++);
//		rptDetail->SetValue(_T("1"), tmpStr);	
//		rsl.GetValue(_T("product_name"),tmpStr); 
//		rptDetail->SetValue(_T("2"), tmpStr);
//		rsl.GetValue(_T("product_uomname"), tmpStr);
//		rptDetail->SetValue(_T("3"), tmpStr);
//		rsl.GetValue(_T("product_qtyorder"), tmpStr);
//		rptDetail->SetValue(_T("4"), tmpStr);
//		rsl.GetValue(_T("product_qtydelivery"), tmpStr);
//		rptDetail->SetValue(_T("5"), tmpStr);
//		
//		rsl.MoveNext();
//	}

	rpt.PrintPreview();
}

void CCancerPrescriptionOrderIN::OnResizeLayout() {
	//AddResize(&m_wndDrugList, 100, 100);
	AddBottom(&m_wndPrint, 5, true);
	AddBottom(&m_wndExport, 5, true);

}