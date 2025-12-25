#include "StorageReturnOrderLines.h"
#include "MainFrame_E10.h"
#include "StorageReturnOrderLineInput.h"
#include "StorageReturnOrderLineInput2.h"
#include "StorageReturnOrderDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLines*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageReturnOrderLines*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageReturnOrderLines*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnListDeleteItem();
} 
static int _OnAddStorageReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnAddStorageReturnOrderLines();
} 
static int _OnEditStorageReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnEditStorageReturnOrderLines();
} 
static int _OnDeleteStorageReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnDeleteStorageReturnOrderLines();
} 
static int _OnSaveStorageReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnSaveStorageReturnOrderLines();
} 
static int _OnCancelStorageReturnOrderLinesFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLines*)pWnd)->OnCancelStorageReturnOrderLines();
} 
CStorageReturnOrderLines::CStorageReturnOrderLines(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 350;
	SetDefaultValues();
	SetWindowName(_T("StorageReturnOrderLines"));
}
CStorageReturnOrderLines::~CStorageReturnOrderLines(){
}
void CStorageReturnOrderLines::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,5, 5, 990, 350); 

}
void CStorageReturnOrderLines::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowName(_T("StorageReturnOrderLines"));

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transactionline_id
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(5, _T("Lot No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Manufacture"), CFMT_TEXT, 150);

}
void CStorageReturnOrderLines::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddStorageReturnOrderLinesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditStorageReturnOrderLinesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteStorageReturnOrderLinesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveStorageReturnOrderLinesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelStorageReturnOrderLinesFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CStorageReturnOrderLines::OnDoDataExchange(CDataExchange* pDX){

}
void CStorageReturnOrderLines::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageReturnOrderLines::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageReturnOrderLines::SetDefaultValues(){


}
int CStorageReturnOrderLines::SetMode(int nMode){
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
void CStorageReturnOrderLines::OnListDblClick(){
	
} 
void CStorageReturnOrderLines::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderLine = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}

int CStorageReturnOrderLines::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CStorageReturnOrderDialog* pPO = (CStorageReturnOrderDialog*) m_pWndOrder;
	if(pPO && !pPO->IsAllowEdit())
		return 0;


	if(pPO->m_szTransactionTypeKey == _T("DRO"))
	{
		CStorageReturnOrderLineInput* newPopup = new CStorageReturnOrderLineInput(this, VM_ADD);
		newPopup->m_nOrderID = m_nOrderID;
		newPopup->m_nOrderLine = m_nOrderLine;
		newPopup->m_nStorageID = m_nStorageID;
		newPopup->m_nStorageToID = m_nStorageToID;
		newPopup->m_szDepartmentID = pPO->m_szDepartmentKey;
		
		newPopup->ShowPopup(&m_wndList);
	}
	else
	{
		CStorageReturnOrderLineInput2* newPopup = new CStorageReturnOrderLineInput2(this, VM_ADD);
		newPopup->m_nOrderID = m_nOrderID;
		newPopup->m_nOrderLine = m_nOrderLine;
		newPopup->m_nStorageID = m_nStorageID;
		newPopup->ShowPopup(&m_wndList);
	}
	return 0;
}
int CStorageReturnOrderLines::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;

	CStorageReturnOrderDialog* pPO = (CStorageReturnOrderDialog*) m_pWndOrder;
	if(pPO && !pPO->IsAllowEdit())
		return 0;

	if(pPO->m_szTransactionTypeKey == _T("DRO"))
	{
		CStorageReturnOrderLineInput* newPopup = new CStorageReturnOrderLineInput(this, VM_EDIT);
		newPopup->m_nStorageID = m_nStorageID;
		newPopup->m_nStorageToID = m_nStorageToID;
		newPopup->m_nOrderID = m_nOrderID;
		newPopup->m_nOrderLine = m_nOrderLine;
		newPopup->m_szDepartmentID = pPO->m_szDepartmentKey;

		newPopup->ShowPopup(&m_wndList);
	}
	else
	{
		CStorageReturnOrderLineInput2* newPopup = new CStorageReturnOrderLineInput2(this, VM_EDIT);
		newPopup->m_nOrderID = m_nOrderID;
		newPopup->m_nOrderLine = m_nOrderLine;
		newPopup->m_nStorageID = m_nStorageID;		
		newPopup->ShowPopup(&m_wndList);
	}
	return 0;
}


int CStorageReturnOrderLines::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageReturnOrderLines();
	 return 0;
} 
long CStorageReturnOrderLines::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT mtl_transactionline_id, ") \
_T("   product_code,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   mtl_qtyorder  AS product_qtyorder,") \
_T("   DECODE(0, mtl_saleprice, mtl_taxprice, mtl_saleprice) mtl_saleprice,") \
_T("   mtl_qtyorder*DECODE(0, mtl_saleprice, mtl_taxprice, mtl_saleprice) AS product_amount,") \
_T("   product_lotno,") \
_T("   product_expdate,") \
_T("   product_manufacturename ") \
_T(" FROM m_transactionline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id              =mtl_product_item_id)") \
_T(" WHERE mtl_transaction_id=%ld and mtl_product_item_id > 0 ") \
_T(" ORDER BY product_uomindex, product_name, product_uomname, product_expdate "), m_nOrderID);
//Notice(szSQL);

	double nAmount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("mtl_transactionline_id")), 
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("Product_expdate")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("mtl_saleprice")), 
			rs.GetValue(_T("product_qtyorder")), 
			rs.GetValue(_T("product_amount")), 
			rs.GetValue(_T("product_manufacturename")), 
			NULL);
		nAmount += str2double(rs.GetValue(_T("product_amount")));
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	CStorageReturnOrderDialog* pPO = (CStorageReturnOrderDialog*) m_pWndOrder;
	pPO->m_nTotalLines = m_wndList.GetItemCount();
	pPO->m_nTotalAmount = nAmount;
	pPO->UpdateData(FALSE);
	return nCount;
	return 0;
}
int CStorageReturnOrderLines::OnAddStorageReturnOrderLines(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageReturnOrderLines::OnEditStorageReturnOrderLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageReturnOrderLines::OnDeleteStorageReturnOrderLines(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CStorageReturnOrderDialog* pPO = (CStorageReturnOrderDialog*) m_pWndOrder;
	if(pPO && !pPO->IsAllowEdit())
		return 0;


 	int nSel = m_wndList.GetCurSel();

 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("M_TRANSACTIONLINE_DELETE(%ld,%ld, '%s','%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );
//Notice(szSQL);

 	int ret = str2int(pMF->ExecDML(szSQL));
	
 	if(ret >= 0){
 		SetMode(VM_VIEW);
		m_wndList.DeleteItem(nSel);
		m_wndList.SetCurSel(nSel-1);
 	}
	return 0;
}
int CStorageReturnOrderLines::OnSaveStorageReturnOrderLines(){
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
 		//OnStorageReturnOrderLinesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageReturnOrderLines::OnCancelStorageReturnOrderLines(){
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
int CStorageReturnOrderLines::OnStorageReturnOrderLinesListLoadData(){
	return 0;
}

void CStorageReturnOrderLines::Refresh(long nOrderID){
	m_nOrderID = nOrderID;
	OnListLoadData();
}

CString CStorageReturnOrderLines::GetOrderStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szStatus;

	szSQL.Format(_T("SELECT mt_status FROM m_transaction WHERE mt_transaction_id=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("mt_status"), szStatus);
	return szStatus;
}