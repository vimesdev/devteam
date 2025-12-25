#include "PurchaseOrderInvoicePaymentAddDialog.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoicePaymentAddDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentAddDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentAddDialog *pVw = (CPurchaseOrderInvoicePaymentAddDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentAddDialog *pVw = (CPurchaseOrderInvoicePaymentAddDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnPaymentListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnPaymentListLoadData();
} 
static void _OnPaymentListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnPaymentListDblClick();
} 
static void _OnPaymentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnPaymentListSelectChange(nOldItem, nNewItem);
} 
static int _OnPaymentListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnPaymentListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentAddDialog *pVw = (CPurchaseOrderInvoicePaymentAddDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentAddDialog *pVw = (CPurchaseOrderInvoicePaymentAddDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddPurchaseOrderInvoicePaymentAddDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnAddPurchaseOrderInvoicePaymentAddDialog();
} 
static int _OnEditPurchaseOrderInvoicePaymentAddDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnEditPurchaseOrderInvoicePaymentAddDialog();
} 
static int _OnDeletePurchaseOrderInvoicePaymentAddDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnDeletePurchaseOrderInvoicePaymentAddDialog();
} 
static int _OnSavePurchaseOrderInvoicePaymentAddDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnSavePurchaseOrderInvoicePaymentAddDialog();
} 
static int _OnCancelPurchaseOrderInvoicePaymentAddDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentAddDialog*)pWnd)->OnCancelPurchaseOrderInvoicePaymentAddDialog();
} 
CPurchaseOrderInvoicePaymentAddDialog::CPurchaseOrderInvoicePaymentAddDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CPurchaseOrderInvoicePaymentAddDialog::~CPurchaseOrderInvoicePaymentAddDialog(){
}
void CPurchaseOrderInvoicePaymentAddDialog::OnCreateComponents(){
	m_wndPaymentInformation.Create(this, _T("Payment Information"), 4, 320, 1000, 600);
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 4, 5, 1000, 285);
	m_wndOrderList.Create(this,10, 30, 995, 280); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 290, 100, 315);
	m_wndFromDate.Create(this,105, 290, 200, 315); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 290, 300, 315);
	m_wndToDate.Create(this,305, 290, 400, 315); 
	m_wndStorageLabel.Create(this, _T("Storage"), 405, 290, 500, 315);
	m_wndStorage.Create(this,505, 290, 715, 315); 
	m_wndSearchLabel.Create(this, _T("Search"), 720, 290, 820, 315);
	m_wndSearch.Create(this,825, 290, 925, 315); 
	m_wndAdd.Create(this, _T("<"), 930, 290, 960, 315);
	m_wndRemove.Create(this, _T(">"), 965, 290, 995, 315);
	m_wndPaymentList.Create(this,10, 345, 995, 595); 
	m_wndOK.Create(this, _T("&OK"), 815, 605, 905, 630);
	m_wndDiscard.Create(this, _T("&Discard"), 910, 605, 1000, 630);

}
void CPurchaseOrderInvoicePaymentAddDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(1, _T("ORDERDATE"), CFMT_DATE, 125);
	m_wndOrderList.InsertColumn(2, _T("Supplier"), CFMT_TEXT, 420);
	m_wndOrderList.InsertColumn(3, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(4, _T("Invoice Date"), CFMT_DATE, 110);
	m_wndOrderList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 100);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPaymentList.InsertColumn(0, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndPaymentList.InsertColumn(1, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndPaymentList.InsertColumn(2, _T("Supplier"), CFMT_TEXT, 420);
	m_wndPaymentList.InsertColumn(3, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndPaymentList.InsertColumn(4, _T("Invoice Date"), CFMT_DATE, 110);
	m_wndPaymentList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);

}
void CPurchaseOrderInvoicePaymentAddDialog::OnSetWindowEvents(){
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
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
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
void CPurchaseOrderInvoicePaymentAddDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CPurchaseOrderInvoicePaymentAddDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderInvoicePaymentAddDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPurchaseOrderInvoicePaymentAddDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szSearch.Empty();

}
int CPurchaseOrderInvoicePaymentAddDialog::SetMode(int nMode){
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
void CPurchaseOrderInvoicePaymentAddDialog::OnOrderListDblClick(){
	
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderInvoicePaymentAddDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderInvoicePaymentAddDialog::OnOrderListLoadData(){
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
/*void CPurchaseOrderInvoicePaymentAddDialog::OnFromDateChange(){
	
} */
/*void CPurchaseOrderInvoicePaymentAddDialog::OnFromDateSetfocus(){
	
} */
/*void CPurchaseOrderInvoicePaymentAddDialog::OnFromDateKillfocus(){
	
} */
int CPurchaseOrderInvoicePaymentAddDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoicePaymentAddDialog::OnToDateChange(){
	
} */
/*void CPurchaseOrderInvoicePaymentAddDialog::OnToDateSetfocus(){
	
} */
/*void CPurchaseOrderInvoicePaymentAddDialog::OnToDateKillfocus(){
	
} */
int CPurchaseOrderInvoicePaymentAddDialog::OnToDateCheckValue(){
	return 0;
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnStorageSelendok(){
	 
}
/*void CPurchaseOrderInvoicePaymentAddDialog::OnStorageSetfocus(){
	
}*/
/*void CPurchaseOrderInvoicePaymentAddDialog::OnStorageKillfocus(){
	
}*/
long CPurchaseOrderInvoicePaymentAddDialog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderInvoicePaymentAddDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderInvoicePaymentAddDialog::OnSearchChange(){
	
} */
/*void CPurchaseOrderInvoicePaymentAddDialog::OnSearchSetfocus(){
	
} */
/*void CPurchaseOrderInvoicePaymentAddDialog::OnSearchKillfocus(){
	
} */
int CPurchaseOrderInvoicePaymentAddDialog::OnSearchCheckValue(){
	return 0;
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnPaymentListDblClick(){
	
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnPaymentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderInvoicePaymentAddDialog::OnPaymentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderInvoicePaymentAddDialog::OnPaymentListLoadData(){
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
void CPurchaseOrderInvoicePaymentAddDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentAddDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderInvoicePaymentAddDialog::OnAddPurchaseOrderInvoicePaymentAddDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderInvoicePaymentAddDialog::OnEditPurchaseOrderInvoicePaymentAddDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderInvoicePaymentAddDialog::OnDeletePurchaseOrderInvoicePaymentAddDialog(){
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
 		OnCancelPurchaseOrderInvoicePaymentAddDialog();
 	}
	return 0;
}
int CPurchaseOrderInvoicePaymentAddDialog::OnSavePurchaseOrderInvoicePaymentAddDialog(){
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
 		//OnPurchaseOrderInvoicePaymentAddDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderInvoicePaymentAddDialog::OnCancelPurchaseOrderInvoicePaymentAddDialog(){
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
int CPurchaseOrderInvoicePaymentAddDialog::OnPurchaseOrderInvoicePaymentAddDialogListLoadData(){
	return 0;
}
