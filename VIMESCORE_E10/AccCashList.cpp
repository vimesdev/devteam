#include "AccCashList.h"
#include "MainFrame_E10.h"
#include "AccCashDialog.h"
#include "HMSReportForms/PrintForms.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAccCashList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAccCashList *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashList* )pWnd)->OnObjectTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnObjectTypeSelendok();
}
/*static void _OnObjectTypeSetfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnObjectTypeKillfocus();
}*/
/*static void _OnObjectTypeKillfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnObjectTypeKillfocus();
}*/
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CAccCashList *)pWnd)->OnObjectTypeLoadData();
}
/*static void _OnObjectTypeAddNewFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnObjectTypeAddNew();
}*/
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CAccCashList *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CAccCashList *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnReloadSelectFnc(CWnd *pWnd){
	CAccCashList *pVw = (CAccCashList *)pWnd;
	pVw->OnReloadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAccCashList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAccCashList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAccCashList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnListDeleteItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnListDeleteItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnListDeleteItem();
} 
static int _OnListPostItemFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnListDeleteItem();
}
static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnListDeleteItem();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CAccCashList *pVw = (CAccCashList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAccCashList *pVw = (CAccCashList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAccCashList *pVw = (CAccCashList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAccCashList *pVw = (CAccCashList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAccCashListFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnAddAccCashList();
} 
static int _OnEditAccCashListFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnEditAccCashList();
} 
static int _OnDeleteAccCashListFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnDeleteAccCashList();
} 
static int _OnSaveAccCashListFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnSaveAccCashList();
} 
static int _OnCancelAccCashListFnc(CWnd *pWnd){
	 return ((CAccCashList*)pWnd)->OnCancelAccCashList();
} 
CAccCashList::CAccCashList(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 720;
	SetDefaultValues();
}
CAccCashList::~CAccCashList(){
}
void CAccCashList::OnCreateComponents(){

	m_wndInvoiceList.Create(this, _T("List of invoice"), 5, 65, 820, 570);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 820, 60);
	m_wndObjectType.Create(this,95, 30, 195, 55); 
	m_wndObjectTypeLabel.Create(this, _T("FA_OBJECT_TYPE"), 10, 30, 90, 55);
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
void CAccCashList::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	//m_wndObjectType.SetCheckValue(true);
	m_wndObjectType.LimitText(35);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceNo.SetNotEmpty(false);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndObjectType.Format(2, 1, 20);
	m_wndList.GetHeaderControl()->SetItemHeight(5);
	m_wndList.InsertColumn(0, _T("Voucher No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Voucher Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(2, _T("Accounting Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Object"), CFMT_TEXT, 250);

	if(m_szVoucherType ==_T("R") || m_szVoucherType == _T("D"))
		m_wndList.InsertColumn(5, _T("Transactor"), CFMT_TEXT, 150);
	else if(m_szVoucherType == _T("P") || m_szVoucherType == _T("C"))
		m_wndList.InsertColumn(5, _T("Receiver"), CFMT_TEXT, 150);
	else
		m_wndList.InsertColumn(5, _T("Transactor/Receiver"), CFMT_TEXT, 0);

	m_wndList.InsertColumn(6, _T("Reason"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Invoice Type"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(8, _T("id"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("clientid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("orgid"), CFMT_TEXT, 0);
}
void CAccCashList::OnSetWindowEvents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	//m_wndObjectType.SetEvent(WE_SETFOCUS, _OnObjectTypeSetfocusFnc);
	//m_wndObjectType.SetEvent(WE_KILLFOCUS, _OnObjectTypeKillfocusFnc);
	m_wndObjectType.SetEvent(WE_SELCHANGE, _OnObjectTypeSelectChangeFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	//m_wndObjectType.SetEvent(WE_ADDNEW, _OnObjectTypeAddNewFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAccCashListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAccCashListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAccCashListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAccCashListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAccCashListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	OnListLoadData();
}
void CAccCashList::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);

}
void CAccCashList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAccCashList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAccCashList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectTypeKey.Empty();
	m_szInvoiceNo.Empty();

}
int CAccCashList::SetMode(int nMode){
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
		m_wndObjectType.EnableWindow(TRUE);
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndInvoiceNo.EnableWindow(TRUE);
		m_wndReload.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}
/*void CAccCashList::OnFromDateChange(){
	
} */
/*void CAccCashList::OnFromDateSetfocus(){
	
} */
/*void CAccCashList::OnFromDateKillfocus(){
	
} */
int CAccCashList::OnFromDateCheckValue(){
	return 0;
} 
/*void CAccCashList::OnToDateChange(){
	
} */
/*void CAccCashList::OnToDateSetfocus(){
	
} */
/*void CAccCashList::OnToDateKillfocus(){
	
} */
int CAccCashList::OnToDateCheckValue(){
	return 0;
	/*szSQL.Format(_T("When i said go i never meant away") \
		_T(" you and me we share a mystery") \
		_T(" i'll be looking for you") \
		_T(" tell me that you lonely, too") \
		_T(" we were so close like honey to the bee") \
		_T(" make the night as bright as ...") \
		_T(" fireflies come lift me up follow you into the sun") \
		_T(" i can' t wait another night"));*/
} 
void CAccCashList::OnObjectTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashList::OnObjectTypeSelendok(){
	 
}
/*void CAccCashList::OnObjectTypeSetfocus(){
	
}*/
/*void CAccCashList::OnObjectTypeKillfocus(){
	
}*/
long CAccCashList::OnObjectTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerTypeList(&m_wndObjectType, m_szObjectTypeKey);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObjectType.IsSearchKey() && str2int(m_szObjectTypeKey) > 0){
		szWhere.Format(_T(" and idx=%d "), str2int(m_szObjectTypeKey));
	};
	m_wndObjectType.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT * FROM acc_period_report WHERE 0=0 %s ORDER BY idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectType.AddItems(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAccCashList::OnObjectTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccCashList::OnInvoiceNoChange(){
	
} */
/*void CAccCashList::OnInvoiceNoSetfocus(){
	
} */
/*void CAccCashList::OnInvoiceNoKillfocus(){
	
} */
int CAccCashList::OnInvoiceNoCheckValue(){
	return 0;
} 
void CAccCashList::OnReloadSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
void CAccCashList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

} 
void CAccCashList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szCashID = m_wndList.GetItemText(nNewItem, 8);
	SetMode(VM_VIEW);
} 
int CAccCashList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAccCashList();
	 return 0;
} 
long CAccCashList::OnListLoadData(){
	if(!this->IsWindowVisible())
		return 0;


	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szVoucherType.IsEmpty())
		szWhere.Format(_T(" and fac_invoicetype='%s' "), m_szVoucherType);

	szWhere.AppendFormat(_T(" and trunc(fac_acctdate) between TO_DATE('%s', 'YYYY-MM-DD') and TO_DATE('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
	if(!m_szInvoiceNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fac_invoiceno='%s' "), m_szInvoiceNo);

	}

	szSQL.Format(_T(" SELECT ") \
_T("   fac_cash_id AS cash_id,") \
_T("   fac_client_id as client_id,") \
_T("   fac_org_id as org_id,") \
_T("   fac_user_id as user_id,") \
_T("   fac_invoicedate AS invoicedate,") \
_T("   fac_invoiceno   AS invoiceno,") \
_T("   fac_acctdate    AS acctdate,") \
_T("   CASE") \
_T("     WHEN fac_partner_type_id ='NV'") \
_T("     THEN") \
_T("       (SELECT DISTINCT su_name FROM sys_user WHERE su_userid=fac_partner_id") \
_T("       )") \
_T("     ELSE") \
_T("       ( SELECT DISTINCT adp_name") \
_T("       FROM ad_partner") \
_T("       WHERE adp_partner_id = fac_partner_id") \
_T("       )") \
_T("   END            AS partner,") \
_T("   fac_transactor AS transactor,") \
_T("   fac_reason     AS reason,") \
_T("   fac_amount     AS totalamount") \
_T(" FROM fa_cash") \
_T(" WHERE fac_isactive ='Y' %s ") \
_T(" ORDER BY fac_cash_id") , szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("acctdate")), 
			rs.GetValue(_T("TotalAmount")),
			rs.GetValue(_T("partner")), 
			rs.GetValue(_T("Transactor")), 
			rs.GetValue(_T("Reason")), 
			rs.GetValue(_T("ReceiptType")), 
			rs.GetValue(_T("cash_id")),
			rs.GetValue(_T("client_id")),
			rs.GetValue(_T("org_id")),
			rs.GetValue(_T("user_id")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return 0;
}
void CAccCashList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	//The hien ca thu chi
	CAccCashDialog dlg(this, VM_VIEW, m_szVoucherType);
	dlg.m_nCash_ID = str2long(m_szCashID);
	dlg.SetMode(VM_VIEW);
	if(dlg.DoModal() == IDOK){
	}

	Refresh();
	
} 
void CAccCashList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CAccCashDialog dlg(this, VM_ADD, m_szVoucherType);
	if(dlg.DoModal() == IDOK){
	}
	Refresh();
} 
void CAccCashList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CAccCashDialog dlg(this, VM_EDIT, m_szVoucherType);
	dlg.m_nCash_ID = str2long(m_szCashID);
	if(dlg.DoModal() == IDOK){
	}
	Refresh();
} 
void CAccCashList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
} 
int CAccCashList::OnAddAccCashList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAccCashList::OnEditAccCashList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccCashList::OnDeleteAccCashList(){
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
	
	szSQL.Format(_T("FA_CASH_DELETE('%s','%s', '%s', '%s')"), m_szCashID, szClientID, szOrgID, pMF->GetCurrentUser() ); 

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
int CAccCashList::OnSaveAccCashList(){
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
 		//OnAccCashListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAccCashList::OnCancelAccCashList(){
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
int CAccCashList::OnAccCashListListLoadData(){
	return 0;
}

void CAccCashList::SetVoucherType(CString szType){
	m_szVoucherType =szType;
}
void CAccCashList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);
}
void CAccCashList::Print(){
	UpdateData(true);
	CPrintForms printer;
	printer.SetReference(m_szVoucherType, m_szInvoiceNo, m_szFromDate, m_szToDate);
	printer.PrintSheetList();
}