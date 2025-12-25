#include "stdafx.h"
#include "TMOperationList2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationList2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMOperationList2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMOperationList2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationList2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationList2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMOperationList2* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CTMOperationList2 *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CTMOperationList2 *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMOperationList2 *pVw = (CTMOperationList2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMOperationList2 *pVw = (CTMOperationList2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CTMOperationList2*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CTMOperationList2*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CTMOperationList2*)pWnd)->OnPolicySelect();
}
static void _OnOperationSelectFnc(CWnd *pWnd){
	 ((CTMOperationList2*)pWnd)->OnOperationSelect();
}
static void _OnSurgerySelectFnc(CWnd *pWnd){
	 ((CTMOperationList2*)pWnd)->OnSurgerySelect();
}
static void _OnSendedSelectFnc(CWnd *pWnd){
	((CTMOperationList2*)pWnd)->OnSendedSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	((CTMOperationList2*)pWnd)->OnPerformedSelect();
}
static void _OnDischargedPaidSelectFnc(CWnd *pWnd){
	((CTMOperationList2*)pWnd)->OnDischargedPaidSelect();
}
static int _OnAddTMOperationList2Fnc(CWnd *pWnd){
	 return ((CTMOperationList2*)pWnd)->OnAddTMOperationList2();
} 
static int _OnEditTMOperationList2Fnc(CWnd *pWnd){
	 return ((CTMOperationList2*)pWnd)->OnEditTMOperationList2();
} 
static int _OnDeleteTMOperationList2Fnc(CWnd *pWnd){
	 return ((CTMOperationList2*)pWnd)->OnDeleteTMOperationList2();
} 
static int _OnSaveTMOperationList2Fnc(CWnd *pWnd){
	 return ((CTMOperationList2*)pWnd)->OnSaveTMOperationList2();
} 
static int _OnCancelTMOperationList2Fnc(CWnd *pWnd){
	 return ((CTMOperationList2*)pWnd)->OnCancelTMOperationList2();
} 
CTMOperationList2::CTMOperationList2(CWnd* pParent){

	m_nDlgWidth = 470;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CTMOperationList2::~CTMOperationList2(){
}
void CTMOperationList2::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 460, 180);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 230, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 235, 30, 325, 55);
	m_wndReportPeriod.Create(this,330, 30, 455, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 230, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 60, 325, 85);
	m_wndToDate.Create(this,330, 60, 455, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 100, 115);
	m_wndDept.Create(this,105, 90, 455, 115); 
	m_wndSended.Create(this, _T("Sended"), 10, 120, 100, 145);
	m_wndPerformed.Create(this, _T("Performed"), 105, 120, 205, 145);
	m_wndDischargedPaid.Create(this, _T("Discharged Paid"), 210, 120, 315, 145);
	m_wndInsurance.Create(this, _T("Insurance"), 10, 150, 100, 175);
	m_wndService.Create(this, _T("Service"), 105, 150, 205, 175);
	m_wndPolicy.Create(this, _T("Policies"), 210, 150, 315, 175);
	m_wndOperation.Create(this, _T("Operation"), 8, 185, 100, 210);
	m_wndSurgery.Create(this, _T("Surgery"), 105, 185, 205, 210);
	//m_wndPrint.Create(this, _T("Print"), 253, 185, 353, 210);
	m_wndExport.Create(this, _T("&Export"), 358, 185, 458, 210);

}
void CTMOperationList2::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);





}
void CTMOperationList2::OnSetWindowEvents(){
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
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndSurgery.SetEvent(WE_CLICK, _OnSurgerySelectFnc);
	m_wndSended.SetEvent(WE_CLICK, _OnSendedSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	m_wndDischargedPaid.SetEvent(WE_CLICK, _OnDischargedPaidSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddTMOperationList2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTMOperationList2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTMOperationList2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTMOperationList2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelTMOperationList2Fnc, 0, 'T', VK_CONTROL);
	CString szSQL;
	SetMode(VM_ADD);
	
	

}
void CTMOperationList2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndOperation.GetDlgCtrlID(), m_bOperation);
	DDX_Check(pDX, m_wndSurgery.GetDlgCtrlID(), m_bSurgery);
	DDX_Check(pDX, m_wndSended.GetDlgCtrlID(), m_bSended);
	DDX_Check(pDX, m_wndPerformed.GetDlgCtrlID(), m_bPerformed);
	DDX_Check(pDX, m_wndDischargedPaid.GetDlgCtrlID(), m_bDischargedPaid);

}
void CTMOperationList2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMOperationList2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMOperationList2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nInsurance=0;
	m_nService=1;
	m_nPolicy=1;
	m_bOperation=FALSE;
	m_bSurgery=TRUE;
	m_bSended=FALSE;
	m_bPerformed=FALSE;
	m_bDischargedPaid=FALSE;

}
int CTMOperationList2::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL, szSysDate;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			szSysDate = pMF->GetSysDate();
			m_nYear = ToInt(szSysDate.Left(4));
			m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
			m_szFromDate = m_szToDate = pMF->GetSysDate();
			m_szFromDate += _T(" 00:00");
			m_szToDate += _T(" 23:59");
			
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
/*void CTMOperationList2::OnYearChange(){
	
} */
/*void CTMOperationList2::OnYearSetfocus(){
	
} */
/*void CTMOperationList2::OnYearKillfocus(){
	
} */
int CTMOperationList2::OnYearCheckValue(){
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
void CTMOperationList2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMOperationList2::OnReportPeriodSelendok(){
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
/*void CTMOperationList2::OnReportPeriodSetfocus(){
	
}*/
/*void CTMOperationList2::OnReportPeriodKillfocus(){
	
}*/
long CTMOperationList2::OnReportPeriodLoadData(){
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
/*void CTMOperationList2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMOperationList2::OnFromDateChange(){
	
} */
/*void CTMOperationList2::OnFromDateSetfocus(){
	
} */
/*void CTMOperationList2::OnFromDateKillfocus(){
	
} */
int CTMOperationList2::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMOperationList2::OnToDateChange(){
	
} */
/*void CTMOperationList2::OnToDateSetfocus(){
	
} */
/*void CTMOperationList2::OnToDateKillfocus(){
	
} */
int CTMOperationList2::OnToDateCheckValue(){
	return 0;
} 
void CTMOperationList2::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMOperationList2::OnDeptSelendok(){
	 
}
/*void CTMOperationList2::OnDeptSetfocus(){
	
}*/
/*void CTMOperationList2::OnDeptKillfocus(){
	
}*/
long CTMOperationList2::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
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
/*void CTMOperationList2::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMOperationList2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMOperationList2::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szMoneyInWord, szTemp;
	int nIdx = 1, nRow = 0,nCol=0;
	double nAmount = 0, nTotalAmount = 0;
	double nTotalGroup[4];
	for(int i=0;i <4;i++)
	{
		nTotalGroup[i]=0;
	}
	CStringArray arrCol;
	szSQL = GetQuerySring();
	//_msg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 21);
	xls.SetColumnWidth(2, 21);
	xls.SetColumnWidth(3, 25);
	xls.SetColumnWidth(4, 5);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 5);
	xls.SetColumnWidth(7, 5);
	xls.SetColumnWidth(8, 6);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 6);
	xls.SetColumnWidth(11, 12);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 11);
	xls.SetColumnWidth(14, 9);
	xls.SetColumnWidth(15, 30);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(4, 0, 8);
	xls.SetCellMergedColumns(4, 1, 8);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellMergedColumns(0, 4, 13);
	xls.SetCellText(0, 0, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), 4098, true);

	xls.SetCellText(4, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), 4098, false);
	xls.SetCellText(4, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), 4098, true);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), 4098, true);
	if (m_nInsurance == 0)
		tmpStr.Format(_T("Th\x1ED1ng k\xEA \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n PTTT \x42HYT"));
	else if (m_nService == 0)
		tmpStr.Format(_T("Th\x1ED1ng k\xEA \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n PTTT \x44\x1ECA\x43H V\x1EE4"));
	else if (m_nPolicy == 0)
		tmpStr.Format(_T("Th\x1ED1ng k\xEA \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n PTTT \x42\x1ED8 \x110\x1ED8I"));
	xls.SetCellText(0, 3,tmpStr , 4098, true, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, 4098, true);
	
	nRow=6;
	xls.SetCellMergedRows(nCol,nRow,2);
	xls.SetCellText(nCol,nRow,_T("S\x1ED1 TT"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+1,nRow,2);
	xls.SetCellText(nCol+1,nRow,_T("H\x1ECD v\xE0 t\xEAn"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+2,nRow,2);
	xls.SetCellText(nCol+2,nRow,_T("SH, s\x1ED1 th\x1EBB"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+3,nRow,2);
	xls.SetCellText(nCol+3,nRow,_T("T\xEAn ph\x1EABu thu\x1EADt, th\x1EE7 thu\x1EADt"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedColumns(nCol+4,nRow,4);
	xls.SetCellText(nCol+4,nRow,_T("Ph\xE2n lo\x1EA1i PT,TT"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+4,nRow+1,_T("\x110\x1EB7\x63 \x62i\x1EC7t"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("Lo\x1EA1i \x31"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Lo\x1EA1i \x32"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+7,nRow+1,_T("Lo\x1EA1i \x33"),FMT_TEXT|FMT_WRAPING,true,10);


	xls.SetCellMergedColumns(nCol+8,nRow,3);
	xls.SetCellText(nCol+8,nRow,_T("K\xEDp th\x1EF1\x63 hi\x1EC7n"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+8,nRow+1,_T("\x43h\xEDnh"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+9,nRow+1,_T("Ph\x1EE5"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Gi\xFAp vi\x1EC7\x63"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+11,nRow,2);
	xls.SetCellText(nCol+11,nRow,_T("S\x1ED1 ti\x1EC1n"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+12,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("S\x1ED1 H\x1ED3 S\x1A1"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+13,nRow,2);
	xls.SetCellText(nCol+13,nRow,_T("S\x1ED1 \x42\x1EC7nh \xC1n"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+14,nRow,2);
	xls.SetCellText(nCol+14,nRow,_T("N\x103m sinh"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+15,nRow,2);
	xls.SetCellText(nCol+15,nRow,_T("T\xEAn ph\x1EABu thu\x1EADt th\x65o ph\x1EA7n m\x1EC1m"),FMT_TEXT|FMT_WRAPING,true,10);
	

	//Detail
	nRow = 8;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(2, nRow, rs.GetValue(_T("extra_info")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(3, nRow, rs.GetValue(_T("operation_name")), FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("groupid"),tmpStr);
		if(tmpStr==_T("B4"))
		{
			xls.SetCellText(4, nRow, rs.GetValue(_T("PTLDB")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("PTLDB"), nAmount);
			nTotalGroup[0] += nAmount;
			xls.SetCellText(5, nRow, rs.GetValue(_T("PTL1")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("PTL1"), nAmount);
			nTotalGroup[1] += nAmount;
			xls.SetCellText(6, nRow, rs.GetValue(_T("PTL2")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("PTL2"), nAmount);
			nTotalGroup[2] += nAmount;
			xls.SetCellText(7, nRow, rs.GetValue(_T("PTL3")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("PTL3"), nAmount);
			nTotalGroup[3] += nAmount;
		}
		else if (tmpStr==_T("B5"))
		{
			xls.SetCellText(4, nRow, rs.GetValue(_T("TTLDB")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("TTLDB"), nAmount);
			nTotalGroup[0] += nAmount;
			xls.SetCellText(5, nRow, rs.GetValue(_T("TTL1")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("TTL1"), nAmount);
			nTotalGroup[1] += nAmount;

			xls.SetCellText(6, nRow, rs.GetValue(_T("TTL2")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("TTL2"), nAmount);
			nTotalGroup[2] += nAmount;
			xls.SetCellText(7, nRow, rs.GetValue(_T("TTL3")), FMT_NUMBER1|FMT_WRAPING);
			rs.GetValue(_T("TTL3"), nAmount);
			nTotalGroup[3] += nAmount;
		}
		rs.GetValue(_T("practitioner"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("assistant"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT);
		if(tmpStr==_T("B4"))
		{
			rs.GetValue(_T("anethetist"),tmpStr);
			tmpStr=GetNameUser(tmpStr);
			xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);
		}else 
		{
			rs.GetValue(_T("anethetist1"),tmpStr);
			tmpStr=GetNameUser(tmpStr);
			xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);
		}
		
		rs.GetValue(_T("amount"), nAmount);
		nTotalAmount += nAmount;
		xls.SetCellText(11, nRow, double2str(nAmount), FMT_NUMBER1);

		xls.SetCellText(12, nRow, rs.GetValue(_T("doc_no")), 4098);

		xls.SetCellText(13, nRow, rs.GetValue(_T("record_no")), 4098);
		
		xls.SetCellText(14, nRow, rs.GetValue(_T("yob")), 4098);
		
		
		xls.SetCellText(15, nRow, rs.GetValue(_T("operation_name1")), FMT_TEXT|FMT_WRAPING);
		
	
		nRow++;
		rs.MoveNext();
	}
	
	if (nTotalAmount > 0)
	{
		xls.SetCellMergedColumns(1, nRow, 3);
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);

		xls.SetCellText(4,nRow,double2str(nTotalGroup[0]),FMT_NUMBER1);
		xls.SetCellText(5,nRow,double2str(nTotalGroup[1]),FMT_NUMBER1);
		xls.SetCellText(6,nRow,double2str(nTotalGroup[2]),FMT_NUMBER1);
		xls.SetCellText(7,nRow,double2str(nTotalGroup[3]),FMT_NUMBER1);
		xls.SetCellText(11, nRow, double2str(nTotalAmount), FMT_NUMBER1);

	}
	
	if(m_nInsurance==0)
		xls.Save(_T("Exports\\THONGKEDSBNPTTTBH.xls"));
	if(m_nService== 0)
		xls.Save(_T("Exports\\THONGKEDSBNPTTTDV.xls"));
	if(m_nPolicy == 0)
		xls.Save(_T("Exports\\THONGKEDSBNPTTTQUAN.xls"));


	
} 
void CTMOperationList2::OnInsuranceSelect(){
	
}
void CTMOperationList2::OnServiceSelect(){
	
}
void CTMOperationList2::OnPolicySelect(){
	
}
void CTMOperationList2::OnOperationSelect(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	
}
void CTMOperationList2::OnSurgerySelect(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMOperationList2::OnSendedSelect(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
UpdateData(true);
m_bPerformed = false ;
m_bDischargedPaid = false;
UpdateData(false);
}
void CTMOperationList2::OnPerformedSelect(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
UpdateData(true);
m_bSended = false ;
m_bDischargedPaid = false;
UpdateData(false);
}
void CTMOperationList2::OnDischargedPaidSelect(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
UpdateData(true);
m_bSended = false ;
m_bPerformed = false;
UpdateData(false);
}
int CTMOperationList2::OnAddTMOperationList2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMOperationList2::OnEditTMOperationList2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMOperationList2::OnDeleteTMOperationList2(){
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
 		OnCancelTMOperationList2();
 	}
	return 0;
}
int CTMOperationList2::OnSaveTMOperationList2(){
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
 		//OnTMOperationList2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMOperationList2::OnCancelTMOperationList2(){
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
int CTMOperationList2::OnTMOperationList2ListLoadData(){
	return 0;
}
CString CTMOperationList2::GetQuerySring(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL,szWhere;
	if(m_bDischargedPaid)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND i.hfe_status = 'P'"));
	}
	else if(m_bSended)
	{
		szWhere.AppendFormat(_T(" AND ho_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND ho_status = 'S'"));
	}
	else if(m_bPerformed)
	{
		szWhere.AppendFormat(_T(" AND ho_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND ho_status = 'T'"));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND ho_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND ho_status <> 'O'"));
	}

	if(m_bSurgery== TRUE && m_bOperation == TRUE)
		szWhere.AppendFormat(_T(" and 1=1 "));
	else if(m_bSurgery== FALSE && m_bOperation == FALSE)
		szWhere.AppendFormat(_T(" and 1=1 "));
	else if (m_bSurgery== TRUE && m_bOperation==FALSE)
		szWhere.AppendFormat(_T(" and substr(hfl_groupid,1,2)='B4' "));
	else if (m_bOperation == TRUE && m_bSurgery== FALSE)
		szWhere.AppendFormat(_T(" and substr(hfl_groupid,1,2)='B5' "));
	
	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" and tt.ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" and tt.ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" and tt.ho_type not in('I','C','S') "));
	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and (ho_deptid ='%s' or ho_pdeptid='%s') "),m_szDeptKey,m_szDeptKey);
	
	szSQL.Format(_T(" SELECT   ho_docno doc_no, Get_patientname(ho_docno) patient_name, hcr_recordno record_no,") \
				_T("		   extract(year from hp_birthdate) yob,") \
				_T("           CASE WHEN  tt.ho_type not in ('I','C') and hd_rank > 0 THEN (select ss_vndesc from sys_sel where ss_id = 'hms_rank' and ss_code = hd_rank)||hp_workplace ") \
				_T("           ELSE hd_cardno ") \
				_T("           END                       extra_info, ") \
				_T("		   hfl_name as operation_name1,") \
				_T("           ho_comment                operation_name, ") \
				_T("           get_feegroupname(hfl_groupid)               operation_type, ") \
				_T("           get_username(ho_practitioner)           practitioner, ") \
				_T("           get_username(ho_assistant)              assistant, ") \
				_T("           get_username(ho_user4)            anethetist, ") \
				_T("		   get_username(ho_anesthetist)		anethetist1,") \
				_T("           ho_qty                    quantity, ") \
				_T("		   substr(hfl_groupid,1,2) as groupid, ") \
				_T("		   case when substr(hfl_groupid,1,3) in ('B41','B45') then ho_qty else 0 end as PTL1, ") \
				_T("		   case when substr(hfl_groupid,1,3) in ('B42','B46') then ho_qty else 0 end as PTL2, ") \
				_T("		   case when substr(hfl_groupid,1,3) in ('B43','B47') then ho_qty else 0 end as PTL3, ") \
				_T("		   case when substr(hfl_groupid,1,3)='B44' then ho_qty else 0 end as PTLDB, ") \
				_T("		   case when substr(hfl_groupid,1,3)='B51' then ho_qty else 0 end as TTL1, ") \
				_T("		   case when substr(hfl_groupid,1,3)='B52' then ho_qty else 0 end as TTL2, ") \
				_T("		   case when substr(hfl_groupid,1,3)='B53' then ho_qty else 0 end as TTL3, ") \
				_T("		   case when substr(hfl_groupid,1,3)='B54' then ho_qty else 0 end as TTLDB, ") \
				_T("           ho_qty*hfl_retprice       amount ") \
				_T(" FROM      hms_operation ") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = ho_docno ) ") \
				_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
				_T(" LEFT JOIN hms_object tt ON (ho_id=hd_object) ") \
				_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = hd_docno)") \
				_T(" LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = ho_docno AND i.hfe_invoiceno = ho_invoiceno)") \
				_T(" LEFT JOIN hms_fee_list ON ( ho_itemid = hfl_feeid ) ") \
				_T(" WHERE 1 = 1 %s") \
				_T(" ORDER BY i.hfe_deptid, ho_docno"), szWhere);
	return szSQL;

}
CString CTMOperationList2::GetNameUser(CString UserName, CString LastName ){
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
CString CTMOperationList2::GetItemAbbreviation(CString szItemName, CString szExtraWord)
{
	CStringArray arr;
	CString szTemp;
	CString szValue;
	int nIndex = 0;
	szValue.Empty();

	for (int i = 0; i < szItemName.GetLength(); i++)
	{
		if (szItemName[i] == _T(' '))
		{
			szTemp = szItemName.Mid(nIndex, i - nIndex);
			arr.Add(szTemp);
			nIndex = i + 1;
		}
	}

	if (szItemName.GetLength() > 0)
	{
		szTemp = szItemName.Mid(nIndex, szItemName.GetLength() - nIndex);
		arr.Add(szTemp);
	}

	szTemp.Empty();
	LPTSTR str = new TCHAR[1];

	for (int i = 0; i < arr.GetSize(); i++)
	{
		szTemp = arr[i];

		if (szTemp.Left(1) != _T("\x110") && szTemp.Left(1) != _T("\x111"))
		{
			UnMarkString(szTemp.Left(1), str);
			CString tmpStr = CString(str);
			szValue.AppendFormat(_T("%s"), tmpStr.Left(1));
		}
		else
			szValue.AppendFormat(_T("%s"), szTemp.Left(1));
	}

	delete[] str;

	if (szExtraWord.IsEmpty())
		return szValue;
	else
		return szValue + _T(" ") + szExtraWord;
}

void CTMOperationList2:: ExportKhangsinh (){

}
