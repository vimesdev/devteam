#include "PurchaseReturnOrderSelectDialog.h"
#include "MainFrame_E10.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderSelectDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderSelectDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderSelectDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderSelectDialog *)pWnd)->OnOrderNoCheckValue();
} 
static long _OnPurchaseListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnPurchaseListLoadData();
} 
static void _OnPurchaseListDblClickFnc(CWnd *pWnd){
	((CPurchaseReturnOrderSelectDialog*)pWnd)->OnPurchaseListDblClick();
} 
static void _OnPurchaseListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseReturnOrderSelectDialog*)pWnd)->OnPurchaseListSelectChange(nOldItem, nNewItem);
} 
static int _OnPurchaseListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnPurchaseListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CPurchaseReturnOrderSelectDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseReturnOrderSelectDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnItemListDeleteItem();
} 
static long _OnReturnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnReturnListLoadData();
} 
static void _OnReturnListDblClickFnc(CWnd *pWnd){
	((CPurchaseReturnOrderSelectDialog*)pWnd)->OnReturnListDblClick();
} 
static void _OnReturnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseReturnOrderSelectDialog*)pWnd)->OnReturnListSelectChange(nOldItem, nNewItem);
} 
static int _OnReturnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnReturnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderSelectDialog *pVw = (CPurchaseReturnOrderSelectDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnAddAllSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderSelectDialog *pVw = (CPurchaseReturnOrderSelectDialog *)pWnd;
	pVw->OnAddAllSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderSelectDialog *pVw = (CPurchaseReturnOrderSelectDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnRemoveAllSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderSelectDialog *pVw = (CPurchaseReturnOrderSelectDialog *)pWnd;
	pVw->OnRemoveAllSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderSelectDialog *pVw = (CPurchaseReturnOrderSelectDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderSelectDialog *pVw = (CPurchaseReturnOrderSelectDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseReturnOrderSelectDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnAddPurchaseReturnOrderSelectDialog();
} 
static int _OnEditPurchaseReturnOrderSelectDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnEditPurchaseReturnOrderSelectDialog();
} 
static int _OnDeletePurchaseReturnOrderSelectDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnDeletePurchaseReturnOrderSelectDialog();
} 
static int _OnSavePurchaseReturnOrderSelectDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnSavePurchaseReturnOrderSelectDialog();
} 
static int _OnCancelPurchaseReturnOrderSelectDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderSelectDialog*)pWnd)->OnCancelPurchaseReturnOrderSelectDialog();
} 
CPurchaseReturnOrderSelectDialog::CPurchaseReturnOrderSelectDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 716;
	SetDefaultValues();
}
CPurchaseReturnOrderSelectDialog::~CPurchaseReturnOrderSelectDialog(){
}
void CPurchaseReturnOrderSelectDialog::OnCreateComponents(){
	m_wndReturnItemLists.Create(this, _T("Return Item Lists"), 505, 5, 1000, 570);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 109, 55);
	m_wndPurchaseOrderDetail.Create(this, _T("Purchase Order Detail"), 5, 265, 500, 570);
	m_wndOrderNo.Create(this,112, 30, 495, 55); 
	m_wndPurchaseOrders.Create(this, _T("Purchase Orders"), 5, 5, 500, 260);
	m_wndPurchaseList.Create(this,10, 60, 495, 255); 
	m_wndItemList.Create(this,10, 290, 495, 565); 
	m_wndReturnList.Create(this,510, 30, 995, 565); 
	m_wndAdd.Create(this, _T(">"), 435, 575, 465, 600);
	m_wndAddAll.Create(this, _T(">>"), 470, 575, 500, 600);
	m_wndRemove.Create(this, _T("<"), 505, 575, 535, 600);
	m_wndRemoveAll.Create(this, _T("<<"), 540, 575, 570, 600);
	m_wndApply.Create(this, _T("&Apply"), 837, 575, 917, 600);
	m_wndClose.Create(this, _T("&Close"), 922, 575, 1002, 600);

}
void CPurchaseReturnOrderSelectDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);


	m_wndPurchaseList.InsertColumn(0, _T(""), 256, 0);	//purchase_order_id
	m_wndPurchaseList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 100);
	m_wndPurchaseList.InsertColumn(2, _T("Order Date"), CFMT_DATE, 90);
	m_wndPurchaseList.InsertColumn(3, _T("Description"), CFMT_TEXT, 150);
	m_wndPurchaseList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 100);


	m_wndItemList.InsertColumn(0, _T(""), CFMT_TEXT, 0);	//purchase_orderline_id
	m_wndItemList.InsertColumn(1, _T(""), CFMT_TEXT, 0);	//product_item_id
	m_wndItemList.InsertColumn(2, _T("Item No"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(3, _T("Item Name"), CFMT_TEXT, 150);
	m_wndItemList.InsertColumn(4, _T("Uom"), CFMT_TEXT, 70);
	m_wndItemList.InsertColumn(5, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndItemList.InsertColumn(6, _T("Onhand"), CFMT_NUMBER, 80);


	m_wndReturnList.InsertColumn(0, _T(""), CFMT_TEXT, 0);	//purchase_order_id
	m_wndReturnList.InsertColumn(1, _T(""), CFMT_TEXT, 0);	//purchase_orderline_id
	m_wndReturnList.InsertColumn(2, _T(""), CFMT_TEXT, 0);	//product_item_id
	m_wndReturnList.InsertColumn(3, _T("Order No"), CFMT_TEXT, 100);
	m_wndReturnList.InsertColumn(4, _T("Item No"), CFMT_TEXT, 100);
	m_wndReturnList.InsertColumn(5, _T("Item Name"), CFMT_TEXT, 200);
	m_wndReturnList.InsertColumn(6, _T("Uom"), CFMT_TEXT, 80);
	m_wndReturnList.InsertColumn(7, _T("Quantity"), CFMT_NUMBER, 80);

}
void CPurchaseReturnOrderSelectDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndPurchaseList.SetEvent(WE_SELCHANGE, _OnPurchaseListSelectChangeFnc);
	m_wndPurchaseList.SetEvent(WE_LOADDATA, _OnPurchaseListLoadDataFnc);
	m_wndPurchaseList.SetEvent(WE_DBLCLICK, _OnPurchaseListDblClickFnc);
	m_wndPurchaseList.AddEvent(1, _T("Delete"), _OnPurchaseListDeleteItemFnc, 0);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0);
	m_wndReturnList.SetEvent(WE_SELCHANGE, _OnReturnListSelectChangeFnc);
	m_wndReturnList.SetEvent(WE_LOADDATA, _OnReturnListLoadDataFnc);
	m_wndReturnList.SetEvent(WE_DBLCLICK, _OnReturnListDblClickFnc);
	m_wndReturnList.AddEvent(1, _T("Delete"), _OnReturnListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndAddAll.SetEvent(WE_CLICK, _OnAddAllSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndRemoveAll.SetEvent(WE_CLICK, _OnRemoveAllSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

	OnPurchaseListLoadData();


}
void CPurchaseReturnOrderSelectDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CPurchaseReturnOrderSelectDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseReturnOrderSelectDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseReturnOrderSelectDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_nLine = 0;

}
int CPurchaseReturnOrderSelectDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CPurchaseReturnOrderSelectDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseReturnOrderSelectDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseReturnOrderSelectDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseReturnOrderSelectDialog::OnOrderNoCheckValue(){
	return 0;
} 
void CPurchaseReturnOrderSelectDialog::OnPurchaseListDblClick(){
	
} 
void CPurchaseReturnOrderSelectDialog::OnPurchaseListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderID = str2long(m_wndPurchaseList.GetItemText(nNewItem, 0));
	OnItemListLoadData();

} 
int CPurchaseReturnOrderSelectDialog::OnPurchaseListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseReturnOrderSelectDialog::OnPurchaseListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPurchaseList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT po_purchase_order_id, po_orderno, po_orderdate, po_description, po_totalamount ") \
		_T("FROM purchase_order ") \
		_T("WHERE po_doctype='POO' and po_partner_id='%s' and po_org_id='%s' and po_orderdate >= sysdate-90 and po_status<>'O' ") \
		_T("ORDER BY po_orderdate, po_orderno "),
		m_szBusinessPartnerID, pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPurchaseList.AddItems(
			rs.GetValue(_T("po_purchase_order_id")), 
			rs.GetValue(_T("po_OrderNo")), 
			rs.GetValue(_T("po_OrderDate")), 
			rs.GetValue(_T("po_Description")), 
			rs.GetValue(_T("po_totalAmount")), NULL);
		rs.MoveNext();
	}
	m_wndPurchaseList.EndLoad(); 
	return nCount;
}
void CPurchaseReturnOrderSelectDialog::OnItemListDblClick(){
	int nSel = m_wndItemList.GetCurSel();
	if(nSel < 0)
		return;
	CString szOrderID,
		szOrderLine,
		szOrderNo,
		szProductItemID,
		szProductCode,
		szProductName,
		szUom,
		szQty;
	szOrderID.Format(_T("%ld"), m_nOrderID);
	szOrderLine = m_wndItemList.GetItemText(nSel, 0);
	szProductItemID = m_wndItemList.GetItemText(nSel, 1);
	szProductCode = m_wndItemList.GetItemText(nSel, 2);
	szProductName = m_wndItemList.GetItemText(nSel, 3);
	szUom = m_wndItemList.GetItemText(nSel, 4);
	szQty = m_wndItemList.GetItemText(nSel, 5);

	m_wndReturnList.AddItems(
		szOrderID, 
		szOrderLine, 
		szProductItemID, 
		szOrderNo,
		szProductCode,
		szProductName,
		szUom,
		szQty,
		NULL);
	m_wndReturnList.EndLoad();
	m_wndItemList.DeleteItem(nSel);

} 
void CPurchaseReturnOrderSelectDialog::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseReturnOrderSelectDialog::OnItemListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseReturnOrderSelectDialog::OnItemListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szNotIn, szOrderID;
	for (int i =0; i < m_wndReturnList.GetItemCount(); i++){
		
		szOrderID = m_wndReturnList.GetItemText(i, 0);
		if(str2long(szOrderID) != m_nOrderID)
			continue;

		if(!szNotIn.IsEmpty())
			szNotIn += _T(",");
		szNotIn.AppendFormat(_T("%s"), m_wndReturnList.GetItemText(i, 1));

	}
	szWhere.Empty();
	if(!szNotIn.IsEmpty())
		szWhere.Format(_T(" and pol_purchase_orderline_id not in(%s) "), szNotIn);

	szSQL.Format(_T("SELECT pol_purchase_orderline_id, product_item_id, ") \
		_T("product_code, product_name, GET_UOMNAME(product_purchase_uomid) as product_purchase_uomname, pol_qtyorder, (msl_qtyonhand-msl_qtyordered)/PRODUCT_PRODUCT_UOMRATE as qty_onhand ") \
		_T("FROM purchase_orderline ") \
		_T("LEFT JOIN m_productitem_view ON(pol_product_item_id=product_item_id) ") \
		_T("LEFT JOIN m_storageline ON(pol_storage_id=msl_storage_id and pol_product_item_id=msl_product_item_id) ") \
		_T("WHERE pol_purchase_order_id=%ld and pol_qtyreverse =0  %s ") \
		_T("ORDER BY pol_line "), m_nOrderID, szWhere);
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("pol_purchase_orderline_id")), 
			rs.GetValue(_T("product_item_id")), 
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_purchase_uomname")), 
			rs.GetValue(_T("pol_qtyorder")),
			rs.GetValue(_T("qty_onhand")),
			NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CPurchaseReturnOrderSelectDialog::OnReturnListDblClick(){
	
} 
void CPurchaseReturnOrderSelectDialog::OnReturnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseReturnOrderSelectDialog::OnReturnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseReturnOrderSelectDialog::OnReturnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndReturnList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReturnList.AddItems(
			rs.GetValue(_T("ItemNo")), 
			rs.GetValue(_T("ItemName")), 
			rs.GetValue(_T("Uom")), 
			rs.GetValue(_T("Quantity")), NULL);
		rs.MoveNext();
	}
	m_wndReturnList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPurchaseReturnOrderSelectDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderSelectDialog::OnAddAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderSelectDialog::OnRemoveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderSelectDialog::OnRemoveAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderSelectDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	long nOrderID, nOrderLine, nProductItemID;
	double nQty;
	bool bSucess = true;

	 
	pMF->BeginTransaction();
	for (int i = m_wndReturnList.GetItemCount()-1; i >=0; i--){
		nOrderID = str2long(m_wndReturnList.GetItemText(i, 0));
		nOrderLine = str2long(m_wndReturnList.GetItemText(i, 1));
		nProductItemID = str2long(m_wndReturnList.GetItemText(i, 2));
		nQty = str2double(m_wndReturnList.GetItemText(i, 7));

		szSQL.Format(_T("PURCHASE_RETORDERLINE_CREATE(%ld, %ld, '%s', '%s', %ld, %ld, %ld, %f) "),
			m_nID, m_nLine, pMF->GetModuleID(), pMF->GetCurrentUser(), nOrderID, nOrderLine, nProductItemID, nQty);
//Notice(szSQL);
		int ret = str2int(pMF->ExecDML(szSQL));
		if(ret <= 0)
		{
			bSucess = false;
			break;
		}
		m_wndReturnList.DeleteItem(i);

	}
	if(bSucess)
	{
		pMF->Commit();
		CGuiDialog::OnOK();
	}
	else 
	{
		pMF->Rollback();
	}

} 
void CPurchaseReturnOrderSelectDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPurchaseReturnOrderSelectDialog::OnAddPurchaseReturnOrderSelectDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseReturnOrderSelectDialog::OnEditPurchaseReturnOrderSelectDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseReturnOrderSelectDialog::OnDeletePurchaseReturnOrderSelectDialog(){
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
 		OnCancelPurchaseReturnOrderSelectDialog();
 	}
	return 0;
}
int CPurchaseReturnOrderSelectDialog::OnSavePurchaseReturnOrderSelectDialog(){
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
 		//OnPurchaseReturnOrderSelectDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseReturnOrderSelectDialog::OnCancelPurchaseReturnOrderSelectDialog(){
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
int CPurchaseReturnOrderSelectDialog::OnPurchaseReturnOrderSelectDialogListLoadData(){
	return 0;
}
