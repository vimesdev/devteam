#include "stdafx.h"
#include "RMTestActivities.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMTestActivities *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMTestActivities *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMTestActivities* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CRMTestActivities *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnGroupAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMTestActivities* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CRMTestActivities *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnDeptAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMTestActivities* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CRMTestActivities *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnObjectAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMTestActivities* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CRMTestActivities *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CRMTestActivities *)pWnd)->OnStatusAddNew();
}*/
static void _OnByPerformDateSelectFnc(CWnd *pWnd){
	  ((CRMTestActivities*)pWnd)->OnByPerformDateSelect();
}
static void _OnByOrderDateSelectFnc(CWnd *pWnd){
	  ((CRMTestActivities*)pWnd)->OnByOrderDateSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRMTestActivities *pVw = (CRMTestActivities *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRMTestActivities *pVw = (CRMTestActivities *)pWnd;
	pVw->OnExportSelect();
} 
CRMTestActivities::CRMTestActivities(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRMTestActivities::~CRMTestActivities(){
}
void CRMTestActivities::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.SetCheckBox(TRUE);
	m_wndGroup.Create(this,95, 60, 425, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 90, 115);
	m_wndTestActivities.Create(this, _T("Test Activities"), 5, 5, 430, 150);
	m_wndDept.Create(this,95, 90, 425, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 90, 145);
	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,95, 120, 215, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 120, 300, 145);
	m_wndStatus.Create(this,305, 120, 425, 145); 
	m_wndByPerformDate.Create(this, _T("By Perform Date"), 5, 155, 140, 180);
	m_wndByPerformDate.EnableWindow(FALSE);
	m_wndByOrderDate.Create(this, _T("By Order Date"), 145, 155, 280, 180);
	m_wndByOrderDate.EnableWindow(FALSE);
	m_wndPrint.Create(this, _T("&Print"), 270, 185, 350, 210);
	m_wndExport.Create(this, _T("&Export"), 355, 185, 435, 210);

}
void CRMTestActivities::OnInitializeComponents(){
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


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CRMTestActivities::OnSetWindowEvents(){
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
	m_nByPerformDate = 0;
	UpdateData(false);

}
void CRMTestActivities::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Radio(pDX, m_wndByPerformDate.GetDlgCtrlID(), m_nByPerformDate);
	DDX_Radio(pDX, m_wndByOrderDate.GetDlgCtrlID(), m_nByOrderDate);

}
void CRMTestActivities::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szDeptKey.Empty();
	m_szObjectKey.Empty();
	m_szStatusKey.Empty();
	m_nByPerformDate=0;
	m_nByOrderDate = 1;

}
int CRMTestActivities::SetMode(int nMode){
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
/*void CRMTestActivities::OnFromDateChange(){
	
} */
/*void CRMTestActivities::OnFromDateSetfocus(){
	
} */
/*void CRMTestActivities::OnFromDateKillfocus(){
	
} */
int CRMTestActivities::OnFromDateCheckValue(){
	return 0;
} 
/*void CRMTestActivities::OnToDateChange(){
	
} */
/*void CRMTestActivities::OnToDateSetfocus(){
	
} */
/*void CRMTestActivities::OnToDateKillfocus(){
	
} */
int CRMTestActivities::OnToDateCheckValue(){
	return 0;
} 
void CRMTestActivities::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMTestActivities::OnGroupSelendok(){
	 
}
/*void CRMTestActivities::OnGroupSetfocus(){
	
}*/
/*void CRMTestActivities::OnGroupKillfocus(){
	
}*/
long CRMTestActivities::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE substr(hfg_id , 1, 2) = 'B1' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRMTestActivities::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRMTestActivities::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMTestActivities::OnDeptSelendok(){
	 
}
/*void CRMTestActivities::OnDeptSetfocus(){
	
}*/
/*void CRMTestActivities::OnDeptKillfocus(){
	
}*/
long CRMTestActivities::OnDeptLoadData(){
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
/*void CRMTestActivities::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRMTestActivities::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMTestActivities::OnObjectSelendok(){
	 
}
/*void CRMTestActivities::OnObjectSetfocus(){
	
}*/
/*void CRMTestActivities::OnObjectKillfocus(){
	
}*/
long CRMTestActivities::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	return 0;
}
/*void CRMTestActivities::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRMTestActivities::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMTestActivities::OnStatusSelendok(){
	 
}
/*void CRMTestActivities::OnStatusSetfocus(){
	
}*/
/*void CRMTestActivities::OnStatusKillfocus(){
	
}*/
long CRMTestActivities::OnStatusLoadData(){
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
/*void CRMTestActivities::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRMTestActivities::OnByPerformDateSelect(){
	
}
void CRMTestActivities::OnByOrderDateSelect(){
	
}
void CRMTestActivities::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate;
	long double nTotal = 0;
	szReportName = _T("Reports\\HMS\\HOATDONGXETNGHIEM.RPT");
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

	rpt.PrintPreview();
	 
}
void CRMTestActivities::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	ExportPatientList();
}
void CRMTestActivities::ExportPatientList()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;nRow = 6;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
		if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 10);	xls.SetColumnWidth(1, 70);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 20);	xls.SetColumnWidth(4, 10);	xls.SetColumnWidth(5, 30);	xls.SetColumnWidth(6, 5);	xls.SetColumnWidth(7, 5);	xls.SetColumnWidth(8, 30);	xls.SetColumnWidth(9, 10);	xls.SetColumnWidth(10, 5);	xls.SetColumnWidth(11, 30);	xls.SetColumnWidth(12, 20);	xls.SetColumnWidth(13, 20);	xls.SetColumnWidth(14, 35);	xls.SetColumnWidth(15, 15);	xls.SetColumnWidth(16, 10);	xls.SetColumnWidth(17, 25);	xls.SetColumnWidth(18, 100);	
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 2, _T("HO\x1EA0T \x110\x1ED8NG \x58\xC9T NGHI\x1EC6M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 4, _T("T\xEAn \x58N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 4, _T("Tr\x1EA3 \x63h\xEAnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 4, _T("S\x1ED1 HS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 4, _T("T\xEAn \x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 4, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 4, _T("Gi\x1EDBi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 4, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 4, _T("\x42\xE1\x63 s\x129"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 4, _T("Ng\xE0y y/\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 4, _T("Ng\xE0y th\x1EF1\x63 hi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 4, _T("K\x1EBFt qu\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 4, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 4, _T("\x42\x61r\x63o\x64\x65"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 4, _T("S\x1ED1 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 4, _T("K\x1EBFt lu\x1EADn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 11);	xls.SetMerge(3, 3, 0, 11);
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("test_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("price")), FMT_NUMBER1);
		xls.SetCellText(3, nRow, rs.GetValue(_T("insdiff")), FMT_NUMBER1);
		xls.SetCellText(4, nRow, rs.GetValue(_T("doc_no")), FMT_INTEGER);
		xls.SetCellText(5, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("age")), FMT_INTEGER);
		xls.SetCellText(7, nRow, rs.GetValue(_T("sex")), FMT_TEXT);
		xls.SetCellText(8, nRow, rs.GetValue(_T("obj")), FMT_TEXT);
		xls.SetCellText(9, nRow, rs.GetValue(_T("rank")), FMT_TEXT);
		xls.SetCellText(10, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
		xls.SetCellText(11, nRow, rs.GetValue(_T("doctor")), FMT_TEXT);
		tmpStr = CDateTime::Convert(rs.GetValue(_T("order_date")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDateTime::Convert(rs.GetValue(_T("perform_date")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss);
		xls.SetCellText(13, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(14, nRow, rs.GetValue(_T("res")), FMT_TEXT);
		xls.SetCellText(15, nRow, rs.GetValue(_T("note")), FMT_TEXT);
		xls.SetCellText(16, nRow, rs.GetValue(_T("bar_code")), FMT_INTEGER);
		xls.SetCellText(17, nRow, rs.GetValue(_T("card_no")), FMT_TEXT);
		xls.SetCellText(18, nRow, rs.GetValue(_T("conclusion")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach benh nhan lam xet nghiem.xls"));
} 

CString CRMTestActivities::GetQueryString()
{
	CString szSQL, szWhere, tmpStr, szGroups;
	
	for (int i = 0; i < m_wndGroup.GetItemCount(); i++)
	{
		if (m_wndGroup.GetCheck(i))
		{
			m_wndGroup.SetCurSel(i);
			if (!szGroups.IsEmpty())
				szGroups += _T("', '");
			szGroups += m_wndGroup.GetCurrent(0);
		}
	}

	if (!szGroups.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid IN ('%s')"), szGroups);
	}

	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDeptKey);
	
	tmpStr.Empty();
	if (!m_szStatusKey.IsEmpty())
		if (m_szStatusKey == _T("S"))
			tmpStr = _T("'S'");
		else
			tmpStr = _T("'P', 'T'");
	if (!tmpStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_status IN (%s)"), tmpStr);

	szSQL.Format(_T(" SELECT hpc_docno                     AS doc_no,") \
		_T("   Get_patientname(hpc_docno)         AS patient_name,") \
		_T("   Hms_getagebydoc(hpc_docno)         AS age,") \
		_T("   Get_syssel_desc('sys_sex', hp_sex) AS sex,") \
		_T("   (SELECT ho_desc FROM hms_object WHERE ho_id = hd_object") \
		_T("   ) AS obj,") \
		_T("   CASE") \
		_T("     WHEN hd_object IN ('1','3','8','13')") \
		_T("     THEN HFL_POLPRICE") \
		_T("     WHEN hd_object IN ('7')") \
		_T("     THEN HFL_SERVPRICE") \
		_T("     ELSE HFL_INSPRICE") \
		_T("   END AS price,") \
		_T("   CASE") \
		_T("     WHEN hpc_object IN ('2','4','5','6','9','10','11','12')") \
		_T("     AND HFL_INSPRICE =0") \
		_T("     AND HFL_DIFFPAID ='Y'") \
		_T("     THEN HFL_INSDIFF") \
		_T("     ELSE 0") \
		_T("   END                                  AS insdiff,") \
		_T("   Get_syssel_desc('hms_rank', hd_rank) AS rank,") \
		_T("   hfl_name                             AS test_name,") \
		_T("   hpc_deptid                           AS dept,") \
		_T("   Get_username(hpc_doctor)             AS doctor,") \
		_T("   hpc_orderdate                        AS order_date,") \
		_T("   hpc_performdate                      AS perform_date,") \
		_T("   hpcl_result                          AS res,") \
		_T("   hpcl_note                            AS note,") \
		_T("   hd_cardno                            AS card_no,") \
		_T("   hd_conclusion                        AS conclusion,") \
		_T("   hpc_sid                              AS bar_code,") \
		_T("   hd_object,") \
		_T("   hpc_orderid") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_testorder") \
		_T(" ON(hpc_docno = hd_docno)") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpcl_orderid = hpc_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid     = hpcl_itemid)") \
		_T(" WHERE he_roomid IN (102, 122, 123, 124)") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpcl_hasfee = 'Y' %s ") \
		_T(" ORDER BY hp_department,") \
		_T("   hpc_docno,") \
		_T("   hpcl_orderlineid"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}