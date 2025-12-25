#include "AccBankStatementList.h"
#include "MainFrame_E10.h"
#include "AccBankStatementDialog.h"


/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDataPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccBankStatementList* )pWnd)->OnDataPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDataPeriodSelendokFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnDataPeriodSelendok();
}
/*static void _OnDataPeriodSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnDataPeriodKillfocus();
}*/
/*static void _OnDataPeriodKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnDataPeriodKillfocus();
}*/
static long _OnDataPeriodLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementList *)pWnd)->OnDataPeriodLoadData();
}
/*static void _OnDataPeriodAddNewFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnDataPeriodAddNew();
}*/
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CAccBankStatementList *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CAccBankStatementList *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnReloadSelectFnc(CWnd *pWnd){
	CAccBankStatementList *pVw = (CAccBankStatementList *)pWnd;
	pVw->OnReloadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAccBankStatementList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAccBankStatementList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAccBankStatementList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnListDeleteItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnListDeleteItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnListDeleteItem();
} 
static int _OnListPostItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnListDeleteItem();
}
static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnListDeleteItem();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CAccBankStatementList *pVw = (CAccBankStatementList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAccBankStatementList *pVw = (CAccBankStatementList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAccBankStatementList *pVw = (CAccBankStatementList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAccBankStatementList *pVw = (CAccBankStatementList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAccBankStatementListFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnAddAccBankStatementList();
} 
static int _OnEditAccBankStatementListFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnEditAccBankStatementList();
} 
static int _OnDeleteAccBankStatementListFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnDeleteAccBankStatementList();
} 
static int _OnSaveAccBankStatementListFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnSaveAccBankStatementList();
} 
static int _OnCancelAccBankStatementListFnc(CWnd *pWnd){
	 return ((CAccBankStatementList*)pWnd)->OnCancelAccBankStatementList();
} 
CAccBankStatementList::CAccBankStatementList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 666;
	SetDefaultValues();
}
CAccBankStatementList::~CAccBankStatementList(){
}
void CAccBankStatementList::OnCreateComponents(){

	m_wndInvoiceList.Create(this, _T("List of invoice"), 5, 65, 820, 570);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 820, 60);
	m_wndDataPeriod.Create(this,95, 30, 195, 55); 
	m_wndDataPeriodLabel.Create(this, _T("Data Period"), 10, 30, 90, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 200, 30, 280, 55);
	m_wndFromDate.Create(this,285, 30, 385, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 390, 30, 470, 55);
	m_wndToDate.Create(this,475, 30, 575, 55); 
	m_wndInvoiceNoLabel.Create(this, _T("Voucher No"), 580, 30, 660, 55);
	m_wndInvoiceNo.Create(this,665, 30, 785, 55); 
	m_wndReload.Create(this, _T("@"), 790, 30, 815, 55);
	
	m_wndList.SetAutoIndex(TRUE);
	m_wndList.Create(this,10, 90, 815, 565); 

	m_wndView.Create(this, _T("&View"), 485, 575, 565, 600);
	m_wndAdd.Create(this, _T("&Add"), 570, 575, 650, 600);
	m_wndEdit.Create(this, _T("&Edit"), 655, 575, 735, 600);
	m_wndDelete.Create(this, _T("&Delete"), 740, 575, 820, 600);


}
void CAccBankStatementList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndDataPeriod.SetCheckValue(true);
	m_wndDataPeriod.LimitText(35);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceNo.SetNotEmpty(false);

	m_wndDataPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndDataPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndDataPeriod.Format(2, 1, 20);

	m_wndList.InsertColumn(0, _T("Voucher No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Invoice Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(2, _T("Accounting Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Amount"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(4, _T("Object"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(5, _T("Transactor"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(6, _T("Reason"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Invoice Type"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("id"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("clientid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("orgid"), CFMT_TEXT, 0);
	m_wndList.GetHeaderControl()->SetItemHeight(1);

}
void CAccBankStatementList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDataPeriod.SetEvent(WE_SELENDOK, _OnDataPeriodSelendokFnc);
	//m_wndDataPeriod.SetEvent(WE_SETFOCUS, _OnDataPeriodSetfocusFnc);
	//m_wndDataPeriod.SetEvent(WE_KILLFOCUS, _OnDataPeriodKillfocusFnc);
	m_wndDataPeriod.SetEvent(WE_SELCHANGE, _OnDataPeriodSelectChangeFnc);
	m_wndDataPeriod.SetEvent(WE_LOADDATA, _OnDataPeriodLoadDataFnc);
	//m_wndDataPeriod.SetEvent(WE_ADDNEW, _OnDataPeriodAddNewFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	m_wndReload.SetEvent(WE_CLICK, _OnReloadSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.SetWindowText(_T("Cash Management"));
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc, 0, VK_F2, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Post"), _OnListPostItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("View"), _OnListViewItemFnc);
	

	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAccBankStatementListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAccBankStatementListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAccBankStatementListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAccBankStatementListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAccBankStatementListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	OnListLoadData();

}
void CAccBankStatementList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDataPeriod.GetDlgCtrlID(), m_szDataPeriodKey);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);

}
void CAccBankStatementList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAccBankStatementList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAccBankStatementList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDataPeriodKey.Empty();
	m_szInvoiceNo.Empty();

}
int CAccBankStatementList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			break; 
 		}; 
		m_wndDataPeriod.EnableWindow(TRUE);
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndInvoiceNo.EnableWindow(TRUE);
		m_wndReload.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}
/*void CAccBankStatementList::OnFromDateChange(){
	
} */
/*void CAccBankStatementList::OnFromDateSetfocus(){
	
} */
/*void CAccBankStatementList::OnFromDateKillfocus(){
	
} */
int CAccBankStatementList::OnFromDateCheckValue(){
	return 0;
} 
/*void CAccBankStatementList::OnToDateChange(){
	
} */
/*void CAccBankStatementList::OnToDateSetfocus(){
	
} */
/*void CAccBankStatementList::OnToDateKillfocus(){
	
} */
int CAccBankStatementList::OnToDateCheckValue(){
	return 0;
} 
void CAccBankStatementList::OnDataPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccBankStatementList::OnDataPeriodSelendok(){
	 
}
/*void CAccBankStatementList::OnDataPeriodSetfocus(){
	
}*/
/*void CAccBankStatementList::OnDataPeriodKillfocus(){
	
}*/
long CAccBankStatementList::OnDataPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadDataPeriodList(&m_wndDataPeriod, m_szDataPeriodKey);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDataPeriod.IsSearchKey() && str2int(m_szDataPeriodKey) > 0){
		szWhere.Format(_T(" and idx=%d "), str2int(m_szDataPeriodKey));
	};
	m_wndDataPeriod.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT * FROM acc_period_report WHERE 0=0 %s ORDER BY idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDataPeriod.AddItems(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAccBankStatementList::OnDataPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccBankStatementList::OnInvoiceNoChange(){
	
} */
/*void CAccBankStatementList::OnInvoiceNoSetfocus(){
	
} */
/*void CAccBankStatementList::OnInvoiceNoKillfocus(){
	
} */
int CAccBankStatementList::OnInvoiceNoCheckValue(){
	return 0;
} 
void CAccBankStatementList::OnReloadSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
void CAccBankStatementList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

} 
void CAccBankStatementList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szID = m_wndList.GetItemText(nNewItem, 8);
	SetMode(VM_VIEW);
} 
int CAccBankStatementList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAccBankStatementList();
	 return 0;
} 
long CAccBankStatementList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szVoucherType.IsEmpty())
		szWhere.Format(_T(" and fabs_invoicetype='%s' "), m_szVoucherType);

	szWhere.AppendFormat(_T(" and trunc_date(fabs_acctdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);
	if(!m_szInvoiceNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fabs_invoiceno='%s' "), m_szInvoiceNo);

	}
	szSQL.Format(_T("SELECT fabs_bankstatement_id as bankstatement_id, fabs_client_id, fabs_org_id, fabs_user_id, fabs_invoicedate as invoicedate, ") \
			_T(" fabs_invoiceno as invoiceno, fabs_acctdate as acctdate, ") \
			_T("(select distinct fap_name from fa_partner where fap_partner_id=fabs_partner_id)  as partner, ") \
			_T("fabs_transactor as transactor, ") \
			_T("fabs_reason as reason, fabs_amount as totalamount ") \
			_T(" FROM fa_bankstatement ") \
			_T("WHERE fabs_isactive='Y' %s ") \
			_T("ORDER BY fabs_bankstatement_id"), szWhere);
////Notice(szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Acctdate")), 
			rs.GetValue(_T("TotalAmount")), 
			rs.GetValue(_T("Partner")), 
			rs.GetValue(_T("Transactor")), 
			rs.GetValue(_T("Reason")), 
			rs.GetValue(_T("ReceiptType")), 
			rs.GetValue(_T("bankstatement_id")),
			rs.GetValue(_T("fabs_client_id")),
			rs.GetValue(_T("fabs_org_id")),
			rs.GetValue(_T("fabs_user_id")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return 0;
}
void CAccBankStatementList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	//The hien ca ghi no/co/chuyen noi bo
	CAccBankStatementDialog dlg(this, VM_VIEW, m_szVoucherType);
	dlg.m_szID = m_szID;
	if(dlg.DoModal() == IDOK){
	}

	Refresh();
	
} 
void CAccBankStatementList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CAccBankStatementDialog dlg(this, VM_ADD, m_szVoucherType);
	if(dlg.DoModal() == IDOK){
	}
	
	Refresh();
} 
void CAccBankStatementList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CAccBankStatementDialog dlg(this, VM_EDIT, m_szVoucherType);
	dlg.m_szID = m_szID;
	if(dlg.DoModal() == IDOK){
	}
	
	Refresh();
} 
void CAccBankStatementList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
} 
int CAccBankStatementList::OnAddAccBankStatementList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAccBankStatementList::OnEditAccBankStatementList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccBankStatementList::OnDeleteAccBankStatementList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szClientID, szOrgID; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;

 	if(ShowMessageBox(_T("Do you want to delete invoice?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szClientID = m_wndList.GetItemText(nSel, 9);
	szOrgID = m_wndList.GetItemText(nSel, 10);
	
	szSQL.Format(_T("FA_BANK_DELETE('%s','%s', '%s', '%s')"), m_szID, szClientID, szOrgID, pMF->GetCurrentUser() ); 

	//Notice(szSQL);

 	CString szRet = pMF->ExecDML(szSQL); 
 	if(szRet == _T("OK")){ 
		m_wndList.DeleteItem(nSel);
 	}
	else
	{
		ShowMessageBox(_T("Cannot delete invoice with current status"), MB_OK|MB_ICONWARNING);
	}
	return 0;
}
int CAccBankStatementList::OnSaveAccBankStatementList(){
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
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnAccBankStatementListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAccBankStatementList::OnCancelAccBankStatementList(){
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
int CAccBankStatementList::OnAccBankStatementListListLoadData(){
	return 0;
}

void CAccBankStatementList::SetVoucherType(CString szType){
	m_szVoucherType = szType;
}
void CAccBankStatementList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);
}