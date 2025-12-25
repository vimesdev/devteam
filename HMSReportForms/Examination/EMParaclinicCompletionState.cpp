#include "EMParaclinicCompletionState.h"
#include "HMSMainFrame.h"
#include "ReportUtils.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMParaclinicCompletionState *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMParaclinicCompletionState* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMParaclinicCompletionState *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMParaclinicCompletionState *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicCompletionState *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMParaclinicCompletionState *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMParaclinicCompletionState *pVw = (CEMParaclinicCompletionState *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMParaclinicCompletionState *pVw = (CEMParaclinicCompletionState *)pWnd;
	pVw->OnExportSelect();
} 
CEMParaclinicCompletionState::CEMParaclinicCompletionState(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMParaclinicCompletionState::~CEMParaclinicCompletionState(){
}
void CEMParaclinicCompletionState::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 245, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 95, 410, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 490, 120);
	m_wndPrintPreview.ShowWindow(SW_HIDE);
}
void CEMParaclinicCompletionState::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	CDate dte(pMF->GetSysDate());
	m_nYear = dte.GetYear();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
}
void CEMParaclinicCompletionState::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CEMParaclinicCompletionState::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CEMParaclinicCompletionState::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CEMParaclinicCompletionState::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CEMParaclinicCompletionState::SetMode(int nMode){
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
/*void CEMParaclinicCompletionState::OnYearChange(){
	
} */
/*void CEMParaclinicCompletionState::OnYearSetfocus(){
	
} */
/*void CEMParaclinicCompletionState::OnYearKillfocus(){
	
} */
int CEMParaclinicCompletionState::OnYearCheckValue(){
	return 0;
} 
void CEMParaclinicCompletionState::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMParaclinicCompletionState::OnReportPeriodSelendok(){
	CReportUtils ru;
	UpdateData();
	ru.LoadReportDate(m_nYear, str2int(m_szReportPeriodKey), m_szFromDate, m_szToDate);
	UpdateData(false);
}
/*void CEMParaclinicCompletionState::OnReportPeriodSetfocus(){
	
}*/
/*void CEMParaclinicCompletionState::OnReportPeriodKillfocus(){
	
}*/
long CEMParaclinicCompletionState::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportUtils ru;
	return ru.LoadReportPeriod(&m_wndReportPeriod, m_szReportPeriodKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMParaclinicCompletionState::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMParaclinicCompletionState::OnFromDateChange(){
	
} */
/*void CEMParaclinicCompletionState::OnFromDateSetfocus(){
	
} */
/*void CEMParaclinicCompletionState::OnFromDateKillfocus(){
	
} */
int CEMParaclinicCompletionState::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMParaclinicCompletionState::OnToDateChange(){
	
} */
/*void CEMParaclinicCompletionState::OnToDateSetfocus(){
	
} */
/*void CEMParaclinicCompletionState::OnToDateKillfocus(){
	
} */
int CEMParaclinicCompletionState::OnToDateCheckValue(){
	return 0;
} 
void CEMParaclinicCompletionState::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMParaclinicCompletionState::OnExportSelect() {
	UpdateData();
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	const int nCol = 11;
	long nTotal[nCol], nFormat = FMT_TEXT;
	CString szSQL, tmpStr, szFilePath = _T("Exports\\Template\\MAU_ThucTrangHoanThanhCLS.xls");
	int nRow = 0, nIdx = 1;

	if (!xls.Load(szFilePath))
	{
		CString szMsg;
		szMsg.Format(_T("Thiếu file %s"), szFilePath);
		ShowMessageBox(szMsg);
		return;
	}

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data."));
		return;
	}

	for (int i = 0; i < nCol; i++)
	{
		nTotal[i] = 0;
	}
	xls.SetWorksheet(0);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s")
		, CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm)
		, CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm)
	);
	nRow = 2;
	xls.SetCellText(0, nRow, tmpStr);

	nRow = 6;
	while (!rs.IsEOF())
	{
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			tmpStr = rs.GetValue(i);
			if (i > 0)
			{
				nTotal[i] += str2long(tmpStr);
				nFormat = FMT_NUMBER1 | FMT_BORDER;
			}
			else
				nFormat = FMT_TEXT | FMT_BORDER;
			xls.SetCellText(i, nRow, tmpStr, nFormat);
		}
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(0, nRow, _T("Tổng số:"), FMT_TEXT | FMT_BORDER, true);
	for (int i = 1; i < nCol; i++)
	{
		xls.SetCellText(i, nRow, ToString(nTotal[i]), FMT_NUMBER1 | FMT_BORDER, true);
	}
	
	szFilePath = _T("Exports\\ThucTrangHoanThanhCLS.xls");
	xls.Save(szFilePath);
	EndWaitCursor();
}

CString CEMParaclinicCompletionState::GetQueryString()
{
	CString szSQL, szWhere, szWhere1;
	szWhere.Format(
		_T("  and hd_admitdept IN ('C1.1', 'AB', 'TYC') and hd_admitdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T("  and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
		, m_szFromDate, m_szToDate);
	szWhere1.Format(
		_T(" and hpc_orderdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T("  and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
		, m_szFromDate, m_szToDate);
	szSQL.Format(
		_T(" WITH tbl_patient") \
		_T("      AS (SELECT hd_admitdept AS dept_id,") \
		_T("                 SUM (case when (select count(*) from hms_exam where he_docno = hd_docno and he_status IN ('P', 'T')) > 0 ") \
		_T("						then 1 else 0 end) AS da_kham, ") \
		_T("                 SUM (CASE WHEN hd_status = 'T' THEN 1") \
		_T("                      ELSE 0") \
		_T("                      END) AS da_ket_thuc") \
		_T("            FROM hms_doc") \
		_T("           WHERE hd_status IN ('O', 'P', 'T' ) %s") \
		_T("           GROUP BY hd_admitdept),") \
		_T("      tbl_para") \
		_T("      AS (   SELECT hpc_deptid AS dept_id,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B2300' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS mri_da_chi_dinh,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B2300' AND hpcl_status = 'T' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS mri_da_thuc_hien,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B2200' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS ct_da_chi_dinh,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B2200' AND hpcl_status = 'T' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS ct_da_thuc_hien,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B3200' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS sieu_am_da_chi_dinh,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B3200' AND hpcl_status = 'T' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS sieu_am_da_thuc_hien,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B3100' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS noi_soi_da_chi_dinh,") \
		_T("                    SUM (CASE WHEN hpc_groupid = 'B3100' AND hpcl_status = 'T' THEN 1") \
		_T("                         ELSE 0") \
		_T("                         END) AS noi_soi_da_thuc_hien") \
		_T("               FROM hms_pacsorder") \
		_T("          LEFT JOIN hms_pacsorderline ON ( hpc_orderid = hpcl_orderid AND hpc_docno = hpcl_docno )") \
		_T("              WHERE hpcl_status IN ( 'S', 'T' ) %s") \
		_T("              GROUP BY hpc_deptid)") \
		_T("    SELECT sd_name,") \
		_T("           da_kham,") \
		_T("           da_ket_thuc,") \
		_T("           mri_da_chi_dinh,") \
		_T("           mri_da_thuc_hien,") \
		_T("           ct_da_chi_dinh,") \
		_T("           ct_da_thuc_hien,") \
		_T("           sieu_am_da_chi_dinh,") \
		_T("           sieu_am_da_thuc_hien,") \
		_T("           noi_soi_da_chi_dinh,") \
		_T("           noi_soi_da_thuc_hien") \
		_T("      FROM tbl_patient pt") \
		_T(" LEFT JOIN tbl_para pr ON ( pt.dept_id = pr.dept_id )") \
		_T(" LEFT JOIN sys_dept ON ( sd_id = pt.dept_id )") \
		_T("     ORDER BY pt.dept_id")
	, szWhere, szWhere1);

	return szSQL;
}