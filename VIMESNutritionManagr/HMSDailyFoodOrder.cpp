#include "HMSDailyFoodOrder.h"
#include "MainFrm.h"
#include "HMSDailyFoodOrderList.h"
#include "HMSConfirmDialog.h"
#include "ReportDocument.h"
#include "Excel.h"

static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListDeleteItem();
} 

static int _OnOrderListPrintDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListPrintDeliveryDrug();
}
static int	_OnExportOrderDeliveryDrugFnc(CWnd *pWnd){
	return	((CHMSDailyFoodOrder*)pWnd)->OnExportOrderDeliveryDrug();
}
static int _OnOrderListPrintSheetDateFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListPrintSheetDate();
}
static int _OnOrderListPrintSheetpublicityFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListPrintSheetPublicity();
}

static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrder*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 

static int _OnPatientListIssueAllFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListIssueAll();
} 

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListRollbackFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListRollback();
} 

static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrder*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnDrugListAddEntry();
} 

static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnDrugListReturnFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnDrugListReturnDrug();
} 

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnPrintedChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnPrintedChange();
} */
/*static void _OnPrintedSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnPrintedSetfocus();} */ 
/*static void _OnPrintedKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnPrintedKillfocus();
} */
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnPatientNameCheckValue();
} 
static int _OnPrintedCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnPrintedCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnApprovalSelect();
} 

static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintDeliveryDrugsSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnPrintDeliveryDrugsSelect();
} 
static void _OnAddDrugSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnAddDrugSelect();
} 
static void _OnAddAutomaticSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnAddAutomaticSelect();
} 
static int _OnAddHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnAddHMSDailyFoodOrder();
} 
static int _OnEditHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnEditHMSDailyFoodOrder();
} 
static int _OnDeleteHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnDeleteHMSDailyFoodOrder();
} 
static int _OnSaveHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnSaveHMSDailyFoodOrder();
} 
static int _OnCancelHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnCancelHMSDailyFoodOrder();
} 
//CHMSDailyFoodOrder::CHMSDailyFoodOrder(CWnd *pParent)
CHMSDailyFoodOrder::CHMSDailyFoodOrder()
{
	m_nDlgWidth = 1000;
	m_nDlgHeight = 620;
	SetDefaultValues();
	m_szOrderNo.Empty();
}
CHMSDailyFoodOrder::~CHMSDailyFoodOrder(){
}
void CHMSDailyFoodOrder::OnCreateComponents(){	
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 550, 180);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 555, 5, 1020, 410);
	m_wndDrugInformation.Create(this, _T("Food Informations"), 555, 445, 1020, 625);
	m_wndGroupListDrug.Create(this, _T("Food Type List"), 5, 185, 550, 625);
	m_wndOrderNoLabel.Create(this, _T("Order ID"), 10, 30, 140, 55);
	m_wndOrderNo.Create(this,145, 30, 275, 55); 
	m_wndFind.Create(this, _T("&Find"), 825, 415, 925, 440);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 140, 85);
	m_wndOrderDate.Create(this,145, 60, 275, 85); 
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 280, 60, 410, 85);
	m_wndIssueDate.Create(this,415, 60, 545, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 280, 30, 410, 55);
	m_wndStatus.Create(this,415, 30, 545, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 140, 115);
	m_wndNote.Create(this,145, 90, 410, 115); 
	m_wndInpatment.Create(this, 415, 90, 545, 115); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 150, 140, 175);
	m_wndType.Create(this,145, 150, 285, 175);
	m_wndSend.Create(this, _T("&Disconfirm"), 290, 150, 370, 175);
	m_wndApproval.Create(this, _T("&Approval"), 375, 150, 455, 175);
	m_wndPrint.Create(this, _T("&Preview"), 460, 150, 545, 175);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 555, 415, 665, 440);
	m_wndPatientName.Create(this,670, 415, 820, 440); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 140, 145);
	m_wndDept.Create(this, 145, 120, 410, 145);	
	m_wndPrimary.Create(this, _T("Primary"), 415, 120, 545, 145);
	m_wndOrderList.Create(this,10, 210, 545, 620); 
	m_wndPatientList.Create(this,560, 30, 1015, 405); 
	m_wndDrugList.Create(this,560, 470, 1015, 620); 	
	m_wndTotalCount.Create(this,935, 415, 1015, 440); 

	m_wndPrintedLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndPrintedLabel.ShowWindow(SW_HIDE);
	m_wndPrintedLabel.EnableWindow(FALSE);
	m_wndPrinted.Create(this, 0, 0, 0, 0);
	m_wndPrinted.ShowWindow(SW_HIDE);
	m_wndPrinted.EnableWindow(FALSE);
	m_wndAdd.Create(this, _T(""), 0, 0, 0, 0);
	m_wndAdd.ShowWindow(SW_HIDE);
	m_wndAdd.EnableWindow(FALSE);
	m_wndEdit.Create(this, _T(""), 0, 0, 0, 0);
	m_wndEdit.ShowWindow(SW_HIDE);
	m_wndEdit.EnableWindow(FALSE);
	m_wndDelete.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDelete.ShowWindow(SW_HIDE);
	m_wndDelete.EnableWindow(FALSE);
	m_wndSave.Create(this, _T(""), 0, 0, 0, 0);
	m_wndSave.ShowWindow(SW_HIDE);
	m_wndSave.EnableWindow(FALSE);
	m_wndCancel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndCancel.ShowWindow(SW_HIDE);
	m_wndCancel.EnableWindow(FALSE);
	m_wndPrintDeliveryDrugs.Create(this, _T(""), 0, 0, 0, 0);
	m_wndPrintDeliveryDrugs.ShowWindow(SW_HIDE);
	m_wndPrintDeliveryDrugs.EnableWindow(FALSE);
	m_wndAddDrug.Create(this, _T(""), 0, 0, 0, 0);
	m_wndAddDrug.ShowWindow(SW_HIDE);
	m_wndAddDrug.EnableWindow(FALSE);
	m_wndAddAutomatic.Create(this, _T(""), 0, 0, 0, 0);
	m_wndAddAutomatic.ShowWindow(SW_HIDE);
	m_wndAddAutomatic.EnableWindow(FALSE);
}
void CHMSDailyFoodOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFind.ModifyStyle(WS_TABSTOP, 0);
	m_wndOrderNo.SetLimitText(9);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	//m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	//m_wndOrderDate.SetToolTipMessage(_T("Ngay yeu cau khong hop le"));
	m_wndIssueDate.SetReadOnly(TRUE);
	m_wndStatus.SetLimitText(35);
	m_wndNote.SetLimitText(81);
	//m_wndNote.SetCheckValue(true);
	m_wndStatus.SetReadOnly(true);
	m_wndPrinted.SetReadOnly(true);

//	m_wndOrderNo.ModifyStyle(0, ES_NUMBER);

	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 40);	//identify
	m_wndOrderList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);
	m_wndOrderList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndOrderList.InsertColumn(3, _T("S\xE1ng"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(4, _T("Tr\x1B0\x61"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(5, _T("T\x1ED1i"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(6, _T("Qty"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(7, _T("Price"), CFMT_MONEY, 70);
	m_wndOrderList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 80);
	m_wndOrderList.InsertColumn(9, _T("ItemID"), CFMT_TEXT, 0);	
	m_wndOrderList.InsertColumn(10, _T("GroupID"), CFMT_TEXT, 0);
	
	m_wndOrderList.SetSortHeader(false);
	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.GetHeaderControl()->MergeCell(_T("S\x1ED1 su\x1EA5t"), 0, 3, 1, 6, true);
	m_wndOrderList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndPatientList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//orderid
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndPatientList.InsertColumn(3, _T("Object"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(4, _T("Bed"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(5, _T("Date"), CFMT_DATE, 100);
	m_wndPatientList.InsertColumn(6, _T("Status"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndPatientList.InsertColumn(7, _T("OrderNo"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(8, _T("Doctor"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(9, _T("Created By"), CFMT_TEXT, 0);

	m_wndDrugList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndDrugList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);	
	m_wndDrugList.InsertColumn(3, _T("Type"), CFMT_TEXT, 0);	
	m_wndDrugList.InsertColumn(4, _T("SL"), CFMT_MONEY, 40);	
	m_wndDrugList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndDrugList.InsertColumn(7, _T("Orderid"), CFMT_NUMBER, 0);	//product_id
	m_wndDrugList.InsertColumn(8, _T("Itemdi"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndDrugList.InsertColumn(9, _T("Status"), CFMT_TEXT, 0);
	m_wndDrugList.InsertColumn(10, _T("Orderline"), CFMT_TEXT, 0);
	//m_wndDrugList.GetHeaderControl()->SetItemHeight(2);
	
	
	m_feefoodTbl.SetTableName(_T("HMS_FOODORDERSHEET"));
	m_feefoodTbl.AddField(_T("HFOS_ORDERID"), dfLong); 
	m_feefoodTbl.AddField(_T("HFOS_CREATEDBY"), dfText, 15); 
	m_feefoodTbl.AddField(_T("HFOS_CREATEDDATE"), dfDateTime); 
	m_feefoodTbl.AddField(_T("HFOS_UPDATEDBY"), dfText, 15); 
	m_feefoodTbl.AddField(_T("HFOS_UPDATEDDATE"), dfDateTime); 	
	m_feefoodTbl.AddField(_T("HFOS_DEPTID"), dfText, 7); 
	m_feefoodTbl.AddField(_T("HFOS_ORDERTYPE"), dfText, 1);	
	m_feefoodTbl.AddField(_T("HFOS_ORDERDATE"), dfDateTime);
	m_feefoodTbl.AddField(_T("HFOS_ORDERSTATUS"), dfText, 1); 
	m_feefoodTbl.AddField(_T("HFOS_APPROVEDATE"), dfDateTime); 
	m_feefoodTbl.AddField(_T("HFOS_APPROVEBY"), dfText, 32); 
	m_feefoodTbl.AddField(_T("HFOS_SHEETNO"), dfText, 65);
	m_feefoodTbl.AddField(_T("HFOS_DESCRIPTION"), dfText, 254);

}
void CHMSDailyFoodOrder::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.SetWindowText(_T("Order Information"));
	m_wndOrderList.AddEvent(1, _T("Print Daily Food"), _OnOrderListPrintDeliveryDrugFnc);
	//m_wndOrderList.AddEvent(2, _T("Export Delivery Drugs"), _OnExportOrderDeliveryDrugFnc);
	//m_wndOrderList.AddEvent(3, _T("Print Sheet By Date"), _OnOrderListPrintSheetDateFnc);
	////m_wndOrderList.AddEvent(4, _T("Print shelt publicity drugs"), _OnOrderListPrintSheetpublicityFnc);
	//m_wndOrderList.AddEvent(0, _T("-"), NULL);
	//m_wndOrderList.AddEvent(5, _T("View Detail"), _OnOrderListDeleteItemFnc);

	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	
	/*
	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("Issue All"), _OnPatientListIssueAllFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(2, _T("Issue"), _OnPatientListIssueFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(3, _T("DMO_Rollback"), _OnPatientListRollbackFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(4, _T("Delete Patient"), _OnPatientListDeleteItemFnc);
*/
	
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.SetWindowText(_T("Drug List"));
	m_wndDrugList.AddEvent(2, _T("Delete Item"), _OnDrugListDeleteItemFnc, 0, VK_DELETE);

	/*m_wndDrugList.AddEvent(1, _T("Add Item"), _OnDrugListAddEntryFnc, 0, VK_F2);
	m_wndDrugList.AddEvent(0, _T("-"), NULL);
	m_wndDrugList.AddEvent(2, _T("Delete Item"), _OnDrugListDeleteItemFnc, 0, VK_DELETE);
	m_wndDrugList.AddEvent(0, _T("-"), NULL);
	m_wndDrugList.AddEvent(3, _T("Return Item"), _OnDrugListReturnFnc);*/
	
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndIssueDate.SetEvent(WE_CHANGE, _OnIssueDateChangeFnc);
	//m_wndIssueDate.SetEvent(WE_SETFOCUS, _OnIssueDateSetfocusFnc);
	//m_wndIssueDate.SetEvent(WE_KILLFOCUS, _OnIssueDateKillfocusFnc);
	m_wndIssueDate.SetEvent(WE_CHECKVALUE, _OnIssueDateCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndPrinted.SetEvent(WE_CHANGE, _OnPrintedChangeFnc);
	//m_wndPrinted.SetEvent(WE_SETFOCUS, _OnPrintedSetfocusFnc);
	//m_wndPrinted.SetEvent(WE_KILLFOCUS, _OnPrintedKillfocusFnc);
	m_wndPrinted.SetEvent(WE_CHECKVALUE, _OnPrintedCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);

	m_wndAddAutomatic.SetEvent(WE_CLICK, _OnAddAutomaticSelectFnc);

	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPrintDeliveryDrugs.SetEvent(WE_CLICK, _OnPrintDeliveryDrugsSelectFnc);
	m_wndAddDrug.SetEvent(WE_CLICK, _OnAddDrugSelectFnc);

	SetWindowFont(&m_wndTotalCount, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndTotalCount.SetTextColor(RGB(0, 0, 255));
	SetMode(VM_NONE);
}
void CHMSDailyFoodOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_Text(pDX, m_wndDept.GetDlgCtrlID(), m_szDept);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndTotalCount.GetDlgCtrlID(), m_nTotalCount);
	DDX_Text(pDX, m_wndInpatment.GetDlgCtrlID(), m_szInpatment);
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_szType);
	DDX_Check(pDX, m_wndPrimary.GetDlgCtrlID(), m_bPrimary);
}
void CHMSDailyFoodOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT  ") \
		_T("HFOS_ORDERID as orderno, ") \
		_T("HFOS_ORDERDATE as orderdate, ") \
		_T("HFOS_APPROVEDATE as issuedate, ") \
		_T("HFOS_DESCRIPTION as description, ") \
		_T("HFOS_ORDERSTATUS as status, ") \
		_T("HFOS_SHEETNO as sheetNo, ") \
		_T("HFOS_ORDERTYPE AS ORDERTYPE, ") \
		_T("HFOS_DEPTID AS DEPTID, ") \
		_T("HFOS_ISPRIMARY as isprimary, ") \
		_T("hfos_ttlpatient as ttlpatient, ")
		_T("HFOS_CREATEDBY as createdby ") \
		_T("FROM HMS_FOODORDERSHEET ") \
		_T("WHERE HFOS_ORDERID=%ld AND HFOS_ORDERSTATUS IN('S','A')"), 
		m_nOID);
	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("createdby"), m_szCreatedBy);
		rs.GetValue(_T("orderdate"), m_szOrderDate);
		rs.GetValue(_T("issuedate"), m_szIssueDate);
		//m_szOrderDate = m_szOrderTime.Left(10);
		rs.GetValue(_T("description"), m_szNote);
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("orderno"), m_szBatchNo);
		rs.GetValue(_T("sheetNo"), m_szOrderNo);
		rs.GetValue(_T("deptid"), m_szDeptID);
		rs.GetValue(_T("ordertype"), m_szOrderType);

		if(m_szOrderType == _T("F"))
			m_szType.Format(_T("Phi\x1EBFu \x62\xE1o \x103n"));
		else
			m_szType.Format(_T("Phi\x1EBFu \x63\x1EAFt \x103n"));

		m_szDept = pMF->GetDepartmentName(m_szDeptID);
		//m_szOrderNo = m_szBatchNo;
		m_szStatusDesc = pMF->GetStatusString(m_szStatus);
		if(m_szStatus==_T("S"))
			m_szIssueDate.Empty();		
		
		rs.GetValue(_T("ttlpatient"), m_nInpatment);

		CString tmpStr;
		rs.GetValue(_T("isprimary"), tmpStr);
		m_bPrimary = FALSE;
		if(tmpStr == _T("Y"))
		{
			m_bPrimary = TRUE;
		}

		SetMode(VM_VIEW);


		
		OnOrderListLoadData();
		OnPatientListLoadData();

		m_wndDrugList.DeleteAllItems();
		CString szLabel;
		m_wndSend.EnableWindow(true);
		if(m_szStatus == _T("S")){
			m_wndApproval.EnableWindow(true);
			m_wndSend.EnableWindow(true);
		}
		else if(m_szStatus ==_T("A"))
		{			
			m_wndPrint.EnableWindow(true);
			m_wndSend.EnableWindow(false);
			m_wndApproval.EnableWindow(false);
		}		
	}
	else
	{
		SetMode(VM_NONE);
	}


	

	if(m_wndOrderList.GetItemCount() <= 0){
		m_wndSend.EnableWindow(false);
		m_wndPrint.EnableWindow(false);
		//m_wndPrintDeliveryDrugs.EnableWindow(false);
	}

}
void CHMSDailyFoodOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	
	//m_feefoodTbl.SetValue(_T("HFOS_ORDERID"), dfLong); 
	m_feefoodTbl.SetValue(_T("HFOS_CREATEDBY"), pMF->GetCurrentUser()); 
	m_feefoodTbl.SetValue(_T("HFOS_CREATEDDATE"), pMF->GetSysDateTime()); 
	m_feefoodTbl.SetValue(_T("HFOS_UPDATEDBY"), pMF->GetCurrentUser()); 
	m_feefoodTbl.SetValue(_T("HFOS_UPDATEDDATE"), pMF->GetSysDateTime()); 	
	m_feefoodTbl.SetValue(_T("HFOS_DEPTID"), pMF->GetDepartmentID()); 
	m_feefoodTbl.SetValue(_T("HFOS_ORDERTYPE"), _T("F"));	
	m_feefoodTbl.SetValue(_T("HFOS_ORDERDATE"), m_szOrderDate);
	m_feefoodTbl.SetValue(_T("HFOS_ORDERSTATUS"), m_szStatus); 
	//m_feefoodTbl.SetValue(_T("HFOS_APPROVEDATE"), dfDateTime); 
	m_feefoodTbl.SetValue(_T("HFOS_APPROVEBY"), _T("")); 
	m_feefoodTbl.SetValue(_T("HFOS_SHEETNO"), m_szOrderNo); 
	m_feefoodTbl.SetValue(_T("HFOS_DESCRIPTION"), m_szNote);	
	
}
void CHMSDailyFoodOrder::SetDefaultValues(){

	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatus.Empty();
	m_nTotalCount=0;
	m_szNote.Empty();

}
int CHMSDailyFoodOrder::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL('FOODORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndOrderNo.EnableWindow(false);
			m_szOrderDate = pMF->GetSysDate();
			m_wndOrderDate.SetFocus();
			m_szStatus = _T("O");
			m_wndPatientName.EnableWindow(FALSE);
			m_wndOrderList.DeleteAllItems();
			m_wndPatientList.DeleteAllItems();
			m_wndDrugList.DeleteAllItems();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndOrderNo.EnableWindow(false);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndOrderNo.EnableWindow(true);
			m_wndOrderNo.SetNotEmpty(false);
			if(m_szStatus != _T("O")){
				m_wndPrint.EnableWindow(true);
				m_wndPrintDeliveryDrugs.EnableWindow(true);
			}
			m_wndPatientName.EnableWindow(true);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
			m_wndOrderNo.SetNotEmpty(false);
			m_wndOrderNo.EnableWindow(true);
			m_wndOrderList.DeleteAllItems();
			m_wndPatientList.DeleteAllItems();
			m_wndDrugList.DeleteAllItems();
 			break; 
 		}; 
		if(m_szStatus == _T("O")){
			m_wndAddDrug.EnableWindow(true);
		}
		else
		{
			m_wndAddDrug.EnableWindow(false);
			m_wndDelete.EnableWindow(FALSE);
		}
		
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSDailyFoodOrder::OnOrderListDblClick(){
	
} 
void CHMSDailyFoodOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
int CHMSDailyFoodOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyFoodOrder::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy, szWhere;	
	
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;

	if(m_szOrderType == _T("F")){
		szSQL.Format(_T(" SELECT itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   groupid,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   SUM(FoodQtyS)          AS QtyS,  ") \
		_T("   SUM(FoodQtyT)          AS QtyT,  ") \
		_T("   SUM(FoodQtyC)          AS QtyC,  ") \
		_T("   SUM(FoodQty)          AS Qty,  ") \
		_T("   SUM(FoodQty)*unitprice AS amount") \
		_T(" FROM") \
		_T("   (SELECT hfol_itemid AS itemid,") \
		_T("     hfl_medical_code          AS foodid,") \
		_T("     hfl_name          AS foodname,") \
		_T("	 hfol_type		   AS type, ") \
		_T("     hfol_groupid      AS groupid,") \
		_T("     hfl_unit          AS unit,") \
		_T("     hfol_unitprice    AS unitprice,    ") \
		_T("     hfol_qtyorder     AS FoodQty,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'S' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'T' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'C' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC    ") \
		_T("   FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid=hfol_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid        =hfol_itemid)") \
		_T("   WHERE hfo_ordertype ='D'") \
		_T("   AND hfo_reforder_id = %ld") \
		_T("   )") \
		_T(" GROUP BY groupid,") \
		_T("   itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unit,") \
		_T("   unitprice") \
		_T(" ORDER BY foodname,") \
		_T("   unit,") \
		_T("   unitprice"), m_nOID);
	}
	else
	{
	szSQL.Format(_T(" SELECT itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   groupid,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   SUM(FoodQtyS)          AS QtyS,  ") \
		_T("   SUM(FoodQtyT)          AS QtyT,  ") \
		_T("   SUM(FoodQtyC)          AS QtyC,  ") \
		_T("   SUM(FoodQty)          AS Qty,  ") \
		_T("   SUM(FoodQty)*unitprice AS amount") \
		_T(" FROM") \
		_T("   (SELECT hfoc_itemid AS itemid,") \
		_T("     hfl_medical_code          AS foodid,") \
		_T("     hfl_name          AS foodname,") \
		_T("	 hfoc_type		   AS type, ") \
		_T("     hfoc_groupid      AS groupid,") \
		_T("     hfl_unit          AS unit,") \
		_T("     hfoc_unitprice    AS unitprice,    ") \
		_T("     hfoc_qtyorder     AS FoodQty,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'S' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'T' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'C' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC    ") \
		_T("   FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodcancel") \
		_T("   ON(hfo_orderid=hfoc_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid        =hfoc_itemid)") \
		_T("   WHERE hfo_ordertype ='D'") \
		_T("   AND hfoc_retorder_id = %ld") \
		_T("   )") \
		_T(" GROUP BY groupid,") \
		_T("   itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unit,") \
		_T("   unitprice") \
		_T(" ORDER BY foodname,") \
		_T("   unit,") \
		_T("   unitprice"), m_nOID);
	}

_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex = 1;
	double nTotalAmount =0;
	int nItem = 0, nTotalQtyT =0, nTotalQtyC=0, nTotalQtyS=0, nTotalQty =0;	
	CString tmpStr, szStorageName, szProductName;
	while(!rs.IsEOF()){		
		nItem++;
		nTotalQtyS += str2int(rs.GetValue(_T("QtyS")));
		nTotalQtyT += str2int(rs.GetValue(_T("QtyT")));
		nTotalQtyC += str2int(rs.GetValue(_T("QtyC")));
		nTotalQty += str2int(rs.GetValue(_T("Qty")));
		nTotalAmount += str2double(rs.GetValue(_T("amount")));
		m_wndOrderList.AddItems(
			rs.GetValue(_T("foodid")),
			rs.GetValue(_T("foodname")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("QtyS")),
			rs.GetValue(_T("QtyT")),
			rs.GetValue(_T("QtyC")),
			rs.GetValue(_T("Qty")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("groupid")),
			NULL);
		rs.MoveNext();
	}
	if( nItem> 0){
		TranslateString(_T("Total"), tmpStr);
		nItem = m_wndOrderList.AddItems(
			_T(""),
			tmpStr,
			_T(""),
			ToString(nTotalQtyS),
			ToString(nTotalQtyT),
			ToString(nTotalQtyC),
			ToString(nTotalQty),
			_T(""),
			ToString(nTotalAmount), 
			_T(""),
			_T(""),
			NULL);
		m_wndOrderList.SetItemBkColor(nItem, RGB(0, 125, 135), FALSE);
		m_wndOrderList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndOrderList.MergeCell(nItem, 1, nItem, 2, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
	}
	
	m_wndOrderList.EndLoad();
	
	
//_fmsg(_T("%s"), szSQL);
	m_szInpatment.Format(_T("%ld/%ld"), m_nTotalCount, m_nInpatment);

	UpdateData(FALSE);
	return nCount;

}
void CHMSDailyFoodOrder::OnPatientListDblClick(){
	
} 
void CHMSDailyFoodOrder::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szIssueState = m_wndPatientList.GetItemText(nNewItem, 5);
	m_szDoctor = m_wndPatientList.GetItemText(nNewItem, 7);
	m_nDocumentNo = str2long(m_wndPatientList.GetItemText(nNewItem, 1));
	m_nOrderID = str2long(m_wndPatientList.GetItemText(nNewItem, 0));
	m_szPatientOrderDate = m_wndPatientList.GetItemText(nNewItem, 5);
	OnDrugListLoadData();
} 

int CHMSDailyFoodOrder::OnPatientListIssueAll(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	int nMsg = ShowMessage(14);
	if(nMsg == IDNO)
		return 0;
	
	szSQL.Format(_T("SELECT hfso_status as status ") \
		_T("FROM hms_feefoodsheet ") \
		_T("WHERE hfso_orderid=%ld and hfso_ordertype='T' "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);

	if(m_szStatus != _T("A"))
		return -1;


	szSQL.Format(_T("UPDATE hms_feefood ") \
		_T("SET hfo_orderstatus='I', hfo_updatedby='%s', hfo_updateddate=systimestamp ") \
		_T("WHERE hfo_reforder_id=%ld AND hfo_orderstatus in('O','S','A') "),
		pMF->GetCurrentUser(), m_nOID);
	int ret = pMF->ExecSQL(szSQL);
	if(ret >= 0){
		OnPatientListLoadData();
	}
	return 0;
}


int CHMSDailyFoodOrder::OnPatientListIssue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	int nMsg = ShowMessage(15);
	if(nMsg == IDNO)
		return 0;

	szSQL.Format(_T("SELECT hfso_status as status ") \
		_T("FROM hms_feefoodsheet ") \
		_T("WHERE hfso_orderid=%ld and hfso_ordertype='T' "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);


	if(m_szStatus != _T("A"))
		return -1;

	return 0;
}

int CHMSDailyFoodOrder::OnPatientListRollback(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("A"))
		return -1;
	int nMsg = ShowMessage(16);
	if(nMsg == IDNO)
		return 0;

	//szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='A', hfo_updatedby='%s', hfo_updateddate=systimestamp ") \
	//	_T("WHERE hfo_orderid=%ld AND hfo_orderstatus='I' AND hfo_payment<>'P'"),
	//	pMF->GetCurrentUser(), m_nPharmaOID);
	//int ret = pMF->ExecSQL(szSQL);
	//if(ret >= 0){
	//	OnPatientListLoadData();
	//}
	return 0;
}
int CHMSDailyFoodOrder::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	
	
	if(m_wndDrugList.GetItemCount() > 0){
		ShowMessageBox(_T("Ban phai xoa de muc truoc khi xoa benh nhan"));
		return 0;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return -1;
	m_nOID = ToLong(m_wndPatientList.GetItemText(nSel, 6));	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("SELECT hfso_status as status FROM hms_feefoodsheet WHERE hfso_orderid=%ld"), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);

	if(m_szStatus != _T("O"))
		return -1;

	szSQL.Format(_T("DELETE FROM hms_feefood WHERE hfo_orderid = %ld AND hfo_reforder_id=%ld "), m_nOrderID, m_nOID); 
	//_fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		OnPatientListLoadData();
		OnOrderListLoadData();
 	}
	
	return 0;
} 
long CHMSDailyFoodOrder::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	int nCount = 0, nIndex =1;
	int nRank;
	m_wndPatientList.BeginLoad(); 

	if(m_szOrderType == _T("F"))
	{
		szWhere.Format(_T(" and hfo_reforder_id =%ld "), m_nOID);		
		
		szSQL.Format(_T(" SELECT distinct hfo_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, hp_rank,") \
		_T(" 	hfo_roomid||'.'||hfo_bedid as bedid,") \
		_T(" 	 trunc(hfo_orderdate) as orderdate, hfo_createdby, HMS_GETOBJECTNAME(HFO_OBJECT_ID) as ObjectName ") \
		_T(" FROM hms_feefood ") \
		_T(" LEFT JOIN hms_patient ON(hfo_patientno=hp_patientno)") \
		_T(" WHERE hfo_ordertype ='D' %s ORDER BY docno,orderdate "), szWhere);
	}
	else
	{
		szWhere.Format(_T(" and hfoc_retorder_id =%ld "), m_nOID);			
			
			szSQL.Format(_T(" SELECT distinct hfo_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, hp_rank,") \
		_T(" 	hfo_roomid||'.'||hfo_bedid as bedid,") \
		_T(" 	trunc_date(hfo_orderdate) as orderdate, hfo_createdby, HMS_GETOBJECTNAME(HFO_OBJECT_ID) as ObjectName ") \
		_T(" FROM hms_feefood ") \
		_T(" LEFT JOIN hms_feefoodcancel") \
		_T(" ON(hfo_orderid=hfoc_orderid)") \
		_T(" LEFT JOIN hms_patient ON(hfo_patientno=hp_patientno)") \
		_T(" WHERE hfo_ordertype ='D' %s ORDER BY docno,orderdate "), szWhere);
	}

	_fmsg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	long nDocumentNo;
	int n = -1;
		m_nTotalCount = 0;
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString szNewLine, szOldLine;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	while(!rs.IsEOF()){
		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

			CString szPatientName;
			
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);
			if(szShortName != m_szPatientName)
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

		rs.GetValue(_T("docno"), nDocumentNo);
		tmpStr.Format(_T("%d"), nIndex++);

		int nItem = m_wndPatientList.AddItems(
			rs.GetValue(_T("orderid")),
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("ObjectName")),
			rs.GetValue(_T("bedid")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("doctor")), 
			rs.GetValue(_T("createdby")), 
			NULL);		
		
		szNewLine.Format(_T("%d"), nDocumentNo);
		if(szNewLine !=szOldLine && !szNewLine.IsEmpty()){
			m_nTotalCount++;
			szOldLine = szNewLine;
		}

		nRank = ToInt(rs.GetValue(_T("hp_rank")));
		if ((nRank >= 15 && nRank <= 18) || (nRank >= 22 && nRank <= 24)) {
			m_wndPatientList.SetItemBkColor(nItem, RGB(0, 153, 51), FALSE);
			m_wndPatientList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	if(n < 0)
		n = m_wndPatientList.GetItemCount();
	m_wndPatientList.SetCurSel(n);

	m_szInpatment.Format(_T("%ld/%ld"), m_nTotalCount, m_nInpatment);

	UpdateData(false);
	return nCount;
}
void CHMSDailyFoodOrder::OnDrugListDblClick(){
	
} 
void CHMSDailyFoodOrder::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 

int CHMSDailyFoodOrder::OnDrugListAddEntry(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 

int CHMSDailyFoodOrder::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szItemID, szType, szNameFee; 
	CRecord rs(&pMF->m_db);

	long nIDX;
	long nOrderID;
	long nOrderLine;
	if(m_szStatus != _T("A"))
		return -1;
	
	/*if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
		return -1;
	}*/

	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return -1;	
	
	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = 0;
	

	nIDX = str2long(m_wndDrugList.GetItemText(nSel, 0));
	szNameFee = m_wndDrugList.GetItemText(nSel, 1);
	szType = m_wndDrugList.GetItemText(nSel, 3);
	nOrderID = str2long(m_wndDrugList.GetItemText(nSel, 7));
	szItemID = m_wndDrugList.GetItemText(nSel, 8);
	nOrderLine = str2long(m_wndDrugList.GetItemText(nSel, 10));
	
	szSQL.Format(_T(" SELECT COUNT(*) FROM hms_fee WHERE hfe_docno = %ld AND hfe_orderid = %ld AND hfe_orderline = %ld AND hfe_itemid='%s' AND hfe_type = 'F' AND hfe_status IN('A','P') "), m_nDocumentNo, nOrderID, nOrderLine, szItemID);
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		szSQL.Format(_T("DELETE FROM hms_feefoodline WHERE hfol_orderid=%ld AND hfol_orderlineid = %ld AND hfol_itemid='%s' AND hfol_type ='%s'"), nOrderID, nOrderLine, szItemID, szType); 
		//_msg(_T("%s"), szSQL);
 		int res =  pMF->ExecSQL(szSQL); 
		if(res > 0){
			m_wndDrugList.DeleteItem(nSel);
			ret += res;

			CString szEvent, szDesc;
			szEvent.Format(_T("Delete"));
			szDesc.Format(_T("\x58\xF3\x61 phi\x1EBFu \x103n \x111\xE3 \x64uy\x1EC7t: %ld, %ld [%s]"), m_nDocumentNo, nOrderID, szNameFee);
			pMF->SystemLog(szEvent, szDesc);
		}
	}
	else
	{
		if(ShowMessageBox(_T("M\x1EE5\x63 ph\xED \x111\xE3 th\x61nh to\xE1n. Kh\xF4ng th\x1EC3 \x78\xF3\x61 \x111\x1B0\x1EE3\x63!"), MB_ICONERROR|MB_OK)) ;
			return -1;
	}
	szSQL.Format(_T("SELECT COUNT(*) FROM hms_feefoodline WHERE hfol_orderid=%ld "), nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		szSQL.Format(_T("DELETE FROM hms_feefood WHERE hfo_orderid=%ld "), nOrderID);
		pMF->ExecSQL(szSQL);
	}

 	if(ret >= 0){		
		if(m_wndDrugList.GetItemCount() <=0){						
			OnOrderListLoadData();
		}
 	}
	return 0;
} 
int CHMSDailyFoodOrder::OnDrugListReturnDrug(){ 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szItemID, szType; 
	CRecord rs(&pMF->m_db);

	long nIDX;
	long nOrderID;
	if(m_szStatus == _T("O"))
		return -1;
	
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
		return -1;
	}

	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return -1;
	
	
	
 	if(ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n h\x1EE7y su\x1EA5t \x103n \x63ho \x62\x1EC7nh nh\xE2n kh\xF4ng?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = 0;
	

	nIDX = str2long(m_wndDrugList.GetItemText(nSel, 0));
	szType = m_wndDrugList.GetItemText(nSel, 3);
	nOrderID = str2long(m_wndDrugList.GetItemText(nSel, 7));
	szItemID = m_wndDrugList.GetItemText(nSel, 8);
	

	szSQL.Format(_T("UPDATE hms_feefoodline  SET hfe_refstatus ='C' WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s' "), nOrderID, szItemID,szType); 
	_fmsg(_T("%s"), szSQL);
 	int res =  pMF->ExecSQL(szSQL);	
 	if(ret >= 0){
		OnOrderListLoadData();
 	}
	return 0;
} 
long CHMSDailyFoodOrder::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0, nIndex=1;

	if(m_szOrderType == _T("F"))
	{
		szSQL.Format(_T(" SELECT hfl_medical_code AS idx,") \
		_T("   hfol_orderid   AS orderid,") \
		_T("   hfol_orderlineid   AS orderline,") \
		_T("   hfo_orderstatus, hfe_refstatus,") \
		_T("   hfl_feeid                                           AS feeid,") \
		_T("   hfl_name                                            AS name,") \
		_T("   hfol_type                                           AS type,") \
		_T("   hfl_unit                                            AS unit,") \
		_T("   hfol_unitprice                                      AS unitprice,") \
		_T("   SUM(hfol_qtyorder)                                  AS qtyorder,") \
		_T("   SUM(hfol_qtyissue -hfol_qtyreverse)                 AS qtyissue,") \
		_T("   SUM((hfol_qtyissue-hfol_qtyreverse)*hfol_unitprice) AS amount") \
		_T(" FROM hms_feefood") \
		_T(" LEFT JOIN hms_feefoodline") \
		_T(" ON(hfol_orderid=hfo_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfol_itemid          =hfl_feeid)") \
		_T(" WHERE hfo_docno         =%ld") \
		_T(" AND (hfol_retorder_id   =%ld OR hfol_retorder_id = 0)") \
		_T(" AND trunc(hfo_orderdate)=to_date('%s', 'yyyy/mm/dd')") \
		_T(" GROUP BY hfol_orderid,") \
		_T("   hfol_orderlineid, ") \
		_T("   hfo_orderstatus,") \
		_T("   hfl_medical_code,") \
		_T("   hfl_feeid,") \
		_T("   hfl_name,") \
		_T("   hfl_unit,") \
		_T("   hfol_type,") \
		_T("   hfol_unitprice, hfe_refstatus") \
		_T(" ORDER BY hfol_orderid,") \
		_T("   hfl_medical_code,") \
		_T("   hfl_name,") \
		_T("   hfl_unit "), m_nDocumentNo,  m_nOID, m_szPatientOrderDate.Left(10));
	}
	else
	{
				szSQL.Format(_T(" SELECT hfl_medical_code AS idx,") \
		_T("   hfoc_orderid   AS orderid,") \
		_T("   hfoc_orderlineid   AS orderline,") \
		_T("   hfo_orderstatus, hfe_refstatus,") \
		_T("   hfl_feeid                                           AS feeid,") \
		_T("   hfl_name                                            AS name,") \
		_T("   hfoc_type                                           AS type,") \
		_T("   hfl_unit                                            AS unit,") \
		_T("   hfoc_unitprice                                      AS unitprice,") \
		_T("   SUM(hfoc_qtyorder)                                  AS qtyorder,") \
		_T("   SUM(hfoc_qtyissue -hfoc_qtyreverse)                 AS qtyissue,") \
		_T("   SUM((hfoc_qtyissue-hfoc_qtyreverse)*hfoc_unitprice) AS amount") \
		_T(" FROM hms_feefood") \
		_T(" LEFT JOIN hms_feefoodcancel") \
		_T(" ON(hfoc_orderid=hfo_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfoc_itemid          =hfl_feeid)") \
		_T(" WHERE hfo_docno         =%ld") \
		_T(" AND (hfoc_retorder_id    =%ld OR hfoc_retorder_id = 0)") \
		_T(" AND trunc(hfo_orderdate)=to_date('%s', 'yyyy/mm/dd')") \
		_T(" GROUP BY hfoc_orderid,") \
		_T("   hfoc_orderlineid, ") \
		_T("   hfo_orderstatus,") \
		_T("   hfl_medical_code,") \
		_T("   hfl_feeid,") \
		_T("   hfl_name,") \
		_T("   hfl_unit,") \
		_T("   hfoc_type,") \
		_T("   hfoc_unitprice, hfe_refstatus") \
		_T(" ORDER BY hfoc_orderid,") \
		_T("   hfl_medical_code,") \
		_T("   hfl_name,") \
		_T("   hfl_unit, hfoc_type DESC "), m_nDocumentNo,  m_nOID, m_szPatientOrderDate.Left(10));

	}
//
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	float nQtyOrder, nQtyIssue;
	CString szStatus;
	while(!rs.IsEOF()){
		rs.GetValue(_T("hfe_refstatus"), szStatus);
		nItem = m_wndDrugList.AddItems(
			rs.GetValue(_T("idx")),			
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 			
			rs.GetValue(_T("type")), 
			rs.GetValue(_T("qtyissue")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("feeid")),
			szStatus,
			rs.GetValue(_T("orderline")),
			NULL);

		if(szStatus == _T("C")){
			m_wndDrugList.SetItemBkColor(nItem, RGB(200, 128, 0), false);
			m_wndDrugList.SetItemTextColor(nItem, COLOR_WHITE, false);
		}

		rs.MoveNext();	
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
}
/*void CHMSDailyFoodOrder::OnOrderNoChange(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderNoSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderNoKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnOrderNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(pMF->m_UserInfo.su_deptid == _T("PTTYC"))
	{
		szWhere.Format(_T(" and hfos_deptid='PTTYC' "));
	}
	else
		szWhere.Format(_T(" and hfos_deptid<> 'PTTYC' "));


	if(GetMode() == VM_VIEW || GetMode() == VM_NONE){
		szSQL.Format(_T("SELECT HFOS_ORDERID ") \
			_T("FROM HMS_FOODORDERSHEET ") \
			_T("WHERE HFOS_SHEETNO='%s'"), 
			m_szOrderNo);
		rs.ExecSQL(szSQL);
_tprintf(_T("\r\n%s"), szSQL);
		if(rs.GetRecordCount() <=0)
		{

			m_wndOrderNo.SetToolTipMessage(_T("Order identify not found"));
			SetMode(VM_NONE);
			m_wndOrderNo.SetFocus();
			
			return -1;			
		}
		rs.GetValue(_T("HFOS_ORDERID"), m_nOID);
		if(m_nOID > 0)
		{
			GetDataToScreen();
			m_wndOrderNo.SetFocus();
		}
		return 1;
	}
	return 0;
} 
void CHMSDailyFoodOrder::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CString szFromDate, szToDate;
	OnOrderDateCheckValue();	
} 
/*void CHMSDailyFoodOrderDialog::OnPatientNameChange(){
	
} */
/*void CHMSDailyFoodOrderDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDailyFoodOrderDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnPatientNameCheckValue(){
	OnPatientListLoadData();
	return 0;
} 

/*void CHMSDailyFoodOrder::OnOrderDateChange(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderDateKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnOrderDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	
	if(n < -3 || n > 3)
		return -1;
	return 0;
} 
/*void CHMSDailyFoodOrder::OnIssueDateChange(){
	
} */
/*void CHMSDailyFoodOrder::OnIssueDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnIssueDateKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnIssueDateCheckValue(){
	return 0;
} 

/*void CHMSDailyFoodOrder::OnStatusChange(){
	
} */
/*void CHMSDailyFoodOrder::OnStatusSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnStatusKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSDailyFoodOrder::OnPrintedChange(){
	
} */
/*void CHMSDailyFoodOrder::OnPrintedSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnPrintedKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnPrintedCheckValue(){
	return 0;
} 
/*void CHMSDailyFoodOrder::OnNoteChange(){
	
} */
/*void CHMSDailyFoodOrder::OnNoteSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnNoteKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnNoteCheckValue(){
	return 0;
} 
void CHMSDailyFoodOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSDailyFoodOrder();
	
} 
void CHMSDailyFoodOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szStatus;
	CString szLabel, szSendOrderBy,szSendByComfirm;

	szSQL.Format(_T("SELECT hfos_orderstatus as status ") \
		_T("FROM hms_foodordersheet ") \
		_T("WHERE hfos_orderid=%ld "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	rs.GetValue(_T("status"), szStatus);
	_tprintf(_T("%s"), szStatus);

	if( szStatus == _T("S"))
	{
		pMF->BeginTransaction();
		szSQL.Format(_T("UPDATE hms_foodordersheet SET hfos_updateddate=sysdate,hfos_updatedby='%s', ") \
			_T("hfos_approveby='%s',hfos_orderstatus='O' ") \
			_T("WHERE hfos_orderid=%ld AND hfos_orderstatus='S' "), 
			pMF->GetCurrentUser(),szSendOrderBy, m_nOID);
		pMF->ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
		szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='O' ") \
			_T("WHERE hfo_reforder_id=%ld and hfo_ordertype='D' "), m_nOID);		
	//_msg(_T("%s"), szSQL);
		pMF->ExecSQL(szSQL);
		pMF->Commit();
	}

	GetDataToScreen();

}
void CHMSDailyFoodOrder::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szStatus;
	CString szLabel, szSendOrderBy,szSendByComfirm;
	if(m_wndOrderList.GetItemCount() <= 0)
		return;

	/*if(!pMF->CheckPermission(_T("11.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}*/

	szSendByComfirm.Empty();
	szSendOrderBy.Empty();
	pMF->m_bConfirm = true;
	if(pMF->m_bConfirm)
	{
		CHMSConfirmDialog dlg;
		//dlg.m_szDoctor = pMF->m_szDoctor;		
		dlg.m_szDoctor.Empty();
		if(dlg.DoModal() != IDOK)
			return;
		szSendOrderBy = dlg.m_szDoctor;
	}

	szSQL.Format(_T("SELECT hfos_orderstatus as status ") \
		_T("FROM hms_foodordersheet ") \
		_T("WHERE hfos_orderid=%ld "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	rs.GetValue(_T("status"), szStatus);
	_tprintf(_T("%s"), szStatus);
	if(szStatus == _T("S"))
	{
		pMF->BeginTransaction();
		if(m_szOrderType == _T("F"))
		{
			szSQL.Format(_T("UPDATE hms_foodordersheet SET hfos_updateddate=CURRENT_TIMESTAMP,hfos_updatedby='%s', hfos_approveby='%s',") \
				_T("hfos_approvedate=CURRENT_TIMESTAMP,hfos_orderstatus='A' ") \
				_T("WHERE hfos_orderid=%ld AND hfos_orderstatus='S' "), 
				pMF->GetCurrentUser(),szSendOrderBy, m_nOID);
			pMF->ExecSQL(szSQL);
	_tprintf(_T("%s"), szSQL);
			szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='A', hfo_updateddate=CURRENT_TIMESTAMP, hfo_approvedate=CURRENT_TIMESTAMP,hfo_updatedby='%s',hfo_approveby='%s' ") \
				_T("WHERE hfo_reforder_id=%ld and hfo_ordertype='D' "), pMF->GetCurrentUser(),szSendOrderBy,m_nOID);
			pMF->ExecSQL(szSQL);
		}
		else
		{
			szSQL.Format(_T("HMS_FOODORDER_APPROVA_CANCEL(%ld,'%s','%s')"), m_nOID,_T(""), _T("F"));		
			_tprintf(_T("%s"), szSQL);
			int ret = str2long(pMF->ExecDML(szSQL));
			if(ret > 0){
				szSQL.Format(_T("UPDATE hms_foodordersheet SET hfos_updateddate=CURRENT_TIMESTAMP,hfos_updatedby='%s', hfos_approveby='%s',") \
				_T("hfos_approvedate=CURRENT_TIMESTAMP,hfos_orderstatus='A' ") \
				_T("WHERE hfos_orderid=%ld AND hfos_orderstatus='S' "), 
				pMF->GetCurrentUser(),szSendOrderBy, m_nOID);
				pMF->ExecSQL(szSQL);
				_tprintf(_T("%s"), szSQL);
			}
		}

		pMF->Commit();
	}	

	GetDataToScreen();
} 
void CHMSDailyFoodOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderDate;

	if(m_szStatus == _T("O"))
	{
		ShowMessageBox(_T("Phi\x1EBFu tr\x1EA1ng th\xE1i \x111\x61ng m\x1EDF. \x42\x1EA1n ph\x1EA3i \x78\xE1\x63 nh\x1EADn g\x1EEDi phi\x1EBFu"));
		return;
	}
	szOrderDate.Empty();
	if(m_szOrderType == _T("F")){
		szSQL.Format(_T("SELECT DISTINCT trunc(hfo_orderdate) as orderdate ") \
			_T(" FROM hms_feefood ") \
			_T(" WHERE hfo_reforder_id =%d ") \
			_T(" ORDER BY  trunc(hfo_orderdate)"), m_nOID);

		rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			rs.GetValue(_T("orderdate"), szOrderDate);
			szOrderDate = szOrderDate.Left(10);
			OnPrintDeliverySummery(m_nOID, szOrderDate);
			OnPrintDelivery(m_nOID, szOrderDate);
			
			rs.MoveNext();
		}
	}
	else
	{
		OnPrintDeliverySummery(m_nOID, szOrderDate);
		OnPrintDelivery(m_nOID, szOrderDate);
	}
	
} 


int CHMSDailyFoodOrder::OnOrderListPrintSheetPublicity(){
	return 0;	
}
int CHMSDailyFoodOrder::OnOrderListPrintSheetDate(){
	return 0;
}
int CHMSDailyFoodOrder::OnAddHMSDailyFoodOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

	if(!pMF->CheckPermission(_T("11.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDailyFoodOrder::OnEditHMSDailyFoodOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("11.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	SetMode(VM_EDIT);

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_feefood WHERE hfo_reforder_id= %ld "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndOrderDate.EnableWindow(false);
		m_wndNote.SetFocus();
	}
 	
	return 0;  
}
int CHMSDailyFoodOrder::OnDeleteHMSDailyFoodOrder(){
 	if(GetMode() != VM_VIEW || m_szStatus != _T("O")) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 


	if(!pMF->CheckPermission(_T("11.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
	}

	if(m_wndOrderList.GetItemCount() > 0)
	{
		ShowMessageBox(_T("Ban phai xoa thuoc cua cac benh nhan truoc khi xoa phieu."));
		return -1;
	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	
	szSQL.Format(_T("DELETE FROM hms_foodordersheet WHERE hfos_orderid = %ld AND HFOS_ORDERSTATUS = 'O'"), m_nOID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		m_wndPatientList.DeleteAllItems();
		m_wndDrugList.DeleteAllItems();
		m_wndOrderList.DeleteAllItems();
 		SetMode(VM_NONE); 
 	}
	return 0;
}
int CHMSDailyFoodOrder::OnSaveHMSDailyFoodOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_NEXTSEQUENCE('M_TRANSACTION_ID_ASQ') "));
		m_nOID = str2long(pMF->ExecDML(szSQL));	
		if(m_nOID <=0) return -1;		
		m_feefoodTbl.SetValue(_T("HFOS_ORDERID"), m_nOID);
 		szSQL = m_feefoodTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE HFOS_ORDERID=%ld "), m_nOID); 
 		szSQL = m_feefoodTbl.GetUpdateSQL(_T("hfos_createdby, hfos_createddate,hfos_approveddate,hfos_orderstatus"));
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 	
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW); 
		}
		else
		{
			GetDataToScreen();
			SetMode(VM_VIEW); 
			m_wndAddDrug.SetFocus();
		}
 		
		
 	} 
 	return m_nOID; 
 	return 0; 
}
void CHMSDailyFoodOrder::OnAddAutomaticSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	
} 

int CHMSDailyFoodOrder::OnCancelHMSDailyFoodOrder(){
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
int CHMSDailyFoodOrder::OnHMSDailyFoodOrderListLoadData(){
	return 0;
}


void CHMSDailyFoodOrder::RefreshData(){
	OnOrderListLoadData();
	OnPatientListLoadData();
}

void CHMSDailyFoodOrder::LoadDrugList(long nID){
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++){
		m_nOID = ToLong(m_wndPatientList.GetItemText(i, 6));
		if(m_nOID = nID)
		{
			m_wndPatientList.SetCurSel(i);
			break;
		}
	}
}
void CHMSDailyFoodOrder::OnPrintDeliverySummery(long nTransactionID, LPCTSTR lpszOrderDate){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);	
	if(m_szOrderType == _T("F")){
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERSUMMERY.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERSUMMERYC.RPT")) )
		return;
	}

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), m_szDept);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(lpszOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("SheetNo"), m_szOrderNo);
	//Page Header
	if(m_szOrderType == _T("F"))
	{
		szSQL.Format(_T(" SELECT ") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unitprice, ") \
		_T("   SUM(FoodQtyS/2) AS FoodQtyS,") \
		_T("   SUM(FoodQtyT/2) AS FoodQtyT,") \
		_T("   SUM(FoodQtyC/2) AS FoodQtyC,") \
		_T("   SUM(QUAN/2) AS QUAN,") \
		_T("   SUM(BAOHIEM/2) AS BAOHIEM,") \
		_T("   SUM(DICHVU/2) AS DICHVU,") \
		_T("   SUM(CHINHSACH/2) AS CHINHSACH,") \
		_T("   SUM(HUUTRI/2) AS HUUTRI,") \
		_T("   SUM(BAN/2) AS BAN,") \
		_T("   SUM((BAN+BAOHIEM+QUAN+DICHVU+CHINHSACH+HUUTRI)/2) AS TONG ") \
		_T(" FROM") \
		_T("   ( SELECT DISTINCT hfo_docno AS docno,") \
		_T("     hfl_medical_code                 AS foodid,") \
		_T("     hfl_name				   AS foodname,") \
		_T("	 hfol_unitprice			   AS unitprice, ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'S' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'T' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'C' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC,   ") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(2,4,5,6,9,11,12)") \
		_T("       THEN hfol_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS BAOHIEM,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='S'") \
		_T("       THEN hfol_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS DICHVU,") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(1,10)") \
		_T("       THEN hfol_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS QUAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='P'") \
		_T("       THEN hfol_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS CHINHSACH,") \
		_T("     CASE") \
		_T("       WHEN ho_id ='8'") \
		_T("       THEN hfol_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS BAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='H'") \
		_T("       THEN hfol_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS HUUTRI") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_feefood") \
		_T("   ON(hfo_docno=hd_docno)") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid=hfol_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfol_itemid=hfl_feeid)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON(htr_docno =hfo_docno") \
		_T("   AND htr_idx  =hfo_refidx)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
		_T("   WHERE hfo_reforder_id    =%ld") \
		_T("   AND trunc(hfo_orderdate) = to_date('%s', 'yyyy/mm/dd') AND hfo_orderstatus ='S'") \
		_T("   )") \
		_T(" GROUP BY foodid,") \
		_T("   foodname,") \
		_T("   unitprice ") \
		_T(" ORDER BY ") \
		_T("   foodid"), nTransactionID, lpszOrderDate);
	}
	else
	{
		szSQL.Format(_T(" SELECT ") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unitprice, ") \
		_T("   SUM(FoodQtyS/2) AS FoodQtyS,") \
		_T("   SUM(FoodQtyT/2) AS FoodQtyT,") \
		_T("   SUM(FoodQtyC/2) AS FoodQtyC,") \
		_T("   SUM(QUAN/2) AS QUAN,") \
		_T("   SUM(BAOHIEM/2) AS BAOHIEM,") \
		_T("   SUM(DICHVU/2) AS DICHVU,") \
		_T("   SUM(CHINHSACH/2) AS CHINHSACH,") \
		_T("   SUM(HUUTRI/2) AS HUUTRI,") \
		_T("   SUM(BAN/2) AS BAN,") \
		_T("   SUM((BAN+BAOHIEM+QUAN+DICHVU+CHINHSACH+HUUTRI)/2) AS TONG ") \
		_T(" FROM") \
		_T("   ( SELECT DISTINCT hfo_docno AS docno,") \
		_T("     hfl_medical_code                 AS foodid,") \
		_T("     hfl_name				   AS foodname,") \
		_T("	 hfoc_unitprice			   AS unitprice, ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'S' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'T' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'C' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC,   ") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(2,4,5,6,9,11,12)") \
		_T("       THEN hfoc_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS BAOHIEM,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='S'") \
		_T("       THEN hfoc_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS DICHVU,") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(1,10)") \
		_T("       THEN hfoc_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS QUAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='P'") \
		_T("       THEN hfoc_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS CHINHSACH,") \
		_T("     CASE") \
		_T("       WHEN ho_id ='8'") \
		_T("       THEN hfoc_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS BAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='H'") \
		_T("       THEN hfoc_qtyorder ") \
		_T("       ELSE 0") \
		_T("     END AS HUUTRI") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_feefood") \
		_T("   ON(hfo_docno=hd_docno)") \
		_T("   LEFT JOIN hms_feefoodcancel") \
		_T("   ON(hfo_orderid=hfoc_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfoc_itemid=hfl_feeid)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON(htr_docno =hfo_docno") \
		_T("   AND htr_idx  =hfo_refidx)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
		_T("   WHERE hfoc_retorder_id    =%ld") \
		_T("   )") \
		_T(" GROUP BY foodid,") \
		_T("   foodname,") \
		_T("   unitprice ") \
		_T(" ORDER BY ") \
		_T("   foodid"), nTransactionID);
	}
	
	_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	CReportSection* rptDetail;
	CString szItemID;
	long nItem =0;
	double nBH, nDV, nCS, nQUAN, nHUU, nBAN, nTotal, nTotal1, nQty;
	double nTotalBH, nTotalDV, nTotalCS, nTotalQUAN,nTotalBAN, nTotalHUU, nTrua=0, nToi=0, nSang=0;
	double nPrice =0, nAmount=0, nTotalAmount =0, nTotalAmount1 =0;

	int i = 1;

	nTrua = nToi =0;
	nBH=nDV= nCS= nQUAN=nHUU=nBAN=nTotal=nTotal1 =0;
	nTotalBH=nTotalDV=nTotalCS=nTotalQUAN=nTotalBAN=nTotalHUU=0;

	CString szNewLine, szOldLine;
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();
		nItem++;		
		tmpStr.Format(_T("%ld"), nItem);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("foodname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);		
		rs.GetValue(_T("foodid"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("foodqtys"), tmpStr);
		rptDetail->SetValue(_T("4"),tmpStr);
		rs.GetValue(_T("foodqtyt"), tmpStr);
		rptDetail->SetValue(_T("5"),tmpStr);
		rs.GetValue(_T("foodqtyc"), tmpStr);
		rptDetail->SetValue(_T("6"),tmpStr);
		rs.GetValue(_T("UnitPrice"), tmpStr);
		rptDetail->SetValue(_T("7"),tmpStr);

		rs.GetValue(_T("QUAN"), nQUAN);
		tmpStr.Format(_T("%0.1f"), nQUAN);		
		nTotalQUAN += nQUAN;
		rptDetail->SetValue(_T("8"),tmpStr);

		rs.GetValue(_T("HUUTRI"), nHUU);
		tmpStr.Format(_T("%0.1f"), nHUU);		
		nTotalHUU += nHUU;
		rptDetail->SetValue(_T("9"),tmpStr);		

		rs.GetValue(_T("CHINHSACH"), nCS);
		tmpStr.Format(_T("%0.1f"), nCS);		
		nTotalCS +=nCS;
		rptDetail->SetValue(_T("10"),tmpStr);
		
		rs.GetValue(_T("BAOHIEM"), nBH);
		tmpStr.Format(_T("%0.1f"), nBH);
		nTotalBH += nBH;		
		rptDetail->SetValue(_T("11"),tmpStr);
		
		rs.GetValue(_T("DICHVU"), nDV);
		tmpStr.Format(_T("%0.1f"), nDV);
		nTotalDV += nDV;
		
		rptDetail->SetValue(_T("12"),tmpStr);
		
		rs.GetValue(_T("BAN"), nBAN);
		tmpStr.Format(_T("%0.1f"), nBAN);
		nTotalBAN += nBAN;		
		rptDetail->SetValue(_T("13"),tmpStr);
		
		rs.GetValue(_T("TONG"), nQty);		
		tmpStr.Format(_T("%0.1f"), nQty);
		nTotal += nQty;
		rptDetail->SetValue(_T("14"),tmpStr);

		rs.GetValue(_T("UnitPrice"), nPrice);
		nAmount = (nPrice*nQty)*2;
		nTotalAmount += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("15"),tmpStr);
		
		rs.MoveNext();
	}
	
		
	if(nTotalAmount + nTotalAmount1 > 0){
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s4"), nSang);
		rptDetail->SetValue(_T("s5"), nTrua);
		rptDetail->SetValue(_T("s6"), nToi);
		rptDetail->SetValue(_T("s8"), nTotalQUAN);
		rptDetail->SetValue(_T("s9"), nTotalHUU);
		rptDetail->SetValue(_T("s10"), nTotalCS);
		rptDetail->SetValue(_T("s11"), nTotalBH);
		rptDetail->SetValue(_T("s12"), nTotalDV);
		rptDetail->SetValue(_T("s13"), nTotalBAN);
		rptDetail->SetValue(_T("s14"), nTotal);
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s15"), tmpStr);
	}

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
//	rs.GetValue(_T("doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}

	rpt.PrintPreview();
}

void CHMSDailyFoodOrder::OnPrintDelivery(long nTransactionID, LPCTSTR lpszOrderDate){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	if(m_szOrderType == _T("F"))
	{
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDER.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERC.RPT")) )
			return;
	}

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), m_szDept);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(lpszOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("SheetNo"), m_szOrderNo);
	//Page Header

	szSQL.Format(_T("SELECT hfos_isprimary, hfos_ttlpatient ") \
		_T(" FROM hms_foodordersheet ") \
		_T(" WHERE hfos_orderid=%ld "), nTransactionID);
	CRecord rsx(&pMF->m_db);
	rsx.ExecSQL(szSQL);

	CString szIsPrimary;
	if(!rsx.IsEOF())
	{
		rsx.GetValue(_T("hfos_isprimary"), szIsPrimary);
	}	

	if(m_szOrderType == _T("F"))
	{
		szSQL.Format(_T(" SELECT docno,") \
		_T("   foodid,") \
		_T("   orderid,") \
		_T("   recordno,") \
		_T("   deptid, ") \
		_T("   sang,") \
		_T("   trua,") \
		_T("   chieu,") \
		_T("   pname,") \
		_T("   age,") \
		_T("   roomid,") \
		_T("   bedid,") \
		_T("   unitprice, ") \
		_T("   SUM(BAOHIEM) AS BAOHIEM,") \
		_T("   SUM(QUAN) AS QUAN,") \
		_T("   SUM(DICHVU) AS DICHVU,") \
		_T("   SUM(CHINHSACH) AS CHINHSACH,") \
		_T("   SUM(HUUTRI) AS HUUTRI,") \
		_T("   SUM(BAN) AS BAN,") \
		_T("   SUM(BAOHIEM+QUAN+DICHVU+CHINHSACH+HUUTRI+BAN) AS TONG,conclusion ") \
		_T(" FROM") \
		_T("   ( SELECT DISTINCT hfo_docno AS docno,") \
		_T("     hfl_medical_code                 AS foodid,") \
		_T("     hfo_orderid               AS orderid,") \
		_T("     htr_recordno              AS recordno,") \
		//_T("     CASE WHEN hcr_admitdept              AS deptid,") \//
		_T("     CASE WHEN hfo_deptid='A4-B' and hfo_roomid=150 AND hfo_org_id = 'COVID' THEN CAST('A4-B' AS NVARCHAR2(4)) ELSE hcr_admitdept END AS deptid,") \
		_T("   CASE") \
		_T("       WHEN hfol_type ='S'") \
		_T("       THEN hfl_medical_code") \
		_T("       ELSE NULL") \
		_T("     END AS SANG,") \
		_T("   CASE") \
		_T("       WHEN hfol_type ='T'") \
		_T("       THEN hfl_medical_code") \
		_T("       ELSE NULL") \
		_T("     END AS TRUA,") \
		_T("     CASE") \
		_T("       WHEN hfol_type ='C'") \
		_T("       THEN hfl_medical_code") \
		_T("       ELSE NULL") \
		_T("     END          AS CHIEU,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname)                                AS pname,") \
		_T("     hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS age,") \
		_T("     hfo_roomid                                     AS roomid,") \
		_T("     hfo_bedid                                      AS bedid,") \
		_T("	 hfol_unitprice									AS unitprice, ") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(2,4,5,6,9,11,12)") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS BAOHIEM,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='S'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS DICHVU,") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(1,10)") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS QUAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='P'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS CHINHSACH,") \
		_T("     CASE") \
		_T("       WHEN ho_id ='8'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS BAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='H'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS HUUTRI, Hcr_Maindisease AS conclusion") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_feefood") \
		_T("   ON(hfo_docno=hd_docno)") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid=hfol_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfol_itemid=hfl_feeid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno =hfo_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON(htr_docno =hfo_docno") \
		_T("   AND htr_idx  =hfo_refidx)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
		_T("   WHERE hfo_reforder_id    =%ld") \
		_T("   AND trunc(hfo_orderdate) = to_date('%s', 'yyyy/mm/dd') AND hfo_orderstatus IN('S','A')") \
		_T("   )") \
		_T(" GROUP BY docno,conclusion,") \
		_T("   foodid,") \
		_T("   orderid,") \
		_T("   recordno,") \
		_T("   pname,") \
		_T("   age,") \
		_T("   sang,") \
		_T("   trua,") \
		_T("   chieu,") \
		_T("   roomid,") \
		_T("   unitprice, ") \
		_T("   bedid, deptid") \
		_T(" ORDER BY deptid,roomid,") \
		_T("   bedid,") \
		_T("   pname,") \
		_T("   docno "), nTransactionID, lpszOrderDate);
	}
	else
	{
			szSQL.Format(_T(" SELECT docno,") \
		_T("   foodid,") \
		_T("   orderid,") \
		_T("   recordno,") \
		_T("   deptid, ") \
		_T("   sang,") \
		_T("   trua,") \
		_T("   chieu,") \
		_T("   pname,") \
		_T("   age,") \
		_T("   roomid,") \
		_T("   bedid,") \
		_T("   unitprice, ") \
		_T("   SUM(BAOHIEM) AS BAOHIEM,") \
		_T("   SUM(QUAN) AS QUAN,") \
		_T("   SUM(DICHVU) AS DICHVU,") \
		_T("   SUM(CHINHSACH) AS CHINHSACH,") \
		_T("   SUM(HUUTRI) AS HUUTRI,") \
		_T("   SUM(BAN) AS BAN,") \
		_T("   SUM(BAOHIEM+QUAN+DICHVU+CHINHSACH+HUUTRI+BAN) AS TONG, conclusion") \
		_T(" FROM") \
		_T("   ( SELECT DISTINCT hfo_docno AS docno,") \
		_T("     hfl_medical_code                 AS foodid,") \
		_T("     hfo_orderid               AS orderid,") \
		_T("     htr_recordno              AS recordno,") \
		_T("	 hcr_admitdept				AS deptid,") \
		_T("   CASE") \
		_T("       WHEN hfoc_type ='S'") \
		_T("       THEN hfl_medical_code") \
		_T("       ELSE NULL") \
		_T("     END AS SANG,") \
		_T("   CASE") \
		_T("       WHEN hfoc_type ='T'") \
		_T("       THEN hfl_medical_code") \
		_T("       ELSE NULL") \
		_T("     END AS TRUA,") \
		_T("     CASE") \
		_T("       WHEN hfoc_type ='C'") \
		_T("       THEN hfl_medical_code") \
		_T("       ELSE NULL") \
		_T("     END          AS CHIEU,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname)                                AS pname,") \
		_T("     hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS age,") \
		_T("     hfo_roomid                                     AS roomid,") \
		_T("     hfo_bedid                                      AS bedid,") \
		_T("	 hfoc_unitprice									AS unitprice, ") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(2,4,5,6,9,11,12)") \
		_T("       THEN hfoc_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS BAOHIEM,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='S'") \
		_T("       THEN hfoc_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS DICHVU,") \
		_T("     CASE") \
		_T("       WHEN ho_id IN(1,10)") \
		_T("       THEN hfoc_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS QUAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='P'") \
		_T("       THEN hfoc_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS CHINHSACH,") \
		_T("     CASE") \
		_T("       WHEN ho_id ='8'") \
		_T("       THEN hfoc_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS BAN,") \
		_T("     CASE") \
		_T("       WHEN ho_type ='H'") \
		_T("       THEN hfoc_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS HUUTRI, Hcr_Maindisease as conclusion") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_feefood") \
		_T("   ON(hfo_docno=hd_docno)") \
		_T("   LEFT JOIN hms_feefoodcancel") \
		_T("   ON(hfo_orderid=hfoc_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfoc_itemid=hfl_feeid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno =hfo_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON(htr_docno =hfo_docno") \
		_T("   AND htr_idx  =hfo_refidx)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
		_T("   WHERE hfoc_retorder_id    =%ld") \
		_T("   )") \
		_T(" GROUP BY docno,conclusion,") \
		_T("   foodid,") \
		_T("   orderid,") \
		_T("   recordno,") \
		_T("   pname,") \
		_T("   age,") \
		_T("   sang,") \
		_T("   trua,") \
		_T("   chieu,") \
		_T("   roomid,") \
		_T("   unitprice, ") \
		_T("   bedid,") \
		_T("   deptid") \
		_T(" ORDER BY deptid,roomid,") \
		_T("   bedid,") \
		_T("   pname,") \
		_T("   docno "), nTransactionID);
	}
	
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	CReportSection* rptDetail;
	CString szItemID;
	long nItem =0;
	double nBH, nDV, nCS, nQUAN, nHUU, nBAN, nTotal, nTotal1, nQtyTmp=0;
	double nTotalBH, nTotalDV, nTotalCS, nTotalQUAN,nTotalBAN, nTotalHUU, nSang, nTrua, nToi;
	double nQty[15];
	double nPrice =0, nAmount=0, nTotalAmount =0, nTotalAmount1 =0, nTotalQty=0;
	for(int i= 0; i< 15; i++)
	{
		nQty[i] = 0;
	}

	int i = 1;

	nSang = nTrua = nToi =0;
	nBH=nDV= nCS= nQUAN=nHUU=nBAN=nTotal=nTotal1 =0;
	nTotalBH=nTotalDV=nTotalCS=nTotalQUAN=nTotalBAN=nTotalHUU=0;
	
	CString szNewLine, szOldLine, szNewDept, szOldDept;
	while(!rs.IsEOF())
	{			
		rs.GetValue(_T("deptid"), szNewDept);
		if(m_szDeptID == _T("C1.1") || m_szDeptID == _T("C1.2") || m_szDeptID == _T("C1.3") || m_szDeptID == _T("AB"))
		{
			if(szNewDept != szOldDept && !szNewDept.IsEmpty())
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				rptDetail->SetValue(_T("DeptName"), pMF->GetDepartmentName(szNewDept));
				szOldDept = szNewDept;
				nItem=0;
			}
		}

		rs.GetValue(_T("docno"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			rptDetail = rpt.AddDetail();
			nItem++;
			nTotal=nTotal1=0;
			nQty[7]=nQty[8]=nQty[9]=nQty[10]=nQty[11]=nQty[12]=0;
			tmpStr.Format(_T("%ld"), nItem);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pname"), tmpStr);		
			rptDetail->SetValue(_T("2"), tmpStr);
			
			rs.GetValue(_T("conclusion"), tmpStr);		
			rptDetail->SetValue(_T("15"), tmpStr);		

			tmpStr.Format(_T("%s.%s"), rs.GetValue(_T("roomid")),rs.GetValue(_T("bedid")));
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("RecordNo"), tmpStr);
			rptDetail->SetValue(_T("4"),tmpStr);			
			
			rs.GetValue(_T("QUAN"), nQtyTmp);			
			tmpStr.Empty();
			if(nQtyTmp > 0)
			{
				nQUAN += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}

			rptDetail->SetValue(_T("8"),tmpStr);

			rs.GetValue(_T("HUUTRI"), nQtyTmp);		
			tmpStr.Empty();
			if(nQtyTmp > 0) 
			{
				nHUU += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("9"),tmpStr);		

			rs.GetValue(_T("CHINHSACH"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nCS);		
			tmpStr.Empty();
			if(nQtyTmp > 0){
				nCS += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("10"),tmpStr);
			
			rs.GetValue(_T("BAOHIEM"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nBH);		
			tmpStr.Empty();
			if(nQtyTmp > 0) {
				nBH += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("11"),tmpStr);
			
			rs.GetValue(_T("DICHVU"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nDV);		
			tmpStr.Empty();
			if(nQtyTmp > 0) {
				nDV += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("12"),tmpStr);

			rs.GetValue(_T("BAN"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nBAN);		
			tmpStr.Empty();
			if(nQtyTmp > 0) {
				nBAN += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("13"),tmpStr);
			nAmount =0;			
			szOldLine = szNewLine;
		}
						
		rs.GetValue(_T("sang"), tmpStr);			
		if(!tmpStr.IsEmpty()){
			rptDetail->SetValue(_T("5"),tmpStr);
			nSang ++;
		}

		rs.GetValue(_T("trua"), tmpStr);			
		if(!tmpStr.IsEmpty()){
			rptDetail->SetValue(_T("6"),tmpStr);
			nTrua ++;
		}
		
		rs.GetValue(_T("chieu"), tmpStr);
		if(!tmpStr.IsEmpty()){
			rptDetail->SetValue(_T("7"),tmpStr);
			nToi ++;
		}

		rs.GetValue(_T("UnitPrice"), nPrice);
		nAmount += nPrice;
		nTotalAmount +=nPrice;
	
				
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("14"),tmpStr);		
		rs.MoveNext();
	}	
	

	if(nTotalAmount + nTotalAmount1 > 0){
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s5"), nSang);
		rptDetail->SetValue(_T("s6"), nTrua);
		rptDetail->SetValue(_T("s7"), nToi);
		rptDetail->SetValue(_T("s8"), nQUAN);
		rptDetail->SetValue(_T("s9"), nHUU);
		rptDetail->SetValue(_T("s10"), nCS);
		rptDetail->SetValue(_T("s11"), nBH);
		rptDetail->SetValue(_T("s12"), nDV);
		rptDetail->SetValue(_T("s13"), nBAN);
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s14"), tmpStr);
	}

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
//	rs.GetValue(_T("doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}


	if(!rsx.IsEOF())
	{
		int nTotalPatient;
		rsx.GetValue(_T("hfos_ttlpatient"), nTotalPatient);
		if(szIsPrimary == _T("Y"))
		{
			rpt.GetReportHeader()->SetValue(_T("Primary"), _T("Phi\x1EBFu \x62\xE1o \x63h\xEDnh"));
			rpt.GetReportHeader()->SetValue(_T("Template"), _T("M\x1EABu \x31"));
		}
		else
		{
			rpt.GetReportHeader()->SetValue(_T("Primary"), _T("Phi\x1EBFu \x62\xE1o ph\x1EE5"));
			rpt.GetReportHeader()->SetValue(_T("Template"), _T("M\x1EABu \x32"));
		}
		if(nTotalPatient > 0)
		{
			tmpStr.Format(_T("%d/%d"), nItem, nTotalPatient);
			rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);
		}

		tmpStr = pMF->GetSysTime();
		rpt.GetReportHeader()->SetValue(_T("Time"), tmpStr);
	}

	rpt.PrintPreview();
}

int CHMSDailyFoodOrder::OnExportOrderDeliveryDrug(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	return 0;
}
int CHMSDailyFoodOrder::OnOrderListPrintDeliveryDrug()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();	
	return 0;
}

void CHMSDailyFoodOrder::OnAddDrugSelect(){
	OnDrugListAddEntry();
}

void CHMSDailyFoodOrder::OnPrintDeliveryDrugsSelect(){

}

void CHMSDailyFoodOrder::Refresh(long nTransactionID, long nDocumentNo){
	m_nTransactionID = nTransactionID;
	m_nDocumentNo = nDocumentNo;
	OnPatientListLoadData();
	OnOrderListLoadData();
	OnDrugListLoadData();
	if(m_wndOrderList.GetItemCount() > 0 && m_szStatus == _T("O")){
		m_wndSend.EnableWindow(TRUE);
		m_wndPrint.EnableWindow(TRUE);
		m_wndPrintDeliveryDrugs.EnableWindow(TRUE);
	}	
}

long CHMSDailyFoodOrder::GetTransactionID(int nStorageID)
{
	long nTransactionID = -1;
	for (int i =0; i < m_storages.GetCount(); i++){
		if(nStorageID == m_storages[i])
		{
			nTransactionID = m_transaction_orders[i];
			return nTransactionID;
		}
	}
	return -1;
}

void CHMSDailyFoodOrder::OnResizeLayout() {
	AddResize(&m_wndGroupListDrug, 100, 100);
	AddResize(&m_wndOrderList, 100, 100);

	AddResize(&m_wndPatientInformation, 100, 100);
	AddResize(&m_wndPatientList, 100, 100);

	AddResize(&m_wndDrugInformation, 100, 100);
	AddResize(&m_wndDrugList, 100, 100);

}