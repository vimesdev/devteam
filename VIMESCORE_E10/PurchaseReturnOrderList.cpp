#include "PurchaseReturnOrderList.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialog.h"
#include "PurchaseReturnOrderDialog.h"
#include "FilterOption.h"
#include ".\purchasereturnorderlist.h"


/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderList *)pWnd)->OnSearchCheckValue();
} 
static void _OnOptionSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderList *pVw = (CPurchaseReturnOrderList *)pWnd;
	pVw->OnOptionSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseReturnOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnListDeleteItem();
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnListEditItem();
}

static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnListViewItem();
}

static void _OnViewSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderList *pVw = (CPurchaseReturnOrderList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderList *pVw = (CPurchaseReturnOrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderList *pVw = (CPurchaseReturnOrderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderList *pVw = (CPurchaseReturnOrderList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseReturnOrderList* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderList *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPurchaseReturnOrderList *)pWnd)->OnStockAddNew();
}*/
static int _OnAddPurchaseReturnOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnAddPurchaseReturnOrderList();
} 
static int _OnEditPurchaseReturnOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnEditPurchaseReturnOrderList();
} 
static int _OnDeletePurchaseReturnOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnDeletePurchaseReturnOrderList();
} 
static int _OnSavePurchaseReturnOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnSavePurchaseReturnOrderList();
} 
static int _OnCancelPurchaseReturnOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderList*)pWnd)->OnCancelPurchaseReturnOrderList();
} 
CPurchaseReturnOrderList::CPurchaseReturnOrderList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("POO");
	SetWindowName(_T("PurchaseReturnOrderList"));
}
CPurchaseReturnOrderList::~CPurchaseReturnOrderList(){
}
void CPurchaseReturnOrderList::OnCreateComponents(){
	if(m_szType == _T("PRO"))
		SetWindowName(_T("PurchaseReturnOrderList"));

	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
		m_wndQuoteList.Create(this, _T("Quote List"), 5, 95, 810, 585);
	m_wndFromDate.Create(this,95, 29, 195, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 390, 30, 615, 55);
	m_wndSearch.Create(this,620, 29, 775, 54);
	m_wndStockLabel.Create(this, _T("Stock"), 390, 60, 615, 85);
	m_wndStock.Create(this,620, 60, 775, 85);  
	m_wndOption.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndView.Create(this, _T("&View"), 475, 590, 555, 615);
	m_wndAdd.Create(this, _T("&Add"), 560, 590, 640, 615);
	m_wndEdit.Create(this, _T("&Edit"), 645, 590, 725, 615);
	m_wndDelete.Create(this, _T("&Delete"), 730, 590, 810, 615);
	m_wndList.Create(this,10, 120, 805, 580); 
}
void CPurchaseReturnOrderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndSearch.SetNotEmpty(true);

	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(3, _T("Approved Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Payment Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(5, _T("Payment Method"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(6, _T("Supplier Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(7, _T("Total Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(8, _T("Status"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Description"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("Created By"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(11, _T("Approved By"), CFMT_TEXT, 40);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndStock.InsertColumn(1, _T("Desc"), CFMT_TEXT, 250);

	m_nSearchID = 1;

}

void CPurchaseReturnOrderList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndOption.SetEvent(WE_CLICK, _OnOptionSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Purchase Return Order"));
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("View"), _OnListViewItemFnc,0, VK_F3);
	
	

	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseReturnOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseReturnOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseReturnOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseReturnOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseReturnOrderListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	//OnListLoadData();

}
void CPurchaseReturnOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CPurchaseReturnOrderList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CPurchaseReturnOrderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CPurchaseReturnOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();
	m_szStockKey.Empty();

}

int CPurchaseReturnOrderList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
			
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			break; 
 		}; 
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndOption.EnableWindow(TRUE);
		m_wndStock.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}

/*void CPurchaseReturnOrderList::OnFromDateChange(){
	
} */
/*void CPurchaseReturnOrderList::OnFromDateSetfocus(){
	
} */
/*void CPurchaseReturnOrderList::OnFromDateKillfocus(){
	
} */
int CPurchaseReturnOrderList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderList::OnToDateChange(){
	
} */
/*void CPurchaseReturnOrderList::OnToDateSetfocus(){
	
} */
/*void CPurchaseReturnOrderList::OnToDateKillfocus(){
	
} */
int CPurchaseReturnOrderList::OnToDateCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderList::OnSearchChange(){
	
} */
/*void CPurchaseReturnOrderList::OnSearchSetfocus(){
	
} */
/*void CPurchaseReturnOrderList::OnSearchKillfocus(){
	
} */
int CPurchaseReturnOrderList::OnSearchCheckValue(){
	OnListLoadData();

	return 1;
}
 
void CPurchaseReturnOrderList::OnOptionSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	OnListLoadData();
	return;
	CFilterOption *newPopup = new CFilterOption(this);
	CRect rect;
	m_wndOption.GetWindowRect(&rect);
	
	rect.left = rect.right - newPopup->GetWidth();
	rect.top = rect.bottom;
	rect.bottom = rect.top + newPopup->GetHeight();
	newPopup->ShowPopup(rect.left, rect.top, rect.Width(), rect.Height());

	

}
 
void CPurchaseReturnOrderList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

}
 
void CPurchaseReturnOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
 
int CPurchaseReturnOrderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseReturnOrderList();
	 return 0;
}

int CPurchaseReturnOrderList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddSelect();
	 return 0;
}
int CPurchaseReturnOrderList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditSelect();
	 return 0;
}

int CPurchaseReturnOrderList::OnListViewItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();
	 return 0;
}

long CPurchaseReturnOrderList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CString	szApprovedDate, szStatus,szPaymentDate;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and mt_org_id IN('GL','%s') "), pMF->GetModuleID());

	//Comment phần này lại. ko hiểu ai làm với mục đích gì
	//szWhere.AppendFormat(_T(" and (mt_department_id ='%s' OR mt_department_to_id='%s') "), pMF->GetDepartmentID(), pMF->GetDepartmentID());
	if (!m_szSearch.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(mt_orderno) LIKE lower(chr(37)||'%s'||chr(37))"), m_szSearch);

	if(!m_szStockKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mt_storage_id =%s "), m_szStockKey);

	szSQL.Format(_T(" SELECT mt_transaction_id, ") \
				_T(" 	mt_orderno,") \
				_T(" 	mt_orderdate,") \
				_T(" 	mt_approveddate,") \
				_T(" 	GET_PARTNERNAME(mt_partner_id) as mt_partnername, ") \
				_T(" 	mt_description, ") \
				_T(" 	mt_status, ") \
				//_T("	mt_totalamount, ")\//
				_T(" (select sum(mtl_qtydelivery*PRODUCT_VATPRICE) as total ") \
				_T(" from m_transactionline") \
				_T(" LEFT JOIN m_productitem_view ON (product_item_id=mtl_product_item_id)") \
				_T(" WHERE mtl_transaction_id = mt_transaction_id) as mt_totalamount,") \
				_T("	mt_createdby, ")\
				_T("	mt_approvedby approvedby, mt_payment_date, mt_payment,adpm_description") \
				_T("   FROM m_transaction") \
				_T("	LEFT JOIN ad_payment_method ON (adpm_payment_method_id= mt_payment_method) ") \
				_T(" WHERE mt_orderdate BETWEEN to_timestamp('%s 00:00:00', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" and mt_doctype='PRO' %s ") \
				_T(" ORDER BY mt_orderdate "), 
				m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);
//_msg(_T("%s"), szSQL);
//Notice(szSQL);
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("mt_status"), szStatus);

		rs.GetValue(_T("mt_approveddate"), szApprovedDate);
		if(szStatus != _T("A"))
			szApprovedDate.Empty();
		if(rs.GetValue(_T("mt_payment")) ==  _T("Y"))
		{
			rs.GetValue(_T("mt_payment_date"), szPaymentDate);
			szStatus = _T("P");
		}
		else
			szPaymentDate.Empty();
			


		m_wndList.AddItems(
			rs.GetValue(_T("mt_transaction_id")), 
			rs.GetValue(_T("mt_orderno")), 
			rs.GetValue(_T("mt_orderdate")), 
			szApprovedDate,
			szPaymentDate,
			rs.GetValue(_T("adpm_description")),
			rs.GetValue(_T("mt_partnername")), 
			rs.GetValue(_T("mt_totalamount")), 
			szStatus, 
			rs.GetValue(_T("mt_description")),      			
			rs.GetValue(_T("mt_createdby")), 
			rs.GetValue(_T("approvedby")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;
}

void CPurchaseReturnOrderList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	if(m_szType == _T("POO"))
	{
		CPurchaseOrderDialog dlg(pMF, VM_VIEW);
		
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
			
		}
	}
	else if(m_szType == _T("PRO"))
	{
		CPurchaseReturnOrderDialog dlg(pMF, VM_VIEW);
		
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
			
		}
	}
	Refresh();

	m_wndList.SetFocus();
}
 
void CPurchaseReturnOrderList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szType == _T("POO"))
	{
		CPurchaseOrderDialog dlg(pMF, VM_ADD);
		if(dlg.DoModal() == IDOK){
			
		}
	}
	else if(m_szType == _T("PRO"))
	{
		CPurchaseReturnOrderDialog dlg(pMF, VM_ADD);
		if(dlg.DoModal() == IDOK){
			
		}
	}
	Refresh();
}
 
void CPurchaseReturnOrderList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szType == _T("POO"))
	{
		CPurchaseOrderDialog dlg(pMF, VM_EDIT);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
		}
	}
	else if(m_szType == _T("PRO"))
	{
		CPurchaseReturnOrderDialog dlg(pMF, VM_EDIT);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
		}
	}
	Refresh();
}
 
void CPurchaseReturnOrderList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseReturnOrderList();
}
void CPurchaseReturnOrderList::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderList::OnStockSelendok(){
	 
}
/*void CPurchaseReturnOrderList::OnStockSetfocus(){
	
}*/
/*void CPurchaseReturnOrderList::OnStockKillfocus(){
	
}*/
long CPurchaseReturnOrderList::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_type ='A' "));
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey, szFilter);
//
//	CRecord rs(&pMF->m_db);
//	CString szSQL, szWhere;
//	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
//	 szWhere.Format(_T(" and id='%s' "), m_szStockKey
//};
//	m_wndStock.DeleteAllItems(); 
//	int nCount = 0;
//	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
//	nCount = rs.ExecSQL(szSQL);
//	while(!rs.IsEOF()){ 
//		m_wndStock.AddItems(
//			rs.GetValue(_T("id")), 
//			rs.GetValue(_T("name")), NULL);
//		rs.MoveNext();
//	}
//	return nCount;

}
/*void CPurchaseReturnOrderList::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
 
int CPurchaseReturnOrderList::OnAddPurchaseReturnOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPurchaseReturnOrderList::OnEditPurchaseReturnOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPurchaseReturnOrderList::OnDeletePurchaseReturnOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szClientID, szOrgID; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;

 	if(ShowMessageBox(_T("Do you want to delete invoice?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szClientID = m_wndList.GetItemText(nSel, 0);
	szOrgID = m_wndList.GetItemText(nSel, 10);
	
	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s')"), m_nID, pMF->GetCurrentUser() ); 
	
	//Notice(szSQL);

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		m_wndList.DeleteItem(nSel);
 	}
	else
	{
		ShowMessageBox(_T("Cannot delete invoice with current status"), MB_OK|MB_ICONWARNING);
	}
	return 0;
}

int CPurchaseReturnOrderList::OnSavePurchaseReturnOrderList(){
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
 		//OnPurchaseReturnOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CPurchaseReturnOrderList::OnCancelPurchaseReturnOrderList(){
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
 
int CPurchaseReturnOrderList::OnPurchaseReturnOrderListListLoadData(){
	return 0;
}


void CPurchaseReturnOrderList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);

}BEGIN_MESSAGE_MAP(CPurchaseReturnOrderList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPurchaseReturnOrderList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}
void CPurchaseReturnOrderList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndQuoteList, 100, 100);
	AddBottom(&m_wndView);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
}
