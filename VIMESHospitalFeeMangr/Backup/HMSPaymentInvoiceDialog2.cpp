#include "HMSPaymentInvoiceDialog2.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "HMSHFReceiptDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPaymentInvoiceDialog2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnListDeleteItem();
} 

static int _OnListInsuranceUnpaidItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnInsuranceUnpaidItem();
} 

/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnInsurancePaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInsurancePaidChange();
} */
/*static void _OnInsurancePaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInsurancePaidSetfocus();} */ 
/*static void _OnInsurancePaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInsurancePaidKillfocus();
} */
static int _OnInsurancePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInsurancePaidCheckValue();
} 
/*static void _OnDiscountPaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDiscountPaidChange();
} */
/*static void _OnDiscountPaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDiscountPaidSetfocus();} */ 
/*static void _OnDiscountPaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDiscountPaidKillfocus();
} */
static int _OnDiscountPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDiscountPaidCheckValue();
} 
/*static void _OnAdvanceChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnAdvanceChange();
} */
/*static void _OnAdvanceSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnAdvanceSetfocus();} */ 
/*static void _OnAdvanceKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnAdvanceKillfocus();
} */
static int _OnAdvanceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnAdvanceCheckValue();
} 
static void _OnAdvPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentInvoiceDialog2*)pWnd)->OnAdvPaymentSelect();
}
/*static void _OnPatientPaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPatientPaidChange();
} */
/*static void _OnPatientPaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPatientPaidSetfocus();} */ 
/*static void _OnPatientPaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPatientPaidKillfocus();
} */
static int _OnPatientPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPatientPaidCheckValue();
} 
/*static void _OnUnpaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnUnpaidChange();
} */
/*static void _OnUnpaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnUnpaidSetfocus();} */ 
/*static void _OnUnpaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnUnpaidKillfocus();
} */
static int _OnUnpaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnUnpaidCheckValue();
} 
/*static void _OnPayableChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPayableChange();
} */
/*static void _OnPayableSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPayableSetfocus();} */ 
/*static void _OnPayableKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPayableKillfocus();
} */
static int _OnPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnPayableCheckValue();
} 
/*static void _OnRefundChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRefundChange();
} */
/*static void _OnRefundSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRefundSetfocus();} */ 
/*static void _OnRefundKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRefundKillfocus();
} */
static int _OnRefundCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRefundCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnSerialNoCheckValue();
} 

static int _OnSerialNoLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnSerialNoLoadData();
} 

static int _OnSerialNoSelendokFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnSerialNoSelendok();
	return 0;
} 
/*static void _OnRecvNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRecvNoChange();
} */
/*static void _OnRecvNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRecvNoSetfocus();} */ 
/*static void _OnRecvNoKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRecvNoKillfocus();
} */
static int _OnRecvNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnRecvNoCheckValue();
} 
/*static void _OnReceiveDateChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnReceiveDateChange();
} */
/*static void _OnReceiveDateSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnReceiveDateSetfocus();} */ 
/*static void _OnReceiveDateKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnReceiveDateKillfocus();
} */
static int _OnReceiveDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnReceiveDateCheckValue();
} 
static void _OnDescriptionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPaymentInvoiceDialog2* )pWnd)->OnDescriptionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDescriptionSelendokFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDescriptionSelendok();
}
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDescriptionKillfocus();
}*/
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDescriptionKillfocus();
}*/
static long _OnDescriptionLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDescriptionLoadData();
}
/*static void _OnDescriptionAddNewFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnDescriptionAddNew();
}*/

static void _OnOnlyDifferencePaidSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentInvoiceDialog2*)pWnd)->OnOnlyDifferencePaidSelect();
}
static void _OnPrintDischargePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentInvoiceDialog2*)pWnd)->OnPrintDischargePaymentSelect();
}


static void _OnPaymentSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog2 *pVw = (CHMSPaymentInvoiceDialog2 *)pWnd;
	pVw->OnPaymentSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog2 *pVw = (CHMSPaymentInvoiceDialog2 *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog2 *pVw = (CHMSPaymentInvoiceDialog2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog2 *pVw = (CHMSPaymentInvoiceDialog2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPaymentInvoiceDialog2Fnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnAddHMSPaymentInvoiceDialog2();
} 
static int _OnEditHMSPaymentInvoiceDialog2Fnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnEditHMSPaymentInvoiceDialog2();
} 
static int _OnDeleteHMSPaymentInvoiceDialog2Fnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnDeleteHMSPaymentInvoiceDialog2();
} 
static int _OnSaveHMSPaymentInvoiceDialog2Fnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnSaveHMSPaymentInvoiceDialog2();
} 
static int _OnCancelHMSPaymentInvoiceDialog2Fnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog2*)pWnd)->OnCancelHMSPaymentInvoiceDialog2();
} 
CHMSPaymentInvoiceDialog2::CHMSPaymentInvoiceDialog2(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 1019;
	m_nDlgHeight = 792;
	SetDefaultValues();
	m_nDocumentNo = 0;
	m_nRecvNo = 0;
	m_nInvoiceNo = 0;
}
CHMSPaymentInvoiceDialog2::~CHMSPaymentInvoiceDialog2(){
}
void CHMSPaymentInvoiceDialog2::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 905, 570);
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 10, 480, 95, 505);
	m_wndTotalCost.Create(this,100, 480, 200, 505); 
	m_wndInsurancePaidLabel.Create(this, _T("Insurance Paid"), 205, 480, 300, 505);
	m_wndInsurancePaid.Create(this,305, 480, 405, 505); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 410, 480, 510, 505);
	m_wndDiscountPaid.Create(this,515, 480, 615, 505); 
	m_wndAdvanceLabel.Create(this, _T("Advance"), 620, 480, 720, 505);
	m_wndAdvance.Create(this,725, 480, 815, 505); 
	m_wndAdvPayment.Create(this, _T("Adv Pay"), 820, 480, 900, 505);
	m_wndPatientPaidLabel.Create(this, _T("Patient Paid"), 10, 510, 95, 535);
	m_wndPatientPaid.Create(this,100, 510, 200, 535); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 205, 510, 300, 535);
	m_wndUnpaid.Create(this,305, 510, 405, 535); 
	m_wndPayableLabel.Create(this, _T("Payable"), 410, 510, 510, 535);
	m_wndPayable.Create(this,515, 510, 615, 535); 
	m_wndRefundLabel.Create(this, _T("Refund"), 620, 510, 720, 535);
	m_wndRefund.Create(this,725, 510, 815, 535); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 540, 95, 565);
	m_wndSerialNo.Create(this,100, 540, 200, 565); 
	m_wndRecvNoLabel.Create(this, _T("Invoice No"), 205, 540, 300, 565);
	m_wndRecvNo.Create(this,305, 540, 405, 565); 
	m_wndReceiveDateLabel.Create(this, _T("Invoice Date"), 410, 540, 510, 565);
	m_wndReceiveDate.Create(this,515, 540, 615, 565); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 620, 540, 720, 565);
	m_wndDescription.Create(this,725, 540, 900, 565); 
	m_wndList.Create(this,10, 30, 900, 475); 

	m_wndOnlyDifferencePaid.Create(this, _T("Insurace Unpaid"), 10, 575, 200, 600);
	m_wndPrintDischargePayment.Create(this, _T("Discharge Payment"), 215, 575, 411, 600);

	m_wndPayment.Create(this, _T("&Payment"), 590, 575, 665, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 670, 575, 745, 600);
	m_wndPrint.Create(this, _T("&Print"), 750, 575, 825, 600);
	m_wndClose.Create(this, _T("&Close"), 830, 575, 905, 600);

}
void CHMSPaymentInvoiceDialog2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdvPayment.ModifyStyle(WS_TABSTOP, 0);
	m_wndList.ModifyStyle(WS_TABSTOP, 0);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCurrencyFormat(true);
	m_wndTotalCost.SetTextColor(RGB(0, 0, 255));
	m_wndInsurancePaid.SetLimitText(16);
	m_wndInsurancePaid.SetCurrencyFormat(true);
	m_wndDiscountPaid.SetLimitText(16);
	m_wndDiscountPaid.SetCurrencyFormat(true);
	m_wndDiscountPaid.SetReadOnly(true);
	m_wndAdvance.SetLimitText(16);
	m_wndAdvance.SetCurrencyFormat(true);
	m_wndPatientPaid.SetLimitText(16);
	m_wndPatientPaid.SetCurrencyFormat(true);
	m_wndPatientPaid.SetReadOnly(true);
	m_wndUnpaid.SetLimitText(16);
	m_wndUnpaid.SetCurrencyFormat(true);
	m_wndPayable.SetLimitText(16);
	m_wndPayable.SetCurrencyFormat(true);
	m_wndPayable.SetCheckValue(true);
	m_wndRefund.SetLimitText(35);
	m_wndRefund.SetCheckValue(true);
	m_wndRefund.SetCurrencyFormat(true);

	m_wndTotalCost.ModifyStyle(0, ES_RIGHT);
	m_wndTotalCost.SetCurrencyFormat(TRUE);
	m_wndInsurancePaid.ModifyStyle(0, ES_RIGHT);
	m_wndDiscountPaid.ModifyStyle(0, ES_RIGHT);
	m_wndAdvance.ModifyStyle(0, ES_RIGHT);
	m_wndPatientPaid.ModifyStyle(0, ES_RIGHT);
	m_wndRefund.ModifyStyle(0, ES_RIGHT);
	
	//m_wndSerialNo.SetCheckValue(true);
	m_wndRecvNo.SetLimitText(16);
	m_wndRecvNo.SetCheckValue(true);
	//m_wndReceiveDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndReceiveDate.SetCheckValue(true);
//	m_wndDescription.SetCheckValue(true);
	m_wndDescription.LimitText(128);
//	m_wndSerialNo.SetReadOnly(true);
	m_wndReceiveDate.SetReadOnly(true);
	m_wndRefund.SetReadOnly(true);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 210);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Cost"), CFMT_MONEY, 90);
	if(pMF->GetObjectType() == _T("I"))
		m_wndList.InsertColumn(6, _T("Ins Paid"), CFMT_MONEY, 90);
	else
		m_wndList.InsertColumn(6, _T("Discount"), CFMT_MONEY, 90);

	m_wndList.InsertColumn(7, _T("Payment"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Unpaid"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Select"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(10, _T("idx"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("groupid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("idx"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(13, _T("Type"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(14, _T("itemid"), CFMT_TEXT, 0);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	//m_wndSerialNo.Format(4, 0, 5);
	m_wndSerialNo.SetSearchEx(true);
	m_wndSerialNo.InsertColumn(0, _T("Serial No"), CFMT_TEXT, 120);
	m_wndSerialNo.InsertColumn(2, _T("SerialNo"), CFMT_TEXT, 0);
	m_wndSerialNo.InsertColumn(3, _T("BookNo"), CFMT_TEXT, 0);
	m_wndSerialNo.InsertColumn(4, _T("RecvNo"), CFMT_TEXT, 0);


	m_wndDescription.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDescription.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	
}
void CHMSPaymentInvoiceDialog2::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Fee Information"));	
	m_wndList.AddEvent(1, _T("Insurance Unpaid"), _OnListInsuranceUnpaidItemFnc);

//	m_wndList.AddEvent(1, _T("Select"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
//	m_wndList.AddEvent(1, _T("Select All"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
//	m_wndList.AddEvent(1, _T("Un Select "), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndInsurancePaid.SetEvent(WE_CHANGE, _OnInsurancePaidChangeFnc);
	//m_wndInsurancePaid.SetEvent(WE_SETFOCUS, _OnInsurancePaidSetfocusFnc);
	//m_wndInsurancePaid.SetEvent(WE_KILLFOCUS, _OnInsurancePaidKillfocusFnc);
	m_wndInsurancePaid.SetEvent(WE_CHECKVALUE, _OnInsurancePaidCheckValueFnc);
	//m_wndDiscountPaid.SetEvent(WE_CHANGE, _OnDiscountPaidChangeFnc);
	//m_wndDiscountPaid.SetEvent(WE_SETFOCUS, _OnDiscountPaidSetfocusFnc);
	//m_wndDiscountPaid.SetEvent(WE_KILLFOCUS, _OnDiscountPaidKillfocusFnc);
	m_wndDiscountPaid.SetEvent(WE_CHECKVALUE, _OnDiscountPaidCheckValueFnc);
	//m_wndAdvance.SetEvent(WE_CHANGE, _OnAdvanceChangeFnc);
	//m_wndAdvance.SetEvent(WE_SETFOCUS, _OnAdvanceSetfocusFnc);
	//m_wndAdvance.SetEvent(WE_KILLFOCUS, _OnAdvanceKillfocusFnc);
	m_wndAdvance.SetEvent(WE_CHECKVALUE, _OnAdvanceCheckValueFnc);
	m_wndAdvPayment.SetEvent(WE_CLICK, _OnAdvPaymentSelectFnc);
	//m_wndPatientPaid.SetEvent(WE_CHANGE, _OnPatientPaidChangeFnc);
	//m_wndPatientPaid.SetEvent(WE_SETFOCUS, _OnPatientPaidSetfocusFnc);
	//m_wndPatientPaid.SetEvent(WE_KILLFOCUS, _OnPatientPaidKillfocusFnc);
	m_wndPatientPaid.SetEvent(WE_CHECKVALUE, _OnPatientPaidCheckValueFnc);
	//m_wndUnpaid.SetEvent(WE_CHANGE, _OnUnpaidChangeFnc);
	//m_wndUnpaid.SetEvent(WE_SETFOCUS, _OnUnpaidSetfocusFnc);
	//m_wndUnpaid.SetEvent(WE_KILLFOCUS, _OnUnpaidKillfocusFnc);
	m_wndUnpaid.SetEvent(WE_CHECKVALUE, _OnUnpaidCheckValueFnc);
	//m_wndPayable.SetEvent(WE_CHANGE, _OnPayableChangeFnc);
	//m_wndPayable.SetEvent(WE_SETFOCUS, _OnPayableSetfocusFnc);
	//m_wndPayable.SetEvent(WE_KILLFOCUS, _OnPayableKillfocusFnc);
	m_wndPayable.SetEvent(WE_CHECKVALUE, _OnPayableCheckValueFnc);
	//m_wndRefund.SetEvent(WE_CHANGE, _OnRefundChangeFnc);
	//m_wndRefund.SetEvent(WE_SETFOCUS, _OnRefundSetfocusFnc);
	//m_wndRefund.SetEvent(WE_KILLFOCUS, _OnRefundKillfocusFnc);
	m_wndRefund.SetEvent(WE_CHECKVALUE, _OnRefundCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	m_wndSerialNo.SetEvent(WE_SELENDOK, _OnSerialNoSelendokFnc);
	m_wndSerialNo.SetEvent(WE_LOADDATA, _OnSerialNoLoadDataFnc);
	//m_wndRecvNo.SetEvent(WE_CHANGE, _OnRecvNoChangeFnc);
	//m_wndRecvNo.SetEvent(WE_SETFOCUS, _OnRecvNoSetfocusFnc);
	//m_wndRecvNo.SetEvent(WE_KILLFOCUS, _OnRecvNoKillfocusFnc);
	m_wndRecvNo.SetEvent(WE_CHECKVALUE, _OnRecvNoCheckValueFnc);
	//m_wndReceiveDate.SetEvent(WE_CHANGE, _OnReceiveDateChangeFnc);
	//m_wndReceiveDate.SetEvent(WE_SETFOCUS, _OnReceiveDateSetfocusFnc);
	//m_wndReceiveDate.SetEvent(WE_KILLFOCUS, _OnReceiveDateKillfocusFnc);
	m_wndReceiveDate.SetEvent(WE_CHECKVALUE, _OnReceiveDateCheckValueFnc);
	m_wndDescription.SetEvent(WE_SELENDOK, _OnDescriptionSelendokFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_SELCHANGE, _OnDescriptionSelectChangeFnc);
	m_wndDescription.SetEvent(WE_LOADDATA, _OnDescriptionLoadDataFnc);
	//m_wndDescription.SetEvent(WE_ADDNEW, _OnDescriptionAddNewFnc);
	m_wndOnlyDifferencePaid.SetEvent(WE_CLICK, _OnOnlyDifferencePaidSelectFnc);
	m_wndPrintDischargePayment.SetEvent(WE_CLICK, _OnPrintDischargePaymentSelectFnc);

	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetWindowFont(&m_wndTotalCost, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndTotalCost.SetTextColor(RGB(0, 0, 255));
	
	SetWindowFont(&m_wndAdvance, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndAdvance.SetTextColor(RGB(0, 0, 255));
	
	SetWindowFont(&m_wndInsurancePaid, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndInsurancePaid.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndDiscountPaid, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndDiscountPaid.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndPayable, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndPayable.SetTextColor(RGB(0, 0, 255));
	SetWindowFont(&m_wndPatientPaid, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndPatientPaid.SetTextColor(RGB(0, 0, 255));
	SetWindowFont(&m_wndUnpaid, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndUnpaid.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndRefund, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndRefund.SetTextColor(RGB(255, 0, 0));


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(GetMode());
	OnListLoadData();
	
	if(GetMode() == VM_ADD)
	{
		m_szReceiveDate = pMF->m_szRecvDate;
		UpdateData(false);
		m_wndPayment.SetFocus();
	}
	else
		GetDataToScreen();
	if(pMF->m_szObjectType != _T("S")){
		m_bOnlyDifferencePaid = FALSE;
		m_bPrintDischargePayment = TRUE;
	}
	else
	{
		m_wndOnlyDifferencePaid.EnableWindow(false);
		m_bOnlyDifferencePaid = FALSE;
		//m_wndPrintDischargePayment.EnableWindow(false);
		m_bPrintDischargePayment = FALSE;
	}
	if(pMF->m_nInpatient == 0)
		m_bPrintDischargePayment = false;
//	if(pMF->m_szAutoPrintDischargeVote == _T("Y"))
//		m_bPrintDischargePayment = TRUE;

	CString szSQL;
	CRecord rs(&pMF->m_db);
	if(pMF->m_nRefIndex == 0){
		szSQL.Format(_T("SELECT hd_status  as status FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
	}
	else
	{
		szSQL.Format(_T("SELECT hcr_status as status FROM hms_clinical_record WHERE hcr_docno=%ld "), pMF->m_nDocumentNo);
	}
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		m_wndPrintDischargePayment.EnableWindow(false);
	}
	else{
		CString tmpStr;
		rs.GetValue(_T("status"), tmpStr);
		if(tmpStr != _T("T") && tmpStr != _T("A") ){
			m_wndPrintDischargePayment.EnableWindow(false);
		}
		else
		{
			m_bPrintDischargePayment = TRUE;
			
		}
	}

	UpdateData(false);

}
void CHMSPaymentInvoiceDialog2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_nInsurancePaid);
	DDX_Text(pDX, m_wndDiscountPaid.GetDlgCtrlID(), m_nDiscountPaid);
	DDX_Text(pDX, m_wndAdvance.GetDlgCtrlID(), m_nAdvance);
	DDX_Check(pDX, m_wndAdvPayment.GetDlgCtrlID(), m_bAdvPayment);
	DDX_Text(pDX, m_wndPatientPaid.GetDlgCtrlID(), m_nPatientPaid);
	DDX_Text(pDX, m_wndUnpaid.GetDlgCtrlID(), m_nUnpaid);
	DDX_Text(pDX, m_wndPayable.GetDlgCtrlID(), m_nPayable);
	DDX_Text(pDX, m_wndRefund.GetDlgCtrlID(), m_nRefund);
	DDX_TextEx(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndRecvNo.GetDlgCtrlID(), m_nRecvNo);
	DDX_TextEx(pDX, m_wndReceiveDate.GetDlgCtrlID(), m_szReceiveDate);
	DDX_TextEx(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescriptionKey);
	DDX_Check(pDX, m_wndOnlyDifferencePaid.GetDlgCtrlID(), m_bOnlyDifferencePaid);
	DDX_Check(pDX, m_wndPrintDischargePayment.GetDlgCtrlID(), m_bPrintDischargePayment);
}
void CHMSPaymentInvoiceDialog2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nInvoiceNo > 0)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_invoice WHERE hfi_invoiceno=%ld "), m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			CString tmpStr;
			rs.GetValue(_T("hfi_serialno"), m_szSerial);
			rs.GetValue(_T("hfi_bookno"), m_nBookNo);
			rs.GetValue(_T("hfi_recvno"), m_nRecvNo);
			rs.GetValue(_T("hfi_recvdate"), m_szReceiveDate);
			rs.GetValue(_T("hfi_advanceamt"), m_nAdvance);
			rs.GetValue(_T("hfi_refundamt"), m_nRefund);
			m_nRefund = 0;
			UpdateData(false);
			if(!m_szSerial.IsEmpty())
			m_szSerialNo.Format(_T("%s-%ld"), m_szSerial, m_nBookNo);
			m_wndSerialNo.SetWindowText(m_szSerialNo);
			m_wndPrint.SetFocus();
		}

	}

}
void CHMSPaymentInvoiceDialog2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentInvoiceDialog2::SetDefaultValues(){
	
	m_nTotalCost=0;
	m_nInsurancePaid=0;
	m_nDiscountPaid=0;
	m_nAdvance=0;
	m_bAdvPayment=TRUE;
	m_nPatientPaid=0;
	m_nUnpaid=0;
	m_nPayable=0;
	m_nRefund=0;
	m_szSerialNo.Empty();
	m_szSerial = _T("AUTO");
	m_nRecvNo=0;
	m_szReceiveDate.Empty();
	m_szDescriptionKey = _T("0");
	m_bOnlyDifferencePaid=FALSE;
	m_bPrintDischargePayment=FALSE;

}
int CHMSPaymentInvoiceDialog2::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 3, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, 2, 3, -1); 
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
		m_wndTotalCost.EnableWindow(false);
		m_wndInsurancePaid.EnableWindow(false);
		m_wndDiscountPaid.EnableWindow(false);
		m_wndAdvance.EnableWindow(false);
		m_wndUnpaid.EnableWindow(false);
		m_wndPayable.EnableWindow(false);
		m_wndAdvPayment.EnableWindow(false);
		if(nMode == VM_EDIT){
			m_wndPayable.EnableWindow(false);
			m_wndSerialNo.EnableWindow(false);
			m_wndRecvNo.EnableWindow(false);
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSPaymentInvoiceDialog2::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 || GetMode() == VM_EDIT) return;
	long nIdx = 0;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CString szSQL, tmpStr, itemID, groupId, szFeeType;
	tmpStr = m_wndList.GetItemText(nSel, 9);
	nIdx = ToLong(m_wndList.GetItemText(nSel, 10));
	itemID = m_wndList.GetItemText(nSel, 14);
	groupId = m_wndList.GetItemText(nSel, 11);
	szFeeType = m_wndList.GetItemText(nSel, 12);
	if(tmpStr == _T("X")){
		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='C' WHERE he_docno=%ld AND he_examtype='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_status='C' WHERE pcmsol_itemid='%s' and hfe_status='O' and pcmsol_orderid in(select pcmso_orderid from pcms_order where pcmso_docno=%ld) "), itemID, m_nDocumentNo);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_status='C' WHERE ho_docno=%ld AND ho_itemid='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_status='C' WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_itemid='%s' and hfe_status='O'"), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("C"))
			szSQL.Format(_T(" UPDATE hms_bed SET hfe_status='C' WHERE hb_docno=%ld AND cast(hb_idx as text)='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("F"))
			szSQL.Format(_T(" UPDATE hms_other_fee SET hfe_status='C' WHERE hfe_docno=%ld AND hfe_itemid='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);

		pMF->ExecSQL(szSQL);
		m_wndList.SetItemText(nSel, 9, _T(""));
	}
	else
	{
		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='O' WHERE he_docno=%ld AND he_examtype='%s' and hfe_status='C' "), m_nDocumentNo, itemID);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_status='O' WHERE pcmsol_itemid='%s' and  hfe_status='C' and and pcmsol_orderid in(select pcmso_orderid from pcms_order where pcmso_docno=%ld) "), itemID, m_nDocumentNo);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_status='O' WHERE ho_docno=%ld AND ho_itemid='%s' and hfe_status='C' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_status='O' WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_itemid='%s' and hfe_status='C'"), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("C"))
			szSQL.Format(_T(" UPDATE hms_bed SET hfe_status='O' WHERE hb_docno=%ld AND cast(hb_idx as text)='%s' AND hfe_status='C' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("F"))
			szSQL.Format(_T(" UPDATE hms_other_fee SET hfe_status='O' WHERE hfe_docno=%ld AND hfe_itemid='%s' AND hfe_status='C' "), m_nDocumentNo, itemID);
		
		pMF->ExecSQL(szSQL);

		m_wndList.SetItemText(nSel, 9, _T("X"));
	}
	
	RecalcTotal();
} 
void CHMSPaymentInvoiceDialog2::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentInvoiceDialog2::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	return 0;
} 

int CHMSPaymentInvoiceDialog2::OnInsuranceUnpaidItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("02.15")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 || GetMode() == VM_EDIT) return 0;
	long nIdx = 0;
	CString szSQL, tmpStr, itemID, groupId, szFeeType;
	tmpStr = m_wndList.GetItemText(nSel, 9);
	nIdx = ToLong(m_wndList.GetItemText(nSel, 10));
	itemID = m_wndList.GetItemText(nSel, 14);
	groupId = m_wndList.GetItemText(nSel, 11);
	szFeeType = m_wndList.GetItemText(nSel, 12);
	int nMsg = ShowMessageBox(_T("Do you want to confirm entry?(Y/N)"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;

		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_difcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_difpaid=0 WHERE he_docno=%ld AND he_examtype='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_difcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_difpaid=0 WHERE pcmsol_itemid='%s' and hfe_status='O' and pcmsol_orderid in(select pcmso_orderid from pcms_order where pcmso_docno=%ld) "), itemID, m_nDocumentNo);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_difcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_difpaid=0 WHERE ho_docno=%ld AND ho_itemid='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_difcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_difpaid=0 WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_itemid='%s' and hfe_status='O'"), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("C"))
			szSQL.Format(_T(" UPDATE hms_bed SET hfe_difcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_difpaid=0 WHERE hb_docno=%ld AND cast(hb_idx as text)='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("F"))
			szSQL.Format(_T(" UPDATE hms_other_fee SET hfe_difcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_difpaid=0 WHERE hfe_docno=%ld AND hfe_itemid='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);

	pMF->ExecSQL(szSQL);
	tmpStr = m_wndList.GetItemText(nSel, 5);
	m_wndList.SetItemText(nSel, 6, _T(""));
	m_wndList.SetItemText(nSel, 7, _T(""));
	m_wndList.SetItemText(nSel, 8, tmpStr);

	RecalcTotal();
	return 0;
} 

long CHMSPaymentInvoiceDialog2::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szFeeID, szID, szDepts;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;
	//UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex, nChapterID=0;
	double dTotal[5];
	double dGroup1[5];
	double dGroup2[5];
	double dAmount = 0;
	int nItem=0, nOldItem=0, nItem2;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	m_nDiscountPaid = 0;
	CString szNewGroup, szOldGroup, szParentGroup;
	for (int i =0; i < 5; i++){
		dTotal[i] = 0;
		dGroup1[i] = 0;
		dGroup2[i] = 0;
	}
	
	szDepts = pMF->m_szDepartments;
	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));

	if(GetMode() == VM_EDIT){
		szWhere.Format(_T(" AND hfe_invoiceno=%ld "), m_nInvoiceNo);
	}
	else 
	{
		szWhere.Format(_T(" AND hfe_status in('O','C') AND date(hfe_entrydate)<=date('%s') AND hfe_deptid in(%s) "), pMF->m_szRecvDate, szDepts);
		if(pMF->m_nInpatient == 1){
			szWhere.AppendFormat(_T(" and hfe_group <>'D0000' "));
		}
		else
			szWhere.AppendFormat(_T(" and hfe_deptid in(select sd_id from sys_dept where sd_type='KB') "));
	}

	if(m_bOnlyDifferencePaid){
		szWhere.AppendFormat(_T(" AND (hfe_cost-hfe_inspaid>0 or hfe_difcost>0) "));
	}

	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_id "));
	grs.ExecSQL(szSQL);

	szSQL.Format(_T(" SELECT") \
		_T("		hfe_deptid as deptid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_qty) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_patdebt) as unpaid") \
		_T(" FROM hmsv_fee") \
		_T(" WHERE hfe_docno=%ld and hfe_cost > 0 %s ") \
		_T(" GROUP BY groupid, feetype, itemid, name, unit, unitprice, deptid") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"), m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);

	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	
	m_szDepartments.Empty();

	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		if(nLevel == 0)
		{
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndList.SetItemText(nItem, 13, _T("Type"));
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 9, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			//m_wndList.SetItemBkColor(nItem, RGB(0, 128, 128), FALSE);
			//m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.SetItemBkColor(nItem, RGB(64, 128, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 9);
			m_wndList.SetItemText(nItem, 13, _T("Group"));
			dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
		}
		
		if(szSubItem == _T("Y"))
		{
			nSubItem = 0;
			while(!rs.IsEOF())
			{
				tmpStr.Format(_T("[%s]"), rs.GetValue(_T("deptid")));
				if(!tmpStr.IsEmpty() && m_szDepartments.Find(tmpStr) == -1){
					if(!m_szDepartments.IsEmpty())
						m_szDepartments += _T(",");
					m_szDepartments += tmpStr;
				}

					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(dGroup2[0] > 0 && nOldItem > 0){
								m_wndList.SetItemText(nOldItem, 5, dGroup2[0]>0?ToString(dGroup2[0]):_T(""));
								m_wndList.SetItemText(nOldItem, 6, dGroup2[1]>0?ToString(dGroup2[1]):_T(""));
								m_wndList.SetItemText(nOldItem, 7, dGroup2[2]>0?ToString(dGroup2[2]):_T(""));
								m_wndList.SetItemText(nOldItem, 8, dGroup2[3]>0?ToString(dGroup2[3]):_T(""));
							}
							szSQL.Format(_T("SELECT hfg_name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							m_wndList.SetItemText(nItem2, 13, _T("SubGroup"));
							nOldItem = nItem2;
							m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							m_wndList.MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

							dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
						}

						nSubItem++;
						rs.GetValue(_T("cost"), dAmount);
						dTotal[0] += dAmount;
						dGroup1[0] += dAmount;
						dGroup2[0] += dAmount;
						rs.GetValue(_T("discount"), dAmount);
						dTotal[1] += dAmount;
						dGroup1[1] += dAmount;
						dGroup2[1] += dAmount;
						rs.GetValue(_T("patpaid"), dAmount);
						dTotal[2] += dAmount;
						dGroup1[2] += dAmount;
						dGroup2[2] += dAmount;

						rs.GetValue(_T("patdebt"), dAmount);
						dTotal[3] += dAmount;
						dGroup1[3] += dAmount;
						dGroup2[3] += dAmount;
						rs.GetValue(_T("unpaid"), dAmount);
						dTotal[4] += dAmount;
						dGroup1[4] += dAmount;
						dGroup2[4] += dAmount;
						tmpStr.Format(_T("%s [%s]"), rs.GetValue(_T("name")), rs.GetValue(_T("deptid")));
						m_wndList.AddItems(_T(""), 
							tmpStr,
							rs.GetValue(_T("unit")),
							rs.GetValue(_T("qty")),
							rs.GetValue(_T("unitprice")),
							rs.GetValue(_T("cost")),
							rs.GetValue(_T("discount")),
							rs.GetValue(_T("patpaid")),
							rs.GetValue(_T("patdebt")),
							_T("X"),
							rs.GetValue(_T("idx")),
							rs.GetValue(_T("groupid")),
							rs.GetValue(_T("feetype")),
							_T("Item"),
							rs.GetValue(_T("itemid")),
							NULL);
						bDeleteParent = false;
					}
					else
						break;
					rs.MoveNext();

			}
			if(dGroup1[0] > 0)
			{
				
				if(dGroup2[0] > 0){
					m_wndList.SetItemText(nOldItem, 5, dGroup2[0] > 0?ToString(dGroup2[0]):_T(""));
					m_wndList.SetItemText(nOldItem, 6, dGroup2[1]> 0?ToString(dGroup2[1]):_T(""));
					m_wndList.SetItemText(nOldItem, 7, dGroup2[2] > 0?ToString(dGroup2[2]):_T(""));
					m_wndList.SetItemText(nOldItem, 8, dGroup2[3] > 0?ToString(dGroup2[3]):_T(""));
				}
				dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
				m_wndList.SetItemText(nItem, 13, _T("SubAmount"));
				m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 5, dGroup1[0] > 0?ToString(dGroup1[0]):_T(""));
				m_wndList.SetItemText(nItem, 6, dGroup1[1] > 0?ToString(dGroup1[1]):_T(""));
				m_wndList.SetItemText(nItem, 7, dGroup1[2] > 0?ToString(dGroup1[2]):_T(""));
				m_wndList.SetItemText(nItem, 8, dGroup1[3] > 0?ToString(dGroup1[3]):_T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
			}

		}

		grs.MoveNext();
	
	}
	
	if(dTotal[0] > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			nItem = m_wndList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			_T(""),
			dTotal[0]>0?ToString(dTotal[0]):_T(""),
			dTotal[1]>0?ToString(dTotal[1]):_T(""),
			dTotal[2]>0?ToString(dTotal[2]):_T(""),
			dTotal[3]>0?ToString(dTotal[3]):_T(""),
			NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			m_wndList.SetItemText(nItem, 13, _T("TotalAmount"));
	}


	long nFreeAmount=0;

	m_nTotalCost = dTotal[0];
	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
		m_nInsurancePaid = dTotal[1];
	else
		m_nDiscountPaid = dTotal[1];
	
	m_nPatientPaid = dTotal[2];
	m_nUnpaid = dTotal[3];
	m_nPayable = m_nUnpaid;

	m_wndList.EnsureVisible(m_wndList.GetItemCount()-1, TRUE);
	
	if(m_wndList.GetItemCount() <= 0)
		m_wndPayment.EnableWindow(false);

	if(GetMode() != VM_EDIT)
	{
		szSQL.Format(_T("SELECT sum(hfi_patpaid-hfi_cost) as advfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='A' and hfi_category='A' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("advfee"), m_nAdvance);
		}
		else
			m_nAdvance = 0;
		
		szSQL.Format(_T("SELECT sum(hfi_discount) as discountfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='D'"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("discountfee"), nFreeAmount);
		}
	}
	else
	{
		szSQL.Format(_T("SELECT sum(hfi_cost) as advfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='A' and hfi_refinvoice=%ld"), m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("advfee"), m_nAdvance);
		}
		else
			m_nAdvance = 0;
		
		szSQL.Format(_T("SELECT sum(hfi_discount) as discountfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='D'"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("discountfee"), nFreeAmount);
		}
		

	}

	m_nRefund = (nFreeAmount+m_nAdvance)-m_nPayable;
	

	RecalcTotal();
	m_wndList.EndLoad();
	return 0;
}
/*void CHMSPaymentInvoiceDialog2::OnTotalCostChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnTotalCostSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnTotalCostKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnInsurancePaidChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnInsurancePaidSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnInsurancePaidKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnInsurancePaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnDiscountPaidChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnDiscountPaidSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnDiscountPaidKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnDiscountPaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnAdvanceChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnAdvanceSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnAdvanceKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnAdvanceCheckValue(){
	return 0;
} 
void CHMSPaymentInvoiceDialog2::OnAdvPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
/*void CHMSPaymentInvoiceDialog2::OnPatientPaidChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnPatientPaidSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnPatientPaidKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnPatientPaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnUnpaidChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnUnpaidSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnUnpaidKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnUnpaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnPayableChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnPayableSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnPayableKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnPayableCheckValue(){
	UpdateData(true);
	m_nRefund = m_nPayable - m_nUnpaid;
	UpdateData(false);
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnRefundChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnRefundSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnRefundKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnRefundCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnSerialNoChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnSerialNoSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnSerialNoKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnSerialNoCheckValue(){
	UpdateData(true);
	if(m_wndSerialNo.GetWindowTextLength() == 0){
		m_szSerial = _T("AUTO");
		m_nRecvNo = 0;
		UpdateData(false);
	}
	return 0;
} 

int CHMSPaymentInvoiceDialog2::OnSerialNoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if(m_wndSerialNo.IsSearchKey() && !m_szSerialNo.IsEmpty()){
		szWhere.Format(_T(" AND hifcl_serialno||'-'||hifcl_bookno='%s' "), m_szSerialNo);
	};
	m_wndSerialNo.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_invfeectl_line WHERE lower(hifcl_userid)=lower('%s') %s ORDER BY hifcl_serialno, hifcl_bookno "), pMF->GetCurrentUser(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%s-%s"), rs.GetValue(_T("hifcl_serialno")), rs.GetValue(_T("hifcl_bookno")));
		m_wndSerialNo.AddItems(
			tmpStr,
			rs.GetValue(_T("hifcl_serialno")), 
			rs.GetValue(_T("hifcl_bookno")), 
			rs.GetValue(_T("hifcl_recvno")), 
			NULL);
		m_wndSerialNo.AddSearchEx(tmpStr);
		rs.MoveNext();
	}
	return nCount;

} 

void CHMSPaymentInvoiceDialog2::OnSerialNoSelendok(){
	UpdateData(true);
	m_szSerialNo = m_wndSerialNo.GetCurrent(0);
	m_szSerial = m_wndSerialNo.GetCurrent(1);
	m_nBookNo = ToLong(m_wndSerialNo.GetCurrent(2));
	m_nRecvNo = ToInt(m_wndSerialNo.GetCurrent(3))+1;
	UpdateData(false);
} 
/*void CHMSPaymentInvoiceDialog2::OnRecvNoChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnRecvNoSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnRecvNoKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnRecvNoCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnReceiveDateChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnReceiveDateSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnReceiveDateKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnReceiveDateCheckValue(){
	return 0;
} 
void CHMSPaymentInvoiceDialog2::OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentInvoiceDialog2::OnDescriptionSelendok(){
	 
}
/*void CHMSPaymentInvoiceDialog2::OnDescriptionSetfocus(){
	
}*/
/*void CHMSPaymentInvoiceDialog2::OnDescriptionKillfocus(){
	
}*/
long CHMSPaymentInvoiceDialog2::OnDescriptionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndDescription, _T("hms_invoice_desc"), m_szDescriptionKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDescription.IsSearchKey() && !m_szDescriptionKey.IsEmpty()){
	};
	m_wndDescription.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDescription.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPaymentInvoiceDialog2::OnDescriptionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


void CHMSPaymentInvoiceDialog2::OnOnlyDifferencePaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
	
}
void CHMSPaymentInvoiceDialog2::OnPrintDischargePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}


void CHMSPaymentInvoiceDialog2::OnPaymentSelect(){	
	if(OnPaymentFee())
		OnOK();	
} 

bool CHMSPaymentInvoiceDialog2::OnPaymentFee()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDesc, tmpStr, szDepts, szAdvPaid, szSerialNo;
	CString szDept;
	long nRefInvoice = 0;
	UpdateData(true);
	if(!IsValidateData())
		return false;

	//
	//if(!pMF->IsAllowDischargePayment(m_nDocumentNo))
	//{
	////	ShowMessageBox(_T("Patient files not terminated."), 0);
	////	return;
	//}
	szSerialNo = m_wndSerialNo.GetCurrent(1);

	if(m_szSerial == _T("AUTO") || m_szSerialNo.IsEmpty()){
		tmpStr.Format(_T("%s"), pMF->GetSysDate(ddmmyyyy));
		tmpStr.Replace(_T("/"), _T(""));
		m_nBookNo = ToLong(tmpStr);
		tmpStr.Format(_T("%s"), pMF->GetSysTime());
		tmpStr.Replace(_T(":"), _T(""));
		tmpStr.Trim();
		m_nRecvNo = ToInt(tmpStr);
		szSerialNo = _T("AUTO");
	}

	szDesc = m_wndDescription.GetCurrent(1);
	if(szDesc.IsEmpty()){
		m_wndDescription.SetCurrent(0, _T("0"));
		szDesc = m_wndDescription.GetCurrent(1);
	}
	szDepts = m_szDepartments;
	
//	szDepts.Replace(_T("["), _T("\'"));
//	szDepts.Replace(_T("]"), _T("\'"));

	
	bool bFlag = false;
	bool bPrintReceipt = false;
	double nAdvamt = 0, nRefundAmt = 0;

	szDept = pMF->m_szPaymentDept;
	if(pMF->m_nInpatient > 0 )
	{
		//if((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")))
		{
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='C', he_hasfee='N' WHERE he_docno=%ld and hfe_status<>'P' and hfe_invoiceno=0 "), m_nDocumentNo);
			pMF->ExecSQL(szSQL);
		}
		bFlag = true;
	}
	else
	{
/*
		if((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")))
		{
			bFlag = true;
		}
*/
		if(!bFlag)
		{
			szSQL.Format(_T("SELECT count(*) FROM hms_doc WHERE hd_docno=%ld and (hd_emergency='Y' or hd_outpatient='Y' or hd_status='T') "), m_nDocumentNo);

			rs.ExecSQL(szSQL);
			
			if(rs.GetIntValue() > 0 && m_nAdvance >0)
			{
				bFlag = true;
			}
		}
	}

	if(bFlag)
	{
		CString szSuggestion=_T("D");
		CString szStatus;

		bool bAllowPayment = false;
		

//Truong hop neu tong so tien benh nhan phai tra > tong tam ung + tong mien giam 
//		-> benh nhan phai tam ung them = So tien phai tra-(tong tam ung+tong mien giam)
//Ap dung cho tat ca cac truong hop
		
		//_msg(_T("Unpaid:%2.f, Refund:%2.f"), m_nUnpaid, m_nRefund);
		if (m_nUnpaid==0 && m_nAdvance ==0)
			bAllowPayment = true;
		else if(m_nAdvance + m_nDiscountPaid == m_nUnpaid)
			bAllowPayment = true;
		else if(m_nAdvance + m_nDiscountPaid < m_nUnpaid){
			CHMSHFReceiptDialog dlg(this, _T("A"));
			dlg.m_nPID = pMF->m_nPID;
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nInvoiceNo = 0;
			dlg.m_szCategory = _T("D"); //Discharge 
			dlg.m_nAmount = abs(m_nRefund);
			dlg.SetMode(VM_CREATEADVANCE);

			if(dlg.DoModal() == IDOK){
				bAllowPayment = true;
				nRefInvoice = dlg.m_nInvoiceNo; 
				m_szSerialNo = dlg.m_szSerialNoKey;
				m_nRecvNo = dlg.m_nReceiveNo;
				bPrintReceipt = dlg.m_bPrintReceipt;
			}
			else
				return false;

			nAdvamt = abs(m_nRefund);
		}
		else
		{
			CRecord rss(&pMF->m_db);
			CString status;
			bool bRefund =false;
			double nPatdebt=0;
			if(pMF->m_nInpatient == 0)
				szSQL.Format(_T("SELECT hd_status as status FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
			else
				szSQL.Format(_T("SELECT hcr_status as status FROM hms_clinical_record WHERE hcr_docno=%ld"), m_nDocumentNo);
			rss.ExecSQL(szSQL);
			if(!rss.IsEOF())
				rss.GetValue(_T("status"), status);

			if(status == _T("T")){
				bRefund = true;
			}
			
			if(bRefund && !m_bOnlyDifferencePaid)
			{
				CHMSHFReceiptDialog dlg(this, _T("R"));
					dlg.m_nPID = pMF->m_nPID;
					dlg.m_nDocumentNo = m_nDocumentNo;
					dlg.m_nInvoiceNo = 0;
					dlg.m_szCategory = _T("D"); //Discharge 
					dlg.m_nAmount = abs(m_nRefund);

					dlg.SetMode(VM_CREATEREFUND);
					if(dlg.DoModal() == IDOK){
						bAllowPayment = true;
						nRefInvoice = dlg.m_nInvoiceNo; 
						m_szSerialNo = dlg.m_szSerialNoKey;
						m_nRecvNo = dlg.m_nReceiveNo;
						bPrintReceipt = dlg.m_bPrintReceipt;
					}
					else
						return false;

					nRefundAmt = abs(m_nRefund);
			}

		}
		
	//	if(!bAllowPayment)
	//		return;
	}
	
	
	
	

	if(m_szSerial == _T("AUTO") || m_szSerialNo.IsEmpty()){
		tmpStr.Format(_T("%s"), pMF->GetSysDate(ddmmyyyy));
		tmpStr.Replace(_T("/"), _T(""));
		m_nBookNo = ToLong(tmpStr);
		tmpStr.Format(_T("%s"), pMF->GetSysTime());
		tmpStr.Replace(_T(":"), _T(""));
		tmpStr.Trim();
		m_nRecvNo = ToInt(tmpStr);
		szSerialNo = _T("AUTO");
	}


	szAdvPaid = _T("N");
	if(m_bAdvPayment)
		szAdvPaid = _T("Y");
	
	long nInvoiceNo=0;
	int ret = 0;
	int nIndex=1;
	
	CRecord rsx(&pMF->m_db);
	pMF->BeginTransaction();

	if(m_bOnlyDifferencePaid)
	{
		szDesc += _T("[DV]");
		szSQL.Format(_T("select hms_fee_createinvoice_service_invoice(%ld, '%s', %ld, %ld, '%s', '%s', '%s', '%s', '', '%s', '%s') "),
			m_nDocumentNo, szSerialNo, m_nBookNo, m_nRecvNo, m_szReceiveDate, pMF->GetCurrentUser(), szDept, szDepts, szDesc, szAdvPaid);
	}
	else
		szSQL.Format(_T("select hms_fee_createinvoice(%ld, '%s', %ld, %ld, '%s', '%s', '%s', '%s', '', '%s', '%s') "),
			m_nDocumentNo, szSerialNo, m_nBookNo, m_nRecvNo, m_szReceiveDate, pMF->GetCurrentUser(), szDept, szDepts, szDesc, szAdvPaid);
_fmsg(_T("%s"), szSQL);
	ret = rsx.ExecSQL(szSQL);

	nInvoiceNo = (long)rsx.GetDoubleValue();
	
	if(nInvoiceNo < 0)
	{
		pMF->Rollback();
		szSQL.Format(_T("DELETE FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_invoiceno=%ld"), m_nDocumentNo, nRefInvoice);
		pMF->ExecSQL(szSQL);
		ShowMessageBox(_T("Can not create invoice."), 0);
		return false;
	}
	else
	{
		szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_advanceamt=%.3f, hfi_advpayment=%.3f, hfi_refundamt=%.3f WHERE hfi_docno=%ld and hfi_invoiceno=%ld"), 
			m_nAdvance, nAdvamt, nRefundAmt, m_nDocumentNo, nInvoiceNo);
		pMF->ExecSQL(szSQL);
		//Cap nhat trang thai cac phieu mien giam
		szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_patpaid=hfi_discount, hfi_refinvoice=%ld WHERE hfi_docno=%ld and hfi_type='D' and hfi_patpaid=0 "), nInvoiceNo, m_nDocumentNo);
		pMF->ExecSQL(szSQL);
	}

	szSQL.Format(_T("UPDATE hms_invfeectl_line SET hifcl_recvno=%ld WHERE lower(hifcl_userid)=lower('%s') AND hifcl_serialno='%s' AND hifcl_bookno=%ld AND hifcl_recvno<%ld"), 
		m_nRecvNo, pMF->GetCurrentUser(), m_szSerial, m_nBookNo, m_nRecvNo);
	pMF->ExecSQL(szSQL);
	
	pMF->Commit();

//Neu co muc phi nao chon khong thu thi tinh lai phi
	bool bRecalc = false;
	CString szFlag;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		tmpStr = m_wndList.GetItemText(i, 9);
		szFlag = m_wndList.GetItemText(i, 13);
		if(szFlag == _T("Item") && tmpStr != _T("X")){
			bRecalc = true;
			break;
		}
	}
	if(bRecalc)
	{
		szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), pMF->GetCurrentUser(), m_nDocumentNo);
		pMF->ExecSQL(szSQL);
	}

	if(m_bOnlyDifferencePaid)
		pMF->PrintInvoice(m_nInvoiceNo);

	if(!m_bOnlyDifferencePaid && (pMF->m_nInpatient > 0 || (pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))) )
	{
		if(m_bPrintDischargePayment){
			szSQL.Format(_T("SELECT hms_fee_dischargepayment(%ld, %ld, %d) "), pMF->m_nDocumentNo, nInvoiceNo, pMF->m_nInpatient);
			int ret = pMF->ExecSQL(szSQL);
			if(ret > 0){
				if( pMF->m_szAutoPrintDischargeVote == _T("Y")){
					if(pMF->m_nInpatient == 0 && pMF->m_szPrintGeneralExamCostSheetType == _T("Y"))
						pMF->PrintGeneralExaminationCost(nInvoiceNo);
					else
					{
						pMF->PrintDischargePaymentFromInvoice(nInvoiceNo);
					}
				}
			}
		}
	}
/*
	if(m_bPrintDischargePayment && pMF->m_szAutoPrintDischargeVote == _T("Y")){
		if(pMF->m_nInpatient == 0 && pMF->m_szPrintGeneralExamCostSheetType == _T("Y"))
			pMF->PrintGeneralExaminationCost(pMF->m_szPaymentDept);
		else
			pMF->PrintDischargePaymentFromInvoice(nInvoiceNo);
	}
*/
	if(nAdvamt > 0 || nRefundAmt > 0 && bPrintReceipt){
		//pMF->PrintReceipt(nInvoiceNo);
		
	}
	
	return true;
}
void CHMSPaymentInvoiceDialog2::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.03"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.02"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	szSQL.Format(_T("select hms_fee_cancelinvoice(%ld, %ld, '%s') "),
		m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	int ret = rs.GetIntValue();
	if(ret <= 0)
	{
		ShowMessageBox(_T("Can not cancel invoice"), MB_ICONWARNING|MB_OK);
		return;		
	}

	//Cap nhat trang thai cac phieu mien giam
	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_patpaid=0, hfi_refinvoice=0 WHERE hfi_docno=%ld and hfi_type='D' and hfi_refinvoice=%ld "), m_nDocumentNo, m_nInvoiceNo);
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), pMF->GetCurrentUser(), m_nDocumentNo);
	pMF->ExecSQL(szSQL);

	CGuiDialog::OnOK();
} 

void CHMSPaymentInvoiceDialog2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_nTotalCost != (m_nDiscountPaid+m_nInsurancePaid))
		pMF->PrintInvoice(m_nInvoiceNo);
//	if(m_bPrintDischargePayment){
//		pMF->PrintDischargePaymentFromInvoice(m_nInvoiceNo);
//	}
	

	return;
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	long	nDocumentNo;
	if(!rpt.Init(_T("Reports/HMS/HF_BANGKECHIPHIKHAMCHUABENH.RPT")) )
		return;
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regplace, ") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_invoiceno=%ld "), m_nInvoiceNo);
				
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	//Report Header
	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("serialno")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);

	//rs.GetValue(_T("pname"), tmpStr);
	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	tmpStr.Empty();
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), tmpStr);
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);

	CReportSection* grp;
	CReportSection* rptDetail = rpt.GetDetail(0); 
	
	CString szType, szState;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		szType = m_wndList.GetItemText(i, 13);
		szState = m_wndList.GetItemText(i, 9);

		if(szType == _T("Type"))
		{
			grp = rpt.GetGroupHeader(1);
			rptDetail = rpt.AddDetail(grp);
			tmpStr = m_wndList.GetItemText(i, 0);
			rptDetail->SetValue(_T("TypeID"), tmpStr);
			StringUpper(m_wndList.GetItemText(i, 1), tmpStr);
			rptDetail->SetValue(_T("TypeName"), tmpStr);
		}
		else if(szType == _T("Group")){
			grp = rpt.GetGroupHeader(1);
			rptDetail = rpt.AddDetail(grp);
			tmpStr = m_wndList.GetItemText(i, 0);
			rptDetail->SetValue(_T("TypeID"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 1);
			rptDetail->SetValue(_T("TypeName"), tmpStr);
		}
		else if(szType == _T("SubGroup")){
			grp = rpt.GetGroupHeader(2);
			rptDetail = rpt.AddDetail(grp);
			tmpStr = m_wndList.GetItemText(i, 0);
			rptDetail->SetValue(_T("SubGroupID"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 1);
			rptDetail->SetValue(_T("SubGroupName"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 5);
			rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 6);
			rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 7);
			rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
		}
		else if(szType == _T("SubAmount")){
			grp = rpt.GetGroupHeader(2);
			rptDetail = rpt.AddDetail(grp);
			tmpStr = m_wndList.GetItemText(i, 1);
			rptDetail->SetValue(_T("SubGroupName"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 5);
			rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 6);
			rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 7);
			rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
		}
		else if(szType == _T("Item")){
			rptDetail = rpt.AddDetail();
			tmpStr = m_wndList.GetItemText(i, 0);
			rptDetail->SetValue(_T("1"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 1);
			rptDetail->SetValue(_T("2"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 2);
			rptDetail->SetValue(_T("3"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 3);
			rptDetail->SetValue(_T("4"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 4);
			rptDetail->SetValue(_T("5"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 5);
			rptDetail->SetValue(_T("6"), tmpStr);			
		}
		else if(szType == _T("TotalAmount")){
			grp = rpt.GetGroupHeader(3);
			rptDetail = rpt.AddDetail(grp);
			tmpStr = m_wndList.GetItemText(i, 5);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 6);
			rptDetail->SetValue(_T("AmountDiscount"), tmpStr);
			tmpStr = m_wndList.GetItemText(i, 7);
			rptDetail->SetValue(_T("AmountPatPaid"), tmpStr);
		}
		
	}
	//Report Footer

	FormatCurrencyStr(rs.GetValue(_T("cost")), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	CString szSumInWord;
	rs.GetValue(_T("cost"), tmpStr);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), tmpStr);
	
	rpt.PrintPreview();

} 
void CHMSPaymentInvoiceDialog2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSPaymentInvoiceDialog2::OnAddHMSPaymentInvoiceDialog2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPaymentInvoiceDialog2::OnEditHMSPaymentInvoiceDialog2(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPaymentInvoiceDialog2::OnDeleteHMSPaymentInvoiceDialog2(){
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
 		OnCancelHMSPaymentInvoiceDialog2(); 
 	}
	return 0;
}
int CHMSPaymentInvoiceDialog2::OnSaveHMSPaymentInvoiceDialog2(){
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
 		//OnHMSPaymentInvoiceDialog2ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPaymentInvoiceDialog2::OnCancelHMSPaymentInvoiceDialog2(){
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
int CHMSPaymentInvoiceDialog2::OnHMSPaymentInvoiceDialog2ListLoadData(){
	return 0;
}

void CHMSPaymentInvoiceDialog2::RecalcTotal(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_nTotalCost = m_nInsurancePaid = m_nDiscountPaid = m_nPatientPaid = m_nUnpaid = m_nPayable = m_nAdvance = 0;
	CString tmpStr;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		tmpStr = m_wndList.GetItemText(i, 9);
		if(tmpStr == _T("X")){
			m_nTotalCost += ToDouble(m_wndList.GetItemText(i, 5));
			if(pMF->GetObjectType() == _T("I"))
				m_nInsurancePaid += ToDouble(m_wndList.GetItemText(i, 6));
			else
				m_nDiscountPaid += ToDouble(m_wndList.GetItemText(i, 6));
			m_nPatientPaid += ToDouble(m_wndList.GetItemText(i, 7));
			m_nPayable += ToDouble(m_wndList.GetItemText(i, 8));
			
		}
	}
	m_nUnpaid = m_nPayable;
	double nFreeAmount=0;

	if(GetMode() != VM_EDIT)
	{
		szSQL.Format(_T("SELECT sum(hfi_patpaid-hfi_cost) as advfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='A' and hfi_category='A' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("advfee"), m_nAdvance);
		}
		else
			m_nAdvance = 0;
		
		szSQL.Format(_T("SELECT sum(hfi_discount) as discountfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='D'"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("discountfee"), nFreeAmount);
		}
	}
	else
	{
		szSQL.Format(_T("SELECT sum(hfi_cost) as advfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='A' and hfi_refinvoice=%ld"), m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("advfee"), m_nAdvance);
		}
		else
			m_nAdvance = 0;
		
		szSQL.Format(_T("SELECT sum(hfi_discount) as discountfee FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='D'"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("discountfee"), nFreeAmount);
		}
		

	}
	int nLast = m_wndList.GetItemCount()-1;




	m_wndList.SetItemText(nLast, 5, m_nTotalCost > 0? ToString(m_nTotalCost): _T(""));
	m_wndList.SetItemText(nLast, 6, (m_nDiscountPaid+m_nInsurancePaid) > 0? ToString(m_nDiscountPaid+m_nInsurancePaid): _T(""));
	m_wndList.SetItemText(nLast, 7, m_nPatientPaid > 0? ToString(m_nPatientPaid): _T(""));
	m_wndList.SetItemText(nLast, 8, m_nPayable > 0? ToString(m_nPayable): _T(""));

	m_nDiscountPaid += nFreeAmount;
	m_nRefund = -1*(m_nTotalCost - (m_nInsurancePaid+m_nDiscountPaid+m_nPatientPaid+m_nAdvance));	
	
	UpdateData(false);
}