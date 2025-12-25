#include "stdafx.h"
#include "PACSPathologyReport.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPathologyReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPathologyReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPathologyReport* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSPathologyReport *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnGroupAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPathologyReport* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CPACSPathologyReport *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnDayChangeFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnDayChange();
} */
/*static void _OnDaySetfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnDaySetfocus();} */ 
/*static void _OnDayKillfocusFnc(CWnd *pWnd){
	((CPACSPathologyReport *)pWnd)->OnDayKillfocus();
} */
static int _OnDayCheckValueFnc(CWnd *pWnd){
	return ((CPACSPathologyReport *)pWnd)->OnDayCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSPathologyReport *pVw = (CPACSPathologyReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPACSPathologyReportFnc(CWnd *pWnd){
	 return ((CPACSPathologyReport*)pWnd)->OnAddPACSPathologyReport();
} 
static int _OnEditPACSPathologyReportFnc(CWnd *pWnd){
	 return ((CPACSPathologyReport*)pWnd)->OnEditPACSPathologyReport();
} 
static int _OnDeletePACSPathologyReportFnc(CWnd *pWnd){
	 return ((CPACSPathologyReport*)pWnd)->OnDeletePACSPathologyReport();
} 
static int _OnSavePACSPathologyReportFnc(CWnd *pWnd){
	 return ((CPACSPathologyReport*)pWnd)->OnSavePACSPathologyReport();
} 
static int _OnCancelPACSPathologyReportFnc(CWnd *pWnd){
	 return ((CPACSPathologyReport*)pWnd)->OnCancelPACSPathologyReport();
} 
CPACSPathologyReport::CPACSPathologyReport(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPACSPathologyReport::~CPACSPathologyReport(){
}
void CPACSPathologyReport::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 470, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 465, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.Create(this,95, 60, 465, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 90, 115);
	m_wndDept.Create(this,95, 90, 465, 115); 
	m_wndDayLabel.Create(this, _T("Day"), 10, 120, 90, 145);
	m_wndDay.Create(this,95, 120, 465, 145); 
	m_wndExport.Create(this, _T("&Export"), 385, 155, 465, 180);

}
void CPACSPathologyReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);
	m_wndDay.SetLimitText(35);
	m_wndDay.SetCheckValue(true);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CPACSPathologyReport::OnSetWindowEvents(){
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
	//m_wndDay.SetEvent(WE_CHANGE, _OnDayChangeFnc);
	//m_wndDay.SetEvent(WE_SETFOCUS, _OnDaySetfocusFnc);
	//m_wndDay.SetEvent(WE_KILLFOCUS, _OnDayKillfocusFnc);
	m_wndDay.SetEvent(WE_CHECKVALUE, _OnDayCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSPathologyReportFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSPathologyReportFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSPathologyReportFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSPathologyReportFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSPathologyReportFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
		_T(" AND substr(sup_permid, 1, 2) IN ('B2', 'B3')"), pMF->GetCurrentUser(), pMF->GetModuleID());
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
void CPACSPathologyReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndDay.GetDlgCtrlID(), m_nDay);

}
void CPACSPathologyReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSPathologyReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSPathologyReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szDeptKey.Empty();
	m_nDay=0;

}
int CPACSPathologyReport::SetMode(int nMode){
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
/*void CPACSPathologyReport::OnFromDateChange(){
	
} */
/*void CPACSPathologyReport::OnFromDateSetfocus(){
	
} */
/*void CPACSPathologyReport::OnFromDateKillfocus(){
	
} */
int CPACSPathologyReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSPathologyReport::OnToDateChange(){
	
} */
/*void CPACSPathologyReport::OnToDateSetfocus(){
	
} */
/*void CPACSPathologyReport::OnToDateKillfocus(){
	
} */
int CPACSPathologyReport::OnToDateCheckValue(){
	return 0;
} 
void CPACSPathologyReport::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPathologyReport::OnGroupSelendok(){
	 
}
/*void CPACSPathologyReport::OnGroupSetfocus(){
	
}*/
/*void CPACSPathologyReport::OnGroupKillfocus(){
	
}*/
long CPACSPathologyReport::OnGroupLoadData(){
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
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE substr(hfg_id , 1, 2) IN ('B2', 'B3', 'B1') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSPathologyReport::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSPathologyReport::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPathologyReport::OnDeptSelendok(){
	 
}
/*void CPACSPathologyReport::OnDeptSetfocus(){
	
}*/
/*void CPACSPathologyReport::OnDeptKillfocus(){
	
}*/
long CPACSPathologyReport::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN('KB', 'DT', 'XN', 'HA') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSPathologyReport::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPathologyReport::OnDayChange(){
	
} */
/*void CPACSPathologyReport::OnDaySetfocus(){
	
} */
/*void CPACSPathologyReport::OnDayKillfocus(){
	
} */
int CPACSPathologyReport::OnDayCheckValue(){
	return 0;
} 
void CPACSPathologyReport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 35);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 20);	xls.SetColumnWidth(6, 70);	xls.SetColumnWidth(7, 15);	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x43H\x1AF\x41 TR\x1EA2 K\x1EBET QU\x1EA2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("\x43h\x1EA9n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("\x42\xE1\x63 s\x129 \x63h\x1EC9 \x111\x1ECBnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("T\xEAn \x78\xE9t nghi\x1EC7m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("Th\x1EDDi gi\x61n g\x1EEDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 7);	xls.SetMerge(3, 3, 0, 7);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("patientname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("diagnostic"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("deptid"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("doctor"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("orderdate"), tmpStr);		xls.SetCellText(nCol+7, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\DSBNchuatraketqua.xls"));
} 
int CPACSPathologyReport::OnAddPACSPathologyReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSPathologyReport::OnEditPACSPathologyReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSPathologyReport::OnDeletePACSPathologyReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPACSPathologyReport();
 	}
	return 0;
}
int CPACSPathologyReport::OnSavePACSPathologyReport(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnPACSPathologyReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSPathologyReport::OnCancelPACSPathologyReport(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CPACSPathologyReport::OnPACSPathologyReportListLoadData(){
	return 0;
}
CString CPACSPathologyReport::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr;

	if(!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T("AND hpc_groupid = '%s'"), m_szGroupKey);
	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T("AND hpc_deptid = '%s'"), m_szDeptKey);

	szSQL.Format(_T(" SELECT") \
		_T(" hpc_docno AS docno,") \
		_T(" get_patientname(hpc_docno) AS patientname,") \
		_T(" CASE WHEN hpc_deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC') THEN he_diagnostic ELSE htr_maindisease END AS diagnostic,") \
		_T(" hpc_deptid AS deptid,") \
		_T(" get_username(hpc_doctor) AS doctor,") \
		_T(" hfl_name AS pname,") \
		_T(" hpc_orderdate AS orderdate") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON(hfe_docno = hpc_docno AND hfe_orderline = hpcl_orderlineid AND hfe_itemid = hpcl_itemid)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(hpc_docno = he_docno AND hpc_deptid = he_deptid AND hpc_roomid = he_roomid)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(hpc_docno = htr_docno AND hpc_deptid = htr_deptid AND hpc_refidx = htr_idx)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" WHERE hpc_status = 'S' AND hfe_status <> 'C'") \
		_T(" AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_DATE('%s', 'YYYY-MM-DD') - trunc(hpc_orderdate) >= %d %s") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" hpc_docno AS docno,") \
		_T(" get_patientname(hpc_docno) AS patientname,") \
		_T(" CASE WHEN hpc_deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC') THEN he_diagnostic ELSE htr_maindisease END AS diagnostic,") \
		_T(" hpc_deptid AS deptid,") \
		_T(" get_username(hpc_doctor) AS doctor,") \
		_T(" hfl_name AS pname,") \
		_T(" hpc_orderdate AS orderdate") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON(hfe_docno = hpc_docno AND hfe_orderline = hpcl_orderlineid AND hfe_itemid = hpcl_itemid)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(hpc_docno = he_docno AND hpc_deptid = he_deptid AND hpc_roomid = he_roomid)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(hpc_docno = htr_docno AND hpc_deptid = htr_deptid AND hpc_refidx = htr_idx)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" WHERE hpc_status = 'S' AND hfe_status <> 'C'") \
		_T(" AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_DATE('%s', 'YYYY-MM-DD') - trunc(hpc_orderdate) >= %d %s") \
		_T(" ORDER BY orderdate, deptid, docno, pname"), m_szFromDate, m_szToDate, m_szToDate.Left(10), m_nDay, szWhere, m_szFromDate, m_szToDate, m_szToDate.Left(10), m_nDay, szWhere);
	return szSQL;
}
