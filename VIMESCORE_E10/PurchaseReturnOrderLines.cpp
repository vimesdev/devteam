#include "PurchaseReturnOrderLines.h"
#include "PurchaseReturnOrderDialog.h"
#include "PurchaseReturnOrderLineInput.h"
#include "MainFrame_E10.h"




static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLines*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLines*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseReturnOrderLines*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnListDeleteItem();
} 
static int _OnAddPurchaseReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnAddPurchaseReturnOrderLines();
} 
static int _OnEditPurchaseReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnEditPurchaseReturnOrderLines();
} 
static int _OnDeletePurchaseReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnDeletePurchaseReturnOrderLines();
} 
static int _OnSavePurchaseReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnSavePurchaseReturnOrderLines();
} 
static int _OnCancelPurchaseReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLines*)pWnd)->OnCancelPurchaseReturnOrderLines();
} 

CPurchaseReturnOrderLines::CPurchaseReturnOrderLines(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 345;
	SetDefaultValues();
	m_pWndOrder = NULL;
	SetWindowName(_T("PurchaseReturnOrderLines"));
}
CPurchaseReturnOrderLines::~CPurchaseReturnOrderLines(){
}
void CPurchaseReturnOrderLines::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this, 5, 5, 990, 345); 
	m_nStorageID = -1;
	m_nTaxID = 0;
}
void CPurchaseReturnOrderLines::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //m_transactionline_id
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(5, _T("Lot No"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(7, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Manufacture"), CFMT_TEXT, 150);

}
void CPurchaseReturnOrderLines::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.AddEvent(1, _T("Add Line"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
//	m_wndList.AddEvent(2, _T("Edit Line"), _OnListEditItemFnc);
//	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete Line"), _OnListDeleteItemFnc, 0);

/*
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseReturnOrderLinesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseReturnOrderLinesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseReturnOrderLinesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseReturnOrderLinesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseReturnOrderLinesFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CPurchaseReturnOrderLines::OnDoDataExchange(CDataExchange* pDX){

}
void CPurchaseReturnOrderLines::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseReturnOrderLines::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseReturnOrderLines::SetDefaultValues(){


}
int CPurchaseReturnOrderLines::SetMode(int nMode){
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
void CPurchaseReturnOrderLines::OnListDblClick(){
	
} 
void CPurchaseReturnOrderLines::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderLine = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}

int CPurchaseReturnOrderLines::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetOrderStatus() != _T("O"))
		return -1;
	CPurchaseReturnOrderDialog* pPO = (CPurchaseReturnOrderDialog*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return 0;

	CPurchaseReturnOrderLineInput *newPopup = new CPurchaseReturnOrderLineInput(this, VM_ADD);
	newPopup->m_nOrderID = m_nOrderID;
	newPopup->m_nStorageID = m_nStorageID;
	newPopup->m_pWndOrder = pPO;
	newPopup->ShowPopup(&m_wndList);
	return 0;
}
int CPurchaseReturnOrderLines::OnListEditItem(){
	return 0;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetOrderStatus() != _T("O"))
		return -1;


	CPurchaseReturnOrderDialog* pPO = (CPurchaseReturnOrderDialog*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return 0;

	CPurchaseReturnOrderLineInput *newPopup = new CPurchaseReturnOrderLineInput(this, VM_EDIT);
	newPopup->m_nOrderID = m_nOrderID;
	newPopup->m_nStorageID = m_nStorageID;
	newPopup->m_pWndOrder = pPO;
	newPopup->ShowPopup(&m_wndList);
	return 0;
}


int CPurchaseReturnOrderLines::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	OnDeletePurchaseReturnOrderLines();
	 return 0;
} 
long CPurchaseReturnOrderLines::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT") \
_T("   mtl_transactionline_id as orderline_id,") \
_T("   product_code,") \
_T("   product_name,") \
_T("   GET_UOMNAME(product_purchase_uomid) as uomname,") \
_T("   mtl_storage_id AS storageid,") \
_T("   mtl_qtyorder   AS qtyorder,") \
_T("   product_taxprice as unitprice,") \
_T("   mtl_qtyorder*product_taxprice AS amount,") \
_T("   product_lotno as lotno,") \
_T("   product_expdate as expdate,") \
_T("   product_manufacturename AS mfgname") \
_T(" FROM") \
_T("   m_transactionline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON") \
_T("   product_item_id =mtl_product_item_id") \
_T(" WHERE") \
_T("   mtl_transaction_id=%ld") \
_T(" ORDER BY") \
_T("   mtl_line,") \
_T("   product_id,") \
_T("   product_unitprice"), m_nOrderID);
//Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("orderline_id")), 
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("uomname")), 
			rs.GetValue(_T("expdate")), 
			rs.GetValue(_T("lotno")), 
			rs.GetValue(_T("qtyorder")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("mfgname")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
int CPurchaseReturnOrderLines::OnAddPurchaseReturnOrderLines(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseReturnOrderLines::OnEditPurchaseReturnOrderLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseReturnOrderLines::OnDeletePurchaseReturnOrderLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;

	if(GetOrderStatus() != _T("O"))
		return -1;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	
	m_nOrderLine = str2long(m_wndList.GetItemText(nSel, 0));


 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();

	CPurchaseReturnOrderDialog* pPO = (CPurchaseReturnOrderDialog*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return 0;


	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("M_TRANSACTIONLINE_DELETE(%ld,%ld, '%s','%s') "), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
 		m_wndList.DeleteItem(nSel);
		((CPurchaseReturnOrderDialog*)m_pWndOrder)->RecalcAmount();
 	}
	else
	{
		ShowMessageBox(_T("Can not delete item"));
	}
	return 0;
}
int CPurchaseReturnOrderLines::OnSavePurchaseReturnOrderLines(){
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
 		//OnPurchaseReturnOrderLinesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseReturnOrderLines::OnCancelPurchaseReturnOrderLines(){
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
int CPurchaseReturnOrderLines::OnPurchaseReturnOrderLinesListLoadData(){
	return 0;
}

void CPurchaseReturnOrderLines::Refresh(long nOrderID){
	m_nOrderID = nOrderID;
	if(m_nOrderID < 0)
	{
		m_wndList.DeleteAllItems();
		return;
	}
	OnListLoadData();
	((CPurchaseReturnOrderDialog*)m_pWndOrder)->RecalcAmount();


}


CString CPurchaseReturnOrderLines::GetOrderStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szStatus;
	szStatus.Empty();

	szSQL.Format(_T("SELECT mt_status FROM m_transaction WHERE mt_transaction_id=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("mt_status"), szStatus);
	return szStatus;
}
