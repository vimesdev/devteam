#include "ContractPaymentOrderList.h"
#include "MainFrame_E10.h"
#include "ContractPaymentOrderDialog.h"
#include ".\ContractPaymentOrderList.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CContractPaymentOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CContractPaymentOrderList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CContractPaymentOrderList *)pWnd)->OnSearchCheckValue();
} 
static void _OnOptionSelectFnc(CWnd *pWnd){
	CContractPaymentOrderList *pVw = (CContractPaymentOrderList *)pWnd;
	pVw->OnOptionSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CContractPaymentOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CContractPaymentOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CContractPaymentOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnListDeleteItem();
}
static int _OnListRollbackItemFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnListRollbackItem();
}
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnListEditItem();
}

static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnListViewItem();
}

static void _OnViewSelectFnc(CWnd *pWnd){
	CContractPaymentOrderList *pVw = (CContractPaymentOrderList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CContractPaymentOrderList *pVw = (CContractPaymentOrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CContractPaymentOrderList *pVw = (CContractPaymentOrderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CContractPaymentOrderList *pVw = (CContractPaymentOrderList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddPurchaseOrderInvoiceListFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnAddPurchaseOrderInvoiceList();
} 
static int _OnEditPurchaseOrderInvoiceListFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnEditPurchaseOrderInvoiceList();
} 
static int _OnDeletePurchaseOrderInvoiceListFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnDeletePurchaseOrderInvoiceList();
} 
static int _OnSavePurchaseOrderInvoiceListFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnSavePurchaseOrderInvoiceList();
} 
static int _OnCancelPurchaseOrderInvoiceListFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderList*)pWnd)->OnCancelPurchaseOrderInvoiceList();
} 
CContractPaymentOrderList::CContractPaymentOrderList(){

	m_nDlgWidth = 825;
	m_nDlgHeight = 625;
	SetDefaultValues();
	m_szType = _T("POO");
	SetWindowName(_T("ContractPaymentOrderList"));
}
CContractPaymentOrderList::~CContractPaymentOrderList(){
}
void CContractPaymentOrderList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndQuoteList.Create(this, _T("Quote List"), 5, 65, 810, 590);
	m_wndFromDate.Create(this,95, 30, 185, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 30, 270, 55);
	m_wndToDate.Create(this,275, 30, 365, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 370, 30, 450, 55);
	m_wndSearch.Create(this,455, 30, 775, 55); 
	m_wndOption.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndView.Create(this, _T("&View"), 475, 595, 555, 620);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndList.Create(this,10, 90, 805, 585); 

}
void CContractPaymentOrderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndSearch.SetNotEmpty(true);

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);	//pp_Purchase_payment_id
	m_wndList.InsertColumn(1, _T("ORDERNO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(3, _T("Acct Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(4, _T("Deposit Number"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(5, _T("Source"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndList.InsertColumn(8, _T("CreatedBy"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(9, _T("Số phiếu ĐNTT"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(10, _T("Trạng thái ở TC"), CFMT_TEXT, 150);	
	m_nSearchID = 1;

}

void CContractPaymentOrderList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndOption.SetEvent(WE_CLICK, _OnOptionSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Purchase Order"));
	m_wndList.AddEvent(1, _T("View\tF3"), _OnListViewItemFnc,0, VK_F3);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Thêm phiếu"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Sửa phiếu"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Xóa phiếu"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Khôi phục lại phiếu"), _OnListRollbackItemFnc);

	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderInvoiceListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderInvoiceListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderInvoiceListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderInvoiceListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderInvoiceListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	OnListLoadData();

}
void CContractPaymentOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
}
void CContractPaymentOrderList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CContractPaymentOrderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CContractPaymentOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}

int CContractPaymentOrderList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2,  -1); 
			
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			break; 
 		}; 
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndOption.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}

/*void CContractPaymentOrderList::OnFromDateChange(){
	
} */
/*void CContractPaymentOrderList::OnFromDateSetfocus(){
	
} */
/*void CContractPaymentOrderList::OnFromDateKillfocus(){
	
} */
int CContractPaymentOrderList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CContractPaymentOrderList::OnToDateChange(){
	
} */
/*void CContractPaymentOrderList::OnToDateSetfocus(){
	
} */
/*void CContractPaymentOrderList::OnToDateKillfocus(){
	
} */
int CContractPaymentOrderList::OnToDateCheckValue(){
	return 0;
} 
/*void CContractPaymentOrderList::OnSearchChange(){
	
} */
/*void CContractPaymentOrderList::OnSearchSetfocus(){
	
} */
/*void CContractPaymentOrderList::OnSearchKillfocus(){
	
} */
int CContractPaymentOrderList::OnSearchCheckValue(){
	
	OnListLoadData();

	return 1;
}
 
void CContractPaymentOrderList::OnOptionSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	OnListLoadData();
}
 
void CContractPaymentOrderList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

}
 
void CContractPaymentOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	CString tmpStr = m_wndList.GetItemText(nNewItem, 7);
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_wndList.SetMenuState(5, tmpStr==_T("A")?TRUE:FALSE);
	SetMode(VM_VIEW);
}
 
int CContractPaymentOrderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderInvoiceList();
	return 0;
}

int CContractPaymentOrderList::OnListRollbackItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	int nRes = 0;
	if (m_nID < 0) return -1;
	szSQL.Format(_T("UPDATE purchase_payment SET pp_status = 'O' WHERE pp_purchase_payment_id = %ld and pp_status='A' "), m_nID);
	nRes = pMF->ExecSQL(szSQL);
	szSQL.Format(_T("UPDATE purchase_order SET po_payment_times = 0 WHERE po_refpayment_id = %ld"), m_nID);
	nRes += pMF->ExecSQL(szSQL);
	if (nRes > 0){
		AfxMessageBox(_T("Rollback successfully!"));
		OnListLoadData();
	}
	return nRes;
}

int CContractPaymentOrderList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddSelect();
	 return 0;
}
int CContractPaymentOrderList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditSelect();
	 return 0;
}

int CContractPaymentOrderList::OnListViewItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();
	 return 0;
}

long CContractPaymentOrderList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	UpdateData(TRUE);
	
	szWhere.AppendFormat(_T(" and pp_org_id IN('GL','%s') "), pMF->GetModuleID());
	
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(pp_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}

	szSQL.Format(_T(" SELECT pp_purchase_payment_id as order_id, pp_orderno as orderno,") \
_T("   pp_orderdate as orderdate,") \
_T("   pp_depositnumber as depositnumber, ") \
_T("   (select ADPR_description from ad_payment_resource where ADPR_PAYMENT_RESOURCE_ID = PP_PAYMENT_RESOURCE_ID) as source,") \
_T("   pp_totalamount as amount, pp_createdby  as createdby, pp_status as status, pp_acctdate acct_date, PP_PAYMENT_ORDER_ID as sophieu_dntt, ") \
_T("   (SELECT ss_desc FROM sys_sel where ss_id='PAYMENT_STATUS' AND NVL(PAYMENT_STATUS,'X')=SS_CODE) as trangthaitt")
_T(" FROM purchase_payment LEFT JOIN c_order ON (PP_PAYMENT_ORDER_ID=C_ORDER_ID)") \
_T(" WHERE pp_type='TU' and trunc(pp_acctdate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD') ") \
_T(" %s and pp_createdby='%s' ") \
_T(" ORDER BY pp_purchase_payment_id desc"), m_szFromDate, m_szToDate, szWhere, pMF->GetCurrentUser());

//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("order_id")),
			rs.GetValue(_T("orderno")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("acct_date")),
			rs.GetValue(_T("depositnumber")), 
			rs.GetValue(_T("source")), 
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("createdby")),
			rs.GetValue(_T("sophieu_dntt")),
			rs.GetValue(_T("trangthaitt")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return 0;
}

void CContractPaymentOrderList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an order"), MB_OK);
		return;
	}

	CContractPaymentOrderDialog dlg(pMF, VM_VIEW);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
}
 
void CContractPaymentOrderList::OnAddSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() != _T("GL"))
	{
		CContractPaymentOrderDialog dlg(pMF, VM_ADD);
		if(dlg.DoModal() == IDOK){
			Refresh();	
		}
	}
	
}
 
void CContractPaymentOrderList::OnEditSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return;
	if(pMF->GetModuleID() != _T("GL"))
	{
		CContractPaymentOrderDialog dlg(pMF, VM_EDIT);
		dlg.m_nID  = m_nID;
		if(dlg.DoModal() == IDOK){
			Refresh();	
		}
	}
}
 
void CContractPaymentOrderList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
}
 
int CContractPaymentOrderList::OnAddPurchaseOrderInvoiceList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CContractPaymentOrderList::OnEditPurchaseOrderInvoiceList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CContractPaymentOrderList::OnDeletePurchaseOrderInvoiceList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szClientID, szOrgID; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;

 	if(ShowMessageBox(_T("Do you want to delete invoice?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szClientID = m_wndList.GetItemText(nSel, 0);
	szOrgID = m_wndList.GetItemText(nSel, 10);
	
	szSQL.Format(_T("PURCHASE_PAYMENT_DELETE(%ld, '%s')"), m_nID, pMF->GetCurrentUser()); 

	//Notice(szSQL);

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		m_wndList.DeleteItem(nSel);
 	}
	else
	{
		ShowMessageBox(_T("Cannot delete invoice with current status"), MB_OK|MB_ICONWARNING);
	}
	return 0;
}

int CContractPaymentOrderList::OnSavePurchaseOrderInvoiceList(){
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
 		//OnPurchaseOrderInvoiceListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CContractPaymentOrderList::OnCancelPurchaseOrderInvoiceList(){
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
 
int CContractPaymentOrderList::OnPurchaseOrderInvoiceListListLoadData(){
	return 0;
}


void CContractPaymentOrderList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);

}BEGIN_MESSAGE_MAP(CContractPaymentOrderList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CContractPaymentOrderList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}

void CContractPaymentOrderList::OnResizeLayout()
{
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndQuoteList, 100, 100);

	AddBottom(&m_wndView);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
}