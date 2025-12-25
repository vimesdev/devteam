#include "rptGeneralExaminationCostsOfPatientsPolicyReport.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostsOfPatientsPolicyReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostsOfPatientsPolicyReport* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsOfPatientsPolicyReport *pVw = (rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsOfPatientsPolicyReport *pVw = (rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsOfPatientsPolicyReport *pVw = (rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsOfPatientsPolicyReport *pVw = (rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPolicySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostsOfPatientsPolicyReport* )pWnd)->OnPolicySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPolicySelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnPolicySelendok();
}
/*static void _OnPolicySetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnPolicyKillfocus();
}*/
/*static void _OnPolicyKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnPolicyKillfocus();
}*/
static long _OnPolicyLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnPolicyLoadData();
}
/*static void _OnPolicyAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsOfPatientsPolicyReport *)pWnd)->OnPolicyAddNew();
}*/
static int _OnAddrptGeneralExaminationCostsOfPatientsPolicyReportFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsOfPatientsPolicyReport*)pWnd)->OnAddrptGeneralExaminationCostsOfPatientsPolicyReport();
} 
static int _OnEditrptGeneralExaminationCostsOfPatientsPolicyReportFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsOfPatientsPolicyReport*)pWnd)->OnEditrptGeneralExaminationCostsOfPatientsPolicyReport();
} 
static int _OnDeleterptGeneralExaminationCostsOfPatientsPolicyReportFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsOfPatientsPolicyReport*)pWnd)->OnDeleterptGeneralExaminationCostsOfPatientsPolicyReport();
} 
static int _OnSaverptGeneralExaminationCostsOfPatientsPolicyReportFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsOfPatientsPolicyReport*)pWnd)->OnSaverptGeneralExaminationCostsOfPatientsPolicyReport();
} 
static int _OnCancelrptGeneralExaminationCostsOfPatientsPolicyReportFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsOfPatientsPolicyReport*)pWnd)->OnCancelrptGeneralExaminationCostsOfPatientsPolicyReport();
} 
rptGeneralExaminationCostsOfPatientsPolicyReport::rptGeneralExaminationCostsOfPatientsPolicyReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
rptGeneralExaminationCostsOfPatientsPolicyReport::~rptGeneralExaminationCostsOfPatientsPolicyReport(){
}
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 496, 152);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 247, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Month"), 252, 30, 352, 55);
	m_wndReportPeriod.Create(this,357, 30, 491, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 247, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 252, 60, 352, 85);
	m_wndToDate.Create(this,357, 60, 491, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 491, 115); 
	m_wndPolicyLabel.Create(this, _T("Policy"), 10, 120, 110, 145);
	m_wndPolicy.Create(this,115, 120, 305, 145); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 160, 159, 240, 184);
	m_wndPrint.Create(this, _T("&Print"), 245, 159, 325, 184);
	m_wndExport.Create(this, _T("&Export"), 330, 159, 410, 184);
	m_wndClose.Create(this, _T("&Close"), 415, 159, 495, 184);
	
}
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnInitializeComponents(){
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
	m_wndPolicy.SetCheckValue(true);
	m_wndPolicy.LimitText(35);


	m_wndReportPeriod.Format(2, 1, 17);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPolicy.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPolicy.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	SetMode(VM_EDIT);
}
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndPolicy.GetDlgCtrlID(), m_szPolicyKey);

}
void rptGeneralExaminationCostsOfPatientsPolicyReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptGeneralExaminationCostsOfPatientsPolicyReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralExaminationCostsOfPatientsPolicyReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szPolicyKey.Empty();

}
int rptGeneralExaminationCostsOfPatientsPolicyReport::SetMode(int nMode){
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
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnYearChange(){
	
} */
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnYearSetfocus(){
	
} */
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnYearKillfocus(){
	
} */
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnYearCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnReportPeriodSelendok(){
	
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
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralExaminationCostsOfPatientsPolicyReport::OnReportPeriodLoadData(){
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
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnFromDateChange(){
	
} */
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnFromDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnFromDateKillfocus(){
	
} */
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnToDateChange(){
	
} */
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnToDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnToDateKillfocus(){
	
} */
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnClerkSelendok(){
	 
}
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnClerkSetfocus(){
	
}*/
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnClerkKillfocus(){
	
}*/
long rptGeneralExaminationCostsOfPatientsPolicyReport::OnClerkLoadData(){
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
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	PrintGeneralExaminationCostsOfPatientsPolicyReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_bPreview);

} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = false;		
	PrintGeneralExaminationCostsOfPatientsPolicyReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_bPreview);
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
		
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnPolicySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostsOfPatientsPolicyReport::OnPolicySelendok(){
	 
}
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnPolicySetfocus(){
	
}*/
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnPolicyKillfocus(){
	
}*/
long rptGeneralExaminationCostsOfPatientsPolicyReport::OnPolicyLoadData(){
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
/*void rptGeneralExaminationCostsOfPatientsPolicyReport::OnPolicyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnAddrptGeneralExaminationCostsOfPatientsPolicyReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnEditrptGeneralExaminationCostsOfPatientsPolicyReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnDeleterptGeneralExaminationCostsOfPatientsPolicyReport(){
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
 		OnCancelrptGeneralExaminationCostsOfPatientsPolicyReport(); 
 	}
	return 0;
}
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnSaverptGeneralExaminationCostsOfPatientsPolicyReport(){
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
 		//OnrptGeneralExaminationCostsOfPatientsPolicyReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnCancelrptGeneralExaminationCostsOfPatientsPolicyReport(){
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
int rptGeneralExaminationCostsOfPatientsPolicyReport::OnrptGeneralExaminationCostsOfPatientsPolicyReportListLoadData(){
	return 0;
}

void rptGeneralExaminationCostsOfPatientsPolicyReport::PrintGeneralExaminationCostsOfPatientsPolicyReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview)
{	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	szSQL.Format(_T(" SELECT  hd_docno as docno,") \
_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
_T(" 	date_part('year', hp_birthdate) as birthyear,") \
_T("	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
_T("	date(hd_admitdate) as examdate, ") \
_T(" 	hd_icd as icd10,") \
_T(" 	hfi_invoiceno as invoiceno,") \
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
_T(" 	sum(otherfee) as otherfee ,") \
_T(" 	sum(discount) as discount ,") \
_T(" 	sum(patpaid) as patpaid ") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
_T(" LEFT JOIN") \
_T(" (") \
_T("     SELECT ") \
_T(" 	hfe_deptid,") \
_T(" 	hfi_class,") \
_T(" 	hfi_docno,") \
_T(" 	hfi_invoiceno,") \
_T(" 	hfe_group as groupid,") \
_T(" 	hfe_quantity as qty,") \
_T(" 	hfe_unitprice	as unitprice,") \
_T(" 	hfe_cost as cost,") \
_T(" 	hfe_diffcost as difcost,") \
_T(" 	hfe_quantity*hfe_unitprice-hfe_diffcost as inscost,") \
_T(" 	case when substr(hfe_group, 1, 2)='A1'then hfe_cost else 0 end as drugfee,") \
_T(" 	case when substr(hfe_group, 1, 2)='A2'then hfe_cost else 0 end as bloodfee,") \
_T(" 	case when substr(hfe_group, 1, 2)='A3'then hfe_cost else 0 end as perfusionfee,") \
_T(" 	case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,") \
_T(" 	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost else 0 end as pacsfee,") \
_T(" 	case when substr(hfe_group, 1, 2)='B3'then hfe_cost else 0 end as explorationfee,") \
_T(" 	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost else 0 end as normtechfee,") \
_T(" 	case when hfe_hitech='Y' then hfe_cost else 0 end as hitechfee,") \
_T(" 	case when substr(hfe_group, 1, 2)='A9' then hfe_cost else 0 end as materialfee,") \
_T(" 	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
_T(" 	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
_T(" 	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
_T(" 	hfe_discount as discount,") \
_T(" 	hfe_patpaid as patpaid,") \
_T(" 	hfe_diffpaid as diffpaid,") \
_T(" 	hfe_patdebt as patdebt") \
_T("    FROM hms_fee_invoice") \
_T("    LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
_T("    WHERE hfi_type='P' and hfi_class in('E','O') AND hfe_cost > 0 and date(hfi_recvdate) between date('%s') and date('%s')") \
_T(" ) as tbl ON(hfi_docno=hd_docno)	") \
_T(" WHERE ho_type in('D','Z')") \
_T(" GROUP BY docno, pname, birthyear, sex, icd10, invoiceno, examdate ") \
_T(" HAVING sum(cost) > 0") \
_T(" ORDER BY invoiceno, pname "), szFromDate, szToDate);
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		return ;
	}
	if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOSTOFPATIENTPOLICYREPORT.RPT")) )
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
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;

	long double grpCost[13];
	long double ttlCost[13];
	double cost = 0;
	for (int i =0; i < 13; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}
	while(!rs.IsEOF())
	{
/*
		rs.GetValue(_T("insline"), szNewLine);
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
			rptDetail->SetValue(_T("InsuranceLine"), GetSelectionString(_T("hms_insline"), szNewLine));
			szOldLine = szNewLine;
			
		}
*/
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("birthyear"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
//		rs.GetValue(_T("cardno"), tmpStr);
//		rptDetail->SetValue(_T("5"), tmpStr);
//		rs.GetValue(_T("regplace"), tmpStr);
//		rptDetail->SetValue(_T("6"), tmpStr);
		
		tmpStr = CDate::Convert(rs.GetValue(_T("examdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		tmpStr.AppendFormat(_T("-%s"), rs.GetValue(_T("invoiceno")));
		rptDetail->SetValue(_T("9"), tmpStr);
		
		rs.GetValue(_T("cost"), cost);
		grpCost[0] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		
		rs.GetValue(_T("bedfee"), cost);
		grpCost[1] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[2] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[3] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("perfusionfee"), cost);
		grpCost[4] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("testfee"), cost);
		grpCost[5] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("explorationfee"), cost);
		grpCost[6] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[7] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[8] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);

		rs.GetValue(_T("materialfee"), cost);
		grpCost[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);
		
		rs.GetValue(_T("patpaid"), cost);
		grpCost[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);

		rs.GetValue(_T("discount"), cost);
		grpCost[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr);
		rs.MoveNext();
	}
/*
	for (int i =0; i <= 13; i++)
	{
			ttlCost[i] += grpCost[i];
	}
*/
	if(grpCost[0] > 0){
		CString szField;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =0; i <= 13; i++)
		{
			szField.Format(_T("S%d"), i+10);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
/*
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
*/

	//Page Footer
	//Report Footer
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();


}