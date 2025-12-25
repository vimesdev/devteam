#include "stdafx.h"
#include "FMBaoanhaucan_dacapan.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMBaoanhaucan_dacapan* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan *)pWnd)->OnToDateCheckValue();
} 
static void _OnByDateSelectFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*) pWnd)->OnByDateSelect();
}
static void _OnByDeptSelectFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*) pWnd)->OnByDeptSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*) pWnd)->OnInsuranceSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMBaoanhaucan_dacapan *pVw = (CFMBaoanhaucan_dacapan *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMBaoanhaucan_dacapan *pVw = (CFMBaoanhaucan_dacapan *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMBaoanhaucan_dacapan*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMBaoanhaucan_dacapan*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMBaoanhaucan_dacapan*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMBaoanhaucan_dacapan*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMBaoanhaucan_dacapan*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMBaoanhaucan_dacapan*)pWnd)->OnDeptListUnCheckAll();
}
static long _OnPackageListLoadDataFnc(CWnd *pWnd)
{
	return ((CFMBaoanhaucan_dacapan*)pWnd)->OnPackageListLoadData();
}

CFMBaoanhaucan_dacapan::CFMBaoanhaucan_dacapan(CWnd *pParent)
{
	m_nDlgWidth = 585;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CFMBaoanhaucan_dacapan::~CFMBaoanhaucan_dacapan()
{
}
void CFMBaoanhaucan_dacapan::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 480, 550);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 476, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 476, 85); 
	m_wndByDate.Create(this, _T("By Date"), 0, 0, 0, 0);
	m_wndByDept.Create(this, _T("By Dept"), 0, 0, 0, 0);
	m_wndInsurance.Create(this, _T("Insurance"), 5, 555, 85, 580);
	m_wndPrint.Create(this, _T("&Print"), 310, 555, 390, 580);
	m_wndExport.Create(this, _T("&Export"), 395, 555, 475, 580);
	m_wndObjectList.Create(this,10, 90, 476, 202); 
	m_wndDeptList.Create(this,11, 206, 477, 352); 
	m_wndPackageList.Create(this,12, 357, 478, 550); 

}
void CFMBaoanhaucan_dacapan::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndObjectList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

	m_wndPackageList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndPackageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndPackageList.SetCheckBox(TRUE);
}

void CFMBaoanhaucan_dacapan::OnSetWindowEvents(){
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
	m_wndByDate.SetEvent(WE_CLICK, _OnByDateSelectFnc);
	m_wndByDept.SetEvent(WE_CLICK, _OnByDeptSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);
	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);


	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	m_wndPackageList.SetEvent(WE_LOADDATA, _OnPackageListLoadDataFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnObjectListLoadData();
	OnDeptListLoadData();
	OnPackageListLoadData();

}
void CFMBaoanhaucan_dacapan::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);

}
void CFMBaoanhaucan_dacapan::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szCondition.Empty();
	m_bInsurance = FALSE;

}

int CFMBaoanhaucan_dacapan::SetMode(int nMode){
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

/*void CFMBaoanhaucan_dacapan::OnYearChange(){
	
} */
/*void CFMBaoanhaucan_dacapan::OnYearSetfocus(){
	
} */
/*void CFMBaoanhaucan_dacapan::OnYearKillfocus(){
	
} */
int CFMBaoanhaucan_dacapan::OnYearCheckValue(){
	UpdateData(TRUE);
	if (m_nYear > 0)
	{
		CDateTime dt;
		CDate date;
		CString szTemp;

		dt.ParseDateTime(m_szFromDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szFromDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/.2d/.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/.2d/.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}

	UpdateData(FALSE);
	return 0;
}
 
void CFMBaoanhaucan_dacapan::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMBaoanhaucan_dacapan::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
}

/*void CFMBaoanhaucan_dacapan::OnReportPeriodSetfocus(){
	
}*/
/*void CFMBaoanhaucan_dacapan::OnReportPeriodKillfocus(){
	
}*/
long CFMBaoanhaucan_dacapan::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CFMBaoanhaucan_dacapan::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMBaoanhaucan_dacapan::OnFromDateChange(){
	
} */
/*void CFMBaoanhaucan_dacapan::OnFromDateSetfocus(){
	
} */
/*void CFMBaoanhaucan_dacapan::OnFromDateKillfocus(){
	
} */
int CFMBaoanhaucan_dacapan::OnFromDateCheckValue(){
	return 0;
}
 
/*void CFMBaoanhaucan_dacapan::OnToDateChange(){
	
} */
/*void CFMBaoanhaucan_dacapan::OnToDateSetfocus(){
	
} */
/*void CFMBaoanhaucan_dacapan::OnToDateKillfocus(){
	
} */
int CFMBaoanhaucan_dacapan::OnToDateCheckValue(){
	return 0;
}
long CFMBaoanhaucan_dacapan::OnPackageListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndPackageList.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T("SELECT ss_code AS ID, ") \
		         _T("ss_desc AS Name ") \
		         _T("FROM sys_sel left join hms_fee_list ON (ss_code=hfl_feeid) ") \
				 _T("WHERE ss_id ='HMS_SERVICE_PACKAGE' and (hfl_subitem='VIP' OR ss_vndesc='GNNOLPB') %s ") \
				 _T("ORDER BY Ss_index"),
				 szWhere);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPackageList.AddItems(
			rs.GetValue(_T("ID")),			
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndPackageList.EndLoad(); 
	return nCount;
}
 
void CFMBaoanhaucan_dacapan::OnByDateSelect()
{
	m_szCondition = _T("hfe_date");
}
void CFMBaoanhaucan_dacapan::OnByDeptSelect()
{
	m_szCondition = _T("hfe_deptid");
}

void CFMBaoanhaucan_dacapan::OnInsuranceSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (!m_bInsurance)
	{
		for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
			m_wndObjectList.SetCheck(i, FALSE);
		return;
	}
	CRecord rs(&pMF->m_db);
	CString szSQL, szObjectID, tmpStr;
	int nItem = 0;
	szSQL.Format(_T("SELECT ho_id FROM hms_object WHERE ho_type = 'I' ORDER BY cast(ho_id as integer)"));
	rs.ExecSQL(szSQL);
	
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("ho_id"), szObjectID);
		for (int i = nItem; i < m_wndObjectList.GetItemCount(); i++)
		{
			tmpStr = m_wndObjectList.GetItemText(i, 0);
			_debug(_T("tmpStr:%s|szObjectID:%s"), tmpStr, szObjectID);
			if (szObjectID == tmpStr)
			{
				m_wndObjectList.SetCheck(i);
				nItem++;
				_debug(_T("Item break:%d"), nItem);
				break;
			}
			nItem++;
			_debug(_T("Item :%d"), nItem);
		}
		rs.MoveNext();
	}
}

void CFMBaoanhaucan_dacapan::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
	UpdateData(TRUE);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp;
	CString szSysDate;

	szSQL = GetQueryString();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHAN_THUGOI_CHITIET.RPT")))
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetCurrentDepartmentName());
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection *rptDetail;
	CString szOldLine, szNewLine;
	CString szObjectNames;
	szOldLine.Empty();
	szNewLine.Empty();
	double nGroupTotal = 0, nTotal = 0;
	double nCost;
	int nIndex = 1;

	szObjectNames.Empty();
	CStringArray strArr;
	bool bCheckServ = false, bCheckIns = false;

	strArr.Add(_T("\x64\x1ECB\x63h v\x1EE5"));
	strArr.Add(_T("\x42\x110 - \x43S - \x42H"));

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			tmpStr = m_wndObjectList.GetItemText(i, 2);

			if (tmpStr == _T("S"))
				bCheckServ = true;
			else
				bCheckIns = true;
		}
	}

	if (bCheckServ || bCheckIns)
	{
		if (bCheckServ)
			szObjectNames.AppendFormat(_T("%s"), strArr[0]);

		if (bCheckIns)
		{
			if (!szObjectNames.IsEmpty())
				szObjectNames += _T(", ");
			szObjectNames.AppendFormat(_T("%s"), strArr[1]);
		}

		TranslateString(_T("Object"), szTemp);
		tmpStr.Format(_T("%s %s"), szTemp, szObjectNames);
		rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	}

	if (!bCheckIns && !bCheckServ)
		rpt.GetReportHeader()->SetValue(_T("Object"), _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x111\x1ED1i t\x1B0\x1EE3ng"));

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewLine);
		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61 :"));
				FormatCurrency(nGroupTotal, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			szOldLine = szNewLine;
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("ObjectName"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		if (nGroupTotal == 0)
		{
			rs.GetValue(_T("dept"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
		}

		rs.GetValue(_T("receiptdate"), tmpStr);
		rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("hfe_desc"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("qty"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("incomeamount"), nCost);
		nGroupTotal += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		
		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
		rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61"));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTotal > 0)
	{
		FormatCurrency(nTotal, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Total"), tmpStr + _T(" \x111\x1ED3ng"));
		CString szMoney;
		tmpStr.Replace(_T("."), _T(""));
		MoneyToString(tmpStr, szMoney);
		rpt.GetReportFooter()->SetValue(_T("SumInWords"), szMoney + _T(" \x111\x1ED3ng"));
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
	return;

	CGuiMenu menu(this);
	
	menu.CreatePopupMenu();
	TranslateString(_T("Print Format 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Print Format 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrintFormat1();
			break;
		case 2:
			OnPrintFormat2();
			break;
	}
}
void CFMBaoanhaucan_dacapan::OnPrintFormat1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	UpdateData(TRUE);

	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp;
	CString szSysDate;

	szSQL = GetQueryString();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	//HF_DANHSACHBENHNHANTAMGUI_1CHUARAVIEN
	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHAN_CHITRALAIGOI.RPT")))
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetCurrentDepartmentName());
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection *rptDetail;
	CString szOldLine, szNewLine;
	CString szObjectNames;

	double nGroupTotal = 0, nTotal = 0;
	double nCost;
	int nIndex = 1;

	szObjectNames.Empty();
	CStringArray strArr;
	bool bCheckServ = false, bCheckIns = false;

	strArr.Add(_T("\x64\x1ECB\x63h v\x1EE5"));
	strArr.Add(_T("\x42\x110 - \x43S - \x42H"));

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			tmpStr = m_wndObjectList.GetItemText(i, 2);

			if (tmpStr == _T("S"))
				bCheckServ = true;
			else
				bCheckIns = true;
		}
	}

	if (bCheckServ || bCheckIns)
	{
		if (bCheckServ)
			szObjectNames.AppendFormat(_T("%s"), strArr[0]);

		if (bCheckIns)
		{
			if (!szObjectNames.IsEmpty())
				szObjectNames += _T(", ");
			szObjectNames.AppendFormat(_T("%s"), strArr[1]);
		}

		TranslateString(_T("Object"), szTemp);
		tmpStr.Format(_T("%s %s"), szTemp, szObjectNames);
		rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	}

	if (!bCheckIns && !bCheckServ)
		rpt.GetReportHeader()->SetValue(_T("Object"), _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x111\x1ED1i t\x1B0\x1EE3ng"));

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewLine);

		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				//TranslateString(_T("\x43\x1ED9ng kho\x61"), tmpStr);
				rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61"));
				FormatCurrency(nGroupTotal, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			/*rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rs.GetValue(_T("objname"), tmpStr);
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			rs.GetValue(_T("objid"), szObject);*/
			szOldLine = szNewLine;
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patient_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("record_no"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		if (nGroupTotal == 0)
		{
			rs.GetValue(_T("dept"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
		}

		rs.GetValue(_T("hfe_date"), tmpStr);
		rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("deposit_amount"), nCost);
		nGroupTotal += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		
		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		//TranslateString(_T("\x43\x1ED9ng kho\x61"), tmpStr);
		rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61"));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		//TranslateString(_T("T\x1ED5ng \x63\x1ED9ng"), tmpStr);
		rptDetail->SetValue(_T("TotalGroup"), _T("T\x1ED5ng \x63\x1ED9ng"));
		FormatCurrency(nTotal, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);

	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
}
 
void CFMBaoanhaucan_dacapan::OnPrintFormat2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	UpdateData(TRUE);

	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp;
	CString szSysDate;

	szSQL = GetQueryString1();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANTAMGUICHUARAVIEN.RPT")))
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetCurrentDepartmentName());
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection *rptDetail = NULL;
	CString szOldLine, szNewLine;
	CString szObjectNames;

	double nGroupTotal = 0, nTotal = 0;
	double nCost;
	int nIndex = 1;

	szObjectNames.Empty();
	CStringArray strArr;
	bool bCheckServ = false, bCheckIns = false;

	strArr.Add(_T("\x64\x1ECB\x63h v\x1EE5"));
	strArr.Add(_T("\x42\x110 - \x43S - \x42H"));

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			tmpStr = m_wndObjectList.GetItemText(i, 2);

			if (tmpStr == _T("S"))
				bCheckServ = true;
			else
				bCheckIns = true;
		}
	}

	if (bCheckServ || bCheckIns)
	{
		if (bCheckServ)
			szObjectNames.AppendFormat(_T("%s"), strArr[0]);

		if (bCheckIns)
		{
			if (!szObjectNames.IsEmpty())
				szObjectNames += _T(", ");
			szObjectNames.AppendFormat(_T("%s"), strArr[1]);
		}

		TranslateString(_T("Object"), szTemp);
		tmpStr.Format(_T("%s %s"), szTemp, szObjectNames);
		rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	}

	if (!bCheckIns && !bCheckServ)
		rpt.GetReportHeader()->SetValue(_T("Object"), _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x111\x1ED1i t\x1B0\x1EE3ng"));

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewLine);

		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				//TranslateString(_T("\x43\x1ED9ng kho\x61"), tmpStr);
				rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61"));
				FormatCurrency(nGroupTotal, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			rptDetail->SetValue(_T("GroupName"), szNewLine);
			szOldLine = szNewLine;
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patient_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("rank"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("doc_no"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("record_no"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("receipt_date"), tmpStr);
		rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("deposit_amount"), nCost);
		nGroupTotal += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		//TranslateString(_T("\x43\x1ED9ng kho\x61"), tmpStr);
		rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61"));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		//TranslateString(_T("T\x1ED5ng \x63\x1ED9ng"), tmpStr);
		rptDetail->SetValue(_T("TotalGroup"), _T("T\x1ED5ng \x63\x1ED9ng"));
		FormatCurrency(nTotal, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);

	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();	
}

void CFMBaoanhaucan_dacapan::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BAOAN_HAUCAN_DA_CAP_AN.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 13);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 13);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("khoa"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[11] > 0)
			{
				xls.SetCellText(1, nRow, _T("Cộng theo khoa:"), FMT_TEXT, true);

				for(int i = 7; i < 30; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		

		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("so_hoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("goi_dichvu"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_capan"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("so_bua_sang"), nTemp);		
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("so_bua_trua"), nTemp);		
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("so_bua_toi"), nTemp);		
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("so_bua_mien"), nTemp);		
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("thanh_tien"), nTemp);		
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[11] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng theo khoa:"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[11] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACH_BAOAN_HAUCAN_DA_CAP_AN2.xls"));
}
void CFMBaoanhaucan_dacapan::OnExportFormat1(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 18);
	xls.SetColumnWidth(2, 7);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 11);
	xls.SetColumnWidth(5, 11);

	int nRow = 1;
	int nCol = 0;
	int nIndex = 1;
	CString szOldLine, szNewLine;
	double nGroupTotal = 0, nTotal = 0;
	double nCost = 0;

	xls.SetRowHeight(6, 45);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellMergedColumns(6, 1, 4);
	xls.SetCellMergedColumns(6, 2, 4);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(6, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(6, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 6);
	xls.SetCellMergedColumns(nCol, nRow + 4, 6);

	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N T\x1EA0M G\x1EECI \x43H\x1AF\x41 R\x41 VI\x1EC6N"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Admission No"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Receipt Date"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 5, nRow + 5, _T("Ti\x1EC1n t\x1EA1m g\x1EEDi"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewLine);

		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal > 0)
			{
				nRow++;
				xls.SetCellText(nCol + 1, nRow, _T("\x43\x1ED9ng kho\x61"), FMT_TEXT | FMT_WRAPING, true);
				tmpStr.Format(_T("%.2lf"), nGroupTotal);
				xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			szOldLine = szNewLine;
		}

		nRow++;

		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("record_no"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		if (nGroupTotal == 0)
		{
			rs.GetValue(_T("dept"), tmpStr);
			xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		}
		tmpStr = CDate::Convert(rs.GetValue(_T("hfe_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		rs.GetValue(_T("deposit_amount"), nCost);
		nGroupTotal += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		nRow++;
		xls.SetCellText(nCol + 1, nRow, _T("\x43\x1ED9ng kho\x61"), FMT_TEXT | FMT_WRAPING, true);
		tmpStr.Format(_T("%.2lf"), nGroupTotal);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTotal > 0)
	{
		nRow++;
		xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_WRAPING, true);
		tmpStr.Format(_T("%.2lf"), nTotal);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DSBNTamGuiChuaRaVien.xls"));
}
 
void CFMBaoanhaucan_dacapan::OnExportFormat2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 18);
	xls.SetColumnWidth(2, 7);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 11);
	xls.SetColumnWidth(5, 11);
	xls.SetColumnWidth(6, 15);

	int nRow = 1;
	int nCol = 0;
	int nIndex = 1;
	CString szOldLine, szNewLine;
	double nGroupTotal = 0, nTotal = 0;
	double nCost = 0;

	xls.SetRowHeight(6, 45);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellMergedColumns(6, 1, 4);
	xls.SetCellMergedColumns(6, 2, 4);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(6, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(6, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 6);
	xls.SetCellMergedColumns(nCol, nRow + 4, 6);

	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N T\x1EA0M G\x1EECI \x43H\x1AF\x41 R\x41 VI\x1EC6N"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Rank"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Admission No"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Receipt Date"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 6, nRow + 5, _T("Ti\x1EC1n t\x1EA1m g\x1EEDi"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewLine);

		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal > 0)
			{
				nRow++;
				xls.SetCellText(nCol + 1, nRow, _T("\x43\x1ED9ng kho\x61"), FMT_TEXT | FMT_WRAPING, true);
				tmpStr.Format(_T("%.2lf"), nGroupTotal);
				xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
				nRow++;
			}
			xls.SetCellText(1, nRow, szNewLine, FMT_TEXT | FMT_WRAPING, true);
			szOldLine = szNewLine;
		}

		nRow++;

		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("rank"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("doc_no"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("record_no"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		tmpStr = CDate::Convert(rs.GetValue(_T("receipt_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		rs.GetValue(_T("deposit_amount"), nCost);
		nGroupTotal += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		nRow++;
		xls.SetCellText(nCol + 1, nRow, _T("\x43\x1ED9ng kho\x61"), FMT_TEXT | FMT_WRAPING, true);
		tmpStr.Format(_T("%.2lf"), nGroupTotal);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTotal > 0)
	{
		nRow++;
		xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_WRAPING, true);
		tmpStr.Format(_T("%.2lf"), nTotal);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DSBNTamGuiChuaRaVien.xls"));
}

void CFMBaoanhaucan_dacapan::OnObjectListDblClick(){
	
}
 
void CFMBaoanhaucan_dacapan::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMBaoanhaucan_dacapan::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMBaoanhaucan_dacapan::OnObjectListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	//szWhere.Format(_T(" AND ho_type IN('S') "));

	szSQL.Format(_T("SELECT ho_id AS ID, ") \
		         _T("ho_desc AS Name, ") \
				 _T("ho_type AS Type ") \
		         _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ") \
				 _T("ORDER BY cast(ho_id as integer)"),
				 szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad(); 
	return nCount;
}

void CFMBaoanhaucan_dacapan::OnDeptListDblClick(){
	
}
 
void CFMBaoanhaucan_dacapan::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMBaoanhaucan_dacapan::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMBaoanhaucan_dacapan::OnDeptListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;
}

CString CFMBaoanhaucan_dacapan::GetQueryString()
{
	CString szSQL, szWhere, szObjects, szDepts,szPackages, szOrderBy;
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndPackageList.GetItemCount(); i++)
	{
		if (m_wndPackageList.GetCheck(i))
		{
			if (!szPackages.IsEmpty())
				szPackages += _T(",");
			szPackages.AppendFormat(_T("'%s'"), m_wndPackageList.GetItemText(i, 0));
		}
	}

	if (!szPackages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and ex.hfel_itemid in(%s) "), szPackages);
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and ma_doituong in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and khoa in(%s) "), szDepts);
	}	

	szSQL.Format(_T(" SELECT so_hs,") \
	_T("     ho_ten,") \
	_T("     so_hoso,") \
	_T("     doituong,") \
	_T("     ma_doituong,") \
	_T("     khoa,") \
	//_T("     Listagg(CAST(hfel_desc AS VARCHAR2(1024)), ',') within GROUP  ( order by hfel_desc) AS goi_dichvu,") \//
	_T("     regexp_replace(Listagg(CAST(hfel_desc AS VARCHAR2(4000)), ',') within GROUP (ORDER BY hfel_desc),'([^,]+)(,\\1)*(,|$)', '\\1\\3') as goi_dichvu,") \
	_T("     ngay_capan,") \
	_T("     so_bua_sang,    ") \
	_T("     so_bua_trua,    ") \
	_T("     so_bua_toi,") \
	_T("     so_bua_mien,") \
	_T("     thanh_tien") \
	_T("     FROM hms_fee_extraline ex INNER JOIN ") \
	_T("     (") \
	_T(" SELECT ") \
	_T(" so_hs, ho_ten, so_hoso, doituong, ma_doituong, khoa,ngay_capan,") \
	_T(" SUM(so_bua_sang) as so_bua_sang,") \
	_T(" SUM(so_bua_trua) as so_bua_trua,") \
	_T(" SUM(so_bua_toi) as so_bua_toi,") \
	_T(" SUM(so_bua_mien) as so_bua_mien,") \
	_T(" SUM(tt_bua_sang+tt_bua_trua+tt_bua_toi+tt_bua_mien) as thanh_tien") \
	_T(" FROM") \
	_T("     (") \
	_T("     SELECT hfo_docno            AS so_hs,") \
	_T("     Get_patientname(hfo_docno) AS ho_ten,") \
	_T("     hfo_docno               AS so_hoso,") \
	_T("     ho_desc                 AS doituong,") \
	_T("     hfo_object_id           AS ma_doituong,") \
	_T("     hfo_deptid                 AS khoa,") \
	_T("     hfo_approvedate            AS ngay_capan,") \
	_T("     CASE WHEN hfol_type='S' AND hfol_groupid <> 'NN000' THEN hfol_qtyissue ELSE 0 END AS so_bua_sang,") \
	_T("     CASE WHEN hfol_type='S' AND hfol_groupid <> 'NN000' THEN hfol_unitprice ELSE 0 END AS tt_bua_sang,") \
	_T("     CASE WHEN hfol_type='T' THEN hfol_qtyissue ELSE 0 END AS so_bua_trua,") \
	_T("     CASE WHEN hfol_type='T' THEN hfol_unitprice ELSE 0 END AS tt_bua_trua,") \
	_T("     CASE WHEN hfol_type='C' THEN hfol_qtyissue ELSE 0 END AS so_bua_toi,") \
	_T("     CASE WHEN hfol_type='C' THEN hfol_unitprice ELSE 0 END AS tt_bua_toi,") \
	_T("     CASE WHEN hfol_type='S' AND hfol_groupid = 'NN000' THEN hfol_qtyissue ELSE 0 END AS so_bua_mien,") \
	_T("     CASE WHEN hfol_type='S' AND hfol_groupid = 'NN000' THEN hfol_unitprice ELSE 0 END AS tt_bua_mien") \
	_T("   FROM hms_feefood") \
	_T("   LEFT JOIN hms_feefoodline") \
	_T("   ON (hfo_docno=hfol_docno AND hfo_orderid = hfol_orderid )") \
	_T("   LEFT JOIN hms_foodordersheet ON (hfos_orderid=hfo_reforder_id AND hfos_depttype='HC')") \
	_T("   LEFT JOIN hms_object ON (ho_id=hfo_object_id)") \
	_T("   WHERE  hfo_orderstatus = 'A'") \
	_T("   AND hfe_refstatus  <> 'C'") \
	_T("   AND hfol_status    <> 'C'") \
	_T("   AND hfo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T("   AND NVL(HFO_PAYMENT, 'N') = 'Y'") \
	_T("     )GROUP BY so_hs, ho_ten, so_hoso, doituong, ma_doituong, khoa,ngay_capan") \
	_T("     ) ff ON  (ff.so_hs=ex.hfel_docno AND ex.hfel_itemid IN (SELECT ss_code ") \
	_T("   FROM sys_sel left join hms_fee_list ON (ss_code=hfl_feeid) WHERE ss_id ='HMS_SERVICE_PACKAGE' and (hfl_subitem='VIP' OR ss_vndesc='GNNOLPB')))") \
	_T("   LEFT JOIN hms_fee_extra e ON (ex.hfel_docno=e.hfe_docno and ex.hfel_fee_extra_id=e.hfe_fee_extra_id)") \
	_T("   WHERE  ngay_capan BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
	_T("   GROUP BY so_hs, ho_ten, so_hoso, doituong, ma_doituong, khoa,ngay_capan, so_bua_sang,  ") \
	_T("     so_bua_trua,    ") \
	_T("     so_bua_toi,") \
	_T("     so_bua_mien,") \
	_T("     thanh_tien") \
	_T("   ORDER BY khoa,so_hs  "), m_szFromDate, m_szToDate,m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"),szSQL);
	return szSQL;
}

CString CFMBaoanhaucan_dacapan::GetQueryString1()
{
		CString szSQL, szWhere, szObjects, szDepts;
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_objectid in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_deptid in(%s) "), szDepts);
	}

	szSQL.Format(_T(" SELECT   Get_patientname(hfe_docno) patient_name, ") \
				_T("           Get_departmentname(hfe_deptid) dept, ") \
				_T("		   hfe_docno doc_no,") \
				_T("		   (select ss_vndesc from sys_sel where ss_id = 'hms_rank' and ss_code = hd_rank) rank,") \
				_T("           hcr_recordno record_no, ") \
				_T("           hfe_date  receipt_date, ") \
				_T("           hfe_amount deposit_amount ") \
				_T(" FROM      hms_fee_deposit ") \
				_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hfe_docno ) ") \
				_T(" LEFT JOIN hms_doc ON (hcr_docno = hd_docno)") \
				_T(" WHERE     hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s") \
				_T("       AND (hcr_status <> 'T' OR (hcr_status = 'T' AND hfe_date < hcr_dischargedate))") \
				_T("       AND hfe_status = 'P' ") \
				_T(" ORDER     BY hfe_deptid, hfe_docno, hd_rank"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}

int CFMBaoanhaucan_dacapan::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (!m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMBaoanhaucan_dacapan::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, FALSE);
		}
	}
	return 0;
}


int CFMBaoanhaucan_dacapan::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMBaoanhaucan_dacapan::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, FALSE);
		}
	}
	return 0;
}