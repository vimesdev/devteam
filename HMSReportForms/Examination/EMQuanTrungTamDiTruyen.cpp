#include "stdafx.h"
#include "EMQuanTrungTamDiTruyen.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMQuanSoTrungTamDiTruyen* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnGroupAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMQuanSoTrungTamDiTruyen* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnDeptAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMQuanSoTrungTamDiTruyen* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnObjectAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMQuanSoTrungTamDiTruyen* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEMQuanSoTrungTamDiTruyen *)pWnd)->OnStatusAddNew();
}*/
static void _OnByPerformDateSelectFnc(CWnd *pWnd){
	  ((CEMQuanSoTrungTamDiTruyen*)pWnd)->OnByPerformDateSelect();
}
static void _OnByOrderDateSelectFnc(CWnd *pWnd){
	  ((CEMQuanSoTrungTamDiTruyen*)pWnd)->OnByOrderDateSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMQuanSoTrungTamDiTruyen *pVw = (CEMQuanSoTrungTamDiTruyen *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMQuanSoTrungTamDiTruyen *pVw = (CEMQuanSoTrungTamDiTruyen *)pWnd;
	pVw->OnExportSelect();
} 
CEMQuanSoTrungTamDiTruyen::CEMQuanSoTrungTamDiTruyen(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMQuanSoTrungTamDiTruyen::~CEMQuanSoTrungTamDiTruyen()
{
}
void CEMQuanSoTrungTamDiTruyen::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.Create(this,95, 60, 425, 85); 
	m_wndGroup.EnableWindow(false);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 90, 115);
	m_wndTestActivities.Create(this, _T("Báo cáo danh sách BN làm xét nghiệm"), 5, 5, 430, 150);
	m_wndDept.Create(this,95, 90, 425, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 90, 145);
	m_wndObject.Create(this,95, 120, 215, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 120, 300, 145);
	m_wndStatus.Create(this,305, 120, 425, 145); 
	m_wndByPerformDate.Create(this, _T("By Perform Date"), 5, 155, 140, 180);
	m_wndByOrderDate.Create(this, _T("By Order Date"), 145, 155, 280, 180);
	m_wndPrint.Create(this, _T("&Print"), 270, 185, 350, 210);
	m_wndPrint.EnableWindow(false);
	m_wndExport.Create(this, _T("&ExportXLS"), 355, 185, 435, 210);

}
void CEMQuanSoTrungTamDiTruyen::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CEMQuanSoTrungTamDiTruyen::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	//m_nByPerformDate = 0;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
				 _T(" AND substr(sup_permid, 1, 2) = 'B1'"), pMF->GetCurrentUser(), pMF->GetModuleID());
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
void CEMQuanSoTrungTamDiTruyen::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Radio(pDX, m_wndByPerformDate.GetDlgCtrlID(), m_nByPerformDate);
	DDX_Radio(pDX, m_wndByOrderDate.GetDlgCtrlID(), m_nByOrderDate);

}
void CEMQuanSoTrungTamDiTruyen::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szDeptKey.Empty();
	m_szObjectKey.Empty();
	m_szStatusKey.Empty();
	m_nByPerformDate = 1;
	m_nByOrderDate = 0;

}
int CEMQuanSoTrungTamDiTruyen::SetMode(int nMode){
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
/*void CEMQuanSoTrungTamDiTruyen::OnFromDateChange(){
	
} */
/*void CEMQuanSoTrungTamDiTruyen::OnFromDateSetfocus(){
	
} */
/*void CEMQuanSoTrungTamDiTruyen::OnFromDateKillfocus(){
	
} */
int CEMQuanSoTrungTamDiTruyen::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMQuanSoTrungTamDiTruyen::OnToDateChange(){
	
} */
/*void CEMQuanSoTrungTamDiTruyen::OnToDateSetfocus(){
	
} */
/*void CEMQuanSoTrungTamDiTruyen::OnToDateKillfocus(){
	
} */
int CEMQuanSoTrungTamDiTruyen::OnToDateCheckValue(){
	return 0;
} 
void CEMQuanSoTrungTamDiTruyen::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMQuanSoTrungTamDiTruyen::OnGroupSelendok(){
	 
}
/*void CEMQuanSoTrungTamDiTruyen::OnGroupSetfocus(){
	
}*/
/*void CEMQuanSoTrungTamDiTruyen::OnGroupKillfocus(){
	
}*/
long CEMQuanSoTrungTamDiTruyen::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfg_id IN (%s)"), m_szPermGroupID);
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE hfg_id = 'B1I00' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMQuanSoTrungTamDiTruyen::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMQuanSoTrungTamDiTruyen::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMQuanSoTrungTamDiTruyen::OnDeptSelendok(){
	 
}
/*void CEMQuanSoTrungTamDiTruyen::OnDeptSetfocus(){
	
}*/
/*void CEMQuanSoTrungTamDiTruyen::OnDeptKillfocus(){
	
}*/
long CEMQuanSoTrungTamDiTruyen::OnDeptLoadData(){
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
/*void CEMQuanSoTrungTamDiTruyen::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMQuanSoTrungTamDiTruyen::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMQuanSoTrungTamDiTruyen::OnObjectSelendok(){
	 
}
/*void CEMQuanSoTrungTamDiTruyen::OnObjectSetfocus(){
	
}*/
/*void CEMQuanSoTrungTamDiTruyen::OnObjectKillfocus(){
	
}*/
long CEMQuanSoTrungTamDiTruyen::OnObjectLoadData(){
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
/*void CEMQuanSoTrungTamDiTruyen::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMQuanSoTrungTamDiTruyen::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMQuanSoTrungTamDiTruyen::OnStatusSelendok(){
	 
}
/*void CEMQuanSoTrungTamDiTruyen::OnStatusSetfocus(){
	
}*/
/*void CEMQuanSoTrungTamDiTruyen::OnStatusKillfocus(){
	
}*/
long CEMQuanSoTrungTamDiTruyen::OnStatusLoadData(){
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
/*void CEMQuanSoTrungTamDiTruyen::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMQuanSoTrungTamDiTruyen::OnByPerformDateSelect(){
	
}
void CEMQuanSoTrungTamDiTruyen::OnByOrderDateSelect(){
	
}
void CEMQuanSoTrungTamDiTruyen::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate;
	int nTotal[10];
	for(int i = 1; i < 10; i++)
		{
			nTotal[i] = 0;
		}
	szReportName = _T("Reports\\HMS\\MAULUUKETQUANHOMMAU.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();	
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
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("birthyear")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("dept")));
		rs.GetValue(_T("solderobj"), tmpStr);
		if(!tmpStr.IsEmpty())
			nTotal[1]++;
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("solderretireobj"), tmpStr);
		if(!tmpStr.IsEmpty())
			nTotal[2]++;
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("serviceobj"), tmpStr);
		if(!tmpStr.IsEmpty())
			nTotal[3]++;
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("otherinsobj"), tmpStr);
		if(!tmpStr.IsEmpty())
			nTotal[4]++;
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("automachine"), tmpStr);
		if(!tmpStr.IsEmpty())
			nTotal[5]++;
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("manualmachine"), tmpStr);
		if(!tmpStr.IsEmpty())
			nTotal[6]++;
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.GetValue(_T("emegencymachine"), tmpStr);
		if(!tmpStr.IsEmpty())
			nTotal[7]++;
		rptDetail->SetValue(_T("12"), tmpStr);
		rptDetail->SetValue(_T("13"), rs.GetValue(_T("barcode")));
		rptDetail->SetValue(_T("14"), rs.GetValue(_T("pdesc")));
		rptDetail->SetValue(_T("15"), rs.GetValue(_T("performedtime")));
		rs.MoveNext();
	}

		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
		rptDetail->SetValue(_T("TotalGroup"), _T("Tổng cộng"));
		rptDetail->SetValue(_T("s6"), int2str(nTotal[1]));
		rptDetail->SetValue(_T("s7"), int2str(nTotal[2]));
		rptDetail->SetValue(_T("s8"), int2str(nTotal[3]));
		rptDetail->SetValue(_T("s9"), int2str(nTotal[4]));
		rptDetail->SetValue(_T("s10"), int2str(nTotal[5]));
		rptDetail->SetValue(_T("s11"), int2str(nTotal[6]));
		rptDetail->SetValue(_T("s12"), int2str(nTotal[7]));

	tmpStr = pMF->GetSysDateTime();
	//_msg(_T("%s"),tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	 
} 
void CEMQuanSoTrungTamDiTruyen::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
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
	if(!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHAN_XETNGHIEMDITRUYEN.xls"))) AfxMessageBox(_T("Chưa có File DANHSACHBENHNHAN_XETNGHIEMDITRUYEN.xls trong thư mục Export\\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("objectnam"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("rankname"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ten_xn"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayxn"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketqua"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bacsi"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\DANHSACHBENHNHAN_XETNGHIEMDITRUYEN2.xls"));
	
} 

CString CEMQuanSoTrungTamDiTruyen::GetQueryString()
{
	
	CString szSQL, szWhere, tmpStr;
	if (m_nByPerformDate == 0)
		szWhere.AppendFormat(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);
	else if (m_nByOrderDate == 0)
		szWhere.AppendFormat(_T(" AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);

	/*if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_groupid = '%s'"), m_szGroupKey);*/

	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_deptid = '%s'"), m_szDeptKey);

	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_object = %s"), m_szObjectKey);
	tmpStr.Empty();
	if (!m_szStatusKey.IsEmpty())
		if (m_szStatusKey == _T("S"))
			tmpStr = _T("'S'");
		else
			tmpStr = _T("'T'");
	if (!tmpStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_status IN (%s)"), tmpStr);
	
		szSQL.Format(_T(" SELECT") \
		_T(" hpc_docno as docno,") \
		_T("  trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname) AS pname,") \
		_T("   extract(YEAR FROM hp_birthdate)       AS age,") \
		_T("   get_selection_desc('sys_sex', hp_sex) AS sex,") \
		_T("   hms_getobjectname(HPC_OBJECT)        AS objectnam,") \
		_T("   sys_sel_getname('hms_rank', hp_rank) as rankname,") \
		_T("   hfl_name as ten_xn,") \
		_T("   to_char(hpc_orderdate, 'DD/MM/YYYY') as ngayxn,") \
		_T("   hpcl_result as ketqua,") \
		_T("   hpc_deptid as khoa,") \
		_T("   GET_USERNAME(hpc_doctor) as bacsi ")\
		_T("   FROM HMS_TESTORDER") \
		_T("   LEFT JOIN HMS_TESTORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=hpcl_orderid)") \
		_T("   LEFT JOIN hms_fee ON (hpc_docno = hfe_docno AND hpc_orderid=hfe_orderid)") \
		_T("   LEFT JOIN hms_patient ON (HP_PATIENTNO=hpc_patientno)") \
		_T("   LEFT JOIN hms_fee_list ON (hpcl_itemid=hfl_feeid)  ") \
		_T("   WHERE 1=1 AND hfe_status='P' AND hpc_groupid='B1I00' %s ") \
		_T("   ORDER BY hpc_orderdate "), szWhere);
	return szSQL;
}