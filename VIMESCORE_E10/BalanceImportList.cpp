#include "BalanceImportList.h"
#include "MainFrame_E10.h"
#include "BalanceImportDialog.h"
#include ".\balanceimportlist.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportList *)pWnd)->OnToDateCheckValue();
} 
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBalanceImportList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CBalanceImportList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CBalanceImportList *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CBalanceImportList *pVw = (CBalanceImportList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBalanceImportList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBalanceImportList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBalanceImportList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListSelectItemFnc(CWnd *pWnd){
	 ((CBalanceImportList*)pWnd)->OnViewSelect();
	 return 0;
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	return ((CBalanceImportList*)pWnd)->OnAddBalanceImportList();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	return ((CBalanceImportList*)pWnd)->OnEditBalanceImportList();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBalanceImportList*)pWnd)->OnListDeleteItem();
} 
static int _OnListRefreshFnc(CWnd *pWnd){
	((CBalanceImportList*)pWnd)->OnRefreshSelect();
	return 0;
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CBalanceImportList *pVw = (CBalanceImportList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CBalanceImportList *pVw = (CBalanceImportList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CBalanceImportList *pVw = (CBalanceImportList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CBalanceImportList *pVw = (CBalanceImportList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddBalanceImportListFnc(CWnd *pWnd){
	 return ((CBalanceImportList*)pWnd)->OnAddBalanceImportList();
} 
static int _OnEditBalanceImportListFnc(CWnd *pWnd){
	 return ((CBalanceImportList*)pWnd)->OnEditBalanceImportList();
} 
static int _OnDeleteBalanceImportListFnc(CWnd *pWnd){
	 return ((CBalanceImportList*)pWnd)->OnDeleteBalanceImportList();
} 
static int _OnSaveBalanceImportListFnc(CWnd *pWnd){
	 return ((CBalanceImportList*)pWnd)->OnSaveBalanceImportList();
} 
static int _OnCancelBalanceImportListFnc(CWnd *pWnd){
	 return ((CBalanceImportList*)pWnd)->OnCancelBalanceImportList();
} 
CBalanceImportList::CBalanceImportList(){
	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CBalanceImportList::~CBalanceImportList(){
}
void CBalanceImportList::OnCreateComponents(){
	m_wndOrderList.Create(this, _T("Order List"), 5, 65, 810, 590);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 295, 55);
	m_wndToDate.Create(this,300, 30, 395, 55); 
	m_wndFromStorageLabel.Create(this, _T("Storage"), 400, 30, 490, 55);
	m_wndFromStorage.Create(this,495, 30, 775, 55); 
	m_wndRefresh.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndView.Create(this, _T("&View"), 475, 595, 555, 620);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndList.Create(this,10, 90, 805, 585); 

}
void CBalanceImportList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //inventory_id
	m_wndList.InsertColumn(1, _T("ORDERNO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(3, _T("Approval Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Warehouse"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndList.InsertColumn(6, _T("Created By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("Description"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(8, _T("Approved By"), CFMT_TEXT, 80);
	

}

void CBalanceImportList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Order List"));
	m_wndList.AddEvent(1, _T("Select Sheet"), _OnListSelectItemFnc, 0, VK_SPACE);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Add Sheet"), _OnListAddItemFnc, 0, 0);
	m_wndList.AddEvent(3, _T("Edit Sheet"), _OnListEditItemFnc, 0, 0);
	m_wndList.AddEvent(4, _T("Delete Sheet"), _OnListDeleteItemFnc, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Refresh"), _OnListRefreshFnc, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddBalanceImportListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditBalanceImportListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteBalanceImportListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveBalanceImportListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelBalanceImportListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_VIEW);

}
void CBalanceImportList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);

}
void CBalanceImportList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CBalanceImportList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CBalanceImportList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromStorageKey.Empty();

}

int CBalanceImportList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		case VM_VIEW: 
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
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

/*void CBalanceImportList::OnFromDateChange(){
	
} */
/*void CBalanceImportList::OnFromDateSetfocus(){
	
} */
/*void CBalanceImportList::OnFromDateKillfocus(){
	
} */
int CBalanceImportList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CBalanceImportList::OnToDateChange(){
	
} */
/*void CBalanceImportList::OnToDateSetfocus(){
	
} */
/*void CBalanceImportList::OnToDateKillfocus(){
	
} */
int CBalanceImportList::OnToDateCheckValue(){
	return 0;
}
 
void CBalanceImportList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CBalanceImportList::OnFromStorageSelendok(){
	 
}

/*void CBalanceImportList::OnFromStorageSetfocus(){
	
}*/
/*void CBalanceImportList::OnFromStorageKillfocus(){
	
}*/
long CBalanceImportList::OnFromStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.AppendFormat(_T(" and msl_type<>'C' "));
	pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);

	return 0;
}

/*void CBalanceImportList::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CBalanceImportList::OnRefreshSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
}

void CBalanceImportList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnViewSelect();	
}
 
void CBalanceImportList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
}
 
int CBalanceImportList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteBalanceImportList();
	return 0;
}
 
long CBalanceImportList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStorageKey) > 0){
		szWhere.Format(_T(" AND mt_storage_to_id=%d "), ToInt(m_szFromStorageKey));
	}

	szWhere.AppendFormat(_T(" and mt_org_id in('GL','%s') "), pMF->GetModuleID());

	szWhere.AppendFormat(_T(" and mt_doctype = 'BIO' "));


	szSQL.Format(_T(" SELECT mt_transaction_id as orderid, ") \
				_T(" 	mt_orderno as orderno,") \
				_T(" 	mt_orderdate as orderdate,") \
				_T(" 	GET_STORAGENAME(mt_storage_to_id) as storagename, ") \
				_T(" 	mt_approveddate as approvedate,") \
				_T(" 	mt_description as des, ") \
				_T(" 	mt_status as stt, ") \
				_T("	mt_createdby as creator,")\
				_T("	mt_approvedby approvedby") \
				_T("   FROM m_transaction") \
				_T(" WHERE trunc_date(mt_orderdate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" %s ") \
				_T(" ORDER BY mt_transaction_id "),
				m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL); 
////_fmsg_T("%s"), szSQL);
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("orderno")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("approvedate")), 
			rs.GetValue(_T("storagename")), 
			rs.GetValue(_T("stt")), 
			rs.GetValue(_T("creator")), 
			rs.GetValue(_T("approvedby")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}

void CBalanceImportList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	m_nID = str2long(m_wndList.GetItemText(nSel, 0));
	CBalanceImportDialog dlg(pMF, VM_VIEW);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
	}

	m_wndList.SetFocus();
}
 
void CBalanceImportList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddBalanceImportList();

}
 
void CBalanceImportList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditBalanceImportList();
}
 
void CBalanceImportList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteBalanceImportList();

}
 
int CBalanceImportList::OnAddBalanceImportList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	CBalanceImportDialog dlg(pMF, VM_ADD);

	if(dlg.DoModal() == IDOK){
	}
	return 0; 
}

int CBalanceImportList::OnEditBalanceImportList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	CBalanceImportDialog dlg(pMF, VM_EDIT);
//	dlg.m_wndParentWnd = this;
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
	}
	return 0;  
}

int CBalanceImportList::OnDeleteBalanceImportList(){
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
	
	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s')"), m_nID, pMF->GetCurrentUser() ); 
	
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

int CBalanceImportList::OnSaveBalanceImportList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_dm_purchaseorderlnTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_dm_purchaseorderlnTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnBalanceImportListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CBalanceImportList::OnCancelBalanceImportList(){
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
 
int CBalanceImportList::OnBalanceImportListListLoadData(){
	return 0;
}

BEGIN_MESSAGE_MAP(CBalanceImportList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CBalanceImportList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromStorage.SetFocus();
}

void CBalanceImportList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
}