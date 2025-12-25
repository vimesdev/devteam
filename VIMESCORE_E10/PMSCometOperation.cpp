#include "PMSCometOperation.h"
#include "MainFrame_E10.h"
#include "QuantityAdjustmentDialog.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSCometOperation *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSCometOperation *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSCometOperation* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSCometOperation *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSCometOperation *)pWnd)->OnStorageAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CPMSCometOperation *pVw = (CPMSCometOperation *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnPurchaseOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPMSCometOperation*)pWnd)->OnPurchaseOrderListLoadData();
} 
static void _OnPurchaseOrderListDblClickFnc(CWnd *pWnd){
	((CPMSCometOperation*)pWnd)->OnPurchaseOrderListDblClick();
} 
static void _OnPurchaseOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSCometOperation*)pWnd)->OnPurchaseOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnPurchaseOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSCometOperation*)pWnd)->OnPurchaseOrderListDeleteItem();
} 
static long _OnLineListLoadDataFnc(CWnd *pWnd){
	return ((CPMSCometOperation*)pWnd)->OnLineListLoadData();
} 
static void _OnLineListDblClickFnc(CWnd *pWnd){
	((CPMSCometOperation*)pWnd)->OnLineListDblClick();
} 
static void _OnLineListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSCometOperation*)pWnd)->OnLineListSelectChange(nOldItem, nNewItem);
} 
static int _OnLineListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSCometOperation*)pWnd)->OnLineListDeleteItem();
} 
static int _OnAddPMSCometOperationFnc(CWnd *pWnd){
	 return ((CPMSCometOperation*)pWnd)->OnAddPMSCometOperation();
} 
static int _OnEditPMSCometOperationFnc(CWnd *pWnd){
	 return ((CPMSCometOperation*)pWnd)->OnEditPMSCometOperation();
} 
static int _OnDeletePMSCometOperationFnc(CWnd *pWnd){
	 return ((CPMSCometOperation*)pWnd)->OnDeletePMSCometOperation();
} 
static int _OnSavePMSCometOperationFnc(CWnd *pWnd){
	 return ((CPMSCometOperation*)pWnd)->OnSavePMSCometOperation();
} 
static int _OnCancelPMSCometOperationFnc(CWnd *pWnd){
	 return ((CPMSCometOperation*)pWnd)->OnCancelPMSCometOperation();
} 
CPMSCometOperation::CPMSCometOperation(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 575;
	SetDefaultValues();
}
CPMSCometOperation::~CPMSCometOperation(){
}
void CPMSCometOperation::OnCreateComponents(){
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 5, 65, 800, 305);
	m_wndLineInformation.Create(this, _T("Line Information"), 5, 310, 800, 570);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 295, 55);
	m_wndToDate.Create(this,300, 30, 395, 55); 
	m_wndStorageLabel.Create(this, _T("From Storage"), 400, 30, 490, 55);
	m_wndStorage.Create(this,495, 30, 765, 55); 
	m_wndRefresh.Create(this, _T("@"), 770, 30, 795, 55);
	m_wndPurchaseOrderList.Create(this,10, 90, 795, 300); 
	m_wndLineList.Create(this,10, 335, 795, 565); 

}
void CPMSCometOperation::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndPurchaseOrderList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndPurchaseOrderList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 100);
	m_wndPurchaseOrderList.InsertColumn(2, _T("Order Date"), CFMT_DATE, 100);
	m_wndPurchaseOrderList.InsertColumn(3, _T("Import Date"), CFMT_DATE, 100);
	m_wndPurchaseOrderList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 200);
	m_wndPurchaseOrderList.InsertColumn(5, _T("Creator"), CFMT_TEXT, 100);

	m_wndLineList.InsertColumn(0, _T("Line ID"), CFMT_NUMBER, 0);
	m_wndLineList.InsertColumn(1, _T("Index"), CFMT_NUMBER, 30);
	m_wndLineList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndLineList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndLineList.InsertColumn(4, _T("Price"), CFMT_MONEY, 100);
	m_wndLineList.InsertColumn(5, _T("Line Amount"), CFMT_MONEY, 100);

}
void CPMSCometOperation::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndPurchaseOrderList.SetEvent(WE_SELCHANGE, _OnPurchaseOrderListSelectChangeFnc);
	m_wndPurchaseOrderList.SetEvent(WE_LOADDATA, _OnPurchaseOrderListLoadDataFnc);
	m_wndPurchaseOrderList.SetEvent(WE_DBLCLICK, _OnPurchaseOrderListDblClickFnc);
	m_wndLineList.SetEvent(WE_SELCHANGE, _OnLineListSelectChangeFnc);
	m_wndLineList.SetEvent(WE_LOADDATA, _OnLineListLoadDataFnc);
	m_wndLineList.SetEvent(WE_DBLCLICK, _OnLineListDblClickFnc);
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	UpdateData(false);
}
void CPMSCometOperation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);

}
void CPMSCometOperation::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSCometOperation::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSCometOperation::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szOrderID.Empty();
	m_szLineID.Empty();

}
int CPMSCometOperation::SetMode(int nMode){
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
/*void CPMSCometOperation::OnFromDateChange(){
	
} */
/*void CPMSCometOperation::OnFromDateSetfocus(){
	
} */
/*void CPMSCometOperation::OnFromDateKillfocus(){
	
} */
int CPMSCometOperation::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSCometOperation::OnToDateChange(){
	
} */
/*void CPMSCometOperation::OnToDateSetfocus(){
	
} */
/*void CPMSCometOperation::OnToDateKillfocus(){
	
} */
int CPMSCometOperation::OnToDateCheckValue(){
	return 0;
} 
void CPMSCometOperation::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSCometOperation::OnStorageSelendok(){
	 
}
/*void CPMSCometOperation::OnStorageSetfocus(){
	
}*/
/*void CPMSCometOperation::OnStorageKillfocus(){
	
}*/
long CPMSCometOperation::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND msl_storage_id IN (10, 11)"));
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMSCometOperation::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSCometOperation::OnRefreshSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnPurchaseOrderListLoadData();	
} 
void CPMSCometOperation::OnPurchaseOrderListDblClick(){
	
} 
void CPMSCometOperation::OnPurchaseOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szOrderID = m_wndPurchaseOrderList.GetItemText(nNewItem, 0);
	OnLineListLoadData();
} 
int CPMSCometOperation::OnPurchaseOrderListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSCometOperation::OnPurchaseOrderListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" WHERE po_approveddate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s') AND po_status = 'A'"), m_szFromDate, m_szToDate);
	if (!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id = %s"), m_szStorageKey);
	else
		szWhere.AppendFormat(_T(" AND po_storage_id IN (10, 11)"));
	szSQL.Format(_T("SELECT * FROM purchase_order %s "), szWhere);
	m_wndPurchaseOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPurchaseOrderList.AddItems(
			rs.GetValue(_T("po_purchase_order_id")),
			rs.GetValue(_T("po_orderno")),
			rs.GetValue(_T("po_orderdate")),
			rs.GetValue(_T("po_approveddate")),
			rs.GetValue(_T("po_totalamount")),
			rs.GetValue(_T("po_createdby")),
			NULL);
		rs.MoveNext();
	}
	m_wndPurchaseOrderList.EndLoad(); 
	return nCount;

}
void CPMSCometOperation::OnLineListDblClick(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndLineList.GetCurSel();
	if(nSel < 0) return;
	CString szSQL;
	int nCount = 0;
	long nAdjust = 0;
	CQuantityAdjustmentDialog dlg(this);
	dlg.m_nRealInventoryQuantity = ToDouble(m_wndLineList.GetItemText(nSel, 3));
	if (dlg.DoModal() == IDOK)
	{
		
		if (m_szLineID.IsEmpty())
			return;
		nAdjust = dlg.m_nRealInventoryQuantity;
		if (nAdjust <= 0)
			return;
		szSQL.Format(_T("UPDATE purchase_orderline SET pol_qtyorder = %ld WHERE pol_purchase_orderline_id = %s"), nAdjust, m_szLineID);
		nCount = pMF->ExecSQL(szSQL);
		if (nCount > 0)
		{
			m_wndLineList.SetItemText(nSel, 3, ToString(nAdjust));
		}
	}	
} 
void CPMSCometOperation::OnLineListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szLineID = m_wndLineList.GetItemText(nNewItem, 0);
} 
int CPMSCometOperation::OnLineListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSCometOperation::OnLineListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nIndex = 1;
	if (m_szOrderID.IsEmpty())
		return 0;
	szWhere.AppendFormat(_T(" WHERE pol_purchase_order_id = %s"), m_szOrderID);
	szSQL.Format(_T("SELECT pol_purchase_orderline_id as id, mp_name as name, pol_qtyorder as quantity, pol_unitprice as price, pol_totalamount as amount FROM purchase_orderline LEFT JOIN m_product ON (mp_product_id = pol_product_id) %s"), szWhere);
	m_wndLineList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLineList.AddItems(
			rs.GetValue(_T("id")),
			int2str(nIndex++),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("quantity")),
			rs.GetValue(_T("price")),
			rs.GetValue(_T("amount")),
			NULL);
		rs.MoveNext();
	}

	m_wndLineList.EndLoad(); 
	return nCount;

}
int CPMSCometOperation::OnAddPMSCometOperation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSCometOperation::OnEditPMSCometOperation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSCometOperation::OnDeletePMSCometOperation(){
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
 		OnCancelPMSCometOperation();
 	}
	return 0;
}
int CPMSCometOperation::OnSavePMSCometOperation(){
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
 		//OnPMSCometOperationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSCometOperation::OnCancelPMSCometOperation(){
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
int CPMSCometOperation::OnPMSCometOperationListLoadData(){
	return 0;
}
BOOL CPMSCometOperation::PreTranslateMessage(MSG* pMsg){
	if (pMsg->message == WM_KEYDOWN)
		if (pMsg->wParam == VK_SPACE)
		{
			if (pMsg->hwnd == m_wndLineList.GetSafeHwnd())
			{
				OnLineListDblClick();
			}
		}
	return CGuiView::PreTranslateMessage(pMsg);
}