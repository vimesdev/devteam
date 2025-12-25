#include "rptClinicalActivitiesReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptClinicalActivitiesReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptClinicalActivitiesReportDialog *)pWnd)->OnToDateCheckValue();
}
static void _OnExamRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptClinicalActivitiesReportDialog* )pWnd)->OnExamRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamRoomSelendokFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnExamRoomSelendok();
}
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnExamRoomKillfocus();
}*/
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnExamRoomKillfocus();
}*/
static long _OnExamRoomLoadDataFnc(CWnd *pWnd){
	return ((CrptClinicalActivitiesReportDialog *)pWnd)->OnExamRoomLoadData();
}
/*static void _OnExamRoomAddNewFnc(CWnd *pWnd){
	((CrptClinicalActivitiesReportDialog *)pWnd)->OnExamRoomAddNew();
}*/
static void _OnFilterSelectFnc(CWnd *pWnd){
	 ((CrptClinicalActivitiesReportDialog*)pWnd)->OnFilterSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptClinicalActivitiesReportDialog *pVw = (CrptClinicalActivitiesReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptClinicalActivitiesReportDialog *pVw = (CrptClinicalActivitiesReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptClinicalActivitiesReportDialog *pVw = (CrptClinicalActivitiesReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptClinicalActivitiesReportDialog*)pWnd)->OnAddHMSClinicalActivitiesReportDialog();
} 
static int _OnEditHMSClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptClinicalActivitiesReportDialog*)pWnd)->OnEditHMSClinicalActivitiesReportDialog();
} 
static int _OnDeleteHMSClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptClinicalActivitiesReportDialog*)pWnd)->OnDeleteHMSClinicalActivitiesReportDialog();
} 
static int _OnSaveHMSClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptClinicalActivitiesReportDialog*)pWnd)->OnSaveHMSClinicalActivitiesReportDialog();
} 
static int _OnCancelHMSClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptClinicalActivitiesReportDialog*)pWnd)->OnCancelHMSClinicalActivitiesReportDialog();
} 
CrptClinicalActivitiesReportDialog::CrptClinicalActivitiesReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CrptClinicalActivitiesReportDialog::~CrptClinicalActivitiesReportDialog()
{
	if (m_rs) delete m_rs;
}
void CrptClinicalActivitiesReportDialog::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 360, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndExamRoomLabel.Create(this, _T("Exam Room"), 10, 60, 90, 85);
	m_wndExamRoom.Create(this,95, 60, 355, 85); 
	m_wndPrint.Create(this, _T("&Print"), 110, 125, 190, 150);
	m_wndExport.Create(this, _T("&Export"), 195, 125, 275, 150);
	m_wndClose.Create(this, _T("&Close"), 280, 125, 360, 150);
	m_wndFilter.Create(this, _T("Filter by Clinic"), 205, 90, 355, 115);
}
void CrptClinicalActivitiesReportDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndExamRoom.LimitText(35);
	//m_wndExamRoom.InsertColumn(0, _T(""), CFMT_TEXT, 20);
	m_wndExamRoom.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndExamRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndExamRoom.SetCheckBox(TRUE);
	//m_wndExamRoom.EnableWindow(FALSE);
	m_rs = new CRecord(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select sc_name as hospitalname, sc_pname as healthname from sys_company limit 1"));
	m_rs->ExecSQL(szSQL);
}
void CrptClinicalActivitiesReportDialog::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndExamRoom.SetEvent(WE_SELENDOK, _OnExamRoomSelendokFnc);
	//m_wndExamRoom.SetEvent(WE_SETFOCUS, _OnExamRoomSetfocusFnc);
	//m_wndExamRoom.SetEvent(WE_KILLFOCUS, _OnExamRoomKillfocusFnc);
	m_wndExamRoom.SetEvent(WE_SELCHANGE, _OnExamRoomSelectChangeFnc);
	m_wndExamRoom.SetEvent(WE_LOADDATA, _OnExamRoomLoadDataFnc);
	//m_wndExamRoom.SetEvent(WE_ADDNEW, _OnExamRoomAddNewFnc);
	m_wndFilter.SetEvent(WE_CLICK, _OnFilterSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(Distinct he_roomid) FROM hms_exam"));
	rs.ExecSQL(szSQL);
	m_nCount = rs.GetIntValue();
	SetMode(VM_EDIT);
}
void CrptClinicalActivitiesReportDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoomKey);
	DDX_Check(pDX, m_wndFilter.GetDlgCtrlID(), m_bFilter);
}
void CrptClinicalActivitiesReportDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CrptClinicalActivitiesReportDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CrptClinicalActivitiesReportDialog::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szExamRoomKey.Empty();
	m_bFilter=FALSE;
}
int CrptClinicalActivitiesReportDialog::SetMode(int nMode)
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
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_szFromDate = pMF->GetSysDate();
			m_szToDate = pMF->GetSysDate();
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
		m_wndExamRoom.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CrptClinicalActivitiesReportDialog::OnFromDateChange(){
	
} */
/*void CrptClinicalActivitiesReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptClinicalActivitiesReportDialog::OnFromDateKillfocus(){
	
} */
int CrptClinicalActivitiesReportDialog::OnFromDateCheckValue()
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
/*void CrptClinicalActivitiesReportDialog::OnToDateChange(){
	
} */
/*void CrptClinicalActivitiesReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptClinicalActivitiesReportDialog::OnToDateKillfocus(){
	
} */
int CrptClinicalActivitiesReportDialog::OnToDateCheckValue()
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
void CrptClinicalActivitiesReportDialog::OnExamRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptClinicalActivitiesReportDialog::OnExamRoomSelendok(){
	 
}
/*void CrptClinicalActivitiesReportDialog::OnExamRoomSetfocus(){
	
}*/
/*void CrptClinicalActivitiesReportDialog::OnExamRoomKillfocus(){
	
}*/
long CrptClinicalActivitiesReportDialog::OnExamRoomLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndExamRoom.IsSearchKey() && ToInt(m_szExamRoomKey) >= 0)
	{
		szWhere.Format(_T(" WHERE he_roomid=%d "), ToInt(m_szExamRoomKey));
	}
	m_wndExamRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT DISTINCT he_roomid AS ID, (SELECT hrl_name FROM hms_roomlist WHERE hrl_id=he_roomid LIMIT 1) AS Name ")\
				 _T("FROM hms_exam"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamRoom.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptClinicalActivitiesReportDialog::OnExamRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptClinicalActivitiesReportDialog::OnFilterSelect()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*if (m_bFilter)
		m_bFilter = FALSE;
	else
		m_bFilter = TRUE;*/
	if (m_bFilter)
	{
		m_wndExamRoom.EnableWindow(TRUE);
		m_wndExport.EnableWindow(FALSE);
	}
	else
	{
		m_wndExamRoom.EnableWindow(FALSE);
		m_wndExport.EnableWindow(TRUE);
	}
	m_szExamRoomKey.Empty();
	m_wndExamRoom.CheckAll(FALSE);
	UpdateData(FALSE);
}
void CrptClinicalActivitiesReportDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	//CRecord rsr(&pMF->m_db);
	CRecord rsa(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	int n = 0;
	if(!rpt.Init(_T("Reports/HMS/Hoatdongkhambenh.rpt")))
		return;
	UpdateData(TRUE);
	BeginWaitCursor();
	CString tmpStr, szDate;
	//CRecord rs1(&pMF->m_db);
	//szSQL.Format(_T("select sc_name as hospitalname, sc_pname as healthname from sys_company limit 1"));
	//rs1.ExecSQL(szSQL);
	//rs1.GetValue(_T("healthname"), tmpStr);
	if (!m_rs->IsEOF())
	{
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_rs->GetValue(_T("healthname")));
		//rs1.GetValue(_T("hospitalname"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_rs->GetValue(_T("hospitalname")));
	}
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	CArray<int, int> arrayID;
	arrayID.RemoveAll();
	
	//_msg(_T("%d"), arrayID.GetSize());
	//if (m_bFilter && arrayID.GetSize() == 0)
	//{
		//szSQL.Format(_T("SELECT DISTINCT he_roomid FROM hms_exam ORDER BY 1"));
		//rsr.ExecSQL(szSQL);
	//}
	if (m_bFilter)
	{
		for (int i = 0; i < m_nCount; i++)
		{
			if (m_wndExamRoom.GetCheck(i))
			{
				arrayID.Add(ToInt(m_wndExamRoom.GetCheck(i, 0)));
			}
		}
	}
	//rsr.MoveFirst();
	while (1 == 1)
	{
		if (!m_bFilter || (m_bFilter && arrayID.GetSize() == 0))
		{
			szSQL.Format(_T(" SELECT 'luotkham' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE he_status in('P','T')") \
				_T(" 		 and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl1") \
				_T(" union all") \
				_T(" SELECT 'khamsuckhoe' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_feelist ON(hfl_feeid=he_examtype)") \
				_T(" 	WHERE he_status in('P','T')") \
				_T(" 		and hfl_subitem='1'") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 'capcuu' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE he_status in('P','T')") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" 		and he_emergency='Y'") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 'capdonthuoc' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT hpo_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(hpo_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hpo_status in('I','A') or hpo_payment='P')") \
				_T(" 		and hpo_type='P'") \
				_T(" 		and hpo_depttype='E'") \
				_T(" ) as tbl4") \
				_T(" union all") \
				_T(" SELECT 'cochidinhcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT pcmso_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E'  ") \
				_T(" 		") \
				_T(" ) as tbl5") \
				_T(" union all") \
				_T(" SELECT 'chilamcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E' and hpo_orderid is null ") \
				_T(" 		") \
				_T(" ) as tbl5_1") \
				_T(" union all") \
				_T(" SELECT 'cotieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT ho_idx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' ") \
				_T(" ) as tbl6") \
				_T(" union all") \
				_T(" SELECT 'chilamtieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct	hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' and hpo_orderid is null ") \
				_T(" ) as tbl61") \
				_T(" union all") \
				_T(" SELECT 'nhapvien' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl7") \
				_T(" union all") \
				_T(" SELECT 'tuyenduoichuyenden' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and length(hd_transplaceid) > 0") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" ) as tbl8") \
				_T(" union all") \
				_T(" SELECT 'chuyentuyentren' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status ='T'") \
				_T(" 		and hd_suggestion ='T'") \
				_T(" 		and length(hd_tohosid) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl9") \
				_T(" union all") \
				_T(" SELECT 'nhapvienpleiku' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" 		and hp_distid= 60301") \
				_T(" ) as tbl10") \
				_T(" union all") \
				_T(" SELECT 'tinhtrangvaovien_'||hp_status as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hp_status, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" 		and length(hp_status) > 0") \
				_T(" ) as tbl11") \
				_T(" group by hp_status") , 
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate);
				if (m_bFilter)
				{
					rsa.ExecSQL(szSQL);
					szSQL.Format(_T("  (SELECT 'luotkham' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT he_receptidx, hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  WHERE he_status in('P','T') ") \
						_T(" 			and date(he_examdate) between date('%s') and date('%s') ") \
						_T(" 	) as tbl1 group by typeid, he_deptid, he_roomid, roomname order by he_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'khamsuckhoe' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT he_receptidx, hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  LEFT JOIN hms_feelist ON(hfl_feeid=he_examtype)") \
						_T(" 	  WHERE	he_status in('P','T')") \
						_T(" 			and hfl_subitem='1'") \
						_T(" 			and date(he_examdate) between date('%s') and date('%s') ") \
						_T(" 	) as tbl2 group by typeid, he_deptid, he_roomid, roomname order by he_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'capcuu' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T("      case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  WHERE he_status in('P','T')") \
						_T(" 			and date(he_examdate) between date('%s') and date('%s') ") \
						_T(" 			and he_emergency='Y' ") \
						_T(" 	) as tbl3 group by typeid, he_deptid, he_roomid, roomname order by he_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'capdonthuoc' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=hpo_deptid and hrl_id=hpo_roomid limit 1 ) as roomname, ") \
						_T("   hpo_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT hpo_orderid, hd_docno as docno, hpo_deptid, hpo_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno and hpo_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(hpo_orderdate) between date('%s') and date('%s')") \
						_T(" 			and (hpo_status in('I','A') or hpo_payment='P')") \
						_T(" 			and hpo_type='P'") \
						_T(" 			and hpo_depttype='E' ") \
						_T(" 	) as tbl4 group by typeid, hpo_deptid, hpo_roomid, roomname order by hpo_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'cochidinhcls' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=pcmso_deptid and hrl_id=pcmso_roomid limit 1 ) as roomname, ") \
						_T("   pcmso_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT pcmso_orderid, hd_docno as docno, pcmso_deptid, pcmso_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN pcms_order ON(pcmso_docno=hd_docno and pcmso_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 		    and date(pcmso_orderdate) between date('%s') and date('%s')") \
						_T(" 		    and (pcmso_payment='P' or pcmso_status='T')") \
						_T(" 		    and pcmso_depttype='E' ") \
						_T(" 	) as tbl5 group by typeid, pcmso_deptid, pcmso_roomid, roomname order by pcmso_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'chilamcls' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=pcmso_deptid and hrl_id=pcmso_roomid limit 1 ) as roomname, ") \
						_T("   pcmso_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, pcmso_deptid, pcmso_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN pcms_order ON(pcmso_docno=hd_docno and pcmso_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(pcmso_orderdate) between date('%s') and date('%s')") \
						_T(" 		    and (pcmso_payment='P' or pcmso_status='T')") \
						_T(" 			and pcmso_depttype='E' and hpo_orderid is null ") \
						_T(" 	) as tbl5_1 group by typeid, pcmso_deptid, pcmso_roomid, roomname order by pcmso_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'cotieuphau' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=ho_deptid and hrl_id=ho_roomid limit 1 ) as roomname,") \
						_T("   ho_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT ho_idx, hd_docno as docno, ho_deptid, ho_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(ho_orderdate) between date('%s') and date('%s')") \
						_T(" 			and (hfe_status='P' or ho_status='T')") \
						_T(" 			and ho_depttype='E' ") \
						_T(" 	) as tbl6 group by typeid, ho_deptid, ho_roomid, roomname order by ho_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'chilamtieuphau' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=ho_deptid and hrl_id=ho_roomid limit 1 ) as roomname, ") \
						_T("   ho_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, ho_deptid, ho_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T("      case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
						_T(" 	  LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(ho_orderdate) between date('%s') and date('%s')") \
						_T(" 			and (hfe_status='P' or ho_status='T')") \
						_T(" 			and ho_depttype='E' and hpo_orderid is null ") \
						_T(" 	) as tbl6_1 group by typeid, ho_deptid, ho_roomid, roomname order by ho_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'nhapvien' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status ='T'") \
						_T(" 			and hd_suggestion ='A'") \
						_T(" 			and length(hd_indept) > 0") \
						_T(" 			and date(hd_enddate) between date('%s') and date('%s')") \
						_T("    ) as tbl7 group by typeid, he_deptid, he_roomid, roomname order by he_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'tuyenduoichuyenden' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and length(hd_transplaceid) > 0") \
						_T(" 			and date(hd_admitdate) between date('%s') and date('%s') ") \
						_T(" 	) as tbl8 group by typeid, he_deptid, he_roomid, roomname order by he_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'chuyentuyentren' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE	hd_status ='T'") \
						_T(" 			and hd_suggestion ='T'") \
						_T(" 			and length(hd_tohosid) > 0") \
						_T(" 			and date(hd_enddate) between date('%s') and date('%s') ") \
						_T(" 	) as tbl9 group by typeid, he_deptid, he_roomid, roomname order by he_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'nhapvienpleiku' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T("      LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T("      WHERE hd_status ='T'") \
						_T(" 			and hd_suggestion ='A'") \
						_T(" 			and length(hd_indept) > 0") \
						_T(" 			and date(hd_enddate) between date('%s') and date('%s') ") \
						_T(" 			and hp_distid= 60301 ") \
						_T("    ) as tbl10 group by typeid, he_deptid, he_roomid, roomname order by he_roomid)") \
						_T("   union all") \
						_T("   (SELECT 'tinhtrangvaovien_'||hp_status as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hp_status, hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(hd_admitdate) between date('%s') and date('%s')") \
						_T(" 			and length(hp_status) > 0 ") \
						_T("   ) as tbl11") \
						_T("   group by hp_status, typeid, he_deptid, he_roomid, roomname order by he_roomid)"),
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate);
				}
		}
		else if (m_bFilter && arrayID.GetSize() > 0)
		{
			//_msg(_T("%d: %d"), n, arrayID.GetAt(n));
			szSQL.Format(_T("  SELECT 'luotkham' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT he_receptidx, hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  WHERE he_status in('P','T') ") \
						_T(" 			and date(he_examdate) between date('%s') and date('%s') and he_roomid=%d") \
						_T(" 	) as tbl1 group by typeid, he_deptid, he_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'khamsuckhoe' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT he_receptidx, hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  LEFT JOIN hms_feelist ON(hfl_feeid=he_examtype)") \
						_T(" 	  WHERE	he_status in('P','T')") \
						_T(" 			and hfl_subitem='1'") \
						_T(" 			and date(he_examdate) between date('%s') and date('%s') and he_roomid=%d") \
						_T(" 	) as tbl2 group by typeid, he_deptid, he_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'capcuu' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T("      case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  WHERE he_status in('P','T')") \
						_T(" 			and date(he_examdate) between date('%s') and date('%s') ") \
						_T(" 			and he_emergency='Y' and he_roomid=%d") \
						_T(" 	) as tbl3 group by typeid, he_deptid, he_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'capdonthuoc' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=hpo_deptid and hrl_id=hpo_roomid limit 1 ) as roomname, ") \
						_T("   hpo_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT hpo_orderid, hd_docno as docno, hpo_deptid, hpo_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno and hpo_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(hpo_orderdate) between date('%s') and date('%s')") \
						_T(" 			and (hpo_status in('I','A') or hpo_payment='P')") \
						_T(" 			and hpo_type='P'") \
						_T(" 			and hpo_depttype='E' and hpo_roomid=%d") \
						_T(" 	) as tbl4 group by typeid, hpo_deptid, hpo_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'cochidinhcls' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=pcmso_deptid and hrl_id=pcmso_roomid limit 1 ) as roomname, ") \
						_T("   pcmso_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT pcmso_orderid, hd_docno as docno, pcmso_deptid, pcmso_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN pcms_order ON(pcmso_docno=hd_docno and pcmso_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 		    and date(pcmso_orderdate) between date('%s') and date('%s')") \
						_T(" 		    and (pcmso_payment='P' or pcmso_status='T')") \
						_T(" 		    and pcmso_depttype='E' and pcmso_roomid=%d") \
						_T(" 	) as tbl5 group by typeid, pcmso_deptid, pcmso_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'chilamcls' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=pcmso_deptid and hrl_id=pcmso_roomid limit 1 ) as roomname, ") \
						_T("   pcmso_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, pcmso_deptid, pcmso_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN pcms_order ON(pcmso_docno=hd_docno and pcmso_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object)") \
						_T(" 	  LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(pcmso_orderdate) between date('%s') and date('%s')") \
						_T(" 		    and (pcmso_payment='P' or pcmso_status='T')") \
						_T(" 			and pcmso_depttype='E' and hpo_orderid is null and pcmso_roomid=%d") \
						_T(" 	) as tbl5_1 group by typeid, pcmso_deptid, pcmso_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'cotieuphau' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=ho_deptid and hrl_id=ho_roomid limit 1 ) as roomname,") \
						_T("   ho_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT ho_idx, hd_docno as docno, ho_deptid, ho_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(ho_orderdate) between date('%s') and date('%s')") \
						_T(" 			and (hfe_status='P' or ho_status='T')") \
						_T(" 			and ho_depttype='E' and ho_roomid=%d") \
						_T(" 	) as tbl6 group by typeid, ho_deptid, ho_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'chilamtieuphau' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=ho_deptid and hrl_id=ho_roomid limit 1 ) as roomname, ") \
						_T("   ho_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, ho_deptid, ho_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T("      case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_deptid=hd_admitdept)") \
						_T(" 	  LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
						_T(" 	  LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(ho_orderdate) between date('%s') and date('%s')") \
						_T(" 			and (hfe_status='P' or ho_status='T')") \
						_T(" 			and ho_depttype='E' and hpo_orderid is null and ho_roomid=%d") \
						_T(" 	) as tbl6_1 group by typeid, ho_deptid, ho_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'nhapvien' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status ='T'") \
						_T(" 			and hd_suggestion ='A'") \
						_T(" 			and length(hd_indept) > 0") \
						_T(" 			and date(hd_enddate) between date('%s') and date('%s') and he_roomid=%d") \
						_T("    ) as tbl7 group by typeid, he_deptid, he_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'tuyenduoichuyenden' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and length(hd_transplaceid) > 0") \
						_T(" 			and date(hd_admitdate) between date('%s') and date('%s') and he_roomid=%d") \
						_T(" 	) as tbl8 group by typeid, he_deptid, he_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'chuyentuyentren' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE	hd_status ='T'") \
						_T(" 			and hd_suggestion ='T'") \
						_T(" 			and length(hd_tohosid) > 0") \
						_T(" 			and date(hd_enddate) between date('%s') and date('%s') and he_roomid=%d") \
						_T(" 	) as tbl9 group by typeid, he_deptid, he_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'nhapvienpleiku' as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T("      LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T("      WHERE hd_status ='T'") \
						_T(" 			and hd_suggestion ='A'") \
						_T(" 			and length(hd_indept) > 0") \
						_T(" 			and date(hd_enddate) between date('%s') and date('%s') ") \
						_T(" 			and hp_distid= 60301 and he_roomid=%d") \
						_T("    ) as tbl10 group by typeid, he_deptid, he_roomid, roomname") \
						_T("   union all") \
						_T("   SELECT 'tinhtrangvaovien_'||hp_status as typeid, (select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid limit 1 ) as roomname, ") \
						_T("   he_roomid,") \
						_T("   sum(totalpatient) as totalpatient,") \
						_T("   sum(servobj1) as servobj1,") \
						_T("   sum(insobj1) as insobj1,") \
						_T("   sum(servobj2) as servobj2,") \
						_T("   sum(insobj2) as insobj2,") \
						_T("   sum(servobj3) as servobj3,") \
						_T("   sum(insobj3) as insobj3,") \
						_T("   sum(servobj4) as servobj4,") \
						_T("   sum(insobj4) as insobj4") \
						_T("   FROM ") \
						_T("   (	") \
						_T(" 	  SELECT distinct hp_status, hd_docno as docno, he_deptid, he_roomid,") \
						_T(" 	  1 as totalpatient,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
						_T(" 	  case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
						_T(" 	  case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
						_T(" 	  FROM hms_patient") \
						_T(" 	  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" 	  LEFT JOIN hms_object ON(ho_id=hd_object) LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
						_T(" 	  WHERE hd_status in('P','T')") \
						_T(" 			and date(hd_admitdate) between date('%s') and date('%s')") \
						_T(" 			and length(hp_status) > 0 and he_roomid=%d") \
						_T("   ) as tbl11") \
						_T("   group by hp_status, typeid, he_deptid, he_roomid, roomname"),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n),
			m_szFromDate, m_szToDate, arrayID.GetAt(n));
		}
		//MessageBox(szSQL);
		int ret = rs.ExecSQL(szSQL);
		//_msg(_T("%d"), ret);
		CReportSection* rptDetail = rpt.GetDetail(); 
		if (m_bFilter && arrayID.GetSize() > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("roomname")));
			n++;
		}
		CString szTemp;
		while(!rs.IsEOF())
		{
			szTemp = rs.GetValue(_T("typeid"));
			//MessageBox(szTemp);
			//MessageBox(rsa.GetValue(_T("typeid")));
			if (m_bFilter && !rsa.IsEOF() && (szTemp.IsEmpty() || (szTemp == rsa.GetValue(_T("typeid")))))
			{
				//MessageBox(_T("OK"));
				CReportItem *rptItem;
				rptDetail = rpt.AddDetail();
				for (int i = 1; i <= 10; i++)
				{
					tmpStr.Format(_T("%d"), i);
					rptItem = rptDetail->GetItem(tmpStr);
					rptItem->SetBold(true);
				}
				rsa.GetValue(_T("typeid"), tmpStr);
				if(tmpStr.Find(_T("_")) != -1)
				{
					//tmpStr = pMF->GetSelectionString(_T("hms_patient_state"), tmpStr.Right(1));
					CRecord rss(&pMF->m_db);
					szSQL.Format(_T("SELECT ss_desc FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_patient_state'"), tmpStr.Right(1));
					rss.ExecSQL(szSQL);
					TranslateString(tmpStr.Left(tmpStr.Find(_T("_")) + 1), tmpStr);
					if (!rss.IsEOF())
						tmpStr = tmpStr + _T(" ") + rss.GetValue(_T("ss_desc")).MakeLower();
				}
				else
				{
					TranslateString(tmpStr, tmpStr);
				}

				rptDetail->SetValue(_T("1"), tmpStr);

				rsa.GetValue(_T("totalpatient"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				//nTotal[0] += ToInt(tmpStr);

				rsa.GetValue(_T("servobj1"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				//nTotal[1] += ToInt(tmpStr);

				rsa.GetValue(_T("insobj1"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				//nTotal[2] += ToInt(tmpStr);

				rsa.GetValue(_T("servobj2"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				//nTotal[3] += ToInt(tmpStr);

				rsa.GetValue(_T("insobj2"), tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				//nTotal[4] += ToInt(tmpStr);

				rsa.GetValue(_T("servobj3"), tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				//nTotal[5] += ToInt(tmpStr);

				rsa.GetValue(_T("insobj3"), tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
				//nTotal[6] += ToInt(tmpStr);

				rsa.GetValue(_T("servobj4"), tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				//nTotal[7] += ToInt(tmpStr);

				rsa.GetValue(_T("insobj4"), tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				//nTotal[8] += ToInt(tmpStr);
				rsa.MoveNext();
			}	
			if (m_bFilter && arrayID.GetSize() == 0)
			{
				rptDetail = rpt.AddDetail();
				rs.GetValue(_T("roomname"), tmpStr);
			}
			else if (!m_bFilter || (m_bFilter && arrayID.GetSize() > 0))
			{
				rptDetail = rpt.AddDetail();
				rs.GetValue(_T("typeid"), tmpStr);
				if(tmpStr.Find(_T("_")) != -1)
				{
					//tmpStr = pMF->GetSelectionString(_T("hms_patient_state"), tmpStr.Right(1));
					CRecord rss(&pMF->m_db);
					szSQL.Format(_T("SELECT ss_desc FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_patient_state'"), tmpStr.Right(1));
					rss.ExecSQL(szSQL);
					TranslateString(tmpStr.Left(tmpStr.Find(_T("_")) + 1), tmpStr);
					if (!rss.IsEOF())
						tmpStr = tmpStr + _T(" ") + rss.GetValue(_T("ss_desc")).MakeLower();
				}
				else
				{
					TranslateString(tmpStr, tmpStr);
				}
			}
			rptDetail->SetValue(_T("1"), tmpStr);

			rs.GetValue(_T("totalpatient"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			//nTotal[0] += ToInt(tmpStr);

			rs.GetValue(_T("servobj1"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			//nTotal[1] += ToInt(tmpStr);

			rs.GetValue(_T("insobj1"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			//nTotal[2] += ToInt(tmpStr);

			rs.GetValue(_T("servobj2"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			//nTotal[3] += ToInt(tmpStr);

			rs.GetValue(_T("insobj2"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			//nTotal[4] += ToInt(tmpStr);

			rs.GetValue(_T("servobj3"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			//nTotal[5] += ToInt(tmpStr);

			rs.GetValue(_T("insobj3"), tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			//nTotal[6] += ToInt(tmpStr);

			rs.GetValue(_T("servobj4"), tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			//nTotal[7] += ToInt(tmpStr);

			rs.GetValue(_T("insobj4"), tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			//nTotal[8] += ToInt(tmpStr);
			rs.MoveNext();
			
		}
		if (!m_bFilter || (m_bFilter && arrayID.GetSize() == 0))
		{
			if (rs.IsEOF())
				break;
		}
		else if (m_bFilter && arrayID.GetSize() > 0)
		{
			if (n == arrayID.GetSize())
				break;
		}
	}
	tmpStr.Empty();
	rpt.GetReportFooter() ->SetValue(_T("User1"), tmpStr);
	rpt.GetReportFooter() ->SetValue(_T("User2"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CrptClinicalActivitiesReportDialog::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord *m_rs;
	CString tmpStr, szSQL;
	BeginWaitCursor();
	szSQL.Format(_T(" SELECT 'luotkham' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE he_status in('P','T')") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl1") \
				_T(" union all") \
				_T(" SELECT 'khamsuckhoe' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_feelist ON(hfl_feeid=he_examtype)") \
				_T(" 	WHERE he_status in('P','T')") \
				_T(" 		and hfl_subitem='1'") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 'capcuu' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE he_status in('P','T')") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" 		and he_emergency='Y'") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 'capdonthuoc' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT hpo_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(hpo_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hpo_status in('I','A') or hpo_payment='P')") \
				_T(" 		and hpo_type='P'") \
				_T(" 		and hpo_depttype='E'") \
				_T(" ) as tbl4") \
				_T(" union all") \
				_T(" SELECT 'cochidinhcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT pcmso_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E'  ") \
				_T(" 		") \
				_T(" ) as tbl5") \
					_T(" union all") \
				_T(" SELECT 'chilamcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E' and hpo_orderid is null ") \
				_T(" 		") \
				_T(" ) as tbl5_1") \
				_T(" union all") \
				_T(" SELECT 'cotieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT ho_idx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' ") \
				_T(" ) as tbl6") \
				_T(" union all") \
				_T(" SELECT 'chilamtieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct	hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' and hpo_orderid is null ") \
				_T(" ) as tbl61") \
				_T(" union all") \
				_T(" SELECT 'nhapvien' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl7") \
				_T(" union all") \
				_T(" SELECT 'tuyenduoichuyenden' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and length(hd_transplaceid) > 0") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" ) as tbl8") \
				_T(" union all") \
				_T(" SELECT 'chuyentuyentren' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status ='T'") \
				_T(" 		and hd_suggestion ='T'") \
				_T(" 		and length(hd_tohosid) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl9") \
				_T(" union all") \
				_T(" SELECT 'nhapvienpleiku' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" 		and hp_distid= 60301") \
				_T(" ) as tbl10") \
				_T(" union all") \
				_T(" SELECT 'tinhtrangvaovien_'||hp_status as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct hp_status, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE hd_status in('P','T')") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" 		and length(hp_status) > 0") \
				_T(" ) as tbl11") \
				_T(" group by hp_status") , 
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate);
	m_rs = new CRecord(&pMF->m_db);
	m_rs->ExecSQL(szSQL);	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(1, 30);
	//xls.SetCellMergedColumns(0, 1, 2);
	//xls.SetCellMergedColumns(0, 2, 2);
	//xls.SetCellText(0, 1, m_rs->GetValue(_T("healthname")), FMT_TEXT, true, 12, 0);
	//xls.SetCellText(0, 2, m_rs->GetValue(_T("hospitalname")), FMT_TEXT, true, 12, 0);
	//xls.SetCellMergedColumns(0,2,10);	
	xls.SetCellText(0, 4, _T("HO\x1EA0T \x110\x1ED8NG KHÁM \x42\x1EC6NH"),true,16,16);
//	xls.SetCellMergedColumns(0,4,12);
	tmpStr.Format(_T("T\x1EEB ngày %s \x111\x1EBFn ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
	int nRow = 8;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	

	TranslateString(_T("Content"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Total"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	

	xls.SetCellMergedColumns(3,7,2);
	xls.SetCellText(3, 7, _T("T\x1ED5ng s\x1ED1 \x62\x1EC7nh nhân kinh > = 6"),true,14);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	

	xls.SetCellMergedColumns(5,7,2);
	xls.SetCellText(5, 7, _T("\x42\x1EC7nh nhân \x64ân t\x1ED9\x63 > = 6"),true,14);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(7,7,2);
	xls.SetCellText(7, 7, _T("Tr\x1EBB \x65m kinh <6"),true,14);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(9,7,2);
	xls.SetCellText(9, 7, _T("Tr\x1EBB \x65m \x64ân t\x1ED9\x63 <6"),true,16);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);

	int nIndex = 1;
	int i=0,nTotal[10];
	for (i=0;i<9;i++)
	{
		nTotal[i]=0;
	}
	while(!m_rs->IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		m_rs->GetValue(_T("typeid"), tmpStr);
		if(tmpStr.Find(_T("_")) != -1)
		{
			//tmpStr = pMF->GetSelectionString(_T("hms_patient_state"), tmpStr.Right(1));
			CRecord rss(&pMF->m_db);
			szSQL.Format(_T("SELECT ss_desc FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_patient_state'"), tmpStr.Right(1));
			rss.ExecSQL(szSQL);
			TranslateString(tmpStr.Left(tmpStr.Find(_T("_")) + 1), tmpStr);
			if (!rss.IsEOF())
				tmpStr = tmpStr + _T(" ") + rss.GetValue(_T("ss_desc")).MakeLower();
		}
		else
		{
			TranslateString(tmpStr, tmpStr);
		}
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		
		m_rs->GetValue(_T("totalpatient"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[0] +=ToInt(tmpStr);
		
		m_rs->GetValue(_T("servobj1"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj1"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[2] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj2"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj2"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[4] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj3"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj3"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[6] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj4"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj4"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[8] +=ToInt(tmpStr);

		m_rs->MoveNext();
	}
	m_rs->MoveFirst();
	nRow++;
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
	for (int i = 0; i < 9; i++){		
		tmpStr.Format(_T("%d"),nTotal[i] );		
		xls.SetCellText(i+2, nRow, tmpStr, FMT_INTEGER, true);
	}
	xls.Save(_T("Exports\\HOATDONGKHAMBENH.XLS"));
	if (!m_rs->IsEOF()) delete m_rs;
	EndWaitCursor();
	
} 
void CrptClinicalActivitiesReportDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CrptClinicalActivitiesReportDialog::OnAddHMSClinicalActivitiesReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptClinicalActivitiesReportDialog::OnEditHMSClinicalActivitiesReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptClinicalActivitiesReportDialog::OnDeleteHMSClinicalActivitiesReportDialog(){
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
 		OnCancelHMSClinicalActivitiesReportDialog(); 
 	}
	return 0;
}
int CrptClinicalActivitiesReportDialog::OnSaveHMSClinicalActivitiesReportDialog(){
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
 		//OnHMSClinicalActivitiesReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptClinicalActivitiesReportDialog::OnCancelHMSClinicalActivitiesReportDialog(){
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
int CrptClinicalActivitiesReportDialog::OnHMSClinicalActivitiesReportDialogListLoadData(){
	return 0;
}
