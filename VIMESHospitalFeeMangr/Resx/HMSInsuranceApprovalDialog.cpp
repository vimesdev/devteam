#include "HMSInsuranceApprovalDialog.h"
#include "MainFrm.h"
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
/*static void _OnReceiveDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiveDateChange();
} */
/*static void _OnReceiveDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiveDateSetfocus();} */ 
/*static void _OnReceiveDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiveDateKillfocus();
} */
static int _OnReceiveDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnReceiveDateCheckValue();
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
/*static void _OnTotalInsCostChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsCostChange();
} */
/*static void _OnTotalInsCostSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsCostSetfocus();} */ 
/*static void _OnTotalInsCostKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsCostKillfocus();
} */
static int _OnTotalInsCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsCostCheckValue();
} 
/*static void _OnTotalInsPaidChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsPaidChange();
} */
/*static void _OnTotalInsPaidSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsPaidSetfocus();} */ 
/*static void _OnTotalInsPaidKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsPaidKillfocus();
} */
static int _OnTotalInsPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalInsPaidCheckValue();
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
/*static void _OnTotalDiffPaidChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiffPaidChange();
} */
/*static void _OnTotalDiffPaidSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiffPaidSetfocus();} */ 
/*static void _OnTotalDiffPaidKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiffPaidKillfocus();
} */
static int _OnTotalDiffPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalDiffPaidCheckValue();
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
static void _OnAddPolicySelectFnc(CWnd *pWnd){
	CHMSInsuranceApprovalDialog *pVw = (CHMSInsuranceApprovalDialog *)pWnd;
	pVw->OnAddPolicySelect();
} 
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
/*static void _OnSumABChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnSumABChange();
} */
/*static void _OnSumABSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnSumABSetfocus();} */ 
/*static void _OnSumABKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnSumABKillfocus();
} */
static int _OnSumABCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnSumABCheckValue();
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
/*static void _OnTotalPaymentChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPaymentChange();
} */
/*static void _OnTotalPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPaymentSetfocus();} */ 
/*static void _OnTotalPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPaymentKillfocus();
} */
static int _OnTotalPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApprovalDialog *)pWnd)->OnTotalPaymentCheckValue();
} 
static void _OnPatientPaidFlagSelectFnc(CWnd *pWnd){
	 ((CHMSInsuranceApprovalDialog*)pWnd)->OnPatientPaidFlagSelect();
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
	m_nDlgHeight = 707;
	SetDefaultValues();
}
CHMSInsuranceApprovalDialog::~CHMSInsuranceApprovalDialog(){
}
void CHMSInsuranceApprovalDialog::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 590);
	m_wndList.Create(this,10, 30, 995, 435); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 440, 110, 465);
	m_wndReceiveDate.Create(this,115, 440, 255, 465); 
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 260, 440, 380, 465);
	m_wndTotalCost.Create(this,385, 440, 500, 465); 
	m_wndTotalInsCostLabel.Create(this, _T("Total InsCost"), 505, 440, 625, 465);
	m_wndTotalInsCost.Create(this,630, 440, 745, 465); 
	m_wndTotalInsPaidLabel.Create(this, _T("Total InsPaid"), 750, 440, 870, 465);
	m_wndTotalInsPaid.Create(this,875, 440, 995, 465); 
	m_wndStaffLabel.Create(this, _T("Staff"), 10, 470, 110, 495);
	m_wndStaff.Create(this,115, 470, 255, 495); 
	m_wndTotalPatPaidLabel.Create(this, _T("Total PatPaid"), 260, 470, 380, 495);
	m_wndTotalPatPaid.Create(this,385, 470, 500, 495); 
	m_wndTotalDiffPaidLabel.Create(this, _T("Total DiffPaid"), 505, 470, 625, 495);
	m_wndTotalDiffPaid.Create(this,630, 470, 745, 495); 
	m_wndTotalPayableLabel.Create(this, _T("TotalPayable"), 750, 470, 870, 495);
	m_wndTotalPayable.Create(this,875, 470, 995, 495); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 500, 110, 525);
	m_wndSerialNo.Create(this,115, 500, 255, 525); 
	m_wndTotal DepositLabel.Create(this, _T("Total Deposit"), 260, 500, 380, 525);
	m_wndTotalDeposit.Create(this,385, 500, 500, 525); 
	m_wndTotalPolicyLabel.Create(this, _T("TotalPolicy"), 505, 500, 595, 525);
	m_wndAddPolicy.Create(this, _T("+"), 600, 500, 625, 525);
	m_wndTotalPolicy.Create(this,630, 500, 745, 525); 
	m_wndSumABLabel.Create(this, _T("SumAB"), 750, 500, 870, 525);
	m_wndSumAB.Create(this,875, 500, 995, 525); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 530, 110, 555);
	m_wndReceiptNo.Create(this,115, 530, 255, 555); 
	m_wndReasonLabel.Create(this, _T("Reason"), 260, 530, 380, 555);
	m_wndReason.Create(this,385, 530, 745, 555); 
	m_wndTotalDiscountLabel.Create(this, _T("Total Discount"), 750, 530, 870, 555);
	m_wndTotalDiscount.Create(this,875, 530, 995, 555); 
	m_wndTotaPaymentLabel.Create(this, _T("Total Payment"), 750, 560, 870, 585);
	m_wndTotalPayment.Create(this,875, 560, 995, 585); 
	m_wndPatientPaidFlag.Create(this, _T("PatientPaidFlag"), 10, 595, 255, 620);
	m_wndDifferenceCharge.Create(this, _T("Difference charge"), 260, 595, 390, 620);
	m_wndApproval.Create(this, _T("&Approval"), 615, 595, 710, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 595, 810, 620);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 815, 595, 900, 620);
	m_wndClose.Create(this, _T("&Close"), 905, 595, 1000, 620);

}
void CHMSInsuranceApprovalDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceiveDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiveDate.SetCheckValue(true);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndTotalInsCost.SetLimitText(16);
	m_wndTotalInsCost.SetCheckValue(true);
	m_wndTotalInsPaid.SetLimitText(6);
	m_wndTotalInsPaid.SetCheckValue(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetCheckValue(true);
	m_wndTotalPatPaid.SetLimitText(16);
	m_wndTotalPatPaid.SetCheckValue(true);
	m_wndTotalDiffPaid.SetLimitText(16);
	m_wndTotalDiffPaid.SetCheckValue(true);
	m_wndTotalPayable.SetLimitText(16);
	m_wndTotalPayable.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndTotalDeposit.SetLimitText(16);
	m_wndTotalDeposit.SetCheckValue(true);
	m_wndTotalPolicy.SetLimitText(16);
	m_wndTotalPolicy.SetCheckValue(true);
	m_wndSumAB.SetLimitText(16);
	m_wndSumAB.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReason.SetCheckValue(true);
	m_wndReason.LimitText(35);
	m_wndTotalDiscount.SetLimitText(35);
	m_wndTotalDiscount.SetCheckValue(true);
	m_wndTotalPayment.SetLimitText(16);
	m_wndTotalPayment.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 480);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Cost"), CFMT_TEXT, 100);


	m_wndReason.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReason.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSInsuranceApprovalDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndReceiveDate.SetEvent(WE_CHANGE, _OnReceiveDateChangeFnc);
	//m_wndReceiveDate.SetEvent(WE_SETFOCUS, _OnReceiveDateSetfocusFnc);
	//m_wndReceiveDate.SetEvent(WE_KILLFOCUS, _OnReceiveDateKillfocusFnc);
	m_wndReceiveDate.SetEvent(WE_CHECKVALUE, _OnReceiveDateCheckValueFnc);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndTotalInsCost.SetEvent(WE_CHANGE, _OnTotalInsCostChangeFnc);
	//m_wndTotalInsCost.SetEvent(WE_SETFOCUS, _OnTotalInsCostSetfocusFnc);
	//m_wndTotalInsCost.SetEvent(WE_KILLFOCUS, _OnTotalInsCostKillfocusFnc);
	m_wndTotalInsCost.SetEvent(WE_CHECKVALUE, _OnTotalInsCostCheckValueFnc);
	//m_wndTotalInsPaid.SetEvent(WE_CHANGE, _OnTotalInsPaidChangeFnc);
	//m_wndTotalInsPaid.SetEvent(WE_SETFOCUS, _OnTotalInsPaidSetfocusFnc);
	//m_wndTotalInsPaid.SetEvent(WE_KILLFOCUS, _OnTotalInsPaidKillfocusFnc);
	m_wndTotalInsPaid.SetEvent(WE_CHECKVALUE, _OnTotalInsPaidCheckValueFnc);
	//m_wndStaff.SetEvent(WE_CHANGE, _OnStaffChangeFnc);
	//m_wndStaff.SetEvent(WE_SETFOCUS, _OnStaffSetfocusFnc);
	//m_wndStaff.SetEvent(WE_KILLFOCUS, _OnStaffKillfocusFnc);
	m_wndStaff.SetEvent(WE_CHECKVALUE, _OnStaffCheckValueFnc);
	//m_wndTotalPatPaid.SetEvent(WE_CHANGE, _OnTotalPatPaidChangeFnc);
	//m_wndTotalPatPaid.SetEvent(WE_SETFOCUS, _OnTotalPatPaidSetfocusFnc);
	//m_wndTotalPatPaid.SetEvent(WE_KILLFOCUS, _OnTotalPatPaidKillfocusFnc);
	m_wndTotalPatPaid.SetEvent(WE_CHECKVALUE, _OnTotalPatPaidCheckValueFnc);
	//m_wndTotalDiffPaid.SetEvent(WE_CHANGE, _OnTotalDiffPaidChangeFnc);
	//m_wndTotalDiffPaid.SetEvent(WE_SETFOCUS, _OnTotalDiffPaidSetfocusFnc);
	//m_wndTotalDiffPaid.SetEvent(WE_KILLFOCUS, _OnTotalDiffPaidKillfocusFnc);
	m_wndTotalDiffPaid.SetEvent(WE_CHECKVALUE, _OnTotalDiffPaidCheckValueFnc);
	//m_wndTotalPayable.SetEvent(WE_CHANGE, _OnTotalPayableChangeFnc);
	//m_wndTotalPayable.SetEvent(WE_SETFOCUS, _OnTotalPayableSetfocusFnc);
	//m_wndTotalPayable.SetEvent(WE_KILLFOCUS, _OnTotalPayableKillfocusFnc);
	m_wndTotalPayable.SetEvent(WE_CHECKVALUE, _OnTotalPayableCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndTotalDeposit.SetEvent(WE_CHANGE, _OnTotalDepositChangeFnc);
	//m_wndTotalDeposit.SetEvent(WE_SETFOCUS, _OnTotalDepositSetfocusFnc);
	//m_wndTotalDeposit.SetEvent(WE_KILLFOCUS, _OnTotalDepositKillfocusFnc);
	m_wndTotalDeposit.SetEvent(WE_CHECKVALUE, _OnTotalDepositCheckValueFnc);
	m_wndAddPolicy.SetEvent(WE_CLICK, _OnAddPolicySelectFnc);
	//m_wndTotalPolicy.SetEvent(WE_CHANGE, _OnTotalPolicyChangeFnc);
	//m_wndTotalPolicy.SetEvent(WE_SETFOCUS, _OnTotalPolicySetfocusFnc);
	//m_wndTotalPolicy.SetEvent(WE_KILLFOCUS, _OnTotalPolicyKillfocusFnc);
	m_wndTotalPolicy.SetEvent(WE_CHECKVALUE, _OnTotalPolicyCheckValueFnc);
	//m_wndSumAB.SetEvent(WE_CHANGE, _OnSumABChangeFnc);
	//m_wndSumAB.SetEvent(WE_SETFOCUS, _OnSumABSetfocusFnc);
	//m_wndSumAB.SetEvent(WE_KILLFOCUS, _OnSumABKillfocusFnc);
	m_wndSumAB.SetEvent(WE_CHECKVALUE, _OnSumABCheckValueFnc);
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
	//m_wndTotalDiscount.SetEvent(WE_CHANGE, _OnTotalDiscountChangeFnc);
	//m_wndTotalDiscount.SetEvent(WE_SETFOCUS, _OnTotalDiscountSetfocusFnc);
	//m_wndTotalDiscount.SetEvent(WE_KILLFOCUS, _OnTotalDiscountKillfocusFnc);
	m_wndTotalDiscount.SetEvent(WE_CHECKVALUE, _OnTotalDiscountCheckValueFnc);
	//m_wndTotalPayment.SetEvent(WE_CHANGE, _OnTotalPaymentChangeFnc);
	//m_wndTotalPayment.SetEvent(WE_SETFOCUS, _OnTotalPaymentSetfocusFnc);
	//m_wndTotalPayment.SetEvent(WE_KILLFOCUS, _OnTotalPaymentKillfocusFnc);
	m_wndTotalPayment.SetEvent(WE_CHECKVALUE, _OnTotalPaymentCheckValueFnc);
	m_wndPatientPaidFlag.SetEvent(WE_CLICK, _OnPatientPaidFlagSelectFnc);
	m_wndDifferenceCharge.SetEvent(WE_CLICK, _OnDifferenceChargeSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSInsuranceApprovalDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiveDate.GetDlgCtrlID(), m_szReceiveDate);
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndTotalInsCost.GetDlgCtrlID(), m_nTotalInsCost);
	DDX_Text(pDX, m_wndTotalInsPaid.GetDlgCtrlID(), m_nTotalInsPaid);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndTotalPatPaid.GetDlgCtrlID(), m_nTotalPatPaid);
	DDX_Text(pDX, m_wndTotalDiffPaid.GetDlgCtrlID(), m_nTotalDiffPaid);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Text(pDX, m_wndTotalPolicy.GetDlgCtrlID(), m_nTotalPolicy);
	DDX_Text(pDX, m_wndSumAB.GetDlgCtrlID(), m_nSumAB);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReason.GetDlgCtrlID(), m_szReasonKey);
	DDX_Text(pDX, m_wndTotalDiscount.GetDlgCtrlID(), m_nTotalDiscount);
	DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);
	DDX_Check(pDX, m_wndPatientPaidFlag.GetDlgCtrlID(), m_bPatientPaidFlag);
	DDX_Check(pDX, m_wndDifferenceCharge.GetDlgCtrlID(), m_bDifferenceCharge);

}
void CHMSInsuranceApprovalDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsuranceApprovalDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsuranceApprovalDialog::SetDefaultValues(){

	m_szReceiveDate.Empty();
	m_nTotalCost=0;
	m_nTotalInsCost=0;
	m_nTotalInsPaid=0;
	m_szStaff.Empty();
	m_nTotalPatPaid=0;
	m_nTotalDiffPaid=0;
	m_nTotalPayable=0;
	m_szSerialNo.Empty();
	m_nTotalDeposit=0;
	m_nTotalPolicy=0;
	m_nSumAB=0;
	m_nReceiptNo=0;
	m_szReasonKey.Empty();
	m_nTotalDiscount=0;
	m_nTotalPayment=0;
	m_bPatientPaidFlag=FALSE;
	m_bDifferenceCharge=FALSE;

}
int CHMSInsuranceApprovalDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CHMSInsuranceApprovalDialog::OnListDblClick(){
	
} 
void CHMSInsuranceApprovalDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceApprovalDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInsuranceApprovalDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Cost")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSInsuranceApprovalDialog::OnReceiveDateChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnReceiveDateSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnReceiveDateKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnReceiveDateCheckValue(){
	return 0;
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
/*void CHMSInsuranceApprovalDialog::OnTotalInsCostChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalInsCostSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalInsCostKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalInsCostCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnTotalInsPaidChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalInsPaidSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalInsPaidKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalInsPaidCheckValue(){
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
/*void CHMSInsuranceApprovalDialog::OnTotalPatPaidChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPatPaidSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPatPaidKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalPatPaidCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnTotalDiffPaidChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDiffPaidSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDiffPaidKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalDiffPaidCheckValue(){
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
/*void CHMSInsuranceApprovalDialog::OnSerialNoChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnSerialNoKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnSerialNoCheckValue(){
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
void CHMSInsuranceApprovalDialog::OnAddPolicySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSInsuranceApprovalDialog::OnTotalPolicyChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPolicySetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPolicyKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalPolicyCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnSumABChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnSumABSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnSumABKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnSumABCheckValue(){
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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReason.IsSearchKey() && !m_szReasonKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReasonKey
};
	m_wndReason.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReason.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInsuranceApprovalDialog::OnReasonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDiscountChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDiscountSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalDiscountKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalDiscountCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApprovalDialog::OnTotalPaymentChange(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPaymentSetfocus(){
	
} */
/*void CHMSInsuranceApprovalDialog::OnTotalPaymentKillfocus(){
	
} */
int CHMSInsuranceApprovalDialog::OnTotalPaymentCheckValue(){
	return 0;
} 
	void CHMSInsuranceApprovalDialog::OnPatientPaidFlagSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSInsuranceApprovalDialog::OnDifferenceChargeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSInsuranceApprovalDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceApprovalDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceApprovalDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceApprovalDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
