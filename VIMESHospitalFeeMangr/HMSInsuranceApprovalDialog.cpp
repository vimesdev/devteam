#include "HMSInsuranceApprovalDialog.h"
#include "MainFrm.h"
#include "HMSFeeRefundDialog.h"
#include ".\hmsinsuranceapprovaldialog.h"
#include "HMSSetupRegimeFeeDialog.h"
#include "HMSModifyItemDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInsuranceApprovalDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApprovalDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnStaffCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static void _OnReasonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuranceApprovalDialog* )pWnd)->OnReasonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReasonSelendokFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReasonSelendok();
}
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReasonKillfocus();
}*/
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReasonKillfocus();
}*/
static long _OnReasonLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnReasonLoadData();
}
/*static void _OnReasonAddNewFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReasonAddNew();
}*/
/*static void _OnTotalPolicyChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPolicyChange();
} */
/*static void _OnTotalPolicySetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPolicySetfocus();} */ 
/*static void _OnTotalPolicyKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPolicyKillfocus();
} */
static int _OnTotalPolicyCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPolicyCheckValue();
} 
static void _OnAddPolicySelectFnc(CWnd *pWnd){
	CHMSInsuranceApprovalDialog *pVw = (CHMSInsuranceApprovalDialog *)pWnd;
	pVw->OnAddPolicySelect();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnTotalDepositChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDepositChange();
} */
/*static void _OnTotalDepositSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDepositSetfocus();} */ 
/*static void _OnTotalDepositKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDepositKillfocus();
} */
static int _OnTotalDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDepositCheckValue();
} 
/*static void _OnTotalDiscountChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiscountChange();
} */
/*static void _OnTotalDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiscountSetfocus();} */ 
/*static void _OnTotalDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiscountKillfocus();
} */
static int _OnTotalDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiscountCheckValue();
} 
/*static void _OnInsPaidChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnInsPaidChange();
} */
/*static void _OnInsPaidSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnInsPaidSetfocus();} */ 
/*static void _OnInsPaidKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnInsPaidKillfocus();
} */
static int _OnInsPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnInsPaidCheckValue();
} 
/*static void _OnTotalPatPaidChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPatPaidChange();
} */
/*static void _OnTotalPatPaidSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPatPaidSetfocus();} */ 
/*static void _OnTotalPatPaidKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPatPaidKillfocus();
} */
static int _OnTotalPatPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPatPaidCheckValue();
} 
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPayableSetfocus();} */ 
/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPayableKillfocus();
} */
static int _OnTotalPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPayableCheckValue();
} 
static void _OnDifferenceChargeSelectFnc(CWnd *pWnd){
	 ((CHMSInsuranceApprovalDialog*)pWnd)->OnDifferenceChargeSelect();
}
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CHMSInsuranceApprovalDialog *pVw = (CHMSInsuranceApprovalDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInsuranceApprovalDialog *pVw = (CHMSInsuranceApprovalDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	CHMSInsuranceApprovalDialog *pVw = (CHMSInsuranceApprovalDialog *)pWnd;
	pVw->OnPrintReceiptSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuranceApprovalDialog *pVw = (CHMSInsuranceApprovalDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInsuranceApprovalDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApprovalDialog*)pWnd)->OnAddHMSInsuranceApprovalDialog();
} 
static int _OnEditHMSInsuranceApprovalDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApprovalDialog*)pWnd)->OnEditHMSInsuranceApprovalDialog();
} 
static int _OnDeleteHMSInsuranceApprovalDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApprovalDialog*)pWnd)->OnDeleteHMSInsuranceApprovalDialog();
} 
static int _OnSaveHMSInsuranceApprovalDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApprovalDialog*)pWnd)->OnSaveHMSInsuranceApprovalDialog();
} 
static int _OnCancelHMSInsuranceApprovalDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApprovalDialog*)pWnd)->OnCancelHMSInsuranceApprovalDialog();
} 
CHMSInsuranceApprovalDialog::CHMSInsuranceApprovalDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nInvoiceNo= 0;

}
CHMSInsuranceApprovalDialog::~CHMSInsuranceApprovalDialog(){
}
void CHMSInsuranceApprovalDialog::OnCreateComponents()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 590);
	m_wndList.Create(this,10, 30, 995, 435); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 440, 110, 465);
	m_wndReceiptDate.Create(this,115, 440, 255, 465); 
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 260, 440, 380, 465);
	m_wndTotalCost.Create(this,385, 440, 500, 465); 
	m_wndTotalInsCostLabel.Create(this, _T("Policy/Ins Cost"), 505, 440, 625, 465);
	m_wndTotalInsCost.Create(this,630, 440, 745, 465); 
	m_wndTotalInsPaidLabel.Create(this, _T("Policy/Ins Paid"), 750, 440, 870, 465);
	m_wndTotalInsPaid.Create(this,875, 440, 995, 465); 
	m_wndStaffLabel.Create(this, _T("Staff"), 10, 470, 110, 495);
	m_wndStaff.Create(this,115, 470, 255, 495); 
	m_wndTotalPatPaidLabel.Create(this, _T("Patient Paid"), 260, 470, 380, 495);
	m_wndTotalPatPaid.Create(this,385, 470, 500, 495); 
	m_wndTotalDiffPaidLabel.Create(this, _T("Difference Pay"), 505, 470, 625, 495);
	m_wndTotalDiffPaid.Create(this,630, 470, 745, 495); 
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 750, 470, 870, 495);
	m_wndTotalPayable.Create(this,875, 470, 995, 495); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 500, 110, 525);
	m_wndSerialNo.Create(this,115, 500, 255, 525); 
	m_wndTotalDepositLabel.Create(this, _T("Total Deposit(A)"), 260, 500, 380, 525);
	m_wndTotalDeposit.Create(this,385, 500, 500, 525); 
	m_wndTotalPolicyLabel.Create(this, _T("Total Policy(B)"), 505, 500, 595, 525);
	m_wndTotalPolicy.Create(this,630, 500, 745, 525); 
	m_wndSumABLabel.Create(this, _T("Sum (A+B)"), 750, 500, 870, 525);
	m_wndSumAB.Create(this,875, 500, 995, 525); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 530, 110, 555);
	m_wndReceiptNo.Create(this,115, 530, 255, 555); 
	m_wndReasonLabel.Create(this, _T("Reason"), 260, 530, 380, 555);
	m_wndReason.Create(this,385, 530, 745, 555); 
	m_wndTotalDiscountLabel.Create(this, _T("Discount"), 750, 530, 870, 555);
	m_wndTotalDiscount.Create(this,875, 530, 995, 555); 
	m_wndTotalPaymentLabel.Create(this, _T("Total Payment"), 750, 560, 870, 585);
	m_wndTotalPayment.Create(this,875, 560, 995, 585); 
	m_wndApproval.Create(this, _T("&Approval"), 615, 595, 710, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 595, 810, 620);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 815, 595, 900, 620);
	m_wndClose.Create(this, _T("&Close"), 905, 595, 1000, 620);

}
void CHMSInsuranceApprovalDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceiptDate.SetReadOnly(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetReadOnly(true);
	m_wndSerialNo.SetLimitText(15);
	m_wndReceiptNo.SetLimitText(10);

	if(pMF->IsAutoSerialNo())
	{
		m_wndSerialNo.SetReadOnly(true);
		m_wndReceiptNo.SetReadOnly(true);
	}
	else
	{
		m_wndSerialNo.SetCheckValue(true);
		m_wndReceiptNo.SetCheckValue(true);
	}
	m_wndSerialNo.SetReadOnly(true);
	m_wndReceiptNo.SetReadOnly(true);
	m_wndReason.ModifyStyle(WS_TABSTOP, 0);
	m_wndReason.SetCheckValue(true);
	m_wndReason.LimitText(35);

	m_wndTotalPolicy.SetLimitText(16);
	//m_wndTotalPolicy.SetCheckValue(true);
	m_wndTotalPolicy.SetReadOnly(TRUE);
	m_wndTotalPolicy.SetCurrencyFormat(TRUE);

	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetReadOnly(true);
	m_wndTotalCost.SetCurrencyFormat(TRUE);
	m_wndTotalDeposit.SetLimitText(16);
	m_wndTotalDeposit.SetReadOnly(true);
	m_wndTotalDeposit.SetCurrencyFormat(TRUE);
	m_wndTotalDiscount.SetLimitText(35);
	m_wndTotalDiscount.SetReadOnly(true);
	m_wndTotalDiscount.SetCurrencyFormat(TRUE);
	m_wndTotalPayable.SetLimitText(16);
	m_wndTotalPayable.SetReadOnly(true);
	m_wndTotalPayable.SetCurrencyFormat(TRUE);

	m_wndTotalPatPaid.SetLimitText(16);
	m_wndTotalPatPaid.SetReadOnly(true);
	m_wndTotalPatPaid.SetCurrencyFormat(TRUE);
	m_wndTotalInsPaid.SetLimitText(16);
	m_wndTotalInsPaid.SetReadOnly(true);
	m_wndTotalInsPaid.SetCurrencyFormat(TRUE);

	m_wndTotalInsCost.SetLimitText(16);
	m_wndTotalInsCost.SetReadOnly(true);
	m_wndTotalInsCost.SetCurrencyFormat(TRUE);


	m_wndTotalDiffPaid.SetLimitText(16);
	m_wndTotalDiffPaid.SetReadOnly(true);
	m_wndTotalDiffPaid.SetCurrencyFormat(TRUE);

	m_wndSumAB.SetLimitText(16);
	m_wndSumAB.SetReadOnly(true);
	m_wndSumAB.SetCurrencyFormat(TRUE);
	
	m_wndTotalPayment.SetLimitText(16);
	m_wndTotalPayment.SetReadOnly(true);
	m_wndTotalPayment.SetCurrencyFormat(TRUE);

	

//	m_wndList.SetSortHeader(false);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 35);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
		
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(6, _T("Ins Paid"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(7, _T("Diff Paid"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(8, _T("Pat Paid"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(9, _T("type"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("item"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("feetype"), CFMT_TEXT, 0);

	//m_wndList.GetHeaderControl()->SetItemHeight(2);
	//m_wndList.GetHeaderControl()->MergeCell(_T("Payment Resource"), 0, 6, 1, 8, true);




	m_wndReason.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReason.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndReason.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSInsuranceApprovalDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndStaff.SetEvent(WE_CHANGE, _OnStaffChangeFnc);
	//m_wndStaff.SetEvent(WE_SETFOCUS, _OnStaffSetfocusFnc);
	//m_wndStaff.SetEvent(WE_KILLFOCUS, _OnStaffKillfocusFnc);
	m_wndStaff.SetEvent(WE_CHECKVALUE, _OnStaffCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	m_wndReason.SetEvent(WE_SELENDOK, _OnReasonSelendokFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_SELCHANGE, _OnReasonSelectChangeFnc);
	m_wndReason.SetEvent(WE_LOADDATA, _OnReasonLoadDataFnc);
	//m_wndReason.SetEvent(WE_ADDNEW, _OnReasonAddNewFnc);
	//m_wndReason.SetEvent(WE_ADDNEW, _OnReasonAddNewFnc);
	//m_wndTotalPolicy.SetEvent(WE_CHANGE, _OnTotalPolicyChangeFnc);
	//m_wndTotalPolicy.SetEvent(WE_SETFOCUS, _OnTotalPolicySetfocusFnc);
	//m_wndTotalPolicy.SetEvent(WE_KILLFOCUS, _OnTotalPolicyKillfocusFnc);
	m_wndTotalPolicy.SetEvent(WE_CHECKVALUE, _OnTotalPolicyCheckValueFnc);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndTotalDeposit.SetEvent(WE_CHANGE, _OnTotalDepositChangeFnc);
	//m_wndTotalDeposit.SetEvent(WE_SETFOCUS, _OnTotalDepositSetfocusFnc);
	//m_wndTotalDeposit.SetEvent(WE_KILLFOCUS, _OnTotalDepositKillfocusFnc);
	m_wndTotalDeposit.SetEvent(WE_CHECKVALUE, _OnTotalDepositCheckValueFnc);
	//m_wndTotalDiscount.SetEvent(WE_CHANGE, _OnTotalDiscountChangeFnc);
	//m_wndTotalDiscount.SetEvent(WE_SETFOCUS, _OnTotalDiscountSetfocusFnc);
	//m_wndTotalDiscount.SetEvent(WE_KILLFOCUS, _OnTotalDiscountKillfocusFnc);
	m_wndTotalDiscount.SetEvent(WE_CHECKVALUE, _OnTotalDiscountCheckValueFnc);
	//m_wndTotalInsPaid.SetEvent(WE_CHANGE, _OnInsPaidChangeFnc);
	//m_wndTotalInsPaid.SetEvent(WE_SETFOCUS, _OnInsPaidSetfocusFnc);
	//m_wndTotalInsPaid.SetEvent(WE_KILLFOCUS, _OnInsPaidKillfocusFnc);
	m_wndTotalInsPaid.SetEvent(WE_CHECKVALUE, _OnInsPaidCheckValueFnc);
	//m_wndTotalPatPaid.SetEvent(WE_CHANGE, _OnTotalPatPaidChangeFnc);
	//m_wndTotalPatPaid.SetEvent(WE_SETFOCUS, _OnTotalPatPaidSetfocusFnc);
	//m_wndTotalPatPaid.SetEvent(WE_KILLFOCUS, _OnTotalPatPaidKillfocusFnc);
	m_wndTotalPatPaid.SetEvent(WE_CHECKVALUE, _OnTotalPatPaidCheckValueFnc);
	//m_wndTotalPayable.SetEvent(WE_CHANGE, _OnTotalPayableChangeFnc);
	//m_wndTotalPayable.SetEvent(WE_SETFOCUS, _OnTotalPayableSetfocusFnc);
	//m_wndTotalPayable.SetEvent(WE_KILLFOCUS, _OnTotalPayableKillfocusFnc);
	m_wndTotalPayable.SetEvent(WE_CHECKVALUE, _OnTotalPayableCheckValueFnc);


	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);


	m_wndTotalCost.SetTextColor(RGB(0, 0, 255));
	m_wndTotalInsCost.SetTextColor(RGB(0, 0, 255));
	m_wndTotalInsPaid.SetTextColor(RGB(0, 0, 255));

	m_wndTotalPatPaid.SetTextColor(RGB(0, 64, 128));
	m_wndTotalDiffPaid.SetTextColor(RGB(0, 64, 128));
	m_wndTotalPayable.SetTextColor(RGB(0, 64, 128));

	m_wndTotalDeposit.SetTextColor(RGB(0, 128, 192));
	m_wndTotalPolicy.SetTextColor(RGB(0, 128, 192));
	m_wndSumAB.SetTextColor(RGB(0, 128, 192));

	m_wndTotalDiscount.SetTextColor(RGB(255, 128, 64));

	m_wndTotalPayment.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndTotalCost, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalInsCost, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalInsPaid, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalPatPaid, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalDiffPaid, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalPayable, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalDeposit, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalPolicy, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndSumAB, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalDiscount, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndTotalPayment, GetFaceName(), GetFaceSize()+2, TRUE);

	GetDataToScreen();
	OnListLoadData();
}
void CHMSInsuranceApprovalDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReason.GetDlgCtrlID(), m_szReasonKey);
	
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndTotalInsCost.GetDlgCtrlID(), m_nTotalInsCost);
	DDX_Text(pDX, m_wndTotalInsPaid.GetDlgCtrlID(), m_nTotalInsPaid);
	DDX_Text(pDX, m_wndTotalPatPaid.GetDlgCtrlID(), m_nTotalPatPaid);
	DDX_Text(pDX, m_wndTotalDiffPaid.GetDlgCtrlID(), m_nTotalDiffPaid);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	
	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Text(pDX, m_wndTotalPolicy.GetDlgCtrlID(), m_nTotalPolicy);
	DDX_Text(pDX, m_wndSumAB.GetDlgCtrlID(), m_nSumAB);
	
	DDX_Text(pDX, m_wndTotalDiscount.GetDlgCtrlID(), m_nTotalDiscount);
	DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);

}
void CHMSInsuranceApprovalDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_fee_approve WHERE hfe_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_invoiceno"),m_nInvoiceNo);
		rs.GetValue(_T("hfe_approveby"), m_szStaff);
		rs.GetValue(_T("hfe_serialno"), m_szSerialNo);
		rs.GetValue(_T("hfe_recvno"), m_nReceiptNo);
		rs.GetValue(_T("hfe_date"), m_szReceiptDate);
		
		SetMode(VM_EDIT);
	}
	else
	{
		m_szStaff = pMF->GetCurrentUser();
		pMF->GetSerialInformation();
		m_szSerialNo = pMF->m_szSerialNo;
		m_szReceiptDate = pMF->m_szRecvDate;
		m_nReceiptNo = pMF->m_nReceiptNo;
		SetMode(VM_ADD);
	}	

	if(pMF->IsInPatient())
	{
			szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) " ) \
				_T("FROM hms_fee_deposit " )
				_T(" WHERE hfe_docno=%ld and hfe_status in('O','P') and hfe_class IN('E','I') "), 
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			m_nTotalDeposit = rs.GetDoubleValue();
			
			szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) " ) \
				_T("FROM hms_fee_discount " ) \
				_T("WHERE hfe_docno=%ld and hfe_status <>'C' and hfe_class IN('E','I') "), 
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			m_nTotalDiscount = rs.GetDoubleValue();

			szSQL.Format(_T("SELECT hfe_total_amount FROM hms_fee_sold WHERE hfe_docno=%ld"),
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			m_nTotalPolicy = rs.GetDoubleValue();
	}
	else
	{
		szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) " ) \
				_T("FROM hms_fee_deposit " )
				_T(" WHERE hfe_docno=%ld and hfe_status in('O','P') and hfe_class IN('E','X') "), 
				m_nDocumentNo);
		rs.ExecSQL(szSQL);

		m_nTotalDeposit = rs.GetDoubleValue();

	}
	UpdateData(FALSE);
	
}
void CHMSInsuranceApprovalDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsuranceApprovalDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();
	m_szStaff.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReasonKey = _T("0");
	
	m_nTotalCost=0;
	m_nTotalInsCost = 0;
	m_nTotalInsPaid = 0;
	m_nTotalDiscount=0;
	m_nTotalDiffPaid = 0;
	m_nTotalPatPaid=0;
	m_nTotalDeposit=0;
	m_nTotalPolicy=0;
	m_nTotalPayable=0;
	m_nTotalPayment = 0;
	
	m_bDifferenceChargeFlag =TRUE;
	m_bPatientChargeFlag = TRUE;

}
int CHMSInsuranceApprovalDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 3, -1); 
// 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
			m_wndReason.SetReadOnly(true);
			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, 2, 3,  -1); 
			m_wndCancel.ModifyStyle(WS_TABSTOP, 0);
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
void CHMSInsuranceApprovalDialog::OnListDblClick(){
	return;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	CString szType = m_wndList.GetItemText(nSel, 9);

	if(szType != _T("ITEM") || m_nInvoiceNo > 0)
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}

	CHMSModifyItemDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_szItemID = m_wndList.GetItemText(nSel, 10);
	dlg.DoModal();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);


} 
void CHMSInsuranceApprovalDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceApprovalDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInsuranceApprovalDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter; 
	double cost=0, inscost=0, inspaid=0, diffpaid, patpaid=0, payable=0;
	
	m_nTotalCost = m_nTotalInsCost = m_nTotalInsPaid = m_nTotalDiffPaid = m_nTotalPatPaid = m_nTotalPayable = 0;

	m_wndList.BeginLoad();
	
	szFilter.Format(_T(" and hfe_discount > 0 "));

	
	pMF->LoadFeeList(&m_wndList, m_nDocumentNo, 0, cost, inscost, inspaid,
		diffpaid, patpaid, payable, szFilter, m_nInvoiceNo);
	
	m_nTotalCost += cost;
	m_nTotalInsCost += inscost;
	m_nTotalInsPaid += inspaid;
	m_nTotalDiffPaid += diffpaid;
	m_nTotalPatPaid += patpaid;
	m_nTotalPayable += payable;

//	szFilter.Format(_T(" and hfe_discount = 0 "));
//	pMF->LoadFeeList(&m_wndList, m_nDocumentNo, 0, cost, inscost, inspaid,
//		diffpaid, patpaid, payable, szFilter, m_nInvoiceNo);
	
	m_wndList.EndLoad();

	m_nTotalCost += cost;
	m_nTotalInsCost += inscost;
	m_nTotalInsPaid += inspaid;
	m_nTotalDiffPaid += diffpaid;
	m_nTotalPatPaid += patpaid;
	m_nTotalPayable += payable;
	if(pMF->GetObjectType() == _T("S"))
	{
		m_nTotalInsCost = m_nTotalInsPaid = m_nTotalDiffPaid = m_nTotalPolicy = 0;
	}
	m_nSumAB = m_nTotalDeposit+m_nTotalPolicy;
	m_nTotalPayment = m_nTotalPayable-(m_nTotalDiscount+m_nSumAB);


	UpdateData(FALSE);
	return 0;
}
/*void CHMSInsuranceApprovalDialog::OnReceiptDateChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnStaffChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnStaffSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnStaffKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnStaffCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnSerialNoChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnSerialNoKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnReceiptNoChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnReceiptNoCheckValue(){
	return 0;
} 
void CHMSInsuranceApprovalDialog::OnReasonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceApprovalDialog::OnReasonSelendok(){
	 
}
/*void CHMSInsuranceApprovalDialog::OnReasonSetfocus(){
	
}*/
/*void CHMSInsuranceApprovalDialog::OnReasonKillfocus(){
	
}*/
long CHMSInsuranceApprovalDialog::OnReasonLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReason.IsSearchKey() && !m_szReasonKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szReasonKey);
	};
	m_wndReason.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ss_code AS id,") \
				_T("   ss_desc      AS name") \
				_T(" FROM sys_sel") \
				_T(" WHERE ss_id ='hms_invoice_desc'") \
				_T(" ORDER BY ss_index,") \
				_T("   ss_code"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReason.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSInsuranceApprovalDialog::OnReasonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPolicyChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPolicySetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPolicyKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalPolicyCheckValue(){
	return 0;
} 
void CHMSInsuranceApprovalDialog::OnAddPolicySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	if(pMF->GetObjectType() == _T("S") ||  pMF->GetObjectType() == _T("C") 
		|| (pMF->GetObjectType() == _T("I") && pMF->m_szCardNo.Left(2)!=_T("QN")))
	{
		return;
	}

	CHMSSetupRegimeFeeDialog dlg(this);

	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	dlg.m_szDate = m_szReceiptDate;
	dlg.m_szStaff = pMF->GetCurrentUser();

	/*szSQL.Format(_T("SELECT Count(*) FROM hms_fee_sold WHERE hfe_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);*/

	if (m_nInvoiceNo > 0)
	{
		dlg.m_bIsPaid = true;
	}
	else
	{
		dlg.m_bIsPaid = false;
	}


	/*if (m_nInvoiceNo > 0)
		dlg.SetMode(VM_NONE);
	else
		dlg.SetMode(VM_ADD);*/

	if (dlg.DoModal() == IDCANCEL)
	{
		m_nTotalPolicy = dlg.m_nTotalCost;
		m_nTotalPayable = Round(m_nTotalPatPaid-(m_nTotalDiscount+m_nTotalDeposit+m_nTotalPolicy));
		UpdateData(FALSE);
	}
} 
/*void CHMSInsuranceApprovalDialog::OnTotalCostChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalCostSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalCostKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnTotalDepositChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDepositSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDepositKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalDepositCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnTotalDiscountChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDiscountSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDiscountKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalDiscountCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnInsPaidChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnInsPaidSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnInsPaidKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnInsPaidCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnTotalPatPaidChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPatPaidSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPatPaidKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalPatPaidCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnTotalPayableChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPayableSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPayableKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalPayableCheckValue(){
	return 0;
} 
void CHMSInsuranceApprovalDialog::OnDifferenceChargeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	//if(m_bDifferenceCharge){
	//	m_nTotalPayable = m_nTotalPatPaid-(m_nTotalDiscount+m_nTotalDeposit);
	//}
	//else
	//{
	//	m_nTotalPayable = m_nTotalPatPaid-m_nTotalDiffPaid-(m_nTotalDiscount+m_nTotalDeposit);

	//}
	if(m_bPatientChargeFlag)
	{
	//	m_bDifferenceCharge = TRUE;
	}
	
	OnListLoadData();
	
}



void CHMSInsuranceApprovalDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szPaymentType;
	
	
	
	if(GetMode() != VM_ADD) 
 		return; 
 	if(!IsValidateData()) 
 		return; 

	
	szSQL.Format(_T("HMS_FEE_APPROVE_CREATE(%ld, '%s')"), m_nDocumentNo, pMF->GetCurrentUser());
_debug(_T("%s"), szSQL);
	long nInvoiceNo  = str2long(pMF->ExecDML(szSQL));
	if(nInvoiceNo > 0)
	{
		m_nInvoiceNo = nInvoiceNo;
		pMF->m_nInvoiceNo = nInvoiceNo;

		if(pMF->IsInPatient())
		{
			pMF->PrintDischargeReceiptFromInvoice(m_nInvoiceNo);
			if(m_nTotalPayment < 0){
				pMF->PrintRefund(m_nInvoiceNo);
			}
			else if(m_nTotalPayment > 0)
			{
				pMF->PrintReceipt(m_nInvoiceNo);
			}			
		}

		/*
			Khi thanh toan cho benh nhan goi ham Post thong tin hoa don len SERVER hoa don dien tu			
		*/

		/*if(pMF->m_szElectronicInvoicesConnection == _T("Y"))
		{
			pMF->PostToInvoice(m_nDocumentNo, m_nInvoiceNo);
		}*/

		CGuiDialog::OnOK();
	}
	else
		ShowMessageBox(_T("Can not create fee receipt"));
} 
void CHMSInsuranceApprovalDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(m_nInvoiceNo <= 0 )
		return;

	CString szSQL;
	CString tmpStr, szMsg;

	TranslateString(_T("Do you want to cancel fee invoice?(Y/N)"), tmpStr);
	szMsg.AppendFormat(_T("%s\r\n"), tmpStr);
	TranslateString(_T("All fee items will be store in to database to lookup."), tmpStr);
	szMsg.AppendFormat(_T("%s"), tmpStr);

	int retMsg = ShowMessageBox(szMsg, MB_YESNO|MB_DEFBUTTON2);

	if (retMsg != IDYES)
		return;

	szSQL.Format(_T("HMS_FEE_APPROVE_CANCEL(%ld, %ld, '%s') "),
			m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());
	int res = str2int(pMF->ExecDML(szSQL));

	if(res > 0){		
		CGuiDialog::OnOK();
	}
	else
		ShowMessageBox(_T("Cannot cancel invoice"));
} 
void CHMSInsuranceApprovalDialog::OnPrintReceiptSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->PrintDischargeReceiptFromInvoice(m_nInvoiceNo);
	
} 
void CHMSInsuranceApprovalDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSInsuranceApprovalDialog::OnAddHMSInsuranceApprovalDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInsuranceApprovalDialog::OnEditHMSInsuranceApprovalDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuranceApprovalDialog::OnDeleteHMSInsuranceApprovalDialog(){
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
 		OnCancelHMSInsuranceApprovalDialog(); 
 	}
	return 0;
}
int CHMSInsuranceApprovalDialog::OnSaveHMSInsuranceApprovalDialog(){
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
 		//OnHMSInsuranceApprovalDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInsuranceApprovalDialog::OnCancelHMSInsuranceApprovalDialog(){
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
int CHMSInsuranceApprovalDialog::OnHMSInsuranceApprovalDialogListLoadData(){
	return 0;
}

BOOL CHMSInsuranceApprovalDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F3){
		if(m_wndApproval.IsWindowEnabled())
			OnApprovalSelect();
		return TRUE;
	}

	return CGuiDialog::PreTranslateMessage(pMsg);
}

int CHMSInsuranceApprovalDialog::OnViewDrugMaterial()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szItemID, szItemName;
	long nOrderID = 0;

	szItemID = m_wndList.GetItemText(nSel, 10);
	szItemName = m_wndList.GetItemText(nSel, 1);
	nOrderID = str2long(m_wndList.GetItemText(nSel, 11));

	if ((szItemID.Left(2) != _T("B4") &&
		szItemID.Left(2) != _T("B5")) || nOrderID == 0)
		return -2;


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rss(&pMF->m_db);


	static CReport rpt;
	CReportSection *grp;
	CString tmpStr, tmpStrIdx, szSQL, szGroups, szReportName;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter = 0;
	
	if(pMF->m_szObjectType != _T("S"))	
	{
		szReportName =_T("Reports/HMS/HF_BANGKECHIPHIPTTT_BAOHIEM.RPT")	;
	}
	else
	{
		szReportName =_T("Reports/HMS/HF_BANGKECHIPHIPTTT_DICHVU.RPT");
	}
		

	if (!rpt.Init(szReportName))
	{
		//ShowMessageBox(_T("Can not open file report."), MB_OK);
		return -3;
	}

	UpdateData(TRUE);
		
	CString szDate, szTemp;
	CString szObject;

	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReceiptDate")),
		          tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"), szDate);

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	

	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        hcr_recordno as recordno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        extract(year from hp_birthdate) as birthyear,") \
				_T("        hp_sex as sex,") \
				_T("        hd_object as object,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hp_workplace as workplace,") \
				_T("        hc_cardno as cardno,") \
				_T("        trunc_date(hc_regdate) as regdate,") \
				_T("        trunc_date(hc_expdate) as expdate,") \
				_T("        hcr_mainicd as icd,") \
				_T("        hcr_maindisease as maindisease,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        hcr_dischargedept as dischargedept,") \
				_T("        get_departmentname(hcr_dischargedept) as deptname") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_clinical_record on(hcr_docno=hd_docno)") \
				_T(" left join hms_card on(hc_patientno=hd_patientno and hc_idx=hd_cardidx)") \
				_T(" where hd_docno=%ld"), m_nDocumentNo);

	rs.ExecSQL(szSQL);
	
	rs.GetValue(_T("docno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);

	rs.GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);

	rs.GetValue(_T("pname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);

	rs.GetValue(_T("birthyear"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), tmpStr);
	
	rs.GetValue(_T("sex"), tmpStr);

	if (tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));
	else if (tmpStr == _T("M"))
		rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));

	rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);

	rs.GetValue(_T("regdate"), tmpStr);
	szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), szTemp);
	
	rs.GetValue(_T("expdate"), tmpStr);
	szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), szTemp);

	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("WorkPlace"), tmpStr);

	rs.GetValue(_T("icd"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("icd10"), tmpStr);

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);

	rs.GetValue(_T("maindisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);

	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);

	rs.GetValue(_T("object"), szObject);

	//Page Header
	//Report Detail

	int nIdx = 1, nIdxl = 1, nNhom = 0;
	long double nServcost = 0, nInscost = 0, nDiscost = 0, nPatpaid = 0;
	long double grpServcost = 0, grpInscost = 0, grpDiscost =0, grpPatpaid = 0;
	long double ttServcost = 0, ttInscost = 0, ttDiscost = 0, ttSurgeryCost = 0, ttPatpaid = 0,Patpaid=0;
	double cost = 0;
	int nNewIndex = 0, nOldIndex = 0;

	CReportSection* rptDetail = NULL;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup;
	CString szLineName, szLineNameOld, m_szComment, szTotalComment;
	
	szGroups.Empty();
	CString szTmp;

	/*for (int i = 0; i < m_wndSurgeryList.GetItemCount(); i++)
	{
		if (m_wndSurgeryList.GetCheck(i))
		{
			if(!szGroups.IsEmpty())
				szGroups += _T(",");
			szGroups.AppendFormat(_T("%s"), m_wndSurgeryList.GetItemText(i, 3));
		}
	}*/

	szSQL.Format(_T("SELECT ho_idx, ho_docno,") \
		         _T(" hfl_name, ho_comment, hfl_unit, hfl_servprice ") \
				 _T(" FROM hms_operation ") \
				 _T(" LEFT JOIN hms_fee_list ON(hfl_feeid=ho_itemid)") \
				 _T(" WHERE ho_idx=%ld AND ho_docno=%ld") \
				 _T(" ORDER BY ho_idx"),
				 nOrderID, m_nDocumentNo);

	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
		return -4;

	while (!rs.IsEOF())
	{	
		grp = rpt.GetGroupHeader(1);
		rptDetail = rpt.AddDetail(grp);
		tmpStr.Format(_T("%s%s"), lpszChapter[nChapter], _T("."));
		rptDetail->SetValue(_T("TypeID"), tmpStr);		
		//rs.GetValue(_T("ho_comment"), m_szComment);
		
		tmpStr = rs.GetValue(_T("hfl_name"));
		rptDetail->SetValue(_T("TypeName"), tmpStr);

		rs.GetValue(_T("hfl_servprice"), cost);
		ttSurgeryCost += cost;
		FormatCurrency(cost, tmpStr);
		
		rptDetail->SetValue(_T("SubGroupTotalAmount"), tmpStr);

		/*
		if (!m_szComment.IsEmpty())
		{
			rptDetail = rpt.AddDetail(grp);
			tmpStr.Format(_T("* %s"), m_szComment);
			rptDetail->SetValue(_T("SubGroupName"), tmpStr);
		}*/

		szSQL.Format(_T(" select distinct itemid, idx") \
					_T(" from") \
					_T(" (") \
					_T("  select substr(hfg_id,1,2) as itemid,") \
					_T("         hfg_name as groupname,") \
					_T("         case when substr(hfg_id,1,2) not in('A3','A4','A5','A7','A9') then 1") \
					_T("              when substr(hfg_id,1,2) in('A9') then 2") \
					_T("              when substr(hfg_id,1,2) in('A3') then 3") \
					_T("              when substr(hfg_id,1,2) in('A4') then 4") \
					_T("              when substr(hfg_id,1,2) in('A5') then 5") \
					_T("              when substr(hfg_id,1,2) in('A7') then 6") \
					_T("         else 7 end as idx") \
					_T("  from hms_fee_group") \
					_T("  where substr(hfg_id,1,1)='A'") \
					_T(" )") \
					_T(" order by idx, itemid"));
		rss.ExecSQL(szSQL);

		while (!rss.IsEOF())
		{
			rss.GetValue(_T("idx"), nNewIndex);

			if (nNewIndex > 0 && nNewIndex != nOldIndex)
			{
				if (!szGroups.IsEmpty())
				{
					if (!pMF->IsInPatient())
					{
						szSQL.Format(_T(" SELECT hpol_orderid,") \
									_T("        (SELECT distinct hfg_name AS name FROM hms_fee_group WHERE hfg_id=hfe_group ) AS groupName,") \
									_T("        mp_name,") \
									_T("        adu_name,") \
									_T("        hfe_unitprice,") \
									_T("        SUM(hpol_qtyissue) AS hpol_issueqty,") \
									_T("        SUM(hms_fee.hfe_cost) AS hfe_servcost,") \
									_T("        case when hpol_inoperation='N' and ho_type in('I','C') then SUM(hfe_inspaid) else 0 end AS hfe_inscost,") \
									_T("        case when hpol_inoperation='Y' then SUM(hfe_discount) else 0 end AS hfe_discost,") \
									_T("        SUM(hfe_patdebt+hfe_patpaid) AS hfe_patdebt") \
									_T(" FROM hms_pharmaorder") \
									_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
									_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno)") \
									_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
									_T(" LEFT JOIN hms_fee ON(hpol_orderid=hfe_orderid and hpol_orderlineid=hfe_orderline)") \
									_T(" LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
									_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_uom_id)") \
									_T(" WHERE hpo_reference_id=%ld AND hpo_docno=%ld AND hfe_type IN('D','M')") \
									_T("       AND SUBSTR(hfe_group,1,2) IN(%s)") \
									_T(" GROUP BY hpol_orderid, hfe_unitprice, hfe_group, mp_name, adu_name, hpo_storage_id,") \
									_T("          hpol_inoperation, ho_type") \
									_T(" ORDER BY hpol_orderid, hpo_storage_id, mp_name"),
									nOrderID, m_nDocumentNo, szGroups);
					}
					else
					{
						szSQL.Format(_T(" SELECT hpol_orderid,") \
									_T("        (SELECT distinct hfg_name AS name FROM hms_fee_group WHERE hfg_id=hfe_group) AS groupName,") \
									_T("        mp_name,") \
									_T("        adu_name,") \
									_T("        hfe_unitprice,") \
									_T("        SUM(hpol_qtyissue) AS hpol_issueqty,") \
									_T("        SUM(hms_fee.hfe_cost) AS hfe_servcost,") \
									_T("        case when hpol_inoperation='N' and ho_type in('I','C') then SUM(hfe_inspaid) else 0 end AS hfe_inscost,") \
									_T("        case when hpol_inoperation='Y' then SUM(hfe_discount) else 0 end AS hfe_discost,") \
									_T("        SUM(hfe_patdebt+hfe_patpaid) AS hfe_patdebt") \
									_T(" FROM hms_ipharmaorder") \
									_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
									_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno)") \
									_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
									_T(" LEFT JOIN hms_fee ON(hpol_orderid=hfe_orderid and hpol_orderlineid=hfe_orderline)") \
									_T(" LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
									_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_uom_id)") \
									_T(" WHERE hpo_reference_id=%ld AND hpo_docno=%ld AND hfe_type IN('D','M')") \
									_T("       AND SUBSTR(hfe_group,1,2) IN(%s)") \
									_T(" GROUP BY hpol_orderid, hfe_unitprice, hfe_group, mp_name, adu_name, hpo_storage_id,") \
									_T("          hpol_inoperation, ho_type") \
									_T(" ORDER BY hpol_orderid, hpo_storage_id, mp_name"),
									nOrderID, m_nDocumentNo, szGroups);
					}

					//MessageBox(szSQL);

					//szTmp.AppendFormat(_T("%s\r\n"), szSQL);
					_fmsg(_T("%s"), szSQL);

					rsl.ExecSQL(szSQL);

					if (!rsl.IsEOF())
					{
						nNhom++;

						if (nOldIndex == 1)
						{
							tmpStr.Format(_T("%d"), nNhom);
							//szTotalComment.Format(_T("%d"), nNhom);
							if (!szTotalComment.IsEmpty())
								szTotalComment += _T("+");
							szTotalComment.AppendFormat(_T("%d"), nNhom);

							rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
							rptDetail->SetValue(_T("SubGroupID"), tmpStr);
							rptDetail->SetValue(_T("SubGroupName"),
												_T("Thu\x1ED1\x63, h\xF3\x61 \x63h\x1EA5t, m\xE1u, \x64\x1ECB\x63h truy\x1EC1n"));			
							nIdxl = 1;
						}
						else
						{
							rsl.GetValue(_T("groupName"), szNewLine);

							if (szNewLine != szOldLine && !szNewLine.IsEmpty())
							{
								if (nServcost > 0)
								{
									rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));
									tmpStr.Format(_T("\x43\x1ED9ng(%d):"), nNhom);
									rptDetail->SetValue(_T("TotalAmountLabel"), tmpStr);
									FormatCurrency(nDiscost, tmpStr);
									rptDetail->SetValue(_T("Cost"), tmpStr);					
									FormatCurrency(nInscost, tmpStr);
									rptDetail->SetValue(_T("TotalDiscount"), tmpStr);					
									FormatCurrency(nPatpaid, tmpStr);
									rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
									FormatCurrency(nServcost, tmpStr);
									rptDetail->SetValue(_T("TotalAmount"), tmpStr);
									grpInscost += nInscost;
									grpServcost += nServcost;
									grpDiscost += nDiscost;
									grpPatpaid += nPatpaid;
							
									nInscost = nServcost = nDiscost = nPatpaid = 0;
									nServcost = 0;
								}

								tmpStr.Format(_T("%d"), nNhom);

								if (!szTotalComment.IsEmpty())
									szTotalComment += _T("+");
								szTotalComment.AppendFormat(_T("%d"), nNhom);

								rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
								rptDetail->SetValue(_T("SubGroupID"), tmpStr);
								rptDetail->SetValue(_T("SubGroupName"), szNewLine);
								szOldLine = szNewLine;
								nIdxl = 1;
							}
						}
						while (!rsl.IsEOF())
						{				
							rptDetail = rpt.AddDetail();

							tmpStrIdx.Format(_T("%d)   "), nIdxl++);
							rsl.GetValue(_T("mp_name"), tmpStr);
							rptDetail->SetValue(_T("2"), tmpStrIdx + tmpStr);

							rsl.GetValue(_T("adu_name"), tmpStr);
							rptDetail->SetValue(_T("3"), tmpStr);

							rsl.GetValue(_T("hpol_issueqty"), tmpStr);
							rptDetail->SetValue(_T("4"), tmpStr);

							rsl.GetValue(_T("hfe_unitprice"), cost);
							FormatCurrency(cost, tmpStr);
							rptDetail->SetValue(_T("5"), tmpStr);

							rsl.GetValue(_T("hfe_discost"), cost);
							nDiscost += cost;
							FormatCurrency(cost, tmpStr);
							rptDetail->SetValue(_T("6"), tmpStr);

							rsl.GetValue(_T("hfe_inscost"), cost);
							nInscost += cost;
							FormatCurrency(cost, tmpStr);
							rptDetail->SetValue(_T("7"), tmpStr);

							rsl.GetValue(_T("hfe_patdebt"), cost);
							nPatpaid += cost;
							FormatCurrency(cost, tmpStr);
							rptDetail->SetValue(_T("8"), tmpStr);

							rsl.GetValue(_T("hfe_servcost"),cost);			
							nServcost += cost;
							FormatCurrency(cost, tmpStr);
							rptDetail->SetValue(_T("9"), tmpStr);

							rsl.MoveNext();
						}

						rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));
						tmpStr.Format(_T("\x43\x1ED9ng(%d):"), nNhom);
						rptDetail->SetValue(_T("TotalAmountLabel"), tmpStr);
						FormatCurrency(nDiscost, tmpStr);
						rptDetail->SetValue(_T("Cost"), tmpStr);
						FormatCurrency(nInscost, tmpStr);
						rptDetail->SetValue(_T("TotalDiscount"), tmpStr);					
						FormatCurrency(nPatpaid, tmpStr);
						rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
						FormatCurrency(nServcost, tmpStr);
						rptDetail->SetValue(_T("TotalAmount"), tmpStr);

						grpInscost += nInscost;
						grpServcost += nServcost;
						grpDiscost += nDiscost;
						grpPatpaid += nPatpaid;
						

					}

				}

				nInscost = nServcost = nDiscost = nPatpaid = 0;

				nOldIndex = nNewIndex;
				szGroups.Empty();
			}

			rss.GetValue(_T("itemid"), tmpStr);

			if (!szGroups.IsEmpty())
				szGroups += _T(",");
			szGroups.AppendFormat(_T("'%s'"), tmpStr);


			rss.MoveNext();
		}
		
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));
		tmpStr.Format(_T("T\x1ED5ng (%s)=(%s):"), lpszChapter[nChapter], szTotalComment);
		rptDetail->SetValue(_T("TotalAmountLabel"), tmpStr);
		
		FormatCurrency(grpDiscost, tmpStr);
		rptDetail->SetValue(_T("Cost"), tmpStr);					
		FormatCurrency(grpInscost, tmpStr);
		rptDetail->SetValue(_T("TotalDiscount"), tmpStr);					
		FormatCurrency(grpPatpaid, tmpStr);
		rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
		FormatCurrency(grpServcost, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		ttInscost += grpInscost;
		ttServcost += grpServcost;
		ttDiscost += grpDiscost;
		ttPatpaid += grpPatpaid;

		grpInscost =0;
		grpServcost =0;
		grpDiscost =0;
		grpPatpaid =0;

		nIdxl = 1;
		nChapter++;
		szGroups.Empty();
		rs.MoveNext();
	}
	
	//ttServcost += ttSurgeryCost;	

	switch (ToInt(szObject))
	{
		case 1:
		{
			ttDiscost=0;
			ttInscost =0;
			ttPatpaid =0;
		}
		break;
		case 7:
		{
			ttInscost=0;
			ttDiscost=0;
			//ttPatpaid +=ttSurgeryCost;
		}
		break;	
		case 8:
		{
			ttInscost=0;
			ttDiscost =0;
			//ttPatpaid +=ttSurgeryCost;
		}
		break;

		default:
		{	
			
			Patpaid = ttDiscost - ttSurgeryCost;
			/*_msg(_T("Dis:%.2f,Patpaid %.2f, Inscos: %.2f, Su:%.2f, Pa:%2.f "), ttDiscost,ttPatpaid,ttInscost,ttSurgeryCost,Patpaid);			*/
			if (Patpaid > 0) 
				Patpaid += ttPatpaid ;
			else
				Patpaid = ttPatpaid ;

			ttInscost += ttSurgeryCost;
			ttDiscost = ttServcost - ttInscost;
		}
		break;
	}

	 
	/*if (pMF->m_szDepartment == _T("B5")){
		Patpaid = ttServcost-ttInscost;
	}*/

	_fmsg(_T("%s"), szTmp);

	CString szSumInWord;
	szSumInWord.Format(_T("\x110\x1ED3ng"));
	FormatCurrency(ttServcost, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
	FormatCurrency(ttInscost, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr );
	FormatCurrency(Patpaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);

	//Page Footer
	//Report Footer
	CDate sysDate;
	sysDate.ParseDate(pMF->GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());
	//rpt.GetReportFooter()->SetValue(_T("DoctorName"), tmpStr);
	rpt.PrintPreview();	

	return 0;
}

