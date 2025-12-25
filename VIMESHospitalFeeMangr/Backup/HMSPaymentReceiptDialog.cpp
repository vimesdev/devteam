#include "HMSPaymentReceiptDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "HMSFeeDepositDialog.h"
#include "HMSFeeRefundDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPaymentReceiptDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentReceiptDialog*)pWnd)->OnListDeleteItem();
} 

static int _OnListInsuranceUnpaidItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentReceiptDialog*)pWnd)->OnInsuranceUnpaidItem();
} 

/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnPatientPaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPatientPaidChange();
} */
/*static void _OnPatientPaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPatientPaidSetfocus();} */ 
/*static void _OnPatientPaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPatientPaidKillfocus();
} */
static int _OnPatientPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnPatientPaidCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnInsurancePaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnInsurancePaidChange();
} */
/*static void _OnInsurancePaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnInsurancePaidSetfocus();} */ 
/*static void _OnInsurancePaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnInsurancePaidKillfocus();
} */
static int _OnInsurancePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnInsurancePaidCheckValue();
} 
/*static void _OnDepositChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnDepositChange();
} */
/*static void _OnDepositSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnDepositSetfocus();} */ 
/*static void _OnDepositKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnDepositKillfocus();
} */
static int _OnDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnDepositCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnSerialNoCheckValue();
} 
static void _OnAutoPrintDischargeSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentReceiptDialog*)pWnd)->OnAutoPrintDischargeSelect();
}
/*static void _OnRemissionChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRemissionChange();
} */
/*static void _OnRemissionSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRemissionSetfocus();} */ 
/*static void _OnRemissionKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRemissionKillfocus();
} */
static int _OnRemissionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnRemissionCheckValue();
} 
/*static void _OnFreeChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnFreeChange();
} */
/*static void _OnFreeSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnFreeSetfocus();} */ 
/*static void _OnFreeKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnFreeKillfocus();
} */
static int _OnFreeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnFreeCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static void _OnAutoPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentReceiptDialog*)pWnd)->OnAutoPrintReceiptSelect();
}
/*static void _OnDifferencePaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnDifferencePaidChange();
} */
/*static void _OnDifferencePaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnDifferencePaidSetfocus();} */ 
/*static void _OnDifferencePaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnDifferencePaidKillfocus();
} */
static int _OnDifferencePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnDifferencePaidCheckValue();
} 
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalPayableSetfocus();} */ 
/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalPayableKillfocus();
} */
static int _OnTotalPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnTotalPayableCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnReasonButtonSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnReasonButtonSelect();
} 
static void _OnPaymentSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnPaymentSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnPrintReceiptSelect();
} 
static void _OnPrintPayableSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnPrintPaymentReceiptSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPaymentReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentReceiptDialog*)pWnd)->OnAddHMSPaymentReceiptDialog();
} 
static int _OnEditHMSPaymentReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentReceiptDialog*)pWnd)->OnEditHMSPaymentReceiptDialog();
} 
static int _OnDeleteHMSPaymentReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentReceiptDialog*)pWnd)->OnDeleteHMSPaymentReceiptDialog();
} 
static int _OnSaveHMSPaymentReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentReceiptDialog*)pWnd)->OnSaveHMSPaymentReceiptDialog();
} 
static int _OnCancelHMSPaymentReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentReceiptDialog*)pWnd)->OnCancelHMSPaymentReceiptDialog();
} 
CHMSPaymentReceiptDialog::CHMSPaymentReceiptDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 910;
	m_nDlgHeight = 625;
	SetDefaultValues();
	m_nDocumentNo = 0;
	m_nReceiptNo = 0;
	m_nInvoiceNo = 0;

}
CHMSPaymentReceiptDialog::~CHMSPaymentReceiptDialog(){
}
void CHMSPaymentReceiptDialog::OnCreateComponents(){
	m_wndList.Create(this,10, 30, 995, 485); 
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 10, 490, 140, 515);
	m_wndTotalCost.Create(this,145, 490, 265, 515); 
	m_wndPatientPaidLabel.Create(this, _T("Patient Paid"), 270, 490, 400, 515);
	m_wndPatientPaid.Create(this,405, 490, 525, 515); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 530, 490, 660, 515);
	m_wndReceiptDate.Create(this,665, 490, 805, 515); 
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 610);
	m_wndInsuranceUnpaidFilter.Create(this, _T("Insurance Unpaid Filter"), 810, 490, 995, 515);
	m_wndInsurancePaidLabel.Create(this, _T("Insurance Paid"), 10, 520, 140, 545);
	m_wndInsurancePaid.Create(this,145, 520, 265, 545); 
	m_wndDepositLabel.Create(this, _T("Deposit"), 270, 520, 400, 545);
	m_wndDeposit.Create(this,405, 520, 525, 545); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 530, 520, 660, 545);
	m_wndSerialNo.Create(this,665, 520, 805, 545); 
	m_wndAutoPrintDischarge.Create(this, _T("Auto Print Discharge"), 810, 520, 995, 545);
	m_wndRemissionLabel.Create(this, _T("Remission"), 10, 550, 140, 575);
	m_wndRemission.Create(this,145, 550, 265, 575); 
	m_wndFreeLabel.Create(this, _T("Free"), 270, 550, 400, 575);
	m_wndFree.Create(this,405, 550, 525, 575); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 530, 550, 660, 575);
	m_wndReceiptNo.Create(this,665, 550, 805, 575); 
	m_wndAutoPrintReceipt.Create(this, _T("Auto Print Receipt"), 810, 550, 995, 575);
	m_wndDiffrencePaidLabel.Create(this, _T("Difference Paid"), 10, 580, 140, 605);
	m_wndDifferencePaid.Create(this,145, 580, 265, 605); 
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 270, 580, 400, 605);
	m_wndTotalPayable.Create(this,405, 580, 525, 605); 
	m_wndReasonLabel.Create(this, _T("Reason"), 530, 580, 660, 605);
	m_wndReason.Create(this,665, 580, 965, 605); 
	m_wndReasonButton.Create(this, _T("..."), 970, 580, 995, 605);
	m_wndPayment.Create(this, _T("&Payment"), 490, 615, 590, 640);
	m_wndCancel.Create(this, _T("&Cancel"), 595, 615, 695, 640);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 700, 615, 790, 640);
	m_wndPrintPaymentReceipt.Create(this, _T("&Print Payable"), 795, 615, 895, 640);
	m_wndClose.Create(this, _T("&Close"), 900, 615, 1000, 640);

}
void CHMSPaymentReceiptDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.ModifyStyle(WS_TABSTOP, 0);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndPatientPaid.SetLimitText(16);
//	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndReceiptDate.SetCheckValue(true);
	m_wndInsurancePaid.SetLimitText(16);
	m_wndInsurancePaid.SetCheckValue(true);
	m_wndDeposit.SetLimitText(16);
	//m_wndSerialNo.SetCheckValue(true);
	m_wndSerialNo.LimitText(35);
	m_wndRemission.SetLimitText(16);
	m_wndRemission.SetCheckValue(true);
	m_wndFree.SetLimitText(35);
	m_wndFree.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndDifferencePaid.SetLimitText(16);
	m_wndDifferencePaid.SetCheckValue(true);
	m_wndTotalPayable.SetLimitText(16);
	
	
	m_wndTotalCost.SetReadOnly(true);
	m_wndInsurancePaid.SetReadOnly(true);
	m_wndRemission.SetReadOnly(true);
	m_wndDifferencePaid.SetReadOnly(true);
	m_wndPatientPaid.SetReadOnly(true);
	m_wndDeposit.SetReadOnly(true);
	m_wndFree.SetReadOnly(true);
	m_wndTotalPayable.SetReadOnly(true);
	m_wndReceiptDate.SetReadOnly(true);
	m_wndInsuranceUnpaidFilter.ModifyStyle(WS_TABSTOP, 0);
	m_wndPrintPaymentReceipt.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndList.InsertColumn(1, _T("Reason"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Ins/ Dis cost"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(6, _T("Patpaid"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(7, _T("Cost"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(8, _T("Mark"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(9, _T("idx"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("groupid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Type"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(12, _T("ITEM"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(13, _T("itemid"), CFMT_TEXT, 0);		
	m_wndList.InsertColumn(14, _T("Discount"), CFMT_MONEY, 90);	


	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
}
void CHMSPaymentReceiptDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	

	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") || pMF->GetObjectType() == _T("D"))
	{
		m_wndList.SetWindowText(_T("Fee Information"));	
		m_wndList.AddEvent(1, _T("Insurance Unpaid"), _OnListInsuranceUnpaidItemFnc);
	}

//	m_wndList.AddEvent(1, _T("Select"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
//	m_wndList.AddEvent(1, _T("Select All"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
//	m_wndList.AddEvent(1, _T("Un Select "), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndPatientPaid.SetEvent(WE_CHANGE, _OnPatientPaidChangeFnc);
	//m_wndPatientPaid.SetEvent(WE_SETFOCUS, _OnPatientPaidSetfocusFnc);
	//m_wndPatientPaid.SetEvent(WE_KILLFOCUS, _OnPatientPaidKillfocusFnc);
	m_wndPatientPaid.SetEvent(WE_CHECKVALUE, _OnPatientPaidCheckValueFnc);
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndInsurancePaid.SetEvent(WE_CHANGE, _OnInsurancePaidChangeFnc);
	//m_wndInsurancePaid.SetEvent(WE_SETFOCUS, _OnInsurancePaidSetfocusFnc);
	//m_wndInsurancePaid.SetEvent(WE_KILLFOCUS, _OnInsurancePaidKillfocusFnc);
	m_wndInsurancePaid.SetEvent(WE_CHECKVALUE, _OnInsurancePaidCheckValueFnc);
	//m_wndDeposit.SetEvent(WE_CHANGE, _OnDepositChangeFnc);
	//m_wndDeposit.SetEvent(WE_SETFOCUS, _OnDepositSetfocusFnc);
	//m_wndDeposit.SetEvent(WE_KILLFOCUS, _OnDepositKillfocusFnc);
	m_wndDeposit.SetEvent(WE_CHECKVALUE, _OnDepositCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	m_wndAutoPrintDischarge.SetEvent(WE_CLICK, _OnAutoPrintDischargeSelectFnc);
	//m_wndRemission.SetEvent(WE_CHANGE, _OnRemissionChangeFnc);
	//m_wndRemission.SetEvent(WE_SETFOCUS, _OnRemissionSetfocusFnc);
	//m_wndRemission.SetEvent(WE_KILLFOCUS, _OnRemissionKillfocusFnc);
	m_wndRemission.SetEvent(WE_CHECKVALUE, _OnRemissionCheckValueFnc);
	//m_wndFree.SetEvent(WE_CHANGE, _OnFreeChangeFnc);
	//m_wndFree.SetEvent(WE_SETFOCUS, _OnFreeSetfocusFnc);
	//m_wndFree.SetEvent(WE_KILLFOCUS, _OnFreeKillfocusFnc);
	m_wndFree.SetEvent(WE_CHECKVALUE, _OnFreeCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	m_wndAutoPrintReceipt.SetEvent(WE_CLICK, _OnAutoPrintReceiptSelectFnc);
	//m_wndDifferencePaid.SetEvent(WE_CHANGE, _OnDifferencePaidChangeFnc);
	//m_wndDifferencePaid.SetEvent(WE_SETFOCUS, _OnDifferencePaidSetfocusFnc);
	//m_wndDifferencePaid.SetEvent(WE_KILLFOCUS, _OnDifferencePaidKillfocusFnc);
	m_wndDifferencePaid.SetEvent(WE_CHECKVALUE, _OnDifferencePaidCheckValueFnc);
	//m_wndTotalPayable.SetEvent(WE_CHANGE, _OnTotalPayableChangeFnc);
	//m_wndTotalPayable.SetEvent(WE_SETFOCUS, _OnTotalPayableSetfocusFnc);
	//m_wndTotalPayable.SetEvent(WE_KILLFOCUS, _OnTotalPayableKillfocusFnc);
	m_wndTotalPayable.SetEvent(WE_CHECKVALUE, _OnTotalPayableCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndReasonButton.SetEvent(WE_CLICK, _OnReasonButtonSelectFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndPrintPaymentReceipt.SetEvent(WE_CLICK, _OnPrintPayableSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetWindowFont(&m_wndTotalCost, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndTotalCost.SetTextColor(RGB(0, 0, 255));
	
	SetWindowFont(&m_wndDeposit, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndDeposit.SetTextColor(RGB(255, 64, 0));
	
	SetWindowFont(&m_wndInsurancePaid, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndInsurancePaid.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndRemission, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndRemission.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndTotalPayable, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndTotalPayable.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndPatientPaid, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndPatientPaid.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndDifferencePaid, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndDifferencePaid.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndFree, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndFree.SetTextColor(RGB(255, 64, 0));

	m_wndTotalCost.SetCurrencyFormat(true);
	m_wndInsurancePaid.SetCurrencyFormat(true);
	m_wndRemission.SetCurrencyFormat(true);
	m_wndDifferencePaid.SetCurrencyFormat(true);
	m_wndPatientPaid.SetCurrencyFormat(true);
	m_wndDeposit.SetCurrencyFormat(true);
	m_wndFree.SetCurrencyFormat(true);
	m_wndTotalPayable.SetCurrencyFormat(true);

	SetMode(GetMode());
	
	
	if(GetMode() == VM_ADD)
	{
		m_szReceiptDate = pMF->m_szRecvDate;
		m_wndPayment.SetFocus();
	}
	else
		GetDataToScreen();
	if(pMF->m_szObject != _T("S")){
		m_bInsuranceUnpaidFilter = FALSE;
		m_bAutoPrintPaymentReceipt = TRUE;
	}
	else
	{
		m_wndInsuranceUnpaidFilter.EnableWindow(false);
		m_bInsuranceUnpaidFilter = FALSE;
		//m_wndPrintPaymentReceipt.EnableWindow(false);
		m_bAutoPrintPaymentReceipt = FALSE;
	}
	if(pMF->m_nInpatient == 0)
		m_bAutoPrintPaymentReceipt = false;
//	if(pMF->m_szAutoPrintDischargeVote == _T("Y"))
//		m_bAutoPrintPaymentReceipt = TRUE;

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
		m_wndPrintPaymentReceipt.EnableWindow(false);
	}
	else{
		CString tmpStr;
		rs.GetValue(_T("status"), tmpStr);
		if(tmpStr != _T("T") && tmpStr != _T("A") ){
			m_wndPrintPaymentReceipt.EnableWindow(false);
		}
		else
		{
			m_bAutoPrintPaymentReceipt = TRUE;
			
		}
	}
	if(!pMF->IsFinishAndPaymentFees(m_nDocumentNo)){
		m_bInsuranceUnpaidFilter = true;
		m_wndInsuranceUnpaidFilter.EnableWindow(false);
	}
	OnListLoadData();

	if(m_nInvoiceNo > 0){
		m_wndPayment.EnableWindow(false);
	}


}
void CHMSPaymentReceiptDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndPatientPaid.GetDlgCtrlID(), m_nPatientPaid);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Check(pDX, m_wndInsuranceUnpaidFilter.GetDlgCtrlID(), m_bInsuranceUnpaidFilter);
	DDX_Text(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_nInsurancePaid);
	DDX_Text(pDX, m_wndDeposit.GetDlgCtrlID(), m_nDeposit);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Check(pDX, m_wndAutoPrintDischarge.GetDlgCtrlID(), m_bAutoPrintPaymentReceipt);
	DDX_Text(pDX, m_wndRemission.GetDlgCtrlID(), m_nRemission);
	DDX_Text(pDX, m_wndFree.GetDlgCtrlID(), m_nFree);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_Check(pDX, m_wndAutoPrintReceipt.GetDlgCtrlID(), m_bAutoPrintReceipt);
	DDX_Text(pDX, m_wndDifferencePaid.GetDlgCtrlID(), m_nDifferencePaid);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CHMSPaymentReceiptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nInvoiceNo > 0)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_invoice WHERE hfi_invoiceno=%ld "), m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			double nDeposit = 0;
			CString tmpStr;
			rs.GetValue(_T("hfi_serialno"), m_szSerial);
			rs.GetValue(_T("hfi_bookno"), m_nBookNo);
			rs.GetValue(_T("hfi_recvno"), m_nReceiptNo);
			rs.GetValue(_T("hfi_recvdate"), m_szReceiptDate);
			rs.GetValue(_T("hfi_cost"), m_nTotalCost);
			if(pMF->GetObjectType() == _T("D"))
				rs.GetValue(_T("hfi_discount"), m_nRemission);
			else
				rs.GetValue(_T("hfi_discount"), m_nInsurancePaid);

			rs.GetValue(_T("hfi_patpaid"), m_nPatientPaid);
			rs.GetValue(_T("hfi_advanceamt"), m_nDeposit);
			rs.GetValue(_T("hfi_advpayment"), m_nTotalPayable);
			rs.GetValue(_T("hfi_refundamt"), m_nRefund);
			rs.GetValue(_T("hfi_free"), m_nFree);
			if(m_nRefund > 0){
				m_nTotalPayable =-1*m_nRefund;
			}

		
			m_szSerialNoKey.Format(_T("%s-%ld"), m_szSerial, m_nBookNo);
			m_wndPrintReceipt.SetFocus();
			m_wndSerialNo.EnableWindow(false);
			m_wndReceiptNo.EnableWindow(false);

			m_wndReason.EnableWindow(false);
			
			if(m_nFree <= 0)
			{
				szSQL.Format(_T("select sum(hfe_amount-hfe_paid) as free ") \
					_T("from hms_fee_discount ") \
					_T("where hfe_docno=%ld and hfe_type='D' "), m_nDocumentNo);
				rs.ExecSQL(szSQL);
				if(!rs.IsEOF())
					rs.GetValue(_T("free"), m_nFree);
			}
			UpdateData(false);
		}

	}

}
void CHMSPaymentReceiptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentReceiptDialog::SetDefaultValues(){
	
	m_nTotalCost=0;
	m_nInsurancePaid=0;
	m_nDeposit=0;
	m_bAdvReceipt=TRUE;
	m_nPatientPaid=0;
	m_nTotalPayable=0;
	m_nRefund=0;
	m_szSerialNo.Empty();
	m_szSerial = _T("AUTO");
	m_nReceiptNo=0;
	m_szReceiptDate.Empty();
	m_bInsuranceUnpaidFilter=FALSE;
	m_nInsurancePaid=0;
	m_nDeposit=0;
	m_szSerialNo.Empty();
	m_bAutoPrintPaymentReceipt=FALSE;
	m_nRemission=0;
	m_nFree=0;
	m_nReceiptNo=0;
	m_bAutoPrintReceipt=FALSE;
	m_nDifferencePaid=0;
	m_nTotalPayable=0;
	m_szReason.Empty();

}
int CHMSPaymentReceiptDialog::SetMode(int nMode){
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
		m_wndRemission.EnableWindow(false);
		m_wndDeposit.EnableWindow(false);
		m_wndTotalPayable.EnableWindow(false);
		if(nMode == VM_EDIT){
			m_wndTotalPayable.EnableWindow(false);
			m_wndSerialNo.EnableWindow(false);
			m_wndReceiptNo.EnableWindow(false);
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSPaymentReceiptDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 || GetMode() == VM_EDIT) return;
	long nIdx = 0;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CString szSQL, tmpStr, itemID, groupId, szFeeType;
	tmpStr = m_wndList.GetItemText(nSel, 8);
	nIdx = ToLong(m_wndList.GetItemText(nSel, 9));
	groupId = m_wndList.GetItemText(nSel, 10);
	szFeeType = m_wndList.GetItemText(nSel, 11);
	itemID = m_wndList.GetItemText(nSel, 13);
	if(tmpStr == _T("X")){
		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='C' WHERE he_docno=%ld AND he_examtype='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_status='C' WHERE pcmsol_itemid='%s' and hfe_status='O' and pcmsol_orderid in(select pcmso_orderid from pcms_order where pcmso_docno=%ld) "), itemID, m_nDocumentNo);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_status='C' WHERE ho_docno=%ld AND ho_itemid='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_status='C' WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_itemid='%s' and hfe_status='O'"), m_nDocumentNo, itemID);
//		else if(groupId.Left(1) == _T("C"))
//			szSQL.Format(_T(" UPDATE hms_bed SET hfe_status='C' WHERE hb_docno=%ld AND cast(hb_idx as text)='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("F"))
			szSQL.Format(_T(" UPDATE hms_other_fee SET hfe_status='C' WHERE hfe_docno=%ld AND hfe_itemid='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);

		pMF->ExecSQL(szSQL);
		m_wndList.SetItemText(nSel, 8, _T(""));
	}
	else
	{
		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='O' WHERE he_docno=%ld AND he_examtype='%s' and hfe_status='C' "), m_nDocumentNo, itemID);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_status='O' WHERE pcmsol_itemid='%s' and  hfe_status='C' and pcmsol_orderid in(select pcmso_orderid from pcms_order where pcmso_docno=%ld) "), itemID, m_nDocumentNo);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_status='O' WHERE ho_docno=%ld AND ho_itemid='%s' and hfe_status='C' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_status='O' WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_itemid='%s' and hfe_status='C'"), m_nDocumentNo, itemID);
//		else if(groupId.Left(1) == _T("C"))
//			szSQL.Format(_T(" UPDATE hms_bed SET hfe_status='O' WHERE hb_docno=%ld AND cast(hb_idx as text)='%s' AND hfe_status='C' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("F"))
			szSQL.Format(_T(" UPDATE hms_other_fee SET hfe_status='O' WHERE hfe_docno=%ld AND hfe_itemid='%s' AND hfe_status='C' "), m_nDocumentNo, itemID);
		
		pMF->ExecSQL(szSQL);

		m_wndList.SetItemText(nSel, 8, _T("X"));
	}
	OnListLoadData();
	m_wndList.SetCurSel(nSel);
} 
void CHMSPaymentReceiptDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentReceiptDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	return 0;
} 

#include "HMSConfirmInsuranceFeesDialog.h"

int CHMSPaymentReceiptDialog::OnInsuranceUnpaidItem(){
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
	tmpStr = m_wndList.GetItemText(nSel, 8);
	nIdx = ToLong(m_wndList.GetItemText(nSel, 9));
	groupId = m_wndList.GetItemText(nSel, 10);
	szFeeType = m_wndList.GetItemText(nSel, 11);
	itemID = m_wndList.GetItemText(nSel, 13);

	CHMSConfirmInsuranceFeesDialog dlg(this);
	dlg.m_szGroupID = groupId;
	dlg.m_szType = szFeeType;
	dlg.m_szFeeID = itemID;
	
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
	}
	return 0;
	int nMsg = ShowMessageBox(_T("Do you want to confirm entry?(Y/N)"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;

		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_diffcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_diffpaid=0 WHERE he_docno=%ld AND he_examtype='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_diffcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_diffpaid=0 WHERE pcmsol_itemid='%s' and hfe_status='O' and pcmsol_orderid in(select pcmso_orderid from pcms_order where pcmso_docno=%ld) "), itemID, m_nDocumentNo);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_diffcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_diffpaid=0 WHERE ho_docno=%ld AND ho_itemid='%s' and hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_diffcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_diffpaid=0 WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_itemid='%s' and hfe_status='O'"), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("C"))
			szSQL.Format(_T(" UPDATE hms_bed SET hfe_diffcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_diffpaid=0 WHERE hb_docno=%ld AND cast(hb_idx as text)='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);
		else if(groupId.Left(1) == _T("F"))
			szSQL.Format(_T(" UPDATE hms_other_fee SET hfe_diffcost=0,hfe_discount=0,hfe_patdebt=hfe_cost,hfe_patpaid=0,hfe_diffpaid=0 WHERE hfe_docno=%ld AND hfe_itemid='%s' AND hfe_status='O' "), m_nDocumentNo, itemID);

	pMF->ExecSQL(szSQL);
	OnListLoadData();
	m_wndList.SetCurSel(nSel);
	return 0;
} 
long CHMSPaymentReceiptDialog::OnListLoadData(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szFeeID, szID, szDepts;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;
	//UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex, nChapterID=0;
	double nTotalCost=0,
			nTotalDiscount=0,
			nTotalPayable=0,
			nTotalFree,
			nGroup0Cost = 0,
			nGroup0Discount=0,
			nGroup0Payable=0,
			nGroup1Cost = 0,
			nGroup1Discount=0,
			nGroup1Payable=0,
			nGroup2Cost = 0,
			nGroup2Discount=0,
			nGroup2Payable=0,
			nCost=0, nDiscount=0, nPayable=0, nDiffCost=0, nFreeAmount=0, nInsDiscount=0;


	double dAmount = 0, dInsAmount=0, dDifAmount=0, dFreeAmount=0, dDiscount;
	int nItem=0, nOldItem=0, nItem2;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;

	
	if(m_nInvoiceNo <= 0)
	{
		m_nTotalCost = m_nInsurancePaid = m_nRemission = m_nDifferencePaid = m_nPatientPaid = m_nDeposit = m_nFree = m_nTotalPayable = 0;
	}


	szDepts = pMF->m_szDepartments;
	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));

	if(GetMode() == VM_EDIT){
		szWhere.Format(_T(" AND hfe_invoiceno=%ld "), m_nInvoiceNo);
	}
	else 
	{
		szWhere.Format(_T(" AND hfe_status in('O','C') AND hfe_deptid in(%s) "), szDepts);
		if(pMF->IsInPatient()){
			if (pMF->m_szOutpatient != _T("Y")) szWhere.AppendFormat(_T(" and hfe_group <>'D0000' "));
			szWhere.AppendFormat(_T(" and hfe_class in('I','R') "));
		}
		else
		{
			szWhere.AppendFormat(_T(" and hfe_class = 'E'  "));
		}
	}

	if(m_bInsuranceUnpaidFilter){
		szWhere.AppendFormat(_T(" AND (hfe_discount=0) "));
	}

	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
	grs.ExecSQL(szSQL);

	szSQL.Format(_T(" SELECT hfe_status as status, ") \
		_T("		hfe_deptid as deptid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T("		hfe_rowid as xrowid, ") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_insprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inspaid,") \
		_T(" 		sum(hfe_diffcost) as diffcost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_cost-hfe_inspaid) as patpaid,") \
		_T(" 		sum(hfe_patpaid) as payable, ") \
		_T(" 		sum(hfe_diffpaid) as diffpaid ") \
		_T(" FROM hmsv_fee") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and hfe_cost > 0 %s ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status, hfe_rowid, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_insprice, hfe_deptid") \
		_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"), m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);

	_fmsg(_T("%s"), szSQL);


	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	m_bRemission100 = false;	
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
			if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 5, nGroup0Discount > 0?ToString((double)nGroup0Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup0Payable > 0?ToString((double)nGroup0Payable):_T(""));
				m_wndList.SetItemText(nItem, 7, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
			}

			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndList.SetItemText(nItem, 13, _T("Type"));
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 8, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
			nGroup0Cost = nGroup0Discount = nGroup0Payable = 0;
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
			m_wndList.MergeCell(nItem, 1, nItem, 8);
			m_wndList.SetItemText(nItem, 13, _T("Group"));
			nGroup1Discount = nGroup1Payable = nGroup1Cost = 0;
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
							if(nGroup2Cost > 0 && nOldItem > 0){
								m_wndList.SetItemText(nOldItem, 5, nGroup2Discount>0?ToString(nGroup2Discount):_T(""));
								m_wndList.SetItemText(nOldItem, 6, nGroup2Payable>0?ToString(nGroup2Payable):_T(""));
								m_wndList.SetItemText(nOldItem, 7, nGroup2Cost>0?ToString(nGroup2Cost):_T(""));								
							}
							szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							m_wndList.SetItemText(nItem2, 13, _T("SubGroup"));
							nOldItem = nItem2;
							m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							m_wndList.MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

							nGroup2Discount = nGroup2Payable = nGroup2Cost= 0;
						}

						
						nSubItem++;
						
						double nCost=0, nDiscount=0, nPatpaid=0;
						CString status;
						rs.GetValue(_T("status"), status);
						rs.GetValue(_T("cost"), nCost);
						rs.GetValue(_T("discount"), nDiscount);
						nInsDiscount+= nDiscount;
						nDiscount = 0;

						if(status == _T("O") || status == _T("P"))
						{
							nTotalCost += nCost;
							nGroup0Cost += nCost;
							nGroup1Cost += nCost;
							nGroup2Cost += nCost;
						}

						if(pMF->m_szViewInsurancePaid == _T("Y"))
						{
							if(pMF->GetObjectType() == _T("D"))
							{
								rs.GetValue(_T("discount"), nDiscount);
								if(status == _T("O") || status == _T("P"))
								{
									nTotalDiscount += nDiscount;
									nGroup0Discount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
								}
							}
							else if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
							{
								rs.GetValue(_T("inspaid"), nDiscount);
								if(status == _T("O") || status == _T("P"))
								{
									nTotalDiscount += nDiscount;
									nGroup0Discount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
								}
							}

							if(status == _T("O") || status == _T("P"))
							{
								nPatpaid = nCost-nDiscount;
								nTotalPayable += nPatpaid;
								nGroup0Payable += nPatpaid;
								nGroup1Payable += nPatpaid;
								nGroup2Payable += nPatpaid;
							}
							
							if(status == _T("P"))
							{								  
									double nDifpaid;
									rs.GetValue(_T("diffpaid"), nDifpaid);
									//nPatpaid += nDifpaid;
									//nTotalPayable += nDifpaid;
									//nGroup1Payable += nDifpaid;
									//nGroup2Payable += nDifpaid;
							}

							
							
							if(m_nInvoiceNo > 0)
							{
								
									m_wndList.AddItems(_T(""), 
									rs.GetValue(_T("name")),
									rs.GetValue(_T("unit")),
									rs.GetValue(_T("qty")),
									rs.GetValue(_T("unitprice")),
									pMF->GetObjectType() ==_T("D")?rs.GetValue(_T("discount")):rs.GetValue(_T("inspaid")),
									ToString(nPatpaid),
									rs.GetValue(_T("cost")),
									_T("X"),
									rs.GetValue(_T("idx")),
									rs.GetValue(_T("groupid")),
									rs.GetValue(_T("feetype")),
									_T("Item"),
									rs.GetValue(_T("itemid")),
									rs.GetValue(_T("discount")),
									NULL);

							}
							else
							{
								m_wndList.AddItems(_T(""), 
									rs.GetValue(_T("name")),
									rs.GetValue(_T("unit")),
									rs.GetValue(_T("qty")),
									rs.GetValue(_T("unitprice")),
									pMF->GetObjectType() ==_T("D")?rs.GetValue(_T("discount")):rs.GetValue(_T("inspaid")),
									ToString(nPatpaid),
									rs.GetValue(_T("cost")),
									status ==_T("O")?_T("X"):_T(""),
									rs.GetValue(_T("idx")),
									rs.GetValue(_T("groupid")),
									rs.GetValue(_T("feetype")),
									_T("Item"),
									rs.GetValue(_T("itemid")),
									rs.GetValue(_T("discount")),
									NULL);
							}
						}
						else
						{
							CString szMark = _T("X");
							if(status == _T("C"))
								szMark = _T("");

							rs.GetValue(_T("discount"), dAmount);
							if(status == _T("O") || status == _T("P"))
							{
								nTotalDiscount += dAmount;
								nGroup0Discount += dAmount;
								nGroup1Discount += dAmount;
								nGroup2Discount += dAmount;
							}
							if(m_nInvoiceNo > 0)
								rs.GetValue(_T("payable"), dAmount);
							else
								rs.GetValue(_T("patdebt"), dAmount);

							if(status == _T("O") || status == _T("P"))
							{
								nTotalPayable += dAmount;
								nGroup0Payable += dAmount;
								nGroup1Payable += dAmount;
								nGroup2Payable += dAmount;
							}

							if(status == _T("P"))
							{								  
									double nDifpaid;
									rs.GetValue(_T("diffpaid"), nDifpaid);
									nPatpaid += nDifpaid;
									nTotalPayable += nDifpaid;
									nGroup0Payable += nDifpaid;
									nGroup1Payable += nDifpaid;
									nGroup2Payable += nDifpaid;
							}


							m_wndList.AddItems(_T(""), 
								rs.GetValue(_T("name")),
								rs.GetValue(_T("unit")),
								rs.GetValue(_T("qty")),
								rs.GetValue(_T("unitprice")),
								rs.GetValue(_T("discount")),
								m_nInvoiceNo > 0?rs.GetValue(_T("payable")):rs.GetValue(_T("patdebt")),
								rs.GetValue(_T("cost")),
								szMark,
							    rs.GetValue(_T("idx")),
								rs.GetValue(_T("groupid")),
								rs.GetValue(_T("feetype")),
								_T("Item"),
								rs.GetValue(_T("itemid")),
								rs.GetValue(_T("discount")),
								NULL);

						}
						bDeleteParent = false;
					}
					else
						break;
					rs.MoveNext();

			}
			if(nGroup1Cost > 0)
			{
				
				if(nGroup2Cost > 0){
					m_wndList.SetItemText(nOldItem, 5, nGroup2Discount > 0?ToString(nGroup2Discount):_T(""));
					m_wndList.SetItemText(nOldItem, 6, nGroup2Payable> 0?ToString(nGroup2Payable):_T(""));
					m_wndList.SetItemText(nOldItem, 7, nGroup2Cost > 0?ToString(nGroup2Cost):_T(""));
				}
				nGroup2Discount = nGroup2Payable = nGroup2Cost = 0;
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
				m_wndList.SetItemText(nItem, 13, _T("SubAmount"));
				m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 5, nGroup1Discount > 0?ToString(nGroup1Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup1Payable > 0?ToString(nGroup1Payable):_T(""));
				m_wndList.SetItemText(nItem, 7, nGroup1Cost > 0?ToString(nGroup1Cost):_T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				nGroup1Discount = nGroup1Payable = nGroup1Cost= 0;
			}

		}

		grs.MoveNext();
	
	}


	if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 5, nGroup0Discount > 0?ToString((double)nGroup0Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup0Payable > 0?ToString((double)nGroup0Payable):_T(""));
				m_wndList.SetItemText(nItem, 7, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
	}

	
	if(nTotalCost > 0){
			CString szLabel;
			m_wndList.AddItems(_T(""), NULL);
			
			TranslateString(_T("Total Amount"), szLabel);
			tmpStr.Format(_T("%s ("), szLabel);
			for (int i =0; i < nChapterID; i++)
			{
				if(i > 0)
					tmpStr += _T("+");
				tmpStr.AppendFormat(_T("%s"), lpszChapter[i]);
			}
			tmpStr += _T(")");

			nItem = m_wndList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			_T(""),
			nTotalDiscount>0?ToString(nTotalDiscount):_T(""),
			nTotalPayable>0?ToString(nTotalPayable):_T(""),
			nTotalCost>0?ToString(nTotalCost):_T(""),
			NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			m_wndList.SetItemText(nItem, 13, _T("TotalAmount"));
	}


	
	if(nTotalCost > 0){
		double dFreeAmount = 0;
		if(nTotalDiscount > 0)
		{
			if(pMF->m_szViewInsurancePaid == _T("Y"))
			{
				if(nInsDiscount == nTotalDiscount)
				{
					dFreeAmount = nInsDiscount;	
					m_bRemission100 = true;
				}
				else
					dFreeAmount = str2int(pMF->m_wndPatientFee.m_szCardDiscount)*nTotalDiscount/100;
			}
			else
				dFreeAmount = nTotalDiscount;
		}
		m_nTotalCost = ceil(nTotalCost);
		
		if(pMF->GetObjectType() == _T("D") )
			m_nRemission = ceil(dFreeAmount);
		else
			m_nInsurancePaid = ceil(dFreeAmount);
	}
	
	m_wndList.EndLoad();
	
	if(m_wndList.GetItemCount() <= 0)
		m_wndPayment.EnableWindow(false);
	else
		m_wndPayment.EnableWindow(true);

	if(m_nInvoiceNo <= 0)
	{
		m_nDeposit =0;
		szSQL.Format(_T("SELECT sum(hfe_amount-hfe_paid) as deposit ") \
			_T("FROM hms_fee_deposit ") \
			_T("WHERE hfe_docno=%ld and hfe_type='A' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("deposit"), m_nDeposit);

		}
		else
			m_nDeposit = 0;

		
		szSQL.Format(_T("SELECT sum(hfe_amount-hfe_paid) as discountfee ") \
			_T("FROM hms_fee_discount ") \
			_T("WHERE hfe_docno=%ld and hfe_type='D' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("discountfee"), m_nFree);
		}
	
		m_nPatientPaid = ceil(m_nTotalCost-m_nInsurancePaid-m_nRemission);
		m_nTotalPayable = ceil(m_nPatientPaid-m_nDeposit-m_nFree);
	}
	UpdateData(false);
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnTotalCostChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalCostSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalCostKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnPatientPaidChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnPatientPaidSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnPatientPaidKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnPatientPaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnReceiptDateChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnReceiptDateCheckValue(){
	return 0;
} 
	void CHMSPaymentReceiptDialog::OnInsuranceUnpaidFilterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPaymentReceiptDialog::OnInsurancePaidChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnInsurancePaidSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnInsurancePaidKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnInsurancePaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnDepositChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnDepositSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnDepositKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnDepositCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnSerialNoChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnSerialNoSetfocus(){
	
}*/
/*void CHMSPaymentReceiptDialog::OnSerialNoKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnSerialNoCheckValue(){
	return 0;
} 
	void CHMSPaymentReceiptDialog::OnAutoPrintDischargeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPaymentReceiptDialog::OnRemissionChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnRemissionSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnRemissionKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnRemissionCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnFreeChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnFreeSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnFreeKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnFreeCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnReceiptNoChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnReceiptNoCheckValue(){
	return 0;
} 
	void CHMSPaymentReceiptDialog::OnAutoPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPaymentReceiptDialog::OnDifferencePaidChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnDifferencePaidSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnDifferencePaidKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnDifferencePaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnTotalPayableChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalPayableSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalPayableKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnTotalPayableCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnReasonChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnReasonSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnReasonKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSPaymentReceiptDialog::OnReasonButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

bool CHMSPaymentReceiptDialog::OnReceiptFee()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDesc, tmpStr, szDepts, szAdvPaid, szSerialNo;
	CString szDept;
	long nRefInvoice = 0;
	UpdateData(true);
	if(m_wndSerialNo.GetWindowTextLength() == 0)
		m_szSerial = _T("AUTO");

	if(!IsValidateData())
		return false;
	
	
	szDesc = m_szReason;

	szDepts = m_szDepartments;

	bool bFlag = false;
	bool bPrintReceipt = false;
	double nAdvamt = 0, nRefundAmt = 0;

	szDept = pMF->m_szReceiptDeptID;
	if(pMF->m_nInpatient > 0 )
	{
		//if((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")))
		if (pMF->m_szOutpatient !=_T("Y"))
		{
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='C', he_hasfee='Y' WHERE he_docno=%ld and hfe_status<>'P' and hfe_invoiceno=0 "), m_nDocumentNo);
			pMF->ExecSQL(szSQL);
		}
		bFlag = true;
	}
	if(m_szSerial == _T("AUTO") || m_szSerialNo.IsEmpty()){
		tmpStr.Format(_T("%s"), pMF->GetSysDate(ddmmyyyy));
		tmpStr.Replace(_T("/"), _T(""));
		m_nBookNo = ToLong(tmpStr);
		tmpStr.Format(_T("%s"), pMF->GetSysTime());
		tmpStr.Replace(_T(":"), _T(""));
		tmpStr.Trim();
		m_nReceiptNo = ToInt(tmpStr);
		szSerialNo = _T("AUTO");
	}
	szAdvPaid = _T("N");
	if(pMF->m_nInpatient > 0)
		szAdvPaid = _T("Y");
	else
		szAdvPaid = _T("N");
	
	long nInvoiceNo=0;
	int ret = 0;
	int nIndex=1;
	
	CRecord rsx(&pMF->m_db);
	pMF->BeginTransaction();
	CString szRecvDate;

	if(m_szReceiptDate.GetLength() <= 10)
		szRecvDate.Format(_T("%s %s"), m_szReceiptDate, pMF->GetSysTime());
	else
		szRecvDate = m_szReceiptDate;
	if(m_bInsuranceUnpaidFilter)
	{
		szDesc += _T("[DV]");
		szSQL.Format(_T("select hms_fee_createinvoice_service(%ld, '%s', %ld, %ld, '%s', '%s', '%s', '%s', '', '%s', '%s') "),
			m_nDocumentNo, szSerialNo, m_nBookNo, m_nReceiptNo, szRecvDate, pMF->GetCurrentUser(), szDept, szDepts, szDesc, szAdvPaid);
	}
	else
		szSQL.Format(_T("select hms_fee_createinvoice(%ld, '%s', %ld, %ld, '%s', '%s', '%s', '%s', '', '%s', '%s') "),
			m_nDocumentNo, szSerialNo, m_nBookNo, m_nReceiptNo, szRecvDate, pMF->GetCurrentUser(), szDept, szDepts, szDesc, szAdvPaid);

//_fmsg(_T("%s"), szSQL);
	ret = rsx.ExecSQL(szSQL);

	nInvoiceNo = (long)rsx.GetIntValue();
	m_nInvoiceNo = nInvoiceNo;
	if(nInvoiceNo < 0)
	{
		pMF->Rollback();
		ShowMessageBox(_T("Can not create invoice."), 0);
		return false;
	}

	szSQL.Format(_T("UPDATE hms_invfeectl_line SET hifcl_recvno=%ld WHERE lower(hifcl_userid)=lower('%s') AND hifcl_serialno='%s' AND hifcl_bookno=%ld AND hifcl_recvno<%ld"), 
		m_nReceiptNo, pMF->GetCurrentUser(), m_szSerial, m_nBookNo, m_nReceiptNo);
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

	if(m_bInsuranceUnpaidFilter || (pMF->m_nInpatient == 0 && (pMF->GetObjectType() == _T("S") || pMF->m_szObject == _T("X"))) )
	{
		pMF->PrintInvoice(m_nInvoiceNo);
		return true;
		
	}

//Neu truong hop benh nhan ngoai tru thanh toan ra vien
	if(pMF->m_nInpatient == 0 && pMF->IsFinishAndPaymentFees(pMF->m_nDocumentNo)){

		szSQL.Format(_T("UPDATE hms_doc SET hdf_invoicefee=%ld, hdf_acceptedfee='Y', hdf_accepteddate='%s' ")
			_T(" WHERE hd_docno=%ld and hdf_invoicefee=0 "), m_nInvoiceNo, m_szReceiptDate, pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
//In bang ke chi phi kham chua benh		
		if( pMF->m_szAutoPrintDischargeVote == _T("Y") && !m_bInsuranceUnpaidFilter){
				if(pMF->m_szPrintGeneralExamCostSheetType == _T("Y"))
					pMF->PrintGeneralExaminationCost(m_nInvoiceNo);
		}

	}
	else if(pMF->m_nInpatient > 0){
		CString szWhere;
		szWhere.Empty();	   
		szSQL.Format(_T("UPDATE hms_doc SET hdf_invoicefee=%ld, hdf_acceptedfee='Y', hdf_accepteddate='%s' ")
			_T(" WHERE hd_docno=%ld and hdf_invoicefee=0 "), m_nInvoiceNo, m_szReceiptDate, pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		if(pMF->m_szReceiptMethod == _T("D"))
			szWhere.Format(_T(" and htr_deptid='%s' "), szDept);
		szSQL.Format(_T("UPDATE hms_treatment_record SET htrf_invoicefee=%ld, htrf_acceptedfee='Y', htrf_accepteddate='%s' ")
			_T(" WHERE htr_docno=%ld and htrf_invoicefee=0 %s "), nInvoiceNo, m_szReceiptDate,  pMF->m_nDocumentNo, szWhere);
		pMF->ExecSQL(szSQL);

		if( pMF->m_szAutoPrintDischargeVote == _T("Y")){
//			pMF->PrintPaymentReceiptFromInvoice(nInvoiceNo);
		}
	}
	

	CRecord rs2(&pMF->m_db);
	CString szType;
	szSQL.Format(_T("select max(hfi_invoiceno) as invoiceno from hms_fee_invoice where hfi_refinvoice=%ld"), nInvoiceNo);
	rs2.ExecSQL(szSQL);
	if(!rs2.IsEOF()){
		long nInvNo;
		rs2.GetValue(_T("invoiceno"), nInvNo);
		pMF->PrintReceipt(nInvNo);
	}
	return true;
} 



bool CHMSPaymentReceiptDialog::OnReceiptFee2()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDesc, tmpStr, szDepts, szAdvPaid, szSerialNo;
	CString szDept;
	long nRefInvoice = 0;
	UpdateData(true);
	if(m_wndSerialNo.GetWindowTextLength() == 0)
		m_szSerial = _T("AUTO");

	if(!IsValidateData())
		return false;

	//
	//if(!pMF->IsAllowDischargeReceipt(m_nDocumentNo))
	//{
	////	ShowMessageBox(_T("Patient files not terminated."), 0);
	////	return;
	//}

	szDesc = m_szReason;
	szDepts = m_szDepartments;

	bool bFlag = false;
	bool bPrintReceipt = false;
	double nAdvamt = 0, nRefundAmt = 0;

	szDept = pMF->m_szReceiptDeptID;
	if(pMF->m_nInpatient > 0 )
	{
		//if((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")))
		{
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='C', he_hasfee='Y' WHERE he_docno=%ld and hfe_status<>'P' and hfe_invoiceno=0 "), m_nDocumentNo);
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
			
			if(rs.GetIntValue() > 0 && m_nDeposit >0)
			{
				bFlag = true;
			}
		}
	}

	if(bFlag)
	{
		CString szSuggestion=_T("D");
		CString szStatus;

		bool bAllowReceipt = false;
		

//Truong hop neu tong so tien benh nhan phai tra > tong tam ung + tong mien giam 
//		-> benh nhan phai tam ung them = So tien phai tra-(tong tam ung+tong mien giam)
//Ap dung cho tat ca cac truong hop
		
		//_msg(_T("Unpaid:%2.f, Refund:%2.f"), m_nUnpaid, m_nRefund);
		if(m_nTotalPayable > 0){
			CHMSFeeDepositDialog dlg(this);
			dlg.m_nPID = pMF->m_nPID;
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nInvoiceNo = 0;
			dlg.m_nAmount = abs(m_nTotalPayable);
			dlg.m_szSerialNo = m_szSerialNo;
			dlg.m_nReceiptNo = m_nReceiptNo;
			dlg.SetMode(VM_ADD);

			if(dlg.DoModal() == IDOK){
				bAllowReceipt = true;
				nRefInvoice = dlg.m_nInvoiceNo; 
				m_szSerialNo = dlg.m_szSerialNo;
				m_nReceiptNo = dlg.m_nReceiptNo;
				bPrintReceipt = dlg.m_bPrintReceipt;
			}
			else
				return false;

			nAdvamt = abs(m_nTotalPayable);
		}
		else if(m_nTotalPayable < 0)
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
			
			if(bRefund && !m_bInsuranceUnpaidFilter)
			{
				CHMSFeeRefundDialog dlg(this);
					dlg.m_nPID = pMF->m_nPID;
					dlg.m_nDocumentNo = m_nDocumentNo;
					dlg.m_nInvoiceNo = 0;
					dlg.m_nAmount = abs(m_nTotalPayable);

					dlg.SetMode(VM_ADD);
					if(dlg.DoModal() == IDOK){
						bAllowReceipt = true;
						nRefInvoice = dlg.m_nInvoiceNo; 
						m_szSerialNo = dlg.m_szSerialNo;
						m_nReceiptNo = dlg.m_nReceiptNo;
						bPrintReceipt = dlg.m_bPrintReceipt;
					}
					else
						return false;

					nRefundAmt = abs(m_nTotalPayable);
			}

		}
		
	//	if(!bAllowReceipt)
	//		return;
	}
	
	
	
	

	if(m_szSerial == _T("AUTO") || m_szSerialNo.IsEmpty()){
		tmpStr.Format(_T("%s"), pMF->GetSysDate(ddmmyyyy));
		tmpStr.Replace(_T("/"), _T(""));
		m_nBookNo = ToLong(tmpStr);
		tmpStr.Format(_T("%s"), pMF->GetSysTime());
		tmpStr.Replace(_T(":"), _T(""));
		tmpStr.Trim();
		m_nReceiptNo = ToInt(tmpStr);
		szSerialNo = _T("AUTO");
	}


	szAdvPaid = _T("N");
	if(m_bAdvReceipt)
		szAdvPaid = _T("Y");
	
	long nInvoiceNo=0;
	int ret = 0;
	int nIndex=1;
	
	CRecord rsx(&pMF->m_db);
	pMF->BeginTransaction();
	CString szRecvDate;
	if(m_szReceiptDate.GetLength() <= 10)
		szRecvDate.Format(_T("%s %s"), m_szReceiptDate, pMF->GetSysTime());
	else
		szRecvDate = m_szReceiptDate;
	if(m_bInsuranceUnpaidFilter)
	{
		szDesc += _T("[DV]");
		szSQL.Format(_T("select hms_fee_create_service_invoice(%ld, '%s', %ld, %ld, '%s', '%s', '%s', '%s', '', '%s', '%s') "),
			m_nDocumentNo, szSerialNo, m_nBookNo, m_nReceiptNo, szRecvDate, pMF->GetCurrentUser(), szDept, szDepts, szDesc, szAdvPaid);
	}
	else
		szSQL.Format(_T("select hms_fee_createinvoice(%ld, '%s', %ld, %ld, '%s', '%s', '%s', '%s', '', '%s', '%s') "),
			m_nDocumentNo, szSerialNo, m_nBookNo, m_nReceiptNo, szRecvDate, pMF->GetCurrentUser(), szDept, szDepts, szDesc, szAdvPaid);
	//_fmsg(_T("%s"), szSQL);
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
			m_nDeposit, nAdvamt, nRefundAmt, m_nDocumentNo, nInvoiceNo);
		pMF->ExecSQL(szSQL);
		//Cap nhat trang thai cac phieu mien giam
		szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_patpaid=hfi_discount, hfi_refinvoice=%ld WHERE hfi_docno=%ld and hfi_type='D' and hfi_patpaid=0 "), nInvoiceNo, m_nDocumentNo);
		pMF->ExecSQL(szSQL);
	}

	szSQL.Format(_T("UPDATE hms_invfeectl_line SET hifcl_recvno=%ld WHERE lower(hifcl_userid)=lower('%s') AND hifcl_serialno='%s' AND hifcl_bookno=%ld AND hifcl_recvno<%ld"), 
		m_nReceiptNo, pMF->GetCurrentUser(), m_szSerial, m_nBookNo, m_nReceiptNo);
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

	if(m_bInsuranceUnpaidFilter)
		pMF->PrintInvoice(m_nInvoiceNo);

	if(!m_bInsuranceUnpaidFilter && (pMF->m_nInpatient > 0 || (pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))) )
	{
		if(m_bAutoPrintPaymentReceipt){
			szSQL.Format(_T("SELECT hms_fee_dischargepayment(%ld, %ld, %d) "), pMF->m_nDocumentNo, nInvoiceNo, pMF->m_nInpatient);
			int ret = pMF->ExecSQL(szSQL);
			if(ret > 0){
				if( pMF->m_szAutoPrintDischargeVote == _T("Y")){
					if(pMF->m_nInpatient == 0 && pMF->m_szPrintGeneralExamCostSheetType == _T("Y"))
						pMF->PrintGeneralExaminationCost_New(m_nInvoiceNo);
					else
					{
//						pMF->PrintPaymentReceiptFromInvoice_New(nInvoiceNo);
					}
				}
			}
		}
	}
	
	return true;

	
} 
void CHMSPaymentReceiptDialog::OnCancelSelect(){
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

	pMF->BeginTransaction();
	//backup so lieu sang table hms_fee_invoice_cancel

	szSQL.Format(_T("INSERT INTO hms_fee_invoice_cancel SELECT * FROM hms_fee_invoice WHERE hfi_invoiceno=%ld and hfi_type='P' "), m_nInvoiceNo);
	pMF->ExecSQL(szSQL);

	//Cap nhat lai nguoi huy phi
	szSQL.Format(_T("UPDATE hms_fee_invoice_cancel SET hfi_updatedby='%s', hfi_updateddate=current_timestamp WHERE hfi_invoiceno=%ld"), pMF->GetCurrentUser(), m_nInvoiceNo);
	pMF->ExecSQL(szSQL);

	//Goi thu tuc huy phi
	szSQL.Format(_T("select hms_fee_cancelinvoice(%ld, %ld, '%s') "),
		m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());
//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	int ret = rs.GetIntValue();
	if(ret <= 0)
	{
		pMF->Rollback();
		ShowMessageBox(_T("Can not cancel invoice"), MB_ICONWARNING|MB_OK);
		return;		
	}


	//Cap nhat trang thai cac phieu mien giam
	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_patpaid=0, hfi_refinvoice=0 WHERE hfi_docno=%ld and hfi_type='D' and hfi_refinvoice=%ld "), m_nDocumentNo, m_nInvoiceNo);
	pMF->ExecSQL(szSQL);
	
	pMF->Commit();

	//Tao lai phi
	szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), pMF->GetCurrentUser(), m_nDocumentNo);
	pMF->ExecSQL(szSQL);

	CGuiDialog::OnOK();
} 
void CHMSPaymentReceiptDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_nTotalCost != (m_nRemission+m_nInsurancePaid))
		pMF->PrintInvoice(m_nInvoiceNo);
//	if(m_bAutoPrintPaymentReceipt){
//		pMF->PrintPaymentReceiptFromInvoice(m_nInvoiceNo);
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
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), tmpStr);
	
	rpt.PrintPreview();

} 


void CHMSPaymentReceiptDialog::OnPrintPaymentReceiptSelect(){

}
void CHMSPaymentReceiptDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSPaymentReceiptDialog::OnAddHMSPaymentReceiptDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPaymentReceiptDialog::OnEditHMSPaymentReceiptDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPaymentReceiptDialog::OnDeleteHMSPaymentReceiptDialog(){
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
 		OnCancelHMSPaymentReceiptDialog(); 
 	}
	return 0;
}
int CHMSPaymentReceiptDialog::OnSaveHMSPaymentReceiptDialog(){
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
 		//OnHMSPaymentReceiptDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPaymentReceiptDialog::OnCancelHMSPaymentReceiptDialog(){
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
int CHMSPaymentReceiptDialog::OnHMSPaymentReceiptDialogListLoadData(){
	return 0;
}

void CHMSPaymentReceiptDialog::RecalcTotal(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_nTotalCost = m_nInsurancePaid = m_nRemission = m_nPatientPaid =  m_nTotalPayable = m_nDifferencePaid = 0;
	m_nFree = 0;
	CString tmpStr, szDepts;
	if(m_nInvoiceNo > 0)
		return;

	szDepts = m_szDepartments;
	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));

	if(pMF->m_nInpatient == 1){
		szWhere.AppendFormat(_T(" and hfe_group <>'D0000' "));
		szWhere.Format(_T(" and hfe_deptid in(%s) "), szDepts);
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_deptid in(select sd_id from sys_dept where sd_type='KB') "));
	}

	if(m_bInsuranceUnpaidFilter){
		szWhere.AppendFormat(_T(" AND (hfe_discount=0) "));
	}

	szSQL.Format(_T(" SELECT") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inspaid,") \
		_T(" 		sum(hfe_diffcost) as diffcost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_cost-hfe_inspaid) as patpaid,") \
		_T(" 		sum(hfe_patpaid) as payable ") \
		_T(" FROM hmsv_fee") \
		_T(" WHERE hfe_docno=%ld and hfe_cost > 0 and hfe_status='O' %s "), m_nDocumentNo, szWhere);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("cost"), m_nTotalCost);
		rs.GetValue(_T("difcost"), m_nDifferencePaid);
		
		m_nRemission = 0;

		if(pMF->GetObjectType() == _T("D"))
			rs.GetValue(_T("discount"), m_nRemission);
		else
		{
			m_nInsurancePaid = 0;
			rs.GetValue(_T("discount"), m_nInsurancePaid);
		}
		
		double nTotalDiscount = m_nRemission+m_nInsurancePaid;
		
		int nSel = m_wndList.GetItemCount()-1;
		if(nSel > 0)
		{
			double nDiscount =0, nPatpaid = 0, nCost = 0;

			for (int i =0; i < m_wndList.GetItemCount()-1; i++){
				if(m_wndList.GetItemText(i, 8) == _T("X") && m_wndList.GetItemText(i, 12) == _T("item"))
				{
					tmpStr = m_wndList.GetItemText(i, 5);
					nDiscount += str2double(tmpStr);
					tmpStr = m_wndList.GetItemText(i, 6);
					nPatpaid += str2double(tmpStr);
					tmpStr = m_wndList.GetItemText(i, 7);
					nCost += str2double(tmpStr);
				}
			}
			m_wndList.SetItemText(nSel, 5, nDiscount>0?ToString(nDiscount):_T(""));
			m_wndList.SetItemText(nSel, 6, nPatpaid>0?ToString(nPatpaid):_T(""));
			m_wndList.SetItemText(nSel, 7, nCost>0?ToString(nCost):_T(""));
		}
		m_nPatientPaid = m_nTotalCost - m_nInsurancePaid - m_nRemission;
		m_nTotalPayable = m_nPatientPaid-m_nDeposit-m_nFree;		
		UpdateData(false);
	}
	
}

