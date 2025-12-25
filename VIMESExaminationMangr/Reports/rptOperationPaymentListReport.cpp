#include "rptOperationPaymentListReport.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptOperationPaymentListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptOperationPaymentListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptOperationPaymentListReport* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CrptOperationPaymentListReport *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptOperationPaymentListReport* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CrptOperationPaymentListReport *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnDoctorAddNew();
}*/
static void _OnOperationNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptOperationPaymentListReport* )pWnd)->OnOperationNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationNameSelendokFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnOperationNameSelendok();
}
/*static void _OnOperationNameSetfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnOperationNameKillfocus();
}*/
/*static void _OnOperationNameKillfocusFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnOperationNameKillfocus();
}*/
static long _OnOperationNameLoadDataFnc(CWnd *pWnd){
	return ((CrptOperationPaymentListReport *)pWnd)->OnOperationNameLoadData();
}
/*static void _OnOperationNameAddNewFnc(CWnd *pWnd){
	((CrptOperationPaymentListReport *)pWnd)->OnOperationNameAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptOperationPaymentListReport *pVw = (CrptOperationPaymentListReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptOperationPaymentListReport *pVw = (CrptOperationPaymentListReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptOperationPaymentListReport *pVw = (CrptOperationPaymentListReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptOperationPaymentListReportFnc(CWnd *pWnd){
	 return ((CrptOperationPaymentListReport*)pWnd)->OnAddrptOperationPaymentListReport();
} 
static int _OnEditrptOperationPaymentListReportFnc(CWnd *pWnd){
	 return ((CrptOperationPaymentListReport*)pWnd)->OnEditrptOperationPaymentListReport();
} 
static int _OnDeleterptOperationPaymentListReportFnc(CWnd *pWnd){
	 return ((CrptOperationPaymentListReport*)pWnd)->OnDeleterptOperationPaymentListReport();
} 
static int _OnSaverptOperationPaymentListReportFnc(CWnd *pWnd){
	 return ((CrptOperationPaymentListReport*)pWnd)->OnSaverptOperationPaymentListReport();
} 
static int _OnCancelrptOperationPaymentListReportFnc(CWnd *pWnd){
	 return ((CrptOperationPaymentListReport*)pWnd)->OnCancelrptOperationPaymentListReport();
} 
CrptOperationPaymentListReport::CrptOperationPaymentListReport(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 360;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CrptOperationPaymentListReport::~CrptOperationPaymentListReport(){
}
void CrptOperationPaymentListReport::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 345, 85); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 90, 90, 115);
	m_wndDoctor.Create(this,95, 90, 345, 115); 
	m_wndOperationNameLabel.Create(this, _T("Operation Group"), 10, 120, 90, 145);
	m_wndOperationName.Create(this,95, 120, 345, 145); 
	m_wndPrint.Create(this, _T("&Print"), 100, 155, 180, 180);
	m_wndExport.Create(this, _T("&Export"), 185, 155, 265, 180);
	m_wndClose.Create(this, _T("&Close"), 270, 155, 350, 180);

}
void CrptOperationPaymentListReport::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);
	//m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(65);
	//m_wndOperationName.SetCheckValue(true);
	m_wndOperationName.LimitText(81);
	m_wndDepartment.SetCheckBox(TRUE);
	m_wndDoctor.SetCheckBox(TRUE);
	m_wndOperationName.SetCheckBox(TRUE);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOperationName.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndOperationName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CrptOperationPaymentListReport::OnSetWindowEvents()
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
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndOperationName.SetEvent(WE_SELENDOK, _OnOperationNameSelendokFnc);
	//m_wndOperationName.SetEvent(WE_SETFOCUS, _OnOperationNameSetfocusFnc);
	//m_wndOperationName.SetEvent(WE_KILLFOCUS, _OnOperationNameKillfocusFnc);
	m_wndOperationName.SetEvent(WE_SELCHANGE, _OnOperationNameSelectChangeFnc);
	m_wndOperationName.SetEvent(WE_LOADDATA, _OnOperationNameLoadDataFnc);
	//m_wndOperationName.SetEvent(WE_ADDNEW, _OnOperationNameAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
}
void CrptOperationPaymentListReport::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndOperationName.GetDlgCtrlID(), m_szOperationNameKey);

}
void CrptOperationPaymentListReport::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptOperationPaymentListReport::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptOperationPaymentListReport::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szDoctorKey.Empty();
	m_szOperationNameKey.Empty();
}
int CrptOperationPaymentListReport::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues();
			m_szFromDate = m_szToDate = pMF->GetSysDate();
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
/*void CrptOperationPaymentListReport::OnFromDateChange(){
	
} */
/*void CrptOperationPaymentListReport::OnFromDateSetfocus(){
	
} */
/*void CrptOperationPaymentListReport::OnFromDateKillfocus(){
	
} */
int CrptOperationPaymentListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptOperationPaymentListReport::OnToDateChange(){
	
} */
/*void CrptOperationPaymentListReport::OnToDateSetfocus(){
	
} */
/*void CrptOperationPaymentListReport::OnToDateKillfocus(){
	
} */
int CrptOperationPaymentListReport::OnToDateCheckValue(){
	return 0;
} 
void CrptOperationPaymentListReport::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptOperationPaymentListReport::OnDepartmentSelendok(){
	 
}
/*void CrptOperationPaymentListReport::OnDepartmentSetfocus(){
	
}*/
/*void CrptOperationPaymentListReport::OnDepartmentKillfocus(){
	
}*/
long CrptOperationPaymentListReport::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id AS id, hrl_name as name FROM hms_roomlist LEFT JOIN sys_dept ON(sd_id=hrl_deptid) WHERE sd_type IN ('KB') %s ORDER BY hrl_id"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptOperationPaymentListReport::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptOperationPaymentListReport::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptOperationPaymentListReport::OnDoctorSelendok(){
	 
}
/*void CrptOperationPaymentListReport::OnDoctorSetfocus(){
	
}*/
/*void CrptOperationPaymentListReport::OnDoctorKillfocus(){
	
}*/
long CrptOperationPaymentListReport::OnDoctorLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty())
	{
		szWhere.Format(_T(" AND su_userid='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid AS id, su_name AS name FROM sys_user ")\
				 _T("WHERE su_deptid IN (SELECT sd_id FROM sys_dept WHERE sd_type IN ('KB','DT')) %s ORDER BY su_userid, su_name"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptOperationPaymentListReport::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptOperationPaymentListReport::OnOperationNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptOperationPaymentListReport::OnOperationNameSelendok(){
	 
}
/*void CrptOperationPaymentListReport::OnOperationNameSetfocus(){
	
}*/
/*void CrptOperationPaymentListReport::OnOperationNameKillfocus(){
	
}*/
long CrptOperationPaymentListReport::OnOperationNameLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndOperationName.IsSearchKey() && !m_szOperationNameKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szOperationNameKey);
	}
	m_wndOperationName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group ")\
			     _T("WHERE substr(hfg_id, 1, 2) IN ('B4', 'B5') %s ORDER BY hfg_id, hfg_name"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndOperationName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptOperationPaymentListReport::OnOperationNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptOperationPaymentListReport::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szDate, szSysDate;
	CString szTemp, tmpStr;
	CReport rpt;
	szSysDate = pMF->GetSysDate();

	if(!rpt.Init(_T("Reports/HMS/TM_BANGTHANHTOANPHUCAPPTTT.RPT"))) 
		return ;
	UpdateData(TRUE);
	BeginWaitCursor();

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	CString szDeptName, szDeptID;
	CString szDoctorID;
	CString szOperationID;

	for (int i = 0; i < m_wndDepartment.GetCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDeptID.IsEmpty())
				szDeptID += _T(",");
			szDeptID.AppendFormat(_T("%s"), m_wndDepartment.GetCheck(i, 0));
			if (!szDeptName.IsEmpty())
				szDeptName += _T(", ");
			szDeptName.AppendFormat(_T("%s"), m_wndDepartment.GetCheck(i, 1));
		}
	}

	for (int i = 0; i < m_wndDoctor.GetCount(); i++)
	{
		if (m_wndDoctor.GetCheck(i))
		{
			if (!szDoctorID.IsEmpty())
				szDoctorID += _T(",");
			szDoctorID.AppendFormat(_T("'%s'"), m_wndDoctor.GetCheck(i, 0));
		}
	}

	for (int i = 0; i < m_wndOperationName.GetCount(); i++)
	{
		if (m_wndOperationName.GetCheck(i))
		{
			if (!szOperationID.IsEmpty())
				szOperationID += _T(",");
			szOperationID.AppendFormat(_T("'%s'"), m_wndOperationName.GetCheck(i, 0));
		}
	}

	if (!szDeptID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_roomid IN (%s) "), szDeptID);
	}
	if (!szDoctorID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_practitioner IN (%s) "), szDoctorID);
	}
	if (!szOperationID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfe_group IN (%s) "), szOperationID);
	}

	rpt.GetReportHeader()->SetValue(_T("Department"), szDeptName);

	szSQL.Format(_T(" SELECT hfe_group as group,") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex, ") \
				_T(" 	hd_cardno as cardno,") \
				_T(" 	hms_getaddress (hp_provid, hp_distid, hp_villid) as address,") \
				_T(" 	date(hcr_admitdate) as admitdate,") \
				_T(" 	trim(hcr_maindisease) as maindisease,") \
				_T(" 	hfl_name as name,") \
				_T(" 	(select distinct hfg_name from hms_fee_group where hfg_id=hfe_group) as operatype,") \
				_T(" 	ho_afteropera as result,") \
				_T(" 	hfe_cost as cost,") \
				_T(" 	ho_practitioner as practitioner,") \
				_T(" 	ho_anesthetist as anesthetist,") \
				_T(" 	ho_assistant as assistant,") \
				_T("    ho_user4 as user4, ho_user5 as user5, ho_user6 as user6, ho_user7 as user7")\
				_T(" 	FROM hms_patient ") \
				_T(" 	LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
				_T(" 	LEFT JOIN hms_clinical_record ON (hcr_docno=hd_docno) ") \
				_T(" 	LEFT JOIN hms_operation ON (hd_docno = ho_docno) ") \
				_T(" 	LEFT JOIN hms_fee_list ON (hfl_feeid=ho_itemid)  ") \
				_T(" 	WHERE (hfl_report <> 'N' or hfl_report is null) and ho_status ='T' and ho_depttype ='E' ") \
				_T(" 	AND date(ho_performdate) BETWEEN date('%s') AND date('%s') ") \
				_T(" 	%s") \
				_T(" 	ORDER BY hfe_group, patientname"), m_szFromDate, m_szToDate, szWhere);

	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	CReportSection *rptDetail;
	CString szGroupID;
	int nIndex = 1;
	long double nCost, nGrpTotal = 0, nTotal = 0;

	while (!rs.IsEOF())
	{
		if (szGroupID.IsEmpty() || rs.GetValue(_T("group")).Trim() != szGroupID.Trim())
		{
			if (nGrpTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				FormatCurrency(nGrpTotal, tmpStr);
				rptDetail->SetValue(_T("S9"), tmpStr);
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("operatype")));
			nTotal += nGrpTotal;
			nIndex = 1;
			nGrpTotal = 0;
		}
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("admitdate"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("maindisease"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		nCost = ToDouble(rs.GetValue(_T("cost")));
		nGrpTotal += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("result"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("practitioner"), tmpStr);
		rptDetail->SetValue(_T("11"), pMF->GetDoctorName(tmpStr.Trim()));

		rs.GetValue(_T("assistant"), tmpStr);
		rptDetail->SetValue(_T("12"), pMF->GetDoctorName(tmpStr.Trim()));

		rs.GetValue(_T("anesthetist"), tmpStr);
		rptDetail->SetValue(_T("13"), pMF->GetDoctorName(tmpStr.Trim()));

		rs.GetValue(_T("user4"), tmpStr);
		rptDetail->SetValue(_T("14"), pMF->GetDoctorName(tmpStr.Trim()));

		rs.GetValue(_T("user5"), tmpStr);
		rptDetail->SetValue(_T("15"), pMF->GetDoctorName(tmpStr.Trim()));

		rs.GetValue(_T("user6"), tmpStr);
		rptDetail->SetValue(_T("16"), pMF->GetDoctorName(tmpStr.Trim()));

		rs.GetValue(_T("user7"), tmpStr);
		rptDetail->SetValue(_T("17"), pMF->GetDoctorName(tmpStr.Trim()));

		szGroupID = rs.GetValue(_T("group"));
		nIndex++;
		rs.MoveNext();
	}

	if (nGrpTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(nGrpTotal, tmpStr);
		rptDetail->SetValue(_T("S9"), tmpStr);
		nTotal += nGrpTotal;
	}

	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(nTotal, tmpStr);
		rptDetail->SetValue(_T("S9"), tmpStr);
	}

	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
				  szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CrptOperationPaymentListReport::OnExportSelect()
{
	if (!IsValidateData())
		return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szDate;
	CString szTemp, tmpStr;
	CExcel xls;

	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 28);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 23);
	xls.SetColumnWidth(7, 16);
	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 16);
	xls.SetColumnWidth(10, 17);
	xls.SetColumnWidth(11, 17);
	xls.SetColumnWidth(12, 17);
	xls.SetColumnWidth(13, 17);
	xls.SetColumnWidth(14, 17);
	xls.SetColumnWidth(15, 17);
	xls.SetColumnWidth(16, 17);
	int nRow = 0, nCol = 0;

	CString szDeptName, szDeptID;
	CString szDoctorID;
	CString szOperationID;

	for (int i = 0; i < m_wndDepartment.GetCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDeptID.IsEmpty())
				szDeptID += _T(",");
			szDeptID.AppendFormat(_T("%s"), m_wndDepartment.GetCheck(i, 0));
			if (!szDeptName.IsEmpty())
				szDeptName += _T(", ");
			szDeptName.AppendFormat(_T("%s"), m_wndDepartment.GetCheck(i, 1));
		}
	}
	

	for (int i = 0; i < m_wndDoctor.GetCount(); i++)
	{
		if (m_wndDoctor.GetCheck(i))
		{
			if (!szDoctorID.IsEmpty())
				szDoctorID += _T(",");
			szDoctorID.AppendFormat(_T("'%s'"), m_wndDoctor.GetCheck(i, 0));
		}
	}

	for (int i = 0; i < m_wndOperationName.GetCount(); i++)
	{
		if (m_wndOperationName.GetCheck(i))
		{
			if (!szOperationID.IsEmpty())
				szOperationID += _T(",");
			szOperationID.AppendFormat(_T("'%s'"), m_wndOperationName.GetCheck(i, 0));
		}
	}
	
	szWhere.Empty();
	if (!szDeptID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_roomid IN (%s) "), szDeptID);
	}
	if (!szDoctorID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_practitioner IN (%s) "), szDoctorID);
	}
	if (!szOperationID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfe_group IN (%s) "), szOperationID);
	}

	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);
	xls.SetCellMergedColumns(nCol, nRow + 2, 13);

	xls.SetCellText(nCol, nRow,pMF->m_CompanyInfo.sc_pname, FMT_TEXT, true, 12);
	xls.SetCellText(nCol, nRow + 1,pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 12);

	xls.SetCellText(nCol, nRow + 2, szDeptName, FMT_TEXT, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 3, 13);
	xls.SetCellText(nCol, nRow + 4, _T("\x42\x1EA2NG TH\x41NH TO\xC1N TI\x1EC0N PH\x1EE4 \x43\x1EA4P PH\x1EAAU THU\x1EACT"), FMT_TEXT, true, 16);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 6, 13);

	xls.SetCellMergedRows(nCol, nRow + 7, 2);
	xls.SetCellText(nCol, nRow + 7, _T("STT"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 1, nRow + 7, 2);
	TranslateString(_T("Full Name"), szTemp);
	xls.SetCellText(nCol + 1, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 2, nRow + 7, 2);
	TranslateString(_T("Age"), szTemp);
	xls.SetCellText(nCol + 2, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 3, nRow + 7, 2);
	TranslateString(_T("Address"), szTemp);
	xls.SetCellText(nCol + 3, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 4, nRow + 7, 2);
	xls.SetCellText(nCol + 4, nRow + 7, _T("Ng\xE0y v\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 5, nRow + 7, 2);
	TranslateString(_T("Document No"), szTemp);
	xls.SetCellText(nCol + 5, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 6, nRow + 7, 2);
	TranslateString(_T("Diagnostic"), szTemp);
	xls.SetCellText(nCol + 6, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 7, nRow + 7, 2);
	TranslateString(_T("Operation Name"), szTemp);
	xls.SetCellText(nCol + 7, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 8, nRow + 7, 2);
	xls.SetCellText(nCol + 8, nRow + 7, _T("Gi\xE1 ti\x1EC1n PTTT"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedRows(nCol + 9, nRow + 7, 2);
	TranslateString(_T("Result"), szTemp);
	xls.SetCellText(nCol + 9, nRow + 7, szTemp, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellMergedColumns(nCol + 10, nRow + 7, 7);
	xls.SetCellText(nCol + 10, nRow + 7, _T("Ng\x1B0\x1EDDi th\x61m gi\x61"), FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellText(nCol + 10, nRow + 8, _T("\x43h\xEDnh"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 11, nRow + 8, _T("Ph\x1EE5"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 12, nRow + 8, _T("V\xF2ng ngo\xE0i"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 13, nRow + 8, _T("Ph\x1EE5 \x31"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 14, nRow + 8, _T("Ph\x1EE5 \x32"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 15, nRow + 8, _T("Ph\x1EE5 \x33"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 16, nRow + 8, _T("Ph\x1EE5 \x34"), FMT_TEXT | FMT_CENTER, true, 12);

	szSQL.Format(_T(" SELECT hfe_group as group,") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex, ") \
				_T(" 	hd_cardno as cardno,") \
				_T(" 	hms_getaddress (hp_provid, hp_distid, hp_villid) as address,") \
				_T(" 	date(hcr_admitdate) as admitdate,") \
				_T(" 	trim(hcr_maindisease) as maindisease,") \
				_T(" 	hfl_name as name,") \
				_T(" 	(select distinct hfg_name from hms_fee_group where hfg_id=hfe_group) as operatype,") \
				_T(" 	ho_afteropera as result,") \
				_T(" 	hfe_cost as cost,") \
				_T(" 	ho_practitioner as practitioner,") \
				_T(" 	ho_anesthetist as anesthetist,") \
				_T(" 	ho_assistant as assistant,") \
				_T("    ho_user4 as user4, ho_user5 as user5, ho_user6 as user6, ho_user7 as user7")\
				_T(" 	FROM hms_patient ") \
				_T(" 	LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
				_T(" 	LEFT JOIN hms_clinical_record ON (hcr_docno=hd_docno) ") \
				_T(" 	LEFT JOIN hms_operation ON (hd_docno = ho_docno) ") \
				_T(" 	LEFT JOIN hms_fee_list ON (hfl_feeid=ho_itemid)  ") \
				_T(" 	WHERE (hfl_report <> 'N' or hfl_report is null) and ho_status ='T' and ho_depttype ='E' ") \
				_T(" 	AND date(ho_performdate) BETWEEN date('%s') AND date('%s') ") \
				_T(" 	%s") \
				_T(" 	ORDER BY hfe_group, patientname"), m_szFromDate, m_szToDate, szWhere);

	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	nRow += 9;

	CString szGroupID;
	int nIndex = 1;
	double nCost, nGrpTotal = 0, nTotal = 0;

	while (!rs.IsEOF())
	{
		if (szGroupID.IsEmpty() || rs.GetValue(_T("group")).Trim() != szGroupID.Trim())
		{
			if (nGrpTotal > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 8);
				TranslateString(_T("Total Amount:"), tmpStr);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
				xls.SetCellText(nCol + 8, nRow, double2str(nGrpTotal), FMT_NUMBER1, true);
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 13);
			xls.SetCellText(nCol, nRow, rs.GetValue(_T("operatype")), FMT_TEXT, true);
			nTotal += nGrpTotal;
			nIndex = 1;
			nGrpTotal = 0;
			nRow++;
		}

		tmpStr.Format(_T("%d"), nIndex);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);
		tmpStr.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("maindisease"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cost"), tmpStr);
		nGrpTotal += ToDouble(tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("result"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("practitioner"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);

		rs.GetValue(_T("assistant"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);

		rs.GetValue(_T("anesthetist"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);

		rs.GetValue(_T("user4"), tmpStr);
		xls.SetCellText(nCol + 13, nRow, pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);

		rs.GetValue(_T("user5"), tmpStr);
		xls.SetCellText(nCol + 14, nRow, pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);

		rs.GetValue(_T("user6"), tmpStr);
		xls.SetCellText(nCol + 15, nRow, pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);

		rs.GetValue(_T("user7"), tmpStr);
		xls.SetCellText(nCol + 16, nRow, pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);

		szGroupID = rs.GetValue(_T("group"));
		nIndex++;
		nRow++;
		rs.MoveNext();
	}

	if (nGrpTotal > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 8);
		TranslateString(_T("Total Amount:"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		xls.SetCellText(nCol + 8, nRow, double2str(nGrpTotal), FMT_NUMBER1, true);
		nRow++;
	}

	if (nTotal > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 8);
		TranslateString(_T("Total Amount:"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		xls.SetCellText(nCol + 8, nRow, double2str(nTotal), FMT_NUMBER1, true);
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BANGTHANHTOANPCPTTT.XLS"));
} 
void CrptOperationPaymentListReport::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CrptOperationPaymentListReport::OnAddrptOperationPaymentListReport()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptOperationPaymentListReport::OnEditrptOperationPaymentListReport()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptOperationPaymentListReport::OnDeleterptOperationPaymentListReport()
{
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
 		OnCancelrptOperationPaymentListReport(); 
 	}
	return 0;
}
int CrptOperationPaymentListReport::OnSaverptOperationPaymentListReport()
{
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
 		//OnrptOperationPaymentListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptOperationPaymentListReport::OnCancelrptOperationPaymentListReport()
{
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
int CrptOperationPaymentListReport::OnrptOperationPaymentListReportListLoadData()
{
	return 0;
}
