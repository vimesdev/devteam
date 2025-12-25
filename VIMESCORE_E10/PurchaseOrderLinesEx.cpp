#include "PurchaseOrderLinesEx.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialogEx.h"
#include "PurchaseOrderPrepareDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "POAutoCreateItemDialog_HC.h"
#include "POAutoCreateItemDialog_V2.h"
#include "PMPurchaseOrderLineInputEx.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLinesEx*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderLinesEx*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderLinesEx*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnListDeleteItem();
}

static int _OnAutoCreateItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnAutoCreateItem();
}

static int _OnAutoCreateItem_V2Fnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnAutoCreateItem_V2();
}
static int _OnAutoCreateItem2Fnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnAutoCreateItem2();
}
static int _OnAutoCreateItem3Fnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnAutoCreateItem3();
}

static int _OnRollbackFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnRollback();
}
static int _OnTrackItemFnc(CWnd *pWnd){
	 ((CPurchaseOrderLinesEx*)pWnd)->TrackItem();
	 return 0;
}
static int _OnSetDepartmentDeliveryFnc(CWnd *pWnd){
	 ((CPurchaseOrderLinesEx*)pWnd)->OnSetDepartmentDelivery();
	 return 0;
}

static int _OnPostToDuocQGFnc(CWnd *pWnd){
	 ((CPurchaseOrderLinesEx*)pWnd)->OnPostToDuocQG();
	 return 0;
}

static int _OnAddPurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnAddPurchaseOrderLines();
} 
static int _OnEditPurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnEditPurchaseOrderLines();
} 
static int _OnDeletePurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnDeletePurchaseOrderLines();
} 
static int _OnSavePurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnSavePurchaseOrderLines();
} 
static int _OnCancelPurchaseOrderLinesFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnCancelPurchaseOrderLines();
} 
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLinesEx*)pWnd)->OnUnitPriceCheckValue();
} 
CPurchaseOrderLinesEx::CPurchaseOrderLinesEx(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 310;
	SetDefaultValues();
	m_pWndOrder = NULL;
	SetWindowName(_T("PurchaseOrderLines"));
}
CPurchaseOrderLinesEx::~CPurchaseOrderLinesEx(){
}
void CPurchaseOrderLinesEx::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,5, 5, 990, 310); 
}
void CPurchaseOrderLinesEx::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

//	m_wndList.SetAutoIndex(TRUE);
	long nStyle = CFMT_MONEY;
	if (pMF->m_szOriginModuleID == _T("HC"))
	{
		nStyle = CFMT_TEXT | CFMT_RIGHT;
	}
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //purchase_orderline_id
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 85);
	if(pMF->GetModuleID() == _T("PM"))
		m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 250);
	else
		m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 320);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Storage ID"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(5, _T("Exp Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(6, _T("Lot No"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(7, _T("Quantity"), nStyle, 70);
	m_wndList.InsertColumn(8, _T("Unit Price"), nStyle, 85);
	m_wndList.InsertColumn(9, _T("VAT Price"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(10, _T("Sale Price"), nStyle, 85);
	m_wndList.InsertColumn(11, _T("Amount"), nStyle, 95);
	m_wndList.InsertColumn(12, _T("% Tax"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(13, _T("Tax Amount"), nStyle, 0);
	m_wndList.InsertColumn(14, _T("Total Amount"), nStyle, 0);
	m_wndList.InsertColumn(15, _T("Manufacture"), nStyle, 150);	
	m_wndList.InsertColumn(16, _T("tax_id"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(17, _T("item_id"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(18, _T("M\xE3 \xE1nh \x78\x1EA1"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(19, _T("Q\x110 th\x1EA7u"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(20, _T("Gía thầu"), nStyle, 85);

}
void CPurchaseOrderLinesEx::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.AddEvent(1, _T("Add Line"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit Line"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);

	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	if(pPO && !pPO->IsConsign() && pMF->GetModuleID() == _T("MA")){
		m_wndList.AddEvent(3, _T("Add From Consign Order"), _OnAutoCreateItemFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(10, _T("Add Batch From Consign Order"), _OnAutoCreateItem_V2Fnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(4, _T("Add From Order Items"), _OnAutoCreateItem2Fnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
	}
	if (pMF->m_szOriginModuleID == _T("HC"))
	{
		m_wndList.AddEvent(8, _T("Add From Order Items"), _OnAutoCreateItem3Fnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
	}
	m_wndList.AddEvent(5, _T("Delete Line"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(6, _T("Rollback imported order"), _OnRollbackFnc);
	m_wndList.AddEvent(7, _T("Track Item"), _OnTrackItemFnc);
	
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.AddEvent(9, _T("Set Department Delivery"), _OnSetDepartmentDeliveryFnc);
		m_wndList.AddEvent(11, _T("Post To Duoc QG"), _OnPostToDuocQGFnc);
	
	}
/*
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderLinesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderLinesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderLinesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderLinesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderLinesFnc, 0, 'T', VK_CONTROL);
*/
	if (CheckPermission(_T("01.01"))){
		m_wndList.SetEditLabel(8, GUI_NUMBERCTRL);
		CGuiNumberCtrl* pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(8);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	}	
	SetMode(VM_NONE);

}
void CPurchaseOrderLinesEx::OnDoDataExchange(CDataExchange* pDX){

}
void CPurchaseOrderLinesEx::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderLinesEx::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderLinesEx::SetDefaultValues(){


}
int CPurchaseOrderLinesEx::SetMode(int nMode){
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
void CPurchaseOrderLinesEx::OnListDblClick(){
	
} 
void CPurchaseOrderLinesEx::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderLine = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nProductItemID = str2long(m_wndList.GetItemText(nNewItem, 17));
	
	SetMode(VM_VIEW);
}

int CPurchaseOrderLinesEx::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;
	if(GetOrderStatus() != _T("O"))
		return -1;

	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return 0;

	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM purchase_orderline WHERE pol_purchase_order_id=%ld and pol_isauto='Y'"), pPO->m_nID);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return 0;
	ShowModal(VM_ADD);
	return 0;

}
int CPurchaseOrderLinesEx::OnListEditItem(){
	//return 0;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetOrderStatus() != _T("O"))
		return -1;

	ShowModal(VM_EDIT);
	return 0;
}

void CPurchaseOrderLinesEx::ShowModal(int nMode)
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	if(pPO == NULL || (pPO && pPO->GetMode() != VM_VIEW))
		return;

	if (pMF->GetModuleID() == _T("PM"))
	{
		CPMPurchaseOrderLineInputEx* newPopup = new CPMPurchaseOrderLineInputEx(this, nMode);
		newPopup->m_pWndOrder = m_pWndOrder;
		newPopup->m_nOrderID = pPO->m_nID;
		if (nMode == VM_EDIT)
		{
			newPopup->m_nOrderLine = m_nOrderLine;
		}
		newPopup->m_nStorageID = str2int(pPO->m_szWarehouseKey);
		newPopup->m_nTaxID = str2int(pPO->m_szVATKey);
		newPopup->m_nResourceID = str2int(pPO->m_szResourceKey);
		newPopup->ShowPopup(&m_wndList);
		newPopup->SetAutoClose(false);	

	}
	else
	{
		CPurchaseOrderLineInputEx* newPopup = new CPurchaseOrderLineInputEx(this, nMode);
		newPopup->m_pWndOrder = m_pWndOrder;
		newPopup->m_nOrderID = pPO->m_nID;
		if (nMode == VM_EDIT)
		{
			newPopup->m_nOrderLine = m_nOrderLine;
		}
		newPopup->m_nStorageID = str2int(pPO->m_szWarehouseKey);
		newPopup->m_nTaxID = str2int(pPO->m_szVATKey);
		newPopup->m_nResourceID = str2int(pPO->m_szResourceKey);
		newPopup->ShowPopup(&m_wndList);
		newPopup->SetAutoClose(false);	
	}
	return;
}

int CPurchaseOrderLinesEx::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	OnDeletePurchaseOrderLines();
	 return 0;
} 
long CPurchaseOrderLinesEx::OnListLoadData(){

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
				_T("   pol_unitprice+pol_taxrate*pol_unitprice/100.0 as  pol_taxprice, ") \
				_T("   pol_saleprice, ") \
				_T("   pol_netamount,") \
				_T("   pol_tax_id, ") \
				_T("   GET_TAXRATE(pol_tax_id)         AS pol_taxrate,") \
				_T("   pol_taxamount,") \
				_T("   pol_totalamount,") \
				_T("   pol_lotno,") \
				_T("   pol_expdate, mpi_giatt, ") \
				_T("   GET_MANUFACTURENAME(pol_manufacture_id) AS pol_mfgname, pol_product_item_id item_id, MPEI_MA_HOAT_CHAT ma_anh_xa, MPEI_QUYET_DINH quyet_dinh_thau") \
				_T(" FROM purchase_orderline") \
				_T(" LEFT JOIN M_PRODUCTITEM_VIEW_COREE10") \
				_T(" ON(product_item_id              =pol_product_item_id)") \
				_T(" LEFT JOIN m_product_extra_info on (productextra_id = mpei_id)") \
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
			rs.GetValue(_T("pol_expdate")), 
			rs.GetValue(_T("pol_lotno")), 
			SetNumberDelim(rs.GetValue(_T("pol_qtyorder"))), 
			SetNumberDelim(rs.GetValue(_T("pol_unitprice"))), 
			SetNumberDelim(rs.GetValue(_T("pol_taxprice"))), 
			SetNumberDelim(rs.GetValue(_T("pol_saleprice"))), 
			SetNumberDelim(rs.GetValue(_T("pol_netamount"))), 
			rs.GetValue(_T("pol_taxrate")),			
			SetNumberDelim(rs.GetValue(_T("pol_taxamount"))), 
			SetNumberDelim(rs.GetValue(_T("pol_totalamount"))), 
			rs.GetValue(_T("pol_mfgname")), 
			rs.GetValue(_T("pol_tax_id")), 
			rs.GetValue(_T("item_id")), 
			rs.GetValue(_T("ma_anh_xa")),
			rs.GetValue(_T("quyet_dinh_thau")),
			rs.GetValue(_T("mpi_giatt")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	pPO->m_nTotalLines = m_wndList.GetItemCount();
	pPO->RecalcAmount();

	return nCount;
	return 0;
}

CString	CPurchaseOrderLinesEx::SetNumberDelim(CString szNumber)
{
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (pMF->m_szOriginModuleID != _T("HC"))
	{
		return szNumber;
	}
	CString szRet;
	szRet = szNumber;
	int nPeriodPos = 0, nDecimalPos = szRet.Find(_T("."));
	if (nDecimalPos == -1)
	{
		nDecimalPos = szRet.GetLength();
	}
	else
	{
		szRet.Replace(_T("."), _T(","));
	}
	for (int i = nDecimalPos; i>=1; i--)
	{
		if (nPeriodPos > 0 && nPeriodPos%3==0)
		{
			szRet.Insert(i, _T("."));
		}
		nPeriodPos++;
	}
	return szRet;
}

#include "POAutoCreateItemDialog.h"
#include ".\purchaseorderlinesex.h"

int CPurchaseOrderLinesEx::OnAutoCreateItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	if(pPO ==NULL || pPO->IsConsign() || pMF->GetModuleID() != _T("MA"))
		return 0;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM purchase_orderline WHERE pol_purchase_order_id=%ld and pol_isauto='N' "), pPO->m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return 0;
	CPOAutoCreateItemDialog dlg(pMF);
	dlg.m_nPurchaseOrder_ID = pPO->m_nID;
	dlg.m_szParterID = pPO->m_szSupplierKey;
	dlg.m_nTemplateStorage_ID = 12;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	 return 0;
}

int CPurchaseOrderLinesEx::OnAutoCreateItem_V2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	if(pPO ==NULL || pPO->IsConsign() || pMF->GetModuleID() != _T("MA"))
		return 0;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM purchase_orderline WHERE pol_purchase_order_id=%ld and pol_isauto='N' "), pPO->m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return 0;
	CPOAutoCreateItemDialog_V2 dlg(pMF);
	dlg.m_nPurchaseOrder_ID = pPO->m_nID;
	dlg.m_szParterID = pPO->m_szSupplierKey;
	dlg.m_nTemplateStorage_ID = 12;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	 return 0;
}

int CPurchaseOrderLinesEx::OnAutoCreateItem2()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	if(pPO ==NULL || pPO->IsConsign() || pMF->GetModuleID() != _T("MA"))
		return 0;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM purchase_orderline WHERE pol_purchase_order_id=%ld and pol_isauto='N' "), pPO->m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return 0;
	CPOAutoCreateItemDialog dlg(pMF);
	dlg.m_nPurchaseOrder_ID = pPO->m_nID;
	dlg.m_szParterID = pPO->m_szSupplierKey;
	dlg.m_nTemplateStorage_ID = 13;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	 return 0;
}


int CPurchaseOrderLinesEx::OnRollback()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("PURCHASE_ORDER_ROLLBACK(%ld, '%s', '%s') "), m_nOrderID, pMF->GetModuleID(), pMF->GetCurrentUser());
	int ret = ShowMessageBox(_T("Do you want to rollback order?(Y/N)"), MB_YESNO);
	if (ret == IDNO)
		return 0;
	ret = str2int(pMF->ExecDML(szSQL));
	if (ret <= 0)
	{
		ShowMessageBox(_T("Cannot rollback with current status"));
	}
	else
	{
		CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
		pPO->Refresh();
	}
	return ret;

}


int CPurchaseOrderLinesEx::OnAddPurchaseOrderLines(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderLinesEx::OnEditPurchaseOrderLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderLinesEx::OnDeletePurchaseOrderLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;

	if(GetOrderStatus() != _T("O"))
		return -1;



 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();

	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
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
		
		((CPurchaseOrderDialogEx*)m_pWndOrder)->RecalcAmount();
 	}
	else
	{
		ShowMessageBox(_T("Can not delete item"));
	}
	return 0;
}
int CPurchaseOrderLinesEx::OnSavePurchaseOrderLines(){
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
int CPurchaseOrderLinesEx::OnCancelPurchaseOrderLines(){
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
int CPurchaseOrderLinesEx::OnPurchaseOrderLinesListLoadData(){
	return 0;
}

void CPurchaseOrderLinesEx::Refresh(long nOrderID){
	m_nOrderID = nOrderID;
	if(m_nOrderID < 0){
		m_nOrderLine = -1;
		m_wndList.DeleteAllItems();
		return;
	}
	OnListLoadData();
	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	pPO->RecalcAmount();
	//for (int i = 1; i <=5; i++) if (i != 2) m_wndList.SetMenuState(i, GetOrderStatus()==_T("O")?true:false);
	//m_wndList.SetMenuState(6, GetOrderStatus()==_T("O")?false:true);
	if(GetOrderStatus() == _T("O"))
	{
		m_wndList.SetMenuState(1, true);
//		m_wndList.SetMenuState(2, true);
		m_wndList.SetMenuState(3, true);
		m_wndList.SetMenuState(4, true);
		m_wndList.SetMenuState(5, true);
		m_wndList.SetMenuState(6, false);
	}
	else
	{
		m_wndList.SetMenuState(1, false);
//		m_wndList.SetMenuState(2, true);
		m_wndList.SetMenuState(3, false);
		m_wndList.SetMenuState(4, false);
		m_wndList.SetMenuState(5, false);
		m_wndList.SetMenuState(6, true);
	}
	if(m_szStorageCategory == _T("S") || m_szStorageCategory == _T("A"))
		m_wndList.SetColumnWidth(10, 85);
	else m_wndList.SetColumnWidth(10, 0);
	
}


CString CPurchaseOrderLinesEx::GetOrderStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szStatus;
//	int nStorageID;
	szSQL.Format(_T("SELECT po_status, msl_category, po_storage_id storage_id FROM purchase_order left join m_storagelist on(msl_storage_id=po_storage_id) WHERE po_purchase_order_id=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("po_status"), szStatus);
		rs.GetValue(_T("msl_category"), m_szStorageCategory);	
	}
	return szStatus;
}

int CPurchaseOrderLinesEx::OnUnitPriceCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nRet = ShowMessageBox(_T("Do you want to update this item's price?"), MB_YESNO);
	if (nRet == IDNO) return 0;
	CGuiNumberCtrl* pCtrl = (CGuiNumberCtrl*) GetFocus();
	CString szSQL, tmpStr;
	if (!pCtrl) return -1;
	CPurchaseOrderLinesEx* pWnd = (CPurchaseOrderLinesEx*) pCtrl->GetParent()->GetParent();
	pCtrl->GetWindowText(tmpStr); 
	szSQL.Format(_T("M_PRODUCTITEM_UPDATEPRICE(%ld, %ld, %s, '%s')"), pWnd->m_nOrderID, pWnd->m_nProductItemID, tmpStr, pMF->GetCurrentUser());
	//AfxMessageBox(szSQL);
	//return 0;
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0){
		AfxMessageBox(_T("Update successfully!"));
		pWnd->OnListLoadData();
	}
	return 0;
}

BOOL CPurchaseOrderLinesEx::PreTranslateMessage(MSG* pMsg){
	return CGuiView::PreTranslateMessage(pMsg);
	if (pMsg->hwnd == m_wndList.GetSafeHwnd())
		if (pMsg->message == WM_KEYDOWN)
			if (pMsg->wParam == VK_F2){
				if (CheckPermission(_T("01.01"))){
					m_wndList.SetEditLabel(8, GUI_NUMBERCTRL);
					CGuiNumberCtrl* pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(8);
					pCtrl->SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
				}	
			}

	return CGuiView::PreTranslateMessage(pMsg);
}

BOOL CPurchaseOrderLinesEx::CheckPermission(CString szPermID){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM sys_userperm WHERE sup_moduleid = '%s' AND sup_userid = '%s' AND sup_permid = '%s'"), pMF->GetModuleID(), pMF->GetCurrentUser(), szPermID);
	rs.ExecSQL(szSQL);
	return (BOOL) rs.GetIntValue();
}

void CPurchaseOrderLinesEx::TrackItem(){
	CPrintForms printer;
	printer.E10_TrackItem(m_nOrderID, m_nProductItemID);
}
#include "PMSetDepartmentDeliveryDialog.h"
int  CPurchaseOrderLinesEx::OnSetDepartmentDelivery(){

	CString szStatus =GetOrderStatus();
	if(szStatus != _T("A"))
	{
		int ret = ShowMessageBox(_T("Tác v? ch? s? d?ng khi phi?u dã du?c nh?p kho"), MB_OK);
		return -1;
	}
	CPMSetDepartmentDeliveryDialog dlg(this);
	dlg.m_nPurcharseOrder = m_nOrderID;
	if (dlg.DoModal() == IDOK)
	{

	}
	return 1;
}

int CPurchaseOrderLinesEx::OnAutoCreateItem3()
{
	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	CPOAutoCreateItemDialog_HC dlg(this, pPO->m_nID, pPO->m_szWarehouseKey, pPO->m_szSupplierKey);	
	if (dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	return 0;
}
#include "PMSysPurchaseToDuocQG.h"

void CPurchaseOrderLinesEx::OnPostToDuocQG(){
	/*	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		pMF->m_wndLienThong.Laythongtinketnoi(m_nStorageID);
		pMF->m_wndLienThong.OnPostPhieuNhapKho(m_nOrderID,m_nStorageID,1 );*/
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPMSysPurchaseToDuocQG dlg(this);
	dlg.m_nType=1;
	dlg.m_nOrderID=m_nOrderID;
	dlg.DoModal();

}
