#include "rptGeneralExaminationCostForInsuranceReport14A.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostForInsuranceReport14A* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostForInsuranceReport14A* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostForInsuranceReport14A *pVw = (rptGeneralExaminationCostForInsuranceReport14A *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostForInsuranceReport14A *pVw = (rptGeneralExaminationCostForInsuranceReport14A *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostForInsuranceReport14A *pVw = (rptGeneralExaminationCostForInsuranceReport14A *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostForInsuranceReport14A *pVw = (rptGeneralExaminationCostForInsuranceReport14A *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPolicySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostForInsuranceReport14A* )pWnd)->OnPolicySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPolicySelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnPolicySelendok();
}
/*static void _OnPolicySetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnPolicyKillfocus();
}*/
/*static void _OnPolicyKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnPolicyKillfocus();
}*/
static long _OnPolicyLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnPolicyLoadData();
}
/*static void _OnPolicyAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostForInsuranceReport14A *)pWnd)->OnPolicyAddNew();
}*/
static int _OnAddrptGeneralExaminationCostForInsuranceReport14AFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostForInsuranceReport14A*)pWnd)->OnAddrptGeneralExaminationCostForInsuranceReport14A();
} 
static int _OnEditrptGeneralExaminationCostForInsuranceReport14AFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostForInsuranceReport14A*)pWnd)->OnEditrptGeneralExaminationCostForInsuranceReport14A();
} 
static int _OnDeleterptGeneralExaminationCostForInsuranceReport14AFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostForInsuranceReport14A*)pWnd)->OnDeleterptGeneralExaminationCostForInsuranceReport14A();
} 
static int _OnSaverptGeneralExaminationCostForInsuranceReport14AFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostForInsuranceReport14A*)pWnd)->OnSaverptGeneralExaminationCostForInsuranceReport14A();
} 
static int _OnCancelrptGeneralExaminationCostForInsuranceReport14AFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostForInsuranceReport14A*)pWnd)->OnCancelrptGeneralExaminationCostForInsuranceReport14A();
} 
rptGeneralExaminationCostForInsuranceReport14A::rptGeneralExaminationCostForInsuranceReport14A(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle=_T("General Examination Cost For Insurance Object");
	SetDefaultValues();
}
rptGeneralExaminationCostForInsuranceReport14A::~rptGeneralExaminationCostForInsuranceReport14A(){
}
void rptGeneralExaminationCostForInsuranceReport14A::OnCreateComponents(){
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
void rptGeneralExaminationCostForInsuranceReport14A::OnInitializeComponents(){
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
void rptGeneralExaminationCostForInsuranceReport14A::OnSetWindowEvents(){
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
void rptGeneralExaminationCostForInsuranceReport14A::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndPolicy.GetDlgCtrlID(), m_szPolicyKey);

}
void rptGeneralExaminationCostForInsuranceReport14A::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptGeneralExaminationCostForInsuranceReport14A::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralExaminationCostForInsuranceReport14A::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szPolicyKey.Empty();

}
int rptGeneralExaminationCostForInsuranceReport14A::SetMode(int nMode){
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
/*void rptGeneralExaminationCostForInsuranceReport14A::OnYearChange(){
	
} */
/*void rptGeneralExaminationCostForInsuranceReport14A::OnYearSetfocus(){
	
} */
/*void rptGeneralExaminationCostForInsuranceReport14A::OnYearKillfocus(){
	
} */
int rptGeneralExaminationCostForInsuranceReport14A::OnYearCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostForInsuranceReport14A::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostForInsuranceReport14A::OnReportPeriodSelendok(){
	
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
/*void rptGeneralExaminationCostForInsuranceReport14A::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralExaminationCostForInsuranceReport14A::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralExaminationCostForInsuranceReport14A::OnReportPeriodLoadData(){
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
/*void rptGeneralExaminationCostForInsuranceReport14A::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralExaminationCostForInsuranceReport14A::OnFromDateChange(){
	
} */
/*void rptGeneralExaminationCostForInsuranceReport14A::OnFromDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostForInsuranceReport14A::OnFromDateKillfocus(){
	
} */
int rptGeneralExaminationCostForInsuranceReport14A::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralExaminationCostForInsuranceReport14A::OnToDateChange(){
	
} */
/*void rptGeneralExaminationCostForInsuranceReport14A::OnToDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostForInsuranceReport14A::OnToDateKillfocus(){
	
} */
int rptGeneralExaminationCostForInsuranceReport14A::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostForInsuranceReport14A::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostForInsuranceReport14A::OnClerkSelendok(){
	 
}
/*void rptGeneralExaminationCostForInsuranceReport14A::OnClerkSetfocus(){
	
}*/
/*void rptGeneralExaminationCostForInsuranceReport14A::OnClerkKillfocus(){
	
}*/
long rptGeneralExaminationCostForInsuranceReport14A::OnClerkLoadData(){
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
/*void rptGeneralExaminationCostForInsuranceReport14A::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptGeneralExaminationCostForInsuranceReport14A::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	PrintGeneralExaminationCostForInsuranceObjectReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_bPreview);

} 
void rptGeneralExaminationCostForInsuranceReport14A::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = false;		
	//PrintGeneralExaminationCostForInsuranceObjectGroupReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_bPreview);
	PrintGeneralExaminationCostForInsuranceObjectReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_bPreview);
}	
void rptGeneralExaminationCostForInsuranceReport14A::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
		
} 
void rptGeneralExaminationCostForInsuranceReport14A::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void rptGeneralExaminationCostForInsuranceReport14A::OnPolicySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostForInsuranceReport14A::OnPolicySelendok(){
	 
}
/*void rptGeneralExaminationCostForInsuranceReport14A::OnPolicySetfocus(){
	
}*/
/*void rptGeneralExaminationCostForInsuranceReport14A::OnPolicyKillfocus(){
	
}*/
long rptGeneralExaminationCostForInsuranceReport14A::OnPolicyLoadData(){
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
/*void rptGeneralExaminationCostForInsuranceReport14A::OnPolicyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int rptGeneralExaminationCostForInsuranceReport14A::OnAddrptGeneralExaminationCostForInsuranceReport14A(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralExaminationCostForInsuranceReport14A::OnEditrptGeneralExaminationCostForInsuranceReport14A(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralExaminationCostForInsuranceReport14A::OnDeleterptGeneralExaminationCostForInsuranceReport14A(){
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
 		OnCancelrptGeneralExaminationCostForInsuranceReport14A(); 
 	}
	return 0;
}
int rptGeneralExaminationCostForInsuranceReport14A::OnSaverptGeneralExaminationCostForInsuranceReport14A(){
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
 		//OnrptGeneralExaminationCostForInsuranceReport14AListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralExaminationCostForInsuranceReport14A::OnCancelrptGeneralExaminationCostForInsuranceReport14A(){
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
int rptGeneralExaminationCostForInsuranceReport14A::OnrptGeneralExaminationCostForInsuranceReport14AListLoadData(){
	return 0;
}
void rptGeneralExaminationCostForInsuranceReport14A::PrintGeneralExaminationCostForInsuranceObjectReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere;
	if (pMF->m_szDiscountPrintReport ==_T("Y"))
	{
		szSQL.Format(_T(" SELECT 	hig_group as groupid, ") \
		_T("    	hig_name as groupname,") \
		_T("   	sum(totalpatient) as totalpatient, ") \
		_T("    	sum(cost) as cost,") \
		_T("     	sum(difcost) as difcost,") \
		_T("     	sum(inscost) as inscost,") \
		_T("     	sum(drugfee) as drugfee,") \
		_T("     	sum(bloodfee) as bloodfee ,") \
		_T("     	sum(perfusionfee) as perfusionfee ,") \
		_T("     	sum(testfee) as testfee ,") \
		_T("     	sum(pacsfee) as pacsfee ,") \
		_T("     	sum(normtechfee) as normtechfee ,") \
		_T("     	sum(hitechfee) as hitechfee ,") \
		_T("     	sum(materialfee) as materialfee ,") \
		_T("     	sum(examfee) as examfee ,") \
		_T("     	sum(otherfee) as otherfee ,") \
		_T("     	sum(inspaid) as inspaid ,") \
		_T("     	sum(patpaid) as patpaid ") \
		_T("    FROM hms_insurance_group") \
		_T("    LEFT JOIN") \
		_T("    (") \
		_T("     SELECT hc_groupid as groupid, ") \
		_T(" 	hfi_docno  as docno,") \
		_T("   	1 as totalpatient, ") \
		_T("    	sum(cost) as cost,") \
		_T("     	sum(difcost) as difcost,") \
		_T("     	sum(inscost) as inscost,") \
		_T("     	sum(drugfee) as drugfee,") \
		_T("     	sum(bloodfee) as bloodfee ,") \
		_T("     	sum(perfusionfee) as perfusionfee ,") \
		_T("     	sum(testfee+explorationfee) as testfee ,") \
		_T("     	sum(pacsfee) as pacsfee ,") \
		_T("     	sum(normtechfee) as normtechfee ,") \
		_T("     	sum(hitechfee) as hitechfee ,") \
		_T("     	sum(materialfee) as materialfee ,") \
		_T("     	sum(examfee) as examfee ,") \
		_T("     	sum(otherfee) as otherfee ,") \
		_T("     	sum(discount) as inspaid ,") \
		_T("     	sum(patpaid) as patpaid ") \
		_T("     FROM") \
		_T("     (") \
		_T("         SELECT ") \
		_T("     	hfi_deptid,") \
		_T("     	hfi_class,") \
		_T("     	hfi_docno,") \
		_T("     	hfi_invoiceno,") \
		_T("     	hfe_group as groupid,") \
		_T("     	hfe_quantity as qty,") \
		_T("     	hfe_unitprice	as unitprice,") \
		_T("     	hfe_cost as cost,") \
		_T("     	hfe_diffcost as difcost,") \
		_T("     	hfe_cost-hfe_diffcost as inscost,") \
		_T("     	case when substr(hfe_group, 1, 2)='A1'then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='A2'then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='A3'then hfe_cost-hfe_diffcost else 0 end as perfusionfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='B1'then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='B3'then hfe_cost-hfe_diffcost else 0 end as explorationfee,") \
		_T("     	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as normtechfee,") \
		_T("     	case when hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as hitechfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='A9' then hfe_cost-hfe_diffcost else 0 end as materialfee,") \
		_T("     	case when hfe_group='C0000' then hfe_cost-hfe_diffcost else 0 end as bedfee,") \
		_T("     	case when hfe_group='D0000' then hfe_cost-hfe_diffcost else 0 end as examfee,") \
		_T("     	case when hfe_group='F0000' then hfe_cost-hfe_diffcost else 0 end as otherfee,") \
		_T("     	hfe_discount as discount,") \
		_T("     	hfe_patpaid as patpaid,") \
		_T("     	hfe_diffpaid as diffpaid,") \
		_T("     	hfe_patdebt as patdebt") \
		_T("        FROM hms_fee_invoice") \
		_T("        LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("        WHERE hfe_status='P' ") \
		_T("  	and hfe_cost > 0 ") \
		_T("  	and date(hfi_recvdate) between date('%s') and date('%s') ") \
		_T("  	and hfi_type='P' ") \
		_T("   	and hfi_class in('E','O')") \
		_T("     ) as tbl") \
		_T("     LEFT JOIN hms_doc ON(hd_docno=hfi_docno)") \
		_T("     LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("     LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("     WHERE hd_status='T' and ho_type in('I','C')") \
		_T("    GROUP BY hc_groupid, hfi_docno") \
		_T("    ) as tbl2 ON(hig_idx=groupid)") \
		_T("	WHERE cost >0   ") \
		_T("   GROUP BY hig_group, hig_name") \
		_T("   ORDER BY groupid, groupname"), szFromDate, szToDate, szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT 	hig_group as groupid, ") \
		_T("    	hig_name as groupname,") \
		_T("   	sum(totalpatient) as totalpatient, ") \
		_T("    	sum(cost) as cost,") \
		_T("     	sum(difcost) as difcost,") \
		_T("     	sum(inscost) as inscost,") \
		_T("     	sum(drugfee) as drugfee,") \
		_T("     	sum(bloodfee) as bloodfee ,") \
		_T("     	sum(perfusionfee) as perfusionfee ,") \
		_T("     	sum(testfee) as testfee ,") \
		_T("     	sum(pacsfee) as pacsfee ,") \
		_T("     	sum(normtechfee) as normtechfee ,") \
		_T("     	sum(hitechfee) as hitechfee ,") \
		_T("     	sum(materialfee) as materialfee ,") \
		_T("     	sum(examfee) as examfee ,") \
		_T("     	sum(otherfee) as otherfee ,") \
		_T("     	sum(inspaid) as inspaid ,") \
		_T("     	sum(patpaid) as patpaid ") \
		_T("    FROM hms_insurance_group") \
		_T("    LEFT JOIN") \
		_T("    (") \
		_T("     SELECT hc_groupid as groupid, ") \
		_T(" 	hfi_docno  as docno,") \
		_T("   	1 as totalpatient, ") \
		_T("    	sum(discount) as cost,") \
		_T("     	sum(difcost) as difcost,") \
		_T("     	sum(inscost) as inscost,") \
		_T("     	sum(drugfee) as drugfee,") \
		_T("     	sum(bloodfee) as bloodfee ,") \
		_T("     	sum(perfusionfee) as perfusionfee ,") \
		_T("     	sum(testfee+explorationfee) as testfee ,") \
		_T("     	sum(pacsfee) as pacsfee ,") \
		_T("     	sum(normtechfee) as normtechfee ,") \
		_T("     	sum(hitechfee) as hitechfee ,") \
		_T("     	sum(materialfee) as materialfee ,") \
		_T("     	sum(examfee) as examfee ,") \
		_T("     	sum(otherfee) as otherfee ,") \
		_T("     	sum(discount) as inspaid ,") \
		_T("     	sum(patpaid) as patpaid ") \
		_T("     FROM") \
		_T("     (") \
		_T("         SELECT ") \
		_T("     	hfi_deptid,") \
		_T("     	hfi_class,") \
		_T("     	hfi_docno,") \
		_T("     	hfi_invoiceno,") \
		_T("     	hfe_group as groupid,") \
		_T("     	hfe_quantity as qty,") \
		_T("     	hfe_unitprice	as unitprice,") \
		_T("     	hfe_cost as cost,") \
		_T("     	hfe_diffcost as difcost,") \
		_T("     	hfe_discount as inscost,") \
		_T("     	case when substr(hfe_group, 1, 2)='A1'then hfe_discount else 0 end as drugfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='A2'then hfe_discount else 0 end as bloodfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='A3'then hfe_discount else 0 end as perfusionfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='B1'then hfe_discount else 0 end as testfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_discount else 0 end as pacsfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='B3'then hfe_discount else 0 end as explorationfee,") \
		_T("     	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_discount else 0 end as normtechfee,") \
		_T("     	case when hfe_hitech='Y' then hfe_discount else 0 end as hitechfee,") \
		_T("     	case when substr(hfe_group, 1, 2)='A9' then hfe_discount else 0 end as materialfee,") \
		_T("     	case when hfe_group='C0000' then hfe_discount else 0 end as bedfee,") \
		_T("     	case when hfe_group='D0000' then hfe_discount else 0 end as examfee,") \
		_T("     	case when hfe_group='F0000' then hfe_discount else 0 end as otherfee,") \
		_T("     	hfe_discount as discount,") \
		_T("     	hfe_patpaid as patpaid,") \
		_T("     	hfe_diffpaid as diffpaid,") \
		_T("     	hfe_patdebt as patdebt") \
		_T("        FROM hms_fee_invoice") \
		_T("        LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("        WHERE hfe_status='P' ") \
		_T("  	and hfe_cost > 0 ") \
		_T("  	and date(hfi_recvdate) between date('%s') and date('%s') ") \
		_T("  	and hfi_type='P' ") \
		_T("   	and hfi_class in('E','O')") \
		_T("     ) as tbl") \
		_T("     LEFT JOIN hms_doc ON(hd_docno=hfi_docno)") \
		_T("     LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("     LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("     WHERE hd_status='T' and ho_type in('I','C')") \
		_T("    GROUP BY hc_groupid, hfi_docno") \
		_T("    ) as tbl2 ON(hig_idx=groupid)") \
		_T("	WHERE cost >0   ") \
		_T("   GROUP BY hig_group, hig_name") \
		_T("   ORDER BY groupid, groupname"), szFromDate, szToDate, szWhere);
	}
	//_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();

	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		return ;
	}
	if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOSTFORINSURANCEOBJECTREPORT.RPT")) )
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
	long double grpCost[17];
	long double ttlCost[17];
	double cost = 0;
	CString szField, szAmount;
	TranslateString(_T("Total Group"), szAmount);
	for (int i =0; i <= 17; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost[4] > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i =3; i < 17; i++)
				{
					tmpStr.Format(_T("(%s)"),szOldLine);
					rptDetail->SetValue(_T("TotalGroup"), szAmount + tmpStr);
					szField.Format(_T("S%d"), i);										
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];					
					grpCost[i] = 0;				
				}
			}
			tmpStr = pMF->GetSelectionString(_T("hms_insurance_group"), szNewLine);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldLine = szNewLine;
			nIndex=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("groupname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("totalpatient"), cost);
		grpCost[3] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("inscost"), cost);
		grpCost[4] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("examfee"), cost);
		grpCost[5] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[6] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[7] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("perfusionfee"), cost);
		grpCost[8] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("testfee"), cost);
		grpCost[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("materialfee"), cost);
		grpCost[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("patpaid"), cost);
		grpCost[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[16] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.MoveNext();
	}
	for (int i =0; i < 17; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[4] > 0){
		CString szField;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =2; i < 17; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
			tmpStr.Format(_T("(%s)"),szOldLine);
			rptDetail->SetValue(_T("TotalGroup"), szAmount + tmpStr);
		}
	
	}
	if(ttlCost[4] > 0){		
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		szAmount+= _T("(I+II+III+IV+V+VI)");
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i =2; i < 17; i++)
		{
			
			szField.Format(_T("S%d"), i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
			ttlCost[i] += grpCost[i];
		}

	}

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

	EndWaitCursor();
}
