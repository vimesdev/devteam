#include "rptDailyActivitiesReportDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnCaculationDateChangeFnc(CWnd *pWnd){
	((CrptDailyActivitiesReportDialog *)pWnd)->OnCaculationDateChange();
} */
/*static void _OnCaculationDateSetfocusFnc(CWnd *pWnd){
	((CrptDailyActivitiesReportDialog *)pWnd)->OnCaculationDateSetfocus();} */ 
/*static void _OnCaculationDateKillfocusFnc(CWnd *pWnd){
	((CrptDailyActivitiesReportDialog *)pWnd)->OnCaculationDateKillfocus();
} */
static int _OnCaculationDateCheckValueFnc(CWnd *pWnd){
	return ((CrptDailyActivitiesReportDialog *)pWnd)->OnCaculationDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptDailyActivitiesReportDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CrptDailyActivitiesReportDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CrptDailyActivitiesReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CrptDailyActivitiesReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CrptDailyActivitiesReportDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CrptDailyActivitiesReportDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptDailyActivitiesReportDialog *pVw = (CrptDailyActivitiesReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptDailyActivitiesReportDialog *pVw = (CrptDailyActivitiesReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptDailyActivitiesReportDialog *pVw = (CrptDailyActivitiesReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptDailyActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptDailyActivitiesReportDialog*)pWnd)->OnAddrptDailyActivitiesReportDialog();
} 
static int _OnEditrptDailyActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptDailyActivitiesReportDialog*)pWnd)->OnEditrptDailyActivitiesReportDialog();
} 
static int _OnDeleterptDailyActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptDailyActivitiesReportDialog*)pWnd)->OnDeleterptDailyActivitiesReportDialog();
} 
static int _OnSaverptDailyActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptDailyActivitiesReportDialog*)pWnd)->OnSaverptDailyActivitiesReportDialog();
} 
static int _OnCancelrptDailyActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptDailyActivitiesReportDialog*)pWnd)->OnCancelrptDailyActivitiesReportDialog();
} 
CrptDailyActivitiesReportDialog::CrptDailyActivitiesReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CrptDailyActivitiesReportDialog::~CrptDailyActivitiesReportDialog()
{
	if (m_rs) delete m_rs;
}
void CrptDailyActivitiesReportDialog::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 490, 60);
	m_wndCaculationDateLabel.Create(this, _T("Caculation Date"), 10, 30, 105, 55);
	m_wndCaculationDate.Create(this,110, 30, 190, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 195, 30, 275, 55);
	m_wndDepartment.Create(this,280, 30, 485, 55); 
	m_wndPrint.Create(this, _T("&Print"), 240, 65, 320, 90);
	m_wndExport.Create(this, _T("&Export"), 325, 65, 405, 90);
	m_wndClose.Create(this, _T("&Close"), 410, 65, 490, 90);

}
void CrptDailyActivitiesReportDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCaculationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndCaculationDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	CString szSQL;
	szSQL.Format(_T("SELECT sc_pname AS HealthService, sc_name AS HospitalName FROM sys_company LIMIT 1"));
	m_rs = new CRecord(&pMF->m_db);
	m_rs->ExecSQL(szSQL);
}
void CrptDailyActivitiesReportDialog::OnSetWindowEvents()
{
	//m_wndCaculationDate.SetEvent(WE_CHANGE, _OnCaculationDateChangeFnc);
	//m_wndCaculationDate.SetEvent(WE_SETFOCUS, _OnCaculationDateSetfocusFnc);
	//m_wndCaculationDate.SetEvent(WE_KILLFOCUS, _OnCaculationDateKillfocusFnc);
	m_wndCaculationDate.SetEvent(WE_CHECKVALUE, _OnCaculationDateCheckValueFnc);
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
void CrptDailyActivitiesReportDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndCaculationDate.GetDlgCtrlID(), m_szCaculationDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
}
void CrptDailyActivitiesReportDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CrptDailyActivitiesReportDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CrptDailyActivitiesReportDialog::SetDefaultValues()
{
	m_szCaculationDate.Empty();
	m_szDepartmentKey.Empty();
}
int CrptDailyActivitiesReportDialog::SetMode(int nMode)
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
			m_szCaculationDate = pMF->GetSysDate();
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
/*void CrptDailyActivitiesReportDialog::OnCaculationDateChange(){
	
} */
/*void CrptDailyActivitiesReportDialog::OnCaculationDateSetfocus(){
	
} */
/*void CrptDailyActivitiesReportDialog::OnCaculationDateKillfocus(){
	
} */
int CrptDailyActivitiesReportDialog::OnCaculationDateCheckValue()
{
	return 0;
} 
void CrptDailyActivitiesReportDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CrptDailyActivitiesReportDialog::OnDepartmentSelendok(){
	 
}
/*void CrptDailyActivitiesReportDialog::OnDepartmentSetfocus(){
	
}*/
/*void CrptDailyActivitiesReportDialog::OnDepartmentKillfocus(){
	
}*/
long CrptDailyActivitiesReportDialog::OnDepartmentLoadData()
{	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE htr_deptid='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT Distinct htr_deptid AS ID, (SELECT sd_name FROM sys_dept WHERE sd_id=htr_deptid) AS Name ")\
				 _T("FROM hms_treatment_record"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptDailyActivitiesReportDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptDailyActivitiesReportDialog::OnPrintSelect()
{
	if (!IsValidateData())
		return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString szSQL, szTemp, tmpStr;
	if (!rpt.Init(_T("Reports/HMS/tinhhinhhoatdongtrongngay.rpt")))
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
	szTemp.Format(tmpStr, CDate::Convert(m_szCaculationDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szTemp);

	szSQL.Format(_T(" SELECT grp, sum(ttlpatient) as ttlpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(inservobj1) as inservobj1,") \
				_T(" 	sum(poorobj1) as poorobj1,") \
				_T(" 	sum(nocardobj2) as nocardobj2,") \
				_T(" 	sum(hascardobj2) as hascardobj2,") \
				_T(" 	sum(majorobj3) as majorobj3,") \
				_T(" 	sum(minorobj3) as minorobj3") \
				_T(" FROM") \
				_T(" (") \
				_T("  select grp, 1 as ttlpatient, ") \
				_T(" 	case when ho_type not in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as servobj1,") \
				_T(" 	case when ho_type in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as inservobj1,") \
				_T(" 	case when substr(hd_cardno, 1, 2)='HN' and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as poorobj1,") \
				_T(" 	case when length(hd_cardno)=0 and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as nocardobj2,") \
				_T(" 	case when length(hd_cardno)>0 and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as hascardobj2,") \
				_T(" 	case when hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as majorobj3,") \
				_T(" 	case when hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as minorobj3") \
				_T("  FROM") \
				_T("  (") \
				_T("   select 1 as grp , *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='I' and date(htr_admitdate)<'%s' and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 2, *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='I' and date(htr_admitdate)='%s' and htr_idx=1 and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 3, *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='I' and date(htr_admitdate)='%s' and htr_idx > 1 and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 4, *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion='M' and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 5, t.*") \
				_T("   from hms_treatment_record as t, hms_clinical_record") \
				_T("   where htr_docno=hcr_docno and htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion in('D','T') and hcr_result not in('8','5','6') and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 6, t.*") \
				_T("   from hms_treatment_record as t, hms_clinical_record") \
				_T("   where htr_docno=hcr_docno and htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion in('D','T') and hcr_result in('8') and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 7, t.*") \
				_T("   from hms_treatment_record as t, hms_clinical_record") \
				_T("   where htr_docno=hcr_docno and htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion in('D','T') and hcr_result in('5','6') and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 8, *") \
				_T("   from hms_treatment_record") \
				_T("   where htr_status='I' and date(htr_admitdate)<='%s' and htr_deptid='%s'") \
				_T("  ) as tbl") \
				_T("  LEFT JOIN hms_doc ON(hd_docno=htr_docno)") \
				_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" ) as tbl2") \
				_T(" GROUP BY grp ORDER BY grp"),
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey
				);
	rs.ExecSQL(szSQL);
	CReportSection *rptDetail;
	int nIndex;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIndex = ToInt(rs.GetValue(_T("grp")));
		switch (nIndex)
		{
			case 1:
				TranslateString(_T("Old Patients"), szTemp);
				break;
			case 2:
				TranslateString(_T("Incoming Patients"), szTemp);
				break;
			case 3:
				TranslateString(_T("Patients Transfer From Other Departments"), szTemp);
				break;
			case 4:
				TranslateString(_T("Patients Transfer To Other Departments"), szTemp);
				break;
			case 5:
				TranslateString(_T("Discharge Patients"), szTemp);
				break;
			case 6:
				TranslateString(_T("Escape Patients"), szTemp);
				break;
			case 7:
				TranslateString(_T("Death Patients"), szTemp);
				break;
			case 8:
				TranslateString(_T("Remaining Patients"), szTemp);
				break;
		}
		rptDetail->SetValue(_T("1"), szTemp);
		
		szTemp = rs.GetValue(_T("ttlpatient"));
		rptDetail->SetValue(_T("2"), szTemp);

		szTemp = rs.GetValue(_T("servobj1"));
		rptDetail->SetValue(_T("3"), szTemp);

		szTemp = rs.GetValue(_T("inservobj1"));
		rptDetail->SetValue(_T("4"), szTemp);

		szTemp = rs.GetValue(_T("poorobj1"));
		rptDetail->SetValue(_T("5"), szTemp);

		szTemp = rs.GetValue(_T("nocardobj2"));
		rptDetail->SetValue(_T("6"), szTemp);

		szTemp = rs.GetValue(_T("hascardobj2"));
		rptDetail->SetValue(_T("7"), szTemp);

		szTemp = rs.GetValue(_T("majorobj3"));
		rptDetail->SetValue(_T("8"), szTemp);

		szTemp = rs.GetValue(_T("minorobj3"));
		rptDetail->SetValue(_T("9"), szTemp);
		rs.MoveNext();
	}
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CrptDailyActivitiesReportDialog::OnExportSelect()
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
	xls.SetCellText(nCol, nRow + 4, _T("BAO CAO HOAT DONG THEO NGAY"), FMT_TEXT, true, 16);
	tmpStr.Format(_T(": %s"), CDate::Convert(m_szCaculationDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("Day"), szTemp);
	xls.SetCellText(nCol, nRow + 5, szTemp + tmpStr, FMT_TEXT, true, 12);
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
	TranslateString(_T("No Card"), szTemp);
	xls.SetCellText(nCol + 5, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Has Card"), szTemp);
	xls.SetCellText(nCol + 6, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellMergedColumns(nCol + 7, nRow + 7, 2);
	TranslateString(_T("Total Children Patient < 6"), szTemp);
	xls.SetCellText(nCol + 7, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 7, nRow + 8, _T("Kinh"), FMT_TEXT | FMT_CENTER, true, 12);
	TranslateString(_T("Compatriots of Ethnic"), szTemp);
	xls.SetCellText(nCol + 8, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	szSQL.Format(_T(" SELECT grp, sum(ttlpatient) as ttlpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(inservobj1) as inservobj1,") \
				_T(" 	sum(poorobj1) as poorobj1,") \
				_T(" 	sum(nocardobj2) as nocardobj2,") \
				_T(" 	sum(hascardobj2) as hascardobj2,") \
				_T(" 	sum(majorobj3) as majorobj3,") \
				_T(" 	sum(minorobj3) as minorobj3") \
				_T(" FROM") \
				_T(" (") \
				_T("  select grp, 1 as ttlpatient, ") \
				_T(" 	case when ho_type not in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as servobj1,") \
				_T(" 	case when ho_type in('I','D','C') and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as inservobj1,") \
				_T(" 	case when substr(hd_cardno, 1, 2)='HN' and hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as poorobj1,") \
				_T(" 	case when length(hd_cardno)=0 and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as nocardobj2,") \
				_T(" 	case when length(hd_cardno)>0 and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) > 365*6 then 1 else 0 end as hascardobj2,") \
				_T(" 	case when hp_ethnic=1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as majorobj3,") \
				_T(" 	case when hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as minorobj3") \
				_T("  FROM") \
				_T("  (") \
				_T("   select 1 as grp , *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='I' and date(htr_admitdate)<'%s' and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 2, *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='I' and date(htr_admitdate)='%s' and htr_idx=1 and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 3, *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='I' and date(htr_admitdate)='%s' and htr_idx > 1 and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 4, *") \
				_T("   from hms_treatment_record ") \
				_T("   where htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion='M' and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 5, t.*") \
				_T("   from hms_treatment_record as t, hms_clinical_record") \
				_T("   where htr_docno=hcr_docno and htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion in('D','T') and hcr_result not in('8','5','6') and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 6, t.*") \
				_T("   from hms_treatment_record as t, hms_clinical_record") \
				_T("   where htr_docno=hcr_docno and htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion in('D','T') and hcr_result in('8') and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 7, t.*") \
				_T("   from hms_treatment_record as t, hms_clinical_record") \
				_T("   where htr_docno=hcr_docno and htr_status='T' and date(htr_dischargedate)='%s' and htr_suggestion in('D','T') and hcr_result in('5','6') and htr_deptid='%s'") \
				_T("   union all") \
				_T("   select 8, *") \
				_T("   from hms_treatment_record") \
				_T("   where htr_status='I' and date(htr_admitdate)<='%s' and htr_deptid='%s'") \
				_T("  ) as tbl") \
				_T("  LEFT JOIN hms_doc ON(hd_docno=htr_docno)") \
				_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" ) as tbl2") \
				_T(" GROUP BY grp ORDER BY grp"),
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey,
				m_szCaculationDate, m_szDepartmentKey
				);
	rs.ExecSQL(szSQL);
	nRow += 9;
	int nIndex;
	while (!rs.IsEOF())
	{
		nIndex = ToInt(rs.GetValue(_T("grp")));
		switch (nIndex)
		{
			case 1:
				TranslateString(_T("Old Patients"), szTemp);
				break;
			case 2:
				TranslateString(_T("Incoming Patients"), szTemp);
				break;
			case 3:
				TranslateString(_T("Patients Transfer From Other Departments"), szTemp);
				break;
			case 4:
				TranslateString(_T("Patients Transfer To Other Departments"), szTemp);
				break;
			case 5:
				TranslateString(_T("Discharge Patients"), szTemp);
				break;
			case 6:
				TranslateString(_T("Escape Patients"), szTemp);
				break;
			case 7:
				TranslateString(_T("Death Patients"), szTemp);
				break;
			case 8:
				TranslateString(_T("Remaining Patients"), szTemp);
				break;
		}
		xls.SetCellText(nCol, nRow, szTemp, FMT_TEXT);

		szTemp = rs.GetValue(_T("ttlpatient"));
		xls.SetCellText(nCol + 1, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("servobj1"));
		xls.SetCellText(nCol + 2, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("inservobj1"));
		xls.SetCellText(nCol + 3, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("poorobj1"));
		xls.SetCellText(nCol + 4, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("nocardobj2"));
		xls.SetCellText(nCol + 5, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("hascardobj2"));
		xls.SetCellText(nCol + 6, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("majorobj3"));
		xls.SetCellText(nCol + 7, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("minorobj3"));
		xls.SetCellText(nCol + 8, nRow, szTemp, FMT_INTEGER);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\HOATDONGTRONGNGAY.XLS"));
} 
void CrptDailyActivitiesReportDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CrptDailyActivitiesReportDialog::OnAddrptDailyActivitiesReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptDailyActivitiesReportDialog::OnEditrptDailyActivitiesReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptDailyActivitiesReportDialog::OnDeleterptDailyActivitiesReportDialog(){
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
 		OnCancelrptDailyActivitiesReportDialog(); 
 	}
	return 0;
}
int CrptDailyActivitiesReportDialog::OnSaverptDailyActivitiesReportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
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
 		//OnrptDailyActivitiesReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptDailyActivitiesReportDialog::OnCancelrptDailyActivitiesReportDialog(){
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
int CrptDailyActivitiesReportDialog::OnrptDailyActivitiesReportDialogListLoadData(){
	return 0;
}
