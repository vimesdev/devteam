#include "ARQuoteList.h"
#include "MainFrame_E10.h"
#include "ARQuoteDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CARQuoteList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteList *)pWnd)->OnSearchCheckValue();
} 
static void _OnOptionSelectFnc(CWnd *pWnd){
	CARQuoteList *pVw = (CARQuoteList *)pWnd;
	pVw->OnOptionSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CARQuoteList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CARQuoteList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CARQuoteList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CARQuoteList*)pWnd)->OnListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CARQuoteList *pVw = (CARQuoteList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CARQuoteList *pVw = (CARQuoteList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CARQuoteList *pVw = (CARQuoteList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CARQuoteList *pVw = (CARQuoteList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddARQuoteListFnc(CWnd *pWnd){
	 return ((CARQuoteList*)pWnd)->OnAddARQuoteList();
} 
static int _OnEditARQuoteListFnc(CWnd *pWnd){
	 return ((CARQuoteList*)pWnd)->OnEditARQuoteList();
} 
static int _OnDeleteARQuoteListFnc(CWnd *pWnd){
	 return ((CARQuoteList*)pWnd)->OnDeleteARQuoteList();
} 
static int _OnSaveARQuoteListFnc(CWnd *pWnd){
	 return ((CARQuoteList*)pWnd)->OnSaveARQuoteList();
} 
static int _OnCancelARQuoteListFnc(CWnd *pWnd){
	 return ((CARQuoteList*)pWnd)->OnCancelARQuoteList();
} 
CARQuoteList::CARQuoteList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 753;
	SetDefaultValues();
}
CARQuoteList::~CARQuoteList(){
}
void CARQuoteList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndInvoiceList.Create(this, _T("List of invoice"), 5, 65, 800, 570);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 195, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 390, 30, 615, 55);
	m_wndSearch.Create(this,620, 30, 766, 55); 
	m_wndOption.Create(this, _T("..."), 771, 30, 796, 55);
	m_wndList.Create(this,10, 90, 795, 565); 
	m_wndView.Create(this, _T("&View"), 465, 575, 545, 600);
	m_wndAdd.Create(this, _T("&Add"), 550, 575, 630, 600);
	m_wndEdit.Create(this, _T("&Edit"), 635, 575, 715, 600);
	m_wndDelete.Create(this, _T("&Delete"), 720, 575, 800, 600);

}
void CARQuoteList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T("id"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(2, _T("No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Customer Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("Phone"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Sales Person"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Exp. Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(7, _T("Delivery Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(8, _T("Currency"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(9, _T("Total Price"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(10, _T("Total Price(GBP)"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(11, _T("Job Name"), CFMT_TEXT, 0);

}

void CARQuoteList::OnSetWindowEvents(){
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
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddARQuoteListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditARQuoteListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteARQuoteListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveARQuoteListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelARQuoteListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CARQuoteList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CARQuoteList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CARQuoteList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CARQuoteList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}

int CARQuoteList::SetMode(int nMode){
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
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndOption.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}

/*void CARQuoteList::OnFromDateChange(){
	
} */
/*void CARQuoteList::OnFromDateSetfocus(){
	
} */
/*void CARQuoteList::OnFromDateKillfocus(){
	
} */
int CARQuoteList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CARQuoteList::OnToDateChange(){
	
} */
/*void CARQuoteList::OnToDateSetfocus(){
	
} */
/*void CARQuoteList::OnToDateKillfocus(){
	
} */
int CARQuoteList::OnToDateCheckValue(){
	return 0;
}
 
/*void CARQuoteList::OnSearchChange(){
	
} */
/*void CARQuoteList::OnSearchSetfocus(){
	
} */
/*void CARQuoteList::OnSearchKillfocus(){
	
} */
int CARQuoteList::OnSearchCheckValue(){
	return 0;
} 
void CARQuoteList::OnOptionSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CARQuoteList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

}
 
void CARQuoteList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
}
 
int CARQuoteList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteARQuoteList();
	 return 0;
}
 
long CARQuoteList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and trunc_date(fac_acctdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fac_invoiceno='%s' "), m_szSearch);

	}
	szSQL.Format(_T("SELECT fac_cash_id as id, fac_client_id, fac_org_id, fac_user_id, fac_invoicedate as invoicedate, ") \
			_T(" fac_invoiceno as invoiceno, fac_acctdate as acctdate, ") \
			_T("(select distinct fap_name from fa_partner where fap_partner_id=fac_partner_id)  as partner, ") \
			_T("fac_transactor as transactor, ") \
			_T("fac_reason as reason, fac_amount as totalamount ") \
			_T(" FROM fa_cash WHERE fac_isactive='Y' %s ORDER BY fac_cash_id"), szWhere);
//Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Search")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("acctdate")), 
			rs.GetValue(_T("TotalAmount")),
			rs.GetValue(_T("partner")), 
			rs.GetValue(_T("Transactor")), 
			rs.GetValue(_T("Reason")), 
			rs.GetValue(_T("ReceiptType")), 
			rs.GetValue(_T("id")),
			rs.GetValue(_T("fac_client_id")),
			rs.GetValue(_T("fac_org_id")),
			rs.GetValue(_T("fac_user_id")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return 0;
}

void CARQuoteList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	CARQuoteDialog dlg(this, VM_VIEW);
	dlg.m_szID = m_szID;
	dlg.SetMode(VM_VIEW);
	if(dlg.DoModal() == IDOK){
	}

	Refresh();
	
}
 
void CARQuoteList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CARQuoteDialog dlg(this, VM_ADD);
	if(dlg.DoModal() == IDOK){
	}
	Refresh();
}
 
void CARQuoteList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CARQuoteDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	if(dlg.DoModal() == IDOK){
	}
	Refresh();
}
 
void CARQuoteList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
}
 
int CARQuoteList::OnAddARQuoteList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CARQuoteList::OnEditARQuoteList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CARQuoteList::OnDeleteARQuoteList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szClientID, szOrgID; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;

 	if(ShowMessageBox(_T("Do you want to delete invoice?(Y/"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szClientID = m_wndList.GetItemText(nSel, 9);
	szOrgID = m_wndList.GetItemText(nSel, 10);
	
	szSQL.Format(_T("FA_CASH_DELETE('%s','%s', '%s', '%s')"), m_szID, szClientID, szOrgID, pMF->GetCurrentUser() ); 

	//Notice(szSQL);

 	CString szRet = pMF->ExecDML(szSQL); 
 	if(szRet != _T("ERR")){ 
		m_wndList.DeleteItem(nSel);
 	}
	else
	{
		ShowMessageBox(_T("Cannot delete invoice with current status"), MB_OK|MB_ICONWARNING);
	}
	return 0;
}

int CARQuoteList::OnSaveARQuoteList(){
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
 		//OnARQuoteListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CARQuoteList::OnCancelARQuoteList(){
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
 
int CARQuoteList::OnARQuoteListListLoadData(){
	return 0;
}



void CARQuoteList::Refresh(){

}