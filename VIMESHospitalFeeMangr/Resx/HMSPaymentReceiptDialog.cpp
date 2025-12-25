#include "HMSPaymentReceiptDialog.h"
#include "MainFrm.h"
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
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnStaffCheckValue();
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
static void _OnReasonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPaymentReceiptDialog* )pWnd)->OnReasonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReasonSelendokFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonSelendok();
}
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonKillfocus();
}*/
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonKillfocus();
}*/
static long _OnReasonLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnReasonLoadData();
}
/*static void _OnReasonAddNewFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnReasonAddNew();
}*/
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPaymentReceiptDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalDepositChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDepositChange();
} */
/*static void _OnTotalDepositSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDepositSetfocus();} */ 
/*static void _OnTotalDepositKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDepositKillfocus();
} */
static int _OnTotalDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDepositCheckValue();
} 
/*static void _OnTotalDiscountChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDiscountChange();
} */
/*static void _OnTotalDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDiscountSetfocus();} */ 
/*static void _OnTotalDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDiscountKillfocus();
} */
static int _OnTotalDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnTotalDiscountCheckValue();
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
/*static void _OnPaymentChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentChange();
} */
/*static void _OnPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentSetfocus();} */ 
/*static void _OnPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentKillfocus();
} */
static int _OnPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnPaymentCheckValue();
} 
/*static void _OnRefundChangeFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRefundChange();
} */
/*static void _OnRefundSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRefundSetfocus();} */ 
/*static void _OnRefundKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentReceiptDialog *)pWnd)->OnRefundKillfocus();
} */
static int _OnRefundCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentReceiptDialog *)pWnd)->OnRefundCheckValue();
} 
static void _OnCreateRefundSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnCreateRefundSelect();
} 
static void _OnExamFeesSelectFnc(CWnd *pWnd){
	  ((CHMSPaymentReceiptDialog*)pWnd)->OnExamFeesSelect();
}
static void _OnParaclinicalFeesSelectFnc(CWnd *pWnd){
	  ((CHMSPaymentReceiptDialog*)pWnd)->OnParaclinicalFeesSelect();
}
static void _OnDrugFeesSelectFnc(CWnd *pWnd){
	  ((CHMSPaymentReceiptDialog*)pWnd)->OnDrugFeesSelect();
}
static void _OnAllFeesSelectFnc(CWnd *pWnd){
	  ((CHMSPaymentReceiptDialog*)pWnd)->OnAllFeesSelect();
}
static void _OnNotIncDrugSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentReceiptDialog*)pWnd)->OnNotIncDrugSelect();
}
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	CHMSPaymentReceiptDialog *pVw = (CHMSPaymentReceiptDialog *)pWnd;
	pVw->OnPrintReceiptSelect();
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

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPaymentReceiptDialog::~CHMSPaymentReceiptDialog(){
}
void CHMSPaymentReceiptDialog::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 570);
	m_wndList.Create(this,10, 30, 995, 475); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 480, 110, 505);
	m_wndReceiptDate.Create(this,115, 480, 255, 505); 
	m_wndStaffLabel.Create(this, _T("Staff"), 260, 480, 360, 505);
	m_wndStaff.Create(this,365, 480, 475, 505); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 510, 110, 535);
	m_wndSerialNo.Create(this,115, 510, 255, 535); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 260, 510, 360, 535);
	m_wndReceiptNo.Create(this,365, 510, 475, 535); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 540, 110, 565);
	m_wndReason.Create(this,115, 540, 255, 565); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 260, 540, 360, 565);
	m_wndPaymentMethod.Create(this,365, 540, 475, 565); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 480, 480, 610, 505);
	m_wndTotalAmount.Create(this,615, 480, 735, 505); 
	m_wndTotalDepositLabel.Create(this, _T("Total Deposit"), 480, 510, 610, 535);
	m_wndTotalDeposit.Create(this,615, 510, 735, 535); 
	m_wndTotalDiscountLabel.Create(this, _T("Total Discount"), 480, 540, 610, 565);
	m_wndTotalDiscount.Create(this,615, 540, 735, 565); 
	m_wndTotalPayableLabel.Create(this, _T("Patient Payable"), 740, 480, 870, 505);
	m_wndTotalPayable.Create(this,875, 480, 995, 505); 
	m_wndPaymentLabel.Create(this, _T("Payment"), 740, 510, 870, 535);
	m_wndPayment.Create(this,875, 510, 995, 535); 
	m_wndRefundLabel.Create(this, _T("Refund"), 740, 540, 870, 565);
	m_wndRefund.Create(this,875, 540, 995, 565); 
	m_wndCreateRefund.Create(this, _T("&Refund"), 10, 575, 100, 600);
	m_wndExamFees.Create(this, _T("Exam Fees"), 105, 575, 185, 600);
	m_wndParaclinicalFees.Create(this, _T("Paraclinical Fees"), 190, 575, 290, 600);
	m_wndDrugFees.Create(this, _T("Drug Fees"), 295, 575, 375, 600);
	m_wndAllFees.Create(this, _T("All Fees"), 380, 575, 460, 600);
	m_wndNotIncDrug.Create(this, _T("Kh\xF4ng \x62\x61o g\x1ED3m thu\x1ED1\x63"), 465, 575, 610, 600);
	m_wndApproval.Create(this, _T("&Approval"), 615, 575, 710, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 575, 810, 600);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 815, 575, 900, 600);
	m_wndClose.Create(this, _T("&Close"), 905, 575, 1000, 600);

}
void CHMSPaymentReceiptDialog::OnInitializeComponents(){
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
	m_wndTotalAmount.SetLimitText(1024);
	m_wndTotalAmount.SetCheckValue(true);
	m_wndTotalDeposit.SetLimitText(1024);
	m_wndTotalDeposit.SetCheckValue(true);
	m_wndTotalDiscount.SetLimitText(1024);
	m_wndTotalDiscount.SetCheckValue(true);
	m_wndTotalPayable.SetLimitText(1024);
	m_wndTotalPayable.SetCheckValue(true);
	m_wndPayment.SetLimitText(1024);
	m_wndPayment.SetCheckValue(true);
	m_wndRefund.SetLimitText(1024);
	m_wndRefund.SetCheckValue(true);







}
void CHMSPaymentReceiptDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndCreateRefund.SetEvent(WE_CLICK, _OnCreateRefundSelectFnc);
	m_wndExamFees.SetEvent(WE_CLICK, _OnExamFeesSelectFnc);
	m_wndParaclinicalFees.SetEvent(WE_CLICK, _OnParaclinicalFeesSelectFnc);
	m_wndDrugFees.SetEvent(WE_CLICK, _OnDrugFeesSelectFnc);
	m_wndAllFees.SetEvent(WE_CLICK, _OnAllFeesSelectFnc);
	m_wndNotIncDrug.SetEvent(WE_CLICK, _OnNotIncDrugSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPaymentReceiptDialog::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Radio(pDX, m_wndExamFees.GetDlgCtrlID(), m_nExamFees);
	DDX_Radio(pDX, m_wndParaclinicalFees.GetDlgCtrlID(), m_nParaclinicalFees);
	DDX_Radio(pDX, m_wndDrugFees.GetDlgCtrlID(), m_nDrugFees);
	DDX_Radio(pDX, m_wndAllFees.GetDlgCtrlID(), m_nAllFees);
	DDX_Check(pDX, m_wndNotIncDrug.GetDlgCtrlID(), m_bNotIncDrug);

}
void CHMSPaymentReceiptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPaymentReceiptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentReceiptDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();
	m_szStaff.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReasonKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_nTotalAmount=0;
	m_nTotalDeposit=0;
	m_nTotalDiscount=0;
	m_nTotalPayable=0;
	m_nPayment=0;
	m_nRefund=0;
	m_nExamFees=0;
	m_nParaclinicalFees=0;
	m_nDrugFees=0;
	m_nAllFees=0;
	m_bNotIncDrug=FALSE;

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
void CHMSPaymentReceiptDialog::OnListDblClick(){
	
} 
void CHMSPaymentReceiptDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentReceiptDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPaymentReceiptDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
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
/*void CHMSPaymentReceiptDialog::OnStaffChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnStaffSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnStaffKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnStaffCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnSerialNoChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnSerialNoKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnSerialNoCheckValue(){
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
void CHMSPaymentReceiptDialog::OnReasonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnReasonSelendok(){
	 
}
/*void CHMSPaymentReceiptDialog::OnReasonSetfocus(){
	
}*/
/*void CHMSPaymentReceiptDialog::OnReasonKillfocus(){
	
}*/
long CHMSPaymentReceiptDialog::OnReasonLoadData(){
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
/*void CHMSPaymentReceiptDialog::OnReasonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPaymentReceiptDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnPaymentMethodSelendok(){
	 
}
/*void CHMSPaymentReceiptDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CHMSPaymentReceiptDialog::OnPaymentMethodKillfocus(){
	
}*/
long CHMSPaymentReceiptDialog::OnPaymentMethodLoadData(){
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
/*void CHMSPaymentReceiptDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalAmountChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalAmountSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalAmountKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnTotalDepositChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalDepositSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalDepositKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnTotalDepositCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnTotalDiscountChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalDiscountSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnTotalDiscountKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnTotalDiscountCheckValue(){
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
/*void CHMSPaymentReceiptDialog::OnPaymentChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnPaymentSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnPaymentKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnPaymentCheckValue(){
	return 0;
} 
/*void CHMSPaymentReceiptDialog::OnRefundChange(){
	
} */
/*void CHMSPaymentReceiptDialog::OnRefundSetfocus(){
	
} */
/*void CHMSPaymentReceiptDialog::OnRefundKillfocus(){
	
} */
int CHMSPaymentReceiptDialog::OnRefundCheckValue(){
	return 0;
} 
void CHMSPaymentReceiptDialog::OnCreateRefundSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnExamFeesSelect(){
	
}
void CHMSPaymentReceiptDialog::OnParaclinicalFeesSelect(){
	
}
void CHMSPaymentReceiptDialog::OnDrugFeesSelect(){
	
}
void CHMSPaymentReceiptDialog::OnAllFeesSelect(){
	
}
	void CHMSPaymentReceiptDialog::OnNotIncDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPaymentReceiptDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentReceiptDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
