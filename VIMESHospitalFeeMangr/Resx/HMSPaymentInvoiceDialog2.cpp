#include "HMSPaymentInvoiceDialog2.h"
#include "MainFrm.h"
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
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog2 *)pWnd)->OnInvoiceDateCheckValue();
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
static void _OnDifferencePaidFilterSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentInvoiceDialog2*)pWnd)->OnDifferencePaidFilterSelect();
}
static void _OnPrintDischargePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentInvoiceDialog2*)pWnd)->OnPrintDischargePaymentSelect();
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
	m_nDlgHeight = 754;
	SetDefaultValues();
}
CHMSPaymentInvoiceDialog2::~CHMSPaymentInvoiceDialog2(){
}
void CHMSPaymentInvoiceDialog2::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 905, 570);
	m_wndList.Create(this,10, 30, 900, 475); 
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 10, 480, 160, 505);
	m_wndTotalCost.Create(this,165, 480, 275, 505); 
	m_wndInsurancePaidLabel.Create(this, _T("Insurance Paid /Discount"), 10, 510, 160, 535);
	m_wndInsurancePaid.Create(this,165, 510, 275, 535); 
	m_wndDiscountLabel.Create(this, _T("Total Free"), 280, 510, 380, 535);
	m_wndDiscountPaid.Create(this,385, 510, 495, 535); 
	m_wndAdvanceLabel.Create(this, _T("Total Deposit"), 280, 480, 380, 505);
	m_wndAdvance.Create(this,385, 480, 495, 505); 
	m_wndAdvPayment.Create(this, _T("Pay from deposit"), 690, 480, 895, 505);
	m_wndPayableLabel.Create(this, _T("Total Payable"), 9, 540, 159, 565);
	m_wndPayable.Create(this,165, 540, 275, 565); 
	m_wndRefundLabel.Create(this, _T("Refund"), 280, 540, 380, 565);
	m_wndRefund.Create(this,385, 540, 495, 565); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 500, 480, 600, 505);
	m_wndSerialNo.Create(this,605, 480, 685, 505); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 500, 510, 600, 535);
	m_wndInvoiceNo.Create(this,605, 510, 685, 535); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 690, 510, 790, 535);
	m_wndInvoiceDate.Create(this,795, 510, 895, 535); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 500, 540, 600, 565);
	m_wndDescription.Create(this,605, 540, 895, 565); 
	m_wndPayment.Create(this, _T("&Payment"), 570, 575, 650, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 655, 575, 735, 600);
	m_wndPrint.Create(this, _T("&Print"), 740, 575, 820, 600);
	m_wndClose.Create(this, _T("&Close"), 825, 575, 905, 600);
	m_wndDifferencePaidFilter.Create(this, _T("Difference Paid Filter"), 9, 575, 275, 600);
	m_wndPrintDischargePayment.Create(this, _T("Print Discharge Payment"), 280, 575, 495, 600);

}
void CHMSPaymentInvoiceDialog2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndInsurancePaid.SetLimitText(16);
	m_wndInsurancePaid.SetCheckValue(true);
	m_wndDiscountPaid.SetLimitText(16);
	m_wndDiscountPaid.SetCheckValue(true);
	m_wndAdvance.SetLimitText(16);
	m_wndAdvance.SetCheckValue(true);
	m_wndPayable.SetLimitText(16);
	m_wndPayable.SetCheckValue(true);
	m_wndRefund.SetLimitText(35);
	m_wndRefund.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(16);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
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
void CHMSPaymentInvoiceDialog2::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	m_wndDescription.SetEvent(WE_SELENDOK, _OnDescriptionSelendokFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_SELCHANGE, _OnDescriptionSelectChangeFnc);
	m_wndDescription.SetEvent(WE_LOADDATA, _OnDescriptionLoadDataFnc);
	//m_wndDescription.SetEvent(WE_ADDNEW, _OnDescriptionAddNewFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDifferencePaidFilter.SetEvent(WE_CLICK, _OnDifferencePaidFilterSelectFnc);
	m_wndPrintDischargePayment.SetEvent(WE_CLICK, _OnPrintDischargePaymentSelectFnc);

}
void CHMSPaymentInvoiceDialog2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_nInsurancePaid);
	DDX_Text(pDX, m_wndDiscountPaid.GetDlgCtrlID(), m_nDiscountPaid);
	DDX_Text(pDX, m_wndAdvance.GetDlgCtrlID(), m_nAdvance);
	DDX_Check(pDX, m_wndAdvPayment.GetDlgCtrlID(), m_bAdvPayment);
	DDX_Text(pDX, m_wndPayable.GetDlgCtrlID(), m_nPayable);
	DDX_Text(pDX, m_wndRefund.GetDlgCtrlID(), m_nRefund);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_TextEx(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescriptionKey);
	DDX_Check(pDX, m_wndDifferencePaidFilter.GetDlgCtrlID(), m_bDifferencePaidFilter);
	DDX_Check(pDX, m_wndPrintDischargePayment.GetDlgCtrlID(), m_bPrintDischargePayment);

}
void CHMSPaymentInvoiceDialog2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPaymentInvoiceDialog2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentInvoiceDialog2::SetDefaultValues(){

	m_nTotalCost=0;
	m_nInsurancePaid=0;
	m_nDiscountPaid=0;
	m_nAdvance=0;
	m_bAdvPayment=FALSE;
	m_nPayable=0;
	m_nRefund=0;
	m_szSerialNo.Empty();
	m_nInvoiceNo=0;
	m_szInvoiceDate.Empty();
	m_szDescriptionKey.Empty();
	m_bDifferencePaidFilter=FALSE;
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
void CHMSPaymentInvoiceDialog2::OnListDblClick(){
	
} 
void CHMSPaymentInvoiceDialog2::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentInvoiceDialog2::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPaymentInvoiceDialog2::OnListLoadData(){
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
/*void CHMSPaymentInvoiceDialog2::OnPayableChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnPayableSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnPayableKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnPayableCheckValue(){
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
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnInvoiceNoChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnInvoiceNoKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSPaymentInvoiceDialog2::OnInvoiceDateChange(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnInvoiceDateSetfocus(){
	
} */
/*void CHMSPaymentInvoiceDialog2::OnInvoiceDateKillfocus(){
	
} */
int CHMSPaymentInvoiceDialog2::OnInvoiceDateCheckValue(){
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
void CHMSPaymentInvoiceDialog2::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentInvoiceDialog2::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentInvoiceDialog2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentInvoiceDialog2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CHMSPaymentInvoiceDialog2::OnDifferencePaidFilterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSPaymentInvoiceDialog2::OnPrintDischargePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
