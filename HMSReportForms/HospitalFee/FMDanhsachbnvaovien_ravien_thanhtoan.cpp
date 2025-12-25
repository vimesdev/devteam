#include "stdafx.h"
#include "FMDanhsachbnvaovien_ravien_thanhtoan.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDanhsachbnvaovienravienthanhtoan* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDanhsachbnvaovienravienthanhtoan* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMDanhsachbnvaovienravienthanhtoan *pVw = (CFMDanhsachbnvaovienravienthanhtoan *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMDanhsachbnvaovienravienthanhtoan *pVw = (CFMDanhsachbnvaovienravienthanhtoan *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnAddFMDischargeDepositUnpaidReport();
} 
static int _OnEditFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnEditFMDischargeDepositUnpaidReport();
} 
static int _OnDeleteFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnDeleteFMDischargeDepositUnpaidReport();
} 
static int _OnSaveFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnSaveFMDischargeDepositUnpaidReport();
} 
static int _OnCancelFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnCancelFMDischargeDepositUnpaidReport();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMDanhsachbnvaovienravienthanhtoan*)pWnd)->OnDeptListUnCheckAll();
}

CFMDanhsachbnvaovienravienthanhtoan::CFMDanhsachbnvaovienravienthanhtoan(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CFMDanhsachbnvaovienravienthanhtoan::~CFMDanhsachbnvaovienravienthanhtoan()
{
}
void CFMDanhsachbnvaovienravienthanhtoan::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 550);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndPrint.Create(this, _T("&Print"), 265, 555, 345, 580);
	m_wndExport.Create(this, _T("&Export"), 350, 555, 430, 580);
	m_wndObjectList.Create(this,10, 90, 425, 310); 
	m_wndDeptList.Create(this,10, 315, 425, 545); 
}
void CFMDanhsachbnvaovienravienthanhtoan::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(75);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);


	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndObjectList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
}
void CFMDanhsachbnvaovienravienthanhtoan::OnSetWindowEvents()
{
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
	
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnObjectListLoadData();
	OnDeptListLoadData();

	/*CString tmpStr;
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		tmpStr = m_wndObjectList.GetItemText(i, 2);

		if (tmpStr == _T("S"))
			m_wndObjectList.SetCheck(i, TRUE);
	}*/
}
void CFMDanhsachbnvaovienravienthanhtoan::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);

}
void CFMDanhsachbnvaovienravienthanhtoan::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMDanhsachbnvaovienravienthanhtoan::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMDanhsachbnvaovienravienthanhtoan::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();

}
int CFMDanhsachbnvaovienravienthanhtoan::SetMode(int nMode){
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
/*void CFMDanhsachbnvaovienravienthanhtoan::OnYearChange(){
	
} */
/*void CFMDanhsachbnvaovienravienthanhtoan::OnYearSetfocus(){
	
} */
/*void CFMDanhsachbnvaovienravienthanhtoan::OnYearKillfocus(){
	
} */
int CFMDanhsachbnvaovienravienthanhtoan::OnYearCheckValue()
{
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
void CFMDanhsachbnvaovienravienthanhtoan::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDanhsachbnvaovienravienthanhtoan::OnReportPeriodSelendok()
{
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
/*void CFMDanhsachbnvaovienravienthanhtoan::OnReportPeriodSetfocus(){
	
}*/
/*void CFMDanhsachbnvaovienravienthanhtoan::OnReportPeriodKillfocus(){
	
}*/
long CFMDanhsachbnvaovienravienthanhtoan::OnReportPeriodLoadData()
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
/*void CFMDanhsachbnvaovienravienthanhtoan::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMDanhsachbnvaovienravienthanhtoan::OnFromDateChange(){
	
} */
/*void CFMDanhsachbnvaovienravienthanhtoan::OnFromDateSetfocus(){
	
} */
/*void CFMDanhsachbnvaovienravienthanhtoan::OnFromDateKillfocus(){
	
} */
int CFMDanhsachbnvaovienravienthanhtoan::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMDanhsachbnvaovienravienthanhtoan::OnToDateChange(){
	
} */
/*void CFMDanhsachbnvaovienravienthanhtoan::OnToDateSetfocus(){
	
} */
/*void CFMDanhsachbnvaovienravienthanhtoan::OnToDateKillfocus(){
	
} */
int CFMDanhsachbnvaovienravienthanhtoan::OnToDateCheckValue(){
	return 0;
} 
void CFMDanhsachbnvaovienravienthanhtoan::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDanhsachbnvaovienravienthanhtoan::OnClerkSelendok(){
	 
}
/*void CFMDanhsachbnvaovienravienthanhtoan::OnClerkSetfocus(){
	
}*/
/*void CFMDanhsachbnvaovienravienthanhtoan::OnClerkKillfocus(){
	
}*/
long CFMDanhsachbnvaovienravienthanhtoan::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	}
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid in('A','F') %s ORDER BY su_userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndClerk.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMDanhsachbnvaovienravienthanhtoan::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMDanhsachbnvaovienravienthanhtoan::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, nCount = 0;
	CString szSQL, tmpStr, szTemp, szReportName, szDate, szOldLev1, szNewLev1, szOldLev2, szNewLev2, szPos;
	long double nTotal[12], nGroupTotal1[12], nGroupTotal2[12];
	szReportName = _T("Reports\\HMS\\DSBNBODOICHINHSACHVAOVIEN.RPT");
	if (!rpt.Init(szReportName))
		return;
	//szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 12; i++)
	{
		nTotal[i] = 0;
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
	}
	TCHAR *dat[] = {_T("tam_gui"), _T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"),
					_T("phi_vattu"), _T("phi_mau"), _T("tong_cp"), _T("phi_an"), _T("chi_phikhac"), _T("tong_chiphi")};
	int nStart = 6, nSumPos = 12 - 1;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rs.GetValue(_T("dept_id"), szNewLev1);
		rs.GetValue(_T("obj_class"), szNewLev2);
		if (szNewLev2 != szOldLev2)
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i + nStart);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal2[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			if (nGroupTotal2[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal2[i]);
					szPos.Format(_T("s%d"), i + nStart);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal2[i];
					nGroupTotal2[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_CENTER);
				rptGroup->SetValue(_T("GroupName"), 
				szNewLev2==_T("0")?_T("\x42\x1EC6NH NH\xC2N \x42\x1ED8 \x110\x1ED8I"):_T("\x42\x1EC6NH NH\xC2N \x43H\xCDNH S\xC1\x43H- \x42\x1EA0N"));
			}
			szOldLev2 = szNewLev2;
			nIdx = 1;
		}
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i + nStart);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal2[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_LEFT);
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			}
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("work_place")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("admit_date")));
			for (int i = 0; i <= nSumPos; i++)
			{
				rs.GetValue(dat[i], nTmp);
				nGroupTotal1[i] += nTmp;
				szPos.Format(_T("%d"), i+nStart);
				tmpStr.Format(_T("%f"), nTmp);
				rptDetail->SetValue(szPos, tmpStr);
			}
		}
		rs.MoveNext();
	}
	if (nGroupTotal1[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+nStart);
			rptGroup->SetValue(szPos, tmpStr);
			nGroupTotal2[i]+= nGroupTotal1[i];
		}	
	}
	if (nGroupTotal2[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal2[i]);
			szPos.Format(_T("s%d"), i + nStart);
			rptGroup->SetValue(szPos, tmpStr);
			nTotal[i]+= nGroupTotal2[i];
		}
	}
	if (nTotal[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("s%d"), i + nStart);
			rptGroup->SetValue(szPos, tmpStr);
		}
		szTemp.Format(_T("%2.f"), nTotal[nSumPos]);
		MoneyToString(szTemp, tmpStr);
		tmpStr += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("AmountInWord"), tmpStr);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}

void CFMDanhsachbnvaovienravienthanhtoan::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export Danh sách bệnh nhân vào viện"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export Danh sách bệnh nhân ra viện"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("Export Danh sách bệnh nhân thanh toán"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);	

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect1();
			break;
		case 2:
			OnExportSelect2();
			break;
		case 3:
			OnExportSelect3();
			break;
	}
}
void CFMDanhsachbnvaovienravienthanhtoan::OnExportSelect1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere, szOldDept, szNewDept;
	CString tmpStr, m_szFacList, szDeptID;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	CellFormat df(&xls), cf(&xls), hf(&xls);
	if (!xls.Load(_T("Exports\\Template\\FM_DANHSACHVAOVIEN.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	
	
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioitinh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mathe"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("madkbd"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("ngayvaovien"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayravien"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaythanhtoan"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		
			
		nRow++;
		rs.MoveNext();
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\FM_DANHSACHVAOVIEN2.xls"));
	
}
void CFMDanhsachbnvaovienravienthanhtoan::OnExportSelect2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere, szOldDept, szNewDept;
	CString tmpStr, m_szFacList, szDeptID;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	CellFormat df(&xls), cf(&xls), hf(&xls);
	if (!xls.Load(_T("Exports\\Template\\FM_DANHSACHRAVIEN.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	
	
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioitinh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mathe"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("madkbd"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("ngayvaovien"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayravien"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaythanhtoan"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		
			
		nRow++;
		rs.MoveNext();
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\FM_DANHSACHRAVIEN2.xls"));
	
} 

void CFMDanhsachbnvaovienravienthanhtoan::OnExportSelect3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere, szOldDept, szNewDept;
	CString tmpStr, m_szFacList, szDeptID;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	CellFormat df(&xls), cf(&xls), hf(&xls);
	if (!xls.Load(_T("Exports\\Template\\FM_DANHSACHTHANHTOAN.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	
	
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioitinh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mathe"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("madkbd"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("ngayvaovien"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayravien"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaythanhtoan"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		
			
		nRow++;
		rs.MoveNext();
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\FM_DANHSACHTHANHTOAN2.xls"));
	
} 


void CFMDanhsachbnvaovienravienthanhtoan::OnObjectListDblClick()
{
	
} 
void CFMDanhsachbnvaovienravienthanhtoan::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMDanhsachbnvaovienravienthanhtoan::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMDanhsachbnvaovienravienthanhtoan::OnObjectListLoadData()
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
void CFMDanhsachbnvaovienravienthanhtoan::OnDeptListDblClick(){
	
} 
void CFMDanhsachbnvaovienravienthanhtoan::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMDanhsachbnvaovienravienthanhtoan::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMDanhsachbnvaovienravienthanhtoan::OnDeptListLoadData()
{
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
int CFMDanhsachbnvaovienravienthanhtoan::OnAddFMDischargeDepositUnpaidReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMDanhsachbnvaovienravienthanhtoan::OnEditFMDischargeDepositUnpaidReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMDanhsachbnvaovienravienthanhtoan::OnDeleteFMDischargeDepositUnpaidReport(){
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
 		OnCancelFMDischargeDepositUnpaidReport();
 	}
	return 0;
}
int CFMDanhsachbnvaovienravienthanhtoan::OnSaveFMDischargeDepositUnpaidReport(){
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
 		//OnFMDischargeDepositUnpaidReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMDanhsachbnvaovienravienthanhtoan::OnCancelFMDischargeDepositUnpaidReport(){
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
int CFMDanhsachbnvaovienravienthanhtoan::OnFMDischargeDepositUnpaidReportListLoadData(){
	return 0;
}

int CFMDanhsachbnvaovienravienthanhtoan::OnDeptListCheckAll()
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

int CFMDanhsachbnvaovienravienthanhtoan::OnDeptListUnCheckAll()
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


int CFMDanhsachbnvaovienravienthanhtoan::OnObjectListCheckAll()
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

int CFMDanhsachbnvaovienravienthanhtoan::OnObjectListUnCheckAll()
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

CString CFMDanhsachbnvaovienravienthanhtoan::GetQueryString1()
{
	CString szSQL, szWhere, szDepts, szObjects, szSubFee;

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
		/*szSQL.Format(_T(" SELECT * FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" luotdieutri,khoa,") \
		_T(" sohoso, hovaten, namsinh, gioitinh, mathe, madkbd, doituong,") \
		_T(" case when luotdieutri<=1 THEN ngayvaodautien else ngayvao end as ngayvaovien,") \
		_T(" case when luotdieutri<=1 THEN ngayracuoicung else ngayra end as ngayravien,") \
		_T(" ngaythanhtoan") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT(htr_treattime) as luotdieutri,") \
		_T(" htr_docno as sohoso,") \
		_T(" htr_deptid as khoa,") \
		_T(" GET_PATIENTNAME(htr_docno) as hovaten,") \
		_T(" date_part('year', hp_birthdate) as namsinh,") \
		_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
		_T(" hd_cardno as mathe,") \
		_T(" hc_regcode as madkbd,") \
		_T(" HMS_GETOBJECTNAME(hd_object) as doituong,") \
		_T(" to_char(HTR_ADMITDATE, 'DD/MM/YYYY') as ngayvao, ") \
		_T(" to_char(HTR_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T(" to_char(hcr_admitdate, 'DD/MM/YYYY') as ngayvaodautien,") \
		_T(" to_char(hcr_dischargedate, 'DD/MM/YYYY') as ngayracuoicung,") \
		_T(" to_char(hfe_date, 'DD/MM/YYYY') as ngaythanhtoan") \
		_T(" FROM HMS_TREATMENT_RECORD") \
		_T(" LEFT JOIN hms_doc ON (htr_docno = hd_docno)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (htr_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hd_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_fee_invoice ON (htr_docno = hfe_docno AND HTR_TREATTIME=HFE_TREATTIME AND hfe_status='P')") \
		_T(" WHERE htr_status in ('A', 'I', 'T') AND HTR_SUGGESTION <> 'M' AND") \
		_T(" HTR_ADMITDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ORDER BY HTR_TREATTIME") \
		_T(" )") \
		_T(" )") \
		_T(" GROUP BY luotdieutri, khoa, sohoso, hovaten, namsinh, gioitinh, mathe, madkbd, doituong,") \
		_T(" ngayvaovien, ngayravien, ngaythanhtoan") \
		_T(" ORDER BY sohoso"), m_szFromDate, m_szToDate, szWhere);*/

		szSQL.Format(_T(" WITH tbl1 AS") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" HTR_ADMITDATE as ngayvao,") \
		_T(" htr_docno as sohoso,") \
		_T(" HTR_TREATTIME as luotdieutri,") \
		_T(" htr_idx as landieutri,") \
		_T(" htr_status as trangthai") \
		_T(" from HMS_TREATMENT_RECORD ") \
		_T(" where 1=1") \
		_T(" ),") \
		_T(" tbl2 as") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" HTR_DISCHARGEDATE as ngayra,") \
		_T(" htr_docno as sohoso,") \
		_T(" HTR_TREATTIME as luotdieutri,") \
		_T(" htr_idx as landieutri,") \
		_T(" htr_status as trangthai") \
		_T(" from HMS_TREATMENT_RECORD ") \
		_T(" where 1=1") \
		_T(" )") \
		_T(" SELECT") \
		_T(" tbl1.luotdieutri as luotdieutri,") \
		_T(" tbl1.sohoso as sohoso,") \
		_T(" GET_PATIENTNAME(hd_docno) as hovaten,") \
		_T(" date_part('year', hp_birthdate) as namsinh,") \
		_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
		_T(" hd_cardno as mathe,") \
		_T(" hc_regcode as madkbd,") \
		_T(" HMS_GETOBJECTNAME(hd_object) as doituong,") \
		_T(" min(tbl1.ngayvao) as ngayvaovien,") \
		_T(" CASE WHEN tbl2.trangthai = 'T' THEN max(tbl2.ngayra) ELSE NULL END as ngayravien,") \
		_T(" hfe_date ngaythanhtoan") \
		_T(" FROM tbl1, tbl2") \
		_T(" LEFT JOIN hms_doc ON (sohoso = hd_docno)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (sohoso=hcr_docno)") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hd_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_fee_invoice ON (sohoso = hfe_docno AND luotdieutri=HFE_TREATTIME AND hfe_status='P')") \
		_T(" WHERE (tbl1.sohoso=tbl2.sohoso) ") \
		_T(" AND (tbl1.luotdieutri=tbl2.luotdieutri)") \
		_T(" AND (tbl1.landieutri=tbl2.landieutri)") \
		_T(" AND tbl1.trangthai in ('A', 'I', 'T')") \
		_T(" AND tbl1.ngayvao BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP BY tbl1.sohoso, tbl1.luotdieutri,tbl2.trangthai, ") \
		_T(" hfe_date, hd_docno, hp_birthdate, hp_sex, hd_cardno, hc_regcode, hd_object") \
		_T(" ORDER BY tbl1.sohoso, tbl1.luotdieutri"), m_szFromDate, m_szToDate, szWhere);


_fmsg(_T("%s"), szSQL);
	return szSQL;
}

void CFMDanhsachbnvaovienravienthanhtoan::OnMergeMultiCell(CExcel * xls, int arrCols[], int nArrSize, int nRow, CString szType, int nQty ){
	//OnMergeMultiCell(&xls, arrCols, 4, _T("R"), 2);	
	for (int i = 0; i < nArrSize; i++) 
	{
		if (szType.Find('C') != -1)
		{
			xls->SetCellMergedColumns(arrCols[i], nRow, nQty);
		}
		if (szType.Find('R') != -1)
		{
			xls->SetCellMergedRows(arrCols[i], nRow, nQty);
		}

	}
}
CString CFMDanhsachbnvaovienravienthanhtoan::GetQueryString2()
{
	CString szSQL, szWhere, szDepts, szObjects, szSubFee;

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
		/*szSQL.Format(_T(" SELECT * FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" luotdieutri,") \
		_T(" sohoso, hovaten, namsinh, gioitinh, mathe, madkbd, doituong,") \
		_T(" case when luotdieutri<=1 THEN ngayvaodautien else ngayvao end as ngayvaovien,") \
		_T(" case when luotdieutri<=1 THEN ngayracuoicung else ngayra end as ngayravien,") \
		_T(" ngaythanhtoan") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT(htr_treattime) as luotdieutri,") \
		_T(" htr_docno as sohoso,") \
		_T(" GET_PATIENTNAME(htr_docno) as hovaten,") \
		_T(" date_part('year', hp_birthdate) as namsinh,") \
		_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
		_T(" hd_cardno as mathe,") \
		_T(" hc_regcode as madkbd,") \
		_T(" HMS_GETOBJECTNAME(hd_object) as doituong,") \
		_T(" to_char(HTR_ADMITDATE, 'DD/MM/YYYY') as ngayvao, ") \
		_T(" to_char(HTR_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T(" to_char(hcr_admitdate, 'DD/MM/YYYY') as ngayvaodautien,") \
		_T(" to_char(hcr_dischargedate, 'DD/MM/YYYY') as ngayracuoicung,") \
		_T(" to_char(hfe_date, 'DD/MM/YYYY') as ngaythanhtoan") \
		_T(" FROM HMS_TREATMENT_RECORD") \
		_T(" LEFT JOIN hms_doc ON (htr_docno = hd_docno)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (htr_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hd_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_fee_invoice ON (htr_docno = hfe_docno AND HTR_TREATTIME=HFE_TREATTIME AND hfe_status='P')") \
		_T(" WHERE htr_status in ('T') AND HTR_SUGGESTION <> 'M' AND") \
		_T(" HTR_DISCHARGEDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ORDER BY HTR_TREATTIME") \
		_T(" )") \
		_T(" )") \
		_T(" GROUP BY luotdieutri, sohoso, hovaten, namsinh, gioitinh, mathe, madkbd, doituong,") \
		_T(" ngayvaovien, ngayravien, ngaythanhtoan") \
		_T(" ORDER BY sohoso"), m_szFromDate, m_szToDate, szWhere);*/

		szSQL.Format(_T(" WITH tbl1 AS") \
			_T(" (") \
			_T(" SELECT ") \
			_T(" HTR_ADMITDATE as ngayvao,") \
			_T(" htr_docno as sohoso,") \
			_T(" HTR_TREATTIME as luotdieutri,") \
			_T(" htr_idx as landieutri,") \
			_T(" htr_status as trangthai") \
			_T(" from HMS_TREATMENT_RECORD ") \
			_T(" where 1=1") \
			_T(" ),") \
			_T(" tbl2 as") \
			_T(" (") \
			_T(" SELECT ") \
			_T(" HTR_DISCHARGEDATE as ngayra,") \
			_T(" htr_docno as sohoso,") \
			_T(" HTR_TREATTIME as luotdieutri,") \
			_T(" htr_idx as landieutri,") \
			_T(" htr_status as trangthai") \
			_T(" from HMS_TREATMENT_RECORD ") \
			_T(" where 1=1") \
			_T(" )") \
			_T(" SELECT") \
			_T(" tbl1.luotdieutri as luotdieutri,") \
			_T(" tbl1.sohoso as sohoso,") \
			_T(" GET_PATIENTNAME(hd_docno) as hovaten,") \
			_T(" date_part('year', hp_birthdate) as namsinh,") \
			_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
			_T(" hd_cardno as mathe,") \
			_T(" hc_regcode as madkbd,") \
			_T(" HMS_GETOBJECTNAME(hd_object) as doituong,") \
			_T(" min(tbl1.ngayvao) as ngayvaovien,") \
			_T(" max(tbl2.ngayra) as ngayravien,") \
			_T(" hfe_date as ngaythanhtoan") \
			_T(" FROM tbl1, tbl2") \
			_T(" LEFT JOIN hms_doc ON (sohoso = hd_docno)") \
			_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (sohoso=hcr_docno)") \
			_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_card") \
			_T(" ON(hc_patientno=hd_patientno") \
			_T(" AND hc_idx     =hd_cardidx)") \
			_T(" LEFT JOIN hms_fee_invoice ON (sohoso = hfe_docno AND luotdieutri=HFE_TREATTIME AND hfe_status='P')") \
			_T(" WHERE (tbl1.sohoso=tbl2.sohoso) ") \
			_T(" AND (tbl1.luotdieutri=tbl2.luotdieutri)") \
			_T(" AND (tbl1.landieutri=tbl2.landieutri)") \
			_T(" AND tbl1.trangthai in ('T')") \
			_T(" AND tbl1.ngayvao BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" GROUP BY tbl1.sohoso, tbl1.luotdieutri,tbl2.trangthai, ") \
			_T(" hfe_date, hd_docno, hp_birthdate, hp_sex, hd_cardno, hc_regcode, hd_object") \
			_T(" ORDER BY tbl1.sohoso, tbl1.luotdieutri"), m_szFromDate, m_szToDate, szWhere);					

//_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMDanhsachbnvaovienravienthanhtoan::GetQueryString3()
{
	CString szSQL, szWhere, szDepts, szObjects, szSubFee;

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
		
	/*szSQL.Format(_T(" SELECT * FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" luotdieutri,khoa,") \
		_T(" sohoso, hovaten, namsinh, gioitinh, mathe, madkbd, doituong,") \
		_T(" case when luotdieutri<=1 THEN ngayvaodautien else ngayvao end as ngayvaovien,") \
		_T(" case when luotdieutri<=1 THEN ngayracuoicung else ngayra end as ngayravien,") \
		_T(" ngaythanhtoan") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT(htr_treattime) as luotdieutri,") \
		_T(" htr_docno as sohoso,") \
		_T(" HFE_DEPTID as khoa,") \
		_T(" GET_PATIENTNAME(htr_docno) as hovaten,") \
		_T(" date_part('year', hp_birthdate) as namsinh,") \
		_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
		_T(" hd_cardno as mathe,") \
		_T(" hc_regcode as madkbd,") \
		_T(" HMS_GETOBJECTNAME(hd_object) as doituong,") \
		_T(" to_char(HTR_ADMITDATE, 'DD/MM/YYYY') as ngayvao, ") \
		_T(" to_char(HTR_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T(" to_char(hcr_admitdate, 'DD/MM/YYYY') as ngayvaodautien,") \
		_T(" to_char(hcr_dischargedate, 'DD/MM/YYYY') as ngayracuoicung,") \
		_T(" to_char(hfe_date, 'DD/MM/YYYY') as ngaythanhtoan") \
		_T(" FROM HMS_TREATMENT_RECORD") \
		_T(" LEFT JOIN hms_doc ON (htr_docno = hd_docno)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (htr_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hd_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_fee_invoice ON (htr_docno = hfe_docno AND HTR_TREATTIME=HFE_TREATTIME AND hfe_status='P')") \
		_T(" WHERE hfe_status in ('P') AND hfe_class='I' AND HTR_SUGGESTION <> 'M' AND") \
		_T(" hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ORDER BY HTR_TREATTIME") \
		_T(" )") \
		_T(" )") \
		_T(" GROUP BY luotdieutri, khoa, sohoso, hovaten, namsinh, gioitinh, mathe, madkbd, doituong,") \
		_T(" ngayvaovien, ngayravien, ngaythanhtoan") \
		_T(" ORDER BY khoa"), m_szFromDate, m_szToDate, szWhere);*/
		
		szSQL.Format(_T(" WITH tbl1 AS") \
				_T(" (") \
				_T(" SELECT ") \
				_T(" HTR_ADMITDATE as ngayvao,") \
				_T(" htr_docno as sohoso,") \
				_T(" HTR_TREATTIME as luotdieutri,") \
				_T(" htr_idx as landieutri,") \
				_T(" htr_status as trangthai") \
				_T(" from HMS_TREATMENT_RECORD ") \
				_T(" where 1=1") \
				_T(" ),") \
				_T(" tbl2 as") \
				_T(" (") \
				_T(" SELECT ") \
				_T(" HTR_DISCHARGEDATE as ngayra,") \
				_T(" htr_docno as sohoso,") \
				_T(" HTR_TREATTIME as luotdieutri,") \
				_T(" htr_idx as landieutri,") \
				_T(" htr_status as trangthai") \
				_T(" from HMS_TREATMENT_RECORD ") \
				_T(" where 1=1") \
				_T(" )") \
				_T(" SELECT") \
				_T(" tbl1.luotdieutri as luotdieutri,") \
				_T(" tbl1.sohoso as sohoso,") \
				_T(" GET_PATIENTNAME(hd_docno) as hovaten,") \
				_T(" date_part('year', hp_birthdate) as namsinh,") \
				_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
				_T(" hd_cardno as mathe,") \
				_T(" hc_regcode as madkbd,") \
				_T(" HMS_GETOBJECTNAME(hd_object) as doituong,") \
				_T(" min(tbl1.ngayvao) as ngayvaovien,") \
				_T(" max(tbl2.ngayra) as ngayravien,") \
				_T(" hfe_date as ngaythanhtoan") \
				_T(" FROM tbl1, tbl2") \
				_T(" LEFT JOIN hms_doc ON (sohoso = hd_docno)") \
				_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (sohoso=hcr_docno)") \
				_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card") \
				_T(" ON(hc_patientno=hd_patientno") \
				_T(" AND hc_idx     =hd_cardidx)") \
				_T(" LEFT JOIN hms_fee_invoice ON (sohoso = hfe_docno AND luotdieutri=HFE_TREATTIME AND hfe_status='P')") \
				_T(" WHERE (tbl1.sohoso=tbl2.sohoso) ") \
				_T(" AND (tbl1.luotdieutri=tbl2.luotdieutri)") \
				_T(" AND (tbl1.landieutri=tbl2.landieutri)") \
				_T(" AND tbl1.trangthai in ('A','I','T')") \
				_T(" AND hfe_status = 'P'") \
				_T(" AND hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" GROUP BY tbl1.sohoso, tbl1.luotdieutri,tbl2.trangthai, ") \
				_T(" hfe_date, hd_docno, hp_birthdate, hp_sex, hd_cardno, hc_regcode, hd_object") \
				_T(" ORDER BY tbl1.sohoso, tbl1.luotdieutri"), m_szFromDate, m_szToDate, szWhere);		

_fmsg(_T("%s"), szSQL);
	return szSQL;
}