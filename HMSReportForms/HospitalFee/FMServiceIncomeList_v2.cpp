#include "stdafx.h"
#include "FMServiceIncomeList_v2.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList_v2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList_v2* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList_v2* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList_v2* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2 *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2 *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeList_v2*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList_v2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMServiceIncomeList_v2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceIncomeList_v2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList_v2*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList_v2 *pVw = (CFMServiceIncomeList_v2 *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList_v2 *pVw = (CFMServiceIncomeList_v2 *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList_v2 *pVw = (CFMServiceIncomeList_v2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList_v2 *pVw = (CFMServiceIncomeList_v2 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList_v2*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList_v2*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList_v2*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList_v2*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList_v2*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
} 
CFMServiceIncomeList_v2::CFMServiceIncomeList_v2(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMServiceIncomeList_v2::~CFMServiceIncomeList_v2(){
}
void CFMServiceIncomeList_v2::OnCreateComponents(){
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
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 215, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndList.Create(this,10, 150, 425, 530); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);

}
void CFMServiceIncomeList_v2::OnInitializeComponents(){
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

	m_wndObject.Format(2, 1, 12);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
	m_wndPrint.EnableWindow(FALSE);
}

void CFMServiceIncomeList_v2::OnSetWindowEvents(){
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
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsurancePostedPaymentVoucherListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsurancePostedPaymentVoucherListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsurancePostedPaymentVoucherListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsurancePostedPaymentVoucherListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsurancePostedPaymentVoucherListFnc, 0, 'T', VK_CONTROL);
*/
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	m_mIndex[_T("I")] = _T("\x43hi n\x1ED9i tr\xFA");
	m_mIndex[_T("II")] = _T("\x43hi ngo\x1EA1i tr\xFA ");
	m_mIndex[_T("III")] = _T("\x43hi kh\xE1\x63");


	SetMode(VM_EDIT);


}
void CFMServiceIncomeList_v2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);

}
void CFMServiceIncomeList_v2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMServiceIncomeList_v2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMServiceIncomeList_v2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("01");
	m_szOrderByKey = _T("01");

}

int CFMServiceIncomeList_v2::SetMode(int nMode){
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

/*void CFMServiceIncomeList_v2::OnYearChange(){
	
} */
/*void CFMServiceIncomeList_v2::OnYearSetfocus(){
	
} */
/*void CFMServiceIncomeList_v2::OnYearKillfocus(){
	
} */
int CFMServiceIncomeList_v2::OnYearCheckValue(){
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
 
void CFMServiceIncomeList_v2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceIncomeList_v2::OnReportPeriodSelendok(){
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

/*void CFMServiceIncomeList_v2::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServiceIncomeList_v2::OnReportPeriodKillfocus(){
	
}*/
long CFMServiceIncomeList_v2::OnReportPeriodLoadData(){
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

/*void CFMServiceIncomeList_v2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServiceIncomeList_v2::OnFromDateChange(){
	
} */
/*void CFMServiceIncomeList_v2::OnFromDateSetfocus(){
	
} */
/*void CFMServiceIncomeList_v2::OnFromDateKillfocus(){
	
} */
int CFMServiceIncomeList_v2::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMServiceIncomeList_v2::OnToDateChange(){
	
} */
/*void CFMServiceIncomeList_v2::OnToDateSetfocus(){
	
} */
/*void CFMServiceIncomeList_v2::OnToDateKillfocus(){
	
} */
int CFMServiceIncomeList_v2::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMServiceIncomeList_v2::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceIncomeList_v2::OnClerkSelendok(){
	 
}
/*void CFMServiceIncomeList_v2::OnClerkSetfocus(){
	
}*/
/*void CFMServiceIncomeList_v2::OnClerkKillfocus(){
	
}*/
long CFMServiceIncomeList_v2::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServiceIncomeList_v2::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeList_v2::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceIncomeList_v2::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMServiceIncomeList_v2::OnStatusSetfocus(){
	
}*/
/*void CFMServiceIncomeList_v2::OnStatusKillfocus(){
	
}*/
long CFMServiceIncomeList_v2::OnStatusLoadData(){
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
/*void CFMServiceIncomeList_v2::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeList_v2::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceIncomeList_v2::OnOrderBySelendok(){
	 
}
/*void CFMServiceIncomeList_v2::OnOrderBySetfocus(){
	
}*/
/*void CFMServiceIncomeList_v2::OnOrderByKillfocus(){
	
}*/
long CFMServiceIncomeList_v2::OnOrderByLoadData(){
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
/*void CFMServiceIncomeList_v2::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMServiceIncomeList_v2::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServiceIncomeList_v2::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMServiceIncomeList_v2::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMServiceIncomeList_v2::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMServiceIncomeList_v2::OnListLoadData(){
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

	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV'"));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s ORDER BY fac_cash_id"), szWhere);
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

void CFMServiceIncomeList_v2::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMServiceIncomeList_v2::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMServiceIncomeList_v2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
	OnPrint2ndver();
/*
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("1st Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("2nd Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint1stver();
			break;
		case 2:
			OnPrint2ndver();
			break;
	}
*/
}
 
 
int CFMServiceIncomeList_v2::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMServiceIncomeList_v2::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMServiceIncomeList_v2::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
 		OnCancelFMInsurancePostedPaymentVoucherList();
 	}
	return 0;
}
int CFMServiceIncomeList_v2::OnSaveFMInsurancePostedPaymentVoucherList(){
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
 		//OnFMInsurancePostedPaymentVoucherListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMServiceIncomeList_v2::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMServiceIncomeList_v2::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}


void CFMServiceIncomeList_v2::OnPrint2ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate;
	double nTotal[13];
	double nFa = 0;
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 13; i++)
		nTotal[i] = 0;
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
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("clerk")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoice_no")));
			//
			rs.GetValue(_T("invoice_deposit"), nTmp);
			nTotal[4] += nTmp;
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("invoice_deposit")));
			//
			rs.GetValue(_T("pat_paid"), nTmp);
			nTotal[5] += nTmp;
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("pat_paid")));
			//
			rs.GetValue(_T("invoice_amount"), nTmp);
			nTotal[6] += nTmp;
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("invoice_amount")));
			//
			rs.GetValue(_T("fa"), nTmp);
			nFa += nTmp;
			nTotal[7] += nTmp;
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("fa")));
			//
			rs.GetValue(_T("invoice_drug"), nTmp);
			nTotal[8] += nTmp;
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("invoice_drug")));
			//
			rs.GetValue(_T("invoice_material"), nTmp);
			nTotal[9] += nTmp;
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("invoice_material")));
			//
			rs.GetValue(_T("cnc_amount"), nTmp);
			nTotal[10] += nTmp;
			rptDetail->SetValue(_T("10"), rs.GetValue(_T("cnc_amount")));
			//
			rs.GetValue(_T("deposit"), nTmp);
			nTotal[11] += nTmp;
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("deposit")));
			//
			rs.GetValue(_T("receipt_amount"), nTmp);
			nTotal[12] += nTmp;
			rptDetail->SetValue(_T("12"), rs.GetValue(_T("receipt_amount")));
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 4; i <= 12; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.2f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}
//		tmpStr.Format(_T("%f"), nFa);
//		rptFooter->SetValue(_T("s6.1"), tmpStr);
	}
/*
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("eamount"), m_nEAmount);
		if (m_nEAmount > 0)
		{
			FormatCurrency(m_nEAmount, tmpStr2);
			tmpStr.Format(_T("Ngo\x1EA1i tr\xFA: %s"), tmpStr2);
		}
		rs.GetValue(_T("iamount"), m_nIAmount);
		if (m_nIAmount > 0)
		{
			FormatCurrency(m_nIAmount, tmpStr2);
			tmpStr.AppendFormat(_T("N\x1ED9i tr\xFA: %s"), tmpStr2);
		}
		if (!tmpStr.IsEmpty())
			rptFooter->SetValue(_T("cnc"), tmpStr);
		nTmp = nTotal[2] - m_nIAmount - m_nEAmount;
		FormatCurrency(nTmp, tmpStr2);
		rptFooter->SetValue(_T("vienphi"), tmpStr2);
	}
	*/
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}
void CFMServiceIncomeList_v2::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szPrevMark, szCurMark;
	CStringArray arrField;
	double nTmp = 0;
	double nTotal[14], nGrpTotal[14];
	int nIdx = 1, nRow = 0, nStart_Pos = 3;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 14; i++)
	{
		nGrpTotal[i] = 0;
		nTotal[i] = 0;
	}

	arrField.Add(_T("phi_kham"));
	arrField.Add(_T("hoa_nghiem"));
	arrField.Add(_T("sinh_hoa"));
	arrField.Add(_T("vi_sinh"));
	arrField.Add(_T("giai_phau"));
	arrField.Add(_T("cdcn"));
	arrField.Add(_T("xq"));
	arrField.Add(_T("mien_dich"));
	arrField.Add(_T("truyen_mau"));
	arrField.Add(_T("shpt"));
	arrField.Add(_T("yhhn"));
	arrField.Add(_T("thu_khac"));
	arrField.Add(_T("thu_thuoc"));
	arrField.Add(_T("tong_thu"));
	int nSum_Pos = (int ) arrField.GetCount() - 1;
 	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 13);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N N\x1ED8P TI\x1EC0N (M\x1EAAU \x32)");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	for (int i = 0; i < 17; i++)
		if (i < 4 || i > 13)
			xls.SetCellMergedRows(i, 4, 2);
	for (int i = 0; i < 17; i++)
		if (i > 2)
			xls.SetColumnWidth(i, 11);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 20);
	xls.SetCellMergedColumns(4, 4, 10);
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("H\x1ECD v\xE0 t\xEAn"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, 4, _T("Ph\xED kh\xE1m"), 4098, true);
	xls.SetCellText(4, 4, _T("Ti\x1EC1n \x78\xE9t nghi\x1EC7m"), 4098, true);
	xls.SetCellText(4, 5, _T("H\xF3\x61 nghi\x1EC7m"), 4098, true);
	xls.SetCellText(5, 5, _T("Sinh h\xF3\x61"), 4098, true);
	xls.SetCellText(6, 5, _T("Vi sinh"), 4098, true);
	xls.SetCellText(7, 5, _T("Gi\x1EA3i ph\x1EABu"), 4098, true);
	xls.SetCellText(8, 5, _T("\x43\x44\x43N"), 4098, true);
	xls.SetCellText(9, 5, _T("\x58Q"), 4098, true);
	xls.SetCellText(10, 5, _T("Mi\x1EC5n \x64\x1ECB\x63h"), 4098, true);
	xls.SetCellText(11, 5, _T("Truy\x1EC1n m\xE1u"), 4098, true);
	xls.SetCellText(12, 5, _T("SHPT"), 4098, true);
	xls.SetCellText(13, 5, _T("YHHN"), 4098, true);
	
	xls.SetCellText(14, 4, _T("Thu kh\xE1\x63"), 4098, true);
	xls.SetCellText(15, 4, _T("Thu thu\x1ED1\x63"), 4098, true);
	xls.SetCellText(16, 4, _T("T\x1ED5ng thu"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("acct_date"), szCurMark);
		if (szPrevMark != szCurMark)
		{
			if (nGrpTotal[nSum_Pos] > 0)
			{
				xls.SetCellMergedColumns(0, nRow, 3);
				tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y %s"), szPrevMark);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				for (int i = 0; i < arrField.GetCount(); i++)
				{
					xls.SetCellText(i+nStart_Pos, nRow, double2str(nGrpTotal[i]), FMT_NUMBER1, true);
					nGrpTotal[i] = 0;
				}
				nRow++;
			}
			tmpStr.Format(_T("Ng\xE0y %s"), szCurMark);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			nRow++;
			szPrevMark = szCurMark;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("ten")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			rs.GetValue(arrField.GetAt(i), nTmp);
			nGrpTotal[i] += nTmp;
			nTotal[i] += nTmp;
			xls.SetCellText(i+nStart_Pos, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	if (nGrpTotal[nSum_Pos] > 0)
	{
		xls.SetCellMergedColumns(0, nRow, 3);
		tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y %s"), szPrevMark);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			xls.SetCellText(i+nStart_Pos, nRow, double2str(nGrpTotal[i]), FMT_NUMBER1, true);
			nGrpTotal[i] = 0;
		}
		nRow++;
	}
	if (nTotal[nSum_Pos] > 0)
	{
		xls.SetCellMergedColumns(0, nRow, 3);
		xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true);
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(i+nStart_Pos, nRow, tmpStr, FMT_NUMBER1, true);
		}
	}
	xls.Save(_T("Exports\\DANH SACH BENH NHAN NOP TIEN (MAU 2).xls"));	
}

CString CFMServiceIncomeList_v2::GetQueryString(){
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeSQL;
	CString szOrderBy;
	CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in (%s)"), szReceiptStr);
	szWhere.Format(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV' AND FAC_LOCKED='Y' AND fac_invoicedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
	szWhere.Format(_T(" AND hfe_objectid = 7 AND hfe_locked = 'Y' AND hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
	//if(m_szOrderByKey == _T("01"))
	//{
	//	szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	//}
	//else
	//{
	//	szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	//}
	
	szFeeSQL.Format(_T(" SELECT hfe_invoiceno, hfe_docno, ") \
					_T("		case when hfe_type = 'E' then hfe_cost else 0 end phi_kham,") \
					_T("		case when hfe_group = 'B1100' then hfe_cost else 0 end hoa_nghiem, ") \
					_T("		case when hfe_group IN ('B1200', 'B1300', 'B1600', 'B1A00') then hfe_cost else 0 end sinh_hoa, ") \
					_T("		case when hfe_group = 'B1500' then hfe_cost else 0 end vi_sinh, ") \
					_T("		case when hfe_group = 'B1E00' then hfe_cost else 0 end giai_phau, ") \
					_T("		case when substr(hfe_group, 1, 2) = 'B3' AND hfe_group <> 'B3100' then hfe_cost else 0 end cdcn, ") \
					_T("		case when hfe_group IN ('B2100', 'B2200', 'B2300') then hfe_cost else 0 end xq, ") \
					_T("		case when hfe_group = 'B1400' then hfe_cost else 0 end mien_dich, ") \
					_T("		case when hfe_group IN ('B1G00', 'B1800') then hfe_cost else 0 end truyen_mau, ") \
					_T("		case when hfe_group = 'B1B00' then hfe_cost else 0 end shpt, ") \
					_T("		case when hfe_group = 'B2500' then hfe_cost else 0 end yhhn, ") \
					_T("		case when hfe_type IN ('X', 'O') OR hfe_group = 'B3100' then hfe_cost else 0 end thu_khac, ") \
					_T("		0 thu_thuoc, hfe_cost tong_thu") \
					_T(" FROM hms_fee WHERE hfe_type IN ('E', 'O', 'P', 'T', 'X') AND hfe_status IN ('P', 'R')") \
					_T(" UNION ALL") \
					_T(" SELECT hfe_invoiceno, hfe_docno, 0 phi_kham, 0 hoa_nghiem, 0 sinh_hoa, 0 vi_sinh, 0 giai_phau, 0 cdcn, 0 xq, 0 mien_dich, ") \
					_T("		case when product_org_id = 'BB' then hfe_cost else 0 end truyen_mau, 0 shpt, 0 yhhn, 0 thu_khac,") \
					_T("		case when product_org_id = 'PM' then hfe_cost else 0 end thu_thuoc, hfe_cost tong_thu") \
					_T(" FROM hms_fee LEFT JOIN m_productitem_view ON (product_item_id = to_number(hfe_itemid)) ") \
					_T(" WHERE hfe_type IN ('D', 'M', 'R') AND product_org_id IN ('PM', 'BB') AND hfe_status IN ('P', 'R')"));


	szSQL.Format(_T(" SELECT to_char(trunc(hfe_lockeddate), 'DD/MM/YYYY') acct_date, v.hfe_docno doc_no, get_patientname(v.hfe_docno) ten, SUM(phi_kham) phi_kham, ") \
				 _T("		 SUM(hoa_nghiem) hoa_nghiem, SUM(sinh_hoa) sinh_hoa, SUM(vi_sinh) vi_sinh, ") \
				 _T("		 SUM(giai_phau) giai_phau, SUM(cdcn) cdcn, SUM(xq) xq, ") \
				 _T("		 SUM(mien_dich) mien_dich, SUM(truyen_mau) truyen_mau, SUM(shpt) shpt, ") \
				 _T("		 SUM(yhhn) yhhn, SUM(thu_khac) thu_khac, SUM(thu_thuoc) thu_thuoc, SUM(tong_thu) tong_thu") \
				 _T(" FROM hms_fee_invoice_view_v2 v") \
				 _T(" INNER JOIN hms_doc ON (hd_docno = hfe_docno) ") \
				 _T(" LEFT JOIN (%s) tbl_fee ON (v.hfe_invoiceno = tbl_fee.hfe_invoiceno AND v.hfe_docno = tbl_fee.hfe_docno)") \
				 _T(" WHERE hd_suggestion NOT IN ('C', 'D') %s") \
				 _T(" GROUP BY v.hfe_docno, trunc(hfe_lockeddate)") \
				 _T(" ORDER BY trunc(hfe_lockeddate)") 
				 , szFeeSQL, szWhere);
	return szSQL;
}

CString CFMServiceIncomeList_v2::GetQueryString2(){
	CString szSQL, szWhere, szWhere1;
	CString szReceiptStr;

	szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);


	szSQL.Format(_T(" SELECT ") \
	_T("		   SUM(CASE WHEN i.hfe_class IN ( 'E', 'S' ) AND Nvl(hfl_hitechmachine, 'X') = 'Y' THEN f.hfe_cost ") \
	_T("               ELSE 0 END) eamount, ") \
	_T("           SUM(CASE WHEN i.hfe_class IN ( 'A', 'I' ) AND Nvl(hfl_hitechmachine, 'X') = 'Y' THEN f.hfe_cost ") \
	_T("               ELSE 0 END) iamount ") \
	_T(" FROM      fa_cash ") \
	_T(" LEFT JOIN hms_fee_invoice i ON ( i.hfe_cash_id = fac_cash_id ) ") \
	_T(" LEFT JOIN hms_fee f ON ( f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno ) ") \
	_T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
	_T(" WHERE 1 = 1 ") \
	_T(" %s %s "), szWhere, szWhere1);
	return szSQL;
}