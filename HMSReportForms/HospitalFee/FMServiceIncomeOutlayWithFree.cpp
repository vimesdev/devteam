#include "stdafx.h"
#include "FMServiceIncomeOutlayWithFree.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeOutlayWithFree* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeOutlayWithFree* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeOutlayWithFree* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnStatusAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnDeptLoadData();
}
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeOutlayWithFree* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnOrderByAddNew();
}*/
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree *)pWnd)->OnObjectTypeLoadData();
}
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree *)pWnd)->OnObjectTypeSelendok();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeOutlayWithFree*)pWnd)->OnWithoutGeneralSelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeOutlayWithFree*)pWnd)->OnHitechMachineSelect();
}
static void _OnDetailSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeOutlayWithFree*)pWnd)->OnDetailSelect();
}
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMServiceIncomeOutlayWithFree *pVw = (CFMServiceIncomeOutlayWithFree *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMServiceIncomeOutlayWithFree *pVw = (CFMServiceIncomeOutlayWithFree *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServiceIncomeOutlayWithFree *pVw = (CFMServiceIncomeOutlayWithFree *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServiceIncomeOutlayWithFree *pVw = (CFMServiceIncomeOutlayWithFree *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeOutlayWithFree*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMServiceIncomeOutlayWithFree*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceIncomeOutlayWithFree*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeOutlayWithFree*)pWnd)->OnListDeleteItem();
} 
CFMServiceIncomeOutlayWithFree::CFMServiceIncomeOutlayWithFree(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMServiceIncomeOutlayWithFree::~CFMServiceIncomeOutlayWithFree(){
}
void CFMServiceIncomeOutlayWithFree::OnCreateComponents(){
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
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 220, 120, 300, 145);
	m_wndObjectType.Create(this,305, 120, 425, 145); 
	//m_wndOrderByLabel.Create(this, _T("Order By"), 220, 120, 300, 145);
	//m_wndOrderBy.Create(this,305, 120, 425, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 10, 505, 130, 530);
	m_wndDetail.Create(this, _T("Detail"), 135, 505, 255, 530);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndList.Create(this,10, 150, 425, 500); 
	m_wndWithoutGeneral.ShowWindow(SW_HIDE);
	m_wndOrderBy.EnableWindow(FALSE);

}
void CFMServiceIncomeOutlayWithFree::OnInitializeComponents(){
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

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMServiceIncomeOutlayWithFree::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndDetail.SetEvent(WE_CLICK, _OnDetailSelectFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
    UpdateData(FALSE);

}
void CFMServiceIncomeOutlayWithFree::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	//DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndDetail.GetDlgCtrlID(), m_bDetail);

}
void CFMServiceIncomeOutlayWithFree::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_szObjectTypeKey = _T("01");
	m_szDeptKey.Empty();
}

int CFMServiceIncomeOutlayWithFree::SetMode(int nMode){
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

/*void CFMServiceIncomeOutlayWithFree::OnYearChange(){
	
} */
/*void CFMServiceIncomeOutlayWithFree::OnYearSetfocus(){
	
} */
/*void CFMServiceIncomeOutlayWithFree::OnYearKillfocus(){
	
} */
int CFMServiceIncomeOutlayWithFree::OnYearCheckValue(){
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
 
void CFMServiceIncomeOutlayWithFree::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceIncomeOutlayWithFree::OnReportPeriodSelendok(){
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

/*void CFMServiceIncomeOutlayWithFree::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServiceIncomeOutlayWithFree::OnReportPeriodKillfocus(){
	
}*/
long CFMServiceIncomeOutlayWithFree::OnReportPeriodLoadData(){
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

/*void CFMServiceIncomeOutlayWithFree::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServiceIncomeOutlayWithFree::OnFromDateChange(){
	
} */
/*void CFMServiceIncomeOutlayWithFree::OnFromDateSetfocus(){
	
} */
/*void CFMServiceIncomeOutlayWithFree::OnFromDateKillfocus(){
	
} */
int CFMServiceIncomeOutlayWithFree::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMServiceIncomeOutlayWithFree::OnToDateChange(){
	
} */
/*void CFMServiceIncomeOutlayWithFree::OnToDateSetfocus(){
	
} */
/*void CFMServiceIncomeOutlayWithFree::OnToDateKillfocus(){
	
} */
int CFMServiceIncomeOutlayWithFree::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMServiceIncomeOutlayWithFree::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceIncomeOutlayWithFree::OnClerkSelendok(){
	 
}

/*void CFMServiceIncomeOutlayWithFree::OnClerkSetfocus(){
	
}*/
/*void CFMServiceIncomeOutlayWithFree::OnClerkKillfocus(){
	
}*/
long CFMServiceIncomeOutlayWithFree::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServiceIncomeOutlayWithFree::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeOutlayWithFree::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceIncomeOutlayWithFree::OnStatusSelendok(){
	 OnListLoadData();
}

/*void CFMServiceIncomeOutlayWithFree::OnStatusSetfocus(){
	
}*/
/*void CFMServiceIncomeOutlayWithFree::OnStatusKillfocus(){
	
}*/
long CFMServiceIncomeOutlayWithFree::OnStatusLoadData(){
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

long CFMServiceIncomeOutlayWithFree::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
	 szWhere.Format(_T(" and sd_id = '%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;	
}

/*void CFMServiceIncomeOutlayWithFree::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeOutlayWithFree::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceIncomeOutlayWithFree::OnOrderBySelendok(){
	 
}

/*void CFMServiceIncomeOutlayWithFree::OnOrderBySetfocus(){
	
}*/
/*void CFMServiceIncomeOutlayWithFree::OnOrderByKillfocus(){
	
}*/
long CFMServiceIncomeOutlayWithFree::OnOrderByLoadData(){
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

long CFMServiceIncomeOutlayWithFree::OnObjectTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndObjectType.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);
	m_wndObjectType.AddItems(_T("02"), _T("\x42\x1EA3o hi\x1EC3m"), NULL);
	m_wndObjectType.AddItems(_T("03"), _T("Qu\xE2n - \x43h\xEDnh s\xE1\x63h"), NULL);
	return 3;
}

void CFMServiceIncomeOutlayWithFree::OnObjectTypeSelendok(){
	OnListLoadData();	
}

/*void CFMServiceIncomeOutlayWithFree::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMServiceIncomeOutlayWithFree::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

	void CFMServiceIncomeOutlayWithFree::OnHitechMachineSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMServiceIncomeOutlayWithFree::OnDetailSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServiceIncomeOutlayWithFree::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
}
 
void CFMServiceIncomeOutlayWithFree::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}
 
void CFMServiceIncomeOutlayWithFree::OnPrintSelect(){
	//_msg(_T("%s"), GetQueryString());
	//return;
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CStringArray arrFeeType;
	CString szSQL, tmpStr, szReportName, szDate, szPos;
	long double nTotal[6];
	for (int i = 0; i < 6; i++)
	{
		nTotal[i] = 0;
	}
	if (m_bHitechMachine)
	{
		if (m_bDetail)
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHI-MAYGIATRICAODICHVUYTE-THEODANHMUC.RPT");
		else
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHI-MAYGIATRICAODICHVUYTE-THEOKHOA.RPT");
	}
	else
	{
		if (m_bDetail)
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHIDICHVUYTE-THEODANHMUC.RPT");
		else
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHIDICHVUYTE-THEOKHOA-MG.RPT");
	}
	if (m_szObjectTypeKey == _T("02"))
		szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHIDICHVUYTE-THEOKHOA-BH.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	arrFeeType.Add(_T("Ti\x1EC1n kh\xE1m"));
	arrFeeType.Add(_T("Ti\x1EC1n gi\x1B0\x1EDDng"));
	arrFeeType.Add(_T("Ti\x1EC1n PTTT"));
	arrFeeType.Add(_T("Ti\x1EC1n \x58N"));
	arrFeeType.Add(_T("Ti\x1EC1n thu\x1ED1\x63"));
	arrFeeType.Add(_T("Ti\x1EC1n v\x1EADt t\x1B0"));
	arrFeeType.Add(_T("Ti\x1EC1n \x103n"));
	arrFeeType.Add(_T("Thu kh\xE1\x63"));
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
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			if (m_bDetail)
				rptDetail->SetValue(_T("2"), arrFeeType.GetAt(str2int(rs.GetValue(_T("nhom_phi")))));
			else
				rptDetail->SetValue(_T("2"), rs.GetValue(_T("khoa_thuchien")));
			rs.GetValue(_T("tien_nt"), nTmp);
			nTotal[0]+= nTmp;
			rptDetail->SetValue(_T("3"), double2str(nTmp));
			rs.GetValue(_T("tien_ngt"), nTmp);
			nTotal[1]+= nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("tong_tien"), nTmp);
			nTotal[2]+= nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
			rs.GetValue(_T("qs_nt"), nTmp);
			nTotal[3]+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("qs_ngt"), nTmp);
			nTotal[4]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("tong_qs"), nTmp);
			nTotal[5]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nTotal[5] > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptDetail)
		{
			for (int i = 0 ; i < 6; i++)
			{
				szPos.Format(_T("s%d"), i+3);
				tmpStr.Format(_T("%f"), nTotal[i]);
				rptDetail->SetValue(szPos, tmpStr);
			}
		}
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}
 
void CFMServiceIncomeOutlayWithFree::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	double nTotal[6], nTmp = 0;
	for (int i = 0; i < 6; i++)
	{
		nTotal[i] = 0;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 16);
	xls.SetColumnWidth(3, 16);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 16);
	xls.SetColumnWidth(7, 16);

	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	if(m_szObjectTypeKey == _T("01"))
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: \x44\x1ECA\x43H V\x1EE4 Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	else if(m_szObjectTypeKey == _T("02"))
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: \x42\x1EA2O HI\x1EC2M Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	else if(m_szObjectTypeKey == _T("03"))
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: QU\xC2N - \x43H\xCDNH S\xC1\x43H Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	else
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: T\x1EA4T \x43\x1EA2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 0, _T("M\x1EABu \x62i\x1EC3u \x31\x36"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O THU \x43HI \x44\x1ECA\x43H V\x1EE4 Y T\x1EBE TH\x45O KHO\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);
	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("T\x1ED5ng h\x1EE3p ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 7, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("T\x1ED5ng h\x1EE3p qu\xE2n s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(2, 2, 0, 1);
	xls.SetMerge(3, 3, 0, 7);
	xls.SetMerge(4, 4, 0, 7);
	xls.SetMerge(5, 5, 0, 7);
	xls.SetMerge(6, 7, 0, 0);
	xls.SetMerge(6, 7, 1, 1);
	xls.SetMerge(6, 6, 2, 4);
	xls.SetMerge(0, 0, 4, 7);
	xls.SetMerge(1, 1, 4, 7);
	xls.SetMerge(6, 6, 5, 7);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		if(m_bDetail)
			rs.GetValue(_T("nhom_phi"), tmpStr);
		else
			rs.GetValue(_T("khoa_thuchien"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tien_nt"), nTmp);
		nTotal[0]+= nTmp;
		xls.SetCellText(nCol+2, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tien_ngt"), nTmp);
		nTotal[1]+= nTmp;
		xls.SetCellText(nCol+3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tong_tien"), nTmp);
		nTotal[2]+= nTmp;
		xls.SetCellText(nCol+4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("qs_nt"), nTmp);
		nTotal[3]+= nTmp;
		xls.SetCellText(nCol+5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("qs_ngt"), nTmp);
		nTotal[4]+= nTmp;
		xls.SetCellText(nCol+6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tong_qs"), nTmp);
		nTotal[5]+= nTmp;
		xls.SetCellText(nCol+7, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	if (nTotal[5] > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), FMT_TEXT, true);
		for (int i = 0 ; i < 6; i++)
		{
			xls.SetCellText(nCol+2+i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
	}

	nRow++;
	nRow++;
	nRow++;

	tmpStr = pMF->GetSysDate();
	tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true);

	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("NG\x1AF\x1EDCI L\x1EACP \x42\x1EA2NG"), FMT_TEXT, true);
	xls.SetCellText(nCol+3, nRow, _T("TR\x1AF\x1EDENG PH\xD2NG T\xC0I \x43H\xCDNH"), FMT_TEXT, true);
	xls.SetCellText(nCol+6, nRow, _T("GI\xC1M \x110\x1ED0\x43 \x42\x1EC6NH VI\x1EC6N"), FMT_TEXT, true);

	EndWaitCursor();
	if(m_szObjectTypeKey == _T("01"))
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE_DV.xls"));
	else if(m_szObjectTypeKey == _T("02"))
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE_BH.xls"));
	else if(m_szObjectTypeKey == _T("03"))
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE_CS.xls"));
	else
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE.xls"));
}
 
void CFMServiceIncomeOutlayWithFree::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

}
 
void CFMServiceIncomeOutlayWithFree::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMServiceIncomeOutlayWithFree::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMServiceIncomeOutlayWithFree::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szObjectID;

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
	if (m_szObjectTypeKey == _T("01"))
		szObjectID = _T("DV");
	else if (m_szObjectTypeKey == _T("02"))
		szObjectID = _T("BH");
	else if (m_szObjectTypeKey == _T("03"))
		szObjectID = _T("QU");
	if (!szObjectID.IsEmpty())
		szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = '%s'"), szObjectID);

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') AND Fac_Cashbook_Id <> 'DVYC' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
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

//CString CFMServiceIncomeOutlayWithFree::GetQueryString(){
//	CString szSQL, szWhere, szInnerWhere;
//	CString szReceiptStr;
//	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
//	{
//		if (m_wndList.GetCheck(i))
//		{
//			if (!szReceiptStr.IsEmpty())
//				szReceiptStr += _T(", ");
//			szReceiptStr.AppendFormat(_T(" %s"), m_wndList.GetItemText(i, 0));
//		}
//	}
//
//	//szWhere.Format(_T(" AND hfe_cash_id in(%s)"), szReceiptStr);
//	if (!m_szDeptKey.IsEmpty())
//		szWhere.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
//	if (m_bHitechMachine)
//		szWhere.AppendFormat(_T(" AND hfl_hitechmachine = 'Y'"));
//	szWhere.AppendFormat(_T(" AND NVL(hfe_category, 'N') NOT IN( 'Y' )"));
//	if (m_bDetail)
//	{
//		szSQL.Format(_T(" SELECT tbl_cost.nhom_phi,  tien_nt, tien_ngt, tong_tien, qs_nt, qs_ngt, tong_qs") \
//		_T(" FROM      (SELECT nhom_phi, ") \
//		_T("                   SUM(CASE WHEN hfe_class <> 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_ngt, ") \
//		_T("                   SUM(CASE WHEN hfe_class = 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_nt, ") \
//		_T("				   count(*) tong_qs") \
//		_T("            FROM   (SELECT    DISTINCT tbl0.hfe_class, ") \
//		_T("                                       nhom_phi, ") \
//		_T("                                       tbl0.hfe_docno ") \
//		_T("                    FROM      (SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("										 f.hfe_itemid,") \
//		_T("                                         CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("                                         CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                               LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ('D', 'M', 'R') AND f.hfe_status = 'P'") \
//		_T("                               UNION ALL ") \
//		_T("                               SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("									     f.hfe_itemid,") \
//		_T("                                         Cast(Decode(product_org_id, 'PM', 'KD', ") \
//		_T("                                                           'MA', 'C10', 'GL') AS NVARCHAR2(3)) khoa_thuchien, ") \
//		_T("                                         Decode('PM', product_org_id, 4, ") \
//		_T("                                                           5) nhom_phi, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN m_productitem_view_vp ON ( product_item_id = hfe_itemid ) ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_status = 'P' AND f.hfe_category in ('N','BQP') ") \
//		_T("							) tbl0 ") \
//		_T("					LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl0.hfe_itemid as nvarchar2(15))) ") \
//		_T("                    WHERE     1=1 %s) tbl_distinct ") \
//		_T("            GROUP  BY nhom_phi ") \
//		_T("            ORDER  BY nhom_phi) tbl_qs ") \
//		_T(" RIGHT JOIN (SELECT     nhom_phi, ") \
//		_T("                       SUM(tien_ngt) tien_ngt, ") \
//		_T("                       SUM(tien_nt) tien_nt, ") \
//		_T("                       SUM(tong_tien) tong_tien ") \
//		_T("            FROM       ") \
//		_T("            (SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("                                 CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f") \
//		_T("                       LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("                       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ( 'D', 'M', 'R' ) AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
//		_T("					   UNION ALL") \
//		_T("					   SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 Cast(Decode('PM', mp_org_id, 'KD', ") \
//		_T("                                                           'C10') AS NVARCHAR2(3)) khoa_thuchien, ") \
//		_T("                                 Decode('PM', mp_org_id, 4, ") \
//		_T("                                                           5) nhom_phi, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f ") \
//		_T("                       LEFT JOIN m_product_item ON ( mpi_product_item_id = hfe_itemid ) ") \
//		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
//		_T("                       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P' AND f.hfe_type <> 'V' ") \
//		_T("					) tbl1  ") \
//		_T("			LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl1.hfe_itemid as nvarchar2(15))) ") \
//		_T("            WHERE      1=1 %s ") \
//		_T("            GROUP      BY nhom_phi ") \
//		_T("            ORDER      BY nhom_phi) tbl_cost ON ( tbl_qs.nhom_phi = tbl_cost.nhom_phi) "), szReceiptStr, szReceiptStr, szWhere, szReceiptStr, szReceiptStr, szWhere);
//	}
//	else
//	{
//		szSQL.Format(_T(" SELECT tbl_cost.khoa_thuchien,  tien_nt, tien_ngt, tong_tien, qs_nt, qs_ngt, tong_qs") \
//		_T(" FROM      (SELECT khoa_thuchien, ") \
//		_T("                   SUM(CASE WHEN hfe_class <> 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_ngt, ") \
//		_T("                   SUM(CASE WHEN hfe_class = 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_nt, ") \
//		_T("				   count(*) tong_qs") \
//		_T("            FROM   (SELECT    DISTINCT tbl0.hfe_class, ") \
//		_T("                                       khoa_thuchien, ") \
//		_T("                                       tbl0.hfe_docno ") \
//		_T("                    FROM      (SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("										 f.hfe_itemid,") \
//		_T("                               CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                               LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ('D', 'M', 'R') AND f.hfe_status = 'P' ") \
//		_T("                               UNION ALL ") \
//		_T("                               SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("									     f.hfe_itemid,") \
//		_T("                                         Cast(Decode(product_org_id, 'PM', 'KD', ") \
//		_T("                                                           'MA', 'C10', 'GL') AS NVARCHAR2(3)) khoa_thuchien, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN m_productitem_view_vp ON ( product_item_id = hfe_itemid ) ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P'  ") \
//		_T("							) tbl0 ") \
//		_T("					LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl0.hfe_itemid as nvarchar2(15))) ") \
//		_T("                    WHERE     1=1 %s) tbl_distinct ") \
//		_T("            GROUP  BY khoa_thuchien ") \
//		_T("            ORDER  BY khoa_thuchien) tbl_qs ") \
//		_T(" RIGHT JOIN (SELECT     khoa_thuchien, ") \
//		_T("                       SUM(tien_ngt) tien_ngt, ") \
//		_T("                       SUM(tien_nt) tien_nt, ") \
//		_T("                       SUM(tong_tien) tong_tien ") \
//		_T("            FROM       ") \
//		_T("            (SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f") \
//		_T("                       LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("					   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ( 'D', 'M', 'R' ) AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
//		_T("					   UNION ALL") \
//		_T("					   SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 Cast(Decode(mp_org_id, 'PM', 'KD', ") \
//		_T("                                                        'MA', 'C10', ") \
//		_T("                                                        'GL') AS NVARCHAR2(15)) khoa_thuchien, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f ") \
//		_T("                       LEFT JOIN m_product_item ON ( mpi_product_item_id = hfe_itemid ) ") \
//		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
//		_T("					   LEFT JOIN hms_fee_invoice_view_v2 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
//		_T("			) tbl1 ") \
//		_T("			LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl1.hfe_itemid as nvarchar2(15))) ") \
//		_T("            WHERE      1=1 %s ") \
//		_T("            GROUP      BY khoa_thuchien ") \
//		_T("            ORDER      BY khoa_thuchien) tbl_cost ON ( tbl_qs.khoa_thuchien = tbl_cost.khoa_thuchien) "), szReceiptStr, szReceiptStr, szWhere, szReceiptStr, szReceiptStr, szWhere);
//	}
//	return szSQL;
//}
CString CFMServiceIncomeOutlayWithFree::GetQueryString(){
	
	CString szSQL, szWhere, szWhere1, szReceiptStr;
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
		szWhere.Format(_T(" AND iv.hfe_cash_id in(%s) "), szReceiptStr);
	else
		szWhere = m_szWhere;

	//szWhere.Format(_T(" AND hfe_cash_id in(%s)"), szReceiptStr);
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if (m_bHitechMachine)
		szWhere1.AppendFormat(_T(" AND hfl_hitechmachine = 'Y'"));
	//szWhere.AppendFormat(_T(" AND NVL(hfe_category, 'N') NOT IN( 'Y' )"));
	if (m_bDetail)
	{
		szSQL.Format(_T(" SELECT tbl_cost.nhom_phi,  tien_nt, tien_ngt, tong_tien, qs_nt, qs_ngt, tong_qs") \
		_T(" FROM      (SELECT nhom_phi, ") \
		_T("                   SUM(CASE WHEN hfe_class <> 'I' THEN 1 ") \
		_T("                       ELSE 0 ") \
		_T("                       END) qs_ngt, ") \
		_T("                   SUM(CASE WHEN hfe_class = 'I' THEN 1 ") \
		_T("                       ELSE 0 ") \
		_T("                       END) qs_nt, ") \
		_T("				   count(*) tong_qs") \
		_T("            FROM   (SELECT    DISTINCT tbl0.hfe_class, ") \
		_T("                                       nhom_phi, ") \
		_T("                                       tbl0.hfe_docno ") \
		_T("                    FROM      (SELECT    f.hfe_invoiceno, ") \
		_T("                                         iv.hfe_class, ") \
		_T("                                         f.hfe_deptid khoa_order, ") \
		_T("										 f.hfe_itemid,") \
		_T("                                         CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
		_T("                                         CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
		_T("                                         f.hfe_docno, f.hfe_category ") \
		_T("                               FROM      hms_fee f") \
		_T("                               LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
		_T("                               LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
		_T("							   LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ('D', 'M', 'R') AND f.hfe_status = 'P'") \
		_T("                               UNION ALL ") \
		_T("                               SELECT    f.hfe_invoiceno, ") \
		_T("                                         iv.hfe_class, ") \
		_T("                                         f.hfe_deptid khoa_order, ") \
		_T("									     f.hfe_itemid,") \
		_T("                                         Cast(Decode(product_org_id, 'PM', 'KD', ") \
		_T("                                                           'MA', 'C10', 'GL') AS NVARCHAR2(3)) khoa_thuchien, ") \
		_T("                                         Decode('PM', product_org_id, 4, ") \
		_T("                                                           5) nhom_phi, ") \
		_T("                                         f.hfe_docno, f.hfe_category ") \
		_T("                               FROM      hms_fee f") \
		_T("                               LEFT JOIN m_productitem_view_vp ON ( product_item_id = hfe_itemid ) ") \
		_T("							   LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_status = 'P' AND f.hfe_category in ('N','BQP') ") \
		_T("							) tbl0 ") \
		_T("					LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl0.hfe_itemid as nvarchar2(15))) ") \
		_T("                    WHERE     1=1 %s) tbl_distinct ") \
		_T("            GROUP  BY nhom_phi ") \
		_T("            ORDER  BY nhom_phi) tbl_qs ") \
		_T(" RIGHT JOIN (SELECT     nhom_phi, ") \
		_T("                       SUM(tien_ngt) tien_ngt, ") \
		_T("                       SUM(tien_nt) tien_nt, ") \
		_T("                       SUM(tong_tien) tong_tien ") \
		_T("            FROM       ") \
		_T("            (SELECT    f.hfe_docno, ") \
		_T("                                 f.hfe_invoiceno, ") \
		_T("                                 CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
		_T("                                 CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
		_T("								 f.hfe_itemid,") \
		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_nt, ") \
		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_ngt, ") \
		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
		_T("                       FROM      hms_fee f") \
		_T("                       LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
		_T("                       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
		_T("                       LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ( 'D', 'M', 'R' ) AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
		_T("					   UNION ALL") \
		_T("					   SELECT    f.hfe_docno, ") \
		_T("                                 f.hfe_invoiceno, ") \
		_T("                                 Cast(Decode('PM', mp_org_id, 'KD', ") \
		_T("                                                           'C10') AS NVARCHAR2(3)) khoa_thuchien, ") \
		_T("                                 Decode('PM', mp_org_id, 4, ") \
		_T("                                                           5) nhom_phi, ") \
		_T("								 f.hfe_itemid,") \
		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_nt, ") \
		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_ngt, ") \
		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( mpi_product_item_id = hfe_itemid ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P' AND f.hfe_type <> 'V' ") \
		_T("					) tbl1  ") \
		_T("			LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl1.hfe_itemid as nvarchar2(15))) ") \
		_T("            WHERE      1=1 %s ") \
		_T("            GROUP      BY nhom_phi ") \
		_T("            ORDER      BY nhom_phi) tbl_cost ON ( tbl_qs.nhom_phi = tbl_cost.nhom_phi) "), szReceiptStr, szReceiptStr, szWhere, szReceiptStr, szReceiptStr, szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT tbl_cost.khoa_thuchien,") \
		_T("   tien_nt,") \
		_T("   tien_ngt,") \
		_T("   tong_tien,") \
		_T("   qs_nt,") \
		_T("   qs_ngt,") \
		_T("   tong_qs") \
		_T(" FROM") \
		_T("   (") \
		_T(" SELECT khoa_thuchien,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN hfe_class <> 'I'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END) qs_ngt,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN hfe_class = 'I'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END) qs_nt,") \
		_T("     COUNT(*) tong_qs") \
		_T("   FROM") \
		_T("     (SELECT DISTINCT tbl0.hfe_class,") \
		_T("       khoa_thuchien,") \
		_T("       tbl0.hfe_docno") \
		_T("     FROM") \
		_T("       (") \
		//1. Phi Kham//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END khoa_thuchien,      ") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		//_T("     WHERE iv.hfe_cash_id IN ( %s)    ") \//
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status      in ('P','R')") \
		_T("     AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("     AND f.hfe_itemid <> 'D0000006'") \
		_T("     AND f.hfe_category in ('N','BQP','XX')    ") \
		_T("  UNION ALL") \
		//2. Phi can lam sang chung//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid      ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMSV_PDEPT_PARACLINIC_P1") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		//_T("     WHERE iv.hfe_cash_id IN (%s)    ") \//
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		//2.1 Khong nhap ket qua = khong thuc hien khoi hinh anh
		//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
		_T("  UNION ALL") \
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20))") \//
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		//2.1 Khong nhap ket qua = khong thuc hien khoi xet nghiem
		//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
		_T("  UNION ALL") \
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20))") \//
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_testorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T(" UNION ALL") \
		//3. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3))       ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T(" UNION ALL") \
		//4. Phi giuong//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T(" UNION ALL") \
		//5. Phi tien an benh nhan//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) khoa_thuchien,") \
		_T("       f.hfe_itemid,     ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('FF000')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T(" UNION ALL") \
		//6. Phi phau thuat thu thuat//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID else HO_PDEPTID END khoa_thuchien,") \//
		_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("     LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type   = 'O')    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_type='O'") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		//7. Phi khac o khoa//
		_T(" UNION ALL") \
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X'  THEN  f.HFE_DEPTID END khoa_thuchien,") \//
		_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T("     AND f.hfe_category in ('N','BQP','XX','P')") \
		//7.1 Phi khac o tai chinh
		_T(" UNION ALL") \
		_T(" SELECT fi.hfe_docno,") \
		_T("         fi.hfe_type,") \
		_T("         iv.hfe_class,") \
		_T("         fi.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		_T("           THEN fi.HFE_DEPTID") \
		_T("         END khoa_thuchien,") \
		_T("         NULL as hfe_itemid,") \
		_T("         fi.hfe_patpaid tong_tien,") \
		_T("         NULL as hfe_category") \
		_T("       FROM hms_fee_invoice fi") \
		_T("       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("       ON (iv.hfe_invoiceno  = fi.hfe_invoiceno") \
		_T("       AND iv.hfe_docno      = fi.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("       AND fi.hfe_status     IN ('P','R')      ") \
		_T("       AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		//8. Phi khoa duoc, trang bi, tiep huyet//
		_T(" UNION ALL") \
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(product_org_id, 'PM', 'KHOA DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) khoa_thuchien,         ") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("     LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_type IN ('D', 'M','R')") \
		_T("     AND hfe_category in ('N','BQP','XX')") \
		_T("       ) tbl0") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON ( hfl_feeid                  = CAST(tbl0.hfe_itemid AS NVARCHAR2(15)))") \
		_T("     WHERE 1                         =1 %s") \
		_T("     AND NVL(hfe_category, 'N') NOT IN( 'Y' )") \
		_T("     ) tbl_distinct") \
		_T("   GROUP BY khoa_thuchien") \
		_T("   ORDER BY khoa_thuchien") \
		_T(" ) tbl_qs") \
		_T(" LEFT JOIN  ") \
		//Tinh phi cac khoa
		_T(" (SELECT khoa_thuchien,") \
		_T("     tien_ngt,") \
		_T("     tien_nt,") \
		_T("     (tien_ngt+tien_nt) tong_tien") \
		_T("   FROM") \
		_T(" (") \
		_T(" (SELECT khoa_thuchien,") \
		_T("     case when mien_giam>0 and SUM(tien_ngt)>0 THEN SUM(ROUND(tien_ngt))-ROUND(mien_giam) ELSE sum(tien_ngt) end tien_ngt,") \
		_T("     case when mien_giam>0 and SUM(tien_nt)>0 THEN SUM(ROUND(tien_nt))- ROUND(mien_giam) ELSE sum(tien_nt) end tien_nt,") \
		_T("     case when mien_giam>0 and SUM(tong_tien)>0 THEN SUM(ROUND(tong_tien))- ROUND(mien_giam) ELSE sum(tong_tien) end tong_tien") \
		/*_T(" (SELECT khoa_thuchien,") \
		_T("     sum(tien_ngt) tien_ngt,") \
		_T("     sum(tien_nt) tien_nt,") \
		_T("     sum(tong_tien) tong_tien") \*/
		_T("   FROM") \
		_T(" (") \
		//1. Phi kham
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END khoa_thuchien,      ") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("     AND f.hfe_itemid <> 'D0000006'") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T(" UNION ALL ") \
		//2. Phi CLS cac khoa thuc hien
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid      ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMSV_PDEPT_PARACLINIC_P1") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T(" UNION ALL ") \
		//3. Can lam sang chua thuc hien, khoi chan doan hinh anh
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20))") \//
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T(" UNION ALL") \
		//31. Can lam sang chua thuc hien, khoi xet nghiem
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20))") \//
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_testorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T(" UNION ALL") \
		//4. Khoa C16,C17,A20
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20') AS NVARCHAR2(3))       ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T(" UNION ALL") \
		//5. Phi giuong
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T(" UNION ALL") \
		//6. Tien an khoa dinh duong
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('FF000')") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T(" UNION ALL") \
		//7. Phi PTTT
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID else HO_PDEPTID END khoa_thuchien,") \//
		_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("     LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type   = 'O')    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_type='O'") \
		_T("     AND f.hfe_category in ('N','BQP','XX')") \
		_T(" UNION ALL") \
		//8. Phi khac
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X'  THEN  f.HFE_DEPTID END khoa_thuchien,") \//
		_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T("     AND f.hfe_category in ('N','BQP','XX','P')") \
		_T(" UNION ALL") \
		//9. Phi khac o tai chinh
		_T("       SELECT fi.hfe_docno,") \
		_T("         fi.hfe_type,        ") \
		_T("         fi.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		_T("           THEN fi.HFE_DEPTID") \
		_T("         END khoa_thuchien,") \
		_T("         NULL,") \
		_T("         CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN fi.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN fi.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("         fi.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("         NULL") \
		_T("       FROM hms_fee_invoice fi") \
		_T("       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("       ON (iv.hfe_invoiceno  = fi.hfe_invoiceno") \
		_T("       AND iv.hfe_docno      = fi.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("       AND fi.hfe_status     IN ('P','R')      ") \
		_T("       AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		_T(" UNION ALL") \
		//10. Khoa duoc, trang bi, tiep huyet
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(product_org_id, 'PM', 'KHOA DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) khoa_thuchien, ") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_patpaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_patpaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("     LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_type IN ('D', 'M', 'R')") \
		_T("     AND hfe_category in ('N','BQP','XX')") \
		//_T(" )") \//
		_T(" )tbl1") \
		_T(" LEFT JOIN hms_fee_list") \
		_T("   ON ( hfl_feeid                  = CAST(tbl1.hfe_itemid AS NVARCHAR2(15)))") \
		_T("   WHERE 1                         =1 %s") \
		_T("   AND NVL(hfe_category, 'N') NOT IN( 'Y' )") \
		_T("   GROUP BY khoa_thuchien, mien_giam") \
		_T("   ORDER BY khoa_thuchien") \
		_T(" ))") \
		//_T(" ) tbl_cost ON ( tbl_qs.khoa_thuchien = tbl_cost.khoa_thuchien) WHERE tong_tien>0 "),szReceiptStr,szReceiptStr, szReceiptStr,szReceiptStr,szReceiptStr, szReceiptStr,szReceiptStr,szReceiptStr,szReceiptStr, szWhere,szReceiptStr, szReceiptStr,szReceiptStr,szReceiptStr,szReceiptStr, szReceiptStr,szReceiptStr,szReceiptStr,szReceiptStr, szWhere);//
		_T(" ) tbl_cost ON ( tbl_qs.khoa_thuchien = tbl_cost.khoa_thuchien) WHERE tong_tien>0 "),szWhere,szWhere, szWhere, szWhere, szWhere,szWhere,szWhere, szWhere,szWhere,szWhere,szWhere, szWhere1, szWhere,szWhere, szWhere,szWhere,szWhere,szWhere, szWhere,szWhere,szWhere,szWhere, szWhere, szWhere1);
	}
	return szSQL;
}