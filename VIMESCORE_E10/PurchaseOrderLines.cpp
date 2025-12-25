#include "PurchaseOrderLines.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialog.h"
#include "PurchaseOrderLineInput.h"


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLines*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderLines*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderLines*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnListDeleteItem();
} 
static int _OnAddPurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnAddPurchaseOrderLines();
} 
static int _OnEditPurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnEditPurchaseOrderLines();
} 
static int _OnDeletePurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnDeletePurchaseOrderLines();
} 
static int _OnSavePurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnSavePurchaseOrderLines();
} 
static int _OnCancelPurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnCancelPurchaseOrderLines();
} 
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLines*)pWnd)->OnUnitPriceCheckValue();
} 
CPurchaseOrderLines::CPurchaseOrderLines(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 200;
	SetDefaultValues();
	m_pWndOrder = NULL;
	SetWindowName(_T("PurchaseOrderLines"));
}
CPurchaseOrderLines::~CPurchaseOrderLines(){
}
void CPurchaseOrderLines::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,6, 5, 990, 200); 
	m_nStorageID = -1;
	m_nTaxID = 0;
}
void CPurchaseOrderLines::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //purchase_orderline_id
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Storage ID"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(5, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Net Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("% Tax"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(9, _T("Tax Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(10, _T("Total Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(11, _T("Lot No"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(12, _T("Exp Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(13, _T("Manufacture"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(14, _T("tax_id"), CFMT_TEXT, 0);
}
void CPurchaseOrderLines::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderLinesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderLinesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderLinesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderLinesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderLinesFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	//if (pMF->CheckPermission(_T("0.0")))
	{
		m_wndList.SetEditLabel(6, GUI_NUMBERCTRL);
		CGuiNumberCtrl* pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(6);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	}
}
void CPurchaseOrderLines::OnDoDataExchange(CDataExchange* pDX){

}
void CPurchaseOrderLines::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderLines::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderLines::SetDefaultValues(){


}
int CPurchaseOrderLines::SetMode(int nMode){
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
void CPurchaseOrderLines::OnListDblClick(){
	
} 
void CPurchaseOrderLines::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderLine = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nStorageID = str2long(m_wndList.GetItemText(nNewItem, 4));
	m_nTaxID = str2long(m_wndList.GetItemText(nNewItem, 14));
	SetMode(VM_VIEW);
}

int CPurchaseOrderLines::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;
	if(GetOrderStatus() != _T("O"))
		return -1;

	CPurchaseOrderDialog* pPO = (CPurchaseOrderDialog*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return 0;

	GetWindowRect(&rect);
	CPurchaseOrderLineInput dlg(this, VM_ADD, rect.left, rect.bottom+10);
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_nStorageID = m_nStorageID;

	dlg.m_szWarehouseKey.Format(_T("%d"), m_nStorageID);
	dlg.m_nTaxID = m_nTaxID;
		
	if(dlg.DoModal() == IDOK){

	}

	return 0;
}
int CPurchaseOrderLines::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetOrderStatus() != _T("O"))
		return -1;


	CPurchaseOrderDialog* pPO = (CPurchaseOrderDialog*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return 0;

	CRect rect;
	GetWindowRect(&rect);
	CPurchaseOrderLineInput dlg(this, VM_EDIT, rect.left, rect.bottom+10);
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_nOrderLine = m_nOrderLine;
	dlg.m_nStorageID = m_nStorageID;
	dlg.m_nTaxID = m_nTaxID;
	dlg.m_szWarehouseKey.Format(_T("%d"), m_nStorageID);
	if(dlg.DoModal() == IDOK){
		((CPurchaseOrderDialog*) m_pWndOrder)->RecalcAmount();
	}
	return 0;
}


int CPurchaseOrderLines::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	OnDeletePurchaseOrderLines();
	 return 0;
} 
long CPurchaseOrderLines::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT pol_purchase_orderline_id, ") \
_T("   product_code,") \
_T("   product_name,") \
_T("   GET_UOMNAME(product_purchase_uomid) as product_purchase_uomname,") \
_T("   pol_storage_id AS pol_storageid,") \
_T("   pol_qtyorder  AS pol_qtyorder,") \
_T("   pol_unitprice,") \
_T("   pol_netamount,") \
_T("   pol_tax_id, ") \
_T("   GET_TAXRATE(pol_tax_id)         AS pol_taxrate,") \
_T("   pol_taxamount,") \
_T("   pol_totalamount,") \
_T("   pol_lotno,") \
_T("   pol_expdate,") \
_T("   GET_MANUFACTURENAME(pol_manufacture_id) AS pol_mfgname") \
_T(" FROM purchase_orderline") \
_T(" LEFT JOIN m_product_view") \
_T(" ON(product_id              =pol_product_id)") \
_T(" WHERE pol_purchase_order_id=%ld") \
_T(" ORDER BY pol_line,") \
_T("   product_id,") \
_T("   product_unitprice"), m_nOrderID);
//Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("pol_purchase_orderline_id")), 
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_purchase_uomname")), 
			rs.GetValue(_T("pol_storageid")), 
			rs.GetValue(_T("pol_qtyorder")), 
			rs.GetValue(_T("pol_unitprice")), 
			rs.GetValue(_T("pol_netamount")), 
			rs.GetValue(_T("pol_taxrate")), 
			rs.GetValue(_T("pol_taxamount")), 
			rs.GetValue(_T("pol_totalamount")), 
			rs.GetValue(_T("pol_lotno")), 
			rs.GetValue(_T("pol_expdate")), 
			rs.GetValue(_T("pol_mfgname")), 
			rs.GetValue(_T("pol_tax_id")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
int CPurchaseOrderLines::OnAddPurchaseOrderLines(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderLines::OnEditPurchaseOrderLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderLines::OnDeletePurchaseOrderLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;

	if(GetOrderStatus() != _T("O"))
		return -1;



 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();

	CPurchaseOrderDialog* pPO = (CPurchaseOrderDialog*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return 0;


	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("PURCHASE_ORDERLINE_DELETE(%ld,%ld, '%s','%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );

//Notice(szSQL);

 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
 		SetMode(VM_VIEW);
		int nSel = m_wndList.GetCurSel();
		m_wndList.DeleteItem(nSel);
		m_wndList.SetCurSel(nSel-1);
		
		((CPurchaseOrderDialog*)m_pWndOrder)->RecalcAmount();
 	}
	else
	{
		ShowMessageBox(_T("Can not delete item"));
	}
	return 0;
}
int CPurchaseOrderLines::OnSavePurchaseOrderLines(){
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
 		//OnPurchaseOrderLinesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderLines::OnCancelPurchaseOrderLines(){
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
int CPurchaseOrderLines::OnPurchaseOrderLinesListLoadData(){
	return 0;
}

void CPurchaseOrderLines::Refresh(long nOrderID){
	m_nOrderID = nOrderID;
	if(m_nOrderID < 0)
	{
		m_wndList.DeleteAllItems();
		return;

	}
	OnListLoadData();
	((CPurchaseOrderDialog*)m_pWndOrder)->RecalcAmount();


}


CString CPurchaseOrderLines::GetOrderStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szStatus;

	szSQL.Format(_T("SELECT po_status FROM purchase_order WHERE po_purchase_order_id=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("po_status"), szStatus);
	return szStatus;
}

int CPurchaseOrderLines::OnUnitPriceCheckValue(){
	
	return 0;
}

BOOL CPurchaseOrderLines::PreTranslateMessage(MSG* pMsg){
	if (pMsg->hwnd == m_wndList.GetSafeHwnd())
		if (pMsg->message == WM_KEYDOWN)
			if (pMsg->wParam == VK_F2)
				AfxMessageBox(_T("X"));

	return CGuiView::PreTranslateMessage(pMsg);
}