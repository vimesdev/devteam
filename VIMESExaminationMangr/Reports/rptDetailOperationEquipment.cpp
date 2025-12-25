#include "rptDetailOperationEquipment.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptDetailOperationEquipment *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptDetailOperationEquipment* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptDetailOperationEquipment *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptDetailOperationEquipment *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptDetailOperationEquipment *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptDetailOperationEquipment* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CrptDetailOperationEquipment *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CrptDetailOperationEquipment *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptDetailOperationEquipment *pVw = (CrptDetailOperationEquipment *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptDetailOperationEquipment *pVw = (CrptDetailOperationEquipment *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptDetailOperationEquipment *pVw = (CrptDetailOperationEquipment *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CrptDetailOperationEquipment*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CrptDetailOperationEquipment*)pWnd)->OnInPatientSelect();
}
static int _OnAddrptDetailOperationEquipmentFnc(CWnd *pWnd){
	 return ((CrptDetailOperationEquipment*)pWnd)->OnAddrptDetailOperationEquipment();
} 
static int _OnEditrptDetailOperationEquipmentFnc(CWnd *pWnd){
	 return ((CrptDetailOperationEquipment*)pWnd)->OnEditrptDetailOperationEquipment();
} 
static int _OnDeleterptDetailOperationEquipmentFnc(CWnd *pWnd){
	 return ((CrptDetailOperationEquipment*)pWnd)->OnDeleterptDetailOperationEquipment();
} 
static int _OnSaverptDetailOperationEquipmentFnc(CWnd *pWnd){
	 return ((CrptDetailOperationEquipment*)pWnd)->OnSaverptDetailOperationEquipment();
} 
static int _OnCancelrptDetailOperationEquipmentFnc(CWnd *pWnd){
	 return ((CrptDetailOperationEquipment*)pWnd)->OnCancelrptDetailOperationEquipment();
} 
CrptDetailOperationEquipment::CrptDetailOperationEquipment(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CrptDetailOperationEquipment::~CrptDetailOperationEquipment(){
}
void CrptDetailOperationEquipment::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 390, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 195, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 200, 30, 280, 55);
	m_wndReportPeriod.Create(this,285, 30, 385, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 195, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 60, 280, 85);
	m_wndToDate.Create(this,285, 60, 385, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 90, 115);
	m_wndDepartment.Create(this,95, 90, 385, 115); 
	m_wndPrint.Create(this, _T("&Print"), 140, 155, 220, 180);
	m_wndExport.Create(this, _T("&Export"), 225, 155, 305, 180);
	m_wndClose.Create(this, _T("&Close"), 310, 155, 390, 180);
	m_wndOutPatient.Create(this, _T("OutPatient"), 220, 120, 300, 145);
	m_wndInPatient.Create(this, _T("InPatient"), 305, 120, 385, 145);

}
void CrptDetailOperationEquipment::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(15);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

}
void CrptDetailOperationEquipment::OnSetWindowEvents()
{
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	SetMode(VM_EDIT);
}
void CrptDetailOperationEquipment::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);

}
void CrptDetailOperationEquipment::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptDetailOperationEquipment::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptDetailOperationEquipment::SetDefaultValues()
{
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nOutPatient=0;
	m_nInPatient=1;
}
int CrptDetailOperationEquipment::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate date;
		date.ParseDate(pMF->GetSysDate());
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
			m_nYear = date.GetYear();
			m_szFromDate = m_szToDate = pMF->GetSysDate();
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
/*void CrptDetailOperationEquipment::OnYearChange(){
	
} */
/*void CrptDetailOperationEquipment::OnYearSetfocus(){
	
} */
/*void CrptDetailOperationEquipment::OnYearKillfocus(){
	
} */
int CrptDetailOperationEquipment::OnYearCheckValue(){
	return 0;
} 
void CrptDetailOperationEquipment::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDetailOperationEquipment::OnReportPeriodSelendok()
{
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CrptDetailOperationEquipment::OnReportPeriodSetfocus(){
	
}*/
/*void CrptDetailOperationEquipment::OnReportPeriodKillfocus(){
	
}*/
long CrptDetailOperationEquipment::OnReportPeriodLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptDetailOperationEquipment::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptDetailOperationEquipment::OnFromDateChange(){
	
} */
/*void CrptDetailOperationEquipment::OnFromDateSetfocus(){
	
} */
/*void CrptDetailOperationEquipment::OnFromDateKillfocus(){
	
} */
int CrptDetailOperationEquipment::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptDetailOperationEquipment::OnToDateChange(){
	
} */
/*void CrptDetailOperationEquipment::OnToDateSetfocus(){
	
} */
/*void CrptDetailOperationEquipment::OnToDateKillfocus(){
	
} */
int CrptDetailOperationEquipment::OnToDateCheckValue(){
	return 0;
} 
void CrptDetailOperationEquipment::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDetailOperationEquipment::OnDepartmentSelendok(){
	 
}
/*void CrptDetailOperationEquipment::OnDepartmentSetfocus(){
	
}*/
/*void CrptDetailOperationEquipment::OnDepartmentKillfocus(){
	
}*/
long CrptDetailOperationEquipment::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if (m_nInPatient == 0)
	{
		if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
		{
			szWhere.Format(_T(" AND sd_id='%d' "), m_szDepartmentKey);
		}
	}
	else
	{
		if(m_wndDepartment.IsSearchKey() && ToInt(m_szDepartmentKey) > 0)
		{
			szWhere.Format(_T(" and hrl_id=%d "), ToInt(m_szDepartmentKey));
		}
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	if (m_nInPatient == 0)
		szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type='DT' %s ORDER BY sd_id"),
					 szWhere);
	else
		szSQL.Format(_T("SELECT hrl_id AS id, hrl_name AS name FROM hms_roomlist ")\
					 _T("LEFT JOIN sys_dept ON(sd_id=hrl_deptid) WHERE sd_type ='KB' %s ORDER BY hrl_id"), szWhere);	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptDetailOperationEquipment::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptDetailOperationEquipment::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szCondition;
	CString szDate, szSysDate;
	szSysDate= pMF->GetSysDate(); 
	CReport rpt; 

	if(!rpt.Init(_T("Reports/HMS/PMS_TONGHOPCHITIETTHUOCVTTHLAMPTTT.RPT")))
		return ;

	UpdateData(true);	
	BeginWaitCursor();
	
	if (m_nOutPatient == 0)
		szCondition.Format(_T(" AND ho_depttype='E' "));
	else
		szCondition.Format(_T(" AND ho_depttype='I' "));
	if (!m_szDepartmentKey.IsEmpty())
	{
		if (m_nOutPatient == 0)
		{			
			szWhere.Format(_T(" AND ho_roomid=%d "), ToInt(m_szDepartmentKey));
		}
		else
		{
			szWhere.Format(_T(" AND ho_deptid='%s' "), m_szDepartmentKey);
		}
	}

	szSQL.Format(_T(" SELECT itemid, operatype, operaname, sum(totalnumber) as totalnumber, price, sum(cost) as amount") \
				_T(" FROM ") \
				_T(" (") \
				_T("  SELECT ho_idx as orderid,") \
				_T(" 	ho_itemid as itemid,") \
				_T(" 	hfl_name as operaname, ") \
				_T(" 	ho_qty as totalnumber,") \
				_T(" 	(select distinct hfg_name from hms_fee_group where hfg_id=hfl_groupid) as operatype,") \
				_T(" 	hfe_unitprice as price,") \
				_T(" 	hfe_cost as cost ") \
				_T("  FROM hms_operation") \
				_T("  LEFT JOIN hms_fee_list ON (hfl_feeid=ho_itemid) ") \
				_T("  WHERE (hfl_report <> 'N' or hfl_report is null) %s ") \
				_T("  AND date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status <>'O' %s ") \
				_T(" ) as tblmain") \
				_T(" GROUP BY itemid, operatype, operaname, price") \
				_T(" ORDER BY operatype, operaname, price"), szCondition, m_szFromDate, m_szToDate, szWhere); 

	//_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;	
	CString szItemID;
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("operaname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("operatype"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("totalnumber"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);		
		rs.GetValue(_T("price"), tmpStr);
		FormatCurrencyStr(tmpStr, szTemp);
		rptDetail->SetValue(_T("5"), szTemp);
		rs.GetValue(_T("amount"), tmpStr);
		FormatCurrencyStr(tmpStr, szTemp);
		rptDetail->SetValue(_T("6"), szTemp);
	
		rs.GetValue(_T("itemid"), szItemID);

		szSQL.Format(_T(" SELECT name, unit, type, ") \
					_T("        (select hfg_name from hms_fee_group where hfg_id=type) as typename, ") \
					_T("        price, sum(qty) as qty, sum(qty)*price as amount ") \
					_T(" FROM ") \
					_T(" (") \
					_T("  SELECT hpol_idx as idx, pmi_id as id, ") \
					_T(" 	pmi_name as name,") \
					_T(" 	pmi_unit as unit, ") \
					_T("    case when pmi_typeid = 'A9000' then pmi_typeid else 'A0000' end as type,") \
					_T(" 	pmsi_vatprice as price,") \
					_T(" 	hpol_issueqty as qty") \
					_T("  FROM hms_operation ") \
					_T("  LEFT JOIN hms_pharmacyorder ON(hpo_docno=ho_docno and trim(hpo_feeid)=cast(ho_idx as text))") \
					_T("  LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
					_T("  LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
					_T("  LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
					_T("  WHERE hpo_type='M' AND ho_itemid='%s' ANd date(hpo_issuedate) BETWEEN date('%s') AND date('%s')") \
					_T("  ) As tbl ") \
					_T(" GROUP BY type, typename, name, unit, price") \
					_T(" ORDER BY type, name, price"), szItemID, m_szFromDate, m_szToDate);

		rsl.ExecSQL(szSQL);		
		TCHAR *lszChar[] = {_T("I"), _T("II"), _T("I+II")};
		double nTotalAmount=0, nAmount=0,Cost=0;		
		int nItem = 0, nChar=0;
		CString szTmp;		
		CString szNewLine, szOldLine;
		rsl.ExecSQL(szSQL);
		while(!rsl.IsEOF())
		{
			rsl.GetValue(_T("type"), szNewLine);
			if(!szNewLine.IsEmpty() && szNewLine != szOldLine )
			{
				if (nAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->GetItem(_T("t2"))->SetBold(TRUE);
					rptDetail->GetItem(_T("t2"))->SetItalic(TRUE);
					rptDetail->GetItem(_T("t6"))->SetBold(TRUE);
					rptDetail->GetItem(_T("t6"))->SetItalic(TRUE);
					tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nChar]);
					rptDetail->SetValue(_T("t2"), tmpStr);
					FormatCurrency(nAmount, tmpStr);
					rptDetail->SetValue(_T("t6"), tmpStr);
					nTotalAmount += nAmount;
					nAmount = 0;
					nChar++;					
				}

				if (nChar > 1)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->GetItem(_T("t2"))->SetBold(TRUE);
					rptDetail->GetItem(_T("t2"))->SetItalic(TRUE);
					rptDetail->GetItem(_T("t6"))->SetBold(TRUE);
					rptDetail->GetItem(_T("t6"))->SetItalic(TRUE);
					rptDetail->GetItem(_T("t6"))->SetTextAlign(2);			
					tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[2]);
					rptDetail->SetValue(_T("t2"), tmpStr);
					FormatCurrency(nTotalAmount, tmpStr);
					rptDetail->SetValue(_T("t6"), tmpStr);				
				}

				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->GetItem(_T("t2"))->SetBold(TRUE);
				rptDetail->GetItem(_T("t2"))->SetItalic(TRUE);
				tmpStr.Format(_T("%s.  %s"), lszChar[nChar], rsl.GetValue(_T("typename")));
				rptDetail->SetValue(_T("t2"), tmpStr);
				if (nChar < 1)
				{
					rptDetail->GetItem(_T("t3"))->SetBold(TRUE);
					rptDetail->GetItem(_T("t4"))->SetBold(TRUE);
					rptDetail->GetItem(_T("t5"))->SetBold(TRUE);
					rptDetail->GetItem(_T("t6"))->SetBold(TRUE);

					TranslateString(_T("Unit"),tmpStr);
					rptDetail->SetValue(_T("t3"), tmpStr);
					TranslateString(_T("Price"),tmpStr);
					rptDetail->SetValue(_T("t4"), tmpStr);
					TranslateString(_T("Qty"),tmpStr);
					rptDetail->SetValue(_T("t5"), tmpStr);	
					TranslateString(_T("Total Amount"),tmpStr);
					rptDetail->SetValue(_T("t6"), tmpStr);
	
					rptDetail->GetItem(_T("t3"))->SetTextAlign(1);
					rptDetail->GetItem(_T("t4"))->SetTextAlign(1);
					rptDetail->GetItem(_T("t5"))->SetTextAlign(1);
					rptDetail->GetItem(_T("t6"))->SetTextAlign(1);
				}
				nItem = 0;
				szOldLine = szNewLine;
			}
			nItem++;
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
			tmpStr.Format(_T("%d. %s"), nItem, rsl.GetValue(_T("name")));			
			rptDetail->SetValue(_T("t2"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);			
			rptDetail->SetValue(_T("t3"), tmpStr);
			rsl.GetValue(_T("price"), Cost);
			FormatCurrency(Cost, tmpStr);
			rptDetail->SetValue(_T("t4"), tmpStr);
			rsl.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("t5"), tmpStr);
			rsl.GetValue(_T("amount"), Cost);
			nAmount += Cost;
			FormatCurrency(Cost, tmpStr);
			rptDetail->SetValue(_T("t6"), tmpStr);
			rsl.MoveNext();
		}
		if (nAmount > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->GetItem(_T("t2"))->SetBold(TRUE);
			rptDetail->GetItem(_T("t2"))->SetItalic(TRUE);
			rptDetail->GetItem(_T("t6"))->SetBold(TRUE);
			rptDetail->GetItem(_T("t6"))->SetItalic(TRUE);
			tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nChar]);
			rptDetail->SetValue(_T("t2"), tmpStr);
			FormatCurrency(nAmount, tmpStr);
			rptDetail->SetValue(_T("t6"), tmpStr);
			nTotalAmount += nAmount;		
		}

		if (nChar >= 1)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->GetItem(_T("t2"))->SetBold(TRUE);
			rptDetail->GetItem(_T("t2"))->SetItalic(TRUE);
			rptDetail->GetItem(_T("t6"))->SetBold(TRUE);
			rptDetail->GetItem(_T("t6"))->SetItalic(TRUE);
			tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[2]);
			rptDetail->SetValue(_T("t2"), tmpStr);
			FormatCurrency(nTotalAmount, tmpStr);
			rptDetail->SetValue(_T("t6"), tmpStr);				
		}
	
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rpt.PrintPreview();
} 
void CrptDetailOperationEquipment::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd() ;
	CRecord rs(&pMF->m_db);
	CRecord	rsl(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szCondition;
	CString szDate, szSysDate, szFromDateToDate;

	UpdateData(TRUE);

	if (m_nOutPatient == 0)
		szCondition.Format(_T(" AND ho_depttype='E' "));
	else
		szCondition.Format(_T(" AND ho_depttype='I' "));
	if (!m_szDepartmentKey.IsEmpty())
	{
		if (m_nOutPatient == 0)
		{			
			szWhere.Format(_T(" AND ho_roomid=%d "), ToInt(m_szDepartmentKey));
		}
		else
		{
			szWhere.Format(_T(" AND ho_deptid='%s' "), m_szDepartmentKey);
		}
	}
	
	szSQL.Format(_T(" SELECT itemid, operatype, operaname, sum(totalnumber) as totalnumber, price, sum(cost) as amount") \
				_T(" FROM ") \
				_T(" (") \
				_T("  SELECT ho_idx as orderid,") \
				_T(" 	ho_itemid as itemid,") \
				_T(" 	hfl_name as operaname, ") \
				_T(" 	ho_qty as totalnumber,") \
				_T(" 	(select distinct hfg_name from hms_fee_group where hfg_id=hfl_groupid) as operatype,") \
				_T(" 	hfe_unitprice as price,") \
				_T(" 	hfe_cost as cost ") \
				_T("  FROM hms_operation") \
				_T("  LEFT JOIN hms_fee_list ON (hfl_feeid=ho_itemid) ") \
				_T("  WHERE (hfl_report <> 'N' or hfl_report is null) %s ") \
				_T("  AND date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status <>'O' %s ") \
				_T(" ) as tblmain") \
				_T(" GROUP BY itemid, operatype, operaname, price") \
				_T(" ORDER BY operatype, operaname, price"), szCondition, m_szFromDate, m_szToDate, szWhere); 
	//_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();	

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 60);
	xls.SetColumnWidth(2, 18);
	xls.SetColumnWidth(3, 14);
	xls.SetColumnWidth(4, 17);
	xls.SetColumnWidth(5, 17);
	
	xls.SetRowHeight(8,30);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 3, m_wndDepartment.GetCurrent(1), FMT_TEXT, true, 12, 0);
	xls.SetCellMergedColumns(0, 5, 6);
	xls.SetCellMergedColumns(0, 6, 6);
	xls.SetCellText(0, 5, _T("T\x1ED4NG H\x1EE2P \x43HI TI\x1EBET THU\x1ED0\x43 - VTTH L\xC0M PT - TT"), FMT_TEXT, true, 12);
	TranslateString(_T("From Date"), tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 6, szFromDateToDate, FMT_TEXT, true, 12);
	
	
	int nRow = 8;
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);	
	xls.SetCellText(1, nRow, _T("T\xEAn PT - TT"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(2, nRow, _T("Nh\xF3m PT - TT"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(3, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(4, nRow, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(5, nRow, _T("T\x1ED5ng ti\x1EC1n"), FMT_TEXT | FMT_CENTER, true);
	
	
	int nIndex = 1;
	CString	szItemID;
	TCHAR *lszChar[] = {_T("I"),_T("II"),_T("III")};
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()) 
	{
		AfxMessageBox(_T("No data"));
		return;
	}
	while(!rs.IsEOF())
	{
		nRow++;	
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("operaname"), tmpStr);		
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("operatype"), tmpStr);		
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("totalnumber"), tmpStr);		
		xls.SetCellText(3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("price"), tmpStr);		
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("amount"), tmpStr);		
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("itemid"), szItemID);

		szSQL.Format(_T(" SELECT name, unit, type, ") \
					_T("        (select hfg_name from hms_fee_group where hfg_id=type) as typename, ") \
					_T("        price, sum(qty) as qty, sum(qty)*price as amount ") \
					_T(" FROM ") \
					_T(" (") \
					_T("  SELECT hpol_idx as idx, pmi_id as id, ") \
					_T(" 	pmi_name as name,") \
					_T(" 	pmi_unit as unit, ") \
					_T("    case when pmi_typeid = 'A9000' then pmi_typeid else 'A0000' end as type,") \
					_T(" 	pmsi_vatprice as price,") \
					_T(" 	hpol_issueqty as qty") \
					_T("  FROM hms_operation ") \
					_T("  LEFT JOIN hms_pharmacyorder ON(hpo_docno=ho_docno and trim(hpo_feeid)=cast(ho_idx as text))") \
					_T("  LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
					_T("  LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
					_T("  LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
					_T("  WHERE hpo_type='M' AND ho_itemid='%s' ANd date(hpo_issuedate) BETWEEN date('%s') AND date('%s')") \
					_T("  ) As tbl ") \
					_T(" GROUP BY type, typename, name, unit, price") \
					_T(" ORDER BY type, name,price"), szItemID, m_szFromDate, m_szToDate);
		rsl.ExecSQL(szSQL);
		
		//_fmsg(_T("%s"), szSQL);
		double nTotalAmount=0, nAmount=0;		
		int nItem = 0, nGroup=0;
		CString szTmp;
		CString szNewLine, szOldLine;
		rsl.ExecSQL(szSQL);
		while(!rsl.IsEOF())
		{	
			rsl.GetValue(_T("type"), szNewLine);			
			if (!szNewLine.IsEmpty() && szOldLine != szNewLine)
			{
				if(nAmount > 0)
				{
					nRow++;
					//xls.SetCellMergedColumns(1,nRow,6);
					//xls.SetCellMergedColumns(7,nRow,4);					
					tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nGroup]);
					xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
					tmpStr.Format(_T("%.2f"), nAmount);
					xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
					nTotalAmount += nAmount;
					nGroup++;
					nAmount = 0;
				}
				nRow++;
				//xls.SetCellMergedColumns(1,nRow,6);
				//xls.SetCellMergedColumns(7,nRow,5);
				tmpStr.Format(_T("%s.  %s"), lszChar[nGroup], rsl.GetValue(_T("typename")));
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);

				if (nGroup < 1)
				{
					TranslateString(_T("Unit"),tmpStr);
					xls.SetCellText(2, nRow, tmpStr, FMT_TEXT, true);
					TranslateString(_T("Price"),tmpStr);
					xls.SetCellText(3, nRow, tmpStr, FMT_TEXT, true);
					TranslateString(_T("Qty"),tmpStr);
					xls.SetCellText(4, nRow, tmpStr, FMT_TEXT, true);
					TranslateString(_T("Total Amount"),tmpStr);
					xls.SetCellText(5, nRow, tmpStr, FMT_TEXT, true);
				}
				szOldLine = szNewLine;				
				nItem=0;				
			}
			
			nRow++;
			nItem++;
			//xls.SetCellMergedColumns(1,nRow,6);
			/*tmpStr.Format(_T("%d"),nItem ++);
			xls.SetCellText(6,nRow, tmpStr, FMT_INTEGER);*/
			tmpStr.Format(_T("%d. %s"),nItem,rsl.GetValue(_T("name")));			
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
			rsl.GetValue(_T("unit"), tmpStr);			
			xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
			rsl.GetValue(_T("price"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
			rsl.GetValue(_T("qty"), tmpStr);
			xls.SetCellText(4, nRow,	tmpStr, FMT_INTEGER);
			rsl.GetValue(_T("amount"), tmpStr);
			nAmount += ToFloat(tmpStr);
			xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);		
			rsl.MoveNext();
		}
		
		if(nAmount > 0)
		{
			nRow++;
			//xls.SetCellMergedColumns(1,nRow,6);
			//xls.SetCellMergedColumns(7,nRow,4);
			tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nGroup]);			
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
			nTotalAmount += nAmount;
		}
			
		if(nGroup >= 1)
		{
			nRow++;
			//xls.SetCellMergedColumns(1,nRow,6);
			//xls.SetCellMergedColumns(7,nRow,4);
			tmpStr.Format(_T("%.2f"), nTotalAmount);
			xls.SetCellText(1, nRow, _T("\x43\x1ED9ng(I+II):"), FMT_TEXT, true);
			xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);					
		}		
		rs.MoveNext();
	}
	
	EndWaitCursor();
	xls.Save(_T("Exports\\TonghopchitietthuocvtPT-TT.xls"));		
} 
void CrptDetailOperationEquipment::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CrptDetailOperationEquipment::OnOutPatientSelect()
{
	UpdateData(TRUE);
	OnDepartmentLoadData();
}
void CrptDetailOperationEquipment::OnInPatientSelect()
{
	UpdateData(TRUE);
	OnDepartmentLoadData();
}
int CrptDetailOperationEquipment::OnAddrptDetailOperationEquipment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptDetailOperationEquipment::OnEditrptDetailOperationEquipment(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptDetailOperationEquipment::OnDeleterptDetailOperationEquipment(){
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
 		OnCancelrptDetailOperationEquipment(); 
 	}
	return 0;
}
int CrptDetailOperationEquipment::OnSaverptDetailOperationEquipment(){
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
 		//OnrptDetailOperationEquipmentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptDetailOperationEquipment::OnCancelrptDetailOperationEquipment(){
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
int CrptDetailOperationEquipment::OnrptDetailOperationEquipmentListLoadData(){
	return 0;
}
