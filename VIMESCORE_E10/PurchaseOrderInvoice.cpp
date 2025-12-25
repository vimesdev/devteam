#include "PurchaseOrderInvoice.h"
#include "MainFrame_E10.h"
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoice* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnPaymentTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoice* )pWnd)->OnPaymentTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTermsSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentTermsSelendok();
}
/*static void _OnPaymentTermsSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentTermsKillfocus();
}*/
/*static void _OnPaymentTermsKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentTermsKillfocus();
}*/
static long _OnPaymentTermsLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnPaymentTermsLoadData();
}
/*static void _OnPaymentTermsAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentTermsAddNew();
}*/
/*static void _OnDueDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnDueDateChange();
} */
/*static void _OnDueDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnDueDateSetfocus();} */ 
/*static void _OnDueDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnDueDateKillfocus();
} */
static int _OnDueDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnDueDateCheckValue();
} 
/*static void _OnNumberOfPaymentsChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnNumberOfPaymentsChange();
} */
/*static void _OnNumberOfPaymentsSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnNumberOfPaymentsSetfocus();} */ 
/*static void _OnNumberOfPaymentsKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnNumberOfPaymentsKillfocus();
} */
static int _OnNumberOfPaymentsCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnNumberOfPaymentsCheckValue();
} 
/*static void _OnPaymentDiscountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentDiscountChange();
} */
/*static void _OnPaymentDiscountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentDiscountSetfocus();} */ 
/*static void _OnPaymentDiscountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaymentDiscountKillfocus();
} */
static int _OnPaymentDiscountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnPaymentDiscountCheckValue();
} 
/*static void _OnExpectedAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnExpectedAmountChange();
} */
/*static void _OnExpectedAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnExpectedAmountSetfocus();} */ 
/*static void _OnExpectedAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnExpectedAmountKillfocus();
} */
static int _OnExpectedAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnExpectedAmountCheckValue();
} 
/*static void _OnPaidChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaidChange();
} */
/*static void _OnPaidSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaidSetfocus();} */ 
/*static void _OnPaidKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnPaidKillfocus();
} */
static int _OnPaidCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnPaidCheckValue();
} 
/*static void _OnOutstandingChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnOutstandingChange();
} */
/*static void _OnOutstandingSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnOutstandingSetfocus();} */ 
/*static void _OnOutstandingKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoice *)pWnd)->OnOutstandingKillfocus();
} */
static int _OnOutstandingCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoice *)pWnd)->OnOutstandingCheckValue();
} 
static int _OnAddPurchaseOrderInvoiceFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoice*)pWnd)->OnAddPurchaseOrderInvoice();
} 
static int _OnEditPurchaseOrderInvoiceFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoice*)pWnd)->OnEditPurchaseOrderInvoice();
} 
static int _OnDeletePurchaseOrderInvoiceFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoice*)pWnd)->OnDeletePurchaseOrderInvoice();
} 
static int _OnSavePurchaseOrderInvoiceFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoice*)pWnd)->OnSavePurchaseOrderInvoice();
} 
static int _OnCancelPurchaseOrderInvoiceFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoice*)pWnd)->OnCancelPurchaseOrderInvoice();
} 
CPurchaseOrderInvoice::CPurchaseOrderInvoice(){

	m_nDlgWidth = 715;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPurchaseOrderInvoice::~CPurchaseOrderInvoice(){
}
void CPurchaseOrderInvoice::OnCreateComponents(){
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 5, 5, 125, 30);
	m_wndPaymentMethod.Create(this,130, 5, 240, 30); 
	m_wndPaymentTermsLabel.Create(this, _T("Payment Terms"), 245, 5, 385, 30);
	m_wndPaymentTerms.Create(this,390, 5, 705, 30); 
	m_wndDueDateLabel.Create(this, _T("Due Date"), 5, 35, 125, 60);
	m_wndDueDate.Create(this,130, 35, 240, 60); 
	m_wndNumberOfPaymentsLabel.Create(this, _T("Number of Payments"), 245, 35, 385, 60);
	m_wndNumberOfPayments.Create(this,390, 35, 485, 60); 
	m_wndPaymentDiscountLabel.Create(this, _T("Payment Discount"), 490, 35, 605, 60);
	m_wndPaymentDiscount.Create(this,610, 35, 705, 60); 
	m_wndExpectedAmountLabel.Create(this, _T("Expected Amount"), 5, 65, 125, 90);
	m_wndExpectedAmount.Create(this,130, 65, 240, 90); 
	m_wndPaidLabel.Create(this, _T("Paid"), 245, 65, 385, 90);
	m_wndPaid.Create(this,390, 65, 485, 90); 
	m_wndOutstandingLabel.Create(this, _T("Outstanding"), 490, 65, 605, 90);
	m_wndOutstanding.Create(this,610, 65, 705, 90); 

}
void CPurchaseOrderInvoice::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(35);
	m_wndPaymentTerms.SetCheckValue(true);
	m_wndPaymentTerms.LimitText(35);
	m_wndDueDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDueDate.SetCheckValue(true);
	m_wndNumberOfPayments.SetLimitText(16);
	m_wndNumberOfPayments.SetCheckValue(true);
	m_wndPaymentDiscount.SetLimitText(16);
	m_wndPaymentDiscount.SetCheckValue(true);
	m_wndExpectedAmount.SetLimitText(16);
	m_wndExpectedAmount.SetCheckValue(true);
	m_wndPaid.SetLimitText(16);
	m_wndPaid.SetCheckValue(true);
	m_wndOutstanding.SetLimitText(35);
	m_wndOutstanding.SetCheckValue(true);


	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPaymentTerms.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPaymentTerms.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPurchaseOrderInvoice::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndPaymentTerms.SetEvent(WE_SELENDOK, _OnPaymentTermsSelendokFnc);
	//m_wndPaymentTerms.SetEvent(WE_SETFOCUS, _OnPaymentTermsSetfocusFnc);
	//m_wndPaymentTerms.SetEvent(WE_KILLFOCUS, _OnPaymentTermsKillfocusFnc);
	m_wndPaymentTerms.SetEvent(WE_SELCHANGE, _OnPaymentTermsSelectChangeFnc);
	m_wndPaymentTerms.SetEvent(WE_LOADDATA, _OnPaymentTermsLoadDataFnc);
	//m_wndPaymentTerms.SetEvent(WE_ADDNEW, _OnPaymentTermsAddNewFnc);
	//m_wndDueDate.SetEvent(WE_CHANGE, _OnDueDateChangeFnc);
	//m_wndDueDate.SetEvent(WE_SETFOCUS, _OnDueDateSetfocusFnc);
	//m_wndDueDate.SetEvent(WE_KILLFOCUS, _OnDueDateKillfocusFnc);
	m_wndDueDate.SetEvent(WE_CHECKVALUE, _OnDueDateCheckValueFnc);
	//m_wndNumberOfPayments.SetEvent(WE_CHANGE, _OnNumberOfPaymentsChangeFnc);
	//m_wndNumberOfPayments.SetEvent(WE_SETFOCUS, _OnNumberOfPaymentsSetfocusFnc);
	//m_wndNumberOfPayments.SetEvent(WE_KILLFOCUS, _OnNumberOfPaymentsKillfocusFnc);
	m_wndNumberOfPayments.SetEvent(WE_CHECKVALUE, _OnNumberOfPaymentsCheckValueFnc);
	//m_wndPaymentDiscount.SetEvent(WE_CHANGE, _OnPaymentDiscountChangeFnc);
	//m_wndPaymentDiscount.SetEvent(WE_SETFOCUS, _OnPaymentDiscountSetfocusFnc);
	//m_wndPaymentDiscount.SetEvent(WE_KILLFOCUS, _OnPaymentDiscountKillfocusFnc);
	m_wndPaymentDiscount.SetEvent(WE_CHECKVALUE, _OnPaymentDiscountCheckValueFnc);
	//m_wndExpectedAmount.SetEvent(WE_CHANGE, _OnExpectedAmountChangeFnc);
	//m_wndExpectedAmount.SetEvent(WE_SETFOCUS, _OnExpectedAmountSetfocusFnc);
	//m_wndExpectedAmount.SetEvent(WE_KILLFOCUS, _OnExpectedAmountKillfocusFnc);
	m_wndExpectedAmount.SetEvent(WE_CHECKVALUE, _OnExpectedAmountCheckValueFnc);
	//m_wndPaid.SetEvent(WE_CHANGE, _OnPaidChangeFnc);
	//m_wndPaid.SetEvent(WE_SETFOCUS, _OnPaidSetfocusFnc);
	//m_wndPaid.SetEvent(WE_KILLFOCUS, _OnPaidKillfocusFnc);
	m_wndPaid.SetEvent(WE_CHECKVALUE, _OnPaidCheckValueFnc);
	//m_wndOutstanding.SetEvent(WE_CHANGE, _OnOutstandingChangeFnc);
	//m_wndOutstanding.SetEvent(WE_SETFOCUS, _OnOutstandingSetfocusFnc);
	//m_wndOutstanding.SetEvent(WE_KILLFOCUS, _OnOutstandingKillfocusFnc);
	m_wndOutstanding.SetEvent(WE_CHECKVALUE, _OnOutstandingCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderInvoiceFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderInvoiceFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderInvoiceFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderInvoiceFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderInvoiceFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPurchaseOrderInvoice::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndPaymentTerms.GetDlgCtrlID(), m_szPaymentTermsKey);
	DDX_TextEx(pDX, m_wndDueDate.GetDlgCtrlID(), m_szDueDate);
	DDX_Text(pDX, m_wndNumberOfPayments.GetDlgCtrlID(), m_nNumberOfPayments);
	DDX_Text(pDX, m_wndPaymentDiscount.GetDlgCtrlID(), m_nPaymentDiscount);
	DDX_Text(pDX, m_wndExpectedAmount.GetDlgCtrlID(), m_nExpectedAmount);
	DDX_Text(pDX, m_wndPaid.GetDlgCtrlID(), m_nPaid);
	DDX_Text(pDX, m_wndOutstanding.GetDlgCtrlID(), m_szOutstanding);

}
void CPurchaseOrderInvoice::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderInvoice::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderInvoice::SetDefaultValues(){

	m_szPaymentMethodKey.Empty();
	m_szPaymentTermsKey.Empty();
	m_szDueDate.Empty();
	m_nNumberOfPayments=0;
	m_nPaymentDiscount=0;
	m_nExpectedAmount=0;
	m_nPaid=0;
	m_szOutstanding.Empty();

}
int CPurchaseOrderInvoice::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CPurchaseOrderInvoice::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoice::OnPaymentMethodSelendok(){
	 
}
/*void CPurchaseOrderInvoice::OnPaymentMethodSetfocus(){
	
}*/
/*void CPurchaseOrderInvoice::OnPaymentMethodKillfocus(){
	
}*/
long CPurchaseOrderInvoice::OnPaymentMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderInvoice::OnPaymentMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderInvoice::OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoice::OnPaymentTermsSelendok(){
	 
}
/*void CPurchaseOrderInvoice::OnPaymentTermsSetfocus(){
	
}*/
/*void CPurchaseOrderInvoice::OnPaymentTermsKillfocus(){
	
}*/
long CPurchaseOrderInvoice::OnPaymentTermsLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentTerms.IsSearchKey() && !m_szPaymentTermsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentTermsKey
};
	m_wndPaymentTerms.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentTerms.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderInvoice::OnPaymentTermsAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderInvoice::OnDueDateChange(){
	
} */
/*void CPurchaseOrderInvoice::OnDueDateSetfocus(){
	
} */
/*void CPurchaseOrderInvoice::OnDueDateKillfocus(){
	
} */
int CPurchaseOrderInvoice::OnDueDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoice::OnNumberOfPaymentsChange(){
	
} */
/*void CPurchaseOrderInvoice::OnNumberOfPaymentsSetfocus(){
	
} */
/*void CPurchaseOrderInvoice::OnNumberOfPaymentsKillfocus(){
	
} */
int CPurchaseOrderInvoice::OnNumberOfPaymentsCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoice::OnPaymentDiscountChange(){
	
} */
/*void CPurchaseOrderInvoice::OnPaymentDiscountSetfocus(){
	
} */
/*void CPurchaseOrderInvoice::OnPaymentDiscountKillfocus(){
	
} */
int CPurchaseOrderInvoice::OnPaymentDiscountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoice::OnExpectedAmountChange(){
	
} */
/*void CPurchaseOrderInvoice::OnExpectedAmountSetfocus(){
	
} */
/*void CPurchaseOrderInvoice::OnExpectedAmountKillfocus(){
	
} */
int CPurchaseOrderInvoice::OnExpectedAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoice::OnPaidChange(){
	
} */
/*void CPurchaseOrderInvoice::OnPaidSetfocus(){
	
} */
/*void CPurchaseOrderInvoice::OnPaidKillfocus(){
	
} */
int CPurchaseOrderInvoice::OnPaidCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoice::OnOutstandingChange(){
	
} */
/*void CPurchaseOrderInvoice::OnOutstandingSetfocus(){
	
} */
/*void CPurchaseOrderInvoice::OnOutstandingKillfocus(){
	
} */
int CPurchaseOrderInvoice::OnOutstandingCheckValue(){
	return 0;
} 
int CPurchaseOrderInvoice::OnAddPurchaseOrderInvoice(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderInvoice::OnEditPurchaseOrderInvoice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderInvoice::OnDeletePurchaseOrderInvoice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPurchaseOrderInvoice();
 	}
	return 0;
}
int CPurchaseOrderInvoice::OnSavePurchaseOrderInvoice(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPurchaseOrderInvoiceListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderInvoice::OnCancelPurchaseOrderInvoice(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPurchaseOrderInvoice::OnPurchaseOrderInvoiceListLoadData(){
	return 0;
}
