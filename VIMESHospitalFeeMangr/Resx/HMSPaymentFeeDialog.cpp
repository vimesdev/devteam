#include "HMSPaymentFeeDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPaymentFeeDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentFeeDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnReceiveDateChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReceiveDateChange();
} */
/*static void _OnReceiveDateSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReceiveDateSetfocus();} */ 
/*static void _OnReceiveDateKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReceiveDateKillfocus();
} */
static int _OnReceiveDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnReceiveDateCheckValue();
} 
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnStaffCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static void _OnReasonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPaymentFeeDialog* )pWnd)->OnReasonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReasonSelendokFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReasonSelendok();
}
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReasonKillfocus();
}*/
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReasonKillfocus();
}*/
static long _OnReasonLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnReasonLoadData();
}
/*static void _OnReasonAddNewFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnReasonAddNew();
}*/
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalDepositChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalDepositChange();
} */
/*static void _OnTotalDepositSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalDepositSetfocus();} */ 
/*static void _OnTotalDepositKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalDepositKillfocus();
} */
static int _OnTotalDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnTotalDepositCheckValue();
} 
/*static void _OnTotalDiscountChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalDiscountChange();
} */
/*static void _OnTotalDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalDiscountSetfocus();} */ 
/*static void _OnTotalDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalDiscountKillfocus();
} */
static int _OnTotalDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnTotalDiscountCheckValue();
} 
/*static void _OnInsurancePaidChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnInsurancePaidChange();
} */
/*static void _OnInsurancePaidSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnInsurancePaidSetfocus();} */ 
/*static void _OnInsurancePaidKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnInsurancePaidKillfocus();
} */
static int _OnInsurancePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnInsurancePaidCheckValue();
} 
/*static void _OnCoPaymentChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnCoPaymentChange();
} */
/*static void _OnCoPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnCoPaymentSetfocus();} */ 
/*static void _OnCoPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnCoPaymentKillfocus();
} */
static int _OnCoPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnCoPaymentCheckValue();
} 
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalPayableSetfocus();} */ 
/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentFeeDialog *)pWnd)->OnTotalPayableKillfocus();
} */
static int _OnTotalPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentFeeDialog *)pWnd)->OnTotalPayableCheckValue();
} 
static void _OnDifferenceChargeSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentFeeDialog*)pWnd)->OnDifferenceChargeSelect();
}
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CHMSPaymentFeeDialog *pVw = (CHMSPaymentFeeDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPaymentFeeDialog *pVw = (CHMSPaymentFeeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	CHMSPaymentFeeDialog *pVw = (CHMSPaymentFeeDialog *)pWnd;
	pVw->OnPrintReceiptSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPaymentFeeDialog *pVw = (CHMSPaymentFeeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPaymentFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentFeeDialog*)pWnd)->OnAddHMSPaymentFeeDialog();
} 
static int _OnEditHMSPaymentFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentFeeDialog*)pWnd)->OnEditHMSPaymentFeeDialog();
} 
static int _OnDeleteHMSPaymentFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentFeeDialog*)pWnd)->OnDeleteHMSPaymentFeeDialog();
} 
static int _OnSaveHMSPaymentFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentFeeDialog*)pWnd)->OnSaveHMSPaymentFeeDialog();
} 
static int _OnCancelHMSPaymentFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentFeeDialog*)pWnd)->OnCancelHMSPaymentFeeDialog();
} 
CHMSPaymentFeeDialog::CHMSPaymentFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSPaymentFeeDialog::~CHMSPaymentFeeDialog(){
}
void CHMSPaymentFeeDialog::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 1000, 570);
	m_wndList.Create(this,10, 30, 995, 475); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 480, 110, 505);
	m_wndReceiveDate.Create(this,115, 480, 255, 505); 
	m_wndStaffLabel.Create(this, _T("Staff"), 260, 480, 360, 505);
	m_wndStaff.Create(this,365, 480, 475, 505); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 510, 110, 535);
	m_wndSerialNo.Create(this,115, 510, 255, 535); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 260, 510, 360, 535);
	m_wndReceiptNo.Create(this,365, 510, 475, 535); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 540, 110, 565);
	m_wndReason.Create(this,115, 540, 475, 565); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 480, 480, 610, 505);
	m_wndTotalAmount.Create(this,615, 480, 735, 505); 
	m_wndTotal DepositLabel.Create(this, _T("Total Deposit"), 480, 510, 610, 535);
	m_wndTotalDeposit.Create(this,615, 510, 735, 535); 
	m_wndTotalDiscountLabel.Create(this, _T("Total Discount"), 480, 540, 610, 565);
	m_wndTotalDiscount.Create(this,615, 540, 735, 565); 
	m_wndInsurancePaidLabel.Create(this, _T("Insurance Paid"), 740, 480, 870, 505);
	m_wndInsurancePaid.Create(this,875, 480, 995, 505); 
	m_wndCoPaymentLabel.Create(this, _T("Co-Payment"), 740, 510, 870, 535);
	m_wndCoPayment.Create(this,875, 510, 995, 535); 
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 740, 540, 870, 565);
	m_wndTotalPayable.Create(this,875, 540, 995, 565); 
	m_wndDifferenceCharge.Create(this, _T("Difference charge"), 480, 572, 610, 597);
	m_wndApproval.Create(this, _T("&Approval"), 615, 575, 710, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 575, 810, 600);
	m_wndPrintReceipt.Create(this, _T("Print Receipt"), 815, 575, 900, 600);
	m_wndClose.Create(this, _T("&Close"), 905, 575, 1000, 600);

}
void CHMSPaymentFeeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceiveDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiveDate.SetCheckValue(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReason.SetCheckValue(true);
	m_wndReason.LimitText(35);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);
	m_wndTotalDeposit.SetLimitText(16);
	m_wndTotalDeposit.SetCheckValue(true);
	m_wndTotalDiscount.SetLimitText(35);
	m_wndTotalDiscount.SetCheckValue(true);
	m_wndInsurancePaid.SetLimitText(6);
	m_wndInsurancePaid.SetCheckValue(true);
	m_wndCoPayment.SetLimitText(16);
	m_wndCoPayment.SetCheckValue(true);
	m_wndTotalPayable.SetLimitText(16);
	m_wndTotalPayable.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 480);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Cost"), CFMT_TEXT, 100);


	m_wndReason.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReason.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSPaymentFeeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndReceiveDate.SetEvent(WE_CHANGE, _OnReceiveDateChangeFnc);
	//m_wndReceiveDate.SetEvent(WE_SETFOCUS, _OnReceiveDateSetfocusFnc);
	//m_wndReceiveDate.SetEvent(WE_KILLFOCUS, _OnReceiveDateKillfocusFnc);
	m_wndReceiveDate.SetEvent(WE_CHECKVALUE, _OnReceiveDateCheckValueFnc);
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
	//m_wndInsurancePaid.SetEvent(WE_CHANGE, _OnInsurancePaidChangeFnc);
	//m_wndInsurancePaid.SetEvent(WE_SETFOCUS, _OnInsurancePaidSetfocusFnc);
	//m_wndInsurancePaid.SetEvent(WE_KILLFOCUS, _OnInsurancePaidKillfocusFnc);
	m_wndInsurancePaid.SetEvent(WE_CHECKVALUE, _OnInsurancePaidCheckValueFnc);
	//m_wndCoPayment.SetEvent(WE_CHANGE, _OnCoPaymentChangeFnc);
	//m_wndCoPayment.SetEvent(WE_SETFOCUS, _OnCoPaymentSetfocusFnc);
	//m_wndCoPayment.SetEvent(WE_KILLFOCUS, _OnCoPaymentKillfocusFnc);
	m_wndCoPayment.SetEvent(WE_CHECKVALUE, _OnCoPaymentCheckValueFnc);
	//m_wndTotalPayable.SetEvent(WE_CHANGE, _OnTotalPayableChangeFnc);
	//m_wndTotalPayable.SetEvent(WE_SETFOCUS, _OnTotalPayableSetfocusFnc);
	//m_wndTotalPayable.SetEvent(WE_KILLFOCUS, _OnTotalPayableKillfocusFnc);
	m_wndTotalPayable.SetEvent(WE_CHECKVALUE, _OnTotalPayableCheckValueFnc);
	m_wndDifferenceCharge.SetEvent(WE_CLICK, _OnDifferenceChargeSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPaymentFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiveDate.GetDlgCtrlID(), m_szReceiveDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReason.GetDlgCtrlID(), m_szReasonKey);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Text(pDX, m_wndTotalDiscount.GetDlgCtrlID(), m_nTotalDiscount);
	DDX_Text(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_nInsurancePaid);
	DDX_Text(pDX, m_wndCoPayment.GetDlgCtrlID(), m_nCoPayment);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	DDX_Check(pDX, m_wndDifferenceCharge.GetDlgCtrlID(), m_bDifferenceCharge);

}
void CHMSPaymentFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPaymentFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentFeeDialog::SetDefaultValues(){

	m_szReceiveDate.Empty();
	m_szStaff.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReasonKey.Empty();
	m_nTotalAmount=0;
	m_nTotalDeposit=0;
	m_nTotalDiscount=0;
	m_nInsurancePaid=0;
	m_nCoPayment=0;
	m_nTotalPayable=0;
	m_bDifferenceCharge=FALSE;

}
int CHMSPaymentFeeDialog::SetMode(int nMode){
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
void CHMSPaymentFeeDialog::OnListDblClick(){
	
} 
void CHMSPaymentFeeDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentFeeDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPaymentFeeDialog::OnListLoadData(){
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
/*void CHMSPaymentFeeDialog::OnReceiveDateChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnReceiveDateSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnReceiveDateKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnReceiveDateCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnStaffChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnStaffSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnStaffKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnStaffCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnSerialNoChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnSerialNoKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnReceiptNoChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnReceiptNoCheckValue(){
	return 0;
} 
void CHMSPaymentFeeDialog::OnReasonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentFeeDialog::OnReasonSelendok(){
	 
}
/*void CHMSPaymentFeeDialog::OnReasonSetfocus(){
	
}*/
/*void CHMSPaymentFeeDialog::OnReasonKillfocus(){
	
}*/
long CHMSPaymentFeeDialog::OnReasonLoadData(){
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
/*void CHMSPaymentFeeDialog::OnReasonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPaymentFeeDialog::OnTotalAmountChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalAmountSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalAmountKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnTotalDepositChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalDepositSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalDepositKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnTotalDepositCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnTotalDiscountChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalDiscountSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalDiscountKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnTotalDiscountCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnInsurancePaidChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnInsurancePaidSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnInsurancePaidKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnInsurancePaidCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnCoPaymentChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnCoPaymentSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnCoPaymentKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnCoPaymentCheckValue(){
	return 0;
} 
/*void CHMSPaymentFeeDialog::OnTotalPayableChange(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalPayableSetfocus(){
	
} */
/*void CHMSPaymentFeeDialog::OnTotalPayableKillfocus(){
	
} */
int CHMSPaymentFeeDialog::OnTotalPayableCheckValue(){
	return 0;
} 
	void CHMSPaymentFeeDialog::OnDifferenceChargeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPaymentFeeDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentFeeDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentFeeDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentFeeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentFeeDialog::OnAddHMSPaymentFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPaymentFeeDialog::OnEditHMSPaymentFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPaymentFeeDialog::OnDeleteHMSPaymentFeeDialog(){
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
 		OnCancelHMSPaymentFeeDialog();
 	}
	return 0;
}
int CHMSPaymentFeeDialog::OnSaveHMSPaymentFeeDialog(){
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
 		//OnHMSPaymentFeeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPaymentFeeDialog::OnCancelHMSPaymentFeeDialog(){
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
int CHMSPaymentFeeDialog::OnHMSPaymentFeeDialogListLoadData(){
	return 0;
}
