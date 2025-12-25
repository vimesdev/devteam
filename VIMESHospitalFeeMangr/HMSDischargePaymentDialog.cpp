#include "HMSDischargePaymentDialog.h"
#include "MainFrm.h"
#include "HMSModifyItemDialog.h"
#include "HMSFeeDiscountLineDialog.h"
#include "HMSMainFrame.h"
#include "HMSReportForms/printforms.h"
#include "HMSChuyennguonngansachTTbenhnhancovid19pk.h"
#include "HMSInputCompanyOnInvoice.h"
#include "OnUnUploadtoInsGate.h"

static int _OnMarkFreeItemsFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnMarkFreeItems();
}
static int _OnUnmarkFreeItemsFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnUnmarkFreeItems();
}


static int _OnCreateDiscountFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnCreateDiscount();
	return 0;
}
static int _OnCreateRefundFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnCreateRefund();
	return 0;
}


static int _OnPaymentSourceSelectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnPaymentSourceSelect();
	return 0;
}

static int _OnPaymentSourceEXSelectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnPaymentSourceEXSelect();
	return 0;
}
static int _OnChuyennguonngansachTTbenhnhancovid19lectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnChuyennguonngansachTTbenhnhancovid19Select();
	return 0;
}

static int _OnChuyennguonngansachTTbenhnhancovid19pklectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnChuyennguonngansachTTbenhnhancovid19pkSelect();
	return 0;
}

static int _OnChuyennguonngansachTTbenhnhanquancovid19lectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnChuyennguonngansachTTbenhnhanquancovid19Select();
	return 0;
}

static long _OnListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnListLoadData();
}
static void _OnListDblClickFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnListDblClick();
}
static void _OnListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSDischargePaymentDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnListDeleteItem();
}
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptDateSetfocus();} */
	/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnReceiptDateKillfocus();
	} */
static int _OnReceiptDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnReceiptDateCheckValue();
}
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnStaffSetfocus();} */
	/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnStaffKillfocus();
	} */
static int _OnStaffCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnStaffCheckValue();
}
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnSerialNoSetfocus();} */
	/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnSerialNoKillfocus();
	} */
static int _OnSerialNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnSerialNoCheckValue();
}
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReceiptNoSetfocus();} */
	/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnReceiptNoKillfocus();
	} */
static int _OnReceiptNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnReceiptNoCheckValue();
}


static void _OnReasonSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSDischargePaymentDialog*)pWnd)->OnReasonSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnReasonSelendokFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnReasonSelendok();
}
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReasonKillfocus();
}*/
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReasonKillfocus();
}*/
static long _OnReasonLoadDataFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnReasonLoadData();
}
/*static void _OnReasonAddNewFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnReasonAddNew();
}*/



static void _OnPaymentMethodSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSDischargePaymentDialog*)pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPaymentMethodSelendokFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnPaymentMethodLoadData();
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
static int _OnTotalPolicyCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnTotalPolicyCheckValue();
}
static void _OnAddPolicySelectFnc(CWnd* pWnd) {
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
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
static int _OnTotalCostCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnTotalCostCheckValue();
}
/*static void _OnTotalDepositChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDepositChange();
} */
/*static void _OnTotalDepositSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDepositSetfocus();} */
	/*static void _OnTotalDepositKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnTotalDepositKillfocus();
	} */
static int _OnTotalDepositCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnTotalDepositCheckValue();
}
/*static void _OnTotalDiscountChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiscountChange();
} */
/*static void _OnTotalDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiscountSetfocus();} */
	/*static void _OnTotalDiscountKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnTotalDiscountKillfocus();
	} */
static int _OnTotalDiscountCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnTotalDiscountCheckValue();
}
/*static void _OnInsPaidChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnInsPaidChange();
} */
/*static void _OnInsPaidSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnInsPaidSetfocus();} */
	/*static void _OnInsPaidKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnInsPaidKillfocus();
	} */
static int _OnInsPaidCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnInsPaidCheckValue();
}
/*static void _OnTotalPatPaidChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPatPaidChange();
} */
/*static void _OnTotalPatPaidSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPatPaidSetfocus();} */
	/*static void _OnTotalPatPaidKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnTotalPatPaidKillfocus();
	} */
static int _OnTotalPatPaidCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnTotalPatPaidCheckValue();
}
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnTotalPayableSetfocus();} */
	/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnTotalPayableKillfocus();
	} */
static int _OnTotalPayableCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnTotalPayableCheckValue();
}
static void _OnDifferenceChargeSelectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnDifferenceChargeSelect();
}



/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDischargePaymentDialog *)pWnd)->OnDescriptionSetfocus();} */
	/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
		((CHMSDischargePaymentDialog *)pWnd)->OnDescriptionKillfocus();
	} */
static int _OnDescriptionCheckValueFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnDescriptionCheckValue();
}
static void _OnBankCardInfoSelectFnc(CWnd* pWnd) {
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
	pVw->OnBankCardInfoSelect();
}


static void _OnInsuranceApproveDocSelectFnc(CWnd* pWnd)
{
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
	pVw->OnInsuranceApproveDoc();
}


static void _OnPOSPaymentSelectFnc(CWnd* pWnd)
{
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
	pVw->OnPOSPaymentSelect();
}
static void _OnApprovalSelectFnc(CWnd* pWnd) {
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
	pVw->OnApprovalSelect();
}
static void _OnCancelSelectFnc(CWnd* pWnd) {
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintReceiptSelectFnc(CWnd* pWnd) {
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
	pVw->OnPrintReceiptSelect();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CHMSDischargePaymentDialog* pVw = (CHMSDischargePaymentDialog*)pWnd;
	pVw->OnCloseSelect();
}
static int _OnAddHMSInsuranceApprovalDialogFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnAddHMSInsuranceApprovalDialog();
}
static int _OnEditHMSInsuranceApprovalDialogFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnEditHMSInsuranceApprovalDialog();
}
static int _OnDeleteHMSInsuranceApprovalDialogFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnDeleteHMSInsuranceApprovalDialog();
}
static int _OnSaveHMSInsuranceApprovalDialogFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnSaveHMSInsuranceApprovalDialog();
}
static int _OnCancelHMSInsuranceApprovalDialogFnc(CWnd* pWnd) {
	return ((CHMSDischargePaymentDialog*)pWnd)->OnCancelHMSInsuranceApprovalDialog();
}
static int _OnPrintElectronicInvoicesFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnPrintElectronicInvoice();
	return 0;
}
static int _OnChuyennguonngansachTTbenhnhanquanchitietSelectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnChuyennguonngansachTTbenhnhanquanchitietSelect();
	return 0;
}
static int _OnChuyennguonngansachTTbenhnhanquanPKchitietSelectFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnChuyennguonngansachTTbenhnhanquanPKchitietSelect();
	return 0;
}

static int _OnUnUploadtoInsGateFnc(CWnd* pWnd) {
	((CHMSDischargePaymentDialog*)pWnd)->OnUnUploadtoInsGate();
	return 0;
}

CHMSDischargePaymentDialog::CHMSDischargePaymentDialog(CWnd* pParent) :
	CGuiDialog(pParent) {

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nInvoiceNo = 0;
	m_nTtlCost = 0;

}
CHMSDischargePaymentDialog::~CHMSDischargePaymentDialog() {

}
void CHMSDischargePaymentDialog::OnCreateComponents()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 590);
	m_wndList.Create(this, 10, 30, 995, 435);
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 440, 110, 465);
	m_wndReceiptDate.Create(this, 115, 440, 255, 465);
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 260, 440, 380, 465);
	m_wndTotalCost.Create(this, 385, 440, 500, 465);
	m_wndTotalInsCostLabel.Create(this, _T("Policy/Ins Cost"), 505, 440, 625, 465);
	m_wndTotalInsCost.Create(this, 630, 440, 745, 465);
	m_wndTotalInsPaidLabel.Create(this, _T("Policy/Ins Paid"), 750, 440, 870, 465);
	m_wndTotalInsPaid.Create(this, 875, 440, 995, 465);
	m_wndStaffLabel.Create(this, _T("Staff"), 10, 470, 110, 495);
	m_wndStaff.Create(this, 115, 470, 255, 495);
	m_wndTotalPatPaidLabel.Create(this, _T("Patient Paid"), 260, 470, 380, 495);
	m_wndTotalPatPaid.Create(this, 385, 470, 500, 495);
	m_wndTotalDiffPaidLabel.Create(this, _T("Difference Pay"), 505, 470, 625, 495);
	m_wndTotalDiffPaid.Create(this, 630, 470, 745, 495);
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 750, 470, 870, 495);
	m_wndTotalPayable.Create(this, 875, 470, 995, 495);
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 500, 110, 525);
	m_wndSerialNo.Create(this, 115, 500, 255, 525);
	m_wndTotalDepositLabel.Create(this, _T("Total Deposit(A)"), 260, 500, 380, 525);
	m_wndTotalDeposit.Create(this, 385, 500, 500, 525);
	m_wndTotalPolicyLabel.Create(this, _T("Total Policy(B)"), 505, 500, 595, 525);
	m_wndAddPolicy.Create(this, _T("+"), 600, 500, 625, 525);
	m_wndTotalPolicy.Create(this, 630, 500, 745, 525);
	m_wndSumABLabel.Create(this, _T("Sum (A+B)"), 750, 500, 870, 525);
	m_wndSumAB.Create(this, 875, 500, 995, 525);
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 530, 110, 555);
	m_wndReceiptNo.Create(this, 115, 530, 255, 555);
	m_wndReasonLabel.Create(this, _T("Reason"), 260, 530, 380, 555);
	m_wndReason.Create(this, 385, 530, 745, 555);

	m_wndPaymentMethodLabel.Create(this, _T("Hình thức TT"), 10, 560, 110, 585);
	m_wndPaymentMethod.Create(this, 115, 560, 255, 585);


	m_wndTotalDiscountLabel.Create(this, _T("Miễn giảm/Nguồn khác"), 750, 530, 870, 555);
	m_wndTotalDiscount.Create(this, 875, 530, 995, 555);
	m_wndTotalPaymentLabel.Create(this, _T("Total Payment"), 750, 560, 870, 585);
	m_wndTotalPayment.Create(this, 875, 560, 995, 585);
	m_wndPatientChargeFlag.Create(this, _T("Patient Charge"), 10, 595, 150, 620);
	m_wndDifferenceChargeFlag.Create(this, _T("Difference charge"), 155, 595, 290, 620);



	m_wndInsuranceApprove.Create(this, _T("&Ins Approve Doc"), 295, 595, 400, 620);
#ifdef HAVE_POS
	m_wndPosPayment.Create(this, _T("&POS Payment"), 500, 595, 610, 620);
#endif

	m_wndDescriptionLabel.Create(this, _T("TT Thẻ tín dụng"), 260, 560, 380, 585);
	m_wndDescription.Create(this, 385, 560, 715, 585);
	m_wndBankCardInfo.Create(this, _T("..."), 720, 560, 745, 585);


	m_wndApproval.Create(this, _T("&Approval"), 615, 595, 710, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 595, 810, 620);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 815, 595, 900, 620);
	m_wndClose.Create(this, _T("&Close"), 905, 595, 1000, 620);

	m_wndPaymentMethod.ModifyStyle(WS_TABSTOP, 0);

}
void CHMSDischargePaymentDialog::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();


	m_wndReceiptDate.SetReadOnly(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetReadOnly(true);
	m_wndSerialNo.SetLimitText(15);
	m_wndReceiptNo.SetLimitText(10);

	if (pMF->IsAutoSerialNo())
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


	m_wndPaymentMethod.ModifyStyle(WS_TABSTOP, 0);
	m_wndPaymentMethod.SetCheckValue(true);

	m_wndReason.ModifyStyle(WS_TABSTOP, 0);
	m_wndReason.SetCheckValue(false);
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

	m_wndDescription.SetReadOnly(true);
	m_wndBankCardInfo.ModifyStyle(WS_TABSTOP, 0);

	//	m_wndList.SetSortHeader(false);
	m_wndList.SetCheckBox(true);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 45);
	if (pMF->GetObjectType() == _T("S"))
	{
		m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
		m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
		m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 80);

		m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 90);
		m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);

		m_wndList.InsertColumn(6, _T("Discount"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(7, _T("Diff Paid"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(8, _T("Pat Paid"), CFMT_MONEY, 0);
		//		m_wndTotalInsCostLabel.ShowWindow(SW_HIDE);
		//		m_wndTotalInsCost.ShowWindow(SW_HIDE);
		m_wndDifferenceChargeFlag.ShowWindow(SW_HIDE);
		m_wndPatientChargeFlag.ShowWindow(SW_HIDE);
	}
	else
	{
		m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
		m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
		m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);

		m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 87);
		m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 87);

		m_wndList.InsertColumn(6, _T("Ins Paid"), CFMT_MONEY, 87);
		m_wndList.InsertColumn(7, _T("Diff Paid"), CFMT_MONEY, 87);
		m_wndList.InsertColumn(8, _T("Pat Paid"), CFMT_MONEY, 87);


		//		m_wndList.GetHeaderItem()->SetItemHeight(2);
		//		m_wndList.GetHeaderItem()->MergeCell(_T("Payment Resource"), 0, 6, 1, 8, true);


	}
	m_wndList.InsertColumn(9, _T("type"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("item"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("feetype"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("Status"), CFMT_TEXT, 50);






	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);


	m_wndReason.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReason.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);
	m_wndReason.ModifyStyle(WS_TABSTOP, 0);

	m_wndPatientChargeFlag.ModifyStyle(WS_TABSTOP, 0);
	m_wndDifferenceChargeFlag.ModifyStyle(WS_TABSTOP, 0);
	m_wndAddPolicy.ModifyStyle(WS_TABSTOP, 0);

	//	m_wndList.SetSortHeader(false);
}
void CHMSDischargePaymentDialog::OnSetWindowEvents()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
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


	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
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

	m_wndPatientChargeFlag.SetEvent(WE_CLICK, _OnDifferenceChargeSelectFnc);
	m_wndDifferenceChargeFlag.SetEvent(WE_CLICK, _OnDifferenceChargeSelectFnc);


	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
		//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
		//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndBankCardInfo.SetEvent(WE_CLICK, _OnBankCardInfoSelectFnc);

#ifdef HAVE_POS
	m_wndPosPayment.SetEvent(WE_CLICK, _OnPOSPaymentSelectFnc);
	m_wndPosPayment.ModifyStyle(WS_TABSTOP, 0);
#endif




	m_wndInsuranceApprove.SetEvent(WE_CLICK, _OnInsuranceApproveDocSelectFnc);
	m_wndInsuranceApprove.ModifyStyle(WS_TABSTOP, 0);


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

	SetWindowFont(&m_wndTotalCost, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalInsCost, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalInsPaid, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPatPaid, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalDiffPaid, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPayable, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalDeposit, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPolicy, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndSumAB, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalDiscount, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPayment, GetFaceName(), GetFaceSize(), TRUE);

	GetDataToScreen();
	OnListLoadData();

	m_wndList.SetWindowText(_T("Setting free item"));
	m_wndList.AddEvent(1, _T("Tạo phiếu miễn giảm"), _OnCreateDiscountFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("T\x1EA1o phi\x1EBFu ho\xE0n tr\x1EA3"), _OnCreateRefundFnc);
	m_wndList.AddEvent(0, _T("-"));

	szSQL.Format(_T("select count(*) from HMS_CLINICAL_RECORD where hcr_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)

	{
		//m_wndList.AddEvent(3, _T("Chọn nguồn thanh toán nội trú"), _OnPaymentSourceSelectFnc);
		m_wndList.AddEvent(0, _T("-"));
		m_wndList.AddEvent(4, _T("Chuyển nguồn thanh toán nội trú BN Quân (Chi tiết)"), _OnChuyennguonngansachTTbenhnhanquanchitietSelectFnc);
		m_wndList.AddEvent(0, _T("-"));
	}
	else
		m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(5, _T("Chọn nguồn thanh toán phòng khám"), _OnPaymentSourceEXSelectFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(6, _T("Chuyển nguồn thanh toán phòng khám BN Quân (Chi tiết)"), _OnChuyennguonngansachTTbenhnhanquanPKchitietSelectFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(7, _T("Chuyển nguồn thanh toán - bệnh nhân covid 19 (nội trú) "), _OnChuyennguonngansachTTbenhnhancovid19lectFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(8, _T("Chuyển nguồn thanh toán - bệnh nhân covid 19 (phòng khám) "), _OnChuyennguonngansachTTbenhnhancovid19pklectFnc);

	//Check user hvlinh -> phụ trách đẩy cổng BQP theo tác chức năng này
	if (pMF->GetCurrentUser() == _T("hvlinh") || pMF->GetCurrentUser() == _T("dvdungkhqs") || pMF->GetCurrentUser() == _T("vhbinhkhqs"))
	{
		m_wndList.AddEvent(0, _T("-"));
		m_wndList.AddEvent(9, _T("Cập nhật mục phí không chuyển lên cổng (BQP/HN) "), _OnUnUploadtoInsGateFnc);
	}

	//m_wndList.AddEvent(6, _T("Chuyển nguồn thanh toán - BN quân mắc covid 19"), _OnChuyennguonngansachTTbenhnhanquancovid19lectFnc);

// In lai HD dien tu
	if (pMF->m_szElectronicInvoicesConnection == _T("Y")) {
		m_wndList.AddEvent(0, _T("-"));
		m_wndList.AddEvent(8, _T("&In ho\xE1 \x111\x1A1n \x111i\x1EC7n t\x1EED"), _OnPrintElectronicInvoicesFnc);
	}

	if (!pMF->HasPOS())
	{
		m_wndPosPayment.ShowWindow(SW_HIDE);
	}


}
void CHMSDischargePaymentDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);

	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
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

	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

	DDX_Check(pDX, m_wndDifferenceChargeFlag.GetDlgCtrlID(), m_bDifferenceChargeFlag);
	DDX_Check(pDX, m_wndPatientChargeFlag.GetDlgCtrlID(), m_bPatientChargeFlag);


}

static double extins_paid = 0;

void CHMSDischargePaymentDialog::GetDataToScreen()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	extins_paid = 0;

	m_szPaymentMethodKey = pMF->GetPaymentMethod();
	SetDefaultValues();
	m_nTotalDiscount = 0;
	m_nOtherPaid = 0;
	if (m_nInvoiceNo <= 0)
	{
		if (pMF->IsInPatient())
		{
			szSQL.Format(_T("SELECT min(hfe_invoiceno) as hfe_invoiceno FROM hms_fee_approve ") \
				_T("WHERE hfe_docno=%ld and hfe_status ='A' "),
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if (!rs.IsEOF())
			{
				rs.GetValue(_T("hfe_invoiceno"), m_nInvoiceNo);
			}

		}
	}



	if (m_nInvoiceNo <= 0)
	{
		m_nTtlCost = 0;




		if (pMF->IsInPatient())
		{
			szSQL.Format(_T("SELECT min(hfe_invoiceno) as hfe_invoiceno FROM hms_fee_approve ") \
				_T("WHERE hfe_docno=%ld and hfe_status ='A' "),
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if (!rs.IsEOF())
			{
				rs.GetValue(_T("hfe_invoiceno"), m_nInvoiceNo);
			}


			szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) ") \
				_T("FROM hms_fee_deposit ")
				_T(" WHERE hfe_docno=%ld and hfe_status in('O','P') and hfe_class IN('E','I')  "),
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			m_nTotalDeposit = rs.GetDoubleValue();

			szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) ") \
				_T("FROM hms_fee_discount ") \
				_T("WHERE hfe_docno=%ld and hfe_status <>'C' and hfe_class IN('E','I')  "),
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			m_nTotalDiscount = rs.GetDoubleValue();

			szSQL.Format(_T("SELECT hfe_total_amount, hfe_eat_amount FROM hms_fee_sold WHERE hfe_docno=%ld "),
				m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if (!rs.IsEOF())
			{
				double nEatAmount;
				rs.GetValue(_T("hfe_total_amount"), m_nTotalPolicy);
				rs.GetValue(_T("hfe_eat_amount"), nEatAmount);
				m_nTotalPolicy -= nEatAmount;
				m_nTotalDeposit += nEatAmount;
			}
		}
		else
		{
			//benh nhan ngoai tru
			if (pMF->IsInfertility())
			{
				szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) ") \
					_T(" FROM hms_fee_deposit ")
					_T(" WHERE hfe_docno=%ld and hfe_status  in('O','P') and hfe_class IN('E','I') and nvl(hfe_infertility,'N') in('I','P') "),
					m_nDocumentNo);
			}
			else
			{
				szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) ") \
					_T(" FROM hms_fee_deposit ")
					_T(" WHERE hfe_docno=%ld and hfe_status  in('O','P') and hfe_class IN('E','I') "),
					m_nDocumentNo);
			}
			rs.ExecSQL(szSQL);
			m_nTotalDeposit = rs.GetDoubleValue();


		}

		//Tinh so tien bao viet chi tra
		szSQL.Format(_T("HMS_EXTINS_GET_AVAIABLE_AMOUNT(%ld,'%s') "), pMF->m_nDocumentNo, pMF->IsInPatient() ? _T("N") : _T("Y"));
		extins_paid = str2double(pMF->ExecDML(szSQL));

		////////////////////////////////////////////


		m_szStaff = pMF->GetCurrentUser();

		pMF->GetSerialInformation();
		m_szSerialNo = pMF->m_szSerialNo;
		m_szReceiptDate = pMF->m_szRecvDate;
		m_nReceiptNo = pMF->m_nReceiptNo;
		SetMode(VM_ADD);
	}
	else
	{
		szSQL.Format(_T("SELECT * ") \
			_T("FROM hms_fee_invoice ") \
			_T("WHERE hfe_docno=%ld and hfe_invoiceno=%ld "),
			m_nDocumentNo, m_nInvoiceNo);

		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		if (!rs.IsEOF())
		{
			double OtherPaid;
			rs.GetValue(_T("hfe_date"), m_szReceiptDate);
			rs.GetValue(_T("hfe_staff"), m_szStaff);
			rs.GetValue(_T("hfe_serialno"), m_szSerialNo);

			rs.GetValue(_T("hfe_receiptno"), m_nReceiptNo);
			rs.GetValue(_T("hfe_desc"), m_szReasonKey);
			rs.GetValue(_T("hfe_status"), m_szStatus);

			rs.GetValue(_T("hfe_amount"), m_nTotalCost);
			m_nTtlCost = m_nTotalCost;
			rs.GetValue(_T("hfe_inspaid"), m_nTotalInsCost);
			rs.GetValue(_T("hfe_discount"), m_nTotalInsPaid);
			rs.GetValue(_T("hfe_deposit"), m_nTotalDeposit);
			rs.GetValue(_T("hfe_patpaid"), m_nTotalPatPaid);
			rs.GetValue(_T("hfe_payment"), m_nTotalPayable);
			rs.GetValue(_T("hfe_locked"), m_szLocked);
			rs.GetValue(_T("hfe_freeamount"), m_nTotalDiscount);
			rs.GetValue(_T("hfe_otherpaid"), m_nOtherPaid);

			//Chi phi bao viet thanh toan
			double extins_payment, extins_unpaid;
			rs.GetValue(_T("hfe_extins_payment"), extins_payment);
			rs.GetValue(_T("hfe_extins_unpaid"), extins_unpaid);
			extins_paid = extins_payment - extins_unpaid;
			/////////////////////////////

			rs.GetValue(_T("hfe_payment_method"), m_szPaymentMethodKey);

			if (m_szStatus == _T("C"))
			{
				CGuiDialog::OnCancel();
			}

		}

		double nEatAmount;

		szSQL.Format(_T("SELECT sum(hfe_total_amount) as total_amount, sum(hfe_eat_amount) as eat_amount FROM hms_fee_sold WHERE hfe_docno=%ld "),
			m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("total_amount"), m_nTotalPolicy);
			rs.GetValue(_T("eat_amount"), nEatAmount);
		}

		m_nTotalPolicy -= nEatAmount;
		m_nTotalDeposit += nEatAmount;

		GetMasterCardInfo();

		if (m_szStatus == _T("P"))
			SetMode(VM_VIEW);
		if (m_szStatus == _T("A") || m_szStatus == _T("O"))
			SetMode(VM_ADD);

		//Kiem tra neu khoa so roi thi khong cho phep huy
		if (m_szLocked == _T("Y"))
		{
			m_wndCancel.EnableWindow(FALSE);
			if (pMF->HasPOS())
			{
				m_wndPosPayment.EnableWindow(FALSE);
			}
		}
		m_wndDifferenceChargeFlag.EnableWindow(FALSE);



	}


}
void CHMSDischargePaymentDialog::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSDischargePaymentDialog::SetDefaultValues() {

	m_szReceiptDate.Empty();
	m_szStaff.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo = 0;
	m_szReasonKey = _T("0");


	m_nTotalCost = 0;
	m_nTotalInsCost = 0;
	m_nTotalInsPaid = 0;
	m_nTotalDiffPaid = 0;
	m_nTotalPatPaid = 0;
	m_nTotalDeposit = 0;
	m_nTotalPayable = 0;
	m_nSumAB = 0;
	m_nTotalDiscount = 0;
	m_nTotalPolicy = 0;
	m_nTotalPayment = 0;
	m_nOtherPaid = 0;
	m_nTtlCost = 0;


	m_bDifferenceChargeFlag = TRUE;
	m_bPatientChargeFlag = TRUE;
	m_szDescription.Empty();

}
int CHMSDischargePaymentDialog::SetMode(int nMode)
{
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
	case VM_ADD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 3, -1);
		// 			SetDefaultValues(); 
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 3, -1);
		break;
	case VM_VIEW:
		m_wndReason.SetReadOnly(true);
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 1, 2, 3, -1);
		//			m_wndCancel.ModifyStyle(WS_TABSTOP, 0);
		break;
	case VM_NONE:
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 6, -1);
		SetDefaultValues();
		break;
	};


	if (pMF->IsSmartCard())
	{
		m_szPaymentMethodKey = _T("THE");
		m_wndPaymentMethod.EnableWindow(FALSE);
	}

	UpdateData(FALSE);

	if (m_szStatus == _T("C") || m_szLocked == _T("Y"))
	{
		m_wndApproval.EnableWindow(FALSE);
		m_wndCancel.EnableWindow(FALSE);
		m_wndPaymentMethod.EnableWindow(FALSE);
	}
	if (m_szStatus == _T("P"))
	{
		m_wndApproval.EnableWindow(FALSE);
		m_wndPaymentMethod.EnableWindow(FALSE);
	}

	return nOldMode;
}
void CHMSDischargePaymentDialog::OnListDblClick()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0) return;
	CString szstatus, szSQL;
	CString szCovidFeeItem = m_wndList.GetItemText(nSel, 1);

	szSQL.Format(_T("SELECT hfe_status ") \
		_T("FROM hms_fee ") \
		_T("WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_desc ='%s' "),
		m_nDocumentNo, m_nInvoiceNo, szCovidFeeItem);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_status"), szstatus);
	}
	if (szstatus == _T("R"))
	{
		ShowMessageBox(_T("Mục phí đã được trả lại!"));
	}


}
void CHMSDischargePaymentDialog::OnListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
int CHMSDischargePaymentDialog::OnListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
long CHMSDischargePaymentDialog::OnListLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szFilter;
	CString szSQL;
	CRecord rs(&pMF->m_db);
	double cost, inscost, inspaid, diffpaid, patpaid, payable;
	cost = inscost = inspaid = diffpaid = patpaid = payable = 0;
	m_nTotalCost = m_nTotalInsCost = m_nTotalInsPaid = m_nTotalDiffPaid = m_nTotalPatPaid = m_nTotalPayable = 0;

	szFilter.Empty();
	//_msg(_T("Mưa chiều"));
	//szFilter.Format(_T(" and hfe_discount > 0 "));
//	szFilter.Format(_T(" and hfe_object <> 7 "));



	UpdateData(TRUE);

	m_wndList.BeginLoad();

	bool bCancel = false;
	if (m_szStatus == _T("C"))
		bCancel = true;


	bool bInPackage = false;
	if (pMF->m_szStatus == _T("T") && pMF->IsInfertility())
	{
		bInPackage = true;
	}

	pMF->LoadFeeList(&m_wndList, m_nDocumentNo, m_nInvoiceNo, cost, inscost, inspaid,
		diffpaid, patpaid, payable, szFilter, 0, bCancel, bInPackage);

	/*
		szSQL.Format(_T("SELECT hfe_itemid, hfe_amount FROM hms_fee_discountline WHERE hfe_docno=%ld"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		CString szItemID, szItemID2;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_itemid"), szItemID);
			double nAmount;
			rs.GetValue(_T("hfe_amount"), nAmount);
			for (int i =0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID2 = m_wndList.GetItemText(i, 10);
				if(szItemID2 == szItemID)
				{
					m_wndList.SetItemText(i, 6, ToString(nAmount));
				}
			}
			rs.MoveNext();
		}
	*/
	m_nTotalCost = cost;
	m_nTotalInsCost = inscost;
	m_nTotalInsPaid = inspaid;
	m_nTotalDiffPaid = diffpaid;
	m_nTotalPatPaid = patpaid;
	m_nTotalPayable = ceil(diffpaid + patpaid);
	//_msg(_T("%.2f"), m_nTotalPayable);


	if (pMF->GetObjectType() == _T("S"))
	{
		//		m_nTotalInsCost = m_nTotalInsPaid = m_nTotalDiffPaid = m_nTotalPolicy = 0;
	}
	m_nSumAB = m_nTotalDeposit + m_nTotalPolicy;
	m_nTotalDiscount += m_nOtherPaid;


	//Cong them so tien bao viet thanh toan
	//m_nTotalDiscount += extins_paid;
	/////////////////////////////////////



	CStringArray keys;

	if (m_nInvoiceNo > 0)
	{
		szSQL.Format(_T("SELECT hfe_itemid FROM hms_fee_refundline WHERE hfe_docno=%ld and hfe_refidx=%ld"),
			m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);

		CString szItemID, szRItemID;


		//keys.Add(_T("item"));
		//	keys.Add(fee.m_szItemID);
	//		keys.Add(fee.m_szFeeType);


		while (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_itemid"), szRItemID);
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID.Empty();
				m_wndList.GetItemKeys(i, &keys);
				if (keys.GetCount() > 1)
					szItemID = keys[1];
				if (szItemID == szRItemID)
				{
					m_wndList.SetSubItemBkColor(i, 1, RGB(255, 0, 0), FALSE);
					//m_wndList.SetItemText(i, 12, _T("TL"));
				}

			}
			rs.MoveNext();
		}


		szSQL.Format(_T("SELECT hfe_itemid, hfe_amount FROM hms_fee_discountline WHERE hfe_docno=%ld and (hfe_refidx=%ld or hfe_status='O') "),
			m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		double ttlDiscount = 0;
		double amount = 0;
		while (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_itemid"), szRItemID);
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				//szItemID = m_wndList.GetItemText(i, 10);
				szItemID.Empty();
				m_wndList.GetItemKeys(i, &keys);
				if (keys.GetCount() > 1)
					szItemID = keys[1];
				_tprintf(_T("\r\n%s: %s"), szItemID, szRItemID);
				if (szItemID == szRItemID)
				{
					rs.GetValue(_T("hfe_amount"), amount);
					ttlDiscount += amount;
					m_wndList.SetSubItemBkColor(i, 1, RGB(255, 128, 64), FALSE);
					//m_wndList.SetItemText(i, 12, _T("MG"));
				}

			}
			rs.MoveNext();
		}
		if (m_nTotalDiscount == 0)
		{
			m_nTotalDiscount = ttlDiscount;
		}

	}
	else
	{
		szSQL.Format(_T("SELECT hfe_itemid, hfe_amount FROM hms_fee_discountline WHERE hfe_docno=%ld and (hfe_status='O') "),
			m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);

		CString szItemID, szRItemID;
		float nAmount = 0;
		while (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_itemid"), szRItemID);
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				//szItemID = m_wndList.GetItemText(i, 10);
				szItemID.Empty();
				m_wndList.GetItemKeys(i, &keys);
				if (keys.GetCount() > 1)
					szItemID = keys[1];
				if (szItemID == szRItemID)
				{
					rs.GetValue(_T("hfe_amount"), nAmount);
					m_nTotalDiscount += nAmount;

					m_wndList.SetSubItemBkColor(i, 1, RGB(255, 128, 64), FALSE);
					//m_wndList.SetItemText(i, 12, _T("MG"));
				}

			}
			rs.MoveNext();
		}

	}
	szSQL.Format(_T("SELECT hfe_itemid FROM hms_fee WHERE hfe_docno=%ld and hfe_invoiceno=%ld and HFE_CATEGORY in ('BQP','COV') and hfe_patpaid > 0"),
		m_nDocumentNo, m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	CString szItemID, szRItemID;
	float nAmount = 0;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_itemid"), szRItemID);
		for (int i = 0; i < m_wndList.GetItemCount(); i++)
		{
			//szItemID = m_wndList.GetItemText(i, 10);
			szItemID.Empty();
			m_wndList.GetItemKeys(i, &keys);
			if (keys.GetCount() > 0)
				szItemID = keys[1];
			if (szItemID == szRItemID)
			{
				m_wndList.SetSubItemBkColor(i, 1, RGB(69, 139, 0), FALSE);
				m_wndList.SetSubItemTextColor(i, 1, RGB(255, 255, 255), FALSE);
			}

		}
		rs.MoveNext();
	}

	m_wndList.EndLoad();
	if (extins_paid > 0)
	{
		m_nTotalDiscount += extins_paid;
		if (m_nInvoiceNo <= 0)
		{
			szSQL.Format(_T("HMS_EXTINS_GET_PATDEBT_AMOUNT(%ld, '%s') "), pMF->m_nDocumentNo, pMF->IsInPatient() ? _T("N") : _T("Y"));
			m_nTotalPayment = str2double(pMF->ExecDML(szSQL));

			m_nTotalPayment -= m_nSumAB;

		}
		else
		{
			//m_nTotalPayment = m_nTotalPayable;
		}
	}
	else
	{
		m_nTotalPayment = m_nTotalPayable - (m_nTotalDiscount);
		if (m_nTotalPayment < 0)
		{
			m_nTotalPayment = 0;
		}

		m_nTotalPayment -= m_nSumAB;
	}


	m_nTotalPayable = ceil(m_nTotalPayable);

	if (m_nInvoiceNo > 0)
	{
		szSQL.Format(_T("SELECT * ") \
			_T("FROM hms_fee_invoice ") \
			_T("WHERE hfe_docno=%ld and hfe_invoiceno=%ld "),
			m_nDocumentNo, m_nInvoiceNo);

		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_date"), m_szReceiptDate);
			rs.GetValue(_T("hfe_staff"), m_szStaff);
			rs.GetValue(_T("hfe_serialno"), m_szSerialNo);

			rs.GetValue(_T("hfe_receiptno"), m_nReceiptNo);
			rs.GetValue(_T("hfe_desc"), m_szReasonKey);
			rs.GetValue(_T("hfe_status"), m_szStatus);

			rs.GetValue(_T("hfe_amount"), m_nTotalCost);
			m_nTtlCost = m_nTotalCost;
			rs.GetValue(_T("hfe_inspaid"), m_nTotalInsCost);
			rs.GetValue(_T("hfe_discount"), m_nTotalInsPaid);
			rs.GetValue(_T("hfe_deposit"), m_nTotalDeposit);
			rs.GetValue(_T("hfe_patpaid"), m_nTotalPatPaid);
			m_nTotalPayable = m_nTotalCost - m_nTotalInsPaid;
			rs.GetValue(_T("hfe_payment"), m_nTotalPayment);
			rs.GetValue(_T("hfe_locked"), m_szLocked);
			rs.GetValue(_T("hfe_freeamount"), m_nTotalDiscount);
			rs.GetValue(_T("hfe_otherpaid"), m_nOtherPaid);
			//_msg(_T("%.2f"), m_nTotalPayable);
			m_nTotalDiscount += m_nOtherPaid;
			double nRefund;
			rs.GetValue(_T("hfe_refund"), nRefund);
			if (nRefund > 0)
			{
				m_nTotalPayment = -1 * nRefund;
			}

			//Chi phi bao viet thanh toan
			double extins_payment, extins_unpaid;
			rs.GetValue(_T("hfe_extins_payment"), extins_payment);
			rs.GetValue(_T("hfe_extins_unpaid"), extins_unpaid);
			extins_paid = extins_payment - extins_unpaid;
			m_nTotalDiscount += extins_payment;

			/////////////////////////////
			rs.GetValue(_T("hfe_payment_method"), m_szPaymentMethodKey);
		}

	}
	UpdateData(FALSE);


	if (m_nTtlCost > 0 && ceil(m_nTtlCost) != ceil(m_nTotalCost))
	{
		CString szMsg;
		szMsg.Format(_T("S\x1ED1 ti\x1EC1n th\x61nh to\xE1n tr\xEAn \x62\x1EA3ng k\xEA in r\x61 \x63h\x1B0\x61 \x111\xFAng vui l\xF2ng ki\x1EC3m tr\x61 l\x1EA1i"));
		ShowMessageBox(szMsg);
	}

	return 0;
}
/*void CHMSDischargePaymentDialog::OnReceiptDateChange(){

} */
/*void CHMSDischargePaymentDialog::OnReceiptDateSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnReceiptDateKillfocus(){

} */
int CHMSDischargePaymentDialog::OnReceiptDateCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnStaffChange(){

} */
/*void CHMSDischargePaymentDialog::OnStaffSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnStaffKillfocus(){

} */
int CHMSDischargePaymentDialog::OnStaffCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnSerialNoChange(){

} */
/*void CHMSDischargePaymentDialog::OnSerialNoSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnSerialNoKillfocus(){

} */
int CHMSDischargePaymentDialog::OnSerialNoCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnReceiptNoChange(){

} */
/*void CHMSDischargePaymentDialog::OnReceiptNoSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnReceiptNoKillfocus(){

} */
int CHMSDischargePaymentDialog::OnReceiptNoCheckValue() {
	return 0;
}
void CHMSDischargePaymentDialog::OnReasonSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSDischargePaymentDialog::OnReasonSelendok() {

}
/*void CHMSDischargePaymentDialog::OnReasonSetfocus(){

}*/
/*void CHMSDischargePaymentDialog::OnReasonKillfocus(){

}*/
long CHMSDischargePaymentDialog::OnReasonLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndReason.IsSearchKey() && !m_szReasonKey.IsEmpty()) {
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
	while (!rs.IsEOF()) {
		m_wndReason.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDischargePaymentDialog::OnReasonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CHMSDischargePaymentDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szId = m_wndPaymentMethod.GetCurrent(0);
	//	if(szId == _T("TM1") || szId == _T("QUY"))
	//		m_wndBankCardInfo.ModifyStyle(WS_TABSTOP, 0);
	//	else
	//		m_wndBankCardInfo.ModifyStyle(0, WS_TABSTOP);

}
void CHMSDischargePaymentDialog::OnPaymentMethodSelendok() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	if (m_szPaymentMethodKey == _T("TM1") || m_szPaymentMethodKey == _T("QUY"))
	{
		m_szDescription.Empty();
	}
	if (m_szPaymentMethodKey == _T("CN") && pMF->CheckPermission(_T("FM.100.007")))
	{
		CHMSInputCompanyToInvoice dlg(this);

		if (dlg.DoModal() == IDOK)
		{
			m_szMaSoThue = dlg.m_szCompanyNameKey;
			dlg.m_wndSave.SetFocus();
		}
		else
			m_szMaSoThue.IsEmpty();
	}
	else
	{

	}
	UpdateData(FALSE);
}
/*void CHMSDischargePaymentDialog::OnPaymentMethodSetfocus(){

}*/
/*void CHMSDischargePaymentDialog::OnPaymentMethodKillfocus(){

}*/
long CHMSDischargePaymentDialog::OnPaymentMethodLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()) {
		szWhere.Format(_T(" and adpm_payment_method_id='%s' "), m_szPaymentMethodKey);
	};
	if (m_nTotalPayable <= 0)
	{
		szWhere.AppendFormat(_T(" AND adpm_payment_method_id not in('ATM','TTD','CK') "));
	}

	if (pMF->CheckPermission(_T("40.09")))
	{
		szWhere.AppendFormat(_T(" or adpm_org_id IN ('ALL') "));
	}

	m_wndPaymentMethod.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT adpm_payment_method_id as id, adpm_description as name FROM ad_payment_method WHERE (adpm_org_id='FM' %s) and adpm_isactive='Y' %s ORDER BY adpm_line "), szWhere, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
int CHMSDischargePaymentDialog::OnTotalPolicyCheckValue() {
	return 0;
}
void CHMSDischargePaymentDialog::OnAddPolicySelect()
{

}
/*void CHMSDischargePaymentDialog::OnTotalCostChange(){

} */
/*void CHMSDischargePaymentDialog::OnTotalCostSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnTotalCostKillfocus(){

} */
int CHMSDischargePaymentDialog::OnTotalCostCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnTotalDepositChange(){

} */
/*void CHMSDischargePaymentDialog::OnTotalDepositSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnTotalDepositKillfocus(){

} */
int CHMSDischargePaymentDialog::OnTotalDepositCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnTotalDiscountChange(){

} */
/*void CHMSDischargePaymentDialog::OnTotalDiscountSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnTotalDiscountKillfocus(){

} */
int CHMSDischargePaymentDialog::OnTotalDiscountCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnInsPaidChange(){

} */
/*void CHMSDischargePaymentDialog::OnInsPaidSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnInsPaidKillfocus(){

} */
int CHMSDischargePaymentDialog::OnInsPaidCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnTotalPatPaidChange(){

} */
/*void CHMSDischargePaymentDialog::OnTotalPatPaidSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnTotalPatPaidKillfocus(){

} */
int CHMSDischargePaymentDialog::OnTotalPatPaidCheckValue() {
	return 0;
}
/*void CHMSDischargePaymentDialog::OnTotalPayableChange(){

} */
/*void CHMSDischargePaymentDialog::OnTotalPayableSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnTotalPayableKillfocus(){

} */
int CHMSDischargePaymentDialog::OnTotalPayableCheckValue() {
	return 0;
}
void CHMSDischargePaymentDialog::OnDifferenceChargeSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	//if(m_bDifferenceCharge){
	//	m_nTotalPayable = m_nTotalPatPaid-(m_nTotalDiscount+m_nTotalDeposit);
	//}
	//else
	//{
	//	m_nTotalPayable = m_nTotalPatPaid-m_nTotalDiffPaid-(m_nTotalDiscount+m_nTotalDeposit);

	//}
	if (m_bPatientChargeFlag)
	{
		//	m_bDifferenceCharge = TRUE;
	}

	OnListLoadData();

}

/*void CHMSDischargePaymentDialog::OnDescriptionChange(){

} */
/*void CHMSDischargePaymentDialog::OnDescriptionSetfocus(){

} */
/*void CHMSDischargePaymentDialog::OnDescriptionKillfocus(){

} */
int CHMSDischargePaymentDialog::OnDescriptionCheckValue() {
	return 0;
}

#include "HMSBankPaymentInfoDialog.h"

void CHMSDischargePaymentDialog::OnBankCardInfoSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//return;
	UpdateData(TRUE);
	if (m_szPaymentMethodKey != _T("ATM") && m_szPaymentMethodKey != _T("TTD") && m_szPaymentMethodKey != _T("CK"))
	{
		return;
	}
	int nMode = VM_EDIT;
	if (m_szLocked == _T("Y"))
		nMode = VM_VIEW;
	CHMSBankPaymentInfoDialog dlg(this, nMode);
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (m_nInvoiceNo <= 0)
	{
		m_bankPaymentInfo.nAmount = m_nTotalPayment;
		m_bankPaymentInfo.szReceiptDate = m_szReceiptDate;
	}
	dlg.m_szPaymentMethod = m_szPaymentMethodKey;

	m_bankPaymentInfo.nAmount = m_nTotalPayment;
	dlg.m_szAccountNo = m_bankPaymentInfo.szAccountNo;
	dlg.m_szAccountName = m_bankPaymentInfo.szAccountName;
	dlg.m_szCardNo = m_bankPaymentInfo.szCardNo;
	dlg.m_szAddress = m_bankPaymentInfo.szAddress;
	dlg.m_szBankNameKey = m_bankPaymentInfo.szBankId;
	dlg.m_szBrand = m_bankPaymentInfo.szBrand;
	dlg.m_szReceiptNo = m_bankPaymentInfo.szReceiptNo;
	dlg.m_szReceiptDate = m_bankPaymentInfo.szReceiptDate;
	dlg.m_nAmount = m_bankPaymentInfo.nAmount;
	dlg.m_szNote = m_bankPaymentInfo.szNote;

	if (dlg.DoModal() == IDOK)
	{
		CString szAccNo;
		if (!dlg.m_szAccountNo.IsEmpty())
			szAccNo = dlg.m_szAccountNo;
		else
			szAccNo = dlg.m_szCardNo;

		m_szDescription.Format(_T("Số thẻ/TK [%s]; Tên TK: %s"),
			szAccNo, dlg.m_szAccountName);
		m_bankPaymentInfo.szPosNo = dlg.m_szReceiptNo;
		m_bankPaymentInfo.szAccountNo = dlg.m_szAccountNo;
		m_bankPaymentInfo.szAccountName = dlg.m_szAccountName;
		m_bankPaymentInfo.szCardNo = dlg.m_szCardNo;
		m_bankPaymentInfo.szAddress = dlg.m_szAddress;
		m_bankPaymentInfo.szBankId = dlg.m_szBankNameKey;
		m_bankPaymentInfo.szBankName = dlg.m_szBankName;
		m_bankPaymentInfo.szBrand = dlg.m_szBrand;
		m_bankPaymentInfo.szReceiptNo = dlg.m_szReceiptNo;
		m_bankPaymentInfo.szReceiptDate = dlg.m_szReceiptDate;
		UpdateData(FALSE);
	}
}

void CHMSDischargePaymentDialog::OnPOSPaymentSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	if (m_nTotalPayment <= 0)
	{
		ShowMessageBox(_T("INVALID_AMOUNT"));
		return;
	}
	CString szSQL, tmpStr;
	CString szServiceCode;
	szServiceCode = pMF->POS_GetServiceCode();

	szSQL.Format(_T("HMS_POS_INVOICE_CREATE('%s', %ld, '%s') "), szServiceCode, m_nDocumentNo, pMF->GetCurrentUser());

	CString szPOSID = pMF->ExecDML(szSQL);
	long nPosInvoiceID = str2long(szPOSID);

	if (nPosInvoiceID <= 0)
	{
		ShowMessageBox(_T("ERROR_POS_CREATE_INVOICE"));
		return;
	}

	pMF->POS_ResetContent();
	pMF->POS_BeginWaitForPayment();
	BOOL bSuccess = pMF->m_pos.Payment(szPOSID, m_nTotalPayment, pMF->m_szPatientName);
	if (!bSuccess)
	{
		szSQL.Format(_T("DELETE FROM hms_pos_invoice WHERE hpi_pos_invoice_id=%ld and hpi_servicecode='%s' "),
			nPosInvoiceID, szServiceCode);
		ShowMessageBox(_T("ERROR_POS_PAYMENT"));
		return;
	}

	CString szBillCode, szAmount, szResultCode;
	szBillCode.Empty();
	szAmount.Empty();
	szResultCode.Empty();
	long nTimeOut = 0;
	bool bRollback = false;
	szBillCode = pMF->POS_GetBillCode();
	szAmount = pMF->POS_GetAmount();
	szResultCode = pMF->POS_GetResultCode();

	if (!szBillCode.IsEmpty())
	{
		if (szResultCode != _T("00"))
		{
			CString szMsg;
			szMsg.Format(_T("POS_ERROR[%s]"), szResultCode);
			ShowMessageBox(szMsg);
			bRollback = true;
		}
	}
	else
	{
		bRollback = true;
	}
	if (bRollback)
	{
		szSQL.Format(_T("DELETE FROM hms_pos_invoice WHERE hpi_pos_invoice_id=%ld and hpi_servicecode='%s' "),
			nPosInvoiceID, szServiceCode);
		pMF->ExecSQL(szSQL);
		return;
	}

	szSQL.Format(_T("UPDATE hms_pos_invoice SET hpi_status='P' WHERE hpi_pos_invoice_id=%ld "), str2long(szPOSID));
	pMF->ExecSQL(szSQL);
	OnApprovalSelect();

}

void CHMSDischargePaymentDialog::OnApprovalSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CString szPaymentType;


	if (GetMode() != VM_ADD)
	{
		return;
	}
	if (!IsValidateData())
		return;

	/*
	 docno       INTEGER,
	  serialNo    VARCHAR2,
	  receiptNo   INTEGER,
	  receiptDate VARCHAR2,
	  receiptDept VARCHAR2,
	  departments VARCHAR2,
	  staffid     VARCHAR2,
	  reason      VARCHAR2,
	  feeType     VARCHAR2,
	  DiffPay  VARCHAR2 )
*/

	if (m_szPaymentMethodKey.IsEmpty())
	{
		if (pMF->IsInPatient())
			m_szPaymentMethodKey = _T("QUY");
		else
			m_szPaymentMethodKey = _T("TM1");
	}
	bool isMasterCard = false;
	if (m_szPaymentMethodKey == _T("ATM") || m_szPaymentMethodKey == _T("TTD") || m_szPaymentMethodKey == _T("CK"))
	{
		if (m_bankPaymentInfo.szAccountNo.IsEmpty() && m_bankPaymentInfo.szCardNo.IsEmpty())
		{
			ShowMessageBox(_T("Yêu cầu nhập thông tin thẻ tín dụng thanh toán"));
			return;

		}
		isMasterCard = true;
	}
	CString szClassType, szDiffPaid;
	if (pMF->IsInPatient())
		szClassType = _T("I");
	else
		szClassType = _T("E");

	if (m_bDifferenceChargeFlag)
		szDiffPaid = _T("Y");
	else
		szDiffPaid = _T("N");

	CString szPatientChargeFlag;
	if (m_bPatientChargeFlag)
		szPatientChargeFlag = _T("Y");
	else
		szPatientChargeFlag = _T("N");

	CString szDepts = pMF->m_szDepartments;
	szDepts.Replace(_T("["), _T("'"));
	szDepts.Replace(_T("]"), _T("'"));


	if (pMF->IsInPatient())
	{
		//Kiem tra neu tong so tien phai tra < tong tien tam ung+tong tien mien giam thi tao phieu hoan tra lai
		/*if(m_nTotalPayable < 0)
		{
			CHMSFeeRefundDialog dlg(this);
			dlg.m_nAmount = -1*m_nTotalPayable;
			dlg.SetMode(VM_ADD);
			dlg.m_szReceiptDate = m_szReceiptDate;
			dlg.m_szSerialNo = m_szSerialNo;
			dlg.m_nReceiptNo = m_nReceiptNo;
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nPID = pMF->m_nPatientNo;

			if(dlg.DoModal() == IDCANCEL)
				return;
		}*/


		szDiffPaid = _T("Y");
		szPatientChargeFlag = _T("Y");
		szSQL.Format(_T("HMS_FEE_INVOICE_PAYMENT(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s',  'EIOPTDMXB', '%s', '%s')"),
			m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, pMF->m_szReceiptDeptID, _T(""),
			pMF->GetCurrentUser(), m_szReasonKey, szDiffPaid, szPatientChargeFlag);

	}
	else
	{

		CString szPaymentDeptId = pMF->m_szReceiptDeptID;
		if (pMF->m_bIsRequest && !pMF->m_szRequestDept.IsEmpty())
			szPaymentDeptId = pMF->m_szRequestDept;


		if (pMF->IsInfertility())
		{
			szSQL.Format(_T("HMS_FEE_INVOICE_APPROVAL_V2(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s',  'EIOPTDMXB', '%s', '%s')"),
				m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, szPaymentDeptId, _T(""),
				pMF->GetCurrentUser(), m_szReasonKey, szDiffPaid, szPatientChargeFlag);
		}
		//Thêm hàm hms_fee_invoice_approval_v2e tính cho ngân hàng MB
		//else if(pMF->GetObjectType() != _T("S"))
		//{
		//	//szSQL.Format(_T("HMS_FEE_INVOICE_APPROVAL(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s',  'EIOPTDMXB', '%s', '%s')"),
		//	szSQL.Format(_T("hms_fee_invoice_approval_v2e(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s',  'EIOPTDMXB', '%s', '%s')"),
		//	m_nDocumentNo, m_szSerialNo, m_nReceiptNo,m_szReceiptDate, szPaymentDeptId, _T(""),
		//	pMF->GetCurrentUser(), m_szReasonKey,  szDiffPaid, szPatientChargeFlag);
		//}
		else
		{
			//szSQL.Format(_T("HMS_FEE_INVOICE_APPROVAL(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s',  'EIOPTDMXB', '%s', '%s')"),
			szSQL.Format(_T("HMS_FEE_INVOICE_APPROVAL(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s',  'EIOPTDMXB', '%s', '%s')"),
				m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, szPaymentDeptId, _T(""),
				pMF->GetCurrentUser(), m_szReasonKey, szDiffPaid, szPatientChargeFlag);
		}
	}

	//_msg(_T("%s"), szSQL);
	long nInvoiceNo = str2long(pMF->ExecDML(szSQL));
	_tprintf(_T("%s: %ld"), szSQL, nInvoiceNo);
	if (nInvoiceNo > 0)
	{
		m_nInvoiceNo = nInvoiceNo;
		pMF->m_nInvoiceNo = nInvoiceNo;
		//Đoạn này cập nhật lại mã số thuế vào hóa đơn thu

		if (m_szPaymentMethodKey == _T("CN") && !m_szMaSoThue.IsEmpty())

		{
			szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_company2_id='%s', hfe_payment_method='%s' WHERE hfe_docno=%ld and hfe_invoiceno=%ld"), m_szMaSoThue, m_szPaymentMethodKey, m_nDocumentNo, m_nInvoiceNo);
			pMF->ExecSQL(szSQL);
		}

		if (pMF->IsSmartCard())
		{
			szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_payment_method='THE' WHERE hfe_docno=%ld and hfe_invoiceno=%ld"), m_nDocumentNo, m_nInvoiceNo);
			pMF->ExecSQL(szSQL);
		}

		if (isMasterCard)
		{
			szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_payment_method='%s' WHERE hfe_docno=%ld and hfe_invoiceno=%ld"), m_szPaymentMethodKey, m_nDocumentNo, m_nInvoiceNo);
			pMF->ExecSQL(szSQL);

			CDbfMap tbl;

			tbl.AddField(_T("user_id"), dfText, 15);
			tbl.AddField(_T("docno"), dfLong);
			tbl.AddField(_T("invoiceno"), dfLong);
			tbl.AddField(_T("payment_method"), dfText, 3);
			tbl.AddField(_T("pos_no"), dfText, 20);
			tbl.AddField(_T("receipt_no"), dfText, 15);
			tbl.AddField(_T("receipt_date"), dfDateTime);
			tbl.AddField(_T("account_no"), dfText, 20);
			tbl.AddField(_T("account_name"), dfText, 65);
			tbl.AddField(_T("account_address"), dfText, 254);
			tbl.AddField(_T("card_no"), dfText, 20);
			tbl.AddField(_T("bank_id"), dfText, 35);
			tbl.AddField(_T("bank_name"), dfText, 254);
			tbl.AddField(_T("bank_brand"), dfText, 254);
			tbl.AddField(_T("amount"), dfDouble);
			tbl.AddField(_T("note"), dfText, 254);

			tbl.SetValue(_T("user_id"), pMF->GetCurrentUser());
			tbl.SetValue(_T("docno"), m_nDocumentNo);
			tbl.SetValue(_T("invoiceno"), m_nInvoiceNo);
			tbl.SetValue(_T("pos_no"), m_bankPaymentInfo.szPosNo);
			tbl.SetValue(_T("payment_method"), m_szPaymentMethodKey);
			tbl.SetValue(_T("receipt_no"), m_bankPaymentInfo.szReceiptNo);
			tbl.SetValue(_T("receipt_date"), m_szReceiptDate);
			tbl.SetValue(_T("account_no"), m_bankPaymentInfo.szAccountNo);
			tbl.SetValue(_T("account_name"), m_bankPaymentInfo.szAccountName);
			tbl.SetValue(_T("account_address"), m_bankPaymentInfo.szAddress);
			tbl.SetValue(_T("card_no"), m_bankPaymentInfo.szCardNo);
			tbl.SetValue(_T("bank_id"), m_bankPaymentInfo.szBankId);
			tbl.SetValue(_T("bank_name"), m_bankPaymentInfo.szBankName);
			tbl.SetValue(_T("bank_brand"), m_bankPaymentInfo.szBrand);
			tbl.SetValue(_T("amount"), m_bankPaymentInfo.nAmount);
			tbl.SetValue(_T("note"), m_bankPaymentInfo.szNote);

			szSQL.Format(_T("HMS_FEE_INVOICE_BANK_CREATE(%s)"), tbl.FormatSQL());

			int res = str2int(pMF->ExecDML(szSQL));
			if (res <= 0)
			{
				ShowMessageBox(_T("Không lưu được thông tin thẻ tín dụng. Vui lòng kiểm tra lại"));
			}

		}
		/*
			Khi thanh toan cho benh nhan goi ham Post thong tin hoa don len SERVER hoa don dien tu
		*/

		/*if(pMF->m_szElectronicInvoicesConnection == _T("Y"))
		{
			pMF->PostToInvoice(m_nDocumentNo, nInvoiceNo);
		}*/

		if (pMF->IsInPatient())
		{

			pMF->PrintDischargeReceiptFromInvoice(m_nInvoiceNo);
			if (m_nTotalPayment < 0)
			{
				szSQL.Format(_T("SELECT hfe_invoiceno FROM hms_fee_refund WHERE hfe_docno =%ld and hfe_refidx=%ld"), m_nDocumentNo, m_nInvoiceNo);
				CRecord rsx(&pMF->m_db);
				rsx.ExecSQL(szSQL);
				long nInvoiceNo;
				rsx.GetValue(_T("hfe_invoiceno"), nInvoiceNo);
				if (nInvoiceNo > 0)
				{
					pMF->PrintRefund(nInvoiceNo);
				}
			}
			else if (m_nTotalPayment > 0)
			{
				pMF->PrintReceipt(m_nInvoiceNo);
			}
			// in phieu phat thuoc cua benh nhan ung thu ke don ngoai tru
			szSQL.Format(_T("SELECT hpo_orderid FROM hms_ipharmaorder WHERE hpo_docno =%ld and hpo_orderstatus ='S' and nvl(hpo_outpatient_order,'N')='Y' and hpo_payment='P' "), m_nDocumentNo);
			CRecord rs1(&pMF->m_db);
			rs1.ExecSQL(szSQL);
			long nOrderID = 0;
			CPrintForms printer;

			while (!rs1.IsEOF())
			{

				rs1.GetValue(_T("hpo_orderid"), nOrderID);
				printer.PrintDrugDeliveryin(nOrderID, true);
				printer.PrintDrugDeliveryin_GN(nOrderID, true);
				printer.PrintDrugDeliveryin_HT(nOrderID, true);
				rs1.MoveNext();
			}
		}
		else
		{
			if (m_nTotalPayment < 0)
			{
				szSQL.Format(_T("SELECT hfe_invoiceno FROM hms_fee_refund WHERE hfe_docno =%ld and hfe_refidx=%ld"), m_nDocumentNo, m_nInvoiceNo);
				CRecord rsx(&pMF->m_db);
				rsx.ExecSQL(szSQL);
				long nInvoiceNo;
				rsx.GetValue(_T("hfe_invoiceno"), nInvoiceNo);
				if (nInvoiceNo > 0)
				{
					pMF->PrintRefund(nInvoiceNo);
				}
			}
			else if (m_nTotalPayment > 0)
			{
				pMF->PrintReceipt(m_nInvoiceNo);
			}


		}


		CGuiDialog::OnOK();
	}
	else
	{
		switch (nInvoiceNo)
		{
		case -1:
			ShowMessageBox(_T("Bệnh nhân đã được thanh toán."));
			break;
		case -2:
		case -3:
			ShowMessageBox(_T("Bệnh nhân chưa được xác nhận phí trong khoa."));
			break;
		case -100:
			ShowMessageBox(_T("Không cho phép thanh toán trước ngày ra viện"));
			break;
		case -113:
			ShowMessageBox(_T("Bệnh nhân Bảo hiểm có hồ sơ chưa kết thúc, không cho phép thanh toán! "));
			break;
		default:
			ShowMessageBox(_T("Có lỗi xảy ra khi thực hiện thanh toán. Thử lại"));
		};
	}
}

#include "HMSCancelReasonDialog.h"
void CHMSDischargePaymentDialog::OnCancelSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (m_nInvoiceNo <= 0)
		return;

	CString szSQL;
	CString tmpStr, szMsg;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice_bank ") \
		_T(" LEFT JOIN hms_fee_invoice_view ON (hfe_docno = hfib_docno AND hfe_invoiceno = hfib_invoiceno)") \
		_T(" WHERE hfib_docno=%ld and hfib_invoiceno=%ld and hfib_status <> 'C' AND hfe_locked = 'Y'"),
		m_nDocumentNo, m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Phiếu thu đã được thanh toán bằng thẻ tín dụng. Không cho phép hủy"));
		return;
	}

	TranslateString(_T("Do you want to cancel fee invoice?(Y/N)"), tmpStr);
	szMsg.AppendFormat(_T("%s\r\n"), tmpStr);
	TranslateString(_T("All fee items will be store in to database to lookup."), tmpStr);
	szMsg.AppendFormat(_T("%s"), tmpStr);


	CHMSCancelReasonDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
		szSQL.Format(_T("HMS_FEE_INVOICE_CANCEL(%ld, %ld, '%s') "),
			m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());
		_fmsg(_T("%s"), szSQL);
		int res = str2int(pMF->ExecDML(szSQL));
		if (res > 0) {

			szSQL.Format(_T("HMS_FEE_CANCEL_REASON_CREATE(%ld, %ld, '%s', '%s') "),
				m_nDocumentNo, m_nInvoiceNo, dlg.m_szReason, pMF->GetCurrentUser());
			pMF->ExecDML(szSQL);

			////Goi ham huy hoa don len server Hoa don dien tu
			//if(pMF->m_szElectronicInvoicesConnection == _T("Y"))
			//{
			//	pMF->PostToCancelInvoice(m_nDocumentNo, m_nInvoiceNo);
			//}

			CGuiDialog::OnOK();
		}
		else
			ShowMessageBox(_T("Cannot cancel invoice"));

	}


}

void CHMSDischargePaymentDialog::OnPrintReceiptSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//_msg(_T("Chào năm mới A Lộc"));
	if (pMF->IsInPatient())
	{
		//pMF->PrintDischargeReceiptFromInvoice(m_nInvoiceNo);
		CPrintForms printer;

		printer.FM_PrintDischargePaymentInvoice(m_nDocumentNo, m_nInvoiceNo);
	}
	else
	{
		pMF->PrintGeneralExaminationCost(m_nInvoiceNo);
		if (m_bDifferenceChargeFlag)
		{

			pMF->PrintInvoice(m_nInvoiceNo, true);
		}
	}
}
void CHMSDischargePaymentDialog::OnCloseSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
int CHMSDischargePaymentDialog::OnAddHMSInsuranceApprovalDialog() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSDischargePaymentDialog::OnEditHMSInsuranceApprovalDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CHMSDischargePaymentDialog::OnDeleteHMSInsuranceApprovalDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelHMSInsuranceApprovalDialog();
	}
	return 0;
}
int CHMSDischargePaymentDialog::OnSaveHMSInsuranceApprovalDialog() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		//szSQL = m_tblTbl.GetInsertSQL(); 
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE"));
		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
		szSQL += szWhere;
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
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
int CHMSDischargePaymentDialog::OnCancelHMSInsuranceApprovalDialog() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
int CHMSDischargePaymentDialog::OnHMSInsuranceApprovalDialogListLoadData() {
	return 0;
}

BOOL CHMSDischargePaymentDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F3) {
		if (m_wndApproval.IsWindowEnabled())
			OnApprovalSelect();
		return TRUE;
	}

	return CGuiDialog::PreTranslateMessage(pMsg);
}


int CHMSDischargePaymentDialog::OnMarkFreeItems() {

	/*CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hfe_class FROM hms_fee_invoice WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("hfe_class"), szClass);
	if(szClass != _T("I")  && szClass != _T("A"))
		return 0;*/
		/*
			CHMSFeeDiscountLineDialog dlg(this, VM_ADD);
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nPatientNo = m_nPatientNo;
			dlg.m_nInvoiceNo = m_nInvoiceNo;

			dlg.m_arItems.RemoveAll();
			if(dlg.DoModal() == IDOK)
			{
				GetDataToScreen();
				OnListLoadData();
			}
		*/
	return 0;
}

int CHMSDischargePaymentDialog::OnUnmarkFreeItems() {
	CHMSFeeDiscountLineDialog dlg(this, VM_VIEW);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nPatientNo = m_nPatientNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	return 0;
}

#include "HMSInsuranceApproveDocDialog.h"
void CHMSDischargePaymentDialog::OnInsuranceApproveDoc()
{
	CHMSInsuranceApproveDocDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{

	}
}

#include "HMSFeeRefundInvoiceDialog.h"
#include "HMSFeeDiscountInvoiceDialog.h"

void CHMSDischargePaymentDialog::OnCreateRefund() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	if (m_nInvoiceNo <= 0)
		return;

	CString szSQL;
	CString szStatus;
	szSQL.Format(_T("SELECT hfe_status FROM hms_fee_invoice ") \
		_T("WHERE hfe_docno=%ld and hfe_invoiceno = %ld "),
		m_nDocumentNo, m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_status"), szStatus);
	}
	if (szStatus != _T("P"))
		return;



	CHMSFeeRefundInvoiceDialog dlg(this);
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{

	}

}

void CHMSDischargePaymentDialog::OnCreateDiscount()
{


	if (m_szStatus == _T("P"))
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 th\x61nh to\xE1n. Kh\xF4ng \x63ho ph\xE9p t\x1EA1o phi\x1EBFu mi\x1EC5n gi\x1EA3m"));
		return;
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szReason = m_szReasonKey;
	UpdateData(true);

	CHMSFeeDiscountInvoiceDialog dlg(this);
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	m_szReasonKey = szReason;
	UpdateData(FALSE);
}



#include "HMSPaymentSourceDialog.h"

void CHMSDischargePaymentDialog::OnPaymentSourceSelect()
{
	if (m_szStatus != _T("A"))
	{
		ShowMessageBox(_T("Bệnh nhân đã được thanh toán hoặc chưa được xác nhận phí trong khoa, không thao tác được!"));
		return;
	}

	CHMSPaymentSourceDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}
#include "HMSPaymentSourceEXDialog.h"
void CHMSDischargePaymentDialog::OnPaymentSourceEXSelect()
{
	if (m_szStatus == _T("P"))
	{
		ShowMessageBox(_T("Bệnh nhân đã được thanh toán, không thao tác được!"));
		return;
	}

	CHMSPaymentSourceEXDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}

#include "HMSChuyennguonngansachTTbenhnhancovid19.h"
void CHMSDischargePaymentDialog::OnChuyennguonngansachTTbenhnhancovid19Select()
{
	//if(m_szStatus != _T("A"))
	//{
	//	ShowMessageBox(_T("Bệnh nhân đã được thanh toán hoặc chưa được xác nhận phí trong khoa, không thao tác được!"));
	//	return;
	//}

	CHMSChuyennguonTTbenhnhancovid19 dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}
#include "HMSChuyennguonngansachTTbenhnhanquanchitiet.h"
void CHMSDischargePaymentDialog::OnChuyennguonngansachTTbenhnhanquanchitietSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (m_szStatus == _T("P"))
	{
		ShowMessageBox(_T("Bệnh nhân đã được thanh toán hoặc chưa được xác nhận phí trong khoa, không thao tác được!"));
		return;
	}
	//Kiểm tra chỉ bệnh nhân đối tượng quân & có thẻ QN5 mới hiện lên Dialog để gạt = #1844	

	/*if (pMF->m_szCardNo.Mid(3,2) != _T("97") && pMF->m_szObjectID != _T("11"))
	{
		ShowMessageBox(_T("Bệnh nhân không phải đối tượng quân nhân và có thẻ QN5, không thao tác được!"), MB_ICONERROR);
		return;
	}*/

	CHMSChuyennguonTTbenhnhanquanchitiet dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}

#include "HMSChuyennguonngansachTTbenhnhanquanPKchitiet.h"
void CHMSDischargePaymentDialog::OnChuyennguonngansachTTbenhnhanquanPKchitietSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//Kiểm tra chỉ bệnh nhân đối tượng quân & có thẻ QN5 mới hiện lên Dialog để gạt = #1844	

	/*if (pMF->m_szCardNo.Mid(3,2) != _T("97") && pMF->m_szObjectID != _T("11"))
	{
		ShowMessageBox(_T("Bệnh nhân không phải đối tượng quân nhân và có thẻ QN5, không thao tác được!"), MB_ICONERROR);
		return;
	}*/

	if (m_szStatus == _T("P"))
	{
		ShowMessageBox(_T("Bệnh nhân đã được thanh toán, không thao tác được!"));
		return;
	}

	CHMSChuyennguonTTbenhnhanquanPKchitiet dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}

void CHMSDischargePaymentDialog::OnChuyennguonngansachTTbenhnhancovid19pkSelect()
{
	//if(m_szStatus != _T("A"))
	//{
	//	ShowMessageBox(_T("Bệnh nhân đã được thanh toán hoặc chưa được xác nhận phí trong khoa, không thao tác được!"));
	//	return;
	//}

	CHMSChuyennguonTTbenhnhancovid19pk dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}


#include "HMSChuyennguonngansachTTbenhnhanquancovid19.h"
void CHMSDischargePaymentDialog::OnChuyennguonngansachTTbenhnhanquancovid19Select()
{
	ShowMessageBox(_T("Chức năng đang được phát triển, chưa hoàn thiện!"));
	return;
	//if(m_szStatus != _T("A"))
	//{
	//	ShowMessageBox(_T("Bệnh nhân đã được thanh toán hoặc chưa được xác nhận phí trong khoa, không thao tác được!"));
	//	return;
	//}

	CHMSChuyennguonTTbenhnhanquancovid19 dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}


#include <atlenc.h>
int CHMSDischargePaymentDialog::OnPrintElectronicInvoice() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nDocumentNo;
	pMF->BeginWaitCursor();


	if (pMF->DownloadInvoice(m_nInvoiceNo))
	{
		CString szFileName;
		szFileName.Format(_T("%s\\DATA\\ElectronicInvoice.pdf"), pMF->m_szPath);
		CFile file;
		bool res = false;
		if (file.Open(szFileName, CFile::modeRead) && file.GetLength() > 0)
		{
			res = true;
			file.Close();
			ShellExecute(NULL, _T("open"), szFileName, NULL, NULL, SW_SHOW);
		}
	}
	else
		ShowMessageBox(_T("Kh\xF4ng t\xECm th\x1EA5y s\x1ED1 ho\xE1 \x111\x1A1n \x111i\x1EC7n t\x1EED"));

	pMF->EndWaitCursor();

	return 0;
}


void CHMSDischargePaymentDialog::GetMasterCardInfo()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	if (m_szPaymentMethodKey == _T("ATM") || m_szPaymentMethodKey == _T("TTD") || m_szPaymentMethodKey == _T("CK"))
	{

		szSQL.Format(_T("SELECT * ") \
			_T("FROM hms_fee_invoice_bank ") \
			_T("WHERE hfib_docno=%ld and hfib_invoiceno=%ld "),
			m_nDocumentNo, m_nInvoiceNo);

		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("hfib_posno"), m_bankPaymentInfo.szPosNo);
			rs.GetValue(_T("hfib_receiptno"), m_bankPaymentInfo.szReceiptNo);
			rs.GetValue(_T("hfib_receiptno"), m_bankPaymentInfo.szReceiptDate);
			rs.GetValue(_T("hfib_accountno"), m_bankPaymentInfo.szAccountNo);
			rs.GetValue(_T("hfib_account_name"), m_bankPaymentInfo.szAccountName);
			rs.GetValue(_T("hfib_address"), m_bankPaymentInfo.szAddress);
			rs.GetValue(_T("hfib_cardno"), m_bankPaymentInfo.szCardNo);
			rs.GetValue(_T("hfib_bankid"), m_bankPaymentInfo.szBankId);
			rs.GetValue(_T("hfib_bank_name"), m_bankPaymentInfo.szBankName);
			rs.GetValue(_T("hfib_brand"), m_bankPaymentInfo.szBrand);
			rs.GetValue(_T("hfib_amount"), m_bankPaymentInfo.nAmount);
			rs.GetValue(_T("hfib_note"), m_bankPaymentInfo.szNote);


			CString szAccNo;
			szAccNo.Empty();
			if (!m_bankPaymentInfo.szAccountNo.IsEmpty())
				szAccNo = m_bankPaymentInfo.szAccountNo;
			else
				szAccNo = m_bankPaymentInfo.szCardNo;

			m_szDescription.Format(_T("Số thẻ/TK [%s]; Tên TK: %s"), m_bankPaymentInfo.szAccountNo, m_bankPaymentInfo.szAccountName);
		}
	}
}
void CHMSDischargePaymentDialog::OnUnUploadtoInsGate()
{

	CHMSUnUpload2InsGate dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{

	}
}

