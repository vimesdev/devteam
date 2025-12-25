#include "HMSPatientRecordReportDialog.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientRecordReportDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordReportDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTreatmentTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientRecordReportDialog* )pWnd)->OnTreatmentTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatmentTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnTreatmentTypeSelendok();
}
/*static void _OnTreatmentTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnTreatmentTypeKillfocus();
}*/
/*static void _OnTreatmentTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnTreatmentTypeKillfocus();
}*/
static long _OnTreatmentTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordReportDialog *)pWnd)->OnTreatmentTypeLoadData();
}
/*static void _OnTreatmentTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientRecordReportDialog *)pWnd)->OnTreatmentTypeAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPatientRecordReportDialog *pVw = (CHMSPatientRecordReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSPatientRecordReportDialog *pVw = (CHMSPatientRecordReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientRecordReportDialog *pVw = (CHMSPatientRecordReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientRecordReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordReportDialog*)pWnd)->OnAddHMSPatientRecordReportDialog();
} 
static int _OnEditHMSPatientRecordReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordReportDialog*)pWnd)->OnEditHMSPatientRecordReportDialog();
} 
static int _OnDeleteHMSPatientRecordReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordReportDialog*)pWnd)->OnDeleteHMSPatientRecordReportDialog();
} 
static int _OnSaveHMSPatientRecordReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordReportDialog*)pWnd)->OnSaveHMSPatientRecordReportDialog();
} 
static int _OnCancelHMSPatientRecordReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordReportDialog*)pWnd)->OnCancelHMSPatientRecordReportDialog();
} 
CHMSPatientRecordReportDialog::CHMSPatientRecordReportDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 440;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMSPatientRecordReportDialog::~CHMSPatientRecordReportDialog()
{
}
void CHMSPatientRecordReportDialog::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 215, 85); 
	m_wndTreatmentLabel.Create(this, _T("Treatment Type"), 220, 60, 300, 85);
	m_wndTreatmentType.Create(this,305, 60, 425, 85); 
	m_wndPatientDead.Create(this, _T("T\x1EED vong"), 10, 95, 170, 120);
	m_wndPrint.Create(this, _T("&Print"), 180, 95, 260, 120);
	m_wndExport.Create(this, _T("&Export"), 265, 95, 345, 120);
	m_wndClose.Create(this, _T("&Close"), 350, 95, 430, 120);

}
void CHMSPatientRecordReportDialog::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndTreatmentType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTreatmentType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPatientRecordReportDialog::OnSetWindowEvents()
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
	m_wndTreatmentType.SetEvent(WE_SELENDOK, _OnTreatmentTypeSelendokFnc);
	//m_wndTreatmentType.SetEvent(WE_SETFOCUS, _OnTreatmentTypeSetfocusFnc);
	//m_wndTreatmentType.SetEvent(WE_KILLFOCUS, _OnTreatmentTypeKillfocusFnc);
	m_wndTreatmentType.SetEvent(WE_SELCHANGE, _OnTreatmentTypeSelectChangeFnc);
	m_wndTreatmentType.SetEvent(WE_LOADDATA, _OnTreatmentTypeLoadDataFnc);
	//m_wndTreatmentType.SetEvent(WE_ADDNEW, _OnTreatmentTypeAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	//m_szFromDate.Format(_T("%s %s"), pMF->GetPreviousDay(pMF->GetSysDate()), _T("00:01"));

	m_szFromDate.Format(_T("%s %s"), pMF->GetSysDate(), _T("00:01"));
	m_szToDate = pMF->GetSysDateTime();
	SetMode(VM_EDIT);
}
void CHMSPatientRecordReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndTreatmentType.GetDlgCtrlID(), m_szTreatmentTypeKey);
	DDX_Check(pDX, m_wndPatientDead.GetDlgCtrlID(), m_bPatientDead);
}
void CHMSPatientRecordReportDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientRecordReportDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSPatientRecordReportDialog::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szTreatmentTypeKey.Empty();


}
int CHMSPatientRecordReportDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
/*void CHMSPatientRecordReportDialog::OnFromDateChange(){
	
} */
/*void CHMSPatientRecordReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientRecordReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSPatientRecordReportDialog::OnFromDateCheckValue()
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
/*void CHMSPatientRecordReportDialog::OnToDateChange(){
	
} */
/*void CHMSPatientRecordReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSPatientRecordReportDialog::OnToDateKillfocus(){
	
} */
int CHMSPatientRecordReportDialog::OnToDateCheckValue()
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
void CHMSPatientRecordReportDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordReportDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSPatientRecordReportDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientRecordReportDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientRecordReportDialog::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as deptid, sd_name as deptname FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("deptname")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientRecordReportDialog::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientRecordReportDialog::OnTreatmentTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordReportDialog::OnTreatmentTypeSelendok(){
	 
}
/*void CHMSPatientRecordReportDialog::OnTreatmentTypeSetfocus(){
	
}*/
/*void CHMSPatientRecordReportDialog::OnTreatmentTypeKillfocus(){
	
}*/
long CHMSPatientRecordReportDialog::OnTreatmentTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTreatmentType.AddItems(
			_T("N"),
			_T("\x42\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB n\x1ED9i tr\xFA"),NULL);
	m_wndTreatmentType.AddItems(			
			_T("Y"),
			_T("\x42\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB ngo\x1EA1i tr\xFA"), NULL);
	return 0;
}
/*void CHMSPatientRecordReportDialog::OnTreatmentTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientRecordReportDialog::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void CHMSPatientRecordReportDialog::OnExportSelect()
{
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	BeginWaitCursor();

	CExcel xls;
	CString szTemp;
	CString szSQL;
	CString szWhere;
	szWhere.Empty();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 11);
	xls.SetColumnWidth(1, 11);
	xls.SetColumnWidth(2, 24);
	xls.SetColumnWidth(3, 9);
	xls.SetColumnWidth(4, 9);
	xls.SetColumnWidth(5, 18);
	xls.SetColumnWidth(6, 46);
	xls.SetColumnWidth(7, 17);
	xls.SetColumnWidth(8, 17);
	xls.SetColumnWidth(9, 17);
	xls.SetColumnWidth(10, 17);
	xls.SetColumnWidth(11, 20);
	xls.SetColumnWidth(12, 20);
	xls.SetColumnWidth(13, 43);
	xls.SetColumnWidth(14, 43);
	xls.SetColumnWidth(15, 43);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 17);
	xls.SetColumnWidth(18, 17);

	int nRow = 1, nCol = 0;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT, true, 12, 0);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT, true, 12, 0);

	xls.SetCellMergedColumns(nCol, nRow + 2, 18);
	TranslateString(_T("Patient Record Book"), szTemp);
	xls.SetCellText(nCol + 8, nRow + 3, szTemp, FMT_TEXT, true, 14, 0);

	szTemp.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), 
		          CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), 
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(nCol + 7, nRow + 4, szTemp, FMT_TEXT, true, 12, 0);

	TranslateString(_T("Record No"), szTemp);
	xls.SetCellText(nCol, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Document No"), szTemp);
	xls.SetCellText(nCol + 1, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Patient's Full Name"), szTemp);
	xls.SetCellText(nCol + 2, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Male Age"), szTemp);
	xls.SetCellText(nCol + 3, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Female Age"), szTemp);
	xls.SetCellText(nCol + 4, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Insurance Card"), szTemp);
	xls.SetCellText(nCol + 5, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Address"), szTemp);
	xls.SetCellText(nCol + 6, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Date Time Admission"), szTemp);
	xls.SetCellText(nCol + 7, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Date Time Transfer"), szTemp);
	xls.SetCellText(nCol + 8, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Date Time Death"), szTemp);
	xls.SetCellText(nCol + 9, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Date Time Discharge"), szTemp);
	xls.SetCellText(nCol + 10, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Admit Dept"), szTemp);
	xls.SetCellText(nCol + 11, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Discharge Dept"), szTemp);
	xls.SetCellText(nCol + 12, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Exam Dept Diagnostic"), szTemp);
	xls.SetCellText(nCol + 13, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Discharge Dept Diagnostic"), szTemp);
	xls.SetCellText(nCol + 14, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("ICD 10 Diagnostic"), szTemp);
	xls.SetCellText(nCol + 15, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("ICD10"), szTemp);
	xls.SetCellText(nCol + 16, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Treatment Result"), szTemp);
	xls.SetCellText(nCol + 17, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Rank"), szTemp);
	xls.SetCellText(nCol + 18, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true);

	CRecord rs(&pMF->m_db);
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hpr_enddeptid = '%s'"), m_szDepartmentKey);
	}
	if(!m_szTreatmentTypeKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpr_type ='%s' "), m_szTreatmentTypeKey);
	}
	
szSQL.Format(_T(" SELECT hpr_docno AS DocumentNo,") \
	_T("   hpr_class      AS Class,") \
	_T("   hpr_docrec     AS RecordNo,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname) AS PatientName,") \
	_T("   CASE") \
	_T("     WHEN hp_sex='M'") \
	_T("     THEN hms_getage(TRUNC(hd_admitdate), hp_birthdate)") \
	_T("   END AS MaleAge,") \
	_T("   CASE") \
	_T("     WHEN hp_sex='F'") \
	_T("     THEN hms_getage(TRUNC(hd_admitdate), hp_birthdate)") \
	_T("   END                                             AS FemaleAge,") \
	_T("   hd_cardno                                       AS InsuranceCard,") \
	_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address,") \
	_T("   hpr_admitdate                                   AS AdmissionDate,") \
	_T("   hhtd_transdate                                  AS TransDate,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN NULL") \
	_T("     ELSE hcr_diedate") \
	_T("   END         AS DieDate,") \
	_T("   hpr_enddate AS OutDate,") \
	_T("   (SELECT sd_name FROM sys_dept WHERE sd_id=hpr_admitdeptid AND rownum =1") \
	_T("   ) AS InFromDept,") \
	_T("   (SELECT sd_name FROM sys_dept WHERE sd_id=hpr_enddeptid AND rownum =1") \
	_T("   )               AS OutFromDept,") \
	_T("   hd_diagnostic   AS ExamDiagnostic,") \
	_T("   hcr_maindisease AS DiscDiagnostic,") \
	_T("   CASE") \
	_T("     WHEN ho_type ='D'") \
	_T("     THEN") \
	_T("       (SELECT ss_desc FROM sys_sel WHERE ss_id='hms_rank' AND ss_code =hd_object") \
	_T("       )") \
	_T("     ELSE CAST('' AS NVARCHAR2(1))") \
	_T("   END AS rank,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN hd_icd") \
	_T("     ELSE hcr_mainicd") \
	_T("   END AS ICD,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN") \
	_T("       (SELECT hi_name FROM hms_icd WHERE hi_icd=hd_icd") \
	_T("       )") \
	_T("     ELSE") \
	_T("       (SELECT hi_name FROM hms_icd WHERE hi_icd=hcr_mainicd") \
	_T("       )") \
	_T("   END AS ICDDiagnostic,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN") \
	_T("       (SELECT ss_desc FROM sys_sel WHERE ss_code=hd_result AND ss_id='hms_result'") \
	_T("       )") \
	_T("     ELSE") \
	_T("       (SELECT ss_desc FROM sys_sel WHERE ss_code=hcr_result AND ss_id='hms_result'") \
	_T("       )") \
	_T("   END AS Result") \
	_T(" FROM hms_patient_record") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=hpr_docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno=hd_patientno)") \
	_T(" LEFT JOIN hms_clinical_record") \
	_T(" ON(hcr_docno=hpr_docno)") \
	_T(" LEFT JOIN hms_htdoc") \
	_T(" ON(hhtd_docno=hpr_docno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(ho_id=hd_object)") \
	_T(" WHERE TRUNC(hpr_storeddate) BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s "), m_szFromDate, m_szToDate, szWhere);
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	int n = nRow + 7;
	//CDateTime date;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, n, rs.GetValue(_T("RecordNo")), FMT_TEXT);

		xls.SetCellText(nCol + 1, n, rs.GetValue(_T("DocumentNo")), FMT_INTEGER);

		xls.SetCellText(nCol + 2, n, rs.GetValue(_T("PatientName")), FMT_TEXT);

		xls.SetCellText(nCol + 3, n, rs.GetValue(_T("MaleAge")), FMT_TEXT);

		xls.SetCellText(nCol + 4, n, rs.GetValue(_T("FemaleAge")), FMT_TEXT);

		xls.SetCellText(nCol + 5, n, rs.GetValue(_T("InsuranceCard")), FMT_TEXT);

		xls.SetCellText(nCol + 6, n, rs.GetValue(_T("Address")), FMT_TEXT);

		szTemp = rs.GetValue(_T("AdmissionDate"));
		if (!szTemp.IsEmpty())
		{
			xls.SetCellText(nCol + 7, n, CDateTime::Convert(szTemp, yyyymmdd|hhmm, ddmmyyyy|hhmm), FMT_DATETIME);
		}

		szTemp = rs.GetValue(_T("TransDate"));
		if (!szTemp.IsEmpty())
		{
			xls.SetCellText(nCol + 8, n, CDateTime::Convert(szTemp, yyyymmdd|hhmm, ddmmyyyy|hhmm), FMT_DATETIME);
		}

		szTemp = rs.GetValue(_T("DieDate"));
		if (!szTemp.IsEmpty())
		{
			xls.SetCellText(nCol + 9, n,  CDateTime::Convert(szTemp, yyyymmdd|hhmm, ddmmyyyy|hhmm), FMT_DATETIME);
		}

		szTemp = rs.GetValue(_T("OutDate"));
		if (!szTemp.IsEmpty())
		{
			xls.SetCellText(nCol + 10, n,  CDateTime::Convert(szTemp, yyyymmdd|hhmm, ddmmyyyy|hhmm), FMT_DATETIME);
		}

		xls.SetCellText(nCol + 11, n, rs.GetValue(_T("InFromDept")), FMT_TEXT);

		xls.SetCellText(nCol + 12, n, rs.GetValue(_T("OutFromDept")), FMT_TEXT);

		xls.SetCellText(nCol + 13, n, rs.GetValue(_T("ExamDiagnostic")), FMT_TEXT);

		xls.SetCellText(nCol + 14, n, rs.GetValue(_T("DiscDiagnostic")), FMT_TEXT);

		xls.SetCellText(nCol + 15, n, rs.GetValue(_T("ICDDiagnostic")), FMT_TEXT);

		xls.SetCellText(nCol + 16, n, rs.GetValue(_T("ICD")), FMT_TEXT);

		xls.SetCellText(nCol + 17, n, rs.GetValue(_T("Result")), FMT_TEXT);

		xls.SetCellText(nCol + 18, n, rs.GetValue(_T("Rank")), FMT_TEXT);

		n++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Ho so benh an.xls"));
} 
void CHMSPatientRecordReportDialog::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
}
void CHMSPatientRecordReportDialog::OnPrint(bool bPreview)
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, tmpStr, szWhere, szS;
	UpdateData(TRUE);

	CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/BAOCAOHOSOLUUTRU.RPT"), true))
	{
		//ShowMessageBox(_T("Can not load file report"), 0);
		return;
	}

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);

	if(m_bPatientDead){
		rpt.GetReportHeader()->SetValue(_T("ReportName"), _T("\x44\x41NH S\xC1\x43H L\x1AFU TR\x1EEE \x42\x1EC6NH \xC1N T\x1EEC VONG"));
	}
	

	szTemp = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	tmpStr.Format(szTemp, CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T("AND hpr_enddeptid = '%s'"), m_szDepartmentKey);
	}
	if(!m_szTreatmentTypeKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpr_type ='%s' "), m_szTreatmentTypeKey);
	}

	if(m_bPatientDead){
		szWhere.AppendFormat(_T(" AND hpr_dead ='%s' "), _T("Y"));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hpr_dead ='%s' "), _T("N"));
	}

	szSQL.Format(_T(" SELECT hpr_docno AS DocumentNo, hpr_enddeptid as Dept,") \
	_T("   hpr_class      AS Class,") \
	_T("   hpr_docrec     AS RecordNo,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname) AS PatientName, hp_birthdate AS birthdate, ") \
	_T("   CASE") \
	_T("     WHEN hp_sex='M'") \
	_T("     THEN hms_getage(TRUNC(hd_admitdate), hp_birthdate)") \
	_T("   END AS MaleAge,") \
	_T("   CASE") \
	_T("     WHEN hp_sex='F'") \
	_T("     THEN hms_getage(TRUNC(hd_admitdate), hp_birthdate)") \
	_T("   END                                             AS FemaleAge,") \
	_T("   hd_cardno                                       AS InsuranceCard,") \
	_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address,") \
	_T("   hpr_admitdate                                   AS AdmissionDate,") \
	_T("   hhtd_transdate                                  AS TransDate,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN NULL") \
	_T("     ELSE hcr_diedate") \
	_T("   END         AS DieDate,") \
	_T("   hpr_enddate AS OutDate,") \
	_T("   (SELECT sd_name FROM sys_dept WHERE sd_id=hpr_admitdeptid AND rownum =1") \
	_T("   ) AS InFromDept,") \
	_T("   (SELECT sd_name FROM sys_dept WHERE sd_id=hpr_enddeptid AND rownum =1") \
	_T("   )               AS OutFromDept,") \
	_T("   hd_diagnostic   AS ExamDiagnostic,") \
	_T("   hcr_maindisease AS DiscDiagnostic,") \
	_T("   CASE") \
	_T("     WHEN ho_type ='D'") \
	_T("     THEN") \
	_T("       (SELECT ss_desc FROM sys_sel WHERE ss_id='hms_rank' AND ss_code =hp_rank") \
	_T("       )") \
	_T("     ELSE CAST('' AS NVARCHAR2(1))") \
	_T("   END AS rank, get_objectname(hd_object) AS DoiTuong ,hp_workplace as Donvi,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN hd_icd") \
	_T("     ELSE hcr_mainicd") \
	_T("   END AS ICD,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN") \
	_T("       (SELECT hi_name FROM hms_icd WHERE hi_icd=hd_icd") \
	_T("       )") \
	_T("     ELSE") \
	_T("       (SELECT hi_name FROM hms_icd WHERE hi_icd=hcr_mainicd") \
	_T("       )") \
	_T("   END AS ICDDiagnostic,") \
	_T("   CASE") \
	_T("     WHEN hpr_class='E'") \
	_T("     THEN") \
	_T("       (SELECT ss_desc FROM sys_sel WHERE ss_code=hd_result AND ss_id='hms_result'") \
	_T("       )") \
	_T("     ELSE") \
	_T("       (SELECT ss_desc FROM sys_sel WHERE ss_code=hcr_result AND ss_id='hms_result'") \
	_T("       )") \
	_T("   END AS Result") \
	_T(" FROM hms_patient_record") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=hpr_docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno=hd_patientno)") \
	_T(" LEFT JOIN hms_clinical_record") \
	_T(" ON(hcr_docno=hpr_docno)") \
	_T(" LEFT JOIN hms_htdoc") \
	_T(" ON(hhtd_docno=hpr_docno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(ho_id=hd_object)") \
	_T(" WHERE hpr_storeddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
	_T(" ORDER BY cast(hpr_docrec as integer) "), m_szFromDate, m_szToDate, szWhere);

	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return ;
	}
	_fmsg(_T("%s"), szSQL);
	CReportSection* rptDetail; 
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), rs.GetValue(_T("Dept")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("RecordNo")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("PatientName")));
		szTemp = rs.GetValue(_T("birthdate"));
		rptDetail->SetValue(_T("4"), CDate::Convert(szTemp, yyyymmdd, ddmmyyyy));
		if(rs.GetValue(_T("rank")).GetLength() > 1)
		{
			szS.Format(_T(" / "));
		}else
			szS.Empty();
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("DoiTuong"))+szS+rs.GetValue(_T("rank")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("Donvi")));

		szTemp = rs.GetValue(_T("AdmissionDate"));
		if (!szTemp.IsEmpty())
			rptDetail->SetValue(_T("7"), CDate::Convert(szTemp, yyyymmdd, ddmmyyyy));

		szTemp = rs.GetValue(_T("OutDate"));
		if (!szTemp.IsEmpty())
			rptDetail->SetValue(_T("8"), CDate::Convert(szTemp, yyyymmdd, ddmmyyyy));

		rptDetail->SetValue(_T("9"), rs.GetValue(_T("DiscDiagnostic")));

		rs.MoveNext();
	}
	CString szDate = pMF->GetSysDate();
	//szTemp = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	tmpStr.Format(_T("H\xE0 N\x1ED9i, ng\xE0y %s th\xE1ng %s n\x103m %s"), szDate.Right(2),szDate.Mid(5,2),szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
int CHMSPatientRecordReportDialog::OnAddHMSPatientRecordReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientRecordReportDialog::OnEditHMSPatientRecordReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientRecordReportDialog::OnDeleteHMSPatientRecordReportDialog(){
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
 		OnCancelHMSPatientRecordReportDialog(); 
 	}
	return 0;
}
int CHMSPatientRecordReportDialog::OnSaveHMSPatientRecordReportDialog(){
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
 		//OnHMSPatientRecordReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientRecordReportDialog::OnCancelHMSPatientRecordReportDialog(){
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
int CHMSPatientRecordReportDialog::OnHMSPatientRecordReportDialogListLoadData(){
	return 0;
}
