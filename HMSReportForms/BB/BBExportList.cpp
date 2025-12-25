#include "stdafx.h"
#include "BBExportList.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBBExportList *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBExportList* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBBExportList *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBBExportList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBBExportList *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBExportList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBBExportList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBExportList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBBExportList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBBExportList *)pWnd)->OnDepartmentAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBBExportList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBBExportList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBBExportList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	return ((CBBExportList*)pWnd)->OnListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CBBExportList*)pWnd)->OnListCheckAll();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CBBExportList*)pWnd)->OnListUncheckAll();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBBExportList *pVw = (CBBExportList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBBExportList *pVw = (CBBExportList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBBExportListFnc(CWnd *pWnd){
	 return ((CBBExportList*)pWnd)->OnAddBBExportList();
} 
static int _OnEditBBExportListFnc(CWnd *pWnd){
	 return ((CBBExportList*)pWnd)->OnEditBBExportList();
} 
static int _OnDeleteBBExportListFnc(CWnd *pWnd){
	 return ((CBBExportList*)pWnd)->OnDeleteBBExportList();
} 
static int _OnSaveBBExportListFnc(CWnd *pWnd){
	 return ((CBBExportList*)pWnd)->OnSaveBBExportList();
} 
static int _OnCancelBBExportListFnc(CWnd *pWnd){
	 return ((CBBExportList*)pWnd)->OnCancelBBExportList();
}
static void _OnUnPaidSelectFnc(CWnd *pWnd){
	 ((CBBExportList*)pWnd)->OnUnPaidSelect();
}
CBBExportList::CBBExportList(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBBExportList::~CBBExportList(){
}
void CBBExportList::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 455);
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 221, 30, 301, 55);
	m_wndYearLabel.Create(this, _T("Year"), 11, 30, 91, 55);
	m_wndYear.Create(this,96, 30, 216, 55); 
	m_wndPeriodReport.Create(this,306, 30, 426, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 60, 91, 85);
	m_wndFromDate.Create(this,96, 60, 216, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 221, 60, 301, 85);
	m_wndToDate.Create(this,306, 60, 426, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 11, 90, 91, 115);
	m_wndObject.Create(this,96, 90, 426, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 90, 145);
	m_wndDepartment.Create(this,95, 120, 425, 145); 
	m_wndExport.Create(this, _T("&Export"), 345, 460, 425, 485);
	m_wndList.Create(this,10, 150, 425, 450);
	m_wndList.SetCheckBox(true);
	//m_wndPrint.Create(this, _T("&Print"), 260, 160, 340, 185);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 455);
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 221, 30, 301, 55);
	m_wndYearLabel.Create(this, _T("Year"), 11, 30, 91, 55);
	m_wndYear.Create(this,96, 30, 216, 55); 
	m_wndPeriodReport.Create(this,306, 30, 426, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 60, 91, 85);
	m_wndFromDate.Create(this,96, 60, 216, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 221, 60, 301, 85);
	m_wndToDate.Create(this,306, 60, 426, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 11, 90, 91, 115);
	m_wndObject.Create(this,96, 90, 426, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 90, 145);
	m_wndDepartment.Create(this,95, 120, 425, 145); 
	m_wndList.Create(this,10, 150, 425, 450);
	m_wndList.SetCheckBox(true);
	m_wndExport.Create(this, _T("&Export"), 345, 460, 425, 485);
	m_wndUnPaid.Create(this, _T("UnPaidLabel"), 10, 460, 258, 485);
}
void CBBExportList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	//m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	//m_wndPeriodReport.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 150);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 150);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 100);
	m_wndList.InsertColumn(1, _T("\x43h\x1EBF Ph\x1EA9m"), CFMT_TEXT, 350);

}
void CBBExportList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndUnPaid.SetEvent(WE_CLICK, _OnUnPaidSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	OnListLoadData();

}
void CBBExportList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Check(pDX, m_wndUnPaid.GetDlgCtrlID(), m_bUnPaid);

}
void CBBExportList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBBExportList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CBBExportList::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_bUnPaid=FALSE;
}
int CBBExportList::SetMode(int nMode){
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
/*void CBBExportList::OnYearChange(){
	
} */
/*void CBBExportList::OnYearSetfocus(){
	
} */
/*void CBBExportList::OnYearKillfocus(){
	
} */
int CBBExportList::OnYearCheckValue(){
	return 0;
} 
void CBBExportList::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBExportList::OnPeriodReportSelendok(){
	CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szPeriodReportKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		date.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, date.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  date.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());		
	}	
	UpdateData(false);	
}
/*void CBBExportList::OnPeriodReportSetfocus(){
	
}*/
/*void CBBExportList::OnPeriodReportKillfocus(){
	
}*/
long CBBExportList::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szPeriodReportKey));
	};
	m_wndPeriodReport.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
} 
/*void CBBExportList::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CBBExportList::OnFromDateChange(){
	
} */
/*void CBBExportList::OnFromDateSetfocus(){
	
} */
/*void CBBExportList::OnFromDateKillfocus(){
	
} */
int CBBExportList::OnFromDateCheckValue(){
	return 0;
} 
/*void CBBExportList::OnToDateChange(){
	
} */
/*void CBBExportList::OnToDateSetfocus(){
	
} */
/*void CBBExportList::OnToDateKillfocus(){
	
} */
int CBBExportList::OnToDateCheckValue(){
	return 0;
} 
void CBBExportList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBExportList::OnObjectSelendok(){
	 
}
/*void CBBExportList::OnObjectSetfocus(){
	
}*/
/*void CBBExportList::OnObjectKillfocus(){
	
}*/
long CBBExportList::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey);
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mbo_id as id, mbo_desc as name FROM m_blood_object WHERE 1=1 %s ORDER BY mbo_line, mbo_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CBBExportList::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CBBExportList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBExportList::OnDepartmentSelendok(){
	 
}
/*void CBBExportList::OnDepartmentSetfocus(){
	
}*/
/*void CBBExportList::OnDepartmentKillfocus(){
	
}*/
long CBBExportList::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type in('KB','DT') order by id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBBExportList::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CBBExportList::OnUnPaidSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
int CBBExportList::OnListCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;	
}

int CBBExportList::OnListUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;	
}
void CBBExportList::OnListDblClick(){

} 
void CBBExportList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CBBExportList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CBBExportList::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select mp_product_id id ,mp_name name from m_product where mp_org_id='BB' Order by mp_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBBExportList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBExportList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 6);	xls.SetColumnWidth(4, 4);	xls.SetColumnWidth(5, 6);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 15);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 25);	xls.SetColumnWidth(10, 10);	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 6);	xls.SetColumnWidth(13, 4);	xls.SetColumnWidth(14, 4);	xls.SetColumnWidth(15, 6);	xls.SetColumnWidth(16, 15);	xls.SetColumnWidth(17, 10);	xls.SetColumnWidth(18, 10);	xls.SetColumnWidth(19, 15);	xls.SetColumnWidth(20, 15);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O TH\x45O \x44\xD5I M\xC1U \x58U\x1EA4T H\xC0NG NG\xC0Y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("M\xE3 t\xFAi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\xEAn ng\x1B0\x1EDDi \x63ho"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("S\x1ED1 \x58N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Nh\xF3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Th\x1EC3 t\xED\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Ng\xE0y l\x1EA5y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("Ng\xE0y ph\xE1t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("T\xEAn \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("S\x1ED1 \x64\xE2y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 4, _T("Nh\xF3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 4, _T("Th\x1EC3 t\xED\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(16, 4, _T("\x43h\x1EA9n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(17, 4, _T("Ng\x1B0\x1EDDi ph\xE1t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 4, _T("Ng\x1B0\x1EDDi l\x129nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(19, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(20, 4, _T("S\x1ED1 th\x1EBB \x42H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 19);	xls.SetMerge(3, 3, 0, 19);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("package_id"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("donorname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("testid"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("bloodtype"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("blooddate"), tmpStr);		xls.SetCellText(nCol+6, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("bloodaddress"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("orderdate"), tmpStr);		xls.SetCellText(nCol+8, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);		rs.GetValue(_T("patientname"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("tubenumber"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("dept"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("bloodtype"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("conclusion"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("approveby"), tmpStr);		tmpStr = GetNameUser(tmpStr);		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("dousage"), tmpStr);		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("objectname"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cardno"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCtheodoimauxuathangngay.xls"));
} 
int CBBExportList::OnAddBBExportList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBBExportList::OnEditBBExportList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBBExportList::OnDeleteBBExportList(){
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
 		OnCancelBBExportList();
 	}
	return 0;
}
int CBBExportList::OnSaveBBExportList(){
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
 		//OnBBExportListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBBExportList::OnCancelBBExportList(){
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
int CBBExportList::OnBBExportListListLoadData(){
	return 0;
}
CString CBBExportList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szList;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szList.IsEmpty())
			{
				szList += _T(", ");
			}
			szList.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if (!szList.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_id IN(%s)"), szList);

	if(!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mbd_blood_object = '%s'"), m_szObjectKey);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T("AND hpo_deptid = '%s'"), m_szDepartmentKey);

	if (m_bUnPaid)
		szWhere.AppendFormat(_T("AND NVL(accepted_fee, 'N') <> 'P'"));
		
	szSQL.Format(_T(" SELECT mbd_package_id AS package_id,") \
		_T("   mbd_donor_name AS donorname,") \
		_T("   mbd_test_id AS testid,") \
		_T("   mbd_blood_type AS bloodtype,") \
		_T("   SUBSTR(product_name, -5, 5)  AS product_name,") \
		_T("   mbd_date AS blooddate,") \
		_T("   (SELECT i.mbd_address FROM m_blood_donor i WHERE i.mbd_id = mbd_donor_id) AS bloodaddress,") \
		_T("   hpo_orderdate AS orderdate,") \
		_T("   get_patientname(hpo_docno) AS patientname,") \
		_T("   hpo_docno AS docno,") \
		_T("   mbd_tube_number AS tubenumber,") \
		_T("   hpo_deptid AS dept,") \
		_T("   hms_getagebydoc(hpo_docno) AS age,") \
		_T("   conclusion,") \
		_T("   UPPER(get_username(hpo_approveby)) AS approveby,") \
		_T("   hpol_dousage AS dousage,") \
		_T("   objectname,") \
		_T("   cardno") \
		_T(" FROM") \
		_T(" (SELECT hpol_orderid,") \
		_T("     hpol_product_item_id,") \
		_T("     hpo_orderdate,") \
		_T("     hpo_docno,") \
		_T("     hdf_acceptedfee as accepted_fee,") \
		_T("     hpo_deptid,") \
		_T("     hpo_approveby,") \
		_T("     hpo_orderstatus,") \
		_T("     CAST('' AS NVARCHAR2(254)) AS hpol_dousage,") \
		_T("     hd_conclusion AS conclusion,") \
		_T("     hms_getobjectname(hpo_object_id) AS objectname,") \
		_T("     hd_cardno AS cardno") \
		_T("    FROM hms_pharmaorder") \
		_T("   LEFT JOIN hms_pharmaorderline") \
		_T("   ON( hpo_orderid = hpol_orderid)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON( hpo_docno = hd_docno)") \
		_T("   WHERE hpo_org_id ='BB' AND hpo_orderstatus = 'A' ") \
		_T("   UNION ALL") \
		_T("   SELECT hpol_orderid,") \
		_T("     hpol_product_item_id,") \
		_T("     hpo_orderdate,") \
		_T("     hpo_docno,") \
		_T("     hcrf_acceptedfee as accepted_fee,") \
		_T("     hpo_deptid,") \
		_T("     hpo_approveby,") \
		_T("     hpo_orderstatus,") \
		_T("     hpol_dousage,") \
		_T("     htr_maindisease,") \
		_T("     hms_getobjectname(hpo_object_id) AS objectname,") \
		_T("     hd_cardno AS cardno") \
		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON( hpo_orderid = hpol_orderid)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON( hpo_docno = hd_docno)") \
		_T("   LEFT JOIN hms_clinical_record ON (hd_docno=hcr_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON( hpo_docno = htr_docno AND hpo_deptid = htr_deptid AND hpo_refidx = htr_idx )") \
		_T("   WHERE hpo_org_id ='BB' AND hpo_orderstatus = 'A'") \
		_T("   ) tbl") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id = hpol_product_item_id)") \
		_T(" LEFT JOIN m_blood_donation") \
		_T(" ON(mbd_product_item_id = hpol_product_item_id)") \
		_T(" WHERE hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" %s") \
		_T(" ORDER BY") \
		_T(" hpo_orderdate,") \
		_T(" mbd_package_id"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}
CString CBBExportList::GetNameUser(CString UserName, CString LastName ){
	CString szValue,tmpStr;
	int nIndex=0;
	bool flag= true;
	CString szFind;
	szFind=_T(" ");
	if(UserName.GetLength() >0)
	{
		for(int i=1;i < UserName.GetLength();i++)
		{	
			tmpStr=UserName.Right(i);
			if(tmpStr.Find(szFind) == 1 && flag== true && i>2)
			{
				nIndex=i;
				flag=false;	
			}
		}
	}
	if(nIndex >0)
	{
		szValue=UserName.Right(nIndex-1);
	}
	return szValue;
}