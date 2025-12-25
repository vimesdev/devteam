#include "LIMSBatchList.h"
#include "MainFrm.h"
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSBatchList* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CLIMSBatchList *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnDeptAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSBatchList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CLIMSBatchList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSBatchList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSBatchList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CLIMSBatchList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CLIMSBatchList *)pWnd)->OnSearchCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CLIMSBatchList *pVw = (CLIMSBatchList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSBatchList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSBatchList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSBatchList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSBatchList*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CLIMSBatchList *pVw = (CLIMSBatchList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CLIMSBatchList *pVw = (CLIMSBatchList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CLIMSBatchList *pVw = (CLIMSBatchList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CLIMSBatchList *pVw = (CLIMSBatchList *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnAcceptSelectFnc(CWnd *pWnd){
	CLIMSBatchList *pVw = (CLIMSBatchList *)pWnd;
	pVw->OnAcceptSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSBatchList *pVw = (CLIMSBatchList *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddLIMSBatchListFnc(CWnd *pWnd){
	 return ((CLIMSBatchList*)pWnd)->OnAddLIMSBatchList();
} 
static int _OnEditLIMSBatchListFnc(CWnd *pWnd){
	 return ((CLIMSBatchList*)pWnd)->OnEditLIMSBatchList();
} 
static int _OnDeleteLIMSBatchListFnc(CWnd *pWnd){
	 return ((CLIMSBatchList*)pWnd)->OnDeleteLIMSBatchList();
} 
static int _OnSaveLIMSBatchListFnc(CWnd *pWnd){
	 return ((CLIMSBatchList*)pWnd)->OnSaveLIMSBatchList();
} 
static int _OnCancelLIMSBatchListFnc(CWnd *pWnd){
	 return ((CLIMSBatchList*)pWnd)->OnCancelLIMSBatchList();
} 
CLIMSBatchList::CLIMSBatchList(){

	m_nDlgWidth = 515;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CLIMSBatchList::~CLIMSBatchList(){
}
void CLIMSBatchList::OnCreateComponents(){
	m_wndDeptLabel.Create(this, _T("Dept"), 5, 5, 85, 30);
	m_wndDept.Create(this,90, 5, 170, 30); 
	m_wndStatusLabel.Create(this, _T("Status"), 175, 5, 255, 30);
	m_wndStatus.Create(this,260, 5, 480, 30); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 35, 85, 60);
	m_wndFromDate.Create(this,90, 35, 170, 60); 
	m_wndToDateLabel.Create(this, _T("To Date"), 175, 35, 255, 60);
	m_wndToDate.Create(this,260, 35, 340, 60); 
	m_wndSearchLabel.Create(this, _T("Search"), 345, 35, 405, 60);
	m_wndSearch.Create(this,410, 35, 480, 60); 
	m_wndRefresh.Create(this, _T("@"), 485, 35, 510, 60);
	m_wndList.Create(this,5, 65, 510, 571); 
	m_wndAdd.Create(this, _T("&Add"), 5, 576, 85, 601);
	m_wndEdit.Create(this, _T("&Edit"), 90, 576, 170, 601);
	m_wndDelete.Create(this, _T("&Delete"), 175, 576, 255, 601);
	m_wndSend.Create(this, _T("Send"), 260, 576, 340, 601);
	m_wndAccept.Create(this, _T("Accept"), 345, 576, 425, 601);
	m_wndPrint.Create(this, _T("Print"), 430, 576, 510, 601);

}
void CLIMSBatchList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndDept.Format(2, 0);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Id"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Created Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(2, _T("Created By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Accepted Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Accepted By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT, 50);

}
void CLIMSBatchList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
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
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndAccept.SetEvent(WE_CLICK, _OnAcceptSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSBatchListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSBatchListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSBatchListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSBatchListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSBatchListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
*/

	m_szDeptKey = pMF->GetDepartmentID();
	m_szDeptType = pMF->GetDeptType();

	SetMode(VM_NONE);
	OnListLoadData();

}
void CLIMSBatchList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CLIMSBatchList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CLIMSBatchList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSBatchList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSBatchList::SetDefaultValues(){

	m_szDeptKey.Empty();
	m_szStatusKey = _T(" ");
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}
int CLIMSBatchList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableControls(TRUE);
 			EnableButtons(FALSE,   -1);
 			break;
 		case VM_NONE: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1,  -1);
			m_szFromDate = pMF->GetSysDate();
			m_szToDate = pMF->GetSysDate();
 			break;
 		};
		if(m_szDeptType != _T("XN"))
		{
			m_wndDept.EnableWindow(FALSE);
			m_wndAccept.EnableWindow(FALSE);
		}
		else
		{
			m_wndAccept.EnableWindow(TRUE);
			m_wndAdd.EnableWindow(FALSE);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndSend.EnableWindow(FALSE);
		}
		m_wndRefresh.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CLIMSBatchList::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSBatchList::OnDeptSelendok(){
	 
}
/*void CLIMSBatchList::OnDeptSetfocus(){
	
}*/
/*void CLIMSBatchList::OnDeptKillfocus(){
	
}*/
long CLIMSBatchList::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and sd_type in('DT','XN')  "));
	return pMF->LoadDepartment(&m_wndDept, m_szDeptKey, szWhere);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSBatchList::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSBatchList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSBatchList::OnStatusSelendok(){
	 
}
/*void CLIMSBatchList::OnStatusSetfocus(){
	
}*/
/*void CLIMSBatchList::OnStatusKillfocus(){
	
}*/
long CLIMSBatchList::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T(" "), _T("Tất cả"), NULL);
	m_wndStatus.AddItems(_T("O"), _T("Đang mở"), NULL);
	m_wndStatus.AddItems(_T("S"), _T("Đã gửi"), NULL);
	m_wndStatus.AddItems(_T("A"), _T("Đã nhận"), NULL);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSBatchList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CLIMSBatchList::OnFromDateChange(){
	
} */
/*void CLIMSBatchList::OnFromDateSetfocus(){
	
} */
/*void CLIMSBatchList::OnFromDateKillfocus(){
	
} */
int CLIMSBatchList::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSBatchList::OnToDateChange(){
	
} */
/*void CLIMSBatchList::OnToDateSetfocus(){
	
} */
/*void CLIMSBatchList::OnToDateKillfocus(){
	
} */
int CLIMSBatchList::OnToDateCheckValue(){
	return 0;
} 
/*void CLIMSBatchList::OnSearchChange(){
	
} */
/*void CLIMSBatchList::OnSearchSetfocus(){
	
} */
/*void CLIMSBatchList::OnSearchKillfocus(){
	
} */
int CLIMSBatchList::OnSearchCheckValue(){
	return 0;
} 
void CLIMSBatchList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CLIMSBatchList::OnListDblClick(){
	
} 
void CLIMSBatchList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	long nBatchId = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_wndPatientList->SendMessage(WM_REFRESH, nNewItem, nBatchId);
	SetMode(VM_VIEW);
	CString szStatus = m_wndList.GetItemText(nNewItem, 5);
	if(szStatus == _T("O"))
	{
		m_wndSend.SetWindowText(_T("Gửi"));
	}
	else
	{
		m_wndSend.SetWindowText(_T("Hủy gửi"));
	}
} 
int CLIMSBatchList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSBatchList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and htb_createddate between to_timestamp('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "),
		m_szFromDate, m_szToDate);
	m_szStatusKey.Trim();
	if(!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T(" and htb_status = '%s' "), m_szStatusKey);

	if(m_szDeptType == _T("XN"))
	{
		szWhere.AppendFormat(_T(" and htb_status <> 'O' and htb_perform_deptid='%s' "), pMF->GetDepartmentID());
	}

	szSQL.Format(_T("SELECT * FROM hms_testorder_batch ") \
		_T(" WHERE htb_deptid='%s' ") \
		_T(" %s ") \
		_T(" ORDER BY htb_batch_id "), pMF->GetDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("htb_batch_Id")), 
			rs.GetValue(_T("htb_CreatedDate")), 
			rs.GetValue(_T("htb_CreatedBy")), 
			rs.GetValue(_T("htb_AcceptedDate")), 
			rs.GetValue(_T("htb_AcceptedBy")), 
			rs.GetValue(_T("htb_Status")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	UpdateData(FALSE);
	return nCount;
	return 0;
}
#include "LIMSBatchPatientDialog.h"
void CLIMSBatchList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CLIMSBatchPatientDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{
	}
} 
void CLIMSBatchList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSBatchList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSBatchList::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;

	
	if(m_szDeptType == _T("XN"))
	{
		return;
	}
	
	long nBatchId = str2long(m_wndList.GetItemText(nSel, 0));
	CString szStatus = m_wndList.GetItemText(nSel, 5);
	
	int ret;
	if(szStatus == _T("O"))
		ret = ShowMessageBox(_T("Bạn có chắc chắn muốn gửi phiếu không"), MB_YESNO);
	else
		ret = ShowMessageBox(_T("Bạn có chắc chắn muốn khôi phục phiếu không"), MB_YESNO);

	szSQL.Format(_T("LIMS_BATCH_SEND(%ld, '%s') "), nBatchId, pMF->GetCurrentUser());
_tprintf(_T("\r\n%s"), szSQL);
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Không gửi được gói"));
	}
	else
	{
		SetMode(VM_VIEW);
		CString szStatus = m_wndList.GetItemText(nSel, 5);
		if(szStatus == _T("O"))
		{
			m_wndSend.SetWindowText(_T("Xác nhận"));
		}
		else
		{
			m_wndSend.SetWindowText(_T("Bỏ xác nhận"));
		}
		m_wndList.SetItemText(nSel, 5, szStatus);
	}
} 
void CLIMSBatchList::OnAcceptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szDeptType != _T("XN"))
	{
		return;
	}
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	CString szSQL;
	int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xác nhận phiếu không?"), MB_YESNO);
	if(ret == IDNO) return;

	long nBatchId = str2long(m_wndList.GetItemText(nSel, 0));
	szSQL.Format(_T("LIMS_BATCH_ACCEPT(%ld, '%s') "), nBatchId, pMF->GetCurrentUser());
_tprintf(_T("\r\n%s"), szSQL);
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Không xác nhận được gói"));
	}
	else
	{
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
		SetMode(VM_VIEW);
		
	
	}

} 
void CLIMSBatchList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSBatchList::OnAddLIMSBatchList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSBatchList::OnEditLIMSBatchList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	ShowMessageBox(_T("Chưa hỗ trợ chức năng này"));
	return 0;  
}
int CLIMSBatchList::OnDeleteLIMSBatchList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	ShowMessageBox(_T("Chưa hỗ trợ chức năng này"));
	return 0;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelLIMSBatchList();
 	}
	return 0;
}
int CLIMSBatchList::OnSaveLIMSBatchList(){
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
 		//OnLIMSBatchListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSBatchList::OnCancelLIMSBatchList(){
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
int CLIMSBatchList::OnLIMSBatchListListLoadData(){
	return 0;
}
