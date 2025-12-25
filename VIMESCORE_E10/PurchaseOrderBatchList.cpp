#include "PurchaseOrderBatchList.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchList *)pWnd)->OnSearchCheckValue();
} 
static void _OnOptionSelectFnc(CWnd *pWnd){
	CPurchaseOrderBatchList *pVw = (CPurchaseOrderBatchList *)pWnd;
	pVw->OnOptionSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderBatchList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderBatchList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnListDeleteItem();
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnListEditItem();
}

static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnListViewItem();
}

static void _OnViewSelectFnc(CWnd *pWnd){
	CPurchaseOrderBatchList *pVw = (CPurchaseOrderBatchList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderBatchList *pVw = (CPurchaseOrderBatchList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderBatchList *pVw = (CPurchaseOrderBatchList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderBatchList *pVw = (CPurchaseOrderBatchList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnAddPurchaseOrderList();
} 
static int _OnEditPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnEditPurchaseOrderList();
} 
static int _OnDeletePurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnDeletePurchaseOrderList();
} 
static int _OnSavePurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnSavePurchaseOrderList();
} 
static int _OnCancelPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchList*)pWnd)->OnCancelPurchaseOrderList();
} 
CPurchaseOrderBatchList::CPurchaseOrderBatchList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("POO");
	SetWindowName(_T("PurchaseOrderList"));
}
CPurchaseOrderBatchList::~CPurchaseOrderBatchList(){
}
void CPurchaseOrderBatchList::OnCreateComponents(){
	if(m_szType == _T("PRO"))
		SetWindowName(_T("PurchaseReturnOrderList"));

	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndQuoteList.Create(this, _T("Quote List"), 5, 65, 800, 570);
	m_wndFromDate.Create(this,95, 29, 195, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 390, 30, 615, 55);
//	m_wndSearch.SetButtonMode(BUTTON_FIND);
	m_wndSearch.Create(this,620, 30, 766, 55); 
	m_wndOption.Create(this, _T("@"), 771, 30, 796, 55);
	m_wndList.Create(this,10, 90, 795, 565); 
	m_wndView.Create(this, _T("&View"), 465, 575, 545, 600);
	m_wndAdd.Create(this, _T("&Add"), 550, 575, 630, 600);
	m_wndEdit.Create(this, _T("&Edit"), 635, 575, 715, 600);
	m_wndDelete.Create(this, _T("&Delete"), 720, 575, 800, 600);

}
void CPurchaseOrderBatchList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndSearch.SetNotEmpty(true);

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T("Batch ID"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(1, _T("Batch Date"), CFMT_DATE, 125);
	m_wndList.InsertColumn(2, _T("Warehouse"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(3, _T("Total Amount"), CFMT_MONEY, 100);
	m_nSearchID = 1;

}

void CPurchaseOrderBatchList::OnSetWindowEvents(){
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

	m_wndList.SetWindowText(_T("Purchase Order"));
	m_wndList.AddEvent(1, _T("View\tF3"), _OnListViewItemFnc,0, VK_F3);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("New Purchase Order"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Edit Purchase Order"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Delete Purchase Order"), _OnListDeleteItemFnc, 0);


	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	OnListLoadData();

}
void CPurchaseOrderBatchList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CPurchaseOrderBatchList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CPurchaseOrderBatchList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CPurchaseOrderBatchList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}

int CPurchaseOrderBatchList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
			
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			break; 
 		}; 
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndOption.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}

/*void CPurchaseOrderBatchList::OnFromDateChange(){
	
} */
/*void CPurchaseOrderBatchList::OnFromDateSetfocus(){
	
} */
/*void CPurchaseOrderBatchList::OnFromDateKillfocus(){
	
} */
int CPurchaseOrderBatchList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderBatchList::OnToDateChange(){
	
} */
/*void CPurchaseOrderBatchList::OnToDateSetfocus(){
	
} */
/*void CPurchaseOrderBatchList::OnToDateKillfocus(){
	
} */
int CPurchaseOrderBatchList::OnToDateCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderBatchList::OnSearchChange(){
	
} */
/*void CPurchaseOrderBatchList::OnSearchSetfocus(){
	
} */
/*void CPurchaseOrderBatchList::OnSearchKillfocus(){
	
} */
int CPurchaseOrderBatchList::OnSearchCheckValue(){
	OnListLoadData();

	return 1;
}
 
void CPurchaseOrderBatchList::OnOptionSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	OnListLoadData();

}
 
void CPurchaseOrderBatchList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

}
 
void CPurchaseOrderBatchList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
 
int CPurchaseOrderBatchList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderList();
	 return 0;
}

int CPurchaseOrderBatchList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddSelect();
	 return 0;
}
int CPurchaseOrderBatchList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditSelect();
	 return 0;
}

int CPurchaseOrderBatchList::OnListViewItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();
	 return 0;
}

long CPurchaseOrderBatchList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and trunc_date(po_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and po_orderno='%s' "), m_szSearch);

	}
	szWhere.AppendFormat(_T(" and po_doctype='%s' "), m_szType);
	
	szWhere.AppendFormat(_T(" and po_org_id IN('GL','%s') "), pMF->GetModuleID());
	
	szSQL.Format(_T("SELECT ") \
		_T("po_doctype as ordertype, ") \
		_T("po_purchase_order_id as orderid, ") \
		_T("po_orderno as orderno, ") \
		_T("po_client_id, ") \
		_T("po_org_id, po_user_id, ") \
		_T("po_orderdate as orderdate, ") \
		_T("po_approveddate as approveddate, ") \
		_T("po_partnerphone as telephone, ") \
		_T(" po_acctdate as acctdate, ") \
		_T("adp_name as partner, ") \
		_T("po_transactor as transactor, ") \
		_T("po_status as status, ") \
		_T("po_memo, po_totalamount as totalamount, po_exchangeamount as exchangeamount ") \
		_T(" FROM PURCHASE_ORDER ") \
		_T(" LEFT JOIN AD_PARTNER ON(adp_partner_id=po_partner_id) ") \
		_T("WHERE po_isactive='Y' %s ORDER BY po_purchase_order_id"), szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("orderid")),
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("AccDate")), 
			rs.GetValue(_T("ApprovedDate")), 
			rs.GetValue(_T("Partner")), 
			rs.GetValue(_T("TelePhone")), 
			rs.GetValue(_T("Currency")), 
			rs.GetValue(_T("totalamount")), 
			rs.GetValue(_T("exchangeamount")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("Memo")), 
			rs.GetValue(_T("ordertype")), 
			rs.GetValue(_T("po_client_id")),
			rs.GetValue(_T("po_org_id")),
			rs.GetValue(_T("po_user_id")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return 0;
}

void CPurchaseOrderBatchList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}

	CPurchaseOrderDialog dlg(pMF, VM_VIEW);
			
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
				
	}
	
	Refresh();
}
 
void CPurchaseOrderBatchList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		CPurchaseOrderDialog dlg(pMF, VM_ADD);
			if(dlg.DoModal() == IDOK){
				
			}
	Refresh();
}
 
void CPurchaseOrderBatchList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPurchaseOrderDialog dlg(pMF, VM_EDIT);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
	}
	Refresh();
}
 
void CPurchaseOrderBatchList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
}
 
int CPurchaseOrderBatchList::OnAddPurchaseOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPurchaseOrderBatchList::OnEditPurchaseOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPurchaseOrderBatchList::OnDeletePurchaseOrderList(){
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
	
	szSQL.Format(_T("PURCHASE_ORDER_DELETE(%ld, '%s', '%s')"), m_nID, szOrgID, pMF->GetCurrentUser() ); 

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

int CPurchaseOrderBatchList::OnSavePurchaseOrderList(){
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
 		//OnPurchaseOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CPurchaseOrderBatchList::OnCancelPurchaseOrderList(){
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
 
int CPurchaseOrderBatchList::OnPurchaseOrderListListLoadData(){
	return 0;
}


void CPurchaseOrderBatchList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);

}