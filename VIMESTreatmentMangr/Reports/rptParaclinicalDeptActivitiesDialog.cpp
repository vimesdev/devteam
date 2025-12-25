#include "rptParaclinicalDeptActivitiesDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptParaclinicalDeptActivitiesDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CrptParaclinicalDeptActivitiesDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptParaclinicalDeptActivitiesDialog *pVw = (CrptParaclinicalDeptActivitiesDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptParaclinicalDeptActivitiesDialog *pVw = (CrptParaclinicalDeptActivitiesDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptParaclinicalDeptActivitiesDialog *pVw = (CrptParaclinicalDeptActivitiesDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptParaclinicalDeptActivitiesDialogFnc(CWnd *pWnd){
	 return ((CrptParaclinicalDeptActivitiesDialog*)pWnd)->OnAddrptParaclinicalDeptActivitiesDialog();
} 
static int _OnEditrptParaclinicalDeptActivitiesDialogFnc(CWnd *pWnd){
	 return ((CrptParaclinicalDeptActivitiesDialog*)pWnd)->OnEditrptParaclinicalDeptActivitiesDialog();
} 
static int _OnDeleterptParaclinicalDeptActivitiesDialogFnc(CWnd *pWnd){
	 return ((CrptParaclinicalDeptActivitiesDialog*)pWnd)->OnDeleterptParaclinicalDeptActivitiesDialog();
} 
static int _OnSaverptParaclinicalDeptActivitiesDialogFnc(CWnd *pWnd){
	 return ((CrptParaclinicalDeptActivitiesDialog*)pWnd)->OnSaverptParaclinicalDeptActivitiesDialog();
} 
static int _OnCancelrptParaclinicalDeptActivitiesDialogFnc(CWnd *pWnd){
	 return ((CrptParaclinicalDeptActivitiesDialog*)pWnd)->OnCancelrptParaclinicalDeptActivitiesDialog();
} 
CrptParaclinicalDeptActivitiesDialog::CrptParaclinicalDeptActivitiesDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CrptParaclinicalDeptActivitiesDialog::~CrptParaclinicalDeptActivitiesDialog()
{
	if (m_rs) delete m_rs;
}
void CrptParaclinicalDeptActivitiesDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 345, 85); 
	m_wndPrint.Create(this, _T("&Print"), 100, 95, 180, 120);
	m_wndExport.Create(this, _T("&Export"), 185, 95, 265, 120);
	m_wndClose.Create(this, _T("&Close"), 270, 95, 350, 120);

}
void CrptParaclinicalDeptActivitiesDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	CString szSQL;
	szSQL.Format(_T("SELECT sc_pname AS HealthService, sc_name AS HospitalName FROM sys_company LIMIT 1"));
	m_rs = new CRecord(&pMF->m_db);
	m_rs->ExecSQL(szSQL);
}
void CrptParaclinicalDeptActivitiesDialog::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
}
void CrptParaclinicalDeptActivitiesDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
}
void CrptParaclinicalDeptActivitiesDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CrptParaclinicalDeptActivitiesDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CrptParaclinicalDeptActivitiesDialog::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
}
int CrptParaclinicalDeptActivitiesDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues();
			m_szFromDate = pMF->GetSysDate();
			m_szToDate = pMF->GetSysDate();
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
/*void CrptParaclinicalDeptActivitiesDialog::OnFromDateChange(){
	
} */
/*void CrptParaclinicalDeptActivitiesDialog::OnFromDateSetfocus(){
	
} */
/*void CrptParaclinicalDeptActivitiesDialog::OnFromDateKillfocus(){
	
} */
int CrptParaclinicalDeptActivitiesDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptParaclinicalDeptActivitiesDialog::OnToDateChange(){
	
} */
/*void CrptParaclinicalDeptActivitiesDialog::OnToDateSetfocus(){
	
} */
/*void CrptParaclinicalDeptActivitiesDialog::OnToDateKillfocus(){
	
} */
int CrptParaclinicalDeptActivitiesDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptParaclinicalDeptActivitiesDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptParaclinicalDeptActivitiesDialog::OnDepartmentSelendok(){
	 
}
/*void CrptParaclinicalDeptActivitiesDialog::OnDepartmentSetfocus(){
	
}*/
/*void CrptParaclinicalDeptActivitiesDialog::OnDepartmentKillfocus(){
	
}*/
long CrptParaclinicalDeptActivitiesDialog::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE pcmso_deptid='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT Distinct pcmso_deptid AS ID, (SELECT sd_name FROM sys_dept WHERE sd_id=pcmso_deptid) AS Name ")\
				 _T("FROM pcms_order"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptParaclinicalDeptActivitiesDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptParaclinicalDeptActivitiesDialog::OnPrintSelect()
{
	if (!IsValidateData())
		return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString szSQL, szTemp, tmpStr;
	if (!rpt.Init(_T("Reports/HMS/tinhhinhhoatdongcackhoaCLS.rpt")))
		return;
	UpdateData(TRUE);

	BeginWaitCursor();
	if (!m_rs->IsEOF())
	{
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_rs->GetValue(_T("HealthService")));
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_rs->GetValue(_T("HospitalName")));
	}
	szSQL.Format(_T("SELECT sd_name FROM sys_dept WHERE sd_id='%s'"), m_szDepartmentKey);
	rsd.ExecSQL(szSQL);
	if (!rsd.IsEOF())
		rpt.GetReportHeader()->SetValue(_T("Department"), rsd.GetValue(_T("sd_name")));
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szTemp.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szTemp);

	szSQL.Format(_T(" SELECT (select hfg_name from hms_feegroup where hfg_id=substr(pcmso_groupid, 1, 2) || '000') as grouptype,") \
				 _T("        (select hfg_name from hms_feegroup where hfg_id=groupid) as groupname,  ") \
				 _T("        sum(totalpatient) as totalpatient,") \
				 _T("        sum(servobj1) as servobj1,") \
				 _T("        sum(inservobj1) as inservobj1,") \
				 _T("        sum(poorobj1) as poorobj1,") \
				 _T("        sum(servobj2) as servobj2,") \
				 _T("        sum(inservobj2) as inservobj2,") \
				 _T("        sum(majorobj3) as majorobj3,") \
				 _T("        sum(minorobj3) as minorobj3") \
				 _T(" FROM	") \
				 _T(" (") \
				 _T("  SELECT groupid, pcmso_groupid, 1 as totalpatient,") \
				 _T("         case when ho_type not in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as servobj1,") \
				 _T("         case when ho_type in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as inservobj1,") \
				 _T("         case when substr(hd_cardno, 1, 2)='HN' and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as poorobj1,") \
				 _T("         case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as servobj2,") \
				 _T("         case when ho_type in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as inservobj2,") \
				 _T("         case when hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as majorobj3,") \
				 _T("         case when hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as minorobj3") \
				 _T("  FROM") \
				 _T("  (") \
				 _T("   SELECT pcmso_groupid as groupid, pcmso_groupid, pcmso_docno") \
				 _T("   FROM pcms_order") \
				 _T("   WHERE pcmso_status <>'O'") \
				 _T(" 	and (pcmso_payment='P' or pcmso_status='T')") \
				 _T(" 	and date(pcmso_orderdate) between date('%s') and date('%s') and pcmso_deptid='%s'") \
				 _T("  ) as Tbl") \
				 _T("  LEFT JOIN hms_doc ON(hd_docno=pcmso_docno)") \
				 _T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				 _T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
				 _T(" ) as Tbl2") \
				 _T(" GROUP BY pcmso_groupid, groupname ") \
				 _T(" ORDER BY pcmso_groupid, groupname "),
				 m_szFromDate, m_szToDate, m_szDepartmentKey
                );
	rs.ExecSQL(szSQL);

	CReportSection *rptDetail;
	tmpStr.Empty();
	while (!rs.IsEOF())
	{
		if (tmpStr.IsEmpty() || rs.GetValue(_T("grouptype")).Trim() != tmpStr)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("grouptype")));
		}
		rptDetail = rpt.AddDetail();

		szTemp = rs.GetValue(_T("groupname"));
		rptDetail->SetValue(_T("1"), szTemp);

		szTemp = rs.GetValue(_T("totalpatient"));
		rptDetail->SetValue(_T("2"), szTemp);

		szTemp = rs.GetValue(_T("servobj1"));
		rptDetail->SetValue(_T("3"), szTemp);

		szTemp = rs.GetValue(_T("inservobj1"));
		rptDetail->SetValue(_T("4"), szTemp);

		szTemp = rs.GetValue(_T("poorobj1"));
		rptDetail->SetValue(_T("5"), szTemp);

		szTemp = rs.GetValue(_T("servobj2"));
		rptDetail->SetValue(_T("6"), szTemp);

		szTemp = rs.GetValue(_T("inservobj2"));
		rptDetail->SetValue(_T("7"), szTemp);

		szTemp = rs.GetValue(_T("majorobj3"));
		rptDetail->SetValue(_T("8"), szTemp);

		szTemp = rs.GetValue(_T("minorobj3"));
		rptDetail->SetValue(_T("9"), szTemp);

		tmpStr = rs.GetValue(_T("grouptype")).Trim();
		rs.MoveNext();
	}
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CrptParaclinicalDeptActivitiesDialog::OnExportSelect()
{
	if (!IsValidateData())
		return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString szSQL, szTemp, tmpStr;
	CExcel xls;

	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 30);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 16);
	xls.SetColumnWidth(7, 14);
	xls.SetColumnWidth(8, 14);
	int nRow = 0, nCol = 0;
	xls.SetCellMergedColumns(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	if (!m_rs->IsEOF())
	{
		xls.SetCellText(nCol, nRow, m_rs->GetValue(_T("HealthService")), FMT_TEXT, true, 12);
		xls.SetCellText(nCol, nRow + 1, m_rs->GetValue(_T("HospitalName")), FMT_TEXT, true, 12);
	}
	szSQL.Format(_T("SELECT sd_name FROM sys_dept WHERE sd_id='%s' LIMIT 1"), m_szDepartmentKey);
	rsd.ExecSQL(szSQL);
	if (!rsd.IsEOF())
		xls.SetCellText(nCol, nRow + 2, rsd.GetValue(_T("sd_name")), FMT_TEXT, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 3, 9);
	xls.SetCellText(nCol, nRow + 4, _T("TINH HINH HOAT DONG CAC KHOA CAN LAM SANG"), FMT_TEXT, true, 16);
	tmpStr.Format(_T("Tu ngay: %s Den ngay: %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 6, 9);

	xls.SetCellMergedRows(nCol, nRow + 7, 2);
	TranslateString(_T("Content"), szTemp);
	xls.SetCellText(nCol, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellMergedRows(nCol + 1, nRow + 7, 2);
	TranslateString(_T("Total Patient"), szTemp);
	xls.SetCellText(nCol + 1, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellMergedColumns(nCol + 2, nRow + 7, 3);
	TranslateString(_T("Total Kinh Patient > 6"), szTemp);
	xls.SetCellText(nCol + 2, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Collect Fee "), szTemp);
	xls.SetCellText(nCol + 2, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Medical Insurance"), szTemp);
	xls.SetCellText(nCol + 3, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Poor Card"), szTemp);
	xls.SetCellText(nCol + 4, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellMergedColumns(nCol + 5, nRow + 7, 2);
	TranslateString(_T("Total Compatriots of Ethnic Patient > 6"), szTemp);
	xls.SetCellText(nCol + 5, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Collect Fee "), szTemp);
	xls.SetCellText(nCol + 5, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Medical Insurance"), szTemp);
	xls.SetCellText(nCol + 6, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellMergedColumns(nCol + 7, nRow + 7, 2);
	TranslateString(_T("Total Children Patient < 6"), szTemp);
	xls.SetCellText(nCol + 7, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 7, nRow + 8, _T("Kinh"), FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Compatriots of Ethnic"), szTemp);
	xls.SetCellText(nCol + 8, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	szSQL.Format(_T(" SELECT (select hfg_name from hms_feegroup where hfg_id=substr(pcmso_groupid, 1, 2) || '000') as grouptype,") \
				 _T("        (select hfg_name from hms_feegroup where hfg_id=groupid) as groupname,  ") \
				 _T("        sum(totalpatient) as totalpatient,") \
				 _T("        sum(servobj1) as servobj1,") \
				 _T("        sum(inservobj1) as inservobj1,") \
				 _T("        sum(poorobj1) as poorobj1,") \
				 _T("        sum(servobj2) as servobj2,") \
				 _T("        sum(inservobj2) as inservobj2,") \
				 _T("        sum(majorobj3) as majorobj3,") \
				 _T("        sum(minorobj3) as minorobj3") \
				 _T(" FROM	") \
				 _T(" (") \
				 _T("  SELECT groupid, pcmso_groupid, 1 as totalpatient,") \
				 _T("         case when ho_type not in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as servobj1,") \
				 _T("         case when ho_type in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as inservobj1,") \
				 _T("         case when substr(hd_cardno, 1, 2)='HN' and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as poorobj1,") \
				 _T("         case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as servobj2,") \
				 _T("         case when ho_type in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as inservobj2,") \
				 _T("         case when hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as majorobj3,") \
				 _T("         case when hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as minorobj3") \
				 _T("  FROM") \
				 _T("  (") \
				 _T("   SELECT pcmso_groupid as groupid, pcmso_groupid, pcmso_docno") \
				 _T("   FROM pcms_order") \
				 _T("   WHERE pcmso_status <>'O'") \
				 _T(" 	and (pcmso_payment='P' or pcmso_status='T')") \
				 _T(" 	and date(pcmso_orderdate) between date('%s') and date('%s') and pcmso_deptid='%s'") \
				 _T("  ) as Tbl") \
				 _T("  LEFT JOIN hms_doc ON(hd_docno=pcmso_docno)") \
				 _T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				 _T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
				 _T(" ) as Tbl2") \
				 _T(" GROUP BY pcmso_groupid, groupname ") \
				 _T(" ORDER BY pcmso_groupid, groupname "),
				 m_szFromDate, m_szToDate, m_szDepartmentKey
                );
	rs.ExecSQL(szSQL);

	nRow += 9;
	tmpStr.Empty();
	while (!rs.IsEOF())
	{
		if (tmpStr.IsEmpty() || rs.GetValue(_T("grouptype")).Trim() != tmpStr)
		{
			xls.SetCellMergedColumns(nCol, nRow, 9);
			xls.SetCellText(nCol, nRow, rs.GetValue(_T("grouptype")), FMT_TEXT, true, 11);
			nRow++;
		}
		szTemp = rs.GetValue(_T("groupname"));
		xls.SetCellText(nCol, nRow, szTemp, FMT_TEXT);

		szTemp = rs.GetValue(_T("totalpatient"));
		xls.SetCellText(nCol + 1, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("servobj1"));
		xls.SetCellText(nCol + 2, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("inservobj1"));
		xls.SetCellText(nCol + 3, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("poorobj1"));
		xls.SetCellText(nCol + 4, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("servobj2"));
		xls.SetCellText(nCol + 5, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("inservobj2"));
		xls.SetCellText(nCol + 6, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("majorobj3"));
		xls.SetCellText(nCol + 7, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("minorobj3"));
		xls.SetCellText(nCol + 8, nRow, szTemp, FMT_INTEGER);
		tmpStr = rs.GetValue(_T("grouptype")).Trim();
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\HOATDONGCACKHOACLS.XLS"));
} 
void CrptParaclinicalDeptActivitiesDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CrptParaclinicalDeptActivitiesDialog::OnAddrptParaclinicalDeptActivitiesDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptParaclinicalDeptActivitiesDialog::OnEditrptParaclinicalDeptActivitiesDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptParaclinicalDeptActivitiesDialog::OnDeleterptParaclinicalDeptActivitiesDialog(){
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
 		OnCancelrptParaclinicalDeptActivitiesDialog(); 
 	}
	return 0;
}
int CrptParaclinicalDeptActivitiesDialog::OnSaverptParaclinicalDeptActivitiesDialog(){
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
 		//OnrptParaclinicalDeptActivitiesDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptParaclinicalDeptActivitiesDialog::OnCancelrptParaclinicalDeptActivitiesDialog(){
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
int CrptParaclinicalDeptActivitiesDialog::OnrptParaclinicalDeptActivitiesDialogListLoadData(){
	return 0;
}
