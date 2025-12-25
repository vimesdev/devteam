#include "PurchaseOrderPrepareDialog.h"
#include "MainFrame_E10.h"
#include ".\purchaseorderpreparedialog.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListLoadData();
} 
static void _OnInvoiceListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListDblClick();
} 
static void _OnInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListSelectChange(nOldItem, nNewItem);
} 
static int _OnInvoiceListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnMatListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListLoadData();
} 
static void _OnMatListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListDblClick();
} 
static void _OnMatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListSelectChange(nOldItem, nNewItem);
} 
static int _OnMatListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnAddPurchaseOrderPrepareDialog();
} 
static int _OnEditPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnEditPurchaseOrderPrepareDialog();
} 
static int _OnDeletePurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnDeletePurchaseOrderPrepareDialog();
} 
static int _OnSavePurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnSavePurchaseOrderPrepareDialog();
} 
static int _OnCancelPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnCancelPurchaseOrderPrepareDialog();
} 
CPurchaseOrderPrepareDialog::CPurchaseOrderPrepareDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CPurchaseOrderPrepareDialog::~CPurchaseOrderPrepareDialog(){
}
void CPurchaseOrderPrepareDialog::OnCreateComponents(){
	m_wndMaterialInformation.Create(this, _T("Material Information"), 5, 280, 960, 550);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndPreInvoiceInformation.Create(this, _T("Pre Invoice Information"), 5, 5, 960, 245);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 425, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 430, 30, 530, 55);
	m_wndOrderNo.Create(this,535, 30, 870, 55); 
	m_wndSearch.Create(this, _T("&Search"), 875, 30, 955, 55);
	m_wndInvoiceList.Create(this,10, 60, 955, 240); 
	m_wndAdd.Create(this, _T(">>"), 889, 250, 919, 275);
	m_wndRemove.Create(this, _T("&Remove"), 924, 250, 953, 275);
	m_wndMatList.Create(this,10, 305, 955, 545); 
	m_wndApply.Create(this, _T("&Apply"), 775, 555, 865, 580);
	m_wndClose.Create(this, _T("&Close"), 870, 555, 960, 580);

}
void CPurchaseOrderPrepareDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);

	m_wndInvoiceList.SetCheckBox(true);
	m_wndInvoiceList.SetSortHeader(false);
	m_wndInvoiceList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndInvoiceList.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndInvoiceList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndInvoiceList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndInvoiceList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndInvoiceList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);
	m_wndInvoiceList.InsertColumn(6, _T("orderid"), CFMT_NUMBER, 0);
	m_wndInvoiceList.InsertColumn(7, _T("orderlineid"), CFMT_NUMBER, 0);


	m_wndMatList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndMatList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
	m_wndMatList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndMatList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndMatList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndMatList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);
	m_wndMatList.InsertColumn(6, _T("orderlineid"), CFMT_NUMBER, 0);

}
void CPurchaseOrderPrepareDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndInvoiceList.SetEvent(WE_SELCHANGE, _OnInvoiceListSelectChangeFnc);
	m_wndInvoiceList.SetEvent(WE_LOADDATA, _OnInvoiceListLoadDataFnc);
	m_wndInvoiceList.SetEvent(WE_DBLCLICK, _OnInvoiceListDblClickFnc);
	m_wndInvoiceList.AddEvent(1, _T("Delete"), _OnInvoiceListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndMatList.SetEvent(WE_SELCHANGE, _OnMatListSelectChangeFnc);
	m_wndMatList.SetEvent(WE_LOADDATA, _OnMatListLoadDataFnc);
	m_wndMatList.SetEvent(WE_DBLCLICK, _OnMatListDblClickFnc);
	m_wndMatList.AddEvent(1, _T("Delete"), _OnMatListDeleteItemFnc, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CDate dte;
	dte.ParseDate(pMF->GetSysDate());
	dte -= 30;
	m_szFromDate = dte.GetDate();
	m_szToDate = pMF->GetSysDate();
	OnInvoiceListLoadData();
	SetMode(VM_EDIT);

}
void CPurchaseOrderPrepareDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CPurchaseOrderPrepareDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderPrepareDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderPrepareDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();

}
int CPurchaseOrderPrepareDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CPurchaseOrderPrepareDialog::OnFromDateChange(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnFromDateSetfocus(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnFromDateKillfocus(){
	
} */
int CPurchaseOrderPrepareDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderPrepareDialog::OnToDateChange(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnToDateSetfocus(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnToDateKillfocus(){
	
} */
int CPurchaseOrderPrepareDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderPrepareDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderPrepareDialog::OnOrderNoCheckValue(){
	return 0;
} 
void CPurchaseOrderPrepareDialog::OnSearchSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnInvoiceListLoadData();
} 
void CPurchaseOrderPrepareDialog::OnInvoiceListDblClick(){
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return;
	m_nPurchaseOrder_ID = str2long(m_wndInvoiceList.GetItemText(nSel, 6));
	long orderline = str2long(m_wndInvoiceList.GetItemText(nSel, 7));
	if(orderline <= 0)return;
	BOOL bCheck = m_wndInvoiceList.GetCheck(nSel);
	if(!bCheck)
	{
		MarkItem(orderline);
	}
	else
	{
		UnMarkItem(orderline);
	}
	m_wndInvoiceList.SetCheck(nSel, !bCheck);
	OnMatListLoadData();
} 
void CPurchaseOrderPrepareDialog::OnInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseOrderPrepareDialog::OnInvoiceListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderPrepareDialog::OnInvoiceListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr;
	long nPOID;

	m_wndInvoiceList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT po_purchase_order_id,") \
_T("   po_orderno,") \
_T("   po_orderdate,") \
_T("   po_totalamount") \
_T(" FROM purchase_order") \
_T(" WHERE po_isconsign='Y'") \
_T(" AND po_partner_id ='%s'") \
_T(" AND po_orderdate BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"),
m_szPartnerID, m_szFromDate, m_szToDate);

	long nReferenceID;


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("po_purchase_order_id"), nPOID);
		tmpStr.Format(_T("So HD: %s - Ngay HD: %s - So tien: %s"), 
			rs.GetValue(_T("po_orderno")), rs.GetValue(_T("po_orderdate")), rs.GetValue(_T("po_totalamount")));
		int nItem = m_wndInvoiceList.AddItems(_T(""),tmpStr, NULL);
		m_wndInvoiceList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
		szSQL.Format(_T(" SELECT ") \
_T("   pol_purchase_orderline_id, pol_reference_id, ") \
_T("   product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   pol_qtyorder               AS quantity,") \
_T("   pol_unitprice              AS unitprice,") \
_T("   pol_unitprice*pol_qtyorder AS amount") \
_T(" FROM purchase_orderline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id         =pol_product_item_id)") \
_T(" WHERE pol_purchase_order_id=%ld and pol_isadded='N' "),
nPOID);
		int nIndex= 1;
		rsl.ExecSQL(szSQL);
		if(rsl.GetRecordCount() <= 0)
		{
			m_wndInvoiceList.DeleteItem(nItem);
		}
		while(!rsl.IsEOF())
		{
			tmpStr.Format(_T("%d"), nIndex++);
			rsl.GetValue(_T("pol_reference_id"), nReferenceID);
			
			nItem = m_wndInvoiceList.AddItems(
				tmpStr, 
				rsl.GetValue(_T("product_name")), 
				rsl.GetValue(_T("product_uomname")), 
				rsl.GetValue(_T("Quantity")), 
				rsl.GetValue(_T("UnitPrice")), 
				rsl.GetValue(_T("Amount")), 
				ToString(nPOID),
				rsl.GetValue(_T("pol_purchase_orderline_id")),
				NULL);
			if(nReferenceID == m_nReference_ID)
			{
				m_wndInvoiceList.SetCheck(nItem, true);
			}
			rsl.MoveNext();
		}
		rs.MoveNext();
	}
	m_wndInvoiceList.EndLoad(); 
	OnMatListLoadData();
	return nCount;

}
void CPurchaseOrderPrepareDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderPrepareDialog::OnRemoveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderPrepareDialog::OnMatListDblClick(){
	
} 
void CPurchaseOrderPrepareDialog::OnMatListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseOrderPrepareDialog::OnMatListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderPrepareDialog::OnMatListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMatList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT ") \
_T("   pol_purchase_orderline_id,") \
_T("   product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   pol_qtyorder               AS quantity,") \
_T("   pol_unitprice              AS unitprice,") \
_T("   pol_unitprice*pol_qtyorder AS amount") \
_T(" FROM purchase_orderline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id         =pol_product_item_id)") \
_T(" WHERE pol_reference_id=%ld and pol_isadded='N' and pol_ismarked='Y' "), m_nReference_ID);
	nCount = rs.ExecSQL(szSQL);
	int nIndex = 1;
	CString tmpStr;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex);
		m_wndMatList.AddItems(
			tmpStr, 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("pol_purchase_orderline_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndMatList.EndLoad(); 
	return nCount;
}
void CPurchaseOrderPrepareDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	int nCount = 0;
	long nOrderLine_ID;

	for (int i =0; i < m_wndMatList.GetItemCount(); i++){
		nOrderLine_ID = str2long(m_wndMatList.GetItemText(i, 6));

		szSQL.Format(_T("PURCHASE_ORDERLINE_COPY(%ld, %ld,'%s') "), m_nReference_ID, nOrderLine_ID, pMF->GetCurrentUser());
		int res = str2int(pMF->ExecDML(szSQL));
		if(res > 0)
		{
			nCount++;
		}
	}
	if(nCount > 0)
	{
		CGuiDialog::OnOK();
	}

} 
void CPurchaseOrderPrepareDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_wndMatList.GetItemCount() > 0){
		ShowMessageBox(_T("Dang ton tai mat hang duoc chon. Ban phai ap dung hoac bo cac mat hang da chon di"));
		return;
	}
	CGuiDialog::OnCancel();
} 
int CPurchaseOrderPrepareDialog::OnAddPurchaseOrderPrepareDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderPrepareDialog::OnEditPurchaseOrderPrepareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderPrepareDialog::OnDeletePurchaseOrderPrepareDialog(){
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
 		OnCancelPurchaseOrderPrepareDialog();
 	}
	return 0;
}
int CPurchaseOrderPrepareDialog::OnSavePurchaseOrderPrepareDialog(){
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
 		//OnPurchaseOrderPrepareDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderPrepareDialog::OnCancelPurchaseOrderPrepareDialog(){
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
int CPurchaseOrderPrepareDialog::OnPurchaseOrderPrepareDialogListLoadData(){
	return 0;
}


void CPurchaseOrderPrepareDialog::MarkItem(long nOrderLineID){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("UPDATE purchase_orderline SET pol_ismarked='Y', pol_reference_id=%ld ") \
		_T("WHERE pol_purchase_orderline_id=%ld and pol_ismarked='N' "), m_nReference_ID, nOrderLineID);
_tprintf(_T("\r\n%s"), szSQL);
	pMF->ExecSQL(szSQL);
}

void CPurchaseOrderPrepareDialog::UnMarkItem(long nOrderLineID){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("UPDATE purchase_orderline SET pol_ismarked='N', pol_reference_id=0 ") \
		_T("WHERE pol_purchase_orderline_id=%ld and pol_ismarked='Y' "), nOrderLineID);
_tprintf(_T("\r\n%s"), szSQL);
	pMF->ExecSQL(szSQL);
}

BEGIN_MESSAGE_MAP(CPurchaseOrderPrepareDialog, CGuiDialog)
	ON_WM_CLOSE()
END_MESSAGE_MAP()

void CPurchaseOrderPrepareDialog::OnClose()
{
	// TODO: Add your message handler code here and/or call default
	if(m_wndMatList.GetItemCount() > 0){
		ShowMessageBox(_T("Dang ton tai mat hang duoc chon. Ban phai ap dung hoac bo cac mat hang da chon di"));
		return;
	}
	CGuiDialog::OnClose();
}

BOOL CPurchaseOrderPrepareDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE)
	{
		if(m_wndMatList.GetItemCount() > 0){
			ShowMessageBox(_T("Dang ton tai mat hang duoc chon. Ban phai ap dung hoac bo cac mat hang da chon di"));
			return TRUE;
		}
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}
