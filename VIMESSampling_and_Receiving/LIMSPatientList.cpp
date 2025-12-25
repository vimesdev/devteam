#include "LIMSPatientList.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnToDateCheckValue();
}

/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CLIMSPatientList *pVw = (CLIMSPatientList *)pWnd;
	pVw->OnRefreshSelect();
} 
static void _OnWaitingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnWaitingSelect();
}
static void _OnReceivingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnReceivingSelect();
}
static void _OnSamplingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnSamplingSelect();
}
static void _OnApprovalSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnApprovalSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListSelectItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnListSelectItem();
} 
static int _OnAddPACSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnAddPACSPatientList();
} 
static int _OnEditPACSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnEditPACSPatientList();
} 
static int _OnDeletePACSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnDeletePACSPatientList();
} 
static int _OnSavePACSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnSavePACSPatientList();
} 
static int _OnCancelPACSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnCancelPACSPatientList();
} 
CLIMSPatientList::CLIMSPatientList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 721;
	SetDefaultValues();
}
CLIMSPatientList::~CLIMSPatientList(){
}
void CLIMSPatientList::OnCreateComponents()
{	
	m_wndStatusInformation.Create(this, _T("Status"), 5, 5, 205, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 210, 5, 1015, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 1015, 650);
	m_wndDepartmentLabel.Create(this, _T("Department"), 215, 30, 315, 55);
	m_wndDepartment.Create(this,320, 30, 570, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 215, 60, 315, 85);
	m_wndType.Create(this,320, 60, 570, 85); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 575, 30, 685, 55);
	m_wndFromDate.Create(this,690, 30, 780, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 785, 30, 885, 55);
	m_wndToDate.Create(this,890, 30, 980, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 575, 60, 685, 85);
	m_wndPatientName.Create(this,690, 60, 780, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 785, 60, 885, 85);
	m_wndDocumentNo.Create(this,890, 60, 980, 85); 
	m_wndRefresh.Create(this, _T("@"), 985, 60, 1010, 85);
	m_wndList.Create(this,10, 119, 1010, 644); 
	m_wndWaiting.Create(this, _T("Waiting"), 10, 30, 105, 55);
	m_wndSampling.Create(this, _T("Lấy mẫu"), 110, 30, 200, 55);
	m_wndReceiving.Create(this, _T("Nhận mẫu"), 10, 60, 105, 85);
	//m_wndApproval.Create(this, _T("Approval"), 110, 60, 200, 85);
	m_wndApproval.Create(this, _T("Approval"), 0, 0, 0, 0);

}
void CLIMSPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, -1);
//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(128);
//	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(128);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndFromDate.SetNotEmpty(false);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndToDate.SetNotEmpty(false);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndList.InsertColumn(0, _T("Document No"), CFMT_NUMBER,80);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Age"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Department"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(6, _T("Room"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("Test"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(8, _T("Order ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Order Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(10, _T("Barcode"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(11, _T("T/g Barcode"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(12, _T("T/g lấy mẫu"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(13, _T("Người lấy mẫu"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(14, _T("T/g nhận mẫu"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(15, _T("Người nhận mẫu"), CFMT_TEXT, 50);

}
void CLIMSPatientList::OnSetWindowEvents(){
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select"), _OnListSelectItemFnc, 0, VK_RETURN, 0);
	
	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
	m_wndReceiving.SetEvent(WE_CLICK, _OnReceivingSelectFnc);
	m_wndSampling.SetEvent(WE_CLICK, _OnSamplingSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);

}
void CLIMSPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
//	DDX_Check(pDX, m_wndPerformed.GetDlgCtrlID(), m_bPerformed);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szSearchName);	
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nState);
	/*DDX_Radio(pDX, m_wndRunning.GetDlgCtrlID(), m_nRunning);
	DDX_Radio(pDX, m_wndPerformed.GetDlgCtrlID(), m_nPerformed);
	DDX_Radio(pDX, m_wndApproval.GetDlgCtrlID(), m_nApproval);*/


}
void CLIMSPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSPatientList::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szTypeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
//	m_bPerformed=FALSE;
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_nState = 0;

}
int CLIMSPatientList::SetMode(int nMode){
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
void CLIMSPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientList::OnDepartmentSelendok(){
	 
}
/*void CLIMSPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CLIMSPatientList::OnDepartmentKillfocus(){
	
}*/
long CLIMSPatientList::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}
	if(pMF->m_szInPatient == _T("A"))
	{
		szWhere.AppendFormat(_T(" and sd_type IN('DT','KB') "));
	}
	else
	{
		if(pMF->m_szInPatient == _T("I"))
			szWhere.AppendFormat(_T(" and sd_type='DT' "));
		else
			szWhere.AppendFormat(_T(" and sd_type='KB' "));
	}

	szSQL.Format(_T(" SELECT sd_id as id,sd_name as name FROM sys_dept WHERE sd_type IN('DT','KB') %s ORDER BY sd_index "), szWhere);
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientList::OnTypeSelendok(){
	 
}
/*void CLIMSPatientList::OnTypeSetfocus(){
	
}*/
/*void CLIMSPatientList::OnTypeKillfocus(){
	
}*/
long CLIMSPatientList::OnTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szTypeKey);
	}

	szWhere.AppendFormat(_T(" and hfg_id in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	
	szWhere.AppendFormat(_T(" and hfg_id in(%s) "), pMF->m_szTestGroup);

	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name ") \
		_T("FROM hms_fee_group ") \
		_T("WHERE (substr(hfg_id, 1, 2) IN('B1')) %s ORDER BY hfg_id"), szWhere);
	//_fmsg(_T("%s"), szSQL);		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CLIMSPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CLIMSPatientList::OnFromDateChange(){
	
} */
/*void CLIMSPatientList::OnFromDateSetfocus(){
	
} */
/*void CLIMSPatientList::OnFromDateKillfocus(){
	
} */
int CLIMSPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientList::OnToDateChange(){
	
} */
/*void CLIMSPatientList::OnToDateSetfocus(){
	
} */
/*void CLIMSPatientList::OnToDateKillfocus(){
	
} */
int CLIMSPatientList::OnToDateCheckValue(){
	return 0;
} 
	
/*void CLIMSPatientList::OnPatientNameChange(){
	
} */
/*void CLIMSPatientList::OnPatientNameSetfocus(){
	
} */
/*void CLIMSPatientList::OnPatientNameKillfocus(){
	
} */
int CLIMSPatientList::OnPatientNameCheckValue(){
	return 0;
} 
/*void CLIMSPatientList::OnDocumentNoChange(){
	
} */
/*void CLIMSPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CLIMSPatientList::OnDocumentNoKillfocus(){
	
} */
int CLIMSPatientList::OnDocumentNoCheckValue(){
	OnListLoadData();
	return 0;
} 
void CLIMSPatientList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CLIMSPatientList::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();	
	if(nSel < 0) return;
	long nDocumentNo = ToLong(m_wndList.GetItemText(nSel, 0));
	pMF->m_wndPatientProfile.Refresh(nDocumentNo);
} 
void CLIMSPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSPatientList::OnListSelectItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSPatientList::OnListLoadData()
{
	if(!IsWindowVisible())
		return 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	pMF->m_wndPatientProfile.m_nOrderID=0;
	UpdateData(true);
	szWhere.Empty();


	if(m_nState == 0)
	{
		szWhere.AppendFormat(_T(" AND hpc_status='S' AND (hpc_orderdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P','T') "));
	}
	if(m_nState == 1){
		szWhere.AppendFormat(_T(" AND LIMSOE_SAMPLE in('Y') AND (LIMSOE_SAMPLE_DATE) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P') "));
	}
	if(m_nState == 2){
		szWhere.AppendFormat(_T(" AND LIMSOE_RECEIVE in('Y') AND (LIMSOE_RECEIVE_DATE) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P','T') "));
	}
	if(m_nState == 3){
		szWhere.AppendFormat(_T(" AND hpc_status in('T','U') AND (hpc_performdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P','T') "));
	}
	
	if (!m_szDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpc_deptid ='%s' "), m_szDepartmentKey);
	}

	if(!m_szTypeKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpc_groupid ='%s' "), m_szTypeKey);
	}

	if(m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" and hpc_docno=%ld"), m_nDocumentNo);

	}

	szWhere.AppendFormat(_T(" and hpc_groupid in(%s) "), pMF->m_szTestGroup);

	if(pMF->m_szInPatient == _T("A"))
	{
		szWhere.AppendFormat(_T(" and hpc_class IN('E','I') "));
	}
	else
	{
		if(pMF->m_szInPatient == _T("I"))
			szWhere.AppendFormat(_T(" and hpc_class='I' "));
		else
		{
			szWhere.AppendFormat(_T(" and hpc_class='E' "));
			szWhere.AppendFormat(_T(" and (ho_type<>'S' or (ho_type='S' and hpc_payment='P') ) "));
		}
	}

	szSQL.Format(_T(" SELECT DISTINCT hd_docno as docno, hpc_orderid as orderid, hpc_sid as barcode, ") \
	_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hpc_object as objectid,") \
		_T(" hms_getobjectname(hd_object) as objectname, ") \
		_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	HMS_GetSex(hp_sex) as sex,") \
		_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" 	hd_diagnostic as diagnostic,") \
		_T(" 	HMS_GetFeeGroupName(hpc_groupid) as groupname,") \
		_T(" 	to_char(hpc_orderdate,'YYYY-MM-DD') as orderdate,") \
		_T(" 	hpc_doctor as doctor,") \
		_T(" 	hpc_deptid as deptid,") \
		_T(" 	hpc_status as status,") \
		_T(" 	trunc(hpc_performdate) as performdate,") \
		_T(" 	hpc_practitioner as perfromby, hpc_updateddate as map_date, ") \
		_T(" 	LIMSOE_SAMPLE_DATE AS sample_date, ") \
		_T(" 	LIMSOE_SAMPLE_BY AS sample_by, ") \
		_T(" 	LIMSOE_RECEIVE_DATE AS receive_date_sample, ") \
		_T(" 	LIMSOE_RECEIVE_BY AS receive_by ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_testorder ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_object ON(ho_id=hpc_object) ") \
		_T(" LEFT JOIN Lims_Order_Extra ON (hpc_docno=HPC_DOCNO and HPC_ORDERID=LIMSOE_ORDERID) ") \
		_T(" WHERE 	hpc_orderid > 0  ") \
		_T(" 	%s ORDER BY pname "), szWhere);
	
//_msg(_T("%s"), szSQL);

	CString szFirstName, szMidName, szSurName, szSearchName, tmpStr;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString szStatus, szGroupName;
	if(!m_szSearchName.IsEmpty())
	{
		StringLower(m_szSearchName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szSearchName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szSearchName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}

		rs.GetValue(_T("groupname"), szGroupName);
		szGroupName.Replace(_T("Xét nghi\x1EC7m"), _T(""));
		long nBarcode;

		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("objectname")), 
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("roomname")),
			szGroupName, 
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("barcode")), 
			rs.GetValue(_T("map_date")),
			rs.GetValue(_T("sample_date")),
			rs.GetValue(_T("sample_by")),
			rs.GetValue(_T("receive_date_sample")),
			rs.GetValue(_T("receive_by")),
			NULL);
		rs.GetValue(_T("barcode"), nBarcode);

		rs.GetValue(_T("status"), szStatus);

			if(szStatus == _T("R"))
			{
					m_wndList.SetSubItemBkColor(nItem, 9, RGB(0, 128, 0), FALSE);
					m_wndList.SetSubItemTextColor(nItem, 9, RGB(255, 255, 255), FALSE);
			}
			else
			if(szStatus == _T("P"))
			{
					m_wndList.SetSubItemBkColor(nItem, 9, RGB(0, 128, 192), FALSE);
					m_wndList.SetSubItemTextColor(nItem, 9, RGB(255, 255, 255), FALSE);
			}
			else
			if(szStatus == _T("U") || szStatus == _T("T"))
			{
					m_wndList.SetSubItemBkColor(nItem, 9, RGB(255, 128, 0), FALSE);
					m_wndList.SetSubItemTextColor(nItem, 9, RGB(255, 255, 255), FALSE);
			}
			
			if(szStatus == _T("S") && nBarcode > 0)
			{
				m_wndList.SetSubItemBkColor(nItem, 9, RGB(64, 128, 128), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 9, RGB(255, 255, 255), FALSE);
			}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	UpdateData(false);
	return nCount;


}
void CLIMSPatientList::OnWaitingSelect(){
	OnListLoadData();
}
void CLIMSPatientList::OnReceivingSelect(){
	OnListLoadData();
}
void CLIMSPatientList::OnSamplingSelect(){
	OnListLoadData();
}
void CLIMSPatientList::OnApprovalSelect()
{
	return;
}

int CLIMSPatientList::OnAddPACSPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSPatientList::OnEditPACSPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSPatientList::OnDeletePACSPatientList(){
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
 		OnCancelPACSPatientList(); 
 	}
	return 0;
}
int CLIMSPatientList::OnSavePACSPatientList(){
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
 		//OnPACSPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSPatientList::OnCancelPACSPatientList(){
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
int CLIMSPatientList::OnPACSPatientListListLoadData(){
	return 0;
}
