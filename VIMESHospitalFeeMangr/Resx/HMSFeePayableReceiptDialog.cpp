#include "HMSFeePayableReceiptDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeePayableReceiptDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeePayableReceiptDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnPatientPaidChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnPatientPaidChange();
} */
/*static void _OnPatientPaidSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnPatientPaidSetfocus();} */ 
/*static void _OnPatientPaidKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnPatientPaidKillfocus();
} */
static int _OnPatientPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnPatientPaidCheckValue();
} 
/*static void _OnReceiveDateChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiveDateChange();
} */
/*static void _OnReceiveDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiveDateSetfocus();} */ 
/*static void _OnReceiveDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiveDateKillfocus();
} */
static int _OnReceiveDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiveDateCheckValue();
} 
static void _OnInsuranceUnpaidFilterSelectFnc(CWnd *pWnd){
	 ((CHMSFeePayableReceiptDialog*)pWnd)->OnInsuranceUnpaidFilterSelect();
}
/*static void _OnInsurancePaidChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnInsurancePaidChange();
} */
/*static void _OnInsurancePaidSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnInsurancePaidSetfocus();} */ 
/*static void _OnInsurancePaidKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnInsurancePaidKillfocus();
} */
static int _OnInsurancePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnInsurancePaidCheckValue();
} 
/*static void _OnDepositChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDepositChange();
} */
/*static void _OnDepositSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDepositSetfocus();} */ 
/*static void _OnDepositKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDepositKillfocus();
} */
static int _OnDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnDepositCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnSerialNoCheckValue();
} 
static void _OnAutoPrintDischargeSelectFnc(CWnd *pWnd){
	 ((CHMSFeePayableReceiptDialog*)pWnd)->OnAutoPrintDischargeSelect();
}
/*static void _OnRemissionChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnRemissionChange();
} */
/*static void _OnRemissionSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnRemissionSetfocus();} */ 
/*static void _OnRemissionKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnRemissionKillfocus();
} */
static int _OnRemissionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnRemissionCheckValue();
} 
/*static void _OnFreeChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnFreeChange();
} */
/*static void _OnFreeSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnFreeSetfocus();} */ 
/*static void _OnFreeKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnFreeKillfocus();
} */
static int _OnFreeCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnFreeCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static void _OnAutoPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSFeePayableReceiptDialog*)pWnd)->OnAutoPrintReceiptSelect();
}
/*static void _OnDifferencePaidChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDifferencePaidChange();
} */
/*static void _OnDifferencePaidSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDifferencePaidSetfocus();} */ 
/*static void _OnDifferencePaidKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDifferencePaidKillfocus();
} */
static int _OnDifferencePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnDifferencePaidCheckValue();
} 
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalPayableSetfocus();} */ 
/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalPayableKillfocus();
} */
static int _OnTotalPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnTotalPayableCheckValue();
} 
static void _OnDescriptionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePayableReceiptDialog* )pWnd)->OnDescriptionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDescriptionSelendokFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDescriptionSelendok();
}
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDescriptionKillfocus();
}*/
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDescriptionKillfocus();
}*/
static long _OnDescriptionLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePayableReceiptDialog *)pWnd)->OnDescriptionLoadData();
}
/*static void _OnDescriptionAddNewFnc(CWnd *pWnd){
	((CHMSFeePayableReceiptDialog *)pWnd)->OnDescriptionAddNew();
}*/
static void _OnPaymentSelectFnc(CWnd *pWnd){
	CHMSFeePayableReceiptDialog *pVw = (CHMSFeePayableReceiptDialog *)pWnd;
	pVw->OnPaymentSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeePayableReceiptDialog *pVw = (CHMSFeePayableReceiptDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	CHMSFeePayableReceiptDialog *pVw = (CHMSFeePayableReceiptDialog *)pWnd;
	pVw->OnPrintReceiptSelect();
} 
static void _OnPrintPayableSelectFnc(CWnd *pWnd){
	CHMSFeePayableReceiptDialog *pVw = (CHMSFeePayableReceiptDialog *)pWnd;
	pVw->OnPrintPayableSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeePayableReceiptDialog *pVw = (CHMSFeePayableReceiptDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeePayableReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePayableReceiptDialog*)pWnd)->OnAddHMSFeePayableReceiptDialog();
} 
static int _OnEditHMSFeePayableReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePayableReceiptDialog*)pWnd)->OnEditHMSFeePayableReceiptDialog();
} 
static int _OnDeleteHMSFeePayableReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePayableReceiptDialog*)pWnd)->OnDeleteHMSFeePayableReceiptDialog();
} 
static int _OnSaveHMSFeePayableReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePayableReceiptDialog*)pWnd)->OnSaveHMSFeePayableReceiptDialog();
} 
static int _OnCancelHMSFeePayableReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePayableReceiptDialog*)pWnd)->OnCancelHMSFeePayableReceiptDialog();
} 
CHMSFeePayableReceiptDialog::CHMSFeePayableReceiptDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CHMSFeePayableReceiptDialog::~CHMSFeePayableReceiptDialog(){
}
void CHMSFeePayableReceiptDialog::OnCreateComponents(){
	m_wndList.Create(this,10, 30, 995, 485); 
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 10, 490, 140, 515);
	m_wndTotalCost.Create(this,145, 490, 265, 515); 
	m_wndPatientPaidLabel.Create(this, _T("Patient Paid"), 270, 490, 400, 515);
	m_wndPatientPaid.Create(this,405, 490, 525, 515); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 530, 490, 660, 515);
	m_wndReceiveDate.Create(this,665, 490, 805, 515); 
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 610);
	m_wndInsuranceUnpaidFilter.Create(this, _T("Insurance Unpaid Filter"), 810, 490, 996, 515);
	m_wndInsurancePaidLabel.Create(this, _T("Insurance Paid"), 10, 520, 140, 545);
	m_wndInsurancePaid.Create(this,145, 520, 265, 545); 
	m_wndDepositLabel.Create(this, _T("Deposit"), 270, 520, 400, 545);
	m_wndDeposit.Create(this,405, 520, 525, 545); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 530, 520, 660, 545);
	m_wndSerialNo.Create(this,665, 520, 805, 545); 
	m_wndAutoPrintDischarge.Create(this, _T("Auto Print Discharge"), 810, 520, 996, 545);
	m_wndRemissionLabel.Create(this, _T("Remission"), 10, 550, 140, 575);
	m_wndRemission.Create(this,145, 550, 265, 575); 
	m_wndFreeLabel.Create(this, _T("Free"), 270, 550, 400, 575);
	m_wndFree.Create(this,405, 550, 525, 575); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 530, 550, 660, 575);
	m_wndReceiptNo.Create(this,665, 550, 805, 575); 
	m_wndAutoPrintReceipt.Create(this, _T("Auto Print Receipt"), 810, 550, 996, 575);
	m_wndDiffrencePaidLabel.Create(this, _T("Difference Paid"), 10, 580, 140, 605);
	m_wndDifferencePaid.Create(this,145, 580, 265, 605); 
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 270, 580, 400, 605);
	m_wndTotalPayable.Create(this,405, 580, 525, 605); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 530, 580, 660, 605);
	m_wndDescription.Create(this,665, 580, 996, 605); 
	m_wndPayment.Create(this, _T("&Payment"), 490, 615, 590, 640);
	m_wndCancel.Create(this, _T("&Cancel"), 595, 615, 695, 640);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 700, 615, 790, 640);
	m_wndPrintPayable.Create(this, _T("&Print Payable"), 795, 615, 895, 640);
	m_wndClose.Create(this, _T("&Close"), 900, 615, 1000, 640);

}
void CHMSFeePayableReceiptDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndPatientPaid.SetLimitText(16);
	m_wndPatientPaid.SetCheckValue(true);
	m_wndReceiveDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiveDate.SetCheckValue(true);
	m_wndInsurancePaid.SetLimitText(16);
	m_wndInsurancePaid.SetCheckValue(true);
	m_wndDeposit.SetLimitText(16);
	m_wndDeposit.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndRemission.SetLimitText(16);
	m_wndRemission.SetCheckValue(true);
	m_wndFree.SetLimitText(35);
	m_wndFree.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndDifferencePaid.SetLimitText(16);
	m_wndDifferencePaid.SetCheckValue(true);
	m_wndTotalPayable.SetLimitText(16);
	m_wndTotalPayable.SetCheckValue(true);
	m_wndDescription.SetCheckValue(true);
	m_wndDescription.LimitText(35);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Cost"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Discount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("Payment"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Unpaid"), CFMT_MONEY, 90);


	m_wndDescription.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDescription.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSFeePayableReceiptDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndPatientPaid.SetEvent(WE_CHANGE, _OnPatientPaidChangeFnc);
	//m_wndPatientPaid.SetEvent(WE_SETFOCUS, _OnPatientPaidSetfocusFnc);
	//m_wndPatientPaid.SetEvent(WE_KILLFOCUS, _OnPatientPaidKillfocusFnc);
	m_wndPatientPaid.SetEvent(WE_CHECKVALUE, _OnPatientPaidCheckValueFnc);
	//m_wndReceiveDate.SetEvent(WE_CHANGE, _OnReceiveDateChangeFnc);
	//m_wndReceiveDate.SetEvent(WE_SETFOCUS, _OnReceiveDateSetfocusFnc);
	//m_wndReceiveDate.SetEvent(WE_KILLFOCUS, _OnReceiveDateKillfocusFnc);
	m_wndReceiveDate.SetEvent(WE_CHECKVALUE, _OnReceiveDateCheckValueFnc);
	m_wndInsuranceUnpaidFilter.SetEvent(WE_CLICK, _OnInsuranceUnpaidFilterSelectFnc);
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
	m_wndDescription.SetEvent(WE_SELENDOK, _OnDescriptionSelendokFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_SELCHANGE, _OnDescriptionSelectChangeFnc);
	m_wndDescription.SetEvent(WE_LOADDATA, _OnDescriptionLoadDataFnc);
	//m_wndDescription.SetEvent(WE_ADDNEW, _OnDescriptionAddNewFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndPrintPayable.SetEvent(WE_CLICK, _OnPrintPayableSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE)

}
void CHMSFeePayableReceiptDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndPatientPaid.GetDlgCtrlID(), m_nPatientPaid);
	DDX_TextEx(pDX, m_wndReceiveDate.GetDlgCtrlID(), m_szReceiveDate);
	DDX_Check(pDX, m_wndInsuranceUnpaidFilter.GetDlgCtrlID(), m_bInsuranceUnpaidFilter);
	DDX_Text(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_nInsurancePaid);
	DDX_Text(pDX, m_wndDeposit.GetDlgCtrlID(), m_nDeposit);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Check(pDX, m_wndAutoPrintDischarge.GetDlgCtrlID(), m_bAutoPrintDischarge);
	DDX_Text(pDX, m_wndRemission.GetDlgCtrlID(), m_nRemission);
	DDX_Text(pDX, m_wndFree.GetDlgCtrlID(), m_nFree);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_Check(pDX, m_wndAutoPrintReceipt.GetDlgCtrlID(), m_bAutoPrintReceipt);
	DDX_Text(pDX, m_wndDifferencePaid.GetDlgCtrlID(), m_nDifferencePaid);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	DDX_TextEx(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescriptionKey);

}
void CHMSFeePayableReceiptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeePayableReceiptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeePayableReceiptDialog::SetDefaultValues(){

	m_nTotalCost=0;
	m_nPatientPaid=0;
	m_szReceiveDate.Empty();
	m_bInsuranceUnpaidFilter=FALSE;
	m_nInsurancePaid=0;
	m_nDeposit=0;
	m_szSerialNo.Empty();
	m_bAutoPrintDischarge=FALSE;
	m_nRemission=0;
	m_nFree=0;
	m_nReceiptNo=0;
	m_bAutoPrintReceipt=FALSE;
	m_nDifferencePaid=0;
	m_nTotalPayable=0;
	m_szDescriptionKey.Empty();

}
int CHMSFeePayableReceiptDialog::SetMode(int nMode){
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
void CHMSFeePayableReceiptDialog::OnListDblClick(){
	
} 
void CHMSFeePayableReceiptDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeePayableReceiptDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeePayableReceiptDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Cost")), 
			rs.GetValue(_T("Discount")), 
			rs.GetValue(_T("Payment")), 
			rs.GetValue(_T("Unpaid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSFeePayableReceiptDialog::OnTotalCostChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnTotalCostSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnTotalCostKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSFeePayableReceiptDialog::OnPatientPaidChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnPatientPaidSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnPatientPaidKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnPatientPaidCheckValue(){
	return 0;
} 
/*void CHMSFeePayableReceiptDialog::OnReceiveDateChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnReceiveDateSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnReceiveDateKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnReceiveDateCheckValue(){
	return 0;
} 
	void CHMSFeePayableReceiptDialog::OnInsuranceUnpaidFilterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSFeePayableReceiptDialog::OnInsurancePaidChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnInsurancePaidSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnInsurancePaidKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnInsurancePaidCheckValue(){
	return 0;
} 
/*void CHMSFeePayableReceiptDialog::OnDepositChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnDepositSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnDepositKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnDepositCheckValue(){
	return 0;
} 
/*void CHMSFeePayableReceiptDialog::OnSerialNoChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnSerialNoKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnSerialNoCheckValue(){
	return 0;
} 
	void CHMSFeePayableReceiptDialog::OnAutoPrintDischargeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSFeePayableReceiptDialog::OnRemissionChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnRemissionSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnRemissionKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnRemissionCheckValue(){
	return 0;
} 
/*void CHMSFeePayableReceiptDialog::OnFreeChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnFreeSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnFreeKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnFreeCheckValue(){
	return 0;
} 
/*void CHMSFeePayableReceiptDialog::OnReceiptNoChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnReceiptNoCheckValue(){
	return 0;
} 
	void CHMSFeePayableReceiptDialog::OnAutoPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSFeePayableReceiptDialog::OnDifferencePaidChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnDifferencePaidSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnDifferencePaidKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnDifferencePaidCheckValue(){
	return 0;
} 
/*void CHMSFeePayableReceiptDialog::OnTotalPayableChange(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnTotalPayableSetfocus(){
	
} */
/*void CHMSFeePayableReceiptDialog::OnTotalPayableKillfocus(){
	
} */
int CHMSFeePayableReceiptDialog::OnTotalPayableCheckValue(){
	return 0;
} 
void CHMSFeePayableReceiptDialog::OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePayableReceiptDialog::OnDescriptionSelendok(){
	 
}
/*void CHMSFeePayableReceiptDialog::OnDescriptionSetfocus(){
	
}*/
/*void CHMSFeePayableReceiptDialog::OnDescriptionKillfocus(){
	
}*/
long CHMSFeePayableReceiptDialog::OnDescriptionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSFeePayableReceiptDialog::OnDescriptionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeePayableReceiptDialog::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePayableReceiptDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePayableReceiptDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePayableReceiptDialog::OnPrintPayableSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePayableReceiptDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeePayableReceiptDialog::OnAddHMSFeePayableReceiptDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFeePayableReceiptDialog::OnEditHMSFeePayableReceiptDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeePayableReceiptDialog::OnDeleteHMSFeePayableReceiptDialog(){
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
 		OnCancelHMSFeePayableReceiptDialog(); 
 	}
	return 0;
}
int CHMSFeePayableReceiptDialog::OnSaveHMSFeePayableReceiptDialog(){
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
 		//OnHMSFeePayableReceiptDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSFeePayableReceiptDialog::OnCancelHMSFeePayableReceiptDialog(){
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
int CHMSFeePayableReceiptDialog::OnHMSFeePayableReceiptDialogListLoadData(){
	return 0;
}
