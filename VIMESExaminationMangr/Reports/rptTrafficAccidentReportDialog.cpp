#include "rptTrafficAccidentReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptTrafficAccidentReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptTrafficAccidentReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptTrafficAccidentReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptTrafficAccidentReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptTrafficAccidentReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptTrafficAccidentReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptTrafficAccidentReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptTrafficAccidentReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptTrafficAccidentReportDialog *pVw = (CrptTrafficAccidentReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptTrafficAccidentReportDialog *pVw = (CrptTrafficAccidentReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptTrafficAccidentReportDialog *pVw = (CrptTrafficAccidentReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTrafficAccidentReportDialogFnc(CWnd *pWnd){
	 return ((CrptTrafficAccidentReportDialog*)pWnd)->OnAddHMSTrafficAccidentReportDialog();
} 
static int _OnEditHMSTrafficAccidentReportDialogFnc(CWnd *pWnd){
	 return ((CrptTrafficAccidentReportDialog*)pWnd)->OnEditHMSTrafficAccidentReportDialog();
} 
static int _OnDeleteHMSTrafficAccidentReportDialogFnc(CWnd *pWnd){
	 return ((CrptTrafficAccidentReportDialog*)pWnd)->OnDeleteHMSTrafficAccidentReportDialog();
} 
static int _OnSaveHMSTrafficAccidentReportDialogFnc(CWnd *pWnd){
	 return ((CrptTrafficAccidentReportDialog*)pWnd)->OnSaveHMSTrafficAccidentReportDialog();
} 
static int _OnCancelHMSTrafficAccidentReportDialogFnc(CWnd *pWnd){
	 return ((CrptTrafficAccidentReportDialog*)pWnd)->OnCancelHMSTrafficAccidentReportDialog();
} 
CrptTrafficAccidentReportDialog::CrptTrafficAccidentReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CrptTrafficAccidentReportDialog::~CrptTrafficAccidentReportDialog()
{
	if (m_rs) delete m_rs;
}
void CrptTrafficAccidentReportDialog::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 4, 430, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndPrint.Create(this, _T("&Print"), 180, 65, 260, 90);
	m_wndExport.Create(this, _T("&Export"), 265, 65, 345, 90);
	m_wndClose.Create(this, _T("&Close"), 350, 65, 430, 90);

}
void CrptTrafficAccidentReportDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_rs = new CRecord(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select sc_name as hospitalname, sc_pname as healthname from sys_company limit 1"));
	m_rs->ExecSQL(szSQL);
}
void CrptTrafficAccidentReportDialog::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
}
void CrptTrafficAccidentReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptTrafficAccidentReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptTrafficAccidentReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptTrafficAccidentReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptTrafficAccidentReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate date(pMF->GetSysDate());
		CDateTime datetime;
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
			datetime.SetDate(date.GetYear(), date.GetMonth(), date.GetDay() - 1);
			datetime.SetTime(0, 1, 0);
			m_szFromDate = datetime.GetDateTime();
			m_szToDate = pMF->GetSysDateTime();
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
/*void CrptTrafficAccidentReportDialog::OnFromDateChange(){
	
} */
/*void CrptTrafficAccidentReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptTrafficAccidentReportDialog::OnFromDateKillfocus(){
	
} */
int CrptTrafficAccidentReportDialog::OnFromDateCheckValue()
{
	UpdateData(TRUE);
	CDate date;
	date.ParseDate(m_szToDate);
	if (date.GetYear() != 1752 && CompareDateTime(m_szFromDate, m_szToDate) > 0)
	{

		m_wndFromDate.SetToolTipMessage(_T("This value must be less than or equal to To Date"));
		return -1;
	}
	return 0;
} 
/*void CrptTrafficAccidentReportDialog::OnToDateChange(){
	
} */
/*void CrptTrafficAccidentReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptTrafficAccidentReportDialog::OnToDateKillfocus(){
	
} */
int CrptTrafficAccidentReportDialog::OnToDateCheckValue()
{
	UpdateData(TRUE);
	CDate date;
	date.ParseDate(m_szFromDate);
	if (date.GetYear() != 1752 && CompareDateTime(m_szToDate, m_szFromDate) < 0)
	{
		m_wndToDate.SetToolTipMessage(_T("This value must be greater than or equal to From Date"));
		return -1;
	}
	return 0;
} 
void CrptTrafficAccidentReportDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void CrptTrafficAccidentReportDialog::OnExportSelect()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	BeginWaitCursor();

	CExcel xls;
	CString szTemp, tmpStr;
	CString szSQL;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 54);

	int nRow = 1, nCol = 0;
	//xls.SetCellMergedColumns(nCol, nRow, 4);
	//xls.SetCellMergedColumns(nCol, nRow + 1, 4);
	if (!m_rs->IsEOF())
	{
		xls.SetCellText(nCol, nRow, m_rs->GetValue(_T("healthname")), FMT_TEXT, true, 10, 0);
		xls.SetCellText(nCol, nRow + 1, m_rs->GetValue(_T("hospitalname")), FMT_TEXT, true, 10, 0);
	}

	xls.SetCellMergedColumns(nCol, nRow + 2, 9);
	TranslateString(_T("Weekly, monthly report"), szTemp);
	xls.SetCellText(nCol, nRow + 3, szTemp, FMT_TEXT, true, 14, 0);
	TranslateString(_T("Cases of traffic accident go to hospital in emergency"), szTemp);
	xls.SetCellText(nCol, nRow + 4, szTemp, FMT_TEXT, true, 14, 0);

	szTemp.Format(_T("Tu ngay %s Den ngay %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(nCol, nRow + 5, szTemp, FMT_TEXT, true, 10, 0);
	//int nRow = 8;
	//xls.SetCellMergedColumns(nCol, nRow + 7, 6);
	xls.SetCellMergedRows(nCol, nRow + 7, 2);
	TranslateString(_T("Content"), szTemp);
	xls.SetCellText(nCol, nRow + 7, szTemp, FMT_TEXT, true, 11, 0);

	TranslateString(_T("Total"), szTemp);
	xls.SetCellText(nCol + 1, nRow + 7, szTemp, FMT_TEXT, true, 11, 0);

	xls.SetCellMergedColumns(nCol + 2, nRow + 7, 2);
	TranslateString(_T("Total"), szTemp);
	xls.SetCellText(nCol + 2, nRow + 7, szTemp, FMT_TEXT, true, 11, 0);

	TranslateString(_T("Male"), szTemp);
	xls.SetCellText(nCol + 2, nRow + 8, szTemp, FMT_TEXT, true, 10, 0);
	TranslateString(_T("Female"), szTemp);
	xls.SetCellText(nCol + 3, nRow + 8, szTemp, FMT_TEXT, true, 10, 0);

	xls.SetCellMergedColumns(nCol + 4, nRow + 7, 5);
	TranslateString(_T("Age Group"), szTemp);
	xls.SetCellText(nCol + 4, nRow + 7, szTemp, FMT_TEXT, true, 11, 0);
	xls.SetCellText(nCol + 4, nRow + 8, _T("0-4"), FMT_TEXT, true, 10, 0);
	xls.SetCellText(nCol + 5, nRow + 8, _T("5-14"), FMT_TEXT, true, 10, 0);
	xls.SetCellText(nCol + 6, nRow + 8, _T("15-19"), FMT_TEXT, true, 10, 0);
	xls.SetCellText(nCol + 7, nRow + 8, _T("20-59"), FMT_TEXT, true, 10, 0);
	xls.SetCellText(nCol + 8, nRow + 8, _T("60+"), FMT_TEXT, true, 10, 0);


	//for (int i = nRow + 9; i < 37; i++)
		//xls.SetCellMergedColumns(0, i, 6);
	TranslateString(_T("1. Total number of victims in emergency"), szTemp);
	xls.SetCellText(nCol, nRow + 9, szTemp, FMT_TEXT, true, 10, 0);

	TranslateString(_T("2. Victims of traffic accident in emergency"), szTemp);
	xls.SetCellText(nCol, nRow + 10, szTemp, FMT_TEXT, true, 10, 0);

	TranslateString(_T("In which:"), szTemp);
	xls.SetCellText(nCol, nRow + 11, szTemp, FMT_TEXT, true, 10, 0);

	for (int i = 1; i < 9; i++)
		xls.SetCellMergedRows(i, nRow + 10, 2);

	TranslateString(_T("- Total cranial injury"), szTemp);
	xls.SetCellText(nCol, nRow + 12, szTemp, FMT_TEXT, false, 10, 0);

	TranslateString(_T("- Total cranial injury do not wear helmet"), szTemp);
	xls.SetCellText(nCol, nRow + 13, szTemp, FMT_TEXT, false, 10, 0);

	TranslateString(_T("- Total spinal neck injury"), szTemp);
	xls.SetCellText(nCol, nRow + 14, szTemp, FMT_TEXT, false, 10, 0);

	TranslateString(_T("- Total cases of emergency surgery"), szTemp);
	xls.SetCellText(nCol, nRow + 15, szTemp, FMT_TEXT, false, 10, 0);

	TranslateString(_T("3. Information about helmet"), szTemp);
	xls.SetCellText(nCol, nRow + 16, szTemp, FMT_TEXT, true, 10, 0);

	TranslateString(_T("- Total cases have broken helmet"), szTemp);
	xls.SetCellText(nCol, nRow + 17, szTemp, FMT_TEXT, false, 10, 0);

	TranslateString(_T("- Number of victims was not wearing a helmet strap"), szTemp);
	xls.SetCellText(nCol, nRow + 18, szTemp, FMT_TEXT, false, 10, 0);

	TranslateString(_T("- Helmet of unknown origin"), szTemp);
	xls.SetCellText(nCol, nRow + 19, szTemp, FMT_TEXT, false, 10, 0);

	TranslateString(_T("4. Total cases of traffic accident"), szTemp);
	xls.SetCellText(nCol, nRow + 20, szTemp, FMT_TEXT, true, 10, 0);

	TranslateString(_T("use alcohol"), szTemp);
	xls.SetCellText(nCol, nRow + 21, szTemp, FMT_TEXT, true, 10, 0);
	for (int i = 1; i < 9; i++)
		xls.SetCellMergedRows(i, nRow + 20, 2);
	TranslateString(_T("5. Total cases of traffic accident"), szTemp);
	xls.SetCellText(nCol, nRow + 22, szTemp, FMT_TEXT, true, 10, 0);

	TranslateString(_T("have blood alcohol concentration"), szTemp);
	xls.SetCellText(nCol, nRow + 23, szTemp, FMT_TEXT, true, 10, 0);
	for (int i = 1; i < 9; i++)
		xls.SetCellMergedRows(i, nRow + 22, 2);
	TranslateString(_T("6. Vehicle cause accident"), szTemp);
	xls.SetCellText(nCol, nRow + 24, szTemp, FMT_TEXT, true, 10, 0);

	CRecord rss(&pMF->m_db);
	szSQL.Format(_T("SELECT ss_desc FROM sys_sel WHERE ss_id='hms_accident_transcaused'")\
		         _T(" AND cast(ss_code as integer) > 1 ORDER BY cast(ss_code as integer)"));
	rss.ExecSQL(szSQL);
	nRow += 25;
	while (!rss.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("- ") + rss.GetValue(_T("ss_desc")), FMT_TEXT, false, 10, 0);
		nRow++;
		rss.MoveNext();
	}
	TranslateString(_T("7. Mortality and ask to go home"), szTemp);
	xls.SetCellText(nCol, nRow, szTemp, FMT_TEXT, true, 10, 0);
	TranslateString(_T("- Number of victims die before admission"), szTemp);
	xls.SetCellText(nCol, nRow + 1, szTemp, FMT_TEXT, false, 10, 0);
	TranslateString(_T("- Number of victims die after admission"), szTemp);
	xls.SetCellText(nCol, nRow + 2, szTemp, FMT_TEXT, false, 10, 0);
	TranslateString(_T("- Number of victims ask to go home"), szTemp);
	xls.SetCellText(nCol, nRow + 3, szTemp, FMT_TEXT, false, 10, 0);
	TranslateString(_T("8. Total number of patients transferred to"), szTemp);
	xls.SetCellText(nCol, nRow + 4, szTemp, FMT_TEXT, true, 10, 0);

	CRecord rs(&pMF->m_db);
	szSQL.Format(_T(" SELECT 	idx, ") \
				_T(" 	sum(total) as total,") \
				_T(" 	sum(total_female) as total_female,") \
				_T(" 	sum(total_male) as total_male,") \
				_T(" 	sum(less4age) as less4age,") \
				_T(" 	sum(between5_14age) as between5_14age,") \
				_T(" 	sum(between15_19age) as between15_19age,") \
				_T(" 	sum(between20_59age) as between20_59age,") \
				_T(" 	sum(greater60age) as greater60age") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT distinct ha_docno,  idx, docno, emertime, 1 as total,") \
				_T(" 	case when hp_sex='F' then 1 else 0 end as total_female,") \
				_T(" 	case when hp_sex='M' then 1 else 0 end as total_male,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as less4age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as between5_14age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 19 then 1 else 0 end as between15_19age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) between 20 and 59 then 1 else 0 end as between20_59age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) >= 60 then 1 else 0 end as greater60age") \
				_T(" FROM") \
				_T(" (") \
				_T(" 	SELECT distinct ha_docno,  10 as idx, ha_docno as docno, ha_emer_time as emertime, 1 as total_patient") \
				_T(" 	FROM hms_accident") \
				//he_docno=ha_docno and he_emergency='Y'
				_T(" 	WHERE ha_reason=1 ") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  11, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  13, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_cranial='Y' ") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  14, ha_docno, ha_emer_time,  1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_cranial='Y' and ha_helmet='N'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  15, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_spine='Y'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  16, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_emer_operation='Y'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  17, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  18, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y' and ha_hat_break='Y'") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  19, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y' and ha_protected='N'") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  20, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y' and length(ha_helmet_mfg)=0	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  21, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_wine_beer='Y'") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  23, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_wine_beer='Y' 	and ha_blood_per > 0") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  25, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause > 0") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  26, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 2") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  27, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 3") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  28, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 4") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  29, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 5") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  30, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 6") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  31, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause not in (2, 3, 4, 5, 6, 7)") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  32, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death > 0") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  33, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death = 1") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  34, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death =2") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  35, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death = 3") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  36, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_aid_place > 0	") \
				_T(" ) as tbl, hms_doc as d, hms_patient as p") \
				_T(" WHERE 	tbl.docno=d.hd_docno ") \
				_T(" 	and d.hd_patientno=p.hp_patientno ") \
				_T(" 	and emertime between timestamp '%s' and timestamp '%s' ") \
				_T(" ) as tbl2") \
				_T(" GROUP BY idx") \
				_T(" ORDER BY idx"), m_szFromDate, m_szToDate);
	int ret = rs.ExecSQL(szSQL);
	nRow += 9; 
	while (!rs.IsEOF())
	{
		nRow = ToInt(rs.GetValue(_T("idx")));
		xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("total")), FMT_INTEGER, false, 10, 0);
		xls.SetCellText(nCol + 2, nRow, rs.GetValue(_T("total_male")), FMT_INTEGER, false, 10, 0);
		xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("total_female")), FMT_INTEGER, false, 10, 0);
		xls.SetCellText(nCol + 4, nRow, rs.GetValue(_T("less4age")), FMT_INTEGER, false, 10, 0);
		xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("between5_14age")), FMT_INTEGER, false, 10, 0);
		xls.SetCellText(nCol + 6, nRow, rs.GetValue(_T("between15_19age")), FMT_INTEGER, false, 10, 0);
		xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("between20_59age")), FMT_INTEGER, false, 10, 0);
		xls.SetCellText(nCol + 8, nRow, rs.GetValue(_T("greater60age")), FMT_INTEGER, false, 10, 0);
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao tai nan GT.xls"));
}
void CrptTrafficAccidentReportDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
}
void CrptTrafficAccidentReportDialog::OnPrint(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, tmpStr;
	UpdateData(TRUE);

	CReport rpt;
	//CReportSection *pDetail;

	if (!rpt.Init(_T("Reports/HMS/HE_BAOCAOTAINANGIAOTHONG.RPT")))
	{
		//ShowMessageBox(_T("Can not load file report"), 0);
		return;
	}

	if (!m_rs->IsEOF())
	{
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_rs->GetValue(_T("healthname")));
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_rs->GetValue(_T("hospitalname")));
	}

	szTemp = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	//CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy);
	//CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy);
	tmpStr.Format(szTemp, CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	szSQL.Format(_T(" SELECT 	idx, ") \
				_T(" 	sum(total) as total,") \
				_T(" 	sum(total_female) as total_female,") \
				_T(" 	sum(total_male) as total_male,") \
				_T(" 	sum(less4age) as less4age,") \
				_T(" 	sum(between5_14age) as between5_14age,") \
				_T(" 	sum(between15_19age) as between15_19age,") \
				_T(" 	sum(between20_59age) as between20_59age,") \
				_T(" 	sum(greater60age) as greater60age") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT distinct ha_docno,  idx, docno, emertime, 1 as total,") \
				_T(" 	case when hp_sex='F' then 1 else 0 end as total_female,") \
				_T(" 	case when hp_sex='M' then 1 else 0 end as total_male,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as less4age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as between5_14age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 19 then 1 else 0 end as between15_19age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) between 20 and 59 then 1 else 0 end as between20_59age,") \
				_T(" 	case when date_part('year', age(date(hd_admitdate), hp_birthdate)) >= 60 then 1 else 0 end as greater60age") \
				_T(" FROM") \
				_T(" (") \
				_T(" 	SELECT distinct ha_docno,  1 as idx, ha_docno as docno, ha_emer_time as emertime, 1 as total_patient") \
				_T(" 	FROM hms_exam, hms_accident") \
				_T(" 	WHERE ha_reason=1 ") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  2, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  21, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_cranial='Y' ") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  22, ha_docno, ha_emer_time,  1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_cranial='Y' and ha_helmet='N'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  23, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_spine='Y'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  24, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_emer_operation='Y'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  3, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y'	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  31, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y' and ha_hat_break='Y'") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  32, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y' and ha_protected='N'") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  33, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_helmet='Y' and length(ha_helmet_mfg)=0	") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  4, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_wine_beer='Y'") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  5, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_wine_beer='Y' 	and ha_blood_per > 0") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  6, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause > 0") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  61, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 2") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  62, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 3") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  63, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 4") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  64, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 5") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  65, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause = 6") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  66, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_transport_cause not in (2, 3, 4, 5, 6, 7)") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  7, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death > 0") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  71, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death = 1") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  72, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death =2") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  73, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_death = 3") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT distinct ha_docno,  8, ha_docno, ha_emer_time, 1") \
				_T(" 	FROM hms_accident") \
				_T(" 	WHERE ha_reason=1 and ha_aid_place > 0	") \
				_T(" ) as tbl, hms_doc as d, hms_patient as p") \
				_T(" WHERE 	tbl.docno=d.hd_docno ") \
				_T(" 	and d.hd_patientno=p.hp_patientno ") \
				_T(" 	and emertime between timestamp '%s' and timestamp '%s' ") \
				_T(" ) as tbl2") \
				_T(" GROUP BY idx") \
				_T(" ORDER BY cast(idx as text)"), m_szFromDate, m_szToDate);
	int ret = rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	//_msg(_T("%d"), ret);
	while (!rs.IsEOF())
	{
		//pDetail = rpt.AddDetail();
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")), rs.GetValue(_T("total")));
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")) + _T("_1"), rs.GetValue(_T("total_male")));
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")) + _T("_2"), rs.GetValue(_T("total_female")));
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")) + _T("_3"), rs.GetValue(_T("less4age")));
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")) + _T("_4"), rs.GetValue(_T("between5_14age")));
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")) + _T("_5"), rs.GetValue(_T("between15_19age")));
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")) + _T("_6"), rs.GetValue(_T("between20_59age")));
		rpt.GetPageHeader()->SetValue(rs.GetValue(_T("idx")) + _T("_7"), rs.GetValue(_T("greater60age")));
		rs.MoveNext();
	}
	CDate date;
	date.ParseDate(pMF->GetSysDate());
	szTemp = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	tmpStr.Format(szTemp, date.GetDay(), date.GetMonth(), date.GetYear());
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
int CrptTrafficAccidentReportDialog::OnAddHMSTrafficAccidentReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptTrafficAccidentReportDialog::OnEditHMSTrafficAccidentReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptTrafficAccidentReportDialog::OnDeleteHMSTrafficAccidentReportDialog(){
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
 		OnCancelHMSTrafficAccidentReportDialog(); 
 	}
	return 0;
}
int CrptTrafficAccidentReportDialog::OnSaveHMSTrafficAccidentReportDialog(){
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
 		//OnHMSTrafficAccidentReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptTrafficAccidentReportDialog::OnCancelHMSTrafficAccidentReportDialog(){
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
int CrptTrafficAccidentReportDialog::OnHMSTrafficAccidentReportDialogListLoadData(){
	return 0;
}
