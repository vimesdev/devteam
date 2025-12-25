#include "stdafx.h"
#include "FMDiscountList.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDiscountList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDiscountList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnClerkAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDiscountList* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnOrderByAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDiscountList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnStatusLoadData();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnDeptLoadData();
}
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMDiscountList *)pWnd)->OnObjectLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMDiscountList *)pWnd)->OnStatusAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMDiscountList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMDiscountList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMDiscountList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMDiscountList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMDiscountList *pVw = (CFMDiscountList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMDiscountList *pVw = (CFMDiscountList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMDiscountList *pVw = (CFMDiscountList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMDiscountList *pVw = (CFMDiscountList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnByDeptSelectFnc(CWnd *pWnd){
	  ((CFMDiscountList*)pWnd)->OnByDeptSelect();
}
static void _OnByItemSelectFnc(CWnd *pWnd){
	  ((CFMDiscountList*)pWnd)->OnByItemSelect();
}
CFMDiscountList::CFMDiscountList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMDiscountList::~CFMDiscountList(){
}
void CFMDiscountList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 215, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 300, 115);
	m_wndStatus.Create(this,305, 90, 425, 115); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 90, 145);
	m_wndDept.Create(this,95, 120, 215, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 220, 120, 300, 145);
	m_wndObject.Create(this,305, 120, 425, 145); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 150, 90, 175);
	m_wndOrderBy.Create(this,95, 150, 215, 175); 
	m_wndList.Create(this,10, 180, 425, 530); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndByDept.Create(this, _T("By Dept"), 220, 150, 300, 175);
	m_wndByItem.Create(this, _T("By Item"), 305, 150, 425, 175);

}
void CFMDiscountList::OnInitializeComponents(){
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



	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Posted"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 70);
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMDiscountList::OnSetWindowEvents(){
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
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndByDept.SetEvent(WE_CLICK, _OnByDeptSelectFnc);
	m_wndByItem.SetEvent(WE_CLICK, _OnByItemSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CFMDiscountList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Radio(pDX, m_wndByDept.GetDlgCtrlID(), m_nByDept);
	//DDX_Radio(pDX, m_wndByItem.GetDlgCtrlID(), m_nByItem);

}
void CFMDiscountList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_nByDept = 0;
	m_szDeptKey.Empty();
	m_szObjectKey.Empty();

}

int CFMDiscountList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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

/*void CFMDiscountList::OnYearChange(){
	
} */
/*void CFMDiscountList::OnYearSetfocus(){
	
} */
/*void CFMDiscountList::OnYearKillfocus(){
	
} */
int CFMDiscountList::OnYearCheckValue(){
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
			szTemp.Format(_T("%.2d/2d/4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/2d/4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}
	UpdateData(FALSE);
	return 0;
}
 
void CFMDiscountList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMDiscountList::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}

	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/4/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/7/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
	OnListLoadData();

}

/*void CFMDiscountList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMDiscountList::OnReportPeriodKillfocus(){
	
}*/
long CFMDiscountList::OnReportPeriodLoadData(){
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

/*void CFMDiscountList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMDiscountList::OnFromDateChange(){
	
} */
/*void CFMDiscountList::OnFromDateSetfocus(){
	
} */
/*void CFMDiscountList::OnFromDateKillfocus(){
	
} */
int CFMDiscountList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMDiscountList::OnToDateChange(){
	
} */
/*void CFMDiscountList::OnToDateSetfocus(){
	
} */
/*void CFMDiscountList::OnToDateKillfocus(){
	
} */
int CFMDiscountList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMDiscountList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMDiscountList::OnClerkSelendok(){
	 
}

/*void CFMDiscountList::OnClerkSetfocus(){
	
}*/
/*void CFMDiscountList::OnClerkKillfocus(){
	
}*/
long CFMDiscountList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMDiscountList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMDiscountList::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMDiscountList::OnOrderBySelendok(){
	 
}

/*void CFMDiscountList::OnOrderBySetfocus(){
	
}*/
/*void CFMDiscountList::OnOrderByKillfocus(){
	
}*/
long CFMDiscountList::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndOrderBy.AddItems(_T("01"), _T("S\x1EAFp \x78\x1EBFp th\x65o ng\x1B0\x1EDDi thu"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("S\x1EAFp \x78\x1EBFp th\x65o s\x1ED1 phi\x1EBFu thu"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrderBy.IsSearchKey() && !m_szOrderByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrderByKey
};
	m_wndOrderBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CFMDiscountList::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMDiscountList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMDiscountList::OnStatusSelendok(){
	 OnListLoadData();
}

/*void CFMDiscountList::OnStatusSetfocus(){
	
}*/
/*void CFMDiscountList::OnStatusKillfocus(){
	
}*/
long CFMDiscountList::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

long CFMDiscountList::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndObject.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);
	m_wndObject.AddItems(_T("02"), _T("\x42\x1EA3o hi\x1EC3m"), NULL);
	m_wndObject.AddItems(_T("03"), _T("\x43h\xEDnh s\xE1\x63h"), NULL);
	return 3;
}

long CFMDiscountList::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id = '%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN ('DT', 'KB') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CFMDiscountList::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMDiscountList::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

}
 
void CFMDiscountList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMDiscountList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMDiscountList::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	szWhere.Format(_T(" and FAC_LOCKED='Y' "));

	if(m_szStatusKey == _T("01"))
	{
		szWhere.AppendFormat(_T(" AND fac_invoicedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}

	}
	else if(m_szStatusKey == _T("02"))
	{
		szWhere.AppendFormat(_T(" and FAC_APPROVEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" and FAC_APPROVED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	} 
	else if(m_szStatusKey == _T("03") || m_szStatusKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" and FAC_POSTED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}

	//szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV'"));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
				 _T("FROM fa_cash WHERE fac_invoicetype = 'R' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	m_wndList.BeginLoad();
	CString szDate;
	while (!rs.IsEOF())
	{
		if(m_szStatusKey == _T("01"))
			rs.GetValue(_T("fac_invoicedate"), szDate);
		else if(m_szStatusKey == _T("02"))
		{
			rs.GetValue(_T("fac_approveddate"), szDate);
		}
		else
		{
			rs.GetValue(_T("fac_posteddate"), szDate);

		}

		m_wndList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("descr")),
			rs.GetValue(_T("stt")),
			szDate,
			rs.GetValue(_T("user_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMDiscountList::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
}
 
void CFMDiscountList::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}
 
void CFMDiscountList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szNewType, szOldType;
	CStringArray arrFieldName;
	long double nTotal[6], nGrpTotal[6];
	if (m_nByDept == 0)
		szReportName = _T("Reports\\HMS\\HF_BAOCAOMIENPHI-THEOKHOA.RPT");
	else if (m_nByDept == 1)
		szReportName = _T("Reports\\HMS\\HF_BAOCAOMIENPHI-THEODANHMUC.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL); 
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	arrFieldName.Add(_T("tien_noitru"));
	arrFieldName.Add(_T("tien_ngoaitru"));
	arrFieldName.Add(_T("tong_tien"));
	arrFieldName.Add(_T("qs_noitru"));
	arrFieldName.Add(_T("qs_ngoaitru"));
	arrFieldName.Add(_T("tong_qs"));
	int nSumPos = (int) arrFieldName.GetCount() - 1;
	int nStartPos = 3;
	
	for (int i = 0; i < 6; i++)
	{
		nGrpTotal[i] = 0;	
		nTotal[i] = 0;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_szObjectKey.IsEmpty()?_T("T\x1EA5t \x63\x1EA3"):m_wndObject.GetCurrent(1));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rs.GetValue(_T("hfe_typeindex"), szNewType);
		if (szNewType != szOldType)
		{
			if (nGrpTotal[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m:"));
					for (int i = 0; i <= nSumPos; i++)
					{
						szPos.Format(_T("s%d"), i+nStartPos);
						tmpStr.Format(_T("%f"), nGrpTotal[i]);
						rptGroup->SetValue(szPos, tmpStr);
						nGrpTotal[i] = 0;
					}
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), rs.GetValue(_T("type_name")));
			szOldType = szNewType;
		}
		rptDetail = rpt.AddDetail();
		//Theo danh muc?theo khoa
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("col_1")));
			rs.GetValue(_T("tien_noitru"), nTmp);
			nTotal[0] += nTmp;
			rptDetail->SetValue(_T("3"), double2str(nTmp));
			rs.GetValue(_T("tien_ngoaitru"), nTmp);
			nGrpTotal[1] += nTmp;
			nTotal[1] += nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("tong_tien"), nTmp);
			nGrpTotal[2] += nTmp;
			nTotal[2] += nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
			rs.GetValue(_T("qs_noitru"), nTmp);
			nGrpTotal[3] += nTmp;
			nTotal[3] += nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("qs_ngoaitru"), nTmp);
			nGrpTotal[4] += nTmp;
			nTotal[4] += nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("tong_qs"), nTmp);
			nGrpTotal[5] += nTmp;
			nTotal[5] += nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nGrpTotal[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m:"));
			for (int i = 0; i <= nSumPos; i++)
			{
				szPos.Format(_T("s%d"), i+nStartPos);
				tmpStr.Format(_T("%f"), nGrpTotal[i]);
				rptGroup->SetValue(szPos, tmpStr);
				nGrpTotal[i] = 0;
			}
		}
	}
	rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
	if (rptGroup)
		for (int i = 0; i < 6; i++)
		{
			szPos.Format(_T("s%d"), i+3);
			tmpStr.Format(_T("%f"), nTotal[i]);
			rptGroup->SetValue(szPos, tmpStr);
		}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();	
}
 
void CFMDiscountList::OnExportSelect(){
}
 
void CFMDiscountList::OnByDeptSelect(){
	
}
void CFMDiscountList::OnByItemSelect(){
	
}

CString CFMDiscountList::GetQueryString(){
	CString szSQL, szWhere, szReceiptStr;
	int nCount = 0;
	szReceiptStr = _T("-1");
	UpdateData(true);
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			if(!szReceiptStr.IsEmpty())
				szReceiptStr.AppendFormat(_T(","));
			szReceiptStr.AppendFormat(_T("%ld"), str2long(m_wndList.GetItemText(i,0)));
			nCount++;
		}
	}
	//_msg(_T("%d"), i); 
	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and d.hfe_cash_id in(%s) "), szReceiptStr);
	else
		szWhere = m_szWhere;
	/*for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}	 
	szWhere.Format(_T(" and d.hfe_cash_id in (%s)"), szReceiptStr);*/
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND d.hfe_deptid = '%s'"), m_szDeptKey);
	if (m_szObjectKey == _T("01"))
		szWhere.AppendFormat(_T(" AND ho_type = 'S'"));
	else if (m_szObjectKey == _T("02"))
		szWhere.AppendFormat(_T(" AND ho_type = 'I'"));
	else if (m_szObjectKey == _T("03"))
		szWhere.AppendFormat(_T(" AND ho_type IN ('P', 'D')"));
	if (m_nByDept == 0)
		szSQL.Format(_T(" SELECT col_1, ") \
					_T("		SUM(tien_noitru) tien_noitru, ") \
					_T("		SUM(tien_ngoaitru) tien_ngoaitru, ") \
					_T("		SUM(tong_tien) tong_tien, ") \
					_T("		SUM(qs_noitru) qs_noitru, ") \
					_T("		SUM(qs_ngoaitru) qs_ngoaitru, ") \
					_T("		SUM(tong_qs) tong_qs ") \
					_T(" FROM (") \
					_T(" SELECT d.hfe_deptid col_1, ") \
					_T("		CASE WHEN d.hfe_class = 'I' THEN d.hfe_amount ELSE 0 END tien_noitru, ") \
					_T("		CASE WHEN d.hfe_class <> 'I' THEN d.hfe_amount ELSE 0 END tien_ngoaitru, ") \
					_T("		d.hfe_amount tong_tien, ") \
					_T("		0 qs_noitru, ") \
					_T("		0 qs_ngoaitru, ") \
					_T("		0 tong_qs ") \
					_T(" FROM hms_fee_discount d ") \
					_T(" LEFT JOIN hms_object ON (d.hfe_objectid = ho_id)") \
					_T(" WHERE d.hfe_status <> 'C' %s") \
					_T(" UNION ALL") \
					_T(" SELECT hfe_deptid col_1, ") \
					_T("		0 tien_noitru, ") \
					_T("		0 tien_ngoaitru, ") \
					_T("		0 tong_tien, ") \
					_T("		CASE WHEN hfe_class = 'I' THEN 1 ELSE 0 END qs_noitru, ") \
					_T("		CASE WHEN hfe_class <> 'I' THEN 1 ELSE 0 END qs_ngoaitru, ") \
					_T("		1 tong_qs ") \
					_T(" FROM (") \
					_T(" SELECT distinct d.hfe_deptid, d.hfe_class, d.hfe_docno") \
					_T(" FROM hms_fee_discount d ") \
					_T(" LEFT JOIN hms_object ON (d.hfe_objectid = ho_id)") \
					_T(" WHERE d.hfe_status <> 'C' %s) tbl_qs) tbl") \
					_T(" GROUP BY col_1") \
					_T(" ORDER BY col_1"), szWhere, szWhere);
	else if (m_nByDept == 1)
		szSQL.Format(_T(" SELECT col_1, ") \
					_T("		hfe_typeindex,") \
					_T("		(select hft_name from hms_fee_type where hft_id = hfe_typeindex) type_name,") \
					_T("		hfe_groupid3,") \
					_T("		SUM(tien_noitru) tien_noitru, ") \
					_T("		SUM(tien_ngoaitru) tien_ngoaitru, ") \
					_T("		SUM(tong_tien) tong_tien, ") \
					_T("		SUM(qs_noitru) qs_noitru, ") \
					_T("		SUM(qs_ngoaitru) qs_ngoaitru, ") \
					_T("		SUM(tong_qs) tong_qs ") \
					_T(" FROM (") \
					_T(" SELECT CASE WHEN f.hfe_type = 'B' THEN f.hfe_deptid||'|P.'||f.hfe_orderid||'|'||f.hfe_desc ELSE f.hfe_desc END col_1, ") \
					_T("		CASE WHEN hfg_type_id IS NULL THEN 2000 ELSE hfg_type_id END AS hfe_typeindex,") \
					_T("		substr(f.hfe_group, 1, 3) hfe_groupid3,") \
					_T("		CASE WHEN d.hfe_class = 'I' THEN l.hfe_amount ELSE 0 END tien_noitru, ") \
					_T("		CASE WHEN d.hfe_class <> 'I' THEN l.hfe_amount ELSE 0 END tien_ngoaitru, ") \
					_T("		l.hfe_amount tong_tien, ") \
					_T("		0 qs_noitru, ") \
					_T("		0 qs_ngoaitru, ") \
					_T("		0 tong_qs ") \
					_T(" FROM hms_fee_discount d ") \
					_T(" LEFT JOIN hms_object ON (d.hfe_objectid = ho_id)") \
					_T(" LEFT JOIN hms_fee_discountline l ON (d.hfe_docno = l.hfe_docno AND d.hfe_invoiceno = l.hfe_invoiceno) ") \
					_T(" LEFT JOIN hms_fee f ON (f.hfe_fee_id = l.hfe_invoiceline_id)") \
					_T(" LEFT JOIN hms_fee_group ON (hfg_id = f.hfe_group)") \
					_T(" WHERE d.hfe_status <> 'C' %s") \
					_T(" UNION ALL") \
					_T(" SELECT hfe_desc col_1, ") \
					_T("		hfe_typeindex,") \
					_T("		hfe_groupid3,") \
					_T("		0 tien_noitru, ") \
					_T("		0 tien_ngoaitru, ") \
					_T("		0 tong_tien, ") \
					_T("		CASE WHEN hfe_class = 'I' THEN 1 ELSE 0 END qs_noitru, ") \
					_T("		CASE WHEN hfe_class <> 'I' THEN 1 ELSE 0 END qs_ngoaitru, ") \
					_T("		1 tong_qs ") \
					_T(" FROM (") \
					_T(" SELECT distinct (CASE WHEN f.hfe_type = 'B' THEN f.hfe_deptid||'|P.'||f.hfe_orderid||'|'||f.hfe_desc ELSE f.hfe_desc END) hfe_desc, ") \
					_T("		d.hfe_class, d.hfe_docno,") \
					_T("		CASE WHEN hfg_type_id IS NULL THEN 2000 ELSE hfg_type_id END AS hfe_typeindex,") \
					_T("		substr(f.hfe_group, 1, 3) hfe_groupid3") \
					_T(" FROM hms_fee_discount d ") \
					_T(" LEFT JOIN hms_object ON (d.hfe_objectid = ho_id)") \
					_T(" LEFT JOIN hms_fee_discountline l ON (d.hfe_docno = l.hfe_docno AND d.hfe_invoiceno = l.hfe_invoiceno) ") \
					_T(" LEFT JOIN hms_fee f ON (f.hfe_fee_id = l.hfe_invoiceline_id)") \
					_T(" LEFT JOIN hms_fee_group ON (hfg_id = f.hfe_group)") \
					_T(" WHERE d.hfe_status <> 'C' %s) tbl_qs) tbl") \
					_T(" GROUP BY hfe_typeindex, hfe_groupid3, col_1") \
					_T(" ORDER BY hfe_typeindex, hfe_groupid3, col_1"), szWhere, szWhere);
	return szSQL;
}