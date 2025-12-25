#include "FACashList.h"
#include "MainFrame_E10.h"
#include "FACashView.h"
#include "HMSReportForms/PrintForms.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashList *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashList* )pWnd)->OnObjectTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnObjectTypeSelendok();
}
/*static void _OnObjectTypeSetfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnObjectTypeKillfocus();
}*/
/*static void _OnObjectTypeKillfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnObjectTypeKillfocus();
}*/
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFACashList *)pWnd)->OnObjectTypeLoadData();
}
/*static void _OnObjectTypeAddNewFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnObjectTypeAddNew();
}*/
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFACashList *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashList *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnReloadSelectFnc(CWnd *pWnd){
	CFACashList *pVw = (CFACashList *)pWnd;
	pVw->OnReloadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFACashList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFACashList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFACashList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnListDeleteItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnListDeleteItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnListDeleteItem();
} 
static int _OnListPostItemFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnListDeleteItem();
}
static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnListDeleteItem();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CFACashList *pVw = (CFACashList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFACashList *pVw = (CFACashList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFACashList *pVw = (CFACashList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFACashList *pVw = (CFACashList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddFACashListFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnAddFACashList();
} 
static int _OnEditFACashListFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnEditFACashList();
} 
static int _OnDeleteFACashListFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnDeleteFACashList();
} 
static int _OnSaveFACashListFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnSaveFACashList();
} 
static int _OnCancelFACashListFnc(CWnd *pWnd){
	 return ((CFACashList*)pWnd)->OnCancelFACashList();
} 
CFACashList::CFACashList(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 720;
	SetDefaultValues();
}
CFACashList::~CFACashList(){
}
void CFACashList::OnCreateComponents(){

	if(m_szDocType == _T("CAR"))
		m_wndInvoiceList.Create(this, _T("CA_RECEIPT_LIST"), 5, 65, 820, 570);
	else if(m_szDocType == _T("CAP"))
		m_wndInvoiceList.Create(this, _T("CA_PAYMENT_LIST"), 5, 65, 820, 570);
	else
		m_wndInvoiceList.Create(this, _T("CA_LIST"), 5, 65, 820, 570);

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
void CFACashList::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	//m_wndObjectType.SetCheckValue(true);
	m_wndObjectType.LimitText(35);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceNo.SetNotEmpty(false);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndObjectType.Format(2, 1, 20);

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);	//invoice_id;

	m_wndList.InsertColumn(1, _T("CA_RECEIPT_NO"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("CA_RECEIPT_DATE"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Accounting Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("CA_RECEIPTER"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(6, _T("Reason"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Invoice Type"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("clientid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("orgid"), CFMT_TEXT, 0);
}
void CFACashList::OnSetWindowEvents(){
	
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
//	m_wndList.AddEvent(0, _T("-"), NULL);
//	m_wndList.AddEvent(4, _T("Post"), _OnListPostItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("View"), _OnListViewItemFnc);
	

	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFACashListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFACashListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFACashListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFACashListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFACashListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	OnListLoadData();
}
void CFACashList::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);

}
void CFACashList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFACashList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFACashList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectTypeKey.Empty();
	m_szInvoiceNo.Empty();

}
int CFACashList::SetMode(int nMode){
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
/*void CFACashList::OnFromDateChange(){
	
} */
/*void CFACashList::OnFromDateSetfocus(){
	
} */
/*void CFACashList::OnFromDateKillfocus(){
	
} */
int CFACashList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFACashList::OnToDateChange(){
	
} */
/*void CFACashList::OnToDateSetfocus(){
	
} */
/*void CFACashList::OnToDateKillfocus(){
	
} */
int CFACashList::OnToDateCheckValue(){
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
void CFACashList::OnObjectTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFACashList::OnObjectTypeSelendok(){
	 
}
/*void CFACashList::OnObjectTypeSetfocus(){
	
}*/
/*void CFACashList::OnObjectTypeKillfocus(){
	
}*/
long CFACashList::OnObjectTypeLoadData(){
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
/*void CFACashList::OnObjectTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFACashList::OnInvoiceNoChange(){
	
} */
/*void CFACashList::OnInvoiceNoSetfocus(){
	
} */
/*void CFACashList::OnInvoiceNoKillfocus(){
	
} */
int CFACashList::OnInvoiceNoCheckValue(){
	return 0;
} 
void CFACashList::OnReloadSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
void CFACashList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

} 
void CFACashList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nInvoiceID  = str2long(m_wndList.GetItemText(nNewItem, 0));

	SetMode(VM_VIEW);
} 
int CFACashList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteFACashList();
	 return 0;
} 
long CFACashList::OnListLoadData(){
	if(!this->IsWindowVisible())
		return 0;


	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szDocType.IsEmpty())
		szWhere.Format(_T(" and fi_doctype='%s' "), m_szDocType);

	szWhere.AppendFormat(_T(" and trunc(fi_acctdate) BETWEEN TO_DATE('%s', 'YYYY-MM-DD') and TO_DATE('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
	if(!m_szInvoiceNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fi_invoiceno='%s' "), m_szInvoiceNo);

	}
	szWhere.AppendFormat(_T(" and fi_docaction <> 'TMP' "));

	szSQL.Format(_T(" SELECT fi_invoice_id,") \
_T("   fi_client_id ,") \
_T("   fi_org_id ,") \
_T("   fi_createdby ,") \
_T("   fi_invoicedate ,") \
_T("   fi_invoiceno ,") \
_T("   fi_acctdate ,") \
_T("   fi_partner_name,") \
_T("   fi_partner_id,") \
_T("   fi_reason ,") \
_T("   fi_amount") \
_T(" FROM fa_invoice") \
_T(" WHERE fi_isactive ='Y' %s ") \
_T(" ORDER BY fi_invoice_id"), szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("fi_invoice_id")),
			rs.GetValue(_T("fi_InvoiceNo")), 
			rs.GetValue(_T("fi_InvoiceDate")), 
			rs.GetValue(_T("fi_acctdate")), 
			rs.GetValue(_T("fi_amount")),
			rs.GetValue(_T("fi_partner_name")), 
			rs.GetValue(_T("fi_Reason")), 
			rs.GetValue(_T("fi_doctype")), 
			rs.GetValue(_T("fi_client_id")),
			rs.GetValue(_T("fi_org_id")),
			rs.GetValue(_T("fi_createdby")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return 0;
}
void CFACashList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	//The hien ca thu chi
	
	CFACashDialog dlg(this, m_szDocType, m_nInvoiceID, VM_VIEW);
	if(dlg.DoModal() == IDOK){
	}

	Refresh();
	
} 
void CFACashList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CFACashDialog dlg(this, m_szDocType, m_nInvoiceID, VM_ADD);
	if(dlg.DoModal() == IDOK){
	}
	Refresh();
} 
void CFACashList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CFACashDialog dlg(this, m_szDocType, m_nInvoiceID, VM_EDIT);
	if(dlg.DoModal() == IDOK){
	}
	Refresh();
} 
void CFACashList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
} 
int CFACashList::OnAddFACashList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFACashList::OnEditFACashList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashList::OnDeleteFACashList(){
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
	
//	szSQL.Format(_T("FA_CASH_DELETE(%ld,'%s', '%s', '%s')"), m_nInvoiceID, szClientID, szOrgID, pMF->GetCurrentUser() ); 

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
int CFACashList::OnSaveFACashList(){
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
 		//OnFACashListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFACashList::OnCancelFACashList(){
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
int CFACashList::OnFACashListListLoadData(){
	return 0;
}

void CFACashList::SetDocType(CString szType){
	m_szDocType =szType;
}
void CFACashList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);
}
void CFACashList::Print(){
	UpdateData(true);
	CPrintForms printer;
	printer.SetReference(m_szDocType, m_szInvoiceNo, m_szFromDate, m_szToDate);
	printer.PrintSheetList();
}