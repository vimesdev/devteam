#include "rptGeneralTreatmentCostsOfPatientsServiceReport.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralTreatmentCostsOfPatientsServiceReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralTreatmentCostsOfPatientsServiceReport* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptGeneralTreatmentCostsOfPatientsServiceReport *pVw = (rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralTreatmentCostsOfPatientsServiceReport *pVw = (rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralTreatmentCostsOfPatientsServiceReport *pVw = (rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralTreatmentCostsOfPatientsServiceReport *pVw = (rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPolicySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralTreatmentCostsOfPatientsServiceReport* )pWnd)->OnPolicySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPolicySelendokFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnPolicySelendok();
}
/*static void _OnPolicySetfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnPolicyKillfocus();
}*/
/*static void _OnPolicyKillfocusFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnPolicyKillfocus();
}*/
static long _OnPolicyLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnPolicyLoadData();
}
/*static void _OnPolicyAddNewFnc(CWnd *pWnd){
	((rptGeneralTreatmentCostsOfPatientsServiceReport *)pWnd)->OnPolicyAddNew();
}*/
static int _OnAddrptGeneralTreatmentCostsOfPatientsServiceReportFnc(CWnd *pWnd){
	 return ((rptGeneralTreatmentCostsOfPatientsServiceReport*)pWnd)->OnAddrptGeneralTreatmentCostsOfPatientsServiceReport();
} 
static int _OnEditrptGeneralTreatmentCostsOfPatientsServiceReportFnc(CWnd *pWnd){
	 return ((rptGeneralTreatmentCostsOfPatientsServiceReport*)pWnd)->OnEditrptGeneralTreatmentCostsOfPatientsServiceReport();
} 
static int _OnDeleterptGeneralTreatmentCostsOfPatientsServiceReportFnc(CWnd *pWnd){
	 return ((rptGeneralTreatmentCostsOfPatientsServiceReport*)pWnd)->OnDeleterptGeneralTreatmentCostsOfPatientsServiceReport();
} 
static int _OnSaverptGeneralTreatmentCostsOfPatientsServiceReportFnc(CWnd *pWnd){
	 return ((rptGeneralTreatmentCostsOfPatientsServiceReport*)pWnd)->OnSaverptGeneralTreatmentCostsOfPatientsServiceReport();
} 
static int _OnCancelrptGeneralTreatmentCostsOfPatientsServiceReportFnc(CWnd *pWnd){
	 return ((rptGeneralTreatmentCostsOfPatientsServiceReport*)pWnd)->OnCancelrptGeneralTreatmentCostsOfPatientsServiceReport();
} 
rptGeneralTreatmentCostsOfPatientsServiceReport::rptGeneralTreatmentCostsOfPatientsServiceReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle.Format(_T("General treatment costs of patients service"));
	SetDefaultValues();
}
rptGeneralTreatmentCostsOfPatientsServiceReport::~rptGeneralTreatmentCostsOfPatientsServiceReport(){
}
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 495, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Month"), 252, 30, 352, 55);
	m_wndReportPeriod.Create(this,357, 30, 490, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 252, 60, 352, 85);
	m_wndToDate.Create(this,357, 60, 490, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 490, 115);
	m_wndCheck.Create(this,_T("Filter by Department Treatment"), 115,120,490,145);	
	m_wndPrint.Create(this, _T("&Print"), 245, 155, 325, 180);
	m_wndExport.Create(this, _T("&Export"), 330, 155, 410, 180);
	m_wndClose.Create(this, _T("&Close"), 415, 155, 495, 180);
}
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);


	m_wndReportPeriod.Format(2, 1, 17);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnSetWindowEvents(){
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPolicy.SetEvent(WE_SELENDOK, _OnPolicySelendokFnc);
	//m_wndPolicy.SetEvent(WE_SETFOCUS, _OnPolicySetfocusFnc);
	//m_wndPolicy.SetEvent(WE_KILLFOCUS, _OnPolicyKillfocusFnc);
	m_wndPolicy.SetEvent(WE_SELCHANGE, _OnPolicySelectChangeFnc);
	m_wndPolicy.SetEvent(WE_LOADDATA, _OnPolicyLoadDataFnc);
	//m_wndPolicy.SetEvent(WE_ADDNEW, _OnPolicyAddNewFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = pMF->GetSysDate() + _T("00:01") ;
	m_szToDate = pMF->GetSysDateTime();	
	SetMode(VM_EDIT);
}
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);	
	DDX_Check(pDX, m_wndCheck.GetDlgCtrlID(), m_bCheck);
}
void rptGeneralTreatmentCostsOfPatientsServiceReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptGeneralTreatmentCostsOfPatientsServiceReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralTreatmentCostsOfPatientsServiceReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();

}
int rptGeneralTreatmentCostsOfPatientsServiceReport::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 0, 1,2,3, -1); 
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
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnYearChange(){
	
} */
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnYearSetfocus(){
	
} */
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnYearKillfocus(){
	
} */
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnYearCheckValue(){
	return 0;
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnReportPeriodSelendok(){
	
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralTreatmentCostsOfPatientsServiceReport::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
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
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnFromDateChange(){
	
} */
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnFromDateSetfocus(){
	
} */
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnFromDateKillfocus(){
	
} */
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnToDateChange(){
	
} */
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnToDateSetfocus(){
	
} */
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnToDateKillfocus(){
	
} */
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnClerkSelendok(){
	 
}
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnClerkSetfocus(){
	
}*/
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnClerkKillfocus(){
	
}*/
long rptGeneralTreatmentCostsOfPatientsServiceReport::OnClerkLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty()){
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	};
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);
		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	UpdateData(true);
	PrintGeneralTreatmentCostsOfPatientsServiceReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_bPreview);
	UpdateData(false);

} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;		
	UpdateData(true);
	PrintGeneralTreatmentCostsOfPatientsServiceReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_bPreview);
	UpdateData(false);
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	UpdateData(true);
	ExportGeneralTreatmentCostsOfPatientsServiceReport(m_szFromDate, m_szToDate);
	UpdateData(false);
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnPolicySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralTreatmentCostsOfPatientsServiceReport::OnPolicySelendok(){
	 
}
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnPolicySetfocus(){
	
}*/
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnPolicyKillfocus(){
	
}*/
long rptGeneralTreatmentCostsOfPatientsServiceReport::OnPolicyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPolicy.IsSearchKey() && !m_szPolicyKey.IsEmpty()){
		szWhere.Format(_T(" where ho_id='%s'"), m_szPolicyKey);
	};
	m_wndPolicy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select ho_type as id, ho_desc as name from hms_object %s order by cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPolicy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptGeneralTreatmentCostsOfPatientsServiceReport::OnPolicyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnAddrptGeneralTreatmentCostsOfPatientsServiceReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnEditrptGeneralTreatmentCostsOfPatientsServiceReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnDeleterptGeneralTreatmentCostsOfPatientsServiceReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelrptGeneralTreatmentCostsOfPatientsServiceReport(); 
 	}
	return 0;
}
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnSaverptGeneralTreatmentCostsOfPatientsServiceReport(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnrptGeneralTreatmentCostsOfPatientsServiceReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnCancelrptGeneralTreatmentCostsOfPatientsServiceReport(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int rptGeneralTreatmentCostsOfPatientsServiceReport::OnrptGeneralTreatmentCostsOfPatientsServiceReportListLoadData(){
	return 0;
}
void rptGeneralTreatmentCostsOfPatientsServiceReport::PrintGeneralTreatmentCostsOfPatientsServiceReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview)
{
	CMainFrame *pMF =(CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	

if (m_bCheck)
	{

		szSQL.Format(_T("SELECT DISTINCT  hd_docno as docno,") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" 	date_part('year', hp_birthdate) as birthyear,") \
			_T("	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
			_T("	date(hcr_admitdate) as admitdate, ") \
			_T("	date(hcr_dischargedate) as dischargedate, ") \
			_T("	deptid, ") \
			_T(" 	hd_icd as icd10,") \
			_T(" 	hfi_recvno as invoiceno,") \
			_T("	sum(totaltreat) as totaltreat, ") \
			_T(" 	sum(cost) as cost,") \
			_T(" 	sum(difcost) as difcost,") \
			_T(" 	sum(inscost) as inscost,") \
			_T(" 	sum(drugfee) as drugfee,") \
			_T(" 	sum(bloodfee) as bloodfee ,") \
			_T(" 	sum(perfusionfee) as perfusionfee ,") \
			_T(" 	sum(testfee) as testfee ,") \
			_T(" 	sum(explorationfee) as explorationfee ,") \
			_T(" 	sum(pacsfee) as pacsfee ,") \
			_T(" 	sum(normtechfee) as normtechfee ,") \
			_T(" 	sum(hitechfee) as hitechfee ,") \
			_T(" 	sum(materialfee) as materialfee ,") \
			_T(" 	sum(examfee) as examfee ,") \
			_T(" 	sum(bedfee) as bedfee ,") \
			_T(" 	sum(otherfee) as otherfee ,") \
			_T(" 	sum(discount) as inspaid ,") \
			_T(" 	sum(patdebt) as patdebt, ") \
			_T(" 	sum(patpaid) as patpaid ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
			_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
			_T(" LEFT JOIN") \
			_T(" (") \
			_T("     SELECT ") \
			_T(" 	hfe_deptid as deptid,") \
			_T(" 	hfi_class,") \
			_T(" 	hfi_docno,") \
			_T(" 	hfi_recvno,") \
			_T(" 	hfe_group as groupid,") \
			_T(" 	hfe_quantity as qty,") \
			_T(" 	hfe_unitprice	as unitprice,") \
			_T(" 	hfe_cost as cost,") \
			_T(" 	hfe_diffcost as difcost,") \
			_T(" 	hfe_cost-hfe_diffcost as inscost,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A1'then hfe_cost else 0 end as drugfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A2'then hfe_cost else 0 end as bloodfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A3'then hfe_cost else 0 end as perfusionfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost else 0 end as pacsfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='B3'then hfe_cost else 0 end as explorationfee,") \
			_T(" 	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost else 0 end as normtechfee,") \
			_T(" 	case when hfe_hitech='Y' then hfe_cost else 0 end as hitechfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A9' then hfe_cost else 0 end as materialfee,") \
			_T(" 	case when hfe_group='C0000' then hfe_quantity else 0 end as totaltreat,") \
			_T(" 	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
			_T(" 	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
			_T(" 	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
			_T(" 	hfe_discount as discount,") \
			_T(" 	hfe_patpaid as patpaid,") \
			_T(" 	hfe_diffpaid as diffpaid,") \
			_T(" 	hfe_patdebt as patdebt") \
			_T("    FROM hms_fee_invoice") \
			_T("    LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno and hfe_invoiceno = hfi_invoiceno)") \
			_T("	LEFT JOIN sys_dept ON(sd_id = hfe_deptid) ") \
			_T("    WHERE sd_type not in ('KB') and hfi_type ='P' AND hfi_class in('I') AND hfe_cost > 0 ") \
			_T("		and date(hfi_recvdate) between date('%s') and date('%s')") \
			_T(" ) as tbl ON(hfi_docno=hd_docno)	") \
			_T(" WHERE ho_type in('S','R') and hcr_status ='T'") \
			_T(" GROUP BY docno, pname, birthyear, sex, icd10, invoiceno, admitdate, dischargedate, deptid ") \
			_T(" HAVING sum(cost) > 0") \
			_T(" ORDER BY deptid,invoiceno, docno"), szFromDate, szToDate);
	}
	else
	{
			szSQL.Format(_T("SELECT DISTINCT  hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	date_part('year', hp_birthdate) as birthyear,") \
		_T("	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("	date(hcr_admitdate) as admitdate, ") \
		_T("	date(hcr_dischargedate) as dischargedate, ") \
		_T(" 	hd_icd as icd10,") \
		_T(" 	hfi_recvno as invoiceno,") \
		_T("	sum(totaltreat) as totaltreat, ") \
		_T(" 	sum(cost) as cost,") \
		_T(" 	sum(difcost) as difcost,") \
		_T(" 	sum(inscost) as inscost,") \
		_T(" 	sum(drugfee) as drugfee,") \
		_T(" 	sum(bloodfee) as bloodfee ,") \
		_T(" 	sum(perfusionfee) as perfusionfee ,") \
		_T(" 	sum(testfee) as testfee ,") \
		_T(" 	sum(explorationfee) as explorationfee ,") \
		_T(" 	sum(pacsfee) as pacsfee ,") \
		_T(" 	sum(normtechfee) as normtechfee ,") \
		_T(" 	sum(hitechfee) as hitechfee ,") \
		_T(" 	sum(materialfee) as materialfee ,") \
		_T(" 	sum(examfee) as examfee ,") \
		_T(" 	sum(bedfee) as bedfee ,") \
		_T(" 	sum(otherfee) as otherfee ,") \
		_T(" 	sum(discount) as inspaid ,") \
		_T(" 	sum(patdebt) as patdebt, ") \
		_T(" 	sum(patpaid) as patpaid ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T(" LEFT JOIN") \
		_T(" (") \
		_T("     SELECT ") \
		_T(" 	hfe_deptid as deptid,") \
		_T(" 	hfi_class,") \
		_T(" 	hfi_docno,") \
		_T(" 	hfi_recvno,") \
		_T(" 	hfe_group as groupid,") \
		_T(" 	hfe_quantity as qty,") \
		_T(" 	hfe_unitprice	as unitprice,") \
		_T(" 	hfe_cost as cost,") \
		_T(" 	hfe_diffcost as difcost,") \
		_T(" 	hfe_cost-hfe_diffcost as inscost,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A1'then hfe_cost else 0 end as drugfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A2'then hfe_cost else 0 end as bloodfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A3'then hfe_cost else 0 end as perfusionfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost else 0 end as pacsfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='B3'then hfe_cost else 0 end as explorationfee,") \
		_T(" 	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost else 0 end as normtechfee,") \
		_T(" 	case when hfe_hitech='Y' then hfe_cost else 0 end as hitechfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A9' then hfe_cost else 0 end as materialfee,") \
		_T(" 	case when hfe_group='C0000' then hfe_quantity else 0 end as totaltreat,") \
		_T(" 	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
		_T(" 	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T(" 	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
		_T(" 	hfe_discount as discount,") \
		_T(" 	hfe_patpaid as patpaid,") \
		_T(" 	hfe_diffpaid as diffpaid,") \
		_T(" 	hfe_patdebt as patdebt") \
		_T("    FROM hms_fee_invoice") \
		_T("    LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno and hfe_invoiceno = hfi_invoiceno)") \
		_T("	LEFT JOIN sys_dept ON(sd_id = hfe_deptid) ") \
		_T("    WHERE sd_type not in ('KB') and hfi_type ='P' AND hfi_class in('I') AND hfe_cost > 0 ") \
		_T("		and date(hfi_recvdate) between date('%s') and date('%s')") \
		_T(" ) as tbl ON(hfi_docno=hd_docno)	") \
		_T(" WHERE ho_type in('S','R') and hcr_status ='T'") \
		_T(" GROUP BY docno, pname, birthyear, sex, icd10, invoiceno, admitdate, dischargedate ") \
		_T(" HAVING sum(cost) > 0") \
		_T(" ORDER BY invoiceno, docno"), szFromDate, szToDate);
	}
		
	//_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	
	if(!rpt.Init(_T("Reports/HMS/HF_GENERALTREATMENTCOSTSOFPATIENTSERVICEREPORT.RPT")) )
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;

	long double grpCost[14];
	long double ttlCost[14];
	double cost = 0;
	for (int i =0; i < 14; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost[0] > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i =0; i < 13; i++)
				{
					szField.Format(_T("S%d"), i+12);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];
					
					grpCost[i] = 0;				
				}
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"), pMF->GetDepartmentName(szNewLine));
			szOldLine = szNewLine;
			
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("birthyear"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("regplace"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		tmpStr.AppendFormat(_T("-%s"), rs.GetValue(_T("invoiceno")));
		rptDetail->SetValue(_T("8"), tmpStr);
		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("9"), tmpStr);
		tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("totaltreat"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		
		rs.GetValue(_T("inscost"), cost);
		grpCost[0] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		
		rs.GetValue(_T("bedfee"), cost);
		grpCost[1] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[2] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[3] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("perfusionfee"), cost);
		grpCost[4] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("testfee"), cost);
		grpCost[5] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("explorationfee"), cost);
		grpCost[6] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[7] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[8] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("materialfee"), cost);
		grpCost[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr);
		
		rs.GetValue(_T("patpaid"), cost);
		grpCost[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr);

		rs.GetValue(_T("patdebt"), cost);
		grpCost[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("25"), tmpStr);
		rs.MoveNext();
	}

	for (int i =0; i < 13; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if(m_bCheck)
	{
		if(grpCost[0] > 0){
			CString szField;
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			for (int i =0; i <= 13; i++)
			{
				szField.Format(_T("S%d"), i+12);
				FormatCurrency(grpCost[i], tmpStr);
				rptDetail->SetValue(szField, tmpStr);
			}
		
		}
	}

	if(ttlCost[0] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i =0; i < 13; i++)
		{
			
			szField.Format(_T("S%d"), i+12);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
			ttlCost[i] += grpCost[i];
		}

	}

	//Page Footer
	//Report Footer
	EndWaitCursor();
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

}

void rptGeneralTreatmentCostsOfPatientsServiceReport::ExportGeneralTreatmentCostsOfPatientsServiceReport(CString szFromDate, CString szToDate)
{	
	CMainFrame * pMF=(CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,szUserReceiver,szFromDateToDate, szTmp;
	if (m_bCheck)
	{

		szSQL.Format(_T("SELECT DISTINCT  hd_docno as docno,") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" 	date_part('year', hp_birthdate) as birthyear,") \
			_T("	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
			_T("	date(hcr_admitdate) as admitdate, ") \
			_T("	date(hcr_dischargedate) as dischargedate, ") \
			_T("	deptid, ") \
			_T(" 	hd_icd as icd10,") \
			_T(" 	hfi_recvno as invoiceno,") \
			_T("	sum(totaltreat) as totaltreat, ") \
			_T(" 	sum(cost) as cost,") \
			_T(" 	sum(difcost) as difcost,") \
			_T(" 	sum(inscost) as inscost,") \
			_T(" 	sum(drugfee) as drugfee,") \
			_T(" 	sum(bloodfee) as bloodfee ,") \
			_T(" 	sum(perfusionfee) as perfusionfee ,") \
			_T(" 	sum(testfee) as testfee ,") \
			_T(" 	sum(explorationfee) as explorationfee ,") \
			_T(" 	sum(pacsfee) as pacsfee ,") \
			_T(" 	sum(normtechfee) as normtechfee ,") \
			_T(" 	sum(hitechfee) as hitechfee ,") \
			_T(" 	sum(materialfee) as materialfee ,") \
			_T(" 	sum(examfee) as examfee ,") \
			_T(" 	sum(bedfee) as bedfee ,") \
			_T(" 	sum(otherfee) as otherfee ,") \
			_T(" 	sum(discount) as inspaid ,") \
			_T(" 	sum(patdebt) as patdebt, ") \
			_T(" 	sum(patpaid) as patpaid ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
			_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
			_T(" LEFT JOIN") \
			_T(" (") \
			_T("     SELECT ") \
			_T(" 	hfe_deptid as deptid,") \
			_T(" 	hfi_class,") \
			_T(" 	hfi_docno,") \
			_T(" 	hfi_recvno,") \
			_T(" 	hfe_group as groupid,") \
			_T(" 	hfe_quantity as qty,") \
			_T(" 	hfe_unitprice	as unitprice,") \
			_T(" 	hfe_cost as cost,") \
			_T(" 	hfe_diffcost as difcost,") \
			_T(" 	hfe_cost-hfe_diffcost as inscost,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A1'then hfe_cost else 0 end as drugfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A2'then hfe_cost else 0 end as bloodfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A3'then hfe_cost else 0 end as perfusionfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost else 0 end as pacsfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='B3'then hfe_cost else 0 end as explorationfee,") \
			_T(" 	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost else 0 end as normtechfee,") \
			_T(" 	case when hfe_hitech='Y' then hfe_cost else 0 end as hitechfee,") \
			_T(" 	case when substr(hfe_group, 1, 2)='A9' then hfe_cost else 0 end as materialfee,") \
			_T(" 	case when hfe_group='C0000' then hfe_quantity else 0 end as totaltreat,") \
			_T(" 	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
			_T(" 	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
			_T(" 	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
			_T(" 	hfe_discount as discount,") \
			_T(" 	hfe_patpaid as patpaid,") \
			_T(" 	hfe_diffpaid as diffpaid,") \
			_T(" 	hfe_patdebt as patdebt") \
			_T("    FROM hms_fee_invoice") \
			_T("    LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno and hfe_invoiceno = hfi_invoiceno)") \
			_T("	LEFT JOIN sys_dept ON(sd_id = hfe_deptid) ") \
			_T("    WHERE sd_type not in ('KB') and hfi_type ='P' AND hfi_class in('I') AND hfe_cost > 0 ") \
			_T("		and date(hfi_recvdate) between date('%s') and date('%s')") \
			_T(" ) as tbl ON(hfi_docno=hd_docno)	") \
			_T(" WHERE ho_type in('S','R') and hcr_status ='T'") \
			_T(" GROUP BY docno, pname, birthyear, sex, icd10, invoiceno, admitdate, dischargedate, deptid ") \
			_T(" HAVING sum(cost) > 0") \
			_T(" ORDER BY deptid,invoiceno, docno"), szFromDate, szToDate);
	}
	else
	{
			szSQL.Format(_T("SELECT DISTINCT  hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	date_part('year', hp_birthdate) as birthyear,") \
		_T("	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("	date(hcr_admitdate) as admitdate, ") \
		_T("	date(hcr_dischargedate) as dischargedate, ") \
		_T(" 	hd_icd as icd10,") \
		_T(" 	hfi_recvno as invoiceno,") \
		_T("	sum(totaltreat) as totaltreat, ") \
		_T(" 	sum(cost) as cost,") \
		_T(" 	sum(difcost) as difcost,") \
		_T(" 	sum(inscost) as inscost,") \
		_T(" 	sum(drugfee) as drugfee,") \
		_T(" 	sum(bloodfee) as bloodfee ,") \
		_T(" 	sum(perfusionfee) as perfusionfee ,") \
		_T(" 	sum(testfee) as testfee ,") \
		_T(" 	sum(explorationfee) as explorationfee ,") \
		_T(" 	sum(pacsfee) as pacsfee ,") \
		_T(" 	sum(normtechfee) as normtechfee ,") \
		_T(" 	sum(hitechfee) as hitechfee ,") \
		_T(" 	sum(materialfee) as materialfee ,") \
		_T(" 	sum(examfee) as examfee ,") \
		_T(" 	sum(bedfee) as bedfee ,") \
		_T(" 	sum(otherfee) as otherfee ,") \
		_T(" 	sum(discount) as inspaid ,") \
		_T(" 	sum(patdebt) as patdebt, ") \
		_T(" 	sum(patpaid) as patpaid ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T(" LEFT JOIN") \
		_T(" (") \
		_T("     SELECT ") \
		_T(" 	hfe_deptid as deptid,") \
		_T(" 	hfi_class,") \
		_T(" 	hfi_docno,") \
		_T(" 	hfi_recvno,") \
		_T(" 	hfe_group as groupid,") \
		_T(" 	hfe_quantity as qty,") \
		_T(" 	hfe_unitprice	as unitprice,") \
		_T(" 	hfe_cost as cost,") \
		_T(" 	hfe_diffcost as difcost,") \
		_T(" 	hfe_cost-hfe_diffcost as inscost,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A1'then hfe_cost else 0 end as drugfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A2'then hfe_cost else 0 end as bloodfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A3'then hfe_cost else 0 end as perfusionfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost else 0 end as pacsfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='B3'then hfe_cost else 0 end as explorationfee,") \
		_T(" 	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost else 0 end as normtechfee,") \
		_T(" 	case when hfe_hitech='Y' then hfe_cost else 0 end as hitechfee,") \
		_T(" 	case when substr(hfe_group, 1, 2)='A9' then hfe_cost else 0 end as materialfee,") \
		_T(" 	case when hfe_group='C0000' then hfe_quantity else 0 end as totaltreat,") \
		_T(" 	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
		_T(" 	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T(" 	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
		_T(" 	hfe_discount as discount,") \
		_T(" 	hfe_patpaid as patpaid,") \
		_T(" 	hfe_diffpaid as diffpaid,") \
		_T(" 	hfe_patdebt as patdebt") \
		_T("    FROM hms_fee_invoice") \
		_T("    LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno and hfe_invoiceno = hfi_invoiceno)") \
		_T("	LEFT JOIN sys_dept ON(sd_id = hfe_deptid) ") \
		_T("    WHERE sd_type not in ('KB') and hfi_type ='P' AND hfi_class in('I') AND hfe_cost > 0 ") \
		_T("		and date(hfi_recvdate) between date('%s') and date('%s')") \
		_T(" ) as tbl ON(hfi_docno=hd_docno)	") \
		_T(" WHERE ho_type in('S','R') and hcr_status ='T'") \
		_T(" GROUP BY docno, pname, birthyear, sex, icd10, invoiceno, admitdate, dischargedate ") \
		_T(" HAVING sum(cost) > 0") \
		_T(" ORDER BY invoiceno, docno"), szFromDate, szToDate);

	}
//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0,5);

	xls.SetColumnWidth(1,23);
	xls.SetColumnWidth(2,5);
	xls.SetColumnWidth(3,5);
	xls.SetColumnWidth(4,22);
	xls.SetColumnWidth(5,10);
	xls.SetColumnWidth(6,10);
	xls.SetColumnWidth(7,8);
	xls.SetColumnWidth(8,9);
	xls.SetColumnWidth(9,7);
	xls.SetColumnWidth(10,12);
	xls.SetColumnWidth(11,12);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,12);
	xls.SetColumnWidth(17,12);
	xls.SetColumnWidth(18,12);
	xls.SetColumnWidth(19,12);
	xls.SetColumnWidth(20,12);
	xls.SetColumnWidth(21,12);

	xls.SetRowHeight(6,25);	
	xls.SetRowHeight(7,25);	
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	TranslateString(_T("General treatment costs of patients service"), tmpStr);
	xls.SetCellText(0, 3, tmpStr,FMT_TEXT,true,18,0);
	xls.SetCellMergedColumns(0,3,21);
	xls.SetCellMergedColumns(0,4,21);
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 4, szFromDateToDate,FMT_TEXT,true,12);

	int nRow = 6;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Birth Date"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("ICD 10"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Invoince"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("In Date"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Out Date"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Treatment Number"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Receipt"), tmpStr);
	xls.SetCellText(22, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Unpaid"), tmpStr);	
	xls.SetCellText(23, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedRows(22,nRow,2);
	xls.SetCellMergedRows(23,nRow,2);
	xls.SetCellMergedRows(0,nRow,2);
	xls.SetCellMergedRows(1,nRow,2);
	xls.SetCellMergedRows(2,nRow,2);	
	xls.SetCellMergedRows(3,nRow,2);
	xls.SetCellMergedRows(4,nRow,2);
	xls.SetCellMergedRows(5,nRow,2);
	xls.SetCellMergedRows(6,nRow,2);
	xls.SetCellMergedRows(7,nRow,2);
	xls.SetCellMergedRows(8,nRow,2);
	xls.SetCellMergedRows(9,nRow,2);
	

	xls.SetCellMergedColumns(10,nRow,12);
	
	
	

	nRow=7;

	TranslateString(_T("Medical expenses incurred at medical care facilities"), tmpStr);
	xls.SetCellText(10, nRow-1, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Bed Fee"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);
		
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Blood"), tmpStr);	
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Dich truyen"), tmpStr);	
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(15, nRow, _T("XN"), FMT_TEXT,true);
	xls.SetCellText(16, nRow, _T("TDCN"), FMT_TEXT,true);
	xls.SetCellText(17, nRow, _T("CDHA"), FMT_TEXT,true);	
	TranslateString(_T("TT, PT"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(19, nRow, _T("DVKTC"), FMT_TEXT,true);	
	xls.SetCellText(20, nRow, _T("VTYT"), FMT_TEXT,true);
	TranslateString(_T("Other Fee"), tmpStr);
	xls.SetCellText(21, nRow, tmpStr, FMT_TEXT,true);	
	
	
	
	
	//Page Header
	//Report Detail
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine;	

	long double grpCost[25];
	long double ttlCost[25];
	double cost = 0;
	for (int i =0; i < 24; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost[10] > 0)
			{
				nRow++;
				xls.SetCellMergedColumns(1,nRow,9);
				xls.SetCellText(1, nRow, _T("\x43\x1ED9ng:"), FMT_TEXT, true);
				for (int i =9; i < 24; i++)
				{
					tmpStr.Format(_T("%.2f"),grpCost[i]);
					xls.SetCellText(i,nRow, tmpStr, FMT_NUMBER1,true);
					ttlCost[i] += grpCost[i];					
					grpCost[i] = 0;				
				}
			}

			nRow++;
			xls.SetCellMergedColumns(1,nRow,9);
			xls.SetCellText(1,nRow, pMF->GetDepartmentName(szNewLine), FMT_TEXT, true);
			szOldLine = szNewLine;
			nIndex =1;
		}

		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("docno"), tmpStr);		
		xls.SetCellText(5, nRow, tmpStr, FMT_INTEGER);		
		tmpStr.Format(_T("%s"), rs.GetValue(_T("invoiceno")));
		xls.SetCellText(6, nRow, tmpStr, FMT_INTEGER);

		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(7, nRow, tmpStr, FMT_DATE);

		tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(8, nRow, tmpStr, FMT_DATE);
		
		rs.GetValue(_T("totaltreat"), cost);
		grpCost[9] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(9, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("cost"), cost);
		grpCost[10] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);		
		
		rs.GetValue(_T("bedfee"), cost);
		grpCost[11] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(11, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("drugfee"), cost);
		grpCost[12] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[13] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("perfusionfee"), cost);
		grpCost[14] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(14, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("testfee"), cost);
		grpCost[15] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("explorationfee"), cost);
		grpCost[16] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(16, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[17] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[18] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(18, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[19] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(19, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("materialfee"), cost);
		grpCost[20] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(20, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[21] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(21, nRow, tmpStr, FMT_NUMBER1);	
		
		rs.GetValue(_T("patpaid"), cost);
		grpCost[22] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(22, nRow, tmpStr, FMT_NUMBER1);	

		
		rs.GetValue(_T("patdebt"), cost);
		grpCost[23] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(23, nRow, tmpStr, FMT_NUMBER1);	

		rs.MoveNext();
	}
	
	for (int i =9; i< 24; i++){
		ttlCost[i] += grpCost[i];
	}
	if (m_bCheck)
	{
		if(grpCost[10] > 0){	
			nRow++;
			xls.SetCellMergedColumns(1,nRow,9);
			xls.SetCellText(1, nRow, _T("\x43\x1ED9ng:"), FMT_TEXT, true);
			for (int i =9; i < 24; i++)
			{			
				tmpStr.Format(_T("%.2f"), grpCost[i]);
				xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);	
			}	
		}
	}	
	if(ttlCost[10] > 0)
	{
		nRow++;
		xls.SetCellMergedColumns(1,nRow,9);
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true);
		for (int i =9; i < 24; i++)
		{			
			tmpStr.Format(_T("%.2f"), ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);	
		}	
	}
	

	EndWaitCursor();
	xls.Save(_T("Exports\\Danh sach nguoi benh kham chua benh doi tuong dich vu.xls"));

}
