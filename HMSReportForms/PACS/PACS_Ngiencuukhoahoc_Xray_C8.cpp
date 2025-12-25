#include "stdafx.h"
#include "PACS_Ngiencuukhoahoc_Xray_C8.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CPACSNghiencuukhoahocC8 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSNghiencuukhoahocC8 *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CPACSNghiencuukhoahocC8* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSNghiencuukhoahocC8 *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnGroupAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSNghiencuukhoahocC8* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CPACSNghiencuukhoahocC8 *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnDeptAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSNghiencuukhoahocC8* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPACSNghiencuukhoahocC8 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnObjectAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSNghiencuukhoahocC8* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CPACSNghiencuukhoahocC8 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CPACSNghiencuukhoahocC8 *)pWnd)->OnStatusAddNew();
}*/
static void _OnByPerformDateSelectFnc(CWnd *pWnd){
	  ((CPACSNghiencuukhoahocC8*)pWnd)->OnByPerformDateSelect();
}
static void _OnByOrderDateSelectFnc(CWnd *pWnd){
	  ((CPACSNghiencuukhoahocC8*)pWnd)->OnByOrderDateSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSNghiencuukhoahocC8 *pVw = (CPACSNghiencuukhoahocC8 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSNghiencuukhoahocC8 *pVw = (CPACSNghiencuukhoahocC8 *)pWnd;
	pVw->OnExportSelect();
}
static void _OnViewHistorySelectFnc(CWnd *pWnd)
{
	 ((CPACSNghiencuukhoahocC8*)pWnd)->OnViewHistorySelect();
}

CPACSNghiencuukhoahocC8::CPACSNghiencuukhoahocC8(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPACSNghiencuukhoahocC8::~CPACSNghiencuukhoahocC8(){
}
void CPACSNghiencuukhoahocC8::OnCreateComponents()
{
	m_wndTestActivities.Create(this, _T("Image Activities"), 5, 5, 430, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.Create(this,95, 60, 425, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 90, 115);
	m_wndDept.Create(this,95, 90, 425, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 90, 145);
	m_wndObject.Create(this,95, 120, 215, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 120, 300, 145);
	m_wndStatus.Create(this,305, 120, 425, 145); 
	m_wndByPerformDate.Create(this, _T("By Perform Date"), 6, 155, 141, 180);
	m_wndByOrderDate.Create(this, _T("By Order Date"), 145, 155, 280, 180);
	m_wndPrint.Create(this, _T("&Print"), 270, 185, 350, 210);
	m_wndExport.Create(this, _T("&Export"), 355, 185, 435, 210);
	m_wndViewHistory.Create(this, _T("Xem lịch sử cập nhật"), 6, 185, 263, 210);
}
void CPACSNghiencuukhoahocC8::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CPACSNghiencuukhoahocC8::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndByPerformDate.SetEvent(WE_CLICK, _OnByPerformDateSelectFnc);
	m_wndByOrderDate.SetEvent(WE_CLICK, _OnByOrderDateSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndViewHistory.SetEvent(WE_CLICK, _OnViewHistorySelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	m_nByPerformDate = 0;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
				 _T(" AND substr(sup_permid, 1, 3) IN ('B1E')"), pMF->GetCurrentUser(), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!m_szPermGroupID.IsEmpty())
			m_szPermGroupID += _T(", ");
		m_szPermGroupID.AppendFormat(_T("'%s'"), rs.GetValue(_T("perm_id")));
		rs.MoveNext();
	}
	UpdateData(false);

}
void CPACSNghiencuukhoahocC8::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Radio(pDX, m_wndByPerformDate.GetDlgCtrlID(), m_nByPerformDate);
	DDX_Radio(pDX, m_wndByOrderDate.GetDlgCtrlID(), m_nByOrderDate);
	DDX_Check(pDX, m_wndViewHistory.GetDlgCtrlID(), m_bViewHistory);
}
void CPACSNghiencuukhoahocC8::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szDeptKey.Empty();
	m_szObjectKey.Empty();
	m_szStatusKey.Empty();
	m_nByPerformDate=0;
	m_nByOrderDate = 1;
	m_bViewHistory=FALSE;

}
int CPACSNghiencuukhoahocC8::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CPACSNghiencuukhoahocC8::OnFromDateChange(){
	
} */
/*void CPACSNghiencuukhoahocC8::OnFromDateSetfocus(){
	
} */
/*void CPACSNghiencuukhoahocC8::OnFromDateKillfocus(){
	
} */
int CPACSNghiencuukhoahocC8::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSNghiencuukhoahocC8::OnToDateChange(){
	
} */
/*void CPACSNghiencuukhoahocC8::OnToDateSetfocus(){
	
} */
/*void CPACSNghiencuukhoahocC8::OnToDateKillfocus(){
	
} */
int CPACSNghiencuukhoahocC8::OnToDateCheckValue(){
	return 0;
} 
void CPACSNghiencuukhoahocC8::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSNghiencuukhoahocC8::OnGroupSelendok(){
	 
}
/*void CPACSNghiencuukhoahocC8::OnGroupSetfocus(){
	
}*/
/*void CPACSNghiencuukhoahocC8::OnGroupKillfocus(){
	
}*/
	void CPACSNghiencuukhoahocC8::OnViewHistorySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

long CPACSNghiencuukhoahocC8::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}	
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE substr(hfg_id , 1, 2) IN ('B2', 'B3') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSNghiencuukhoahocC8::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSNghiencuukhoahocC8::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSNghiencuukhoahocC8::OnDeptSelendok(){
	 
}
/*void CPACSNghiencuukhoahocC8::OnDeptSetfocus(){
	
}*/
/*void CPACSNghiencuukhoahocC8::OnDeptKillfocus(){
	
}*/
long CPACSNghiencuukhoahocC8::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSNghiencuukhoahocC8::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSNghiencuukhoahocC8::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSNghiencuukhoahocC8::OnObjectSelendok(){
	 
}
/*void CPACSNghiencuukhoahocC8::OnObjectSetfocus(){
	
}*/
/*void CPACSNghiencuukhoahocC8::OnObjectKillfocus(){
	
}*/
long CPACSNghiencuukhoahocC8::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSNghiencuukhoahocC8::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSNghiencuukhoahocC8::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSNghiencuukhoahocC8::OnStatusSelendok(){
	 
}
/*void CPACSNghiencuukhoahocC8::OnStatusSetfocus(){
	
}*/
/*void CPACSNghiencuukhoahocC8::OnStatusKillfocus(){
	
}*/
long CPACSNghiencuukhoahocC8::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code = '%s' "), m_szStatusKey);
	}
	szWhere.AppendFormat(_T(" AND ss_code IN ('S', 'T')"));
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_order_status' %s ORDER BY ss_index "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSNghiencuukhoahocC8::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSNghiencuukhoahocC8::OnByPerformDateSelect(){
	
}
void CPACSNghiencuukhoahocC8::OnByOrderDateSelect(){
	
}
void CPACSNghiencuukhoahocC8::OnPrintSelect()
{
	return;
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	UpdateData(true);
	BeginWaitCursor();
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate;
	long double nTotal = 0;
	szReportName = _T("Reports\\HMS\\HOATDONGHINHANH.RPT");
	if (!rpt.Init(szReportName))
		return;
	//szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("test_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("age")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("sex")));
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("obj")));
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("rank")));
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("dept")));
			rptDetail->SetValue(_T("10"), rs.GetValue(_T("doctor")));
			rs.GetValue(_T("order_date"), tmpStr);
			rptDetail->SetValue(_T("11"), CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
			rs.GetValue(_T("perform_date"), tmpStr);
			rptDetail->SetValue(_T("12"), CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
			rptDetail->SetValue(_T("13"), rs.GetValue(_T("res")));
		}
		rs.MoveNext();
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
	 
} 
void CPACSNghiencuukhoahocC8::OnExportSelect()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Báo cáo hoạt động chuyên môn"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport1();
			break;		
	}	
}

void CPACSNghiencuukhoahocC8::OnExport1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\Danhsachbenhnhan_bc detai_xquang_C8.xls"))) AfxMessageBox(_T("Chưa có Files này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString1();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		

		rs.GetValue(_T("doc_no"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);	

		rs.GetValue(_T("orderid"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);	

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("obj"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("test_name"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		
		rs.GetValue(_T("vmota"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("vconclusion"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("vremark"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		
		rs.GetValue(_T("order_date"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("perform_date"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("nguoidocphim"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dept"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		
		rs.GetValue(_T("phongthuchien"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("vmota_chitiet"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}
	
	/*if (nTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}*/
	
	xls.Save(_T("Exports\\Danhsachbenhnhan_bc detai_xquang_C81.xls"));
}

CString CPACSNghiencuukhoahocC8::GetQueryString1()
{
	CString szSQL, szWhere, tmpStr;
	if (m_nByPerformDate == 0)
		szWhere.AppendFormat(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpc_status IN ('P', 'T')")
		, m_szFromDate, m_szToDate);
	else if (m_nByOrderDate == 0)
		szWhere.AppendFormat(_T(" AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);
	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND (hpc_groupid = '%s' OR hpc_groupid='B1E00')"), m_szGroupKey);
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_deptid = '%s'"), m_szDeptKey);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_object = %s"), m_szObjectKey);
	tmpStr.Empty();
	if (!m_szStatusKey.IsEmpty())
		if (m_szStatusKey == _T("S"))
			tmpStr = _T("'S'");
		else
			tmpStr = _T("'P', 'T'");
	if (!tmpStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_status IN (%s)"), tmpStr);
			/*szSQL.Format(_T(" SELECT ") \
			_T(" hpc_docno doc_no,") \
			_T(" hpc_orderid as orderid,") \
			_T(" Get_patientname(hpc_docno) patient_name,") \
			_T(" Hms_getagebydoc(hpc_docno) age,") \
			_T(" Get_syssel_desc('sys_sex', hp_sex) sex,") \
			_T(" (SELECT ho_desc FROM hms_object WHERE ho_id = hpc_object") \
			_T("   ) obj,") \
			_T(" hfl_name test_name,") \
			_T(" (SELECT hpr_desc") \
			_T("   FROM hms_pacs_result") \
			_T("   WHERE hpcl_docno = hpr_docno") \
			_T("   AND hpcl_orderid = hpr_orderid") \
			_T("   AND hpcl_itemid  = hpr_itemid") \
			_T("   AND hpr_name     ='2'") \
			_T("   ) AS vmota,  ") \
			_T("   (SELECT hpr_desc") \
			_T("   FROM hms_pacs_result") \
			_T("   WHERE hpcl_docno = hpr_docno") \
			_T("   AND hpcl_orderid = hpr_orderid") \
			_T("   AND hpcl_itemid  = hpr_itemid") \
			_T("   AND hpr_name     ='Conclusion'") \
			_T("   ) AS vConclusion,") \
			_T("   (SELECT hpr_desc") \
			_T("   FROM hms_pacs_result") \
			_T("   WHERE hpcl_docno = hpr_docno") \
			_T("   AND hpcl_orderid = hpr_orderid") \
			_T("   AND hpcl_itemid  = hpr_itemid") \
			_T("   AND hpr_name     ='Remark'") \
			_T("   )AS vRemark,  ") \
			_T("   TO_CHAR(hpc_orderdate,'DD/MM/YYYY HH24:MI') order_date,") \
			_T("   TO_CHAR(hpc_performdate,'DD/MM/YYYY HH24:MI') perform_date,") \
			_T("   Get_username(hpc_doctor) doctor,") \
			_T("   Get_username(HPC_PRACTITIONER) nguoidocphim,") \
			_T("   hpc_deptid dept,") \
			_T("   HMS_GETROOMNAME(hpc_pdeptid,hpc_proomid) as phongthuchien") \
			_T(" FROM hms_pacsorder") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON ( hd_docno = hpc_docno )") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON (hd_docno = hcr_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON ( hd_patientno = hp_patientno )") \
			_T(" LEFT JOIN hms_pacsorderline") \
			_T(" ON ( hpc_orderid = hpcl_orderid )") \
			_T(" LEFT JOIN hms_pacs_result") \
			_T(" ON (hpcl_docno   = hpr_docno") \
			_T(" AND hpcl_orderid = hpr_orderid") \
			_T(" AND hpcl_itemid  = hpr_itemid") \
			_T(" AND hpr_name     = 'Conclusion')") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON ( hfl_feeid    = hpcl_itemid )") \
			_T(" WHERE hpcl_hasfee = 'Y' %s") \
			_T(" AND hpc_status IN ('P', 'T')") \
			//_T(" AND hpc_groupid = 'B2100'") \//
			_T(" ORDER BY hpc_docno, hpc_groupid,") \
			_T("   hpc_orderid"), szWhere);*/
	szSQL.Format(_T(" WITH tbl AS") \
			_T(" (SELECT hpc_docno doc_no,  ") \
			_T("   hpc_orderid AS orderid,") \
			_T("   Get_patientname(hpc_docno) patient_name,") \
			_T("   Hms_getagebydoc(hpc_docno) age,") \
			_T("   Get_syssel_desc('sys_sex', hp_sex) sex,") \
			_T("   (SELECT ho_desc FROM hms_object WHERE ho_id = hpc_object") \
			_T("   ) obj,") \
			_T("   hfl_name test_name,") \
			_T("   (SELECT hpr_desc") \
			_T("   FROM hms_pacs_result") \
			_T("   WHERE hpcl_docno = hpr_docno") \
			_T("   AND hpcl_orderid = hpr_orderid") \
			_T("   AND hpcl_itemid  = hpr_itemid") \
			_T("   AND hpr_name     ='2'") \
			_T("   ) AS vmota,") \
			_T("   (SELECT hpr_desc") \
			_T("   FROM hms_pacs_result") \
			_T("   WHERE hpcl_docno = hpr_docno") \
			_T("   AND hpcl_orderid = hpr_orderid") \
			_T("   AND hpcl_itemid  = hpr_itemid") \
			_T("   AND hpr_name     ='Conclusion'") \
			_T("   ) AS vConclusion,") \
			_T("   (SELECT hpr_desc") \
			_T("   FROM hms_pacs_result") \
			_T("   WHERE hpcl_docno = hpr_docno") \
			_T("   AND hpcl_orderid = hpr_orderid") \
			_T("   AND hpcl_itemid  = hpr_itemid") \
			_T("   AND hpr_name     ='Remark'") \
			_T("   )AS vRemark,") \
			_T("   (SELECT hpr_desc") \
			_T("   FROM hms_pacs_result") \
			_T("   WHERE hpcl_docno = hpr_docno") \
			_T("   AND hpcl_orderid = hpr_orderid") \
			_T("   AND hpcl_itemid  = hpr_itemid") \
			_T("   AND hpr_name     ='3'") \
			_T("   ) AS vmota_chitiet,") \
			_T("   TO_CHAR(hpc_orderdate,'DD/MM/YYYY HH24:MI') order_date,") \
			_T("   TO_CHAR(hpc_performdate,'DD/MM/YYYY HH24:MI') perform_date,") \
			_T("   Get_username(hpc_doctor) doctor,") \
			_T("   Get_username(HPC_PRACTITIONER) nguoidocphim,") \
			_T("   hpc_deptid dept,") \
			_T("   HMS_GETROOMNAME(hpc_pdeptid,hpc_proomid) AS phongthuchien,") \
			_T("   SUM(CASE WHEN hpc_groupid = 'B1E00' THEN 0 ELSE 1 END ) OVER (PARTITION BY hpc_docno) AS dem,") \
			_T("   hpc_groupid as group_id") \
			_T(" FROM hms_pacsorder") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON ( hd_docno = hpc_docno )") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON (hd_docno = hcr_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON ( hd_patientno = hp_patientno )") \
			_T(" LEFT JOIN hms_pacsorderline") \
			_T(" ON ( hpc_orderid = hpcl_orderid )") \
			_T(" LEFT JOIN hms_pacs_result") \
			_T(" ON (hpcl_docno   = hpr_docno") \
			_T(" AND hpcl_orderid = hpr_orderid") \
			_T(" AND hpcl_itemid  = hpr_itemid") \
			_T(" AND hpr_name     = 'Conclusion')") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON ( hfl_feeid    = hpcl_itemid )") \
			_T(" WHERE hpcl_hasfee = 'Y' %s") \
			_T(" )") \
			_T(" SELECT * FROM tbl ") \
			_T(" WHERE dem >=1") \
			_T(" ORDER BY doc_no,") \
			_T("   group_id,") \
			_T("   orderid"), szWhere);	
	return szSQL;
}
CString CPACSNghiencuukhoahocC8::GetQueryString2()
{
	CString szSQL, szWhere, tmpStr;	
	szWhere.AppendFormat(_T(" AND HPR_UPDATEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ") \
				_T(" hpr_docno as docno,") \
				_T(" hpr_orderid as orderid,") \
				_T(" hpr_idx as updateidx,") \
				_T(" hfl_name as itemname,") \
				_T(" hpr_name,") \
				_T(" hpr_desc,") \
				_T(" hpr_updatedby,") \
				_T(" to_char(HPR_UPDATEDDATE,'DD/MM/YYYY HH24:MI') as updatetime,") \
				_T(" hpr_ip as ipaddress") \
				_T(" from  HMS_PACS_RESULT_LOG") \
				_T(" left join hms_fee_list ON (hpr_itemid=hfl_feeid)") \
				_T(" where 1=1 %s") \
				_T(" order by hpr_docno, HPR_ORDERID, HPR_ITEMID, hpr_idx, hpr_name"), szWhere);
	return szSQL;
}

void CPACSNghiencuukhoahocC8::OnExport2()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\THEODOI_HOATDONG_CAPNHAT.xls"))) AfxMessageBox(_T("Chưa có Files này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString2();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("orderid"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("updateidx"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("itemname"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("hpr_name"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("hpr_desc"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("hpr_updatedby"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("updatetime"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ipaddress"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		
		
		nRow++;
		rs.MoveNext();
	}
	
	if (nTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}
	
	xls.Save(_T("Exports\\THEODOI_HOATDONG_CAPNHAT2.xls"));
}