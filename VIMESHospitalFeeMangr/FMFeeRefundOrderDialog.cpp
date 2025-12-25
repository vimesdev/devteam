#include "FMFeeRefundOrderDialog.h"
#include "MainFrm.h"
#include "HMSPatientProfiles.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeRefundOrderDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFMFeeRefundOrderDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMFeeRefundOrderDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMFeeRefundOrderDialog*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeRefundOrderDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFMFeeRefundOrderDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMFeeRefundOrderDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMFeeRefundOrderDialog*)pWnd)->OnItemListDeleteItem();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CFMFeeRefundOrderDialog *pVw = (CFMFeeRefundOrderDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFMFeeRefundOrderDialog *pVw = (CFMFeeRefundOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFMFeeRefundOrderDialogFnc(CWnd *pWnd){
	 return ((CFMFeeRefundOrderDialog*)pWnd)->OnAddFMFeeRefundOrderDialog();
} 
static int _OnEditFMFeeRefundOrderDialogFnc(CWnd *pWnd){
	 return ((CFMFeeRefundOrderDialog*)pWnd)->OnEditFMFeeRefundOrderDialog();
} 
static int _OnDeleteFMFeeRefundOrderDialogFnc(CWnd *pWnd){
	 return ((CFMFeeRefundOrderDialog*)pWnd)->OnDeleteFMFeeRefundOrderDialog();
} 
static int _OnSaveFMFeeRefundOrderDialogFnc(CWnd *pWnd){
	 return ((CFMFeeRefundOrderDialog*)pWnd)->OnSaveFMFeeRefundOrderDialog();
} 
static int _OnCancelFMFeeRefundOrderDialogFnc(CWnd *pWnd){
	 return ((CFMFeeRefundOrderDialog*)pWnd)->OnCancelFMFeeRefundOrderDialog();
} 
CFMFeeRefundOrderDialog::CFMFeeRefundOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 640;
	m_nDlgHeight = 440;
	SetDefaultValues();
}
CFMFeeRefundOrderDialog::~CFMFeeRefundOrderDialog()
{
}
void CFMFeeRefundOrderDialog::OnCreateComponents()
{
	m_wndRefundOrderList.Create(this, _T("Danh sách phiếu trả từ khoa"), 5, 5, 941, 200);
	m_wndRefundItemList.Create(this, _T("Chi tiết các mục"), 5, 201, 941, 542);
	m_wndOrderList.Create(this,10, 30, 941, 195); 
	m_wndItemList.Create(this,10, 225, 941, 538); 
	m_wndApproval.Create(this, _T("&Approval"), 775, 549, 855, 574);
	m_wndClose.Create(this, _T("&Close"), 860, 549, 940, 574);

}
void CFMFeeRefundOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();



	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndOrderList.InsertColumn(1, _T("Hóa đơn"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_DATE, 100);
	m_wndOrderList.InsertColumn(3, _T("Doc No"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(4, _T("Dept"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(5, _T("Order ID"), CFMT_TEXT, 0);
	m_wndOrderList.InsertColumn(6, _T("Lý do trả"), CFMT_TEXT, 450);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndItemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndItemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);
	m_wndItemList.InsertColumn(4, _T("Price"), CFMT_NUMBER, 90);
	m_wndItemList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 100);

}
void CFMFeeRefundOrderDialog::OnSetWindowEvents(){
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
void CFMFeeRefundOrderDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CFMFeeRefundOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMFeeRefundOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMFeeRefundOrderDialog::SetDefaultValues(){


}
int CFMFeeRefundOrderDialog::SetMode(int nMode){
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
void CFMFeeRefundOrderDialog::OnOrderListDblClick(){
	
} 
void CFMFeeRefundOrderDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nOrderID = str2long(m_wndOrderList.GetItemText(nNewItem, 5));
	OnItemListLoadData();
} 
int CFMFeeRefundOrderDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMFeeRefundOrderDialog::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	int nIdx = 1, nLine = 0;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hfe_invoiceno                 orderno, ") \
				_T("        hfe_createddate                orderdate, ") \
				_T("        hfe_docno                      docno, ") \
				_T("        Get_departmentname(hfe_deptid) dept, ") \
				_T("		hfe_status status,") \
				_T("		hfe_invoiceno orderid,") \
				_T("		hfe_desc lydotra") \
				_T(" FROM   hms_fee_refund ") \
				_T(" WHERE  hfe_status = 'O' and HFE_ORG_ID <> 'FM' and NVL(HFE_CLIENT_ID, 'XX') = 'PRE_REFUND' ") \
				_T("    AND hfe_docno = %ld"), m_nDocNo);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nLine = m_wndOrderList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Dept")), 
			rs.GetValue(_T("orderid")),
			rs.GetValue(_T("lydotra")), 
			NULL);
		rs.GetValue(_T("status"), szStatus);
		if (szStatus == _T("P"))
			m_wndOrderList.SetItemTextColor(nLine, RGB(255, 0, 0), FALSE);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CFMFeeRefundOrderDialog::OnItemListDblClick(){
	
} 
void CFMFeeRefundOrderDialog::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMFeeRefundOrderDialog::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMFeeRefundOrderDialog::OnItemListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT   hfe_desc  name, ") \
				_T("           hfe_unit      unit, ") \
				_T("           hfe_quantity  qty, ") \
				_T("           hfe_unitprice price, ") \
				_T("           hfe_cost      amount ") \
				_T(" FROM      hms_fee_refundline ") \
				_T(" WHERE     hfe_docno = %ld and hfe_invoiceno = %ld"), m_nDocNo, m_nOrderID);

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
void CFMFeeRefundOrderDialog::OnApprovalSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long double nTotalAmount = 0;
	int nSel = m_wndOrderList.GetCurSel();
	if (nSel < 0 || m_nOrderID < 0)
		return;
	//check nếu đã có kết quả thì không cho trả lại nữa
	szSQL.Format(_T("hms_check_before_refund(%ld, %ld)"), m_nDocNo, m_nOrderID);		
	int ret = str2long(pMF->ExecDML(szSQL));

	if (ret > 0)
			{
				ShowMessageBox(_T("Phiếu trả lại đã có đề mục cận lâm sàng có kết quả rồi, không cho phép duyệt!"), MB_ICONERROR);
				return;
			}	

	if (ShowMessageBox(_T("Bạn có muốn duyệt phiếu trả lại không?"), MB_YESNO) == IDNO)
		return;
	for (int i = 0; i < m_wndItemList.GetItemCount();i++)
		nTotalAmount += str2long(m_wndItemList.GetItemText(i, 5));
	szSQL.Format(_T("UPDATE hms_fee_refund SET hfe_staff = '%s', hfe_status = 'P' WHERE hfe_docno = %ld and hfe_invoiceno = %ld"), pMF->GetCurrentUser(), m_nDocNo,m_nOrderID);
	int res = pMF->ExecSQL(szSQL);
	if (res > 0)
	{
		szSQL.Format(_T("HMS_REFUND_ORDER_UPDATE_LINE(%ld, %ld)"), m_nDocNo, m_nOrderID);		
		int ret = str2long(pMF->ExecDML(szSQL));
		((CHMSPatientProfiles*) m_pWnd)->OnInvoiceListLoadData();
		CGuiDialog::OnOK();
	}
	else
	{

	}

} 
void CFMFeeRefundOrderDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFMFeeRefundOrderDialog::OnAddFMFeeRefundOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMFeeRefundOrderDialog::OnEditFMFeeRefundOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMFeeRefundOrderDialog::OnDeleteFMFeeRefundOrderDialog(){
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
 		OnCancelFMFeeRefundOrderDialog();
 	}
	return 0;
}
int CFMFeeRefundOrderDialog::OnSaveFMFeeRefundOrderDialog(){
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
 		//OnFMFeeRefundOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMFeeRefundOrderDialog::OnCancelFMFeeRefundOrderDialog(){
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
int CFMFeeRefundOrderDialog::OnFMFeeRefundOrderDialogListLoadData(){
	return 0;
}
