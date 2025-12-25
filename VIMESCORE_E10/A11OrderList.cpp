#include "A11OrderList.h"
#include "MainFrame_E10.h"
#include "A11OrderDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CA11OrderList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStorageAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CA11OrderList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderList *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CA11OrderList *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderList *)pWnd)->OnObjectCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CA11OrderList *pVw = (CA11OrderList *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CA11OrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CA11OrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnListEditItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnListDeleteItem();
}
static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnListViewItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CA11OrderList *pVw = (CA11OrderList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CA11OrderList *pVw = (CA11OrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CA11OrderList *pVw = (CA11OrderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CA11OrderList *pVw = (CA11OrderList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddA11OrderListFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnAddA11OrderList();
} 
static int _OnEditA11OrderListFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnEditA11OrderList();
} 
static int _OnDeleteA11OrderListFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnDeleteA11OrderList();
} 
static int _OnSaveA11OrderListFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnSaveA11OrderList();
} 
static int _OnCancelA11OrderListFnc(CWnd *pWnd){
	 return ((CA11OrderList*)pWnd)->OnCancelA11OrderList();
} 
CA11OrderList::CA11OrderList(){

	m_nDlgWidth = 885;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CA11OrderList::~CA11OrderList(){
}
void CA11OrderList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndCustomerList.Create(this, _T("Customer List"), 5, 95, 809, 590);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 240, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 30, 345, 55);
	m_wndToDate.Create(this,350, 30, 475, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 480, 30, 580, 55);
	m_wndStorage.Create(this,585, 30, 775, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 60, 110, 85);
	m_wndStatus.Create(this,115, 60, 240, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 245, 60, 345, 85);
	m_wndOrderNo.Create(this,350, 60, 475, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 480, 60, 580, 85);
	m_wndObject.Create(this,585, 60, 775, 85); 
	m_wndSearch.Create(this, _T("@"), 780, 60, 805, 85);
	m_wndView.Create(this, _T("&View"), 435, 595, 525, 620);
	m_wndAdd.Create(this, _T("&Add"), 530, 595, 620, 620);
	m_wndEdit.Create(this, _T("&Edit"), 625, 595, 715, 620);
	m_wndDelete.Create(this, _T("&Delete"), 720, 595, 810, 620);
	m_wndList.Create(this,10, 120, 805, 585);
}
void CA11OrderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	//m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndObject.SetLimitText(1024);
	//m_wndObject.SetCheckValue(true);




	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //sale_order_id
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Order No"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Object"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(4, _T("Created By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Created Date"), CFMT_DATE, 80);	
	m_wndList.InsertColumn(6, _T("Issue"), CFMT_TEXT, 80);	
	m_wndList.InsertColumn(7, _T("Issue Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(8, _T("Total Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Status"), CFMT_TEXT, 70);



}
void CA11OrderList::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(4, _T("View"), _OnListViewItemFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);	
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_NONE);


}
void CA11OrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);

}
void CA11OrderList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CA11OrderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CA11OrderList::SetDefaultValues(){

//	m_szFromDate.Empty();
//	m_szToDate.Empty();
//	m_szStorageKey.Empty();
//	m_szStatusKey.Empty();
	m_nID = 0;
	m_nOrderNo=0;
	m_szObject.Empty();

}
int CA11OrderList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableButtons(TRUE, 3, 4, -1);
// 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableButtons(FALSE, -1);
 			break;
 		case VM_NONE: 
 			EnableButtons(TRUE,  2, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndSearch.EnableWindow(TRUE);
		EnableControls(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CA11OrderList::OnFromDateChange(){
	
} */
/*void CA11OrderList::OnFromDateSetfocus(){
	
} */
/*void CA11OrderList::OnFromDateKillfocus(){
	
} */
int CA11OrderList::OnFromDateCheckValue(){
	return 0;
} 
/*void CA11OrderList::OnToDateChange(){
	
} */
/*void CA11OrderList::OnToDateSetfocus(){
	
} */
/*void CA11OrderList::OnToDateKillfocus(){
	
} */
int CA11OrderList::OnToDateCheckValue(){
	return 0;
} 
void CA11OrderList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CA11OrderList::OnStorageSelendok(){
	 
}
/*void CA11OrderList::OnStorageSetfocus(){
	
}*/
/*void CA11OrderList::OnStorageKillfocus(){
	
}*/
long CA11OrderList::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and (msl_storage_id in(7, 8, 35)) and msl_type in('A','B','D') "));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szWhere);
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
/*void CA11OrderList::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CA11OrderList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CA11OrderList::OnStatusSelendok(){
	 
}
/*void CA11OrderList::OnStatusSetfocus(){
	
}*/
/*void CA11OrderList::OnStatusKillfocus(){
	
}*/
long CA11OrderList::OnStatusLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code ='%s' "), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select * from sys_sel where ss_id='pms_order_status' and ss_code <>'I' %s ORDER BY ss_index, ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CA11OrderList::OnStatusAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CA11OrderList::OnOrderNoChange(){
	
} */
/*void CA11OrderList::OnOrderNoSetfocus(){
	
} */
/*void CA11OrderList::OnOrderNoKillfocus(){
	
} */
int CA11OrderList::OnOrderNoCheckValue(){
	return 0;
} 
/*void CA11OrderList::OnObjectChange(){
	
} */
/*void CA11OrderList::OnObjectSetfocus(){
	
} */
/*void CA11OrderList::OnObjectKillfocus(){
	
} */
int CA11OrderList::OnObjectCheckValue(){
	return 0;
} 
void CA11OrderList::OnSearchSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	OnListLoadData();
} 
void CA11OrderList::OnListDblClick(){
	OnViewSelect();
} 
void CA11OrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
int CA11OrderList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddA11OrderList();
	 return 0;
} 
int CA11OrderList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditA11OrderList();
	return 0;
} 
int CA11OrderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteA11OrderList();
	return 0;
} 
int CA11OrderList::OnListViewItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CA11OrderDialog dlg(pMF, VM_VIEW);
	dlg.m_nSaleOrderID = m_nID;
	if(dlg.DoModal() == IDOK)
	{
	}
	return 0;
} 
long CA11OrderList::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	CString szDate, tmpStr, szWhere, szStatus;
	int nItem = 0;
	szWhere.Empty();
	UpdateData(true);
	if(!m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" AND so_status = '%s' "), m_szStatusKey);
	}
	if(!m_szStorageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and so_storage_id=%s "), m_szStorageKey);
	}
	if(!m_szObject.IsEmpty()){
		szWhere.AppendFormat(_T(" AND lower(so_partnername) like(chr(37)||lower('%s')||chr(37)) "), m_szObject);
	}
	
	szWhere.AppendFormat(_T(" AND trunc(so_orderdate) BETWEEN TO_DATE('%s','YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') "),m_szFromDate,m_szToDate);

	if(m_nOrderNo > 0){
		szWhere.Format(_T(" AND so_orderno LIKE (chr(37)||'%ld'||chr(37)) "), m_nOrderNo);
	}
	szWhere.AppendFormat(_T(" AND so_storage_id IN (%s)"), pMF->m_szStoragePerm);
	szSQL.Format(_T(" SELECT so_sale_order_id,") \
	_T(" so_docno,") \
	_T(" so_orderno, ") \
	_T("   so_partnername,") \
	_T("   so_createdby,") \
	_T("   so_createddate,") \
	_T("   so_approvedby,") \
	_T("   so_approveddate,") \
	_T("   so_totalamount,") \
	_T("   so_status") \
	_T(" FROM sale_order") \
	_T(" WHERE so_org_id in('GL','%s') %s ") \
	_T(" ORDER BY so_sale_order_id"), pMF->GetModuleID(), szWhere);

//Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("so_sale_order_id")),
			rs.GetValue(_T("so_docno")),
			rs.GetValue(_T("so_orderno")),
			rs.GetValue(_T("so_partnername")),
			rs.GetValue(_T("so_createdby")),
			rs.GetValue(_T("so_orderdate")),
			rs.GetValue(_T("so_approvedby")),
			rs.GetValue(_T("so_approveddate")),			
			rs.GetValue(_T("so_totalamount")), 
			rs.GetValue(_T("so_Status")), 
			NULL);	
		rs.GetValue(_T("so_status"), szStatus);
		if(szStatus == _T("A"))
		{
			m_wndList.SetSubItemBkColor(nItem, 9, RGB(255, 128, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 9, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
void CA11OrderList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CA11OrderDialog dlg(pMF, VM_VIEW);
	dlg.m_nSaleOrderID = m_nID;
	if(dlg.DoModal() == IDOK)
	{
	}
} 
void CA11OrderList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddA11OrderList();
} 
void CA11OrderList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditA11OrderList();
} 
void CA11OrderList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteA11OrderList();
} 
int CA11OrderList::OnAddA11OrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CA11OrderDialog dlg(pMF, VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
	}
	return 0;
}
int CA11OrderList::OnEditA11OrderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	CA11OrderDialog dlg(pMF, VM_EDIT);
	dlg.m_nSaleOrderID = m_nID;
	if(dlg.DoModal() == IDOK)
	{
	}
	return 0;  
}
int CA11OrderList::OnDeleteA11OrderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT so_status FROM sale_order WHERE so_sale_order_id = %ld"), m_nID);
	rs.ExecSQL(szSQL);
	if (rs.GetStringValue() != _T("O"))
	{
		ShowMessageBox(_T("Order is not open!"), MB_ICONSTOP);
		return -1;	
	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("SALE_ORDER_DELETE(%ld)"), m_nID);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}
int CA11OrderList::OnSaveA11OrderList(){
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
 		//OnA11OrderListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CA11OrderList::OnCancelA11OrderList(){
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
int CA11OrderList::OnA11OrderListLoadData(){
	return 0;
}
void CA11OrderList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddBottom(&m_wndView);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);

}