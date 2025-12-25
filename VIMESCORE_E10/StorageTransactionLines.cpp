#include "StorageTransactionLines.h"
#include "MainFrame_E10.h"
#include "StorageTransactionLineInput.h"
#include "StorageTransactionLineInputEx.h"
#include "StorageTransactionDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageTransactionLines*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageTransactionLines*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageTransactionLines*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnListAddItem();
}
static int _OnPreviewOrderDeviveryDetailFnc(CWnd *pWnd){
	return ((CStorageTransactionLines*)pWnd)->OnPreviewDeliveryDetail();
}

static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnListDeleteItem();
} 
static int _OnAddStorageTransactionLinesFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnAddStorageTransactionLines();
} 
static int _OnEditStorageTransactionLinesFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnEditStorageTransactionLines();
} 
static int _OnDeleteStorageTransactionLinesFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnDeleteStorageTransactionLines();
} 
static int _OnSaveStorageTransactionLinesFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnSaveStorageTransactionLines();
} 
static int _OnCancelStorageTransactionLinesFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnCancelStorageTransactionLines();
}
static int _OnListDeleteAllItemFnc(CWnd *pWnd){
	 return ((CStorageTransactionLines*)pWnd)->OnListDeleteAllItem();
}
CStorageTransactionLines::CStorageTransactionLines(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 345;
	SetDefaultValues();
	SetWindowName(_T("StorageTransactionLines"));
}
CStorageTransactionLines::~CStorageTransactionLines(){
}
void CStorageTransactionLines::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,5, 5, 990, 345);
}
void CStorageTransactionLines::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CStorageTransactionDialog* pOrder = (CStorageTransactionDialog*) m_pWndOrder;

	SetWindowName(_T("StorageTransactionLines"));

	m_wndList.SetAutoIndex(true);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transactionline_id
	m_wndList.InsertColumn(1, _T("Index"), CFMT_TEXT, 40);
	if(pOrder->m_szTransactionTypeKey == _T("DDO"))
	{
		m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 250);
		m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT|CFMT_CENTER, 85);
		m_wndList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 80);
		m_wndList.InsertColumn(5, _T("Lot No"), CFMT_TEXT, 80);
		m_wndList.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(7, _T("Soldier"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(8, _T("POLICY_"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(9, _T("SoldierIns"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(10, _T("OtherIns"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(11, _T("Service"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(12, _T("Other"), CFMT_MONEY, 0);
		m_wndList.InsertColumn(13, _T("Quantity"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(14, _T("Amount"), CFMT_MONEY, 90);
		m_wndList.InsertColumn(15, _T("Manufacture"), CFMT_TEXT, 150);
		m_wndList.InsertColumn(16, _T("ProductID"), CFMT_TEXT, 0);
		m_wndList.InsertColumn(17, _T("Product_ITEM_ID"), CFMT_TEXT, 0);
		m_wndList.GetHeaderControl()->SetItemHeight(3);
		
	}
	else
	{
		m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 250);
		m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT|CFMT_CENTER, 65);
		m_wndList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 80);
		m_wndList.InsertColumn(5, _T("Lot No"), CFMT_TEXT, 80);
		m_wndList.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 70);
		m_wndList.InsertColumn(7, _T("Soldier"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(8, _T("POLICY_"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(9, _T("SoldierIns"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(10, _T("OtherIns"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(11, _T("Service"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(12, _T("Other"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(13, _T("Total"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(14, _T("Amount"), CFMT_MONEY, 90);
		m_wndList.InsertColumn(15, _T("Manufacture"), CFMT_TEXT, 200);
		m_wndList.InsertColumn(16, _T("ProductID"), CFMT_TEXT, 0);
		m_wndList.InsertColumn(17, _T("Product_ITEM_ID"), CFMT_TEXT, 0);
		m_wndList.GetHeaderControl()->SetItemHeight(3);
		m_wndList.GetHeaderControl()->MergeCell(_T("Quantity"), 0, 7, 1, 13);
	}
	m_wndList.SetSortHeader(false);
}
void CStorageTransactionLines::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);


	m_wndList.AddEvent(1, _T("View Detail"), _OnPreviewOrderDeviveryDetailFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Add Line"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Replate Line"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Delete Line"), _OnListDeleteItemFnc, 0);	
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Delete All Line"), _OnListDeleteAllItemFnc, 0);

/*
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddStorageTransactionLinesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditStorageTransactionLinesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteStorageTransactionLinesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveStorageTransactionLinesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelStorageTransactionLinesFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_VIEW);

}
void CStorageTransactionLines::OnDoDataExchange(CDataExchange* pDX){

}
void CStorageTransactionLines::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageTransactionLines::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageTransactionLines::SetDefaultValues(){


}
int CStorageTransactionLines::SetMode(int nMode){
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
#include "HMSReportForms/PrintForms.h"
int CStorageTransactionLines::OnPreviewDeliveryDetail(){
	int nSel = m_wndList.GetCurSel();
	if( nSel < 0 )
		return -1;

	CPrintForms printer;
	long  nProductItem_id;
	long nProduct_ID;
	CString szOrderNo ;
	szOrderNo.Format(_T("%ld"), m_nOrderID);
	nProduct_ID = str2long(m_wndList.GetItemText(nSel, 16));
	nProductItem_id = str2long(m_wndList.GetItemText(nSel, 17));
	printer.OnPrintDailyViewDetail(_T(""), _T(""), szOrderNo, nProduct_ID, nProductItem_id, _T("'D','M','B'"), m_nStorageID);
	return 0;
}
void CStorageTransactionLines::OnListDblClick(){
	OnPreviewDeliveryDetail();
} 
void CStorageTransactionLines::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderLine = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}

int CStorageTransactionLines::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;

	CStorageTransactionDialog* pPO = (CStorageTransactionDialog*) m_pWndOrder;
	if(pPO && !pPO->IsAllowEdit())
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}

	if(pPO->m_szTransactionTypeKey == _T("DPO"))
	{
		CStorageTransactionLineInput* newPopup = new CStorageTransactionLineInput(this, VM_ADD);
		newPopup->m_pWndOrder = m_pWndOrder;
		newPopup->m_nOrderID = m_nOrderID;
		newPopup->m_nOrderLine = m_nOrderLine;
		newPopup->m_nStorageID = m_nStorageID;
		newPopup->m_nStorageToID = m_nStorageToID;
		newPopup->ShowPopup(&m_wndList);
	}
	else if(pPO->m_szTransactionTypeKey == _T("DDO"))
	{
		CStorageTransactionLineInputEx* newPopup = new CStorageTransactionLineInputEx(this, VM_ADD);
		newPopup->m_nOrderID = m_nOrderID;
		newPopup->m_nOrderLine = m_nOrderLine;
		newPopup->m_nStorageID = m_nStorageID;
		newPopup->m_nStorageToID = m_nStorageToID;
		newPopup->ShowPopup(&m_wndList);
	}
	m_wndList.EnsureVisible(m_wndList.GetItemCount()-1, true);
	return 0;
}
int CStorageTransactionLines::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	CStorageTransactionDialog* pPO = (CStorageTransactionDialog*) m_pWndOrder;
	if(pPO && !pPO->IsAllowEdit())
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}

	m_nOrderLine = str2long(m_wndList.GetItemText(nSel, 0));
	GetWindowRect(&rect);
	CStorageTransactionLineInput* newPopup = new CStorageTransactionLineInput(this, VM_EDIT);
	newPopup->m_nOrderID = m_nOrderID;
	newPopup->m_nOrderLine = m_nOrderLine;
	newPopup->m_nStorageID = m_nStorageID;
	newPopup->ShowPopup(&m_wndList);
	m_wndList.EnsureVisible(m_wndList.GetItemCount()-1, true);
	return 0;
}


int CStorageTransactionLines::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageTransactionLines();
	 return 0;
}

int CStorageTransactionLines::OnListDeleteAllItem()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageTransactionAllLines();
	 return 0;
} 

long CStorageTransactionLines::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT mtl_transactionline_id,") \
	_T("   product_id,") \
	_T("   product_item_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   mtl_saleprice,") \
	_T("   product_manufacturename,") \
	_T("   SUM(mtl_qtysold)     AS qtysold,") \
	_T("   SUM(mtl_qtypolicy)   AS qtypolicy,") \
	_T("   SUM(mtl_qtysoldins)  AS qtysoldins,") \
	_T("   SUM(mtl_qtyotherins) AS qtyotherins,") \
	_T("   SUM(mtl_qtyservice)  AS qtyservice,") \
	_T("   SUM(mtl_qtyother)    AS qtyother,") \
	_T("   SUM(mtl_qtyorder)    AS qtyorder, ") \
	_T("   SUM(mtl_qtydelivery) AS qtydelivery, ") \
	_T("   SUM(mtl_qtyorder*mtl_saleprice)    AS amount ") \
	_T(" FROM m_transactionline") \
	_T(" LEFT JOIN m_productitem_view") \
	_T(" ON(mtl_product_item_id   =product_item_id)") \
	_T(" WHERE mtl_transaction_id=%ld ") \
	_T(" AND mtl_transactionline_id      > 0") \
	_T(" GROUP BY mtl_transactionline_id, product_uomindex,") \
	_T("   product_id,") \
	_T("   product_item_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   mtl_saleprice,") \
	_T("   product_manufacturename ") \
	_T(" ORDER BY product_uomindex, product_name, product_uomname "), m_nOrderID);
	
	//Notice(szSQL);

	
	nCount = rs.ExecSQL(szSQL);
	double nAmount=0;
	int nItem = 1;
	CString tmpStr;
	float nQtyDelivery, nQtyOrder;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nItem++);
		rs.GetValue(_T("qtyorder"), nQtyOrder);
		rs.GetValue(_T("qtydelivery"), nQtyDelivery);
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("mtl_transactionline_id")), 
			tmpStr, 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("Product_expdate")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("mtl_saleprice")), 
			rs.GetValue(_T("qtysold")), 
			rs.GetValue(_T("qtypolicy")), 
			rs.GetValue(_T("qtysoldins")), 
			rs.GetValue(_T("qtyotherins")), 
			rs.GetValue(_T("qtyservice")), 
			rs.GetValue(_T("qtyother")), 
			rs.GetValue(_T("qtyorder")), 
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("product_manufacturename")), 
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_item_id")), 
			NULL);

		nAmount += str2double(rs.GetValue(_T("amount")));
		
		if(nQtyOrder != nQtyDelivery)
		{
			m_wndList.SetItemBkColor(nItem, RGB(255, 128, 64), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255,255), FALSE);

		}
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 

	CStorageTransactionDialog* pPO = (CStorageTransactionDialog*) m_pWndOrder;
	pPO->m_nTotalLines = m_wndList.GetItemCount();
	pPO->m_nTotalAmount = nAmount;
	pPO->UpdateData(FALSE);
	return nCount;
	return 0;
}
int CStorageTransactionLines::OnAddStorageTransactionLines(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageTransactionLines::OnEditStorageTransactionLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageTransactionLines::OnDeleteStorageTransactionLines(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return -1;

	CStorageTransactionDialog* pPO = (CStorageTransactionDialog*) m_pWndOrder;
	if(pPO && !pPO->IsAllowEdit())
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}
 	
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	
	m_nOrderLine = str2long(m_wndList.GetItemText(nSel, 0));
	szSQL.Format(_T("M_TRANSACTION_DELLINE(%ld,%ld, '%s', '%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );


 	int ret = str2int(pMF->ExecDML(szSQL));
	
	if(ret >= 0){
 		SetMode(VM_VIEW);
		int nSel = m_wndList.GetCurSel();
		m_wndList.DeleteItem(nSel);
		m_wndList.SetCurSel(nSel-1);
 	}
	return 0;
}

int CStorageTransactionLines::OnDeleteStorageTransactionAllLines()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("HC.100.01")))
	{
		ShowMessageBox(_T("Vui lòng cấp quyền HC.100.01 để sử dụng chức năng này!"), 0);
		return -1;
	}

	if (m_nStorageID != 1500)
	{
		ShowMessageBox(_T("Chỉ được thao tác chức năng này với kho 1500"), 0);
		return -2;
	}

	int ret = ShowMessageBox(_T("Tác vụ này sẽ xóa toàn bộ hàng được chọn. Bạn chắc chắn chứ?"), MB_YESNO);
	if (ret == IDNO)
	{
		return -3;
	}
 
	long m_nOrderLine = 0;
	CString szSQL;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			m_nOrderLine = str2long(m_wndList.GetItemText(i, 0));
			
			szSQL.Format(_T("M_TRANSACTION_DELLINE(%ld,%ld, '%s', '%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );
			int nRet = str2int(pMF->ExecDML(szSQL));
			//_msg(_T("%s"), szSQL);

		}		
	}
	
	OnListLoadData();
	return 0;
}
int CStorageTransactionLines::OnSaveStorageTransactionLines(){
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
 		//OnStorageTransactionLinesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageTransactionLines::OnCancelStorageTransactionLines(){
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
int CStorageTransactionLines::OnStorageTransactionLinesListLoadData(){
	return 0;
}

void CStorageTransactionLines::Refresh(long nOrderID){
	m_nOrderID = nOrderID;
	OnListLoadData();
}

CString CStorageTransactionLines::GetOrderStatus(){
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