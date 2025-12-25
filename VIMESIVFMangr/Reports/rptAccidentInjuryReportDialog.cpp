#include "rptAccidentInjuryReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptAccidentInjuryReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptAccidentInjuryReportDialog *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptAccidentInjuryReportDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CrptAccidentInjuryReportDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CrptAccidentInjuryReportDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptAccidentInjuryReportDialog *pVw = (CrptAccidentInjuryReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptAccidentInjuryReportDialog *pVw = (CrptAccidentInjuryReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptAccidentInjuryReportDialog *pVw = (CrptAccidentInjuryReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAccidentInjuryReportDialogFnc(CWnd *pWnd){
	 return ((CrptAccidentInjuryReportDialog*)pWnd)->OnAddHMSAccidentInjuryReportDialog();
} 
static int _OnEditHMSAccidentInjuryReportDialogFnc(CWnd *pWnd){
	 return ((CrptAccidentInjuryReportDialog*)pWnd)->OnEditHMSAccidentInjuryReportDialog();
} 
static int _OnDeleteHMSAccidentInjuryReportDialogFnc(CWnd *pWnd){
	 return ((CrptAccidentInjuryReportDialog*)pWnd)->OnDeleteHMSAccidentInjuryReportDialog();
} 
static int _OnSaveHMSAccidentInjuryReportDialogFnc(CWnd *pWnd){
	 return ((CrptAccidentInjuryReportDialog*)pWnd)->OnSaveHMSAccidentInjuryReportDialog();
} 
static int _OnCancelHMSAccidentInjuryReportDialogFnc(CWnd *pWnd){
	 return ((CrptAccidentInjuryReportDialog*)pWnd)->OnCancelHMSAccidentInjuryReportDialog();
} 
CrptAccidentInjuryReportDialog::CrptAccidentInjuryReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CrptAccidentInjuryReportDialog::~CrptAccidentInjuryReportDialog()
{
	if (m_rs) delete m_rs;
}
void CrptAccidentInjuryReportDialog::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndDept.Create(this,95, 60, 425, 85); 
	m_wndPrint.Create(this, _T("&Print"), 180, 95, 260, 120);
	m_wndExport.Create(this, _T("&Export"), 265, 95, 345, 120);
	m_wndClose.Create(this, _T("&Close"), 350, 95, 430, 120);
}
void CrptAccidentInjuryReportDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(81);
	m_wndDept.SetCheckBox(TRUE);
	m_rs = new CRecord(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select sc_name as hospitalname, sc_pname as healthname from sys_company limit 1"));
	m_rs->ExecSQL(szSQL);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CrptAccidentInjuryReportDialog::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
}
void CrptAccidentInjuryReportDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
}
void CrptAccidentInjuryReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptAccidentInjuryReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptAccidentInjuryReportDialog::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
}
int CrptAccidentInjuryReportDialog::SetMode(int nMode){
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
/*void CrptAccidentInjuryReportDialog::OnFromDateChange(){
	
} */
/*void CrptAccidentInjuryReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptAccidentInjuryReportDialog::OnFromDateKillfocus(){
	
} */
int CrptAccidentInjuryReportDialog::OnFromDateCheckValue()
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
/*void CrptAccidentInjuryReportDialog::OnToDateChange(){
	
} */
/*void CrptAccidentInjuryReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptAccidentInjuryReportDialog::OnToDateKillfocus(){
	
} */
int CrptAccidentInjuryReportDialog::OnToDateCheckValue()
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
void CrptAccidentInjuryReportDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptAccidentInjuryReportDialog::OnDeptSelendok(){
	 
}
/*void CrptAccidentInjuryReportDialog::OnDeptSetfocus(){
	
}*/
/*void CrptAccidentInjuryReportDialog::OnDeptKillfocus(){
	
}*/
long CrptAccidentInjuryReportDialog::OnDeptLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type='DT' %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptAccidentInjuryReportDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptAccidentInjuryReportDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void CrptAccidentInjuryReportDialog::OnExportSelect()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	BeginWaitCursor();

	CExcel xls;
	CString szTemp, tmpStr;
	CString szSQL, szDept;
	szDept.Empty();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 36);

	int nRow = 1, nCol = 0;
	xls.SetCellMergedColumns(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	if (!m_rs->IsEOF())
	{
		xls.SetCellText(nCol, nRow, m_rs->GetValue(_T("healthname")), FMT_TEXT, true, 10, 0);
		xls.SetCellText(nCol, nRow + 1, m_rs->GetValue(_T("hospitalname")), FMT_TEXT, true, 10, 0);
	}

	xls.SetCellMergedColumns(nCol, nRow + 2, 24);
	TranslateString(_T("Periodically injury statistical report"), szTemp);
	xls.SetCellText(nCol, nRow + 3, szTemp, FMT_TEXT, true, 14, 0);

	szTemp.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(nCol, nRow + 4, szTemp, FMT_TEXT, true, 10, 0);
	//int nRow = 8;

	xls.SetCellMergedRows(nCol, nRow + 6, 3);
	TranslateString(_T("Index"), szTemp);
	xls.SetCellText(nCol, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
	
	//xls.SetCellMergedColumns(nCol + 1, nRow + 6, 4);
	xls.SetCellMergedRows(nCol + 1, nRow + 6, 3);
	TranslateString(_T("Content"), szTemp);
	xls.SetCellText(nCol + 1, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);

	xls.SetCellMergedColumns(nCol + 2, nRow + 6, 6);
	TranslateString(_T("General Total"), szTemp);
	xls.SetCellText(nCol + 2, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellMergedRows(nCol + 2, nRow + 7, 2);
	TranslateString(_T("Catch"), szTemp);
	xls.SetCellText(nCol + 2, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellMergedRows(nCol + 3, nRow + 7, 2);
	TranslateString(_T("Death"), szTemp);
	xls.SetCellText(nCol + 3, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);

	xls.SetCellMergedColumns(nCol + 8, nRow + 6, 4);
	TranslateString(_T("From 0 to 4 years old"), szTemp);
	xls.SetCellText(nCol + 8, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellMergedColumns(nCol + 12, nRow + 6, 4);
	TranslateString(_T("From 5 to 14 years old"), szTemp);
	xls.SetCellText(nCol + 12, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellMergedColumns(nCol + 16, nRow + 6, 4);
	TranslateString(_T("From 15 to 60 years old"), szTemp);
	xls.SetCellText(nCol + 16, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellMergedColumns(20, nRow + 6, 4);
	TranslateString(_T("Over 60 years old"), szTemp);
	xls.SetCellText(nCol + 20, nRow + 6, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);

	int nStep = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			xls.SetCellMergedColumns(nCol + 4 + nStep, nRow + 7, 2);
			TranslateString(_T("Male"), szTemp);
			xls.SetCellText(nCol + 4 + nStep, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
		}
		else
		{
			xls.SetCellMergedColumns(nCol + 4 + nStep + 2, nRow + 7, 2);
			TranslateString(_T("Female"), szTemp);
			xls.SetCellText(nCol + 4 + nStep + 2, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 11, 0);
			nStep += 4;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			TranslateString(_T("Catch"), szTemp);
			xls.SetCellText(nCol + 4 + i, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 10, 0);
		}
		else
		{
			TranslateString(_T("Death"), szTemp);
			xls.SetCellText(nCol + 4 + i, nRow + 8, szTemp, FMT_TEXT | FMT_CENTER, true, 10, 0);
		}
	}

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

	if (szDept.IsEmpty())
	{
		szSQL.Format(_T(" SELECT  idx, description,") \
				_T(" 	sum(total_catch) as total_catch,") \
				_T(" 	sum(total_death) as total_death,") \
				_T(" 	sum(total_female_catch) as total_female_catch,") \
				_T(" 	sum(total_female_death) as total_female_death,") \
				_T(" 	sum(total_male_catch) as total_male_catch,") \
				_T(" 	sum(total_male_death) as total_male_death,") \
				_T(" 	sum(female_less4age_catch) as female_less4age_catch,") \
				_T(" 	sum(female_less4age_death) as female_less4age_death,") \
				_T(" 	sum(male_less4age_catch) as male_less4age_catch,") \
				_T(" 	sum(male_less4age_death) as male_less4age_death,") \
				_T(" 	sum(female_between5_14age_catch) as female_between5_14age_catch,") \
				_T(" 	sum(female_between5_14age_death) as female_between5_14age_death,") \
				_T(" 	sum(male_between5_14age_catch) as male_between5_14age_catch,") \
				_T(" 	sum(male_between5_14age_death) as male_between5_14age_death,") \
				_T(" 	sum(female_between15_60age_catch) as female_between15_60age_catch,") \
				_T(" 	sum(female_between15_60age_death) as female_between15_60age_death,") \
				_T(" 	sum(male_between15_60age_catch) as male_between15_60age_catch,") \
				_T(" 	sum(male_between15_60age_death) as male_between15_60age_death,") \
				_T(" 	sum(female_greater60age_catch) as female_greater60age_catch,") \
				_T(" 	sum(female_greater60age_death) as female_greater60age_death,") \
				_T(" 	sum(male_greater60age_catch) as male_greater60age_catch,") \
				_T(" 	sum(male_greater60age_death) as male_greater60age_death") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT distinct docno, idx, description, emertime, ") \
				_T("    1 as total_catch,") \
				_T(" 	case when death in (1, 2) then 1 else 0 end as total_death,") \
				_T(" 	case when hp_sex='F' then 1 else 0 end as total_female_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) then 1 else 0 end as total_female_death,") \
				_T(" 	case when hp_sex='M' then 1 else 0 end as total_male_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) then 1 else 0 end as total_male_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_death") \
				_T("  FROM") \
				_T("  (") \
				_T("   SELECT distinct ha_docno as docno, 100 as idx, '' as description, ha_emer_time as emertime, ha_death as death, 0") \
				_T("   FROM hms_accident") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno, 200, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident, hms_doc, hms_patient") \
				_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 200 + hp_occupation, ") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=hp_occupation and ss_id='sys_occupation'), ha_emer_time, ha_death, hp_occupation") \
				_T("   FROM hms_accident, hms_doc, hms_patient") \
				_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
				_T("   ORDER BY hp_occupation)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno, 300, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 300 + ha_acc_place,") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_acc_place and ss_id='hms_accident_place'), ha_emer_time, ha_death, ha_acc_place") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
				_T("   ORDER BY ha_acc_place)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno,  400, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_other_trauma > 0	 	") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 400 + ha_other_trauma, ") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_other_trauma and ss_id='hms_accident_othertrauma'), ha_emer_time, ha_death, ha_other_trauma") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_other_trauma > 0") \
				_T("   ORDER BY ha_other_trauma)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno,  500, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 500 + ha_reason,") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_reason and ss_id='hms_accident_reason'), ha_emer_time, ha_death, ha_reason") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0") \
				_T("   ORDER BY ha_reason)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno,  600, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_aid_place > 0") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 600 + ha_aid_place, ") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_aid_place and ss_id='hms_accident_aidplace'), ha_emer_time, ha_death, ha_aid_place") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_aid_place > 0") \
				_T("   ORDER BY ha_aid_place)") \
				_T("  ) as tbl, hms_doc as d, hms_patient as p") \
				_T("  WHERE tbl.docno=d.hd_docno") \
				_T("  and d.hd_patientno=p.hp_patientno ") \
				_T("  and hd_status='T'") \
				_T("  and emertime between timestamp '%s' and timestamp '%s'") \
				_T(" ) as tbl2") \
				_T(" GROUP BY idx, description") \
				_T(" ORDER BY idx"), m_szFromDate, m_szToDate);
	}
	else
	{
		szSQL.Format(_T(" SELECT  idx, description,") \
					_T(" 	sum(total_catch) as total_catch,") \
					_T(" 	sum(total_death) as total_death,") \
					_T(" 	sum(total_female_catch) as total_female_catch,") \
					_T(" 	sum(total_female_death) as total_female_death,") \
					_T(" 	sum(total_male_catch) as total_male_catch,") \
					_T(" 	sum(total_male_death) as total_male_death,") \
					_T(" 	sum(female_less4age_catch) as female_less4age_catch,") \
					_T(" 	sum(female_less4age_death) as female_less4age_death,") \
					_T(" 	sum(male_less4age_catch) as male_less4age_catch,") \
					_T(" 	sum(male_less4age_death) as male_less4age_death,") \
					_T(" 	sum(female_between5_14age_catch) as female_between5_14age_catch,") \
					_T(" 	sum(female_between5_14age_death) as female_between5_14age_death,") \
					_T(" 	sum(male_between5_14age_catch) as male_between5_14age_catch,") \
					_T(" 	sum(male_between5_14age_death) as male_between5_14age_death,") \
					_T(" 	sum(female_between15_60age_catch) as female_between15_60age_catch,") \
					_T(" 	sum(female_between15_60age_death) as female_between15_60age_death,") \
					_T(" 	sum(male_between15_60age_catch) as male_between15_60age_catch,") \
					_T(" 	sum(male_between15_60age_death) as male_between15_60age_death,") \
					_T(" 	sum(female_greater60age_catch) as female_greater60age_catch,") \
					_T(" 	sum(female_greater60age_death) as female_greater60age_death,") \
					_T(" 	sum(male_greater60age_catch) as male_greater60age_catch,") \
					_T(" 	sum(male_greater60age_death) as male_greater60age_death") \
					_T(" FROM") \
					_T(" (") \
					_T("  SELECT distinct docno, idx, description, emertime, ") \
					_T(" 	case when hd_indept in (%s) then 1 else 0 end as total_catch,") \
					_T(" 	case when hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') then 1 else 0 end as total_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) then 1 else 0 end as total_female_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') then 1 else 0 end as total_female_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) then 1 else 0 end as total_male_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') then 1 else 0 end as total_male_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_death") \
					_T("  FROM") \
					_T("  (") \
					_T("   SELECT distinct ha_docno as docno, 100 as idx, '' as description, ha_emer_time as emertime, ha_death as death, 0") \
					_T("   FROM hms_accident") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno, 200, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident, hms_doc, hms_patient") \
					_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 200 + hp_occupation, ") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=hp_occupation and ss_id='sys_occupation'), ha_emer_time, ha_death, hp_occupation") \
					_T("   FROM hms_accident, hms_doc, hms_patient") \
					_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
					_T("   ORDER BY hp_occupation)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno, 300, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 300 + ha_acc_place,") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_acc_place and ss_id='hms_accident_place'), ha_emer_time, ha_death, ha_acc_place") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
					_T("   ORDER BY ha_acc_place)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno,  400, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_other_trauma > 0	 	") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 400 + ha_other_trauma, ") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_other_trauma and ss_id='hms_accident_othertrauma'), ha_emer_time, ha_death, ha_other_trauma") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_other_trauma > 0") \
					_T("   ORDER BY ha_other_trauma)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno,  500, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 500 + ha_reason,") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_reason and ss_id='hms_accident_reason'), ha_emer_time, ha_death, ha_reason") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0") \
					_T("   ORDER BY ha_reason)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno,  600, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_aid_place > 0") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 600 + ha_aid_place, ") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_aid_place and ss_id='hms_accident_aidplace'), ha_emer_time, ha_death, ha_aid_place") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_aid_place > 0") \
					_T("   ORDER BY ha_aid_place)") \
					_T("  ) as tbl, hms_doc as d, hms_patient as p, hms_clinical_record as c") \
					_T("  WHERE tbl.docno=d.hd_docno") \
					_T("  and d.hd_patientno=p.hp_patientno") \
					_T("  and tbl.docno=hcr_docno") \
					_T("  and hd_status='T'") \
					_T("  and emertime between timestamp '%s' and timestamp '%s'") \
					_T(" ) as tbl2") \
					_T(" GROUP BY idx, description") \
					_T(" ORDER BY idx"),
					szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept,
					szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, m_szFromDate, m_szToDate);
	}
	CRecord rs(&pMF->m_db);
	int ret = rs.ExecSQL(szSQL);
	nRow += 9;
	bool bBold = false;
	int nIndex = 0, nIdx;
	while (!rs.IsEOF())
	{
		nIdx = ToInt(rs.GetValue(_T("idx")));
		if (nIdx % 100 == 0)
		{
			nIndex++;
			bBold = true;
			xls.SetCellText(nCol, nRow, int2str(nIndex), FMT_INTEGER, bBold, 10, 0);
			switch (nIndex)
			{
				case 1:
					szTemp = _T("S\x1ED1 ng\x1B0\x1EDDi \x62\x1ECB TNTT");
				break;
				case 2:
					szTemp = _T("Ngh\x1EC1 nghi\x1EC7p");
				break;
				case 3:
					szTemp = _T("\x110\x1ECB\x61 \x111i\x1EC3m \x78\x1EA3y r\x61");
				break;
				case 4:
					szTemp = _T("\x42\x1ED9 ph\x1EADn \x62\x1ECB th\x1B0\x1A1ng - I\x43\x44\x31\x30");
				break;
				case 5:
					szTemp = _T("Nguy\xEAn nh\xE2n TNTT - th\x65o I\x43\x44\x31\x30");
				break;
				case 6:
					szTemp = _T("\x110i\x1EC1u tr\x1ECB \x62\x61n \x111\x1EA7u, s\x61u TNTT");
				break;
			}
		}
		else
		{
			bBold = false;
			szTemp = rs.GetValue(_T("description"));
		}
		xls.SetCellText(nCol + 1, nRow, szTemp, FMT_TEXT, bBold, 10, 0);
		xls.SetCellText(nCol + 2, nRow, rs.GetValue(_T("total_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("total_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 4, nRow, rs.GetValue(_T("total_female_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("total_female_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 6, nRow, rs.GetValue(_T("total_male_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("total_male_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 8, nRow, rs.GetValue(_T("female_less4age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 9, nRow, rs.GetValue(_T("female_less4age_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 10, nRow, rs.GetValue(_T("male_less4age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 11, nRow, rs.GetValue(_T("male_less4age_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 12, nRow, rs.GetValue(_T("female_between5_14age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 13, nRow, rs.GetValue(_T("female_between5_14age_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 14, nRow, rs.GetValue(_T("male_between5_14age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 15, nRow, rs.GetValue(_T("male_between5_14age_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 16, nRow, rs.GetValue(_T("female_between15_60age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 17, nRow, rs.GetValue(_T("female_between15_60age_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 18, nRow, rs.GetValue(_T("male_between15_60age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 19, nRow, rs.GetValue(_T("male_between15_60age_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 20, nRow, rs.GetValue(_T("female_greater60age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 21, nRow, rs.GetValue(_T("female_greater60age_death")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 22, nRow, rs.GetValue(_T("male_greater60age_catch")), FMT_INTEGER, bBold, 10, 0);
		xls.SetCellText(nCol + 23, nRow, rs.GetValue(_T("male_greater60age_death")), FMT_INTEGER, bBold, 10, 0);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao thong ke TNTT.xls"));
} 
void CrptAccidentInjuryReportDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
}
void CrptAccidentInjuryReportDialog::OnPrint(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, tmpStr;
	CString szDept, szWhere;
	szDept.Empty();
	UpdateData(TRUE);

	CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/HE_BAOCAOTHONGKETAINANTHUONGTICHDINHKY.RPT")))
	{
		return;
	}

	BeginWaitCursor();

	if (!m_rs->IsEOF())
	{
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_rs->GetValue(_T("healthname")));
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_rs->GetValue(_T("hospitalname")));
	}

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

	szTemp = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	//CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy);
	//CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy);
	tmpStr.Format(szTemp, CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	if (szDept.IsEmpty())
	{
		szSQL.Format(_T(" SELECT  idx, description,") \
				_T(" 	sum(total_catch) as total_catch,") \
				_T(" 	sum(total_death) as total_death,") \
				_T(" 	sum(total_female_catch) as total_female_catch,") \
				_T(" 	sum(total_female_death) as total_female_death,") \
				_T(" 	sum(total_male_catch) as total_male_catch,") \
				_T(" 	sum(total_male_death) as total_male_death,") \
				_T(" 	sum(female_less4age_catch) as female_less4age_catch,") \
				_T(" 	sum(female_less4age_death) as female_less4age_death,") \
				_T(" 	sum(male_less4age_catch) as male_less4age_catch,") \
				_T(" 	sum(male_less4age_death) as male_less4age_death,") \
				_T(" 	sum(female_between5_14age_catch) as female_between5_14age_catch,") \
				_T(" 	sum(female_between5_14age_death) as female_between5_14age_death,") \
				_T(" 	sum(male_between5_14age_catch) as male_between5_14age_catch,") \
				_T(" 	sum(male_between5_14age_death) as male_between5_14age_death,") \
				_T(" 	sum(female_between15_60age_catch) as female_between15_60age_catch,") \
				_T(" 	sum(female_between15_60age_death) as female_between15_60age_death,") \
				_T(" 	sum(male_between15_60age_catch) as male_between15_60age_catch,") \
				_T(" 	sum(male_between15_60age_death) as male_between15_60age_death,") \
				_T(" 	sum(female_greater60age_catch) as female_greater60age_catch,") \
				_T(" 	sum(female_greater60age_death) as female_greater60age_death,") \
				_T(" 	sum(male_greater60age_catch) as male_greater60age_catch,") \
				_T(" 	sum(male_greater60age_death) as male_greater60age_death") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT distinct docno, idx, description, emertime, ") \
				_T("    1 as total_catch,") \
				_T(" 	case when death in (1, 2) then 1 else 0 end as total_death,") \
				_T(" 	case when hp_sex='F' then 1 else 0 end as total_female_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) then 1 else 0 end as total_female_death,") \
				_T(" 	case when hp_sex='M' then 1 else 0 end as total_male_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) then 1 else 0 end as total_male_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_death,") \
				_T(" 	case when hp_sex='F' and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_catch,") \
				_T(" 	case when hp_sex='F' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_death,") \
				_T(" 	case when hp_sex='M' and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_catch,") \
				_T(" 	case when hp_sex='M' and death in (1, 2) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_death") \
				_T("  FROM") \
				_T("  (") \
				_T("   SELECT distinct ha_docno as docno, 100 as idx, '' as description, ha_emer_time as emertime, ha_death as death, 0") \
				_T("   FROM hms_accident") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno, 200, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident, hms_doc, hms_patient") \
				_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 200 + hp_occupation, ") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=hp_occupation and ss_id='sys_occupation'), ha_emer_time, ha_death, hp_occupation") \
				_T("   FROM hms_accident, hms_doc, hms_patient") \
				_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
				_T("   ORDER BY hp_occupation)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno, 300, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 300 + ha_acc_place,") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_acc_place and ss_id='hms_accident_place'), ha_emer_time, ha_death, ha_acc_place") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
				_T("   ORDER BY ha_acc_place)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno,  400, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_other_trauma > 0	 	") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 400 + ha_other_trauma, ") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_other_trauma and ss_id='hms_accident_othertrauma'), ha_emer_time, ha_death, ha_other_trauma") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0 and ha_other_trauma > 0") \
				_T("   ORDER BY ha_other_trauma)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno,  500, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 500 + ha_reason,") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_reason and ss_id='hms_accident_reason'), ha_emer_time, ha_death, ha_reason") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_reason > 0") \
				_T("   ORDER BY ha_reason)") \
				_T("   UNION ALL") \
				_T("   SELECT distinct ha_docno,  600, '', ha_emer_time, ha_death, 0") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_aid_place > 0") \
				_T("   UNION ALL") \
				_T("   (SELECT distinct ha_docno, 600 + ha_aid_place, ") \
				_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_aid_place and ss_id='hms_accident_aidplace'), ha_emer_time, ha_death, ha_aid_place") \
				_T("   FROM hms_accident") \
				_T("   WHERE ha_aid_place > 0") \
				_T("   ORDER BY ha_aid_place)") \
				_T("  ) as tbl, hms_doc as d, hms_patient as p") \
				_T("  WHERE tbl.docno=d.hd_docno") \
				_T("  and d.hd_patientno=p.hp_patientno ") \
				_T("  and hd_status='T'") \
				_T("  and emertime between timestamp '%s' and timestamp '%s'") \
				_T(" ) as tbl2") \
				_T(" GROUP BY idx, description") \
				_T(" ORDER BY idx"), m_szFromDate, m_szToDate);
	}
	else
	{
		szSQL.Format(_T(" SELECT  idx, description,") \
					_T(" 	sum(total_catch) as total_catch,") \
					_T(" 	sum(total_death) as total_death,") \
					_T(" 	sum(total_female_catch) as total_female_catch,") \
					_T(" 	sum(total_female_death) as total_female_death,") \
					_T(" 	sum(total_male_catch) as total_male_catch,") \
					_T(" 	sum(total_male_death) as total_male_death,") \
					_T(" 	sum(female_less4age_catch) as female_less4age_catch,") \
					_T(" 	sum(female_less4age_death) as female_less4age_death,") \
					_T(" 	sum(male_less4age_catch) as male_less4age_catch,") \
					_T(" 	sum(male_less4age_death) as male_less4age_death,") \
					_T(" 	sum(female_between5_14age_catch) as female_between5_14age_catch,") \
					_T(" 	sum(female_between5_14age_death) as female_between5_14age_death,") \
					_T(" 	sum(male_between5_14age_catch) as male_between5_14age_catch,") \
					_T(" 	sum(male_between5_14age_death) as male_between5_14age_death,") \
					_T(" 	sum(female_between15_60age_catch) as female_between15_60age_catch,") \
					_T(" 	sum(female_between15_60age_death) as female_between15_60age_death,") \
					_T(" 	sum(male_between15_60age_catch) as male_between15_60age_catch,") \
					_T(" 	sum(male_between15_60age_death) as male_between15_60age_death,") \
					_T(" 	sum(female_greater60age_catch) as female_greater60age_catch,") \
					_T(" 	sum(female_greater60age_death) as female_greater60age_death,") \
					_T(" 	sum(male_greater60age_catch) as male_greater60age_catch,") \
					_T(" 	sum(male_greater60age_death) as male_greater60age_death") \
					_T(" FROM") \
					_T(" (") \
					_T("  SELECT distinct docno, idx, description, emertime, ") \
					_T(" 	case when hd_indept in (%s) then 1 else 0 end as total_catch,") \
					_T(" 	case when hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') then 1 else 0 end as total_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) then 1 else 0 end as total_female_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') then 1 else 0 end as total_female_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) then 1 else 0 end as total_male_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') then 1 else 0 end as total_male_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as female_less4age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) <= 4 then 1 else 0 end as male_less4age_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as female_between5_14age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 5 and 14 then 1 else 0 end as male_between5_14age_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as female_between15_60age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) between 15 and 60 then 1 else 0 end as male_between15_60age_death,") \
					_T(" 	case when hp_sex='F' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_catch,") \
					_T(" 	case when hp_sex='F' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as female_greater60age_death,") \
					_T(" 	case when hp_sex='M' and hd_indept in (%s) and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_catch,") \
					_T(" 	case when hp_sex='M' and hcr_dischargedept in (%s) and hcr_suggestion='D' and hcr_result in ('5', '6') and date_part('year', age(date(hd_admitdate), hp_birthdate)) > 60 then 1 else 0 end as male_greater60age_death") \
					_T("  FROM") \
					_T("  (") \
					_T("   SELECT distinct ha_docno as docno, 100 as idx, '' as description, ha_emer_time as emertime, ha_death as death, 0") \
					_T("   FROM hms_accident") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno, 200, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident, hms_doc, hms_patient") \
					_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 200 + hp_occupation, ") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=hp_occupation and ss_id='sys_occupation'), ha_emer_time, ha_death, hp_occupation") \
					_T("   FROM hms_accident, hms_doc, hms_patient") \
					_T("   WHERE ha_reason > 0 and hp_occupation > 0 and ha_docno=hd_docno and hd_patientno=hp_patientno") \
					_T("   ORDER BY hp_occupation)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno, 300, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 300 + ha_acc_place,") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_acc_place and ss_id='hms_accident_place'), ha_emer_time, ha_death, ha_acc_place") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_acc_place > 0") \
					_T("   ORDER BY ha_acc_place)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno,  400, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_other_trauma > 0	 	") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 400 + ha_other_trauma, ") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_other_trauma and ss_id='hms_accident_othertrauma'), ha_emer_time, ha_death, ha_other_trauma") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0 and ha_other_trauma > 0") \
					_T("   ORDER BY ha_other_trauma)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno,  500, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 500 + ha_reason,") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_reason and ss_id='hms_accident_reason'), ha_emer_time, ha_death, ha_reason") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_reason > 0") \
					_T("   ORDER BY ha_reason)") \
					_T("   UNION ALL") \
					_T("   SELECT distinct ha_docno,  600, '', ha_emer_time, ha_death, 0") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_aid_place > 0") \
					_T("   UNION ALL") \
					_T("   (SELECT distinct ha_docno, 600 + ha_aid_place, ") \
					_T("   (select ss_desc from sys_sel where cast(ss_code as integer)=ha_aid_place and ss_id='hms_accident_aidplace'), ha_emer_time, ha_death, ha_aid_place") \
					_T("   FROM hms_accident") \
					_T("   WHERE ha_aid_place > 0") \
					_T("   ORDER BY ha_aid_place)") \
					_T("  ) as tbl, hms_doc as d, hms_patient as p, hms_clinical_record as c") \
					_T("  WHERE tbl.docno=d.hd_docno") \
					_T("  and d.hd_patientno=p.hp_patientno") \
					_T("  and tbl.docno=hcr_docno") \
					_T("  and hd_status='T'") \
					_T("  and emertime between timestamp '%s' and timestamp '%s'") \
					_T(" ) as tbl2") \
					_T(" GROUP BY idx, description") \
					_T(" ORDER BY idx"),
					szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept,
					szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, szDept, m_szFromDate, m_szToDate);
	}

	int ret = rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long nTotal[22];
	for (int i = 0; i < 22; i++)	
		nTotal[i] = 0;
	int nIndex = 0, nIdx;
	CReportSection *rptDetail = rpt.GetDetail();
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIdx = ToInt(rs.GetValue(_T("idx")));
		if (nIdx % 100 == 0)
		{
			nIndex++;
			rptDetail->GetItem(_T("STT"))->SetBold(true);
			rptDetail->GetItem(_T("Name"))->SetBold(true);
			for (int i = 1; i < 23; i++)
			{
				tmpStr.Format(_T("%d"), i);
				rptDetail->GetItem(tmpStr)->SetBold(true);
			}
			rptDetail->SetValue(_T("STT"), int2str(nIndex));
			switch (nIndex)
			{
				case 1:
					szTemp = _T("S\x1ED1 ng\x1B0\x1EDDi \x62\x1ECB TNTT");
				break;
				case 2:
					szTemp = _T("Ngh\x1EC1 nghi\x1EC7p");
				break;
				case 3:
					szTemp = _T("\x110\x1ECB\x61 \x111i\x1EC3m \x78\x1EA3y r\x61");
				break;
				case 4:
					szTemp = _T("\x42\x1ED9 ph\x1EADn \x62\x1ECB th\x1B0\x1A1ng - I\x43\x44\x31\x30");
				break;
				case 5:
					szTemp = _T("Nguy\xEAn nh\xE2n TNTT - th\x65o I\x43\x44\x31\x30");
				break;
				case 6:
					szTemp = _T("\x110i\x1EC1u tr\x1ECB \x62\x61n \x111\x1EA7u, s\x61u TNTT");
				break;
			}
		}
		else
		{
			rptDetail->GetItem(_T("STT"))->SetBold(false);
			rptDetail->GetItem(_T("Name"))->SetBold(false);
			for (int i = 1; i < 23; i++)
			{
				tmpStr.Format(_T("%d"), i);
				rptDetail->GetItem(tmpStr)->SetBold(false);
			}
			szTemp = rs.GetValue(_T("description"));
		}

		rptDetail->SetValue(_T("Name"), szTemp);

		rptDetail->SetValue(_T("1"), rs.GetValue(_T("total_catch")));
		nTotal[0] += ToLong(rs.GetValue(_T("total_catch")));

		rptDetail->SetValue(_T("2"), rs.GetValue(_T("total_death")));
		nTotal[1] += ToLong(rs.GetValue(_T("total_death")));

		rptDetail->SetValue(_T("3"), rs.GetValue(_T("total_male_catch")));
		nTotal[2] += ToLong(rs.GetValue(_T("total_male_catch")));

		rptDetail->SetValue(_T("4"), rs.GetValue(_T("total_male_death")));
		nTotal[3] += ToLong(rs.GetValue(_T("total_male_death")));

		rptDetail->SetValue(_T("5"), rs.GetValue(_T("total_female_catch")));
		nTotal[4] += ToLong(rs.GetValue(_T("total_female_catch")));

		rptDetail->SetValue(_T("6"), rs.GetValue(_T("total_female_death")));
		nTotal[5] += ToLong(rs.GetValue(_T("total_female_death")));

		rptDetail->SetValue(_T("7"), rs.GetValue(_T("male_less4age_catch")));
		nTotal[6] += ToLong(rs.GetValue(_T("male_less4age_catch")));

		rptDetail->SetValue(_T("8"), rs.GetValue(_T("male_less4age_death")));
		nTotal[7] += ToLong(rs.GetValue(_T("male_less4age_death")));

		rptDetail->SetValue(_T("9"), rs.GetValue(_T("female_less4age_catch")));
		nTotal[8] += ToLong(rs.GetValue(_T("female_less4age_catch")));

		rptDetail->SetValue(_T("10"), rs.GetValue(_T("female_less4age_death")));
		nTotal[9] += ToLong(rs.GetValue(_T("female_less4age_death")));

		rptDetail->SetValue(_T("11"), rs.GetValue(_T("male_between5_14age_catch")));
		nTotal[10] += ToLong(rs.GetValue(_T("male_between5_14age_catch")));

		rptDetail->SetValue(_T("12"), rs.GetValue(_T("male_between5_14age_death")));
		nTotal[11] += ToLong(rs.GetValue(_T("male_between5_14age_death")));

		rptDetail->SetValue(_T("13"), rs.GetValue(_T("female_between5_14age_catch")));
		nTotal[12] += ToLong(rs.GetValue(_T("female_between5_14age_catch")));

		rptDetail->SetValue(_T("14"), rs.GetValue(_T("female_between5_14age_death")));
		nTotal[13] += ToLong(rs.GetValue(_T("female_between5_14age_death")));

		rptDetail->SetValue(_T("15"), rs.GetValue(_T("male_between15_60age_catch")));
		nTotal[14] += ToLong(rs.GetValue(_T("male_between15_60age_catch")));

		rptDetail->SetValue(_T("16"), rs.GetValue(_T("male_between15_60age_death")));
		nTotal[15] += ToLong(rs.GetValue(_T("male_between15_60age_death")));

		rptDetail->SetValue(_T("17"), rs.GetValue(_T("female_between15_60age_catch")));
		nTotal[16] += ToLong(rs.GetValue(_T("female_between15_60age_catch")));

		rptDetail->SetValue(_T("18"), rs.GetValue(_T("female_between15_60age_death")));
		nTotal[17] += ToLong(rs.GetValue(_T("female_between15_60age_death")));

		rptDetail->SetValue(_T("19"), rs.GetValue(_T("male_greater60age_catch")));
		nTotal[18] += ToLong(rs.GetValue(_T("male_greater60age_catch")));

		rptDetail->SetValue(_T("20"), rs.GetValue(_T("male_greater60age_death")));
		nTotal[19] += ToLong(rs.GetValue(_T("male_greater60age_death")));

		rptDetail->SetValue(_T("21"), rs.GetValue(_T("female_greater60age_catch")));
		nTotal[20] += ToLong(rs.GetValue(_T("female_greater60age_catch")));

		rptDetail->SetValue(_T("22"), rs.GetValue(_T("female_greater60age_death")));
		nTotal[21] += ToLong(rs.GetValue(_T("female_greater60age_death")));
		rs.MoveNext();
	}
	/*rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	for (int i = 0; i < 22; i++)
	{
		tmpStr.Format(_T("s_%d"), i + 1);
		rptDetail->SetValue(tmpStr, long2str(nTotal[i]));
	}*/
	CDate date;
	date.ParseDate(pMF->GetSysDate());
	szTemp = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	tmpStr.Format(szTemp, date.GetDay(), date.GetMonth(), date.GetYear());
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
int CrptAccidentInjuryReportDialog::OnAddHMSAccidentInjuryReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptAccidentInjuryReportDialog::OnEditHMSAccidentInjuryReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptAccidentInjuryReportDialog::OnDeleteHMSAccidentInjuryReportDialog(){
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
 		OnCancelHMSAccidentInjuryReportDialog(); 
 	}
	return 0;
}
int CrptAccidentInjuryReportDialog::OnSaveHMSAccidentInjuryReportDialog(){
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
 		//OnHMSAccidentInjuryReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptAccidentInjuryReportDialog::OnCancelHMSAccidentInjuryReportDialog(){
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
int CrptAccidentInjuryReportDialog::OnHMSAccidentInjuryReportDialogListLoadData(){
	return 0;
}
