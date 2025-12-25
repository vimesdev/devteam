#include "MSBCHoatdongnghiencuukhoahoc.h"
#include "MainFrm.h"
static void _OnDomainsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCHoatdongnghiencuukhoahoc* )pWnd)->OnDomainsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDomainsSelendokFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnDomainsSelendok();
}
/*static void _OnDomainsSetfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnDomainsKillfocus();
}*/
/*static void _OnDomainsKillfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnDomainsKillfocus();
}*/
static long _OnDomainsLoadDataFnc(CWnd *pWnd){
	return ((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnDomainsLoadData();
}
/*static void _OnDomainsAddNewFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnDomainsAddNew();
}*/
static void _OnMngLevelSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCHoatdongnghiencuukhoahoc* )pWnd)->OnMngLevelSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMngLevelSelendokFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnMngLevelSelendok();
}
/*static void _OnMngLevelSetfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnMngLevelKillfocus();
}*/
/*static void _OnMngLevelKillfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnMngLevelKillfocus();
}*/
static long _OnMngLevelLoadDataFnc(CWnd *pWnd){
	return ((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnMngLevelLoadData();
}
/*static void _OnMngLevelAddNewFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnMngLevelAddNew();
}*/
static void _OnConditionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCHoatdongnghiencuukhoahoc* )pWnd)->OnConditionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnConditionSelendokFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnConditionSelendok();
}
/*static void _OnConditionSetfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnConditionKillfocus();
}*/
/*static void _OnConditionKillfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnConditionKillfocus();
}*/
static long _OnConditionLoadDataFnc(CWnd *pWnd){
	return ((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnConditionLoadData();
}
/*static void _OnConditionAddNewFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnConditionAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCHoatdongnghiencuukhoahoc *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCHoatdongnghiencuukhoahoc *pVw = (CMSBCHoatdongnghiencuukhoahoc *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCHoatdongnghiencuukhoahoc *pVw = (CMSBCHoatdongnghiencuukhoahoc *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnExitSelectFnc(CWnd *pWnd){
	CMSBCHoatdongnghiencuukhoahoc *pVw = (CMSBCHoatdongnghiencuukhoahoc *)pWnd;
	pVw->OnExitSelect();
} 
static int _OnAddMSBCHoatdongnghiencuukhoahocFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongnghiencuukhoahoc*)pWnd)->OnAddMSBCHoatdongnghiencuukhoahoc();
} 
static int _OnEditMSBCHoatdongnghiencuukhoahocFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongnghiencuukhoahoc*)pWnd)->OnEditMSBCHoatdongnghiencuukhoahoc();
} 
static int _OnDeleteMSBCHoatdongnghiencuukhoahocFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongnghiencuukhoahoc*)pWnd)->OnDeleteMSBCHoatdongnghiencuukhoahoc();
} 
static int _OnSaveMSBCHoatdongnghiencuukhoahocFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongnghiencuukhoahoc*)pWnd)->OnSaveMSBCHoatdongnghiencuukhoahoc();
} 
static int _OnCancelMSBCHoatdongnghiencuukhoahocFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongnghiencuukhoahoc*)pWnd)->OnCancelMSBCHoatdongnghiencuukhoahoc();
} 
CMSBCHoatdongnghiencuukhoahoc::CMSBCHoatdongnghiencuukhoahoc()
{

	m_nDlgWidth = 515;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CMSBCHoatdongnghiencuukhoahoc::~CMSBCHoatdongnghiencuukhoahoc(){
}
void CMSBCHoatdongnghiencuukhoahoc::OnCreateComponents(){
	m_wndFilter.Create(this, _T("Filter"), 5, 5, 470, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 130, 55);
	m_wndFromDate.Create(this,135, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 360, 55);
	m_wndToDate.Create(this,365, 30, 465, 55); 
	m_wndDomainsLabel.Create(this, _T("Domain"), 10, 60, 130, 85);
	m_wndDomains.Create(this,135, 60, 465, 85); 
	m_wndConditionLabel.Create(this, _T("Condition"), 10, 90, 130, 115);
	m_wndCondition.Create(this,135, 90, 465, 115); 	
	m_wndMngLevelSLabel.Create(this, _T("Mng Level"), 10, 120, 130, 145);
	m_wndMngLevel.Create(this,135, 120, 465, 145);	
	m_wndPrint.Create(this, _T("&Print"), 300, 155, 380, 180);
	m_wndExport.Create(this, _T("&Export"), 385, 155, 465, 180);
	//m_wndExit.Create(this, _T("&Exit"), 385, 155, 465, 180);

}
void CMSBCHoatdongnghiencuukhoahoc::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDomains.SetCheckValue(true);
	m_wndDomains.LimitText(1024);
	m_wndMngLevel.SetCheckValue(true);
	m_wndMngLevel.LimitText(1024);
	m_wndCondition.SetCheckValue(true);
	m_wndCondition.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndDomains.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDomains.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndMngLevel.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndMngLevel.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	
	m_wndCondition.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndCondition.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CMSBCHoatdongnghiencuukhoahoc::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDomains.SetEvent(WE_SELENDOK, _OnDomainsSelendokFnc);
	//m_wndDomains.SetEvent(WE_SETFOCUS, _OnDomainsSetfocusFnc);
	//m_wndDomains.SetEvent(WE_KILLFOCUS, _OnDomainsKillfocusFnc);
	m_wndDomains.SetEvent(WE_SELCHANGE, _OnDomainsSelectChangeFnc);
	m_wndDomains.SetEvent(WE_LOADDATA, _OnDomainsLoadDataFnc);
	//m_wndDomains.SetEvent(WE_ADDNEW, _OnDomainsAddNewFnc);
	m_wndMngLevel.SetEvent(WE_SELENDOK, _OnMngLevelSelendokFnc);
	//m_wndMngLevel.SetEvent(WE_SETFOCUS, _OnMngLevelSetfocusFnc);
	//m_wndMngLevel.SetEvent(WE_KILLFOCUS, _OnMngLevelKillfocusFnc);
	m_wndMngLevel.SetEvent(WE_SELCHANGE, _OnMngLevelSelectChangeFnc);
	m_wndMngLevel.SetEvent(WE_LOADDATA, _OnMngLevelLoadDataFnc);
	//m_wndMngLevel.SetEvent(WE_ADDNEW, _OnMngLevelAddNewFnc);
	m_wndCondition.SetEvent(WE_SELENDOK, _OnConditionSelendokFnc);
	//m_wndCondition.SetEvent(WE_SETFOCUS, _OnConditionSetfocusFnc);
	//m_wndCondition.SetEvent(WE_KILLFOCUS, _OnConditionKillfocusFnc);
	m_wndCondition.SetEvent(WE_SELCHANGE, _OnConditionSelectChangeFnc);
	m_wndCondition.SetEvent(WE_LOADDATA, _OnConditionLoadDataFnc);
	//m_wndCondition.SetEvent(WE_ADDNEW, _OnConditionAddNewFnc);
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
	m_wndExit.SetEvent(WE_CLICK, _OnExitSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);

}
void CMSBCHoatdongnghiencuukhoahoc::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDomains.GetDlgCtrlID(), m_szDomainsKey);
	DDX_TextEx(pDX, m_wndMngLevel.GetDlgCtrlID(), m_szMngLevelKey);
	DDX_TextEx(pDX, m_wndCondition.GetDlgCtrlID(), m_szConditionKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CMSBCHoatdongnghiencuukhoahoc::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCHoatdongnghiencuukhoahoc::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCHoatdongnghiencuukhoahoc::SetDefaultValues(){

	m_szDomainsKey.Empty();
	m_szMngLevelKey.Empty();
	m_szConditionKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CMSBCHoatdongnghiencuukhoahoc::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
		
		EnableButtons(TRUE, 0, 1, 2, -1);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CMSBCHoatdongnghiencuukhoahoc::OnDomainsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCHoatdongnghiencuukhoahoc::OnDomainsSelendok(){
	 
}
/*void CMSBCHoatdongnghiencuukhoahoc::OnDomainsSetfocus(){
	
}*/
/*void CMSBCHoatdongnghiencuukhoahoc::OnDomainsKillfocus(){
	
}*/
long CMSBCHoatdongnghiencuukhoahoc::OnDomainsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDomains.IsSearchKey() && !m_szDomainsKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szDomainsKey);
	}
	m_wndDomains.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'srm_domain_list' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDomains.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBCHoatdongnghiencuukhoahoc::OnDomainsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCHoatdongnghiencuukhoahoc::OnMngLevelSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCHoatdongnghiencuukhoahoc::OnMngLevelSelendok(){
	 
}
/*void CMSBCHoatdongnghiencuukhoahoc::OnMngLevelSetfocus(){
	
}*/
/*void CMSBCHoatdongnghiencuukhoahoc::OnMngLevelKillfocus(){
	
}*/
long CMSBCHoatdongnghiencuukhoahoc::OnMngLevelLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMngLevel.IsSearchKey() && !m_szMngLevelKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szMngLevelKey);
	}
	m_wndMngLevel.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'srm_mnglevel' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMngLevel.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;
}
/*void CMSBCHoatdongnghiencuukhoahoc::OnMngLevelAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCHoatdongnghiencuukhoahoc::OnConditionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCHoatdongnghiencuukhoahoc::OnConditionSelendok(){
	 
}
/*void CMSBCHoatdongnghiencuukhoahoc::OnConditionSetfocus(){
	
}*/
/*void CMSBCHoatdongnghiencuukhoahoc::OnConditionKillfocus(){
	
}*/
long CMSBCHoatdongnghiencuukhoahoc::OnConditionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCondition.IsSearchKey() && !m_szConditionKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szConditionKey);
	};
	m_wndCondition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'srm_condition' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCondition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBCHoatdongnghiencuukhoahoc::OnConditionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CMSBCHoatdongnghiencuukhoahoc::OnFromDateChange(){
	
} */
/*void CMSBCHoatdongnghiencuukhoahoc::OnFromDateSetfocus(){
	
} */
/*void CMSBCHoatdongnghiencuukhoahoc::OnFromDateKillfocus(){
	
} */
int CMSBCHoatdongnghiencuukhoahoc::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCHoatdongnghiencuukhoahoc::OnToDateChange(){
	
} */
/*void CMSBCHoatdongnghiencuukhoahoc::OnToDateSetfocus(){
	
} */
/*void CMSBCHoatdongnghiencuukhoahoc::OnToDateKillfocus(){
	
} */
int CMSBCHoatdongnghiencuukhoahoc::OnToDateCheckValue(){
	return 0;
} 
#include "ReportDocument.h"
void CMSBCHoatdongnghiencuukhoahoc::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CString szSQL, szWhere, szWhere1, szWhere2, szWhere3, szWhere4, tmpStr, szTemp;
	szWhere.IsEmpty();
	UpdateData(true);

	if (!rpt.Init(_T("Reports/HMS/BCHDNGHIENCUUKHOAHOC.RPT")))
		return;

	if(!m_szDomainsKey.IsEmpty() && ToLong(m_szDomainsKey) > 0)
	{
		szWhere.Format(_T(" and srmt_domain = %d"), ToLong(m_szDomainsKey));
	}
	
	if(!m_szMngLevelKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and srmt_managelevel = '%s'"), m_szMngLevelKey);
	}

	if(!m_szConditionKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and srmt_condition = '%s'"), m_szConditionKey);
	}	
	

	szSQL.Format(_T("SELECT srmt_id, ") \
				_T("       srmt_topicname, ") \
				_T("       srmt_topiccontent, ") \
				_T("       (SELECT ss_desc AS managelevel ") \
				_T("        FROM   sys_sel ") \
				_T("        WHERE  ss_id = 'srm_mnglevel' ") \
				_T("               AND ss_code = srmt_managelevel)  AS managelevel, ") \
				_T("       srmt_startdate, ") \
				_T("       srmt_enddate, ") \
				_T("       (SELECT ss_desc AS domain ") \
				_T("        FROM   sys_sel ") \
				_T("        WHERE  ss_id = 'srm_domain_list' ") \
				_T("               AND ss_code = srmt_domain)       AS domain, ") \
				_T("       (SELECT ss_desc AS managertopic ") \
				_T("        FROM   sys_sel ") \
				_T("        WHERE  ss_id = 'srm_staff_joined' ") \
				_T("               AND ss_code = srmt_managertopic) AS mtopic ") \
				_T("FROM   srm_topic WHERE trunc(srmt_startdate) BETWEEN To_date('%s', 'YYYY-MM-DD') and To_date('%s', 'YYYY-MM-DD') %s"), m_szFromDate, m_szToDate, szWhere);

	int nCount = 0;
	CReportSection* rptDetail ;
	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	int nIndex = 1;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("domain"), m_wndDomains.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("managelevel"), m_wndMngLevel.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("condition"), m_wndCondition.GetCurrent(1));

	CString printDate;
	printDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), printDate);	

	tmpStr = pMF->GetSysDateTime();	
	printDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")),
					 tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));

	rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);	

	printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
					 tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));

	rpt.GetReportFooter()->SetValue(_T("PrintDate"), printDate);
	
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("srmt_id"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("srmt_topicname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("srmt_topiccontent"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("managelevel"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("srmt_startdate"), tmpStr);
		rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("srmt_enddate"), tmpStr);
		rptDetail->SetValue(_T("7"), CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("domain"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("mtopic"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		
		rs.MoveNext();
	}

	rpt.PrintPreview();

} 
#include "Excel.h"
void CMSBCHoatdongnghiencuukhoahoc::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	static CReport rpt;
	CString szSQL, szWhere, szWhere1, szWhere2, szWhere3, szWhere4, tmpStr, szTemp;
	int nCount = 0;
	int nIndex = 1;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 12);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 16);	xls.SetColumnWidth(4, 16);	xls.SetColumnWidth(5, 16);	xls.SetColumnWidth(6, 20);	xls.SetColumnWidth(7, 20);	xls.SetColumnWidth(8, 20);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_CENTER,true, 11);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_CENTER,true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));	xls.SetCellText(0, 3, tmpStr,FMT_CENTER,true,12);	xls.SetCellText(0, 2, _T("\x42\xE1o \x63\xE1o ho\x1EA1t \x111\x1ED9ng nghi\xEAn \x63\x1EE9u kho\x61 h\x1ECD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("M\xE3 \x111\x1EC1 t\xE0i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\xEAn \x111\x1EC1 t\xE0i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("\x43\x1EA5p \x111\x1EC1 t\xE0i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("\x43\x1EA5p \x111\x1ED9 qu\x1EA3n l\xFD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Ng\xE0y \x62\x1EAFt \x111\x1EA7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Ng\xE0y k\x1EBFt th\xFA\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("L\x129nh v\x1EF1\x63 nghi\xEAn \x63\x1EE9u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("\x43h\x1EE7 nhi\x1EC7m \x111\x1EC1 t\xE0i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 8);	xls.SetMerge(3, 3, 0, 8);

	if(!m_szDomainsKey.IsEmpty() && ToLong(m_szDomainsKey) > 0)
	{
		szWhere.Format(_T(" and srmt_domain = %d"), ToLong(m_szDomainsKey));
	}

	if(!m_szMngLevelKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and srmt_managelevel = '%s'"), m_szMngLevelKey);
	}

	if(!m_szConditionKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and srmt_condition = '%s'"), m_szConditionKey);
	}	

	szSQL.Format(_T("SELECT srmt_id, ") \
		_T("       srmt_topicname, ") \
		_T("       srmt_topiccontent, ") \
		_T("       (SELECT ss_desc AS managelevel ") \
		_T("        FROM   sys_sel ") \
		_T("        WHERE  ss_id = 'srm_mnglevel' ") \
		_T("               AND ss_code = srmt_managelevel)  AS managelevel, ") \
		_T("       srmt_startdate, ") \
		_T("       srmt_enddate, ") \
		_T("       (SELECT ss_desc AS domain ") \
		_T("        FROM   sys_sel ") \
		_T("        WHERE  ss_id = 'srm_domain_list' ") \
		_T("               AND ss_code = srmt_domain)       AS domain, ") \
		_T("       (SELECT ss_desc AS managertopic ") \
		_T("        FROM   sys_sel ") \
		_T("        WHERE  ss_id = 'srm_staff_joined' ") \
		_T("               AND ss_code = srmt_managertopic) AS mtopic ") \
		_T("FROM   srm_topic WHERE trunc(srmt_startdate) BETWEEN To_date('%s', 'YYYY-MM-DD') and To_date('%s', 'YYYY-MM-DD') %s"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		tmpStr.Format(_T("%d"), nIndex++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("srmt_id"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("srmt_topicname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("srmt_topiccontent"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("managelevel"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("srmt_startdate"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("srmt_enddate"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("domain"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mtopic"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\MSBCHoatdongnghiencuukhoahoc.xls"));
} 
void CMSBCHoatdongnghiencuukhoahoc::OnExitSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
int CMSBCHoatdongnghiencuukhoahoc::OnAddMSBCHoatdongnghiencuukhoahoc(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCHoatdongnghiencuukhoahoc::OnEditMSBCHoatdongnghiencuukhoahoc(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCHoatdongnghiencuukhoahoc::OnDeleteMSBCHoatdongnghiencuukhoahoc(){
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
 		OnCancelMSBCHoatdongnghiencuukhoahoc();
 	}
	return 0;
}
int CMSBCHoatdongnghiencuukhoahoc::OnSaveMSBCHoatdongnghiencuukhoahoc(){
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
 		//OnMSBCHoatdongnghiencuukhoahocListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCHoatdongnghiencuukhoahoc::OnCancelMSBCHoatdongnghiencuukhoahoc(){
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
int CMSBCHoatdongnghiencuukhoahoc::OnMSBCHoatdongnghiencuukhoahocListLoadData(){
	return 0;
}
