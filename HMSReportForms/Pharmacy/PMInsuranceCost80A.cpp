#include "stdafx.h"
#include "PMInsuranceCost80A.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMInsuranceCost80A* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMInsuranceCost80A* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CPMInsuranceCost80A *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMInsuranceCost80A *pVw = (CPMInsuranceCost80A *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMInsuranceCost80A *pVw = (CPMInsuranceCost80A *)pWnd;
	pVw->OnExportSelect();
}
static void _OnExportForInsSelectFnc(CWnd *pWnd){
	CPMInsuranceCost80A *pVw = (CPMInsuranceCost80A *)pWnd;
	pVw->OnExportForInsSelect();
}
static void _OnByDischargedDateSelectFnc(CWnd *pWnd){
	((CPMInsuranceCost80A*)pWnd)->OnByDischargedDateSelect();
}
static void _OnDischargedDateUnpaidSelectFnc(CWnd *pWnd){
	((CPMInsuranceCost80A*)pWnd)->OnDischargedDateUnpaidSelect();
}
static void _OnDischargedDatePaidSelectFnc(CWnd *pWnd){
	((CPMInsuranceCost80A*)pWnd)->OnDischargedDatePaidSelect();
}
static long _OnCardListLoadDataFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A*)pWnd)->OnCardListLoadData();
} 
static void _OnCardListDblClickFnc(CWnd *pWnd){
	((CPMInsuranceCost80A*)pWnd)->OnCardListDblClick();
} 
static void _OnCardListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMInsuranceCost80A*)pWnd)->OnCardListSelectChange(nOldItem, nNewItem);
} 
static int _OnCardListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMInsuranceCost80A*)pWnd)->OnCardListDeleteItem();
}
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CPMInsuranceCost80A*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMInsuranceCost80A*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMInsuranceCost80A*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddPMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CPMInsuranceCost80A*)pWnd)->OnAddPMInsuranceCost80A();
} 
static int _OnEditPMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CPMInsuranceCost80A*)pWnd)->OnEditPMInsuranceCost80A();
} 
static int _OnDeletePMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CPMInsuranceCost80A*)pWnd)->OnDeletePMInsuranceCost80A();
} 
static int _OnSavePMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CPMInsuranceCost80A*)pWnd)->OnSavePMInsuranceCost80A();
} 
static int _OnCancelPMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CPMInsuranceCost80A*)pWnd)->OnCancelPMInsuranceCost80A();
}

static int _OnCardListCheckAllFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A*)pWnd)->OnCardListCheckAll();
}
static int _OnCardListUnCheckAllFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A*)pWnd)->OnCardListUnCheckAll();
}

static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CPMInsuranceCost80A*)pWnd)->OnDeptListUnCheckAll();
}

CPMInsuranceCost80A::CPMInsuranceCost80A(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 590;
	SetDefaultValues();
}
CPMInsuranceCost80A::~CPMInsuranceCost80A(){
}
void CPMInsuranceCost80A::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condtion"), 5, 5, 440, 545);
	m_wndInsuranceCardInfo.Create(this, _T("Insurance Card Information"), 10, 120, 435, 255);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 260, 435, 450);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 310, 55);
	m_wndReportPeriod.Create(this,315, 30, 435, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 310, 85);
	m_wndToDate.Create(this,315, 60, 435, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 435, 115); 
	m_wndByDischargedDate.Create(this, _T("By Discharged Date"), 10, 455, 145, 480);
	m_wndDischargedDateUnpaid.Create(this, _T("Discharged Date Unpaid"), 150, 455, 290, 480);
	m_wndDischargedDatePaid.Create(this, _T("Discharged Date Paid"), 295, 455, 430, 480);
	m_wndInsuranceApproval.Create(this, _T("Insurance Approval"), 10, 485, 145, 510);
	m_wndOnlyCommander.Create(this, _T("Only Commander"), 10, 515, 145, 540);
	m_wndSoldierPatient.Create(this, _T("Soldier Patient"), 150, 515, 290, 540);
	m_wndLockedDate.Create(this, _T("Locked Date"), 150, 485, 290, 510);
	m_wndPrint.Create(this, _T("&Print"), 150, 550, 250, 575);
	m_wndExport.Create(this, _T("&Export"), 255, 550, 355, 575);
	m_wndExportForIns.Create(this, _T("Export for Ins"), 360, 550, 440, 575);
	m_wndCardList.Create(this,15, 145, 430, 250); 
	m_wndDeptList.Create(this,15, 285, 430, 445); 

}
void CPMInsuranceCost80A::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(75);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);


	m_wndCardList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndCardList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 300);
	m_wndCardList.SetCheckBox(TRUE);


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

}
void CPMInsuranceCost80A::OnSetWindowEvents()
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
	m_wndByDischargedDate.SetEvent(WE_CLICK, _OnByDischargedDateSelectFnc);
	m_wndDischargedDateUnpaid.SetEvent(WE_CLICK, _OnDischargedDateUnpaidSelectFnc);
	m_wndDischargedDatePaid.SetEvent(WE_CLICK, _OnDischargedDatePaidSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndExportForIns.SetEvent(WE_CLICK, _OnExportForInsSelectFnc);
	m_wndCardList.SetEvent(WE_SELCHANGE, _OnCardListSelectChangeFnc);
	m_wndCardList.SetEvent(WE_LOADDATA, _OnCardListLoadDataFnc);
	m_wndCardList.SetEvent(WE_DBLCLICK, _OnCardListDblClickFnc);

	m_wndCardList.SetWindowText(_T(""));
	m_wndCardList.AddEvent(1, _T("Check All"), _OnCardListCheckAllFnc);
	m_wndCardList.AddEvent(2, _T("UnCheck All"), _OnCardListUnCheckAllFnc);

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
	OnDeptListLoadData();
	OnCardListLoadData();

}
void CPMInsuranceCost80A::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndByDischargedDate.GetDlgCtrlID(), m_bByDischargedDate);
	DDX_Check(pDX, m_wndDischargedDateUnpaid.GetDlgCtrlID(), m_bDischargedDateUnpaid);
	DDX_Check(pDX, m_wndDischargedDatePaid.GetDlgCtrlID(), m_bDischargedDatePaid);
	DDX_Check(pDX, m_wndInsuranceApproval.GetDlgCtrlID(), m_bInsuranceApproval);
	DDX_Check(pDX, m_wndOnlyCommander.GetDlgCtrlID(), m_bOnlyCommander);
	DDX_Check(pDX, m_wndSoldierPatient.GetDlgCtrlID(), m_bSoldierPatient);
	DDX_Check(pDX, m_wndLockedDate.GetDlgCtrlID(), m_bLockedDate);
}
void CPMInsuranceCost80A::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMInsuranceCost80A::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMInsuranceCost80A::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bIsInsPurpose = FALSE;
	m_bByDischargedDate=FALSE;
	m_bDischargedDateUnpaid=FALSE;
	m_bDischargedDatePaid=FALSE;
	m_bInsuranceApproval = FALSE;
	m_bShowDiff = FALSE;
	m_bLockedDate = FALSE;
}
int CPMInsuranceCost80A::SetMode(int nMode){
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
/*void CPMInsuranceCost80A::OnYearChange(){
	
} */
/*void CPMInsuranceCost80A::OnYearSetfocus(){
	
} */
/*void CPMInsuranceCost80A::OnYearKillfocus(){
	
} */
int CPMInsuranceCost80A::OnYearCheckValue()
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
void CPMInsuranceCost80A::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMInsuranceCost80A::OnReportPeriodSelendok()
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
/*void CPMInsuranceCost80A::OnReportPeriodSetfocus(){
	
}*/
/*void CPMInsuranceCost80A::OnReportPeriodKillfocus(){
	
}*/
long CPMInsuranceCost80A::OnReportPeriodLoadData()
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
/*void CPMInsuranceCost80A::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMInsuranceCost80A::OnFromDateChange(){
	
} */
/*void CPMInsuranceCost80A::OnFromDateSetfocus(){
	
} */
/*void CPMInsuranceCost80A::OnFromDateKillfocus(){
	
} */
int CPMInsuranceCost80A::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMInsuranceCost80A::OnToDateChange(){
	
} */
/*void CPMInsuranceCost80A::OnToDateSetfocus(){
	
} */
/*void CPMInsuranceCost80A::OnToDateKillfocus(){
	
} */
int CPMInsuranceCost80A::OnToDateCheckValue(){
	return 0;
} 
void CPMInsuranceCost80A::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMInsuranceCost80A::OnClerkSelendok(){
	 
}
/*void CPMInsuranceCost80A::OnClerkSetfocus(){
	
}*/
/*void CPMInsuranceCost80A::OnClerkKillfocus(){
	
}*/
long CPMInsuranceCost80A::OnClerkLoadData()
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
/*void CPMInsuranceCost80A::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMInsuranceCost80A::OnByDischargedDateSelect(){
	UpdateData(true);
	if (m_bDischargedDateUnpaid)
		m_wndDischargedDateUnpaid.SetCheck(false);
	if (m_bDischargedDatePaid)
		m_wndDischargedDatePaid.SetCheck(false);
}
void CPMInsuranceCost80A::OnDischargedDateUnpaidSelect(){
	UpdateData(true);
	if (m_bByDischargedDate)
		m_wndByDischargedDate.SetCheck(false);
	if (m_bDischargedDatePaid)
		m_wndDischargedDatePaid.SetCheck(false);
}
void CPMInsuranceCost80A::OnDischargedDatePaidSelect(){
	UpdateData(true);
	if (m_bByDischargedDate)
		m_wndByDischargedDate.SetCheck(false);
	if (m_bDischargedDateUnpaid)
		m_wndDischargedDateUnpaid.SetCheck(false);
}
void CPMInsuranceCost80A::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."),
		               _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};
	
	szSQL = GetQueryString();
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);

	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOAN_MAU80A.RPT")))
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), m_szClerkKey);

	rs.GetValue(_T("invoiceno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	int nIndex = 1;

	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine, szSumOfline;

	CReportSection* rptDetail;
	double grpCost[26], grpLine[26], ttlCost[26], grpOfLine[26];
	double cost = 0;

	for (int i = 0; i < 26; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i] =0;
	}

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("insline"), szNewLine);

		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField, szAmount;

			/*if (grpOfLine[20] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "), szAmount, szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}*/

			if (grpCost[11] > 0)
			{					
				TranslateString(_T("Total Group"), szAmount);

				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(11);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);

				rptDetail->SetValue(_T("TotalGroup"), tmpStr);

				for (int i = 11; i < 26; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					//_msg(_T("%s"), tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					//grpLine[i] = 0;
					grpCost[i] = 0;
				}
			}

			if (grpLine[11] > 0)
			{
				TranslateString(_T("Total Line"), szAmount);

				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), szAmount, szLineName);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 11; i < 26; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);		
					ttlCost[i] += grpLine[i];
					grpLine[i] = 0;
				}
			}

			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetFaceSize(11);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetBold(true);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));

			rs.GetValue(_T("linename"), szLineName);
			rptDetail->SetValue(_T("GroupName"), szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			szOldLine = szNewLine;
			szOldOfLine.Empty();
			szOldGroup.Empty();

			nIndex = 1;
		}

		rs.GetValue(_T("insgroup"), szNewGroup);

		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			CString szField, szAmount;
			/*if (grpOfLine[8] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}*/
			if (grpCost[11] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));

				tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);

				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 11; i < 26; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);				
					grpCost[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), szNewGroup + _T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			szOldGroup = szNewGroup;
			szOldOfLine.Empty();
			nIndex = 1;
		}

		/*rs.GetValue(_T("hdline"), szNewOfLine);

		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty())
		{
			CString szField, szAmount;
			if (grpOfLine[9] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i = 9; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}
			
			if (szNewOfLine == _T("0") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("a");
			}
			else
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("b");
			}
			
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(9);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),tmpStr);
			szOldOfLine = szNewOfLine;			
			nIndex = 1;
		}*/

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("mbirthyear"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fbirthyear"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		/*rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);*/

		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("regplace"), tmpStr);
		tmpStr.Insert(2, _T("-"));
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("admitdate"), tmpStr);
		//tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("dischargedate"), tmpStr);
		//tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("totaltreat"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("cost"), cost);
		grpCost[11] += cost;
		grpLine[11] += cost;
		//grpOfLine[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		
		rs.GetValue(_T("testfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		//grpOfLine[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		//grpOfLine[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		//grpOfLine[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		//grpOfLine[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);				

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		//grpOfLine[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		//grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("replace_materialfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		//grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		//grpOfLine[17] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);		

		rs.GetValue(_T("drugfeek"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		//grpOfLine[18] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);
		
		rs.GetValue(_T("bedfee"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		//grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("transportfee"), cost);;
		grpCost[22] += cost;
		grpLine[22] += cost;
		//grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);	

		rs.GetValue(_T("patpaid"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		//grpOfLine[21] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		//grpOfLine[22] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr);
		
		rs.MoveNext();
	}

	for (int i = 11; i < 26; i++)
	{
		ttlCost[i] += grpLine[i];
	}
	
	/*if (grpOfLine[20] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("\x43\x1ED9ng"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szSumOfline);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =10; i < 24; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}	
	}*/

	if (grpCost[11] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 11; i < 26; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	}

	if (grpLine[11] > 0)
	{		
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(11);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), szAmount, szLineName);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 11; i < 26; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	}

	if (ttlCost[11] > 0)
	{
		CString szField, szAmount;

		TranslateString(_T("Total Amount:"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(12);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i = 11; i < 26; i++)
		{
			
			szField.Format(_T("S%d"), i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);		
		}

	}

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();	
	rpt.PrintPreview();
} 

void CPMInsuranceCost80A::OnExportForInsSelect(){
	m_bIsInsPurpose = true;
	OnExportSelect();
	m_bIsInsPurpose = false;
}

void CPMInsuranceCost80A::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szFromDateToDate;
	CString szDate;
	CString szMonth, szYear;

	BeginWaitCursor();
	UpdateData(TRUE);

	szSQL = GetQueryString();

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);

	if (dt1.GetYear() == dt2.GetYear())
		szYear.Format(_T("%d"), dt1.GetYear());
	else
		szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth())
		szMonth.Format(_T("%d"), dt1.GetMonth());
	else
		szMonth.Format(_T("%d"), dt2.GetMonth());

	CExcel xls;

	xls.CreateSheet(1);
	xls.SetWorksheet(0);	

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 17);
	xls.SetColumnWidth(2, 7);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 8);

	xls.SetColumnWidth(6, 24);

	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);

	xls.SetColumnWidth(9, 6);

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
	xls.SetColumnWidth(23, 8);
	xls.SetColumnWidth(24, 8);

	xls.SetColumnWidth(25, 6);

	xls.SetColumnWidth(26, 9);

	xls.SetColumnWidth(27, 6);
	xls.SetColumnWidth(28, 5);

	xls.SetColumnWidth(29, 6);
	xls.SetColumnWidth(30, 7);
	xls.SetColumnWidth(31, 10);
	xls.SetColumnWidth(32, 10);
	xls.SetColumnWidth(33, 44);

	xls.SetColumnWidth(34, 8);
	xls.SetColumnWidth(35, 9);
	xls.SetColumnWidth(36, 6);
	xls.SetColumnWidth(37, 8);
	xls.SetColumnWidth(38, 8);
	xls.SetColumnWidth(39, 6);
	xls.SetColumnWidth(40, 8);
	xls.SetColumnWidth(41, 8);
	xls.SetColumnWidth(42, 7);
	xls.SetColumnWidth(43, 5);
	xls.SetColumnWidth(46, 20);
	xls.SetColumnWidth(47, 10);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);

	xls.SetCellMergedColumns(37, 1, 7);
	xls.SetCellMergedColumns(37, 2, 7);

	xls.SetCellMergedColumns(0, 3, 44);
	xls.SetCellMergedColumns(0, 4, 44);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(37, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA TH\x41NH TO\xC1N \x43HI PH\xCD KH\xC1M \x43H\x1EEE\x41 \x42\x1EC6NH N\x1ED8I TR\xDA"), FMT_TEXT|FMT_CENTER, true, 18);
	
	TranslateString(_T("From Date"), tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr,
		                    CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	TranslateString(_T("To Date"), tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr,
		                          CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));	
	xls.SetCellText(0, 4, szFromDateToDate, FMT_TEXT | FMT_CENTER, true, 12);

	int nRow = 6, nCol = 0;

	xls.SetCellText(0, nRow, _T("stt"), FMT_TEXT);
	xls.SetCellText(1, nRow, _T("hoten"), FMT_TEXT);	
	xls.SetCellText(2, nRow, _T("namsinh"), FMT_TEXT);
	xls.SetCellText(3, nRow, _T("gioitinh"), FMT_TEXT);
	xls.SetCellText(4, nRow, _T("mathe"), FMT_TEXT);

	xls.SetCellText(5, nRow, _T("ma_dkbd"), FMT_TEXT);
	
	xls.SetCellText(6, nRow, _T("mabenh"), FMT_TEXT);

	xls.SetCellText(7, nRow, _T("ngay_vao"), FMT_TEXT);

	xls.SetCellText(8, nRow, _T("ngay_ra"), FMT_TEXT);
	xls.SetCellText(9, nRow, _T("ngay_dtr"), FMT_TEXT);
	
	xls.SetCellText(10, nRow, _T("t_tongchi"), FMT_TEXT);
	xls.SetCellText(11, nRow, _T("t_xn"), FMT_TEXT);	
	xls.SetCellText(12, nRow, _T("t_cdha"), FMT_TEXT);
	xls.SetCellText(13, nRow, _T("t_thuoc"), FMT_TEXT);
	xls.SetCellText(14, nRow, _T("t_mau"), FMT_TEXT);	
	xls.SetCellText(15, nRow, _T("t_pttt"), FMT_TEXT);
	xls.SetCellText(16, nRow, _T("t_vtytth"), FMT_TEXT);
	xls.SetCellText(17, nRow, _T("t_vtyttt"), FMT_TEXT);
	xls.SetCellText(18, nRow, _T("t_dvktc"), FMT_TEXT);	
	xls.SetCellText(19, nRow, _T("t_ktg"), FMT_TEXT);
	xls.SetCellText(20, nRow, _T("t_giuong"), FMT_TEXT);
	xls.SetCellText(21, nRow, _T("t_vchuyen"), FMT_TEXT);	
	
	xls.SetCellText(22, nRow, _T("t_bnct"), FMT_TEXT);	
	xls.SetCellText(23, nRow, _T("t_bhtt"), FMT_TEXT);
	xls.SetCellText(24, nRow, _T("t_ngoaids"), FMT_TEXT);

	xls.SetCellText(25, nRow, _T("lydo_vv"), FMT_TEXT);
	xls.SetCellText(26, nRow, _T("benhkhac"), FMT_TEXT);
	xls.SetCellText(27, nRow, _T("noikcb"), FMT_TEXT);
	xls.SetCellText(28, nRow, _T("khoa"), FMT_TEXT);
	xls.SetCellText(29, nRow, _T("nam_qt"), FMT_TEXT);
	xls.SetCellText(30, nRow, _T("thang_qt"), FMT_TEXT);
	

	xls.SetCellText(31, nRow, _T("gt_tu"), FMT_TEXT);
	xls.SetCellText(32, nRow, _T("gt_den"), FMT_TEXT);
	xls.SetCellText(33, nRow, _T("diachi"), FMT_TEXT);

	xls.SetCellText(34, nRow, _T("giamdinh"), FMT_TEXT);
	xls.SetCellText(35, nRow, _T("t_xuattoan"), FMT_TEXT);

	xls.SetCellText(36, nRow, _T("lydo_xt"), FMT_TEXT);
	xls.SetCellText(37, nRow, _T("t_datuyen"), FMT_TEXT);
	xls.SetCellText(38, nRow, _T("t_vuottran"), FMT_TEXT);

	xls.SetCellText(39, nRow, _T("loaikcb"), FMT_TEXT);
	xls.SetCellText(40, nRow, _T("noi_ttoan"), FMT_TEXT);
	xls.SetCellText(41, nRow, _T("sophieu"), FMT_TEXT);
	xls.SetCellText(42, nRow, _T("maicd10"), FMT_TEXT);
	xls.SetCellText(43, nRow, _T("tuyen"), FMT_TEXT);
	nCol = 44;
	if (m_bIsInsPurpose)
	{
		xls.SetCellText(nCol++, nRow, _T("nhom"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("ngay_tt"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("tt_vtyttt"), FMT_TEXT);
	}
	if (m_bShowDiff)
		xls.SetCellText(nCol++, nRow, _T("chenh"), FMT_TEXT);
	if (m_bSoldierPatient)
	{
		xls.SetCellText(nCol++, nRow, _T("ky_hieu"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("noi_lam_viec"), FMT_TEXT);
	}
	xls.SetCellText(nCol++, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	int nIndex = 1, nTemp = 0, nIncrement = 0;
	double nCost = 0;
	double nTotal[14];
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);
	
	CDate date;
	CString szNewLine, szOldLine;
	CString szNewGroup, szOldGroup;
	nCol = 0;//reinit
	for (int i = 0; i < 14; i++)
		nTotal[i] = 0;
	while (!rs.IsEOF())
	{
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insline"), szNewLine);

		if (szOldLine != szNewLine && !szNewLine.IsEmpty())
		{
			nRow++;
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			rs.GetValue(_T("linename"), tmpStr);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szTemp.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			xls.SetCellText(nCol + 1, nRow, szTemp, FMT_TEXT, true);
			szOldLine = szNewLine;
			szOldGroup.Empty();
		}
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insgroup"), szNewGroup);

		if (szOldGroup != szNewGroup && !szNewGroup.IsEmpty())
		{
			nRow++;
			xls.SetCellText(nCol, nRow, szNewGroup, FMT_TEXT, true);
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			tmpStr.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIndex = 1;
		}

		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		if (tmpStr == _T("F"))
		{
			rs.GetValue(_T("fbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);

			xls.WriteNumber(nRow, nCol + 3, 2, &xlsFormat);
		}
		else
		{
			rs.GetValue(_T("mbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);

			xls.WriteNumber(nRow, nCol + 3, 1, &xlsFormat);
		}
		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dischargedate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totaltreat"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("cost"), nCost);
		nTotal[0] += nCost;
		xls.WriteNumber(nRow, nCol + 10, nCost, &xlsFormat);

		rs.GetValue(_T("testfee"), nCost);
		nTotal[1] += nCost;
		xls.WriteNumber(nRow, nCol + 11, nCost, &xlsFormat);

		rs.GetValue(_T("pacsfee"), nCost);
		nTotal[2] += nCost;
		xls.WriteNumber(nRow, nCol + 12, nCost, &xlsFormat);

		rs.GetValue(_T("drugfee"), nCost);
		nTotal[3] += nCost;
		xls.WriteNumber(nRow, nCol + 13, nCost, &xlsFormat);

		rs.GetValue(_T("bloodfee"), nCost);
		nTotal[4] += nCost;
		xls.WriteNumber(nRow, nCol + 14, nCost, &xlsFormat);

		rs.GetValue(_T("normtechfee"), nCost);
		nTotal[5] += nCost;
		xls.WriteNumber(nRow, nCol + 15, nCost, &xlsFormat);

		rs.GetValue(_T("materialfee"), nCost);
		nTotal[6] += nCost;
		xls.WriteNumber(nRow, nCol + 16, nCost, &xlsFormat);

		rs.GetValue(_T("replace_materialfee"), nCost);
		nTotal[7] += nCost;
		xls.WriteNumber(nRow, nCol + 17, nCost, &xlsFormat);

		rs.GetValue(_T("hitechfee"), nCost);
		nTotal[8] += nCost;
		xls.WriteNumber(nRow, nCol + 18, nCost, &xlsFormat);

		rs.GetValue(_T("drugfeek"), nCost);
		nTotal[9] += nCost;
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);

		rs.GetValue(_T("bedfee"), nCost);
		nTotal[10] += nCost;
		xls.WriteNumber(nRow, nCol + 20, nCost, &xlsFormat);

		/*rs.GetValue(_T("transportfee"), nCost);
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);*/

		rs.GetValue(_T("patpaid"), nCost);
		nTotal[12] += nCost;
		xls.WriteNumber(nRow, nCol + 22, nCost, &xlsFormat);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[13] += nCost;
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);

		/*rs.GetValue(_T("ratefee"), nCost);
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);*/

		rs.GetValue(_T("emergency"), tmpStr);
		if (tmpStr == _T("Y"))
			nTemp = 2;
		else
		{
			rs.GetValue(_T("hdline"), tmpStr);
			if (tmpStr == _T("1"))
			{
				nTemp = 0;
			}
			else
			{
				nTemp = 1;
			}
		}
		
		xls.WriteNumber(nRow, nCol + 25, nTemp, &xlsFormat);

		rs.GetValue(_T("reldisease"), tmpStr);
		xls.SetCellText(nCol + 26, nRow, tmpStr, FMT_TEXT);

		tmpStr.Format(_T("%s"), pMF->m_CompanyInfo.sc_id);
		xls.SetCellText(nCol + 27, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 28, nRow, tmpStr, FMT_TEXT);

		nCost = str2double(szYear);
		xls.WriteNumber(nRow, nCol + 29, nCost, &xlsFormat);

		nCost = str2double(szMonth);
		xls.WriteNumber(nRow, nCol + 30, nCost, &xlsFormat);
		
		rs.GetValue(_T("regdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 31, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("expdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 32, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 33, nRow, tmpStr, FMT_TEXT);

		xls.WriteNumber(nRow, nCol + 35, 0, &xlsFormat);

		xls.WriteNumber(nRow, nCol + 37, 0, &xlsFormat);
		xls.WriteNumber(nRow, nCol + 38, 0, &xlsFormat);

		xls.SetCellText(nCol + 39, nRow, _T("NOI"), FMT_TEXT);
		xls.SetCellText(nCol + 40, nRow, _T("\x43SK\x43\x42"), FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 41, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hcr_mainicd"), tmpStr);
		xls.SetCellText(nCol + 42, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("insline"), tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_INTEGER);

		//xls.SetCellText(nCol + 40, nRow, _T("\x30\x31"), FMT_TEXT);
		nIncrement = 0;
		if (m_bIsInsPurpose)
		{
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bShowDiff)
		{
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bSoldierPatient)
		{
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
			nIncrement++;             
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
			nIncrement++;
		}  
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_discount")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_diffpaid")), FMT_TEXT);
		rs.MoveNext();
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
	for (int i = 0; i < 14; i++)
	{
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+10, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\ChiphikhambenhBHYT_80a.xls"));
	EndWaitCursor();
}

void CPMInsuranceCost80A::OnCardListDblClick()
{
	
} 
void CPMInsuranceCost80A::OnCardListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPMInsuranceCost80A::OnCardListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CPMInsuranceCost80A::OnCardListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	m_wndCardList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" select hig_note as itemid, hig_name as itemname") \
				_T(" from hms_insurance_group") \
				_T(" order by hig_group, hig_idx"));

	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF())
	{ 
		m_wndCardList.AddItems(
			rs.GetValue(_T("itemid")), 
			rs.GetValue(_T("itemname")), NULL);
		rs.MoveNext();
	}

	m_wndCardList.EndLoad(); 
	return nCount;
}

void CPMInsuranceCost80A::OnDeptListDblClick(){
	
} 
void CPMInsuranceCost80A::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPMInsuranceCost80A::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMInsuranceCost80A::OnDeptListLoadData()
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
int CPMInsuranceCost80A::OnAddPMInsuranceCost80A(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMInsuranceCost80A::OnEditPMInsuranceCost80A(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMInsuranceCost80A::OnDeletePMInsuranceCost80A(){
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
 		OnCancelPMInsuranceCost80A();
 	}
	return 0;
}
int CPMInsuranceCost80A::OnSavePMInsuranceCost80A(){
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
 		//OnPMInsuranceCost80AListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMInsuranceCost80A::OnCancelPMInsuranceCost80A(){
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
int CPMInsuranceCost80A::OnPMInsuranceCost80AListLoadData(){
	return 0;
}

int CPMInsuranceCost80A::OnCardListCheckAll()
{
	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (!m_wndCardList.GetCheck(i))
		{
			m_wndCardList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CPMInsuranceCost80A::OnCardListUnCheckAll()
{
	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			m_wndCardList.SetCheck(i, FALSE);
		}
	}
	return 0;
}

int CPMInsuranceCost80A::OnDeptListCheckAll()
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

int CPMInsuranceCost80A::OnDeptListUnCheckAll()
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

CString CPMInsuranceCost80A::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szSubWhere, szOrderBy, szTable, szGroup, szObjectCondition;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();


	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			nIndex = 0;

			if (tmpStr.Find(_T(',')) > -1)
			{
				for (int i = 0; i < tmpStr.GetLength(); i++)
				{
					if (tmpStr[i] == _T(','))
					{
						szTemp = tmpStr.Mid(nIndex, i - nIndex);
						nIndex = i + 1;
						if (!szCards.IsEmpty())
							szCards += _T(",");
						szCards.AppendFormat(_T("'%s'"), szTemp);
					}
				}

				szTemp = tmpStr.Right(tmpStr.GetLength() - nIndex);
			}
			else
			{
				szTemp = tmpStr;
			}

			if (!szCards.IsEmpty())
				szCards += _T(",");

			szCards.AppendFormat(_T("'%s'"), szTemp);
		}
	}

	if (!szCards.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!szMaterialID.IsEmpty())
			szMaterialID += _T(", ");
		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
		rs.MoveNext();
	}
	if (!szMaterialID.IsEmpty())
		szMaterialID += _T(", ");
	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname");
	
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') ") \
							_T("  AND hcrf_acceptedfee IN ('P', 'Y')"), m_szFromDate, m_szToDate);
	else if (m_bDischargedDateUnpaid)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') ") \
							_T("  AND hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bDischargedDatePaid)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') ") \
							_T("  AND hcrf_acceptedfee = 'P'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') ") \
							_T("  AND hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND fi.hfe_lockeddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') ") \
							 _T(" AND fi.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') ") \
							_T("  AND fi.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szSubWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND length(hc_cardno) > 0");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");
	szSubWhere += szObjectCondition;
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000'"));
	szGroup = _T("C0000");
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	//Hien chenh lech tat ca doi tuong
	m_bShowDiff = true;
	if (m_bShowDiff)
		szSubSQL.Format(_T("UNION ALL") \
				_T("		SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') ") \
				_T("		 THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
				_T("		 ELSE 0 END AS diffpaid, 0, 0, 0") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno  AND hcrf_invoicefee = fi.hfe_invoiceno)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount = 0 AND fe.hfe_category <> 'Y' AND hcr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("    %s"), szWhere);
	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' then extract(year from hp_birthdate) else 0 end AS mbirthyear,") \
				_T("        case when hp_sex='F' then extract(year from hp_birthdate) else 0 end AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hd_cardno) > 15 THEN SUBSTR(hd_cardno,1,15) ELSE hd_cardno END AS cardno,") \
				_T("        hd_insregdate AS regdate,") \
				_T("        hd_insexpdate AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("		(select ss_vndesc from sys_sel where ss_id = 'hms_rank' and ss_code = hd_rank) soldier_rank,") \
				_T("		hp_workplace work_place,") \
				_T("        (SELECT distinct ss_default FROM sys_sel WHERE ss_id='hms_insline' ") \
				_T("		AND ss_code=CAST(hc_line AS NVARCHAR2(15))) AS linename,") \
				_T("        (SELECT distinct hig_group FROM hms_insurance_group WHERE hig_idx= hc_groupid) AS insgroup,") \
				_T("        TO_CHAR(hcr_admitdate, 'DD/MM/YYYY') AS admitdate,") \
				_T("        TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY') AS dischargedate,") \
				_T("        hcr_sumtreat AS totaltreat,") \
				_T("        hcr_mainicd,") \
				_T("        hcr_maindisease AS icd10,") \
				_T("        case when hd_admitdept='C1.3' then 'Y' else 'N' end AS emergency,") \
				_T("        lower(deptid) AS deptid,") \
				_T("		TO_CHAR(invoice_date, 'DD/MM/YYYY') invoice_date,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(replace_materialfee)) AS replace_materialfee,") \
				_T("        round(SUM(ref_materialfee)) AS ref_materialfee,") \
				_T("        round(SUM(bedfee)) AS bedfee,") \
				_T("        round(SUM(transportfee)) AS transportfee,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid)) ELSE ROUND(SUM(inspaid)) END AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("		round(SUM(scoliosisfee)) scoliosisfee,") \
				_T("		round(SUM(l_materialfee)) l_materialfee,") \
				_T("		round(SUM(l_discount)) l_discount,") \
				_T("		round(SUM(l_materialfee - l_discount)) l_diffpaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_discount)) ELSE ROUND(SUM(discount)) END AS inspaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid - v_discount)) ELSE ROUND(SUM(inspaid-discount)) END AS patpaid,") \
				_T("		round(SUM(diffpaid)) AS diffpaid") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000' OR fe.hfe_group = 'B1800') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND NVL(hfl_bloodfee, 'X') <> 'Y' AND fe.hfe_group <> 'B1800'") \
				_T("		 AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN (fe.hfe_group IN (%s) AND fe.hfe_group <> 'A2000') AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN (%s) AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS replace_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN (%s) AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_cost ELSE 0 END AS ref_materialfee,") \
				_T("         CASE WHEN fe.hfe_group='%s' THEN fe.hfe_inspaid ELSE 0 END AS bedfee,") \
				_T("         CASE WHEN fe.hfe_group='E0000' THEN fe.hfe_inspaid ELSE 0 END AS transportfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("		 0 scoliosisfee,") \
				_T("		 CASE WHEN fe.hfe_feegroup = 'OPT_L' AND fe.hfe_type = 'D' THEN fe.hfe_inspaid ELSE 0 END l_materialfee,") \
				_T("		 0 l_discount, ") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_diffcost ELSE 0 END diffpaid, 0 is_scoliosis, 0 v_inspaid, 0 v_discount ") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno  AND hcrf_invoicefee = fi.hfe_invoiceno)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' AND hcr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("   %s") \
				_T("   UNION ALL") \
				_T("   SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN fe.hfe_discount ELSE 0 END,") \
				_T("		 0, CASE WHEN NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END,")
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 0 ELSE fe.hfe_diffcost END diffpaid,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END is_scoliosis, fe.hfe_inspaid, fe.hfe_discount") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND hcrf_invoicefee = fi.hfe_invoiceno)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_operation ON (ho_docno = hcr_docno AND ho_itemid = hfe_subgroup AND ho_idx = hfe_orderid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' AND hcr_status='T'") \
				_T("         AND fe.hfe_type = 'V' ") \
				_T("   %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN hms_icd ON(hcr_mainicd=hi_icd)") \
				_T(" WHERE 1=1 ") \
				_T(" %s") \
				_T(" GROUP BY hd_docno, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hd_cardno, hd_insline, hd_rank, hp_workplace,") \
				_T("		  hc_groupid, hc_line, hd_insline, hc_regcode, hcr_mainicd, hcr_maindisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		  hcr_sumtreat, hp_provid, hp_distid, hp_villid, hd_insregdate, hd_insexpdate, hcr_reldisease, hi_name, ") \
				_T("		  hd_emergency, deptid, hd_admitdept, invoice_date") \
				_T(" HAVING SUM(cost) > 0 AND SUM(inspaid-discount) >= 0") \
				_T(" ORDER BY ") \
				_T(" %s"), szMaterialID, szMaterialID, szMaterialID, szGroup, szWhere, szWhere, szSubSQL, szSubWhere, szOrderBy);
_fmsg(_T("%s"), szSQL);
	return szSQL;
}
