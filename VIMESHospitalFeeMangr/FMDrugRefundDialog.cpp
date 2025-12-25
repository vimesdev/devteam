#include "FMDrugRefundDialog.h"
#include "MainFrm.h"
#include "HMSPatientProfiles.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFMDrugRefundDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFMDrugRefundDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMDrugRefundDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMDrugRefundDialog*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFMDrugRefundDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFMDrugRefundDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMDrugRefundDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMDrugRefundDialog*)pWnd)->OnItemListDeleteItem();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CFMDrugRefundDialog *pVw = (CFMDrugRefundDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFMDrugRefundDialog *pVw = (CFMDrugRefundDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFMDrugRefundDialogFnc(CWnd *pWnd){
	 return ((CFMDrugRefundDialog*)pWnd)->OnAddFMDrugRefundDialog();
} 
static int _OnEditFMDrugRefundDialogFnc(CWnd *pWnd){
	 return ((CFMDrugRefundDialog*)pWnd)->OnEditFMDrugRefundDialog();
} 
static int _OnDeleteFMDrugRefundDialogFnc(CWnd *pWnd){
	 return ((CFMDrugRefundDialog*)pWnd)->OnDeleteFMDrugRefundDialog();
} 
static int _OnSaveFMDrugRefundDialogFnc(CWnd *pWnd){
	 return ((CFMDrugRefundDialog*)pWnd)->OnSaveFMDrugRefundDialog();
} 
static int _OnCancelFMDrugRefundDialogFnc(CWnd *pWnd){
	 return ((CFMDrugRefundDialog*)pWnd)->OnCancelFMDrugRefundDialog();
} 
CFMDrugRefundDialog::CFMDrugRefundDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 640;
	m_nDlgHeight = 440;
	SetDefaultValues();
}
CFMDrugRefundDialog::~CFMDrugRefundDialog(){
}
void CFMDrugRefundDialog::OnCreateComponents(){
	m_wndRefundOrderList.Create(this, _T("Refund Order List"), 5, 5, 630, 195);
	m_wndRefundItemList.Create(this, _T("Refund Item List"), 5, 200, 630, 400);
	m_wndOrderList.Create(this,10, 30, 625, 190); 
	m_wndItemList.Create(this,10, 225, 625, 395); 
	m_wndApproval.Create(this, _T("&Approval"), 465, 405, 545, 430);
	m_wndClose.Create(this, _T("&Close"), 550, 405, 630, 430);

}
void CFMDrugRefundDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();



	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_DATE, 100);
	m_wndOrderList.InsertColumn(3, _T("Doc No"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(4, _T("Dept"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(5, _T("Order ID"), CFMT_TEXT, 0);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndItemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndItemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);
	m_wndItemList.InsertColumn(4, _T("Price"), CFMT_NUMBER, 90);
	m_wndItemList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 100);

}
void CFMDrugRefundDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnOrderListLoadData();
	SetMode(VM_VIEW);

}
void CFMDrugRefundDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CFMDrugRefundDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMDrugRefundDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMDrugRefundDialog::SetDefaultValues(){


}
int CFMDrugRefundDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
void CFMDrugRefundDialog::OnOrderListDblClick(){
	
} 
void CFMDrugRefundDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nOrderID = str2long(m_wndOrderList.GetItemText(nNewItem, 5));
	OnItemListLoadData();
} 
int CFMDrugRefundDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMDrugRefundDialog::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	int nIdx = 1, nLine = 0;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT '[HT]'||hfe_receiptno                orderno, ") \
				_T("        hfe_createddate                orderdate, ") \
				_T("        hfe_docno                      docno, ") \
				_T("        Get_departmentname(hfe_deptid) dept, ") \
				_T("		hfe_status status,") \
				_T("		hfe_invoiceno orderid") \
				_T(" FROM   hms_fee_refund ") \
				_T(" WHERE  hfe_status = 'O' ") \
				_T("    AND hfe_docno = %ld"), m_nDocNo);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nLine = m_wndOrderList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Dept")), 
			rs.GetValue(_T("orderid")), NULL);
		rs.GetValue(_T("status"), szStatus);
		if (szStatus == _T("P"))
			m_wndOrderList.SetItemTextColor(nLine, RGB(255, 0, 0), FALSE);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CFMDrugRefundDialog::OnItemListDblClick(){
	
} 
void CFMDrugRefundDialog::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMDrugRefundDialog::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMDrugRefundDialog::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT    product_name  name, ") \
				_T("           hfe_unit      unit, ") \
				_T("           hfe_quantity  qty, ") \
				_T("           hfe_unitprice price, ") \
				_T("           hfe_cost      amount ") \
				_T(" FROM      hms_fee_refundline ") \
				_T(" LEFT JOIN m_productitem_view ON ( product_item_id = hfe_itemid ) ") \
				_T(" WHERE     hfe_invoiceno = %ld"), m_nOrderID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CFMDrugRefundDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long double nTotalAmount = 0;
	int nSel = m_wndOrderList.GetCurSel();
	if (nSel < 0 || m_nOrderID < 0)
		return;
	if (ShowMessageBox(_T("Do you want to approve this order?"), MB_YESNO) == IDNO)
		return;
	for (int i = 0; i < m_wndItemList.GetItemCount();i++)
		nTotalAmount += str2long(m_wndItemList.GetItemText(i, 5));
	szSQL.Format(_T("UPDATE hms_fee_refund SET hfe_staff = '%s', hfe_status = 'P', hfe_amount = %f WHERE hfe_invoiceno = %ld"), pMF->GetCurrentUser(), nTotalAmount, m_nOrderID);
	int res = pMF->ExecSQL(szSQL);
	if (res > 0)
	{
		((CHMSPatientProfiles*) m_pWnd)->OnInvoiceListLoadData();
	}
	else
	{
	
	}

} 
void CFMDrugRefundDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFMDrugRefundDialog::OnAddFMDrugRefundDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMDrugRefundDialog::OnEditFMDrugRefundDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMDrugRefundDialog::OnDeleteFMDrugRefundDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelFMDrugRefundDialog();
 	}
	return 0;
}
int CFMDrugRefundDialog::OnSaveFMDrugRefundDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnFMDrugRefundDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMDrugRefundDialog::OnCancelFMDrugRefundDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFMDrugRefundDialog::OnFMDrugRefundDialogListLoadData(){
	return 0;
}
