#include "HMSPaymentReceiptDialog.h"
#include "MainFrm.h"
#include "HMSFeeRefundDialog.h"
#include "HMSFeeRefundInvoiceDialog.h"
#include "HMSFeeRefundInvoiceDialogEX.h"
#include "HMSFeeRefundInvoiceServicePkgDialog.h"
#include ".\hmspaymentreceiptdialog.h"
#include "HMSInputCompanyOnInvoice.h"
#include "OnUnUploadtoInsGate.h"

static void _OnPaymentMethodLabelSelectFnc(CWnd* pWnd)
{
	((CHMSPaymentReceiptDialog*)pWnd)->OnPaymentMethodLabelSelect();
}
static long _OnListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnListLoadData();
}
static void _OnListDblClickFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnListDblClick();
}
static void _OnListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnListDeleteItem();
}

static int _OnListReturnItemFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnListReturnItem();
}


static int _OnCreateDiscountFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnCreateDiscountVoucher();
	return 0;
}

static int _OnCreateRefundFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnCreateRefundVoucher();
	return 0;
}

static int _OnCreateRefundEXFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnCreateRefundVoucherEX();
	return 0;
}

static int _OnCreateRefundServicePkgFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnCreateRefundServicePkgVoucher();
	return 0;
}

static int _OnPrintElectronicInvoicesFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnPrintElectronicInvoice();
	return 0;
}

/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptDateSetfocus();} */
	/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptDateKillfocus();
	} */
static int _OnReceiptDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnReceiptDateCheckValue();
}
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnStaffSetfocus();} */
	/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnStaffKillfocus();
	} */
static int _OnStaffCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnStaffCheckValue();
}
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnSerialNoSetfocus();} */
	/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnSerialNoKillfocus();
	} */
static int _OnSerialNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnSerialNoCheckValue();
}
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptNoSetfocus();} */
	/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnReceiptNoKillfocus();
	} */

static int _OnReceiptNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnReceiptNoCheckValue();
}
static void _OnReasonSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnReasonSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnReasonSelendokFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnReasonSelendok();
}
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonKillfocus();
}*/
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonKillfocus();
}*/
static long _OnReasonLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnReasonLoadData();
}
/*static void _OnReasonAddNewFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonAddNew();
}*/



static void _OnPaymentMethodSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPaymentMethodSelendokFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnPaymentMethodLoadData();
}

/*static void _OnReasonAddNewFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonAddNew();
}*/

/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalAmountSetfocus();} */
	/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnTotalAmountKillfocus();
	} */
static int _OnTotalAmountCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnTotalAmountCheckValue();
}
/*static void _OnTotalDepositChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDepositChange();
} */
/*static void _OnTotalDepositSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDepositSetfocus();} */
	/*static void _OnTotalDepositKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDepositKillfocus();
	} */
static int _OnTotalDepositCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnTotalDepositCheckValue();
}
/*static void _OnTotalDiscountChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDiscountChange();
} */
/*static void _OnTotalDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDiscountSetfocus();} */
	/*static void _OnTotalDiscountKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDiscountKillfocus();
	} */
static int _OnTotalDiscountCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnTotalDiscountCheckValue();
}
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalPayableSetfocus();} */
	/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnTotalPayableKillfocus();
	} */
static int _OnTotalPayableCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnTotalPayableCheckValue();
}
/*static void _OnPaymentChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentChange();
} */
/*static void _OnPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentSetfocus();} */
	/*static void _OnPaymentKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentKillfocus();
	} */
static int _OnPaymentCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnPaymentCheckValue();
}
/*static void _OnRefundChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRefundChange();
} */
/*static void _OnRefundSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRefundSetfocus();} */
	/*static void _OnRefundKillfocusFnc(CWnd *pWnd){
		((CHMSPaymentReceiptDialog *)pWnd)->OnRefundKillfocus();
	} */
static int _OnRefundCheckValueFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnRefundCheckValue();
}
static void _OnExamFeesSelectFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnExamFeesSelect();
}


static void _OnNotIncDrugSelectFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnNotIncDrugSelect();
}

static void _OnParaclinicalFeesSelectFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnParaclinicalFeesSelect();
}
static void _OnDrugFeesSelectFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnDrugFeesSelect();
}

static void _OnAllFeesSelectFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnAllFeesSelect();
}

static void _OnApprovalSelectFnc(CWnd* pWnd) {
	CHMSPaymentReceiptDialog* pVw = (CHMSPaymentReceiptDialog*)pWnd;
	pVw->OnApprovalSelect();
}
static void _OnCancelSelectFnc(CWnd* pWnd) {
	CHMSPaymentReceiptDialog* pVw = (CHMSPaymentReceiptDialog*)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintReceiptSelectFnc(CWnd* pWnd) {
	CHMSPaymentReceiptDialog* pVw = (CHMSPaymentReceiptDialog*)pWnd;
	pVw->OnPrintReceiptSelect();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CHMSPaymentReceiptDialog* pVw = (CHMSPaymentReceiptDialog*)pWnd;
	pVw->OnCloseSelect();
}
static void _OnCreateRefundSelectFnc(CWnd* pWnd) {
	CHMSPaymentReceiptDialog* pVw = (CHMSPaymentReceiptDialog*)pWnd;
	pVw->OnCreateRefundSelect();
}

static int _OnAddHMSPaymentReceiptDialogFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnAddHMSPaymentReceiptDialog();
}
static int _OnEditHMSPaymentReceiptDialogFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnEditHMSPaymentReceiptDialog();
}
static int _OnDeleteHMSPaymentReceiptDialogFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnDeleteHMSPaymentReceiptDialog();
}
static int _OnSaveHMSPaymentReceiptDialogFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnSaveHMSPaymentReceiptDialog();
}
static int _OnCancelHMSPaymentReceiptDialogFnc(CWnd* pWnd) {
	return ((CHMSPaymentReceiptDialog*)pWnd)->OnCancelHMSPaymentReceiptDialog();
}
static int _OnChuyennguonngansachTTbenhnhancovid19lectFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnChuyennguonngansachTTbenhnhancovid19Select();
	return 0;
}
static void _OnOperationFeesSelectFnc(CWnd* pWnd) {
	((CHMSPaymentReceiptDialog*)pWnd)->OnOperationFeesSelect();
}

static void _OnApproveAllInvoicenoSelectFnc(CWnd* pWnd)
{
	((CHMSPaymentReceiptDialog*)pWnd)->OnApproveAllInvoicenoSelect();
}

static void _OnOutPackageListSelectFnc(CWnd* pWnd)
{
	((CHMSPaymentReceiptDialog*)pWnd)->OnOutPackageListSelect();
}

static int _OnUnUploadtoInsGateFnc(CWnd *pWnd)
{
	((CHMSPaymentReceiptDialog*)pWnd)->OnUnUploadtoInsGate();
	return 0;
}


CHMSPaymentReceiptDialog::CHMSPaymentReceiptDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 645;
	SetDefaultValues();
	m_nInvoiceNo = 0;
	m_bNotIncDrug = FALSE;
	m_nTtlCost = 0;
}
CHMSPaymentReceiptDialog::~CHMSPaymentReceiptDialog() {
}
void CHMSPaymentReceiptDialog::OnCreateComponents()
{
	m_wndList.Create(this, 10, 30, 995, 475);
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 480, 110, 505);
	m_wndReceiptDate.Create(this, 115, 480, 255, 505);
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 570);
	m_wndStaffLabel.Create(this, _T("Staff"), 260, 480, 360, 505);
	m_wndStaff.Create(this, 365, 480, 475, 505);
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 480, 480, 610, 505);
	m_wndTotalAmount.Create(this, 615, 480, 735, 505);
	m_wndTotalPayableLabel.Create(this, _T("Patient Payable"), 740, 480, 870, 505);
	m_wndTotalPayable.Create(this, 875, 480, 995, 505);
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 510, 110, 535);
	m_wndSerialNo.Create(this, 115, 510, 255, 535);
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 260, 510, 360, 535);
	m_wndReceiptNo.Create(this, 365, 510, 475, 535);
	m_wndTotalDepositLabel.Create(this, _T("Total Deposit"), 480, 510, 610, 535);
	m_wndTotalDeposit.Create(this, 615, 510, 735, 535);
	m_wndPaymentLabel.Create(this, _T("Payment"), 740, 510, 870, 535);
	m_wndPayment.Create(this, 875, 510, 995, 535);
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 540, 110, 565);
	m_wndReason.Create(this, 115, 540, 255, 565);
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 260, 540, 360, 565);
	m_wndPaymentMethod.Create(this, 365, 540, 475, 565);
	m_wndTotalDiscountLabel.Create(this, _T("Miễn giảm/nguồn khác"), 480, 540, 610, 565);
	m_wndTotalDiscount.Create(this, 615, 540, 735, 565);
	m_wndRefundLabel.Create(this, _T("Refund"), 740, 540, 870, 565);
	m_wndRefund.Create(this, 875, 540, 995, 565);
	m_wndExamFees.Create(this, _T("Exam Fees"), 105, 575, 185, 600);
	m_wndParaclinicalFees.Create(this, _T("Paraclinical Fees"), 190, 575, 320, 600);
	m_wndDrugFees.Create(this, _T("Drug Fees"), 326, 575, 422, 600);
	m_wndOperationFees.Create(this, _T("PT-TT"), 427, 575, 519, 600);
	m_wndAllFees.Create(this, _T("All Fees"), 524, 575, 610, 600);
	m_wndNotIncDrug.Create(this, _T("Kh\xF4ng \x62\x61o g\x1ED3m thu\x1ED1\x63"), 10, 606, 320, 631);

	m_wndApproval.Create(this, _T("&Approval"), 615, 575, 710, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 575, 810, 600);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 815, 575, 900, 600);
	m_wndClose.Create(this, _T("&Close"), 905, 575, 1000, 600);
	m_wndCreateRefund.Create(this, _T("&Refund"), 10, 575, 100, 600);
	m_wndApproveAllInvoiceno.Create(this, _T("Duyệt tất cả hóa đơn phòng khám gửi"), 326, 606, 610, 631);
	m_wndOutPackageList.Create(this, _T("Thu ngoài gói KSK"), 615, 606, 1000, 631);

}
void CHMSPaymentReceiptDialog::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndPaymentMethodLabel.SetHyperlink(true);
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
	m_wndReason.SetCheckValue(true);
	m_wndReason.LimitText(35);

	m_wndSerialNo.SetReadOnly(true);
	m_wndReceiptNo.SetReadOnly(true);

	m_wndReason.SetReadOnly(true);

	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.ModifyStyle(WS_TABSTOP, 0);

	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetReadOnly(true);
	m_wndTotalAmount.SetCurrencyFormat(TRUE);
	m_wndTotalDeposit.SetLimitText(16);
	m_wndTotalDeposit.SetReadOnly(true);
	m_wndTotalDeposit.SetCurrencyFormat(TRUE);
	m_wndTotalDiscount.SetLimitText(35);
	m_wndTotalDiscount.SetReadOnly(true);
	m_wndTotalDiscount.SetCurrencyFormat(TRUE);
	m_wndTotalPayable.SetLimitText(16);
	m_wndTotalPayable.SetReadOnly(true);
	m_wndTotalPayable.SetCurrencyFormat(TRUE);

	m_wndPayment.SetLimitText(16);
	m_wndPayment.SetCheckValue(true);
	m_wndPayment.SetCurrencyFormat(TRUE);
	m_wndRefund.SetLimitText(16);
	m_wndRefund.SetReadOnly(true);
	m_wndRefund.SetCurrencyFormat(TRUE);
	m_wndApproveAllInvoiceno.EnableWindow(false);



	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT || CFMT_CENTER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Status"), CFMT_TEXT | CFMT_CENTER, 60);
	m_wndList.InsertColumn(7, _T("item"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(8, _T("xRowID"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(9, _T("Mark"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("Nguồn TT"), CFMT_TEXT | CFMT_CENTER, 60);



	m_wndReason.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReason.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndReason.ModifyStyle(WS_TABSTOP, 0);

	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


}
void CHMSPaymentReceiptDialog::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndPaymentMethodLabel.SetEvent(WE_CLICK, _OnPaymentMethodLabelSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//	m_wndList.SetWindowText(_T("Fee List"));
	//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc);
	//	m_wndList.AddEvent(0, _T("-"), NULL);
	//	m_wndList.AddEvent(2, _T("Return"), _OnListReturnItemFnc);
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


	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndTotalDeposit.SetEvent(WE_CHANGE, _OnTotalDepositChangeFnc);
	//m_wndTotalDeposit.SetEvent(WE_SETFOCUS, _OnTotalDepositSetfocusFnc);
	//m_wndTotalDeposit.SetEvent(WE_KILLFOCUS, _OnTotalDepositKillfocusFnc);
	m_wndTotalDeposit.SetEvent(WE_CHECKVALUE, _OnTotalDepositCheckValueFnc);
	//m_wndTotalDiscount.SetEvent(WE_CHANGE, _OnTotalDiscountChangeFnc);
	//m_wndTotalDiscount.SetEvent(WE_SETFOCUS, _OnTotalDiscountSetfocusFnc);
	//m_wndTotalDiscount.SetEvent(WE_KILLFOCUS, _OnTotalDiscountKillfocusFnc);
	m_wndTotalDiscount.SetEvent(WE_CHECKVALUE, _OnTotalDiscountCheckValueFnc);
	//m_wndTotalPayable.SetEvent(WE_CHANGE, _OnTotalPayableChangeFnc);
	//m_wndTotalPayable.SetEvent(WE_SETFOCUS, _OnTotalPayableSetfocusFnc);
	//m_wndTotalPayable.SetEvent(WE_KILLFOCUS, _OnTotalPayableKillfocusFnc);
	m_wndTotalPayable.SetEvent(WE_CHECKVALUE, _OnTotalPayableCheckValueFnc);
	//m_wndPayment.SetEvent(WE_CHANGE, _OnPaymentChangeFnc);
	//m_wndPayment.SetEvent(WE_SETFOCUS, _OnPaymentSetfocusFnc);
	//m_wndPayment.SetEvent(WE_KILLFOCUS, _OnPaymentKillfocusFnc);
	m_wndPayment.SetEvent(WE_CHECKVALUE, _OnPaymentCheckValueFnc);
	//m_wndRefund.SetEvent(WE_CHANGE, _OnRefundChangeFnc);
	//m_wndRefund.SetEvent(WE_SETFOCUS, _OnRefundSetfocusFnc);
	//m_wndRefund.SetEvent(WE_KILLFOCUS, _OnRefundKillfocusFnc);
	m_wndRefund.SetEvent(WE_CHECKVALUE, _OnRefundCheckValueFnc);
	m_wndExamFees.SetEvent(WE_CLICK, _OnExamFeesSelectFnc);
	m_wndNotIncDrug.SetEvent(WE_CLICK, _OnNotIncDrugSelectFnc);
	m_wndParaclinicalFees.SetEvent(WE_CLICK, _OnParaclinicalFeesSelectFnc);
	m_wndDrugFees.SetEvent(WE_CLICK, _OnDrugFeesSelectFnc);
	m_wndOperationFees.SetEvent(WE_CLICK, _OnOperationFeesSelectFnc);
	m_wndAllFees.SetEvent(WE_CLICK, _OnAllFeesSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndCreateRefund.SetEvent(WE_CLICK, _OnCreateRefundSelectFnc);
	m_wndApproveAllInvoiceno.SetEvent(WE_CLICK, _OnApproveAllInvoicenoSelectFnc);
	m_wndOutPackageList.SetEvent(WE_CLICK, _OnOutPackageListSelectFnc);



	m_wndTotalAmount.SetTextColor(RGB(0, 0, 255));
	m_wndTotalPayable.SetTextColor(RGB(255, 0, 0));
	m_wndPayment.SetTextColor(RGB(255, 128, 0));
	m_wndRefund.SetTextColor(RGB(0, 128, 255));
	SetWindowFont(&m_wndTotalAmount, GetFaceName(), GetFaceSize() + 3, TRUE);
	SetWindowFont(&m_wndTotalPayable, GetFaceName(), GetFaceSize() + 3, TRUE);
	SetWindowFont(&m_wndPayment, GetFaceName(), GetFaceSize() + 3, TRUE);
	SetWindowFont(&m_wndRefund, GetFaceName(), GetFaceSize() + 3, TRUE);

	CString szType = AfxGetApp()->GetProfileString(_T("HOSPITALFEE_PAYMENTRECEIPT"), pMF->GetCurrentUser(), _T(""));
	m_szFeeType = pMF->m_szFeeTypes;
	m_nFeeType = 3;
	if (szType == _T("E"))
	{
		m_szFeeType = _T("'E'");
		m_nFeeType = 0;
	}
	else if (szType == _T("P"))
	{
		m_szFeeType = _T("'O','P','T','X'");
		m_nFeeType = 1;
	}
	else if (szType == _T("D"))
	{
		m_szFeeType = _T("'D','M','R'");
		m_nFeeType = 2;
	}
	else if (szType == _T("O"))
	{
		m_szFeeType = _T("'O'");
		m_nFeeType = 3;
	}
	else if (szType == _T("A"))
	{
		m_szFeeType = _T("'E','I','O','P','T','X','D','M'");
		m_nFeeType = 4;
	}

	GetDataToScreen();

	OnAllFeesSelect();
	//	OnListLoadData();
	//	GetDataToScreen();
	m_wndPayment.SetFocus();


	if (m_szStatus != _T("C"))
	{
		m_wndList.AddEvent(1, _T("T\x1EA1o phi\x1EBFu mi\x1EC5n gi\x1EA3m"), _OnCreateDiscountFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(2, _T("Tạo phiếu trả lại"), _OnCreateRefundFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);

		//m_wndList.AddEvent(3, _T("Tạo phiếu trả lại nhà lưu trú"), _OnCreateRefundEXFnc);
		//m_wndList.AddEvent(0, _T("-"), NULL);

		m_wndList.AddEvent(4, _T("Tạo phiếu trả lại nhà lưu trú tự động"), _OnCreateRefundServicePkgFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);

		m_wndList.AddEvent(5, _T("Chuyển nguồn thanh toán - bệnh nhân covid 19 (nội trú) "), _OnChuyennguonngansachTTbenhnhancovid19lectFnc);

		//Check user hvlinh -> phụ trách đẩy cổng BQP theo tác chức năng này
		if (pMF->GetCurrentUser() == _T("hvlinh") || pMF->GetCurrentUser() == _T("dvdungkhqs") || pMF->GetCurrentUser() == _T("vhbinhkhqs"))
		{
			m_wndList.AddEvent(0, _T("-"));
			m_wndList.AddEvent(6, _T("Cập nhật mục phí không chuyển lên cổng (BQP/HN) "), _OnUnUploadtoInsGateFnc);
		}
	}
	else
	{

	}


	if (pMF->m_szElectronicInvoicesConnection == _T("Y")) {
		m_wndList.AddEvent(0, _T("-"));
		m_wndList.AddEvent(3, _T("&In ho\xE1 \x111\x1A1n \x111i\x1EC7n t\x1EED"), _OnPrintElectronicInvoicesFnc);
	}

	_tprintf(_T("\r\ndept=%s"), pMF->m_szReceiptDeptID);


}
void CHMSPaymentReceiptDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReason.GetDlgCtrlID(), m_szReasonKey);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);

	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Text(pDX, m_wndTotalDiscount.GetDlgCtrlID(), m_nTotalDiscount);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	DDX_Text(pDX, m_wndPayment.GetDlgCtrlID(), m_nPayment);
	DDX_Text(pDX, m_wndRefund.GetDlgCtrlID(), m_nRefund);
	DDX_Radio(pDX, m_wndExamFees.GetDlgCtrlID(), m_nFeeType);
	DDX_Check(pDX, m_wndNotIncDrug.GetDlgCtrlID(), m_bNotIncDrug);
	DDX_Check(pDX, m_wndApproveAllInvoiceno.GetDlgCtrlID(), m_bApproveAllInvoiceno);
	DDX_Check(pDX, m_wndOutPackageList.GetDlgCtrlID(), m_bOutPackageList);
}
void CHMSPaymentReceiptDialog::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	m_szPaymentMethodKey = pMF->GetPaymentMethod();

	if (m_nInvoiceNo <= 0) {

		if (pMF->IsInPatient())
		{
			szSQL.Format(_T("SELECT hcr_dischargedept, hcr_status FROM hms_clinical_record WHERE hcr_docno = %ld "), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hcr_dischargedept"), pMF->m_szReceiptDeptID);
			rs.GetValue(_T("hcr_status"), m_szDocStatus);

			szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) ") \
				_T("FROM hms_fee_deposit ") \
				_T("WHERE hfe_docno=%ld and hfe_status in('O','P') and hfe_objectid=7 "),
				m_nDocumentNo);
		}
		else
		{

			szSQL.Format(_T("SELECT hd_admitdept, hd_status, hd_is_extins FROM hms_doc WHERE hd_docno = %ld "), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hd_admitdept"), pMF->m_szReceiptDeptID);
			rs.GetValue(_T("hd_status"), m_szDocStatus);
			CString szExtIns;
			rs.GetValue(_T("hd_is_extins"), szExtIns);

			szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) ") \
				_T("FROM hms_fee_deposit ") \
				_T("WHERE hfe_docno=%ld and hfe_status in('O','P') and hfe_class ='E' and nvl(hfe_infertility,'N') not in('I','P') "),
				m_nDocumentNo);



		}


		rs.ExecSQL(szSQL);
		m_nTotalDeposit = rs.GetDoubleValue();


		szSQL.Format(_T("SELECt sum(hfe_amount-hfe_patpaid) ") \
			_T("FROM hms_fee_discount ") \
			_T(" WHERE hfe_docno=%ld and hfe_status ='O' and hfe_class = 'E' "),
			m_nDocumentNo);
		rs.ExecSQL(szSQL);

		m_nTotalDiscount = rs.GetDoubleValue();



		m_nTotalPayable = m_nTotalAmount - (m_nTotalDeposit + m_nTotalDiscount);


		m_szStaff = pMF->GetCurrentUser();

		pMF->GetSerialInformation();
		m_szSerialNo = pMF->m_szSerialNo;
		m_szReceiptDate = pMF->m_szRecvDate;
		m_nReceiptNo = pMF->m_nReceiptNo;

		m_szStatus = _T("O");

		if (pMF->m_szReceiptDeptID == _T("TYC") && m_szDocStatus != _T("T"))
		{
			if (m_nTotalPayable < 0)
				m_nTotalPayable = 0;

		}
		m_nTtlCost = 0;
		SetMode(VM_ADD);
	}
	else
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_invoice ") \
			_T("WHERE hfe_docno=%ld and hfe_invoiceno=%ld "),
			m_nDocumentNo, m_nInvoiceNo);

		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_date"), m_szReceiptDate);
			rs.GetValue(_T("hfe_staff"), m_szStaff);
			rs.GetValue(_T("hfe_serialno"), m_szSerialNo);
			rs.GetValue(_T("hfe_status"), m_szStatus);

			rs.GetValue(_T("hfe_org_id"), m_szOrgID);

			rs.GetValue(_T("hfe_receiptno"), m_nReceiptNo);
			rs.GetValue(_T("hfe_desc"), m_szReasonKey);
			rs.GetValue(_T("hfe_amount"), m_nTotalAmount);

			m_nTtlCost = m_nTotalAmount;

			rs.GetValue(_T("hfe_discount"), m_nTotalDiscount);
			rs.GetValue(_T("hfe_deposit"), m_nTotalDeposit);

			rs.GetValue(_T("hfe_freeamount"), m_nTotalDiscount);

			//Tinh phan bao vien tra
			/*
			double extins_payment, extins_unpaid;
			rs.GetValue(_T("hfe_extins_payment"), extins_payment);
			rs.GetValue(_T("hfe_extins_unpaid"), extins_unpaid);
			m_nTotalDiscount += (extins_payment-extins_unpaid);
			*/

			rs.GetValue(_T("hfe_payment"), m_nTotalPayable);
			rs.GetValue(_T("hfe_locked"), m_szLocked);
			rs.GetValue(_T("hfe_deptid"), pMF->m_szReceiptDeptID);
			//rs.GetValue(_T("hfe_payment_method"), m_szPaymentMethodKey);
			m_nTotalPayable = m_nTotalAmount - (m_nTotalDeposit + m_nTotalDiscount);

			if (m_szStatus == _T("C"))
			{
				//				CGuiDialog::OnCancel();
			}

		}
		SetMode(VM_VIEW);
		if (m_szLocked == _T("Y"))
			m_wndCancel.EnableWindow(FALSE);

	}

}
void CHMSPaymentReceiptDialog::GetScreenToData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSPaymentReceiptDialog::SetDefaultValues() {

	m_szReceiptDate.Empty();
	m_szStaff.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo = 0;
	m_szReasonKey = _T("0");
	m_nTotalAmount = 0;
	m_nTotalDeposit = 0;
	m_nTotalDiscount = 0;
	m_nTotalPayable = 0;
	m_nPayment = 0;
	m_nRefund = 0;
	m_bApproveAllInvoiceno = FALSE;
	m_bOutPackageList = FALSE;

}
int CHMSPaymentReceiptDialog::SetMode(int nMode)
{
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szAdmitDept1, szAdmitDept, szhealthexam;
	int vcount = 0;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T(" SELECT") \
		_T(" hd_admitdept,") \
		_T(" hcr_admitdept, ") \
		_T(" NVL(HD_HEALTHEXAM, 'N') as healthexam ") \
		_T(" FROM hms_doc ") \
		_T(" LEFT JOIN hms_clinical_record ON (hd_docno=hcr_docno)") \
		_T(" WHERE hd_docno=%ld"), m_nDocumentNo);

	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hd_admitdept"), szAdmitDept);
		rs.GetValue(_T("HCR_ADMITDEPT"), szAdmitDept1);
		rs.GetValue(_T("healthexam"), szhealthexam);
	}

	//Kiểm tra những hóa đơn trạng thái A thì gọi hàm update lại, không thì nhảy tiếp		

	szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE hfe_docno = %ld and hfe_status='A' and hfe_class='E' and hfe_type='S' and hfe_org_id ='EM' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	vcount = rs.GetIntValue();

	switch (nMode)
	{
	case VM_ADD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 3, -1);
		// 			SetDefaultValues(); 
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 3, -1);
		m_wndPayment.SetFocus();
		break;
	case VM_VIEW:
		m_wndReason.SetReadOnly(true);
		EnableControls(FALSE);
		EnableButtons(TRUE, 1, 2, 3, 4, -1);
		m_wndCancel.ModifyStyle(WS_TABSTOP, 0);
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

	if ((m_szOrgID == _T("FM") && m_szStatus == _T("A")) || (m_szOrgID == _T("EM") && m_szStatus == _T("A")))
	{
		m_wndApproval.EnableWindow(true);
	}

	if (vcount >= 2)
	{
		m_wndApproveAllInvoiceno.EnableWindow(true);
	}

	/*if (szhealthexam != _T("Y"))
	{
		m_wndOutPackageList.EnableWindow(false);
	}*/

	UpdateData(FALSE);

	if (m_szStatus == _T("C"))
	{
		m_wndApproval.EnableWindow(FALSE);
		m_wndCancel.EnableWindow(FALSE);
		m_wndCreateRefund.EnableWindow(FALSE);
	}

	/*if (szAdmitDept1 == _T("TTDTHM") || szAdmitDept == _T("TTHTSS"))
	{
		m_wndExamFees.EnableWindow(FALSE);
		m_wndParaclinicalFees.EnableWindow(FALSE);
		m_wndDrugFees.EnableWindow(FALSE);
	}*/

	return nOldMode;
}
void CHMSPaymentReceiptDialog::OnListDblClick()
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
void CHMSPaymentReceiptDialog::OnListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
int CHMSPaymentReceiptDialog::OnListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}

int CHMSPaymentReceiptDialog::OnListReturnItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
long CHMSPaymentReceiptDialog::OnListLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szFeeID, szID, szDepts;
	TCHAR* lpszChapter[] = { _T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI"), _T("XII"), _T("XIII"), _T("XIV"), _T("XV"), _T("XVI"), _T("XVII"), _T("XVIII"), _T("XIX"), _T("XX") };
	int nChapter = 0;
	//UpdateData(true);

	m_wndList.BeginLoad();
	int nCount = 0, nIndex, nChapterID = 0;
	double nTotalCost = 0, nGroup0Cost = 0,
		nGroup1Cost = 0,
		nGroup2Cost = 0,
		nCost = 0;
	int nItem = 0, nOldItem = 0, nItem2;
	int nLevel = 0;
	bool bDeleteParent = false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	CString szFeeType = m_szFeeType;

	UpdateData(TRUE);

	szDepts = pMF->m_szDepartments;


	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));

	if (m_bNotIncDrug)
	{
		szFeeType.Replace('D', ' ');
		szFeeType.Replace('M', ' ');
	}
	if (m_nInvoiceNo > 0) {
		szWhere.Format(_T(" AND hfe_invoiceno=%ld "), m_nInvoiceNo);
	}
	else
	{
		if (pMF->IsInPatient())
		{
			//szWhere.Format(_T(" AND hfe_status in('O','X') AND hfe_deptid in(%s) "), pMF->m_szDepartments);
			if (pMF->m_szOutpatient != _T("Y") && pMF->m_szReceiptDeptID != _T("TTDTHM"))
				//Comment phần dưới lại vì phần phí nào chưa thu thì cho lên để thu chứ ko check bỏ phí khám đi// 
				//szWhere.AppendFormat(_T(" and hfe_group <>'D0000' "));

				szWhere.AppendFormat(_T(" and hfe_class in('E','I','X','A') and hfe_status IN('O','X','A') and hfe_object=7 "));
			szFeeType.AppendFormat(_T(",'B','F'"));
			szWhere.AppendFormat(_T(" and hfe_status IN('O','A') "));
		}
		else
		{
			//szDepts = _T("'C1.1','C1.2','C1.3', 'KD', 'C10', 'TYC'");
			//szWhere.Format(_T(" AND hfe_status in('O','X') AND hfe_deptid in(%s) "), szDepts);
			szWhere.Format(_T(" AND hfe_status in('O','X', 'A')"));
			//szWhere.AppendFormat(_T(" and (hfe_class in('E','X') OR (hfe_class='I' AND hfe_deptid IN ('C1.1', 'CTXH','KD','C10')))  "));
			szWhere.AppendFormat(_T(" and (hfe_class in('E','X') OR (hfe_class='I' AND hfe_deptid IN ('C1.1', 'CTXH','KD','C10')) OR (hfe_type='R')) "));
		}
		szWhere.AppendFormat(_T(" and hfe_type in(%s) "), szFeeType);



	}

	szWhere.AppendFormat(_T(" AND (hfe_discount=0 ) "));

	//Bổ sung quyền thu phí trong gói khám sức khỏe
	if (pMF->CheckPermission(_T("FM.100.06")))
	{
		szWhere.AppendFormat(_T(" and NVL(hfe_category,'N') NOT IN('Y') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and NVL(hfe_category,'N') NOT IN('Y', 'P') "));
	}

	//szWhere.AppendFormat(_T(" and NVL(hfe_category,'N') NOT IN('Y') "));


//	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
//	grs.ExecSQL(szSQL);

	CString szTable;
	_tprintf(_T("\r\nStatus=%s"), m_szStatus);
	if (m_szStatus == _T("C"))
	{
		szTable = _T("hms_fee_cancel");
	}
	else
	{
		szTable = _T("hms_fee");

	}


	//Them dieu kien chi loc cac muc phi bao viet khong thanh toan hoac khong co the bao viet
	if (m_nInvoiceNo <= 0)
		szWhere.AppendFormat(_T(" and nvl(hfe_extins_paid, 'N') <> 'Y' "));


	szSQL.Format(_T(" SELECT hfg_type_id, hfe_status as status, ") \
		_T("		hfe_deptid as deptid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		hfe_group as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit, hfe_category         AS nguontt,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		round(sum(hfe_cost)) as cost ") \
		_T(" FROM %s ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and hfe_cost > 0 %s ") \
		_T(" GROUP BY hfg_type_id, hfg_index, hfe_group, hfe_type, hfe_status, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_deptid, hfe_category") \
		_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"),
		szTable, m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);
	_tprintf(_T("\r\n%s"), szSQL);
	//_msg(_T("Lộc test: %s "),szSQL );
	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	CString szNewType, szOldType;

	nChapterID = 0;
	m_szDepartments.Empty();
	while (!rs.IsEOF())
	{
		tmpStr.Format(_T("[%s]"), rs.GetValue(_T("deptid")));
		if (!tmpStr.IsEmpty() && m_szDepartments.Find(tmpStr) == -1) {
			if (!m_szDepartments.IsEmpty())
				m_szDepartments += _T(",");

			m_szDepartments += tmpStr;
		}

		rs.GetValue(_T("hfg_type_id"), szNewType);
		if (szNewType != szOldType)
		{
			szOldType = szNewType;
			//IN TONG I, II, III...
			if (nGroup2Cost > 0 && nOldItem > 0) {
				m_wndList.SetItemText(nOldItem, 5, nGroup2Cost > 0 ? ToString(nGroup2Cost) : _T(""));
			}

			nOldItem = 0;
			/*
						CString szLabel;
						TranslateString(_T("Sub Amount"), szLabel);
						nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
						m_wndList.SetItemText(nItem, 5, _T("SubAmount"));
						m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
						m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
						m_wndList.SetItemText(nItem, 5, nGroup1Cost > 0?ToString(nGroup1Cost):_T(""));
						m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
			*/
			if (nGroup0Cost > 0 && nChapterID > 0) {

				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID - 1]);
				nItem = m_wndList.AddItems(_T(""), szLabel + tmpStr, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 5, nGroup0Cost > 0 ? ToString((double)nGroup0Cost) : _T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT | DT_VCENTER | DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
			}

			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			szSQL.Format(_T("SELECT hft_name as name FROM hms_fee_type WHERE hft_id=%ld "), str2long(szNewType));
			grs.ExecSQL(szSQL);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndList.SetItemText(nItem, 5, _T("Type"));
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 5, DT_LEFT | DT_VCENTER | DT_SINGLELINE, true);
			nIndex = 0;
			nGroup0Cost = 0;

		}
		rs.GetValue(_T("groupid"), szNewGroup);
		szNewGroup.Trim();
		if (szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
		{
			if (szNewGroup.Left(2) == _T("B1") && szOldGroup != szNewGroup) {
				szOldGroup = szNewGroup;
				if (nGroup2Cost > 0 && nOldItem > 0) {
					m_wndList.SetItemText(nOldItem, 5, nGroup2Cost > 0 ? ToString(nGroup2Cost) : _T(""));
				}

				szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='%s' "), szNewGroup);
				CRecord rs2(&pMF->m_db);
				rs2.ExecSQL(szSQL);

				nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
				m_wndList.SetItemText(nItem2, 5, _T("SubGroup"));
				nOldItem = nItem2;
				m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
				m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
				m_wndList.MergeCell(nItem2, 1, nItem2, 4, DT_LEFT | DT_VCENTER | DT_SINGLELINE, false, true);

				nGroup2Cost = 0;
			}



			nSubItem++;

			double nCost = 0, nDiscount = 0, nPatpaid = 0;
			CString status;
			rs.GetValue(_T("status"), status);
			rs.GetValue(_T("cost"), nCost);
			rs.GetValue(_T("discount"), nDiscount);

			//	if(status == _T("O") || status == _T("P") || status == _T("X"))
			{
				nTotalCost += nCost;
				nGroup0Cost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;
			}

			CString szMark = _T("X");
			if (status == _T("C"))
				szMark = _T("");

			m_wndList.AddItems(_T(""),
				rs.GetValue(_T("name")),
				rs.GetValue(_T("unit")),
				rs.GetValue(_T("qty")),
				rs.GetValue(_T("unitprice")),
				rs.GetValue(_T("cost")),
				status,
				rs.GetValue(_T("itemid")),
				rs.GetValue(_T("idx")),
				szMark,
				rs.GetValue(_T("nguontt")),
				NULL);

		}
		bDeleteParent = false;

		rs.MoveNext();

	}
	if (nGroup1Cost > 0)
	{
		if (nGroup2Cost > 0 && nOldItem > 0) {
			m_wndList.SetItemText(nOldItem, 5, nGroup2Cost > 0 ? ToString(nGroup2Cost) : _T(""));
		}

		nOldItem = 0;
		/*
					CString szLabel;
					TranslateString(_T("Sub Amount"), szLabel);
					nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
					m_wndList.SetItemText(nItem, 5, _T("SubAmount"));
					m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
					m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
					m_wndList.SetItemText(nItem, 5, nGroup1Cost > 0?ToString(nGroup1Cost):_T(""));
					m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
		*/
	}

	/*
		while(!grs.IsEOF())
		{
			grs.GetValue(_T("level"), nLevel);
			grs.GetValue(_T("id"), szParentGroup);
			grs.GetValue(_T("feeid"), szSubItem);
			szParentGroup.Trim();
			bool bAdd = false;
			rs.MoveFirst();
			while(!rs.IsEOF()){
				rs.GetValue(_T("groupid"), tmpStr);
				if(tmpStr.Left(szParentGroup.GetLength()) == szParentGroup)
				{
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
					m_wndList.SetItemText(nItem, 5, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
					m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
					nGroup1Cost = 0;
				}

				tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
				nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
				m_wndList.SetItemText(nItem, 5, _T("Type"));
				m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
				m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 5, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
				nIndex = 0;
				nGroup0Cost=0;
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
				m_wndList.MergeCell(nItem, 1, nItem, 5);
				nGroup1Cost = 0;
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
									m_wndList.SetItemText(nOldItem, 5, nGroup2Cost>0?ToString(nGroup2Cost):_T(""));
								}
								szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
								CRecord rs2(&pMF->m_db);
								rs2.ExecSQL(szSQL);

								nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
								m_wndList.SetItemText(nItem2, 5, _T("SubGroup"));
								nOldItem = nItem2;
								m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
								m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
								m_wndList.MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

								nGroup2Cost= 0;
							}


							nSubItem++;

							double nCost=0, nDiscount=0, nPatpaid=0;
							CString status;
							rs.GetValue(_T("status"), status);
							rs.GetValue(_T("cost"), nCost);
							rs.GetValue(_T("discount"), nDiscount);

						//	if(status == _T("O") || status == _T("P") || status == _T("X"))
							{
								nTotalCost += nCost;
								nGroup0Cost += nCost;
								nGroup1Cost += nCost;
								nGroup2Cost += nCost;
							}

							CString szMark = _T("X");
							if(status == _T("C"))
								szMark = _T("");

								m_wndList.AddItems(_T(""),
									rs.GetValue(_T("name")),
									rs.GetValue(_T("unit")),
									rs.GetValue(_T("qty")),
									rs.GetValue(_T("unitprice")),
									rs.GetValue(_T("cost")),
									szMark,
									rs.GetValue(_T("itemid")),
									rs.GetValue(_T("idx")),
									NULL);

							}
							bDeleteParent = false;

						rs.MoveNext();

				}
				if(nGroup1Cost > 0)
				{

					if(nGroup2Cost > 0){
						m_wndList.SetItemText(nOldItem, 5, nGroup2Cost > 0?ToString(nGroup2Cost):_T(""));
					}
					nOldItem = 0;
					CString szLabel;
					TranslateString(_T("Sub Amount"), szLabel);
					nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
					m_wndList.SetItemText(nItem, 5, _T("SubAmount"));
					m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
					m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
					m_wndList.SetItemText(nItem, 5, nGroup1Cost > 0?ToString(nGroup1Cost):_T(""));
					m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				}

			}

			grs.MoveNext();

		}


	*/
	if (nGroup0Cost > 0 && nChapterID > 0) {
		CString szLabel;
		TranslateString(_T("Sum"), szLabel);
		tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID - 1]);
		nItem = m_wndList.AddItems(_T(""), szLabel + tmpStr, NULL);
		m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		m_wndList.SetItemText(nItem, 5, nGroup0Cost > 0 ? ToString((double)nGroup0Cost) : _T(""));
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT | DT_VCENTER | DT_SINGLELINE, false, false);
		nGroup1Cost = 0;
	}


	if (nTotalCost > 0) {
		CString szLabel;
		m_wndList.AddItems(_T(""), NULL);

		TranslateString(_T("Total Amount"), szLabel);
		tmpStr.Format(_T("%s ("), szLabel);
		for (int i = 0; i < nChapterID; i++)
		{
			if (i > 0)
				tmpStr += _T("+");
			tmpStr.AppendFormat(_T("%s"), lpszChapter[i]);
		}
		tmpStr += _T(")");

		nItem = m_wndList.AddItems(_T(""),
			tmpStr,
			_T(""),
			_T(""),
			_T(""),
			nTotalCost > 0 ? ToString(nTotalCost) : _T(""),
			NULL);
		m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT | DT_VCENTER | DT_SINGLELINE, true);
		//m_wndList.SetItemText(nItem, , _T("TotalAmount"));
	}

	if (m_nInvoiceNo > 0)
	{
		szSQL.Format(_T("SELECT hfe_itemid, NVL(HFE_XNCOVID, 'N') as xncovid FROM hms_fee_refundline WHERE hfe_docno=%ld and hfe_refidx=%ld"),
			m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);

		CString szItemID, szRItemID, szRefundtype, szxncovid;
		while (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_itemid"), szRItemID);
			rs.GetValue(_T("xncovid"), szxncovid);
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID = m_wndList.GetItemText(i, 7);
				CString szStatus = m_wndList.GetItemText(i, 6);


				if (szItemID == szRItemID && szStatus == _T("R"))
				{
					if (szxncovid == _T("Y"))
					{
						szRefundtype = _T("TL-COV");
					}
					else
						szRefundtype = _T("TL");

					m_wndList.SetSubItemBkColor(i, 5, RGB(255, 0, 0), FALSE);
					m_wndList.SetItemText(i, 6, szRefundtype);
				}

			}
			rs.MoveNext();
		}

		szSQL.Format(_T("SELECT hfe_itemid FROM hms_fee_discountline WHERE hfe_docno=%ld and hfe_refidx=%ld"),
			m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);


		while (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_itemid"), szRItemID);
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID = m_wndList.GetItemText(i, 7);
				if (szItemID == szRItemID)
				{
					m_wndList.SetSubItemBkColor(i, 5, RGB(255, 128, 64), FALSE);
					m_wndList.SetItemText(i, 6, _T("MG"));
				}

			}
			rs.MoveNext();
		}


	}
	else
	{
		szSQL.Format(_T("SELECT hfe_itemid FROM hms_fee_discountline WHERE hfe_docno=%ld and hfe_status='O' "),
			m_nDocumentNo);
		rs.ExecSQL(szSQL);

		CString szItemID, szRItemID;

		while (!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_itemid"), szRItemID);
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID = m_wndList.GetItemText(i, 7);
				if (szItemID == szRItemID)
				{
					m_wndList.SetSubItemBkColor(i, 5, RGB(255, 128, 64), FALSE);
					m_wndList.SetItemText(i, 6, _T("MG"));
				}

			}
			rs.MoveNext();
		}

	}


	m_wndList.EndLoad();

	if (m_wndList.GetItemCount() <= 0)
		m_wndPayment.EnableWindow(false);
	else
		m_wndPayment.EnableWindow(true);

	m_nTotalAmount = m_nTotalPayable = nTotalCost;


	if (m_nTtlCost > 0 && ceil(m_nTtlCost) != ceil(m_nTotalAmount))
	{
		CString szMsg;
		szMsg.Format(_T("S\x1ED1 ti\x1EC1n th\x61nh to\xE1n tr\xEAn \x62\x1EA3ng k\xEA in r\x61 \x63h\x1B0\x61 \x111\xFAng vui l\xF2ng ki\x1EC3m tr\x61 l\x1EA1i"));
		ShowMessageBox(szMsg);

	}
	UpdateData(FALSE);
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnReceiptDateChange(){

} */
/*void CHMSPaymentReceiptDialog::OnReceiptDateSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnReceiptDateKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnReceiptDateCheckValue() {
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnStaffChange(){

} */
/*void CHMSPaymentReceiptDialog::OnStaffSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnStaffKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnStaffCheckValue() {
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnSerialNoChange(){

} */
/*void CHMSPaymentReceiptDialog::OnSerialNoSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnSerialNoKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnSerialNoCheckValue() {
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnReceiptNoChange(){

} */
/*void CHMSPaymentReceiptDialog::OnReceiptNoSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnReceiptNoKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnReceiptNoCheckValue() {
	return 0;
}

void CHMSPaymentReceiptDialog::OnReasonSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSPaymentReceiptDialog::OnReasonSelendok() {

}
/*void CHMSPaymentReceiptDialog::OnReasonSetfocus(){

}*/
/*void CHMSPaymentReceiptDialog::OnReasonKillfocus(){

}*/
long CHMSPaymentReceiptDialog::OnReasonLoadData()
{
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
/*void CHMSPaymentReceiptDialog::OnReasonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */


void CHMSPaymentReceiptDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnPaymentMethodSelendok()
{
	 //Nếu chọn hình thức thanh toán = Công Nợ -> hiện lên thông tin khách hàng
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if (m_szPaymentMethodKey == _T("CN") && pMF->CheckPermission(_T("FM.100.007")))
	{
		CHMSInputCompanyToInvoice dlg(this);

		if(dlg.DoModal() == IDOK)
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

	 
}
/*void CHMSPaymentReceiptDialog::OnPaymentMethodSetfocus(){

}*/
/*void CHMSPaymentReceiptDialog::OnPaymentMethodKillfocus(){

}*/
long CHMSPaymentReceiptDialog::OnPaymentMethodLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()) {
		szWhere.Format(_T(" and adpm_payment_method_id='%s' "), m_szPaymentMethodKey);
	};
	if(pMF->CheckPermission(_T("40.09")))
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
/*void CHMSPaymentReceiptDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

/*void CHMSPaymentReceiptDialog::OnTotalAmountChange(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalAmountSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalAmountKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnTotalAmountCheckValue() {
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnTotalDepositChange(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalDepositSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalDepositKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnTotalDepositCheckValue() {
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnTotalDiscountChange(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalDiscountSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalDiscountKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnTotalDiscountCheckValue() {
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnTotalPayableChange(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalPayableSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnTotalPayableKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnTotalPayableCheckValue() {
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnPaymentChange(){

} */
/*void CHMSPaymentReceiptDialog::OnPaymentSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnPaymentKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnPaymentCheckValue() {
	m_nRefund = m_nPayment - m_nTotalPayable;
	UpdateData(FALSE);
	return 0;
}
/*void CHMSPaymentReceiptDialog::OnRefundChange(){

} */
/*void CHMSPaymentReceiptDialog::OnRefundSetfocus(){

} */
/*void CHMSPaymentReceiptDialog::OnRefundKillfocus(){

} */
int CHMSPaymentReceiptDialog::OnRefundCheckValue() {
	return 0;
}
void CHMSPaymentReceiptDialog::OnExamFeesSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("HOSPITALFEE_PAYMENTRECEIPT"), pMF->GetCurrentUser(), _T("E"));
	m_szFeeType = _T("'E'");
	OnListLoadData();
	GetDataToScreen();
}
void CHMSPaymentReceiptDialog::OnParaclinicalFeesSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("HOSPITALFEE_PAYMENTRECEIPT"), pMF->GetCurrentUser(), _T("P"));
	m_szFeeType = _T("'O','P','T','X'");
	OnListLoadData();
	GetDataToScreen();
}
void CHMSPaymentReceiptDialog::OnDrugFeesSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("HOSPITALFEE_PAYMENTRECEIPT"), pMF->GetCurrentUser(), _T("D"));
	m_szFeeType = _T("'D','M', 'R'");
	OnListLoadData();
	GetDataToScreen();
}

void CHMSPaymentReceiptDialog::OnOperationFeesSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("HOSPITALFEE_PAYMENTRECEIPT"), pMF->GetCurrentUser(), _T("O"));
	m_szFeeType = _T("'O'");
	OnListLoadData();
	GetDataToScreen();
}


void CHMSPaymentReceiptDialog::OnAllFeesSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	AfxGetApp()->WriteProfileString(_T("HOSPITALFEE_PAYMENTRECEIPT"), pMF->GetCurrentUser(), _T("A"));
	m_szFeeType = _T("'E','O','I','T','P', 'D','M','X','F','R'");
	m_nFeeType = 4;
	UpdateData(FALSE);
	OnListLoadData();
	GetDataToScreen();
}

void CHMSPaymentReceiptDialog::OnApprovalSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	long vret = 0;

	if ((GetMode() != VM_ADD && m_szOrgID != _T("EM") && m_szOrgID != _T("FM") && m_szStatus != _T("A")))
		return;
	if (!IsValidateData())
		return;
	if (m_wndList.GetItemCount() <= 0)
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
	  classType   VARCHAR2,
	  feeType     VARCHAR2,
	  depositPay  VARCHAR2 )
*/
	CString szClassType, szFeeTypes;
	if (pMF->IsInPatient())
		szClassType = _T("I");
	else
		szClassType = _T("E");


	szFeeTypes = m_szFeeType;
	szFeeTypes.Replace(_T(","), _T(""));
	szFeeTypes.Replace(_T("'"), _T(""));


	if (m_bNotIncDrug)
	{
		szFeeTypes.Replace('D', ' ');
		szFeeTypes.Replace('M', ' ');
	}


	//Kiem tra neu tong so tien phai tra < tong tien tam ung+tong tien mien giam thi tao phieu hoan tra lai
	//Neu doi tuong la dich vu va ho so da ket thuc thi kiem tra tao phieu hoan tra lai.
	if (pMF->GetObjectType() == _T("S") && pMF->m_szStatus == _T("T"))
	{
		/*
				if(m_nTotalPayable < 0)
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
				}
		*/
	}

	CString szDepts, szPaymentDeptId;
	szDepts = pMF->m_szDepartments;
	szDepts.Replace(_T("'"), _T(""));
	szDepts.Replace(_T(","), _T("|"));


	long nDrugInvoice = 0;
	long nApproveInvoice = 0;
	CString szSQL2;


	szPaymentDeptId = pMF->m_szReceiptDeptID;
	if (pMF->m_bIsRequest && !pMF->m_szRequestDept.IsEmpty())
		szPaymentDeptId = pMF->m_szRequestDept;


	//Kiểm tra những hóa đơn trạng thái A thì gọi hàm update lại, không thì nhảy tiếp		

	szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE hfe_docno = %ld and hfe_status='A' and hfe_class='E' and hfe_type='S' and hfe_org_id IN ('EM', 'FM') "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	nApproveInvoice = rs.GetIntValue();

	if (szPaymentDeptId == _T("TYC") && m_nTotalDeposit > 0 && m_nTotalPayable == 0)
	{

		int retMsg = ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n th\x61nh to\xE1n \x63\xE1\x63 m\x1EE5\x63 ph\xED \x62\x1EB1ng tr\xED\x63h t\x1EA1m g\x1EEDi. Kh\xF4ng thu th\xEAm ti\x1EC1n \x62\x1EC7nh nh\xE2n. \x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 \x63h\x1EAFn mu\x1ED1n \x64uy\x1EC7t phi\x1EBFu kh\xF4ng?"), MB_YESNO | MB_ICONWARNING);
		if (retMsg == IDNO)
			return;


	}
	if (pMF->IsInPatient())
	{
		szFeeTypes.AppendFormat(_T("BF"));
		szSQL.Format(_T("HMS_FEE_INVOICE_ICREATERECEIPT(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s', '%s', '%s', 'N')"),
			m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, pMF->m_szReceiptDeptID, szDepts,
			pMF->GetCurrentUser(), m_szReasonKey, szClassType, szFeeTypes);
		//_msg(_T("Vào đây không?"));
	}
	else
	{
		if (pMF->IsInfertility())
		{
			szSQL.Format(_T("HMS_FEE_INVOICE_CREATERECEIPT2(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s', '%s', '%s', 'N')"),
				m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, szPaymentDeptId, szDepts,
				pMF->GetCurrentUser(), m_szReasonKey, szClassType, szFeeTypes);
		}
		else
		{
			if (pMF->GetObjectType() == _T("S") && (m_szOrgID == _T("EM") || m_szOrgID == _T("FM")) && m_nInvoiceNo > 0 && m_szStatus == _T("A"))
			{
				szSQL.Format(_T("HMS_FEE_INVOICE_CREATE_MB(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s', '%s', '%s', 'N', %ld)"),
					m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, szPaymentDeptId, szDepts,
					pMF->GetCurrentUser(), m_szReasonKey, szClassType, szFeeTypes, m_nInvoiceNo);
				//_msg(_T("%s"), szSQL);
			}

			/*else if (pMF->GetObjectType() == _T("S") && nApproveInvoice > 0 && m_nInvoiceNo == 0)
			{
				szSQL.Format(_T("HMS_FEE_INVOICE_CREATE_MB_ALL(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s', '%s', '%s', 'N', %ld)"),
				m_nDocumentNo, m_szSerialNo, m_nReceiptNo,m_szReceiptDate, szPaymentDeptId, szDepts,
				pMF->GetCurrentUser(), m_szReasonKey, szClassType, szFeeTypes, m_nInvoiceNo);
				long vret = str2long(pMF->ExecDML(szSQL));
				if (vret > 0)
					return;

			}*/

			else
			{
				szSQL.Format(_T("HMS_FEE_INVOICE_CREATERECEIPT(%ld, '%s', %ld, '%s', '%s', '%s', '%s', '%s', '%s', '%s', 'N', %d, %d)"),
					m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, szPaymentDeptId, szDepts,
					pMF->GetCurrentUser(), m_szReasonKey, szClassType, szFeeTypes, m_bApproveAllInvoiceno, m_bOutPackageList);
			}
		}


	}

	long nInvoiceNo = str2long(pMF->ExecDML(szSQL));

	if (nInvoiceNo > 0)
	{
		m_nInvoiceNo = nInvoiceNo;
		//Đoạn này cập nhật lại mã số thuế vào hóa đơn thu
		if (m_szPaymentMethodKey == _T("CN") && !m_szMaSoThue.IsEmpty())

		{
			szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_company2_id='%s' WHERE hfe_docno=%ld and hfe_invoiceno=%ld"), m_szMaSoThue, m_nDocumentNo, m_nInvoiceNo);
			pMF->ExecSQL(szSQL);
		}

		if(pMF->IsSmartCard())
		{
			m_szPaymentMethodKey = _T("THE");
		}
		szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_payment_method='%s' WHERE hfe_docno=%ld and hfe_invoiceno=%ld"), m_szPaymentMethodKey, m_nDocumentNo, m_nInvoiceNo);
		pMF->ExecSQL(szSQL);
		/*
			Khi thanh toan cho benh nhan goi ham Post thong tin hoa don len SERVER hoa don dien tu
		*/

		/*if(pMF->m_szElectronicInvoicesConnection == _T("Y"))
		{
			pMF->PostToInvoice(m_nDocumentNo, nInvoiceNo);
		}*/

		if (pMF->m_szReceiptDeptID != _T("TYC"))
		{

			if (m_nTotalPayable < 0)
			{
				szSQL.Format(_T("SELECT coalesce(hfe_invoiceno, 0) as invoiceno FROM hms_fee_refund WHERe hfe_docno=%ld and hfe_refidx=%ld"),
					m_nInvoiceNo);
				CRecord rsx(&pMF->m_db);
				rsx.ExecSQL(szSQL);
				long nRefNo;
				rsx.GetValue(_T("invoiceno"), nRefNo);
				if (nRefNo <= 0) nRefNo = m_nInvoiceNo + 1;
				pMF->PrintRefund(nRefNo);
			}
			else if (m_nTotalPayable > 0)
			{

				if (m_szPaymentMethodKey == _T("ATM") || m_szPaymentMethodKey == _T("CK") || m_szPaymentMethodKey == _T("TTD"))
				{

					pMF->PrintInvoice(m_nInvoiceNo, false, false, 1);
				}
				else
					pMF->PrintInvoice(m_nInvoiceNo, false, false, 1);
			}
		}
		else
		{
			if (m_szPaymentMethodKey == _T("ATM") || m_szPaymentMethodKey == _T("CK") || m_szPaymentMethodKey == _T("TTD"))
			{
				pMF->PrintInvoice(m_nInvoiceNo, false, false, 1);
			}
			else
				pMF->PrintInvoice(m_nInvoiceNo, false, false, 1);

			//pMF->PrintInvoice(m_nInvoiceNo, false, false, 2);
			if (m_nTotalPayable < 0) {
				szSQL.Format(_T("SELECT coalesce(hfe_invoiceno, 0) as invoiceno FROM hms_fee_refund WHERe hfe_docno=%ld and hfe_refidx=%ld"),
					m_nInvoiceNo);
				CRecord rsx(&pMF->m_db);
				rsx.ExecSQL(szSQL);
				long nRefNo;
				rsx.GetValue(_T("invoiceno"), nRefNo);
				if (nRefNo <= 0) nRefNo = m_nInvoiceNo + 1;

				pMF->PrintRefund(nRefNo);
			}
		}
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
		tbl.SetValue(_T("docno"), pMF->m_nDocumentNo);
		tbl.SetValue(_T("invoiceno"), nInvoiceNo);
		tbl.SetValue(_T("pos_no"), m_bankPaymentInfo.szPosNo);
		tbl.SetValue(_T("payment_method"), m_szPaymentMethodKey);
		tbl.SetValue(_T("receipt_no"), m_bankPaymentInfo.szReceiptNo);
		tbl.SetValue(_T("receipt_date"), m_bankPaymentInfo.szReceiptDate);
		tbl.SetValue(_T("account_no"), m_bankPaymentInfo.szAccountNo);
		tbl.SetValue(_T("account_name"), m_bankPaymentInfo.szAccountName);
		tbl.SetValue(_T("account_address"), m_bankPaymentInfo.szAddress);
		tbl.SetValue(_T("card_no"), m_bankPaymentInfo.szCardNo);
		tbl.SetValue(_T("bank_id"), m_bankPaymentInfo.szBankId);
		tbl.SetValue(_T("bank_name"), m_bankPaymentInfo.szBankName);
		tbl.SetValue(_T("bank_brand"), m_bankPaymentInfo.szBrand);
		tbl.SetValue(_T("amount"), m_nTotalPayable);
		tbl.SetValue(_T("note"), m_bankPaymentInfo.szNote);

		szSQL.Format(_T("HMS_FEE_INVOICE_BANK_CREATE(%s)"), tbl.FormatSQL());

		int res = str2int(pMF->ExecDML(szSQL));
		if (res <= 0)
		{
			ShowMessageBox(_T("Không lưu được thông tin thẻ tín dụng. Vui lòng kiểm tra lại"));
		}
		CGuiDialog::OnOK();
	}
	else
		ShowMessageBox(_T("Can not create fee receipt"));
}

#include "HMSCancelReasonDialog.h"
void CHMSPaymentReceiptDialog::OnCancelSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (m_nInvoiceNo <= 0)
		return;
	CString szSQL;
	CHMSCancelReasonDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
		szSQL.Format(_T("HMS_FEE_INVOICE_CANCEL(%ld, %ld, '%s') "),
			m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());
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

#include <atlenc.h>
int CHMSPaymentReceiptDialog::OnPrintElectronicInvoice() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nDocumentNo, nElectronicInvoiceNo;
	pMF->BeginWaitCursor();

	//szSQL.Format(_T("SELECT hfe_docno,hfe_invoiceno ") \
	//	_T(" FROM HMS_FEE_INVOICE") \
	//	_T(" WHERE HFE_DATE ") \
	//	_T(" BETWEEN to_timestamp('2016-01-01 23:59:59', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('2016-05-01 23:59:59', 'yyyy/mm/dd hh24:mi:ss')") \
	//	_T(" AND HFE_PAYMENT > 0")
	//	_T(" AND ROWNUM < 2000 ") \
	//	_T(" AND hfe_status = 'P'"));

	//
	//rs.ExecSQL(szSQL); 	
	//while(!rs.IsEOF())
	//{
	//	rs.GetValue(_T("hfe_docno"), nDocumentNo);	
	//	rs.GetValue(_T("hfe_invoiceno"), nElectronicInvoiceNo);	
	//	_tprintf(_T("\r\n%ld"), nElectronicInvoiceNo);

	//	pMF->PostToInvoice( nDocumentNo, nElectronicInvoiceNo);
	//	
	//	rs.MoveNext();
	//}

	//return -1;


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

void CHMSPaymentReceiptDialog::OnPrintReceiptSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (pMF->IsInPatient())
		pMF->PrintServiceDischargeReceiptFromInvoice(m_nInvoiceNo);
	else
		pMF->PrintInvoice(m_nInvoiceNo, true);
}
void CHMSPaymentReceiptDialog::OnCloseSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
void CHMSPaymentReceiptDialog::OnCreateRefundSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (m_nInvoiceNo <= 0 || m_szStatus == _T("C"))
		return;

	CRecord rs(&pMF->m_db);
	CString szStatus;
	CString szSQL, szDeptId;

	szSQL.Format(_T("SELECT hfe_status, hfe_deptid FROM hms_fee_invoice ") \
		_T("WHERE hfe_docno=%ld and hfe_invoiceno = %ld "),
		m_nDocumentNo, m_nInvoiceNo);

	rs.ExecSQL(szSQL);

	szDeptId = pMF->m_szReceiptDeptID;

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_status"), szStatus);
		rs.GetValue(_T("hfe_deptid"), szDeptId);
	}
	if (szStatus != _T("P"))
		return;


	CHMSFeeRefundInvoiceDialog dlg(this);
	dlg.m_szDeptId = szDeptId;

	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		if (pMF->m_szElectronicInvoicesConnection == _T("Y"))
		{
			pMF->PostToRefundInvoice(m_nDocumentNo, m_nInvoiceNo);
		}

	}
}

void CHMSPaymentReceiptDialog::OnCreateRefundSelectEX()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (m_nInvoiceNo <= 0 || m_szStatus == _T("C"))
		return;

	CRecord rs(&pMF->m_db);
	CString szStatus;
	CString szSQL, szDeptId;

	szSQL.Format(_T("SELECT hfe_status, hfe_deptid FROM hms_fee_invoice ") \
		_T("WHERE hfe_docno=%ld and hfe_invoiceno = %ld "),
		m_nDocumentNo, m_nInvoiceNo);

	rs.ExecSQL(szSQL);

	szDeptId = pMF->m_szReceiptDeptID;

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_status"), szStatus);
		rs.GetValue(_T("hfe_deptid"), szDeptId);
	}
	if (szStatus != _T("P"))
		return;


	CHMSFeeRefundInvoiceDialogEX dlg(this);
	dlg.m_szDeptId = szDeptId;

	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		if (pMF->m_szElectronicInvoicesConnection == _T("Y"))
		{
			pMF->PostToRefundInvoice(m_nDocumentNo, m_nInvoiceNo);
		}

	}
}


void CHMSPaymentReceiptDialog::OnCreateRefundServicePkgSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (m_nInvoiceNo <= 0 || m_szStatus == _T("C"))
		return;

	CRecord rs(&pMF->m_db);
	CString szStatus;
	CString szSQL, szDeptId;

	szSQL.Format(_T("SELECT hfe_status, hfe_deptid FROM hms_fee_invoice ") \
		_T("WHERE hfe_docno=%ld and hfe_invoiceno = %ld "),
		m_nDocumentNo, m_nInvoiceNo);

	rs.ExecSQL(szSQL);

	szDeptId = pMF->m_szReceiptDeptID;

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_status"), szStatus);
		rs.GetValue(_T("hfe_deptid"), szDeptId);
	}
	if (szStatus != _T("P"))
		return;


	CHMSFeeRefundInvoiceServicePkgDialog dlg(this);
	dlg.m_szDeptId = szDeptId;

	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		if (pMF->m_szElectronicInvoicesConnection == _T("Y"))
		{
			pMF->PostToRefundInvoice(m_nDocumentNo, m_nInvoiceNo);
		}

	}
}


int CHMSPaymentReceiptDialog::OnAddHMSPaymentReceiptDialog() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSPaymentReceiptDialog::OnEditHMSPaymentReceiptDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CHMSPaymentReceiptDialog::OnDeleteHMSPaymentReceiptDialog() {
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
		OnCancelHMSPaymentReceiptDialog();
	}
	return 0;
}
int CHMSPaymentReceiptDialog::OnSaveHMSPaymentReceiptDialog() {
	if (GetMode() != VM_ADD)
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
		//OnHMSPaymentReceiptDialogListLoadData(); 
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSPaymentReceiptDialog::OnCancelHMSPaymentReceiptDialog() {
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
int CHMSPaymentReceiptDialog::OnHMSPaymentReceiptDialogListLoadData() {
	return 0;
}

BOOL CHMSPaymentReceiptDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F2) {
		if (m_wndApproval.IsWindowEnabled())
			OnApprovalSelect();
		return TRUE;
	}


	return CGuiDialog::PreTranslateMessage(pMsg);
}

#include "HMSFeeDiscountInvoiceDialog.h"

void CHMSPaymentReceiptDialog::OnCreateDiscountVoucher()
{
	//	if(m_nInvoiceNo <= 0)
	//		return;

	if (m_szStatus == _T("C"))
	{
		return;
	}
	if (m_szStatus == _T("P") && m_nInvoiceNo > 0)
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 th\x61nh to\xE1n. Kh\xF4ng \x63ho ph\xE9p t\x1EA1o phi\x1EBFu mi\x1EC5n gi\x1EA3m"));
		return;
	}

	CHMSFeeDiscountInvoiceDialog dlg(this);
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	dlg.m_bService = true;
	if (dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		GetDataToScreen();
	}

}

void CHMSPaymentReceiptDialog::OnCreateRefundVoucher()
{
	OnCreateRefundSelect();
}

void CHMSPaymentReceiptDialog::OnCreateRefundVoucherEX()
{
	OnCreateRefundSelectEX();
}

void CHMSPaymentReceiptDialog::OnCreateRefundServicePkgVoucher()
{
	OnCreateRefundServicePkgSelect();
}

void	CHMSPaymentReceiptDialog::OnNotIncDrugSelect()
{
	UpdateData(TRUE);
	OnListLoadData();
}

void CHMSPaymentReceiptDialog::OnPaymentMethodLabelSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
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
		m_bankPaymentInfo.nAmount = m_nTotalPayable;
		m_bankPaymentInfo.szReceiptDate = m_szReceiptDate;
	}
	dlg.m_szPaymentMethod = m_szPaymentMethodKey;

	m_bankPaymentInfo.nAmount = m_nTotalPayable;
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
		//CString szAccNo;
		//if(!dlg.m_szAccountNo.IsEmpty())
		//	szAccNo = dlg.m_szAccountNo;
		//else
		//	szAccNo = dlg.m_szCardNo;

		//m_szDescription.Format(_T("Số thẻ/TK [%s]; Tên TK: %s"),
		//	szAccNo, dlg.m_szAccountName);
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
		m_bankPaymentInfo.szNote = dlg.m_szNote;
		UpdateData(FALSE);
	}
}
#include "HMSChuyennguonngansachTTbenhnhancovid19.h"
void CHMSPaymentReceiptDialog::OnChuyennguonngansachTTbenhnhancovid19Select()
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

void CHMSPaymentReceiptDialog::OnApproveAllInvoicenoSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}

void CHMSPaymentReceiptDialog::OnOutPackageListSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CHMSPaymentReceiptDialog::OnUnUploadtoInsGate()
{

	CHMSUnUpload2InsGate dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = m_nInvoiceNo;
	if(dlg.DoModal() == IDOK)
	{
		GetDataToScreen();
		OnListLoadData();	
	}
	else
	{
	
	}
}