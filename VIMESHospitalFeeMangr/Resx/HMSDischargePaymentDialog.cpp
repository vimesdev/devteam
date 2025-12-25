#include "HMSDischargePaymentDialog.h"
#include "MainFrm.h"
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnStaffCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static void _OnReasonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischargePaymentDialog* )pWnd)->OnReasonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReasonSelendokFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReasonSelendok();
}
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReasonKillfocus();
}*/
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReasonKillfocus();
}*/
static long _OnReasonLoadDataFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnReasonLoadData();
}
/*static void _OnReasonAddNewFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReasonAddNew();
}*/
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischargePaymentDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
/*static void _OnTotalPolicyChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPolicyChange();
} */
/*static void _OnTotalPolicySetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPolicySetfocus();} */ 
/*static void _OnTotalPolicyKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPolicyKillfocus();
} */
static int _OnTotalPolicyCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalPolicyCheckValue();
} 
static void _OnAddPolicySelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnAddPolicySelect();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnTotalInsCostChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsCostChange();
} */
/*static void _OnTotalInsCostSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsCostSetfocus();} */ 
/*static void _OnTotalInsCostKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsCostKillfocus();
} */
static int _OnTotalInsCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsCostCheckValue();
} 
/*static void _OnTotalInsPaidChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsPaidChange();
} */
/*static void _OnTotalInsPaidSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsPaidSetfocus();} */ 
/*static void _OnTotalInsPaidKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsPaidKillfocus();
} */
static int _OnTotalInsPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalInsPaidCheckValue();
} 
/*static void _OnTotalPatPaidChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPatPaidChange();
} */
/*static void _OnTotalPatPaidSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPatPaidSetfocus();} */ 
/*static void _OnTotalPatPaidKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPatPaidKillfocus();
} */
static int _OnTotalPatPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalPatPaidCheckValue();
} 
/*static void _OnTotalDiffPaidChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiffPaidChange();
} */
/*static void _OnTotalDiffPaidSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiffPaidSetfocus();} */ 
/*static void _OnTotalDiffPaidKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiffPaidKillfocus();
} */
static int _OnTotalDiffPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiffPaidCheckValue();
} 
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPayableSetfocus();} */ 
/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPayableKillfocus();
} */
static int _OnTotalPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalPayableCheckValue();
} 
/*static void _OnTotalDepositChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDepositChange();
} */
/*static void _OnTotalDepositSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDepositSetfocus();} */ 
/*static void _OnTotalDepositKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDepositKillfocus();
} */
static int _OnTotalDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalDepositCheckValue();
} 
/*static void _OnTotalDiscountChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiscountChange();
} */
/*static void _OnTotalDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiscountSetfocus();} */ 
/*static void _OnTotalDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiscountKillfocus();
} */
static int _OnTotalDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiscountCheckValue();
} 
/*static void _OnSumABChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSumABChange();
} */
/*static void _OnSumABSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSumABSetfocus();} */ 
/*static void _OnSumABKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSumABKillfocus();
} */
static int _OnSumABCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnSumABCheckValue();
} 
/*static void _OnOtherPaidChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnOtherPaidChange();
} */
/*static void _OnOtherPaidSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnOtherPaidSetfocus();} */ 
/*static void _OnOtherPaidKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnOtherPaidKillfocus();
} */
static int _OnOtherPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnOtherPaidCheckValue();
} 
/*static void _OnTotalPaymentChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPaymentChange();
} */
/*static void _OnTotalPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPaymentSetfocus();} */ 
/*static void _OnTotalPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPaymentKillfocus();
} */
static int _OnTotalPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnTotalPaymentCheckValue();
} 
static void _OnPatientChargeFlagSelectFnc(CWnd *pWnd){
	 ((CHMSDischargePaymentDialog*)pWnd)->OnPatientChargeFlagSelect();
}
static void _OnDifferenceChargeFlagSelectFnc(CWnd *pWnd){
	 ((CHMSDischargePaymentDialog*)pWnd)->OnDifferenceChargeFlagSelect();
}
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnPrintReceiptSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnInsuranceApproveSelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnInsuranceApproveSelect();
} 
static void _OnPosPaymentSelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnPosPaymentSelect();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargePaymentDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnBankCardInfoSelectFnc(CWnd *pWnd){
	CHMSDischargePaymentDialog *pVw = (CHMSDischargePaymentDialog *)pWnd;
	pVw->OnBankCardInfoSelect();
} 
static int _OnAddHMSDischargePaymentDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargePaymentDialog*)pWnd)->OnAddHMSDischargePaymentDialog();
} 
static int _OnEditHMSDischargePaymentDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargePaymentDialog*)pWnd)->OnEditHMSDischargePaymentDialog();
} 
static int _OnDeleteHMSDischargePaymentDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargePaymentDialog*)pWnd)->OnDeleteHMSDischargePaymentDialog();
} 
static int _OnSaveHMSDischargePaymentDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargePaymentDialog*)pWnd)->OnSaveHMSDischargePaymentDialog();
} 
static int _OnCancelHMSDischargePaymentDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargePaymentDialog*)pWnd)->OnCancelHMSDischargePaymentDialog();
} 
CHMSDischargePaymentDialog::CHMSDischargePaymentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDischargePaymentDialog::~CHMSDischargePaymentDialog(){
}
void CHMSDischargePaymentDialog::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 590);
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 440, 110, 465);
	m_wndReceiptDate.Create(this,115, 440, 255, 465); 
	m_wndStaffLabel.Create(this, _T("Staff"), 10, 470, 110, 495);
	m_wndStaff.Create(this,115, 470, 255, 495); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 500, 110, 525);
	m_wndSerialNo.Create(this,115, 500, 255, 525); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 530, 110, 555);
	m_wndReceiptNo.Create(this,115, 530, 255, 555); 
	m_wndReasonLabel.Create(this, _T("Reason"), 260, 530, 380, 555);
	m_wndReason.Create(this,385, 530, 745, 555); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 560, 110, 585);
	m_wndPaymentMethod.Create(this,115, 560, 255, 585); 
	m_wndTotalPolicyLabel.Create(this, _T("Total Policy(B)"), 505, 500, 595, 525);
	m_wndTotalPolicy.Create(this,630, 500, 745, 525); 
	m_wndAddPolicy.Create(this, _T("+"), 600, 500, 625, 525);
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 260, 440, 380, 465);
	m_wndTotalCost.Create(this,385, 440, 500, 465); 
	m_wndTotalInsCostLabel.Create(this, _T("Policy/Ins Cost"), 505, 440, 625, 465);
	m_wndTotalInsCost.Create(this,630, 440, 745, 465); 
	m_wndTotalInsPaidLabel.Create(this, _T("Policy/Ins Paid"), 750, 440, 870, 465);
	m_wndTotalInsPaid.Create(this,875, 440, 995, 465); 
	m_wndTotalPatPaidLabel.Create(this, _T("Patient Paid"), 260, 470, 380, 495);
	m_wndTotalPatPaid.Create(this,385, 470, 500, 495); 
	m_wndTotalDiffPaidLabel.Create(this, _T("Difference Pay"), 505, 470, 625, 495);
	m_wndTotalDiffPaid.Create(this,630, 470, 745, 495); 
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 750, 470, 870, 495);
	m_wndTotalPayable.Create(this,875, 470, 995, 495); 
	m_wndTotalDepositLabel.Create(this, _T("Total Deposit(A)"), 260, 500, 380, 525);
	m_wndTotalDeposit.Create(this,385, 500, 500, 525); 
	m_wndTotalDiscountLabel.Create(this, _T("Discount_OtherPaid"), 750, 530, 870, 555);
	m_wndTotalDiscount.Create(this,875, 530, 995, 555); 
	m_wndSumABLabel.Create(this, _T("Sum (A+B)"), 750, 500, 870, 525);
	m_wndSumAB.Create(this,875, 500, 995, 525); 
	m_wndOtherPaidLabel.Create(this, _T(""), 0, 0, 25, 25);
	m_wndOtherPaid.Create(this,0, 0, 25, 25); 
	m_wndTotalPaymentLabel.Create(this, _T("Total Payment"), 750, 560, 870, 585);
	m_wndTotalPayment.Create(this,875, 560, 995, 585); 
	m_wndPatientChargeFlag.Create(this, _T("Patient Charge"), 10, 595, 150, 620);
	m_wndDifferenceChargeFlag.Create(this, _T("Difference charge"), 155, 595, 290, 620);
	m_wndApproval.Create(this, _T("&Approval"), 615, 595, 710, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 595, 810, 620);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 815, 595, 900, 620);
	m_wndClose.Create(this, _T("&Close"), 905, 595, 1000, 620);
	m_wndInsuranceApprove.Create(this, _T("&Ins Approve Doc"), 295, 595, 400, 620);
	m_wndPosPayment.Create(this, _T("&POS Payment"), 500, 595, 610, 620);
	m_wndDescriptionLabel.Create(this, _T("Description"), 260, 560, 380, 585);
	m_wndDescription.Create(this,385, 560, 715, 585); 
	m_wndBankCardInfo.Create(this, _T("..."), 720, 560, 745, 585);

}
void CHMSDischargePaymentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiptDate.SetCheckValue(true);
	m_wndStaff.SetLimitText(1024);
	m_wndStaff.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(1024);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(1024);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReason.SetCheckValue(true);
	m_wndReason.LimitText(1024);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(1024);
	m_wndTotalPolicy.SetLimitText(1024);
	m_wndTotalPolicy.SetCheckValue(true);
	m_wndTotalCost.SetLimitText(1024);
	m_wndTotalCost.SetCheckValue(true);
	m_wndTotalInsCost.SetLimitText(1024);
	m_wndTotalInsCost.SetCheckValue(true);
	m_wndTotalInsPaid.SetLimitText(1024);
	m_wndTotalInsPaid.SetCheckValue(true);
	m_wndTotalPatPaid.SetLimitText(1024);
	m_wndTotalPatPaid.SetCheckValue(true);
	m_wndTotalDiffPaid.SetLimitText(1024);
	m_wndTotalDiffPaid.SetCheckValue(true);
	m_wndTotalPayable.SetLimitText(1024);
	m_wndTotalPayable.SetCheckValue(true);
	m_wndTotalDeposit.SetLimitText(1024);
	m_wndTotalDeposit.SetCheckValue(true);
	m_wndTotalDiscount.SetLimitText(1024);
	m_wndTotalDiscount.SetCheckValue(true);
	m_wndSumAB.SetLimitText(1024);
	m_wndSumAB.SetCheckValue(true);
	m_wndOtherPaid.SetLimitText(1024);
	m_wndOtherPaid.SetCheckValue(true);
	m_wndTotalPayment.SetLimitText(1024);
	m_wndTotalPayment.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);





}
void CHMSDischargePaymentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	//m_wndTotalPolicy.SetEvent(WE_CHANGE, _OnTotalPolicyChangeFnc);
	//m_wndTotalPolicy.SetEvent(WE_SETFOCUS, _OnTotalPolicySetfocusFnc);
	//m_wndTotalPolicy.SetEvent(WE_KILLFOCUS, _OnTotalPolicyKillfocusFnc);
	m_wndTotalPolicy.SetEvent(WE_CHECKVALUE, _OnTotalPolicyCheckValueFnc);
	m_wndAddPolicy.SetEvent(WE_CLICK, _OnAddPolicySelectFnc);
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
	//m_wndTotalDeposit.SetEvent(WE_CHANGE, _OnTotalDepositChangeFnc);
	//m_wndTotalDeposit.SetEvent(WE_SETFOCUS, _OnTotalDepositSetfocusFnc);
	//m_wndTotalDeposit.SetEvent(WE_KILLFOCUS, _OnTotalDepositKillfocusFnc);
	m_wndTotalDeposit.SetEvent(WE_CHECKVALUE, _OnTotalDepositCheckValueFnc);
	//m_wndTotalDiscount.SetEvent(WE_CHANGE, _OnTotalDiscountChangeFnc);
	//m_wndTotalDiscount.SetEvent(WE_SETFOCUS, _OnTotalDiscountSetfocusFnc);
	//m_wndTotalDiscount.SetEvent(WE_KILLFOCUS, _OnTotalDiscountKillfocusFnc);
	m_wndTotalDiscount.SetEvent(WE_CHECKVALUE, _OnTotalDiscountCheckValueFnc);
	//m_wndSumAB.SetEvent(WE_CHANGE, _OnSumABChangeFnc);
	//m_wndSumAB.SetEvent(WE_SETFOCUS, _OnSumABSetfocusFnc);
	//m_wndSumAB.SetEvent(WE_KILLFOCUS, _OnSumABKillfocusFnc);
	m_wndSumAB.SetEvent(WE_CHECKVALUE, _OnSumABCheckValueFnc);
	//m_wndOtherPaid.SetEvent(WE_CHANGE, _OnOtherPaidChangeFnc);
	//m_wndOtherPaid.SetEvent(WE_SETFOCUS, _OnOtherPaidSetfocusFnc);
	//m_wndOtherPaid.SetEvent(WE_KILLFOCUS, _OnOtherPaidKillfocusFnc);
	m_wndOtherPaid.SetEvent(WE_CHECKVALUE, _OnOtherPaidCheckValueFnc);
	//m_wndTotalPayment.SetEvent(WE_CHANGE, _OnTotalPaymentChangeFnc);
	//m_wndTotalPayment.SetEvent(WE_SETFOCUS, _OnTotalPaymentSetfocusFnc);
	//m_wndTotalPayment.SetEvent(WE_KILLFOCUS, _OnTotalPaymentKillfocusFnc);
	m_wndTotalPayment.SetEvent(WE_CHECKVALUE, _OnTotalPaymentCheckValueFnc);
	m_wndPatientChargeFlag.SetEvent(WE_CLICK, _OnPatientChargeFlagSelectFnc);
	m_wndDifferenceChargeFlag.SetEvent(WE_CLICK, _OnDifferenceChargeFlagSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndInsuranceApprove.SetEvent(WE_CLICK, _OnInsuranceApproveSelectFnc);
	m_wndPosPayment.SetEvent(WE_CLICK, _OnPosPaymentSelectFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndBankCardInfo.SetEvent(WE_CLICK, _OnBankCardInfoSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDischargePaymentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReason.GetDlgCtrlID(), m_szReasonKey);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_Text(pDX, m_wndTotalPolicy.GetDlgCtrlID(), m_nTotalPolicy);
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndTotalInsCost.GetDlgCtrlID(), m_nTotalInsCost);
	DDX_Text(pDX, m_wndTotalInsPaid.GetDlgCtrlID(), m_nTotalInsPaid);
	DDX_Text(pDX, m_wndTotalPatPaid.GetDlgCtrlID(), m_nTotalPatPaid);
	DDX_Text(pDX, m_wndTotalDiffPaid.GetDlgCtrlID(), m_nTotalDiffPaid);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Text(pDX, m_wndTotalDiscount.GetDlgCtrlID(), m_nTotalDiscount);
	DDX_Text(pDX, m_wndSumAB.GetDlgCtrlID(), m_nSumAB);
	DDX_Text(pDX, m_wndOtherPaid.GetDlgCtrlID(), m_nOtherPaid);
	DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);
	DDX_Check(pDX, m_wndPatientChargeFlag.GetDlgCtrlID(), m_bPatientChargeFlag);
	DDX_Check(pDX, m_wndDifferenceChargeFlag.GetDlgCtrlID(), m_bDifferenceChargeFlag);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSDischargePaymentDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ReceiptDate")] =  m_szReceiptDate;
	m_jData[_T("Staff")] =  m_szStaff;
	m_jData[_T("SerialNo")] =  m_szSerialNo;
	m_jData[_T("ReceiptNo")] =  m_nReceiptNo;
	m_jData[_T("Reason")] =  m_szReasonKey;
	m_jData[_T("PaymentMethod")] =  m_szPaymentMethodKey;
	m_jData[_T("TotalPolicy")] =  m_nTotalPolicy;
	m_jData[_T("TotalCost")] =  m_nTotalCost;
	m_jData[_T("TotalInsCost")] =  m_nTotalInsCost;
	m_jData[_T("TotalInsPaid")] =  m_nTotalInsPaid;
	m_jData[_T("TotalPatPaid")] =  m_nTotalPatPaid;
	m_jData[_T("TotalDiffPaid")] =  m_nTotalDiffPaid;
	m_jData[_T("TotalPayable")] =  m_nTotalPayable;
	m_jData[_T("TotalDeposit")] =  m_nTotalDeposit;
	m_jData[_T("TotalDiscount")] =  m_nTotalDiscount;
	m_jData[_T("SumAB")] =  m_nSumAB;
	m_jData[_T("OtherPaid")] =  m_nOtherPaid;
	m_jData[_T("TotalPayment")] =  m_nTotalPayment;
	m_jData[_T("PatientChargeFlag")] =  m_bPatientChargeFlag;
	m_jData[_T("DifferenceChargeFlag")] =  m_bDifferenceChargeFlag;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("ReceiptDate")].GetValue(m_szReceiptDate);
	m_jData[_T("Staff")].GetValue(m_szStaff);
	m_jData[_T("SerialNo")].GetValue(m_szSerialNo);
	m_jData[_T("ReceiptNo")].GetValue(m_nReceiptNo);
	m_jData[_T("Reason")].GetValue(m_szReasonKey);
	m_jData[_T("PaymentMethod")].GetValue(m_szPaymentMethodKey);
	m_jData[_T("TotalPolicy")].GetValue(m_nTotalPolicy);
	m_jData[_T("TotalCost")].GetValue(m_nTotalCost);
	m_jData[_T("TotalInsCost")].GetValue(m_nTotalInsCost);
	m_jData[_T("TotalInsPaid")].GetValue(m_nTotalInsPaid);
	m_jData[_T("TotalPatPaid")].GetValue(m_nTotalPatPaid);
	m_jData[_T("TotalDiffPaid")].GetValue(m_nTotalDiffPaid);
	m_jData[_T("TotalPayable")].GetValue(m_nTotalPayable);
	m_jData[_T("TotalDeposit")].GetValue(m_nTotalDeposit);
	m_jData[_T("TotalDiscount")].GetValue(m_nTotalDiscount);
	m_jData[_T("SumAB")].GetValue(m_nSumAB);
	m_jData[_T("OtherPaid")].GetValue(m_nOtherPaid);
	m_jData[_T("TotalPayment")].GetValue(m_nTotalPayment);
	m_jData[_T("PatientChargeFlag")].GetValue(m_bPatientChargeFlag);
	m_jData[_T("DifferenceChargeFlag")].GetValue(m_bDifferenceChargeFlag);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSDischargePaymentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDischargePaymentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDischargePaymentDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();
	m_szStaff.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReasonKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_nTotalPolicy=0;
	m_nTotalCost=0;
	m_nTotalInsCost=0;
	m_nTotalInsPaid=0;
	m_nTotalPatPaid=0;
	m_nTotalDiffPaid=0;
	m_nTotalPayable=0;
	m_nTotalDeposit=0;
	m_nTotalDiscount=0;
	m_nSumAB=0;
	m_nOtherPaid=0;
	m_nTotalPayment=0;
	m_bPatientChargeFlag=FALSE;
	m_bDifferenceChargeFlag=FALSE;
	m_szDescription.Empty();

}
int CHMSDischargePaymentDialog::SetMode(int nMode){
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
/*void CHMSDischargePaymentDialog::OnReceiptDateChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnStaffChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnStaffSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnStaffKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnStaffCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnSerialNoChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnSerialNoKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnReceiptNoChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnReceiptNoCheckValue(){
	return 0;
} 
void CHMSDischargePaymentDialog::OnReasonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargePaymentDialog::OnReasonSelendok(){
	 
}
/*void CHMSDischargePaymentDialog::OnReasonSetfocus(){
	
}*/
/*void CHMSDischargePaymentDialog::OnReasonKillfocus(){
	
}*/
long CHMSDischargePaymentDialog::OnReasonLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDischargePaymentDialog::OnReasonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDischargePaymentDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargePaymentDialog::OnPaymentMethodSelendok(){
	 
}
/*void CHMSDischargePaymentDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CHMSDischargePaymentDialog::OnPaymentMethodKillfocus(){
	
}*/
long CHMSDischargePaymentDialog::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDischargePaymentDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPolicyChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPolicySetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPolicyKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalPolicyCheckValue(){
	return 0;
} 
void CHMSDischargePaymentDialog::OnAddPolicySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSDischargePaymentDialog::OnTotalCostChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalCostSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalCostKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalInsCostChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalInsCostSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalInsCostKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalInsCostCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalInsPaidChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalInsPaidSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalInsPaidKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalInsPaidCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalPatPaidChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPatPaidSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPatPaidKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalPatPaidCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalDiffPaidChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalDiffPaidSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalDiffPaidKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalDiffPaidCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalPayableChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPayableSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPayableKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalPayableCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalDepositChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalDepositSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalDepositKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalDepositCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalDiscountChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalDiscountSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalDiscountKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalDiscountCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnSumABChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnSumABSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnSumABKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnSumABCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnOtherPaidChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnOtherPaidSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnOtherPaidKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnOtherPaidCheckValue(){
	return 0;
} 
/*void CHMSDischargePaymentDialog::OnTotalPaymentChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPaymentSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnTotalPaymentKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnTotalPaymentCheckValue(){
	return 0;
} 
	void CHMSDischargePaymentDialog::OnPatientChargeFlagSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDischargePaymentDialog::OnDifferenceChargeFlagSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDischargePaymentDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargePaymentDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargePaymentDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargePaymentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargePaymentDialog::OnInsuranceApproveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargePaymentDialog::OnPosPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSDischargePaymentDialog::OnDescriptionChange(){
	
} */
/*void CHMSDischargePaymentDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDischargePaymentDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDischargePaymentDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSDischargePaymentDialog::OnBankCardInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDischargePaymentDialog::OnAddHMSDischargePaymentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDischargePaymentDialog::OnEditHMSDischargePaymentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDischargePaymentDialog::OnDeleteHMSDischargePaymentDialog(){
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
 		OnCancelHMSDischargePaymentDialog();
 	}
	return 0;
}
int CHMSDischargePaymentDialog::OnSaveHMSDischargePaymentDialog(){
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
 		//OnHMSDischargePaymentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDischargePaymentDialog::OnCancelHMSDischargePaymentDialog(){
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
int CHMSDischargePaymentDialog::OnHMSDischargePaymentDialogListLoadData(){
	return 0;
}
