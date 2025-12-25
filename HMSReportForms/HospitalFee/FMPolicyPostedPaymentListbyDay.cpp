#include "stdafx.h"
#include "FMPolicyPostedPaymentListbyDay.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedPaymentListbyDay* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedPaymentListbyDay* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedPaymentListbyDay* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnStatusAddNew();
}*/
static void _OnGroupBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedPaymentListbyDay* )pWnd)->OnGroupBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupBySelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnGroupBySelendok();
}
/*static void _OnGroupBySetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnGroupByKillfocus();
}*/
/*static void _OnGroupByKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnGroupByKillfocus();
}*/
static long _OnGroupByLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnGroupByLoadData();
}
/*static void _OnGroupByAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay *)pWnd)->OnGroupByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMPolicyPostedPaymentListbyDay *pVw = (CFMPolicyPostedPaymentListbyDay *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMPolicyPostedPaymentListbyDay *pVw = (CFMPolicyPostedPaymentListbyDay *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyPostedPaymentListbyDay *pVw = (CFMPolicyPostedPaymentListbyDay *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyPostedPaymentListbyDay *pVw = (CFMPolicyPostedPaymentListbyDay *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedPaymentListbyDay*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
} 
CFMPolicyPostedPaymentListbyDay::CFMPolicyPostedPaymentListbyDay(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMPolicyPostedPaymentListbyDay::~CFMPolicyPostedPaymentListbyDay(){
}
void CFMPolicyPostedPaymentListbyDay::OnCreateComponents(){
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
	m_wndGroupByLabel.Create(this, _T("Group By"), 10, 120, 90, 145);
	m_wndGroupBy.Create(this,95, 120, 215, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndList.Create(this,10, 150, 425, 530); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);

}
void CFMPolicyPostedPaymentListbyDay::OnInitializeComponents(){
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


	m_wndGroupBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndGroupBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMPolicyPostedPaymentListbyDay::OnSetWindowEvents(){
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
	m_wndGroupBy.SetEvent(WE_SELENDOK, _OnGroupBySelendokFnc);
	//m_wndGroupBy.SetEvent(WE_SETFOCUS, _OnGroupBySetfocusFnc);
	//m_wndGroupBy.SetEvent(WE_KILLFOCUS, _OnGroupByKillfocusFnc);
	m_wndGroupBy.SetEvent(WE_SELCHANGE, _OnGroupBySelectChangeFnc);
	m_wndGroupBy.SetEvent(WE_LOADDATA, _OnGroupByLoadDataFnc);
	//m_wndGroupBy.SetEvent(WE_ADDNEW, _OnGroupByAddNewFnc);
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

	m_mIndex[_T("I")] = _T("\x43hi kh\xE1\x63");
	m_mIndex[_T("II")] = _T("\x43hi tr\x1EA3 ngo\x1EA1i tr\xFA");
	m_mIndex[_T("III")] = _T("\x43hi tr\x1EA3 th\x61nh to\xE1n r\x61 vi\x1EC7n");


	SetMode(VM_EDIT);


}
void CFMPolicyPostedPaymentListbyDay::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndGroupBy.GetDlgCtrlID(), m_szGroupByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);

}
void CFMPolicyPostedPaymentListbyDay::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPolicyPostedPaymentListbyDay::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPolicyPostedPaymentListbyDay::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szGroupByKey = _T("01");

}

int CFMPolicyPostedPaymentListbyDay::SetMode(int nMode){
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

/*void CFMPolicyPostedPaymentListbyDay::OnYearChange(){
	
} */
/*void CFMPolicyPostedPaymentListbyDay::OnYearSetfocus(){
	
} */
/*void CFMPolicyPostedPaymentListbyDay::OnYearKillfocus(){
	
} */
int CFMPolicyPostedPaymentListbyDay::OnYearCheckValue(){
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
 
void CFMPolicyPostedPaymentListbyDay::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMPolicyPostedPaymentListbyDay::OnReportPeriodSelendok(){
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

/*void CFMPolicyPostedPaymentListbyDay::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyPostedPaymentListbyDay::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyPostedPaymentListbyDay::OnReportPeriodLoadData(){
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

/*void CFMPolicyPostedPaymentListbyDay::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyPostedPaymentListbyDay::OnFromDateChange(){
	
} */
/*void CFMPolicyPostedPaymentListbyDay::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyPostedPaymentListbyDay::OnFromDateKillfocus(){
	
} */
int CFMPolicyPostedPaymentListbyDay::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMPolicyPostedPaymentListbyDay::OnToDateChange(){
	
} */
/*void CFMPolicyPostedPaymentListbyDay::OnToDateSetfocus(){
	
} */
/*void CFMPolicyPostedPaymentListbyDay::OnToDateKillfocus(){
	
} */
int CFMPolicyPostedPaymentListbyDay::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMPolicyPostedPaymentListbyDay::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPostedPaymentListbyDay::OnClerkSelendok(){
	 
}
/*void CFMPolicyPostedPaymentListbyDay::OnClerkSetfocus(){
	
}*/
/*void CFMPolicyPostedPaymentListbyDay::OnClerkKillfocus(){
	
}*/
long CFMPolicyPostedPaymentListbyDay::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMPolicyPostedPaymentListbyDay::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyPostedPaymentListbyDay::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPostedPaymentListbyDay::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMPolicyPostedPaymentListbyDay::OnStatusSetfocus(){
	
}*/
/*void CFMPolicyPostedPaymentListbyDay::OnStatusKillfocus(){
	
}*/
long CFMPolicyPostedPaymentListbyDay::OnStatusLoadData(){
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
/*void CFMPolicyPostedPaymentListbyDay::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyPostedPaymentListbyDay::OnGroupBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPostedPaymentListbyDay::OnGroupBySelendok(){
	 
}
/*void CFMPolicyPostedPaymentListbyDay::OnGroupBySetfocus(){
	
}*/
/*void CFMPolicyPostedPaymentListbyDay::OnGroupByKillfocus(){
	
}*/
long CFMPolicyPostedPaymentListbyDay::OnGroupByLoadData(){
	return 0;
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndGroupBy.AddItems(_T("01"), _T("Nh\xF3m th\x65o s\x1ED1 phi\x1EBFu thu"), NULL);
	m_wndGroupBy.AddItems(_T("02"), _T("Nh\xF3m th\x65o kho\x61"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupBy.IsSearchKey() && !m_szGroupByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupByKey
};
	m_wndGroupBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMPolicyPostedPaymentListbyDay::OnGroupByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMPolicyPostedPaymentListbyDay::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMPolicyPostedPaymentListbyDay::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMPolicyPostedPaymentListbyDay::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyPostedPaymentListbyDay::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyPostedPaymentListbyDay::OnListLoadData(){
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

	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) in ('QU','BH') AND  fac_cashbook_id <> 'BH-PTTYC'"));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'P' %s ORDER BY fac_cash_id"), szWhere);
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

void CFMPolicyPostedPaymentListbyDay::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMPolicyPostedPaymentListbyDay::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMPolicyPostedPaymentListbyDay::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
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
 
 
int CFMPolicyPostedPaymentListbyDay::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPolicyPostedPaymentListbyDay::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPolicyPostedPaymentListbyDay::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
int CFMPolicyPostedPaymentListbyDay::OnSaveFMInsurancePostedPaymentVoucherList(){
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
int CFMPolicyPostedPaymentListbyDay::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMPolicyPostedPaymentListbyDay::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}


void CFMPolicyPostedPaymentListbyDay::OnPrint2ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	//Control variable
	int nStart = 0, nSumPos = 0;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szOldLev1, szNewLev1, szOldLev2, szNewLev2, szNewLev3, szOldLev3;
	long double nTotal[16];
	long double nGroupTotal1[16], nGroupTotal2[16], nGroupTotal3[16];
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHIBNBDCSTHEONGAY.RPT");
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
	TCHAR *dat[] = {_T("trich_tam_gui"), _T("phi_an"), _T("phi_ranggia"), _T("thu_khac"), _T("thu_goidv"), _T("phai_thu"), 
					_T("con_lai"),_T("chi_luong"), _T("chi_tauxe"), _T("chi_tem"), _T("chi_letet"), _T("chi_an"), _T("chi_khac"),
					_T("chi_khac_"),_T("miengiam"),_T("tong_chi")};
	nStart = 3;
	nSumPos = 16 - 1;
	for (int i = 0; i < 16; i++)
	{
		nTotal[i] = 0;
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
		nGroupTotal3[i] = 0;
	}
	/*m_nHitechEAmount = 0;
	m_nHitechIAmount = 0;*/
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
			rs.GetValue(_T("posted_date"), tmpStr);
			rptDetail->SetValue(_T("2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			for (int i = 0; i <= nSumPos; i++)
			{
				rs.GetValue(dat[i], nTmp);
				tmpStr.Format(_T("%f"), nTmp);
				szPos.Format(_T("%d"), i+nStart);
				rptDetail->SetValue(szPos, tmpStr);
				nTotal[i] += nTmp;
				//nGroupTotal1[i] += nTmp;
			}
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if (rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if(rptDetail)
	{
		rptDetail->SetValue(_T("TotalGroup"), _T("T\x1ED5ng \x63\x1ED9ng:"));
		for (int i = 0; i <= nSumPos; i++)
		{
			szPos.Format(_T("s%d"), i+nStart);
			tmpStr.Format(_T("%f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}
/*
		tmpStr.Format(_T("%f"), nFa);
		rptFooter->SetValue(_T("s6.1"), tmpStr);
		szSQL = GetQueryString1();
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("iamount"), m_nHitechIAmount);
			if (m_nHitechIAmount > 0)
			{
				FormatCurrency(m_nHitechIAmount, tmpStr2);
				tmpStr.Format(_T("Ngo\x1EA1i tr\xFA: %s"), tmpStr2);
			}
			m_nHitechEAmount = nTotal[5] - m_nHitechIAmount;
			if (m_nHitechEAmount > 0)
			{
				FormatCurrency(m_nHitechEAmount, tmpStr2);
				tmpStr.AppendFormat(_T("N\x1ED9i tr\xFA: %s"), tmpStr2);
			}
			if (!tmpStr.IsEmpty())
				rptFooter->SetValue(_T("cnc"), tmpStr);
			nTmp = nTotal[1] - nTotal[5];
			FormatCurrency(nTmp, tmpStr2);
			rptFooter->SetValue(_T("vienphi"), tmpStr2);
		}
*/
	}
	
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[nSumPos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rpt.PrintPreview();
}

void CFMPolicyPostedPaymentListbyDay::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal[10];
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 10; i++)
		nTotal[i] = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 12);
	xls.SetCellMergedColumns(0, 3, 12);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\x1EA2NG K\xCA \x43H\x1EE8NG T\x1EEA GHI S\x1ED4 \x43HI");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellMergedRows(0, 4, 2);
	xls.SetCellMergedRows(1, 4, 2);
	xls.SetCellMergedRows(2, 4, 2);
	xls.SetCellMergedRows(3, 4, 2);
	xls.SetCellMergedRows(4, 4, 2);
	xls.SetCellMergedColumns(5, 4, 3);
	xls.SetCellMergedRows(8, 4, 2);
	xls.SetCellMergedColumns(9, 4, 4);
	xls.SetCellMergedRows(13, 4, 2);
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("H\x1ECD v\xE0 t\xEAn \x42N"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 phi\x1EBFu"), 4098, true);
	xls.SetCellText(3, 4, _T(""), 4098, true);
	xls.SetCellText(4, 4, _T("Tr\xED\x63h t\x1EA1m thu"), 4098, true);
	xls.SetCellText(5, 4, _T("T\x1ED5ng VP ph\x1EA3i thu"), 4098, true);
	xls.SetCellText(5, 5, _T("T\x1ED5ng thu KT, \x43LS"), 4098, true);
	xls.SetCellText(6, 5, _T("Ti\x1EC1n thu\x1ED1\x63 NGT"), 4098, true);
	xls.SetCellText(7, 5, _T("Ti\x1EC1n v\x1EADt t\x1B0 NGT"), 4098, true);
	xls.SetCellText(8, 4, _T("\x43hi tr\x1EA3 VP"), 4098, true);
	xls.SetCellText(9, 4, _T("\x43\xE1\x63 kho\x1EA3n tr\x1EA3 l\x1EA1i \x42N"), 4098, true);
	xls.SetCellText(9, 5, _T("M\xE1y \x43N\x43"), 4098, true);
	xls.SetCellText(10, 5, _T("KT, \x43LS"), 4098, true);
	xls.SetCellText(11, 5, _T("Thu\x1ED1\x63"), 4098, true);
	xls.SetCellText(12, 5, _T("V\x1EADt t\x1B0"), 4098, true);
	xls.SetCellText(13, 4, _T("T\x1ED5ng \x63hi"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("user_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("invoice_no")), FMT_TEXT);
		rs.GetValue(_T("invoice_deposit"), nTmp);
		nTotal[0] += nTmp;
		xls.SetCellText(4, nRow, rs.GetValue(_T("invoice_deposit")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_amount"), nTmp);
		nTotal[1] += nTmp;
		xls.SetCellText(5, nRow, rs.GetValue(_T("invoice_amount")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_drug"), nTmp);
		nTotal[2] += nTmp;
		xls.SetCellText(6, nRow, rs.GetValue(_T("invoice_drug")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_material"), nTmp);
		nTotal[3] += nTmp;
		xls.SetCellText(7, nRow, rs.GetValue(_T("invoice_material")), FMT_NUMBER1);
		rs.GetValue(_T("pat_paid"), nTmp);
		nTotal[4] += nTmp;
		xls.SetCellText(8, nRow, rs.GetValue(_T("pat_paid")), FMT_NUMBER1);
		rs.GetValue(_T("hitech_return"), nTmp);
		nTotal[5] += nTmp;
		xls.SetCellText(9, nRow, rs.GetValue(_T("hitech_return")), FMT_NUMBER1);
		rs.GetValue(_T("test_return"), nTmp);
		nTotal[6] += nTmp;
		xls.SetCellText(10, nRow, rs.GetValue(_T("test_return")), FMT_NUMBER1);
		rs.GetValue(_T("drug_return"), nTmp);
		nTotal[7] += nTmp;
		xls.SetCellText(11, nRow, rs.GetValue(_T("drug_return")), FMT_NUMBER1);
		rs.GetValue(_T("material_return"), nTmp);
		nTotal[8] += nTmp;
		xls.SetCellText(12, nRow, rs.GetValue(_T("material_return")), FMT_NUMBER1);
		rs.GetValue(_T("total_return"), nTmp);
		nTotal[9] += nTmp;
		xls.SetCellText(13, nRow, rs.GetValue(_T("total_return")), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
	for (int i = 0; i < 10; i++)
	{
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i + 4, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\Bang ke chung tu ghi so chi mau 2.xls"));

}
//Update ngày 15/09/2018 do thay đổi quân QN, LS chuyển về BH. Bộ phận quân chỉ quản lý đối tượng bạn = 3 & chi chế ffooj , chính sách, chi A11
/*CString CFMPolicyPostedPaymentListbyDay::GetQueryString(){
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szGroupBy;
	CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);

	//if(m_szGroupByKey == _T("01"))
	{
		szGroupBy.Format(_T(", staff, fac_invoiceno"));
	}
	if (m_szGroupByKey == _T("02"))
	{
		szGroupBy.Format(_T(", dept_id"));
	}

	//10740
	//Edit 27/08
	//-tra tam gui
	//-
	szSQL.Format(_T(" SELECT    trunc(fac_posteddate) posted_date,") \
	_T("           SUM(trich_tam_gui) trich_tam_gui, ") \
	_T("           SUM(chi_luong) chi_luong, ") \
	_T("           SUM(chi_an) chi_an, ") \
	_T("           SUM(chi_letet) chi_letet, ") \
	_T("           SUM(chi_tem) chi_tem, ") \
	_T("           SUM(chi_tauxe) chi_tauxe, ") \
	_T("           SUM(chi_khac) chi_khac, ") \
	_T("		   SUM(chi_khac_) chi_khac_,") \
	_T("           SUM(phi_an) phi_an, ") \
	_T("           SUM(phai_thu - phi_an - hfe_packageamount) phi_ranggia, ") \
	_T("           0 thu_khac, ") \
	_T("           SUM(hfe_packageamount) thu_goidv, ") \
	_T("		   SUM(phai_thu + 0) phai_thu,") \
	_T("		   SUM(trich_tam_gui - phai_thu - 0) con_lai,") \
	_T("		   SUM(hfe_freeamount) AS miengiam,") \
	_T("           SUM(trich_tam_gui - phai_thu - 0 + chi_luong + chi_an + chi_letet + chi_tem + chi_tauxe + chi_khac + chi_khac_) tong_chi ") \
	_T(" FROM      fa_cash ") \
	_T(" LEFT JOIN (SELECT    rf.hfe_cash_id cash_id, rf.hfe_staff staff, 0 treattime, rf.hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = rf.hfe_docno) patient_type, ") \
	_T("                      rf.hfe_docno, ") \
	_T("					  CASE WHEN rf.hfe_class = 'I' THEN 'III' ELSE 'II' END invoice_class,") \
	_T("					  CASE WHEN rf.hfe_objectid in (1,11,13) THEN 0 ELSE 1 END obj_class,") \
	_T("                      i.hfe_deposit trich_tam_gui, ") \
	_T("					  i.hfe_patpaid-i.hfe_otherpaid-i.hfe_freeamount phai_thu,") \
	//_T("					  i.hfe_patpaid-i.hfe_otherpaid phai_thu,") \//
	//_T("                      (SELECT coalesce(SUM(hfe_cost), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status NOT IN ('O', 'C') AND f.hfe_type = 'F' AND NVL(f.hfe_category, 'N') = 'N') ") \//
	_T("                      (SELECT coalesce(SUM(hfe_cost), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status NOT IN ('O', 'C') AND f.hfe_type = 'F' AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx)) ") \
	_T("						phi_an, ") \

	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("             FROM hms_fee f") \
	_T("             WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("             AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("             AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("             AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("             AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV')") \
	_T("             AND f.hfe_fee_id NOT             IN") \
	_T("       (SELECT hfe_invoiceline_id") \
	_T("       FROM hms_fee_discountline d") \
	_T("       WHERE d.hfe_docno   = f.hfe_docno") \
	_T("       AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("       ))AS hfe_packageamount,") \

	_T("					  (select coalesce(sum(hfe_quantity), 0) from hms_fee f where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno and f.hfe_type = 'B' AND f.hfe_status NOT IN ('O', 'C')) ") \
	_T("					    ngay_dt,") \
	_T("					  0 chi_luong,") \
	_T("                      0 chi_an, ") \
	_T("					  0 chi_letet, ") \
	_T("                      0 chi_tem, ") \
	_T("                      0 chi_tauxe, ") \
	_T("					  0 chi_khac,") \
	_T("					  0 tra_tam_gui,") \
	_T("					  0 chi_khac_, hfe_freeamount") \
	_T("				FROM hms_fee_refund rf") \
	_T("				LEFT JOIN hms_fee_invoice i ON (rf.hfe_docno = i.hfe_docno AND rf.hfe_refidx = i.hfe_invoiceno)") \
	_T("				WHERE rf.hfe_type = 'F' AND rf.hfe_status NOT IN ('O', 'C') AND rf.hfe_cash_id > 0 AND i.hfe_refund > 0 AND rf.hfe_objectid in (1,3,8,11,13)") \
	_T("				UNION ALL") \
	_T("				SELECT    r.hfe_cash_id cash_id, r.hfe_staff staff, r.hfe_treattime treattime, r.hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = r.hfe_docno) patient_type, ") \
	_T("                      r.hfe_docno, ") \
	_T("					  CASE WHEN r.hfe_type = 'V' AND l.hfe_itemid IN ('07', '08', '09') THEN 'I' ELSE CASE WHEN r.hfe_class = 'I' THEN 'III' ELSE 'II' END END invoice_class,") \
	_T("					  CASE WHEN r.hfe_objectid in (1,11,13) THEN 0 ELSE 1 END obj_class,") \
	//_T("                      r.hfe_amount trich_tam_gui, ") \//
	_T("                      CASE WHEN r.hfe_type = 'F' AND r.hfe_serialno ='PC' THEN r.hfe_amount ELSE 0 END trich_tam_gui, ") \
	_T("					  0 phai_thu,") \
	_T("                      0 phi_an, 0 AS hfe_packageamount,") \
	_T("					  0 ngay_dt,") \
	_T("                      CASE WHEN l.hfe_itemid = '01' THEN l.hfe_cost ELSE 0 END chi_luong, ") \
	_T("                      CASE WHEN l.hfe_itemid = '05' THEN l.hfe_cost ELSE 0 END chi_an, ") \
	_T("					  CASE WHEN l.hfe_itemid = '04' THEN l.hfe_cost ELSE 0 END chi_letet, ") \
	_T("					  CASE WHEN l.hfe_itemid = '03' THEN l.hfe_cost ELSE 0 END chi_tem,") \
	_T("					  CASE WHEN l.hfe_itemid = '02' THEN l.hfe_cost ELSE 0 END chi_tauxe,") \
	_T("					  CASE WHEN (l.hfe_itemid = '06' OR r.hfe_type NOT IN ('G', 'S', 'V', 'F', 'U')) THEN l.hfe_cost ELSE 0 END chi_khac,") \
	_T("					  CASE WHEN r.hfe_type = 'F' THEN l.hfe_cost ELSE 0 END tra_tam_gui,") \
	_T("					  CASE WHEN l.hfe_itemid IN ('07', '08', '09', '17', '18', '19') THEN l.hfe_cost WHEN r.hfe_type='G' AND r.hfe_class='E' THEN r.hfe_amount ELSE 0 END chi_khac_, 0 hfe_freeamount") \
	_T("				FROM hms_fee_refund r") \
	_T("				LEFT JOIN hms_fee_refundline l ON (r.hfe_docno = l.hfe_docno AND r.hfe_invoiceno = l.hfe_invoiceno)") \
	_T("				WHERE (r.hfe_type <> 'F' OR (r.hfe_type='F' and r.hfe_serialno is not null)) AND r.hfe_cash_id > 0 AND r.hfe_objectid in (1,3,8,11,13) ") \
	_T("				AND r.hfe_status NOT IN ('O', 'C')) tbl ON (fac_cash_id = cash_id)") \
	_T(" WHERE 1=1 %s AND obj_class is not null") \
	_T(" GROUP BY trunc(fac_posteddate)") \
	_T(" ORDER BY trunc(fac_posteddate)"), szWhere);

	return szSQL;
}*/
CString CFMPolicyPostedPaymentListbyDay::GetQueryString(){
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szGroupBy;
	CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);

	//if(m_szGroupByKey == _T("01"))
	{
		szGroupBy.Format(_T(", staff, fac_invoiceno"));
	}
	if (m_szGroupByKey == _T("02"))
	{
		szGroupBy.Format(_T(", dept_id"));
	}

	//10740
	//Edit 27/08
	//-tra tam gui
	//-
	szSQL.Format(_T(" SELECT    trunc(fac_posteddate) posted_date,") \
	_T("           SUM(trich_tam_gui) trich_tam_gui, ") \
	_T("           SUM(chi_luong) chi_luong, ") \
	_T("           SUM(chi_an) chi_an, ") \
	_T("           SUM(chi_letet) chi_letet, ") \
	_T("           SUM(chi_tem) chi_tem, ") \
	_T("           SUM(chi_tauxe) chi_tauxe, ") \
	_T("           SUM(chi_khac) chi_khac, ") \
	_T("		   SUM(chi_khac_) chi_khac_,") \
	_T("           SUM(phi_an) phi_an, ") \
	_T("           SUM(phai_thu - phi_an - hfe_packageamount) phi_ranggia, ") \
	_T("           0 thu_khac, ") \
	_T("           SUM(hfe_packageamount) thu_goidv, ") \
	_T("		   SUM(phai_thu + 0) phai_thu,") \
	_T("		   SUM(trich_tam_gui - phai_thu - 0) con_lai,") \
	_T("		   SUM(hfe_freeamount) AS miengiam,") \
	_T("           SUM(trich_tam_gui - phai_thu - 0 + chi_luong + chi_an + chi_letet + chi_tem + chi_tauxe + chi_khac + chi_khac_) tong_chi ") \
	_T(" FROM      fa_cash ") \
	_T(" LEFT JOIN (SELECT    rf.hfe_cash_id cash_id, rf.hfe_staff staff, 0 treattime, rf.hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = rf.hfe_docno) patient_type, ") \
	_T("                      rf.hfe_docno, ") \
	_T("					  CASE WHEN rf.hfe_class = 'I' THEN 'III' ELSE 'II' END invoice_class,") \
	_T("					  CASE WHEN rf.hfe_objectid in (1,3,8,13) THEN 0 ELSE 1 END obj_class,") \
	_T("                      i.hfe_deposit trich_tam_gui, ") \
	_T("					  i.hfe_patpaid-i.hfe_otherpaid-i.hfe_freeamount phai_thu,") \
	//_T("					  i.hfe_patpaid-i.hfe_otherpaid phai_thu,") \//
	//_T("                      (SELECT coalesce(SUM(hfe_cost), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status NOT IN ('O', 'C') AND f.hfe_type = 'F' AND NVL(f.hfe_category, 'N') = 'N') ") \//
	_T("                      (SELECT coalesce(SUM(hfe_cost), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status NOT IN ('O', 'C') AND f.hfe_type = 'F' AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx)) ") \
	_T("						phi_an, ") \

	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("             FROM hms_fee f") \
	_T("             WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("             AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("             AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("             AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("             AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV')") \
	_T("             AND f.hfe_fee_id NOT             IN") \
	_T("       (SELECT hfe_invoiceline_id") \
	_T("       FROM hms_fee_discountline d") \
	_T("       WHERE d.hfe_docno   = f.hfe_docno") \
	_T("       AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("       ))AS hfe_packageamount,") \

	_T("					  (select coalesce(sum(hfe_quantity), 0) from hms_fee f where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno and f.hfe_type = 'B' AND f.hfe_status NOT IN ('O', 'C')) ") \
	_T("					    ngay_dt,") \
	_T("					  0 chi_luong,") \
	_T("                      0 chi_an, ") \
	_T("					  0 chi_letet, ") \
	_T("                      0 chi_tem, ") \
	_T("                      0 chi_tauxe, ") \
	_T("					  0 chi_khac,") \
	_T("					  0 tra_tam_gui,") \
	_T("					  0 chi_khac_, hfe_freeamount") \
	_T("				FROM hms_fee_refund rf") \
	_T("				LEFT JOIN hms_fee_invoice i ON (rf.hfe_docno = i.hfe_docno AND rf.hfe_refidx = i.hfe_invoiceno)") \
	_T("				WHERE rf.hfe_type = 'F' AND rf.hfe_status NOT IN ('O', 'C') AND rf.hfe_cash_id > 0 AND i.hfe_refund > 0 AND rf.hfe_objectid in (1,3,8,13)") \
	_T("				UNION ALL") \
	_T("				SELECT    r.hfe_cash_id cash_id, r.hfe_staff staff, r.hfe_treattime treattime, r.hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = r.hfe_docno) patient_type, ") \
	_T("                      r.hfe_docno, ") \
	_T("					  CASE WHEN r.hfe_type = 'V' AND l.hfe_itemid IN ('07', '08', '09') THEN 'I' ELSE CASE WHEN r.hfe_class = 'I' THEN 'III' ELSE 'II' END END invoice_class,") \
	_T("					  CASE WHEN r.hfe_objectid in (1,3,8,13) THEN 0 ELSE 1 END obj_class,") \
	//_T("                      r.hfe_amount trich_tam_gui, ") \//
	_T("                      CASE WHEN r.hfe_type = 'F' AND r.hfe_serialno ='PC' THEN r.hfe_amount ELSE 0 END trich_tam_gui, ") \
	_T("					  0 phai_thu,") \
	_T("                      0 phi_an, 0 AS hfe_packageamount,") \
	_T("					  0 ngay_dt,") \
	_T("                      CASE WHEN l.hfe_itemid = '01' THEN l.hfe_cost ELSE 0 END chi_luong, ") \
	_T("                      CASE WHEN l.hfe_itemid = '05' THEN l.hfe_cost ELSE 0 END chi_an, ") \
	_T("					  CASE WHEN l.hfe_itemid = '04' THEN l.hfe_cost ELSE 0 END chi_letet, ") \
	_T("					  CASE WHEN l.hfe_itemid = '03' THEN l.hfe_cost ELSE 0 END chi_tem,") \
	_T("					  CASE WHEN l.hfe_itemid = '02' THEN l.hfe_cost ELSE 0 END chi_tauxe,") \
	_T("					  CASE WHEN (l.hfe_itemid = '06' OR r.hfe_type NOT IN ('G', 'S', 'V', 'F', 'U')) THEN l.hfe_cost ELSE 0 END chi_khac,") \
	_T("					  CASE WHEN r.hfe_type = 'F' THEN l.hfe_cost ELSE 0 END tra_tam_gui,") \
	_T("					  CASE WHEN l.hfe_itemid IN ('07', '08', '09', '17', '18', '19') THEN l.hfe_cost WHEN r.hfe_type='G' AND r.hfe_class='E' THEN r.hfe_amount ELSE 0 END chi_khac_, 0 hfe_freeamount") \
	_T("				FROM hms_fee_refund r") \
	_T("				LEFT JOIN hms_fee_refundline l ON (r.hfe_docno = l.hfe_docno AND r.hfe_invoiceno = l.hfe_invoiceno)") \
	_T("				WHERE (r.hfe_type <> 'F' OR (r.hfe_type='F' and r.hfe_serialno is not null)) AND r.hfe_cash_id > 0 AND r.hfe_objectid in (1,3,8,13) ") \
	_T("				AND r.hfe_status NOT IN ('O', 'C')) tbl ON (fac_cash_id = cash_id)") \
	_T(" WHERE 1=1 %s AND obj_class is not null") \
	_T(" GROUP BY trunc(fac_posteddate)") \
	_T(" ORDER BY trunc(fac_posteddate)"), szWhere);

	return szSQL;
}

CString CFMPolicyPostedPaymentListbyDay::GetQueryString2(){
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