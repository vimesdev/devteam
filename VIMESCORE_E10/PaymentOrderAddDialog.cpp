#include "PaymentOrderAddDialog.h"
#include "MainFrame_E10.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPaymentOrderAddDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPaymentOrderAddDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPaymentOrderAddDialog*)pWnd)->OnOrderListDeleteItem();
} 

static int _OnOrderListAddAllItemFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog*)pWnd)->OnAddAllSelect();
	 return 0;
} 


/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderAddDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderAddDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPaymentOrderAddDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPaymentOrderAddDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnSearchChange();
} 
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderAddDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnAddAllSelectFnc(CWnd *pWnd){
	CPaymentOrderAddDialog *pVw = (CPaymentOrderAddDialog *)pWnd;
	pVw->OnAddAllSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPaymentOrderAddDialog *pVw = (CPaymentOrderAddDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CPaymentOrderAddDialog *pVw = (CPaymentOrderAddDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnRemoveAllSelectFnc(CWnd *pWnd){
	CPaymentOrderAddDialog *pVw = (CPaymentOrderAddDialog *)pWnd;
	pVw->OnRemoveAllSelect();
} 
static long _OnPaymentListLoadDataFnc(CWnd *pWnd){
	return ((CPaymentOrderAddDialog*)pWnd)->OnPaymentListLoadData();
} 
static void _OnPaymentListDblClickFnc(CWnd *pWnd){
	((CPaymentOrderAddDialog*)pWnd)->OnPaymentListDblClick();
} 
static void _OnPaymentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPaymentOrderAddDialog*)pWnd)->OnPaymentListSelectChange(nOldItem, nNewItem);
} 
static int _OnPaymentListDeleteItemFnc(CWnd *pWnd){
	 return ((CPaymentOrderAddDialog*)pWnd)->OnPaymentListDeleteItem();
}

static int _OnPaymentListRemoveAllItemFnc(CWnd *pWnd){
	 ((CPaymentOrderAddDialog*)pWnd)->OnRemoveAllSelect();
	 return 0;
}

static void _OnOKSelectFnc(CWnd *pWnd){
	CPaymentOrderAddDialog *pVw = (CPaymentOrderAddDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPaymentOrderAddDialog *pVw = (CPaymentOrderAddDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddPaymentOrderAddDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderAddDialog*)pWnd)->OnAddPaymentOrderAddDialog();
} 
static int _OnEditPaymentOrderAddDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderAddDialog*)pWnd)->OnEditPaymentOrderAddDialog();
} 
static int _OnDeletePaymentOrderAddDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderAddDialog*)pWnd)->OnDeletePaymentOrderAddDialog();
} 
static int _OnSavePaymentOrderAddDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderAddDialog*)pWnd)->OnSavePaymentOrderAddDialog();
} 
static int _OnCancelPaymentOrderAddDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderAddDialog*)pWnd)->OnCancelPaymentOrderAddDialog();
} 
CPaymentOrderAddDialog::CPaymentOrderAddDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 635;
	SetDefaultValues();
	m_wndFromDate.EnableCalendar(true);
	m_wndToDate.EnableCalendar(true);
	
}

CPaymentOrderAddDialog::~CPaymentOrderAddDialog(){
}
void CPaymentOrderAddDialog::OnCreateComponents(){
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 4, 5, 1000, 285);
	m_wndPaymentInformation.Create(this, _T("Payment Information"), 4, 320, 1000, 600);
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
	m_wndDiscard.Create(this, _T("&Close"), 910, 605, 1000, 630);

}
void CPaymentOrderAddDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndAdd.SetImageID(IDR_ARROW_DOWN);
	m_wndRemove.SetImageID(IDR_ARROW_UP);

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);

	m_wndOrderList.InsertColumn(0, _T("ORDER_ID"), CFMT_TEXT, 0);
	m_wndOrderList.InsertColumn(1, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(2, _T("ORDERDATE"), CFMT_DATE, 125);
	m_wndOrderList.InsertColumn(3, _T("Supplier"), CFMT_TEXT, 420);
	m_wndOrderList.InsertColumn(4, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(5, _T("Invoice Date"), CFMT_DATE, 110);
	m_wndOrderList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 100);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndPaymentList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndPaymentList.InsertColumn(1, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndPaymentList.InsertColumn(2, _T("ORDERDATE"), CFMT_DATE, 125);
	m_wndPaymentList.InsertColumn(3, _T("Supplier"), CFMT_TEXT, 420);
	m_wndPaymentList.InsertColumn(4, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndPaymentList.InsertColumn(5, _T("Invoice Date"), CFMT_DATE, 110);
	m_wndPaymentList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 100);

}
void CPaymentOrderAddDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
//	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0);
	m_wndOrderList.AddEvent(2, _T("Add All"), _OnOrderListAddAllItemFnc);
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
	//m_wndPaymentList.AddEvent(1, _T("Delete"), _OnPaymentListDeleteItemFnc, 0);
	m_wndPaymentList.AddEvent(2, _T("Remove All"), _OnPaymentListRemoveAllItemFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);

	SetMode(VM_ADD);
	OnOrderListLoadData();
}
void CPaymentOrderAddDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CPaymentOrderAddDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPaymentOrderAddDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPaymentOrderAddDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szSearch.Empty();

}
int CPaymentOrderAddDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, -1);
 			SetDefaultValues();
			m_szToDate = pMF->GetSysDate();
			m_szFromDate.Format(_T("%s-01"), m_szToDate.Left(7));
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, -1);
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
void CPaymentOrderAddDialog::OnOrderListDblClick(){
	OnAddSelect();

} 
void CPaymentOrderAddDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPaymentOrderAddDialog::OnOrderListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPaymentOrderAddDialog::OnOrderListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);


	m_wndOrderList.BeginLoad(); 
	int nCount = 0;

	szWhere.Format(_T(" and trunc_date(po_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);

	
	if(!m_szStorageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and po_storage_id = %d "), str2int(m_szStorageKey));
	}
	
	szWhere.AppendFormat(_T(" and po_storage_id in(%s) "), pMF->m_szStoragePerm);
	if (pMF->GetModuleID() == _T("PM"))
		szWhere.AppendFormat(_T(" AND NVL(po_saleperson_id, 'N') IN ('N', 'P')"));

	szSQL.Format(_T(" SELECT *") \
_T(" FROM") \
_T("   (SELECT po_purchase_order_id     AS order_id,") \
_T("     po_orderno                     AS orderno,") \
_T("     po_orderdate                   AS orderdate,") \
_T("     get_partnername(po_partner_id) AS partnername,") \
_T("     po_invoiceno                   AS invoiceno,") \
_T("     po_invoicedate                 AS invoicedate,") \
_T("     po_totalamount                 AS amount") \
_T("   FROM purchase_order") \
_T("   WHERE po_status      ='A'") \
_T("   AND po_payment       ='N'") \
_T("   AND po_refpayment_id =0") \
_T("   AND po_org_id        ='%s' %s ") \
_T("   ) tbl") \
_T(" WHERE lower(partnername) LIKE(chr(37)") \
_T("   ||lower('%s')") \
_T("   ||chr(37))  ") \
_T(" ORDER BY orderdate "), pMF->GetModuleID(), szWhere, m_szSearch);

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("ORDER_ID")), 
			rs.GetValue(_T("ORDERNO")), 
			rs.GetValue(_T("ORDERDATE")), 
			rs.GetValue(_T("partnername")), 
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Amount")), 
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
/*void CPaymentOrderAddDialog::OnFromDateChange(){
	
} */
/*void CPaymentOrderAddDialog::OnFromDateSetfocus(){
	
} */
/*void CPaymentOrderAddDialog::OnFromDateKillfocus(){
	
} */
int CPaymentOrderAddDialog::OnFromDateCheckValue(){
	OnOrderListLoadData();
	return 0;
} 
/*void CPaymentOrderAddDialog::OnToDateChange(){
	
} */
/*void CPaymentOrderAddDialog::OnToDateSetfocus(){
	
} */
/*void CPaymentOrderAddDialog::OnToDateKillfocus(){
	
} */
int CPaymentOrderAddDialog::OnToDateCheckValue(){
	OnOrderListLoadData();
	return 0;
} 
void CPaymentOrderAddDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPaymentOrderAddDialog::OnStorageSelendok(){
	OnOrderListLoadData();
}
/*void CPaymentOrderAddDialog::OnStorageSetfocus(){
	
}*/
/*void CPaymentOrderAddDialog::OnStorageKillfocus(){
	
}*/
long CPaymentOrderAddDialog::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_type ='A' "));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
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
/*void CPaymentOrderAddDialog::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPaymentOrderAddDialog::OnSearchChange(){
	
} */
/*void CPaymentOrderAddDialog::OnSearchSetfocus(){
	
} */
/*void CPaymentOrderAddDialog::OnSearchKillfocus(){
	
} */
int CPaymentOrderAddDialog::OnSearchCheckValue(){
	OnOrderListLoadData();
	return 1;
} 
void CPaymentOrderAddDialog::OnAddAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_orders.RemoveAll();
	for (int i =0; i < m_wndOrderList.GetItemCount(); i++)
	{
		long nOrderID = str2long(m_wndOrderList.GetItemText(i, 0));

		m_orders.Add(nOrderID);
	}
	OnPaymentListLoadData();
	m_wndOrderList.DeleteAllItems();
	m_wndOrderList.SetFocus();

} 
void CPaymentOrderAddDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;
	long nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));
	CString szSQL;
	m_orders.Add(nOrderID);

	szSQL.Format(_T("UPDATE purchase_order SET po_refpayment_id=%ld ") \
		_T("WHERE po_purchase_order_id=%ld and po_payment='N' "), m_nID, nOrderID);
//	pMF->ExecSQL(szSQL);
	OnPaymentListLoadData();
	m_wndOrderList.DeleteItem(nSel);
	m_wndOrderList.SetFocus();
	m_wndOrderList.SetCurSel(nSel);
} 
void CPaymentOrderAddDialog::OnRemoveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndPaymentList.GetCurSel();
	if(nSel < 0) return;
	long nOrderID = str2long(m_wndPaymentList.GetItemText(nSel, 0));
	for (int i =0; i < m_orders.GetCount(); i++)
	{
		long nOID = m_orders[i];
		if(nOID == nOrderID)
		{
			m_orders.RemoveAt(i);
			break;
		}
	}

	CString szSQL;
	szSQL.Format(_T("UPDATE purchase_order SET po_refpayment_id=0 WHERE po_purchase_order_id=%ld and po_payment='N' "), nOrderID);
//	pMF->ExecSQL(szSQL);
	OnOrderListLoadData();
	m_wndPaymentList.DeleteItem(nSel);
	m_wndPaymentList.SetFocus();
	m_wndPaymentList.SetCurSel(nSel);
	
} 
void CPaymentOrderAddDialog::OnRemoveAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_orders.RemoveAll();
	OnOrderListLoadData();
	m_wndPaymentList.DeleteAllItems();
} 
void CPaymentOrderAddDialog::OnPaymentListDblClick(){
	OnRemoveSelect();
} 
void CPaymentOrderAddDialog::OnPaymentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPaymentOrderAddDialog::OnPaymentListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 


long CPaymentOrderAddDialog::OnPaymentListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndPaymentList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	CString szOrders = _T("-1");
	for (int i =0; i < m_orders.GetCount(); i++)
	{
		szOrders.AppendFormat(_T(",%ld"), m_orders[i]);
	}
	szWhere.AppendFormat(_T(" and po_purchase_order_id in(%s) "), szOrders);

	szSQL.Format(_T(" SELECT po_purchase_order_id as order_id, po_orderno                AS orderno,") \
_T("   po_orderdate                   AS orderdate,") \
_T("   get_partnername(po_partner_id) AS partnername,") \
_T("   po_invoiceno                   AS invoiceno,") \
_T("   po_invoicedate                 AS invoicedate,") \
_T("   po_totalamount                 AS amount") \
_T(" FROM purchase_order") \
_T(" WHERE po_status='A' and po_payment='N'  ") \
_T(" AND po_org_id   ='%s' %s ") \
_T(" ORDER BY po_orderdate"), pMF->GetModuleID(), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentList.AddItems(
			rs.GetValue(_T("ORDER_ID")), 
			rs.GetValue(_T("ORDERNO")), 
			rs.GetValue(_T("ORDERDATE")), 
			rs.GetValue(_T("partnername")), 
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Amount")), 
			NULL);
		rs.MoveNext();
	}
	m_wndPaymentList.EndLoad(); 
	return nCount;
}
void CPaymentOrderAddDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	for (int i =0; i < m_orders.GetCount(); i++)
	{
		szSQL.Format(_T("UPDATE purchase_order SET po_refpayment_id=%ld ") \
		_T("WHERE po_purchase_order_id=%ld and po_payment='N' "), m_nID, m_orders[i]);
		pMF->ExecSQL(szSQL);

	}
	szSQL.Format(_T("PURCHASE_ORDER_PAYMENT(%ld, '%s','%s') "), m_nID, pMF->GetModuleID(), pMF->GetCurrentUser());
	int res = str2int(pMF->ExecDML(szSQL));
	if(res > 0)
		CGuiDialog::OnOK();

} 
void CPaymentOrderAddDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPaymentOrderAddDialog::OnAddPaymentOrderAddDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPaymentOrderAddDialog::OnEditPaymentOrderAddDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPaymentOrderAddDialog::OnDeletePaymentOrderAddDialog(){
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
 		OnCancelPaymentOrderAddDialog();
 	}
	return 0;
}
int CPaymentOrderAddDialog::OnSavePaymentOrderAddDialog(){
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
 		//OnPaymentOrderAddDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPaymentOrderAddDialog::OnCancelPaymentOrderAddDialog(){
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
int CPaymentOrderAddDialog::OnPaymentOrderAddDialogListLoadData(){
	return 0;
}
