#include "stdafx.h"
#include "PACSTotalReportC8D.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSTotalReportC8D* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSTotalReportC8D* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSTotalReportC8D* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPACSTotalReportC8D *)pWnd)->OnObjectAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSTotalReportC8D *pVw = (CPACSTotalReportC8D *)pWnd;
	pVw->OnExportSelect();
}
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CPACSTotalReportC8D*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSTotalReportC8D*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
}
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D*)pWnd)->OnRoomListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CPACSTotalReportC8D*)pWnd)->OnListUnCheckAll();
}
CPACSTotalReportC8D::CPACSTotalReportC8D(CWnd *pParent){

	m_nDlgWidth = 475;
	m_nDlgHeight = 509;
	SetDefaultValues();
}
CPACSTotalReportC8D::~CPACSTotalReportC8D(){
}
void CPACSTotalReportC8D::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 465, 500);
	m_wndRoomInfo.Create(this, _T("Room List"), 10, 150, 460, 465);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 115, 55);
	m_wndYear.Create(this,120, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 245, 30, 335, 55);
	m_wndReportPeriod.Create(this,340, 30, 460, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,120, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 335, 85);
	m_wndToDate.Create(this,340, 60, 460, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 115, 115);
	m_wndDepartment.SetCheckBox(true);
	m_wndDepartment.Create(this,120, 90, 460, 115); 
	
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 115, 145);
	m_wndObject.SetCheckBox(true);
	m_wndObject.Create(this,120, 120, 460, 145);
	m_wndExport.Create(this, _T("&Export"), 365, 470, 465, 495);
	m_wndRoomList.Create(this,15, 175, 455, 460);
	m_wndRoomList.SetCheckBox(true);
}
void CPACSTotalReportC8D::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);	


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndRoomList.InsertColumn(2, _T("Dept"), CFMT_TEXT, 50);
}
void CPACSTotalReportC8D::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndRoomList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	//m_szDepartmentKey = pMF->GetDepartmentID();
	UpdateData(false);
	OnRoomListLoadData();
}
void CPACSTotalReportC8D::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CPACSTotalReportC8D::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szObjectKey.Empty();

}
int CPACSTotalReportC8D::SetMode(int nMode){
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
/*void CPACSTotalReportC8D::OnYearChange(){
	
} */
/*void CPACSTotalReportC8D::OnYearSetfocus(){
	
} */
/*void CPACSTotalReportC8D::OnYearKillfocus(){
	
} */
int CPACSTotalReportC8D::OnYearCheckValue(){
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
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}

	UpdateData(FALSE);
	return 0;
} 
void CPACSTotalReportC8D::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSTotalReportC8D::OnReportPeriodSelendok(){
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
/*void CPACSTotalReportC8D::OnReportPeriodSetfocus(){
	
}*/
/*void CPACSTotalReportC8D::OnReportPeriodKillfocus(){
	
}*/
long CPACSTotalReportC8D::OnReportPeriodLoadData(){
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
/*void CPACSTotalReportC8D::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSTotalReportC8D::OnFromDateChange(){
	
} */
/*void CPACSTotalReportC8D::OnFromDateSetfocus(){
	
} */
/*void CPACSTotalReportC8D::OnFromDateKillfocus(){
	
} */
int CPACSTotalReportC8D::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSTotalReportC8D::OnToDateChange(){
	
} */
/*void CPACSTotalReportC8D::OnToDateSetfocus(){
	
} */
/*void CPACSTotalReportC8D::OnToDateKillfocus(){
	
} */
int CPACSTotalReportC8D::OnToDateCheckValue(){
	return 0;
} 
void CPACSTotalReportC8D::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSTotalReportC8D::OnDepartmentSelendok(){
	 
}
/*void CPACSTotalReportC8D::OnDepartmentSetfocus(){
	
}*/
/*void CPACSTotalReportC8D::OnDepartmentKillfocus(){
	
}*/
long CPACSTotalReportC8D::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ") \
		         _T("WHERE sd_type IN ('KB', 'DT', 'HA') ORDER BY sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSTotalReportC8D::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSTotalReportC8D::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSTotalReportC8D::OnObjectSelendok(){
	 
}
/*void CPACSTotalReportC8D::OnObjectSetfocus(){
	
}*/
/*void CPACSTotalReportC8D::OnObjectKillfocus(){
	
}*/
long CPACSTotalReportC8D::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY cast(ho_id as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSTotalReportC8D::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSTotalReportC8D::OnRoomListDblClick(){
	
} 
void CPACSTotalReportC8D::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSTotalReportC8D::OnRoomListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSTotalReportC8D::OnRoomListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as ID, hrl_name as Name, hrl_deptid as Dept ") \
		_T("FROM hms_roomlist ") \
		_T("WHERE hrl_deptid in ('C8-D','A3-D','A3-A') AND hrl_section = 'HA' ") \
		_T("ORDER BY hrl_deptid,hrl_id"), m_szDepartmentKey);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
		rs.GetValue(_T("Dept")), NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
}
int CPACSTotalReportC8D::OnListCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (!m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, TRUE);
	}
	return 0;
}
int CPACSTotalReportC8D::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, FALSE);
	}
	return 0;
}
void CPACSTotalReportC8D::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0; 
	long double nTotal[30];
	for(int i = 1; i < 30; i++)
	{
		nTotal[i] = 0;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 12);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 8);

	xls.SetCellText(0, 0, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(7, 1, tmpStr, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellText(0, 3, _T("\x43H\x1EE4P"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 3, _T("QU\xC2N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 3, _T("\x42HQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 3, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 0, _T("S\x1ED0 LI\x1EC6U \x42\xC1O \x43\xC1O"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	xls.SetCellText(7, 3, _T("\x42HTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 3, _T("\x42HK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 3, _T("\x43 S\xC1\x43H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 3, _T("T\x45 <\x36T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 3, _T("\x44VYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 3, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 3, _T("KH\xC1\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 3, _T("\x43\x1ED8NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 4, _T("\x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, 4, _T("L\x1EA6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(3, 4, 0, 0);
	xls.SetMerge(3, 3, 1, 2);
	xls.SetMerge(3, 3, 3, 4);
	xls.SetMerge(3, 3, 5, 6);
	xls.SetMerge(0, 0, 7, 22);
	xls.SetMerge(1, 1, 7, 22);
	xls.SetMerge(3, 3, 7, 8);
	xls.SetMerge(3, 3, 9, 10);
	xls.SetMerge(3, 3, 11, 12);
	xls.SetMerge(3, 3, 13, 14);
	xls.SetMerge(3, 3, 15, 16);
	xls.SetMerge(3, 3, 17, 18);
	xls.SetMerge(3, 3, 19, 20);
	xls.SetMerge(3, 3, 21, 22);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	nRow = 5;
	nCol = 0;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("pdname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		for(int i = 1; i < 30; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("\x43\x1ED9ng"), FMT_TEXT, true);
	for(int i = 1; i < 30; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Solieubaocao.xls"));
} 

CString CPACSTotalReportC8D::GetQueryString(){
	CString szSQL, szWhere, szRoomID, szObjects, szDepts;
	
	szWhere.AppendFormat(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
		{
			if (!szRoomID.IsEmpty())
				szRoomID += _T(",");
			szRoomID.AppendFormat(_T("%d"), str2int(m_wndRoomList.GetItemText(i, 0)));
		}
	}
	if (!szRoomID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpcl_proomid IN(%s) "), szRoomID);
	}
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_object IN(%s)"), szObjects);
	}
	
	for (int i = 0; i < m_wndDepartment.GetCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDepartment.GetCheck(i, 0));
		}
	}
	
	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_pdeptid in (%s)"), szDepts);
	}

	szSQL.Format(_T(" SELECT pdname,") \
		_T("   SUM(quan) c1,") \
		_T("   SUM(quanqty) c2,") \
		_T("   SUM(bhqh) c3,") \
		_T("   SUM(bhqhqty) c4,") \
		_T("   SUM(bhqd) c5,") \
		_T("   SUM(bhqdqty) c6,") \
		_T("   SUM(bhtn) c7,") \
		_T("   SUM(bhtnqty) c8,") \
		_T("   SUM(bhk) c9,") \
		_T("   SUM(bhkqty) c10,") \
		_T("   SUM(csach) c11,") \
		_T("   SUM(csachqty) c12,") \
		_T("   SUM(te6t) c13,") \
		_T("   SUM(te6tqty) c14,") \
		_T("   SUM(dvyt) c15,") \
		_T("   SUM(dvytqty) c16,") \
		_T("   SUM(ban) c17,") \
		_T("   SUM(banqty) c18,") \
		_T("   SUM(khac) c19,") \
		_T("   SUM(khacqty) c20,") \
		_T("   SUM(quan+bhqh+bhqd+bhtn+bhk+csach+te6t+dvyt+ban+khac) c21,") \
		_T("   SUM(quanqty+bhqhqty+bhqdqty+bhtnqty+bhkqty+csachqty+te6tqty+dvytqty+banqty+khacqty) c22") \
		_T(" FROM") \
		_T("   (SELECT pdname,") \
		_T("     SUM(quan) quan,") \
		_T("     SUM(bhqh) bhqh,") \
		_T("     SUM(bhqd) bhqd,") \
		_T("     SUM(bhtn) bhtn,") \
		_T("     SUM(bhk) bhk,") \
		_T("     SUM(csach) csach,") \
		_T("     SUM(te6t) te6t,") \
		_T("     SUM(dvyt) dvyt,") \
		_T("     SUM(ban) ban,") \
		_T("     SUM(khac) khac,") \
		_T("     0 quanqty,") \
		_T("     0 bhqhqty,") \
		_T("     0 bhqdqty,") \
		_T("     0 bhtnqty,") \
		_T("     0 bhkqty,") \
		_T("     0 csachqty,") \
		_T("     0 te6tqty,") \
		_T("     0 dvytqty,") \
		_T("     0 banqty,") \
		_T("     0 khacqty") \
		_T("   FROM") \
		_T("     (SELECT DISTINCT") \
		_T("     hfl_name pdname,") \
		_T("       hpc_orderid orderid,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(1, 13)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END quan,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(2, 11)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END bhqh,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(10)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END bhqd,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(5)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END bhtn,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(4)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END bhk,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(3)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END csach,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(9)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END te6t,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(7)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END dvyt,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(8)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END ban,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(12)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END khac") \
		_T("     FROM hms_pacsorder") \
		_T("     LEFT JOIN hms_pacsorderline") \
		_T("     ON(hpcl_orderid=hpc_orderid)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid            = hpcl_itemid)") \
		_T("     WHERE hpc_status = 'T' %s") \
		_T("    ) Tbl") \
		_T("   GROUP BY pdname") \
		_T("  UNION ALL") \
		_T("   SELECT pdname,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     SUM(quanqty) quanqty,") \
		_T("     SUM(bhqhqty) bhqhqty,") \
		_T("     SUM(bhqdqty) bhqdqty,") \
		_T("     SUM(bhtnqty) bhtnqty,") \
		_T("     SUM(bhkqty) bhkqty,") \
		_T("     SUM(csachqty) csachqty,") \
		_T("     SUM(te6tqty) te6tqty,") \
		_T("     SUM(dvytqty) dvytqty,") \
		_T("     SUM(banqty) banqty,") \
		_T("     SUM(khacqty) khacqty") \
		_T("   FROM") \
		_T("     (SELECT hfl_name pdname,") \
		_T("       hpc_orderid orderid,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(1, 13)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END quanqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(2, 11)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END bhqhqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(10)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END bhqdqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(5)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END bhtnqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(4)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END bhkqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(3)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END csachqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(9)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END te6tqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(7)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END dvytqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(8)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END banqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(12)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END khacqty") \
		_T("     FROM hms_pacsorder") \
		_T("     LEFT JOIN hms_pacsorderline") \
		_T("     ON(hpcl_orderid=hpc_orderid)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid            = hpcl_itemid)") \
		_T("     WHERE hpc_status = 'T' %s") \
		_T("    ) Tbl2") \
		_T("   GROUP BY pdname") \
		_T("   ) Tbl3") \
		_T(" GROUP BY pdname") \
		_T(" ORDER BY pdname"), szWhere, szWhere);
	return szSQL;
}