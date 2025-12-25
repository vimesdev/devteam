#include "PurchaseInvoicePaymentDialog.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseInvoicePaymentDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseInvoicePaymentDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseInvoicePaymentDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseInvoicePaymentDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseInvoicePaymentDialog *pVw = (CPurchaseInvoicePaymentDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CPurchaseInvoicePaymentDialog *pVw = (CPurchaseInvoicePaymentDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnPaymentListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnPaymentListLoadData();
} 
static void _OnPaymentListDblClickFnc(CWnd *pWnd){
	((CPurchaseInvoicePaymentDialog*)pWnd)->OnPaymentListDblClick();
} 
static void _OnPaymentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseInvoicePaymentDialog*)pWnd)->OnPaymentListSelectChange(nOldItem, nNewItem);
} 
static int _OnPaymentListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnPaymentListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CPurchaseInvoicePaymentDialog *pVw = (CPurchaseInvoicePaymentDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseInvoicePaymentDialog *pVw = (CPurchaseInvoicePaymentDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddPurchaseInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnAddPurchaseInvoicePaymentDialog();
} 
static int _OnEditPurchaseInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnEditPurchaseInvoicePaymentDialog();
} 
static int _OnDeletePurchaseInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnDeletePurchaseInvoicePaymentDialog();
} 
static int _OnSavePurchaseInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnSavePurchaseInvoicePaymentDialog();
} 
static int _OnCancelPurchaseInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseInvoicePaymentDialog*)pWnd)->OnCancelPurchaseInvoicePaymentDialog();
} 
CPurchaseInvoicePaymentDialog::CPurchaseInvoicePaymentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CPurchaseInvoicePaymentDialog::~CPurchaseInvoicePaymentDialog(){
}
void CPurchaseInvoicePaymentDialog::OnCreateComponents(){
	m_wndPaymentInformation.Create(this, _T("Payment Information"), 4, 320, 1000, 600);
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 4, 5, 1000, 285);
	m_wndOrderList.Create(this,10, 30, 995, 280); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 290, 115, 315);
	m_wndFromDate.Create(this,120, 290, 230, 315); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 290, 345, 315);
	m_wndToDate.Create(this,350, 290, 460, 315); 
	m_wndSearchLabel.Create(this, _T("Search"), 465, 290, 565, 315);
	m_wndSearch.Create(this,570, 290, 925, 315); 
	m_wndAdd.Create(this, _T("<"), 930, 290, 960, 315);
	m_wndRemove.Create(this, _T(">"), 965, 290, 995, 315);
	m_wndPaymentList.Create(this,10, 345, 995, 595); 
	m_wndOK.Create(this, _T("&OK"), 815, 605, 905, 630);
	m_wndDiscard.Create(this, _T("&Discard"), 910, 605, 1000, 630);

}
void CPurchaseInvoicePaymentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(1, _T("ORDERDATE"), CFMT_DATE, 125);
	m_wndOrderList.InsertColumn(2, _T("Supplier"), CFMT_TEXT, 420);
	m_wndOrderList.InsertColumn(3, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(4, _T("Invoice Date"), CFMT_DATE, 110);
	m_wndOrderList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 100);


	m_wndPaymentList.InsertColumn(0, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndPaymentList.InsertColumn(1, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndPaymentList.InsertColumn(2, _T("Supplier"), CFMT_TEXT, 420);
	m_wndPaymentList.InsertColumn(3, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndPaymentList.InsertColumn(4, _T("Invoice Date"), CFMT_DATE, 110);
	m_wndPaymentList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);

}
void CPurchaseInvoicePaymentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndPaymentList.SetEvent(WE_SELCHANGE, _OnPaymentListSelectChangeFnc);
	m_wndPaymentList.SetEvent(WE_LOADDATA, _OnPaymentListLoadDataFnc);
	m_wndPaymentList.SetEvent(WE_DBLCLICK, _OnPaymentListDblClickFnc);
	m_wndPaymentList.AddEvent(1, _T("Delete"), _OnPaymentListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	SetMode(VM_NONE);

}
void CPurchaseInvoicePaymentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CPurchaseInvoicePaymentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseInvoicePaymentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPurchaseInvoicePaymentDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}
int CPurchaseInvoicePaymentDialog::SetMode(int nMode){
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
void CPurchaseInvoicePaymentDialog::OnOrderListDblClick(){
	
} 
void CPurchaseInvoicePaymentDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseInvoicePaymentDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseInvoicePaymentDialog::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("ORDERNO")), 
			rs.GetValue(_T("ORDERDATE")), 
			rs.GetValue(_T("Supplier")), 
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CPurchaseInvoicePaymentDialog::OnFromDateChange(){
	
} */
/*void CPurchaseInvoicePaymentDialog::OnFromDateSetfocus(){
	
} */
/*void CPurchaseInvoicePaymentDialog::OnFromDateKillfocus(){
	
} */
int CPurchaseInvoicePaymentDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CPurchaseInvoicePaymentDialog::OnToDateChange(){
	
} */
/*void CPurchaseInvoicePaymentDialog::OnToDateSetfocus(){
	
} */
/*void CPurchaseInvoicePaymentDialog::OnToDateKillfocus(){
	
} */
int CPurchaseInvoicePaymentDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CPurchaseInvoicePaymentDialog::OnSearchChange(){
	
} */
/*void CPurchaseInvoicePaymentDialog::OnSearchSetfocus(){
	
} */
/*void CPurchaseInvoicePaymentDialog::OnSearchKillfocus(){
	
} */
int CPurchaseInvoicePaymentDialog::OnSearchCheckValue(){
	return 0;
} 
void CPurchaseInvoicePaymentDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseInvoicePaymentDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseInvoicePaymentDialog::OnPaymentListDblClick(){
	
} 
void CPurchaseInvoicePaymentDialog::OnPaymentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseInvoicePaymentDialog::OnPaymentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseInvoicePaymentDialog::OnPaymentListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPaymentList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentList.AddItems(
			rs.GetValue(_T("ORDERNO")), 
			rs.GetValue(_T("ORDERDATE")), 
			rs.GetValue(_T("Supplier")), 
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndPaymentList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPurchaseInvoicePaymentDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseInvoicePaymentDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseInvoicePaymentDialog::OnAddPurchaseInvoicePaymentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseInvoicePaymentDialog::OnEditPurchaseInvoicePaymentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseInvoicePaymentDialog::OnDeletePurchaseInvoicePaymentDialog(){
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
 		OnCancelPurchaseInvoicePaymentDialog();
 	}
	return 0;
}
int CPurchaseInvoicePaymentDialog::OnSavePurchaseInvoicePaymentDialog(){
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
 		//OnPurchaseInvoicePaymentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseInvoicePaymentDialog::OnCancelPurchaseInvoicePaymentDialog(){
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
int CPurchaseInvoicePaymentDialog::OnPurchaseInvoicePaymentDialogListLoadData(){
	return 0;
}
