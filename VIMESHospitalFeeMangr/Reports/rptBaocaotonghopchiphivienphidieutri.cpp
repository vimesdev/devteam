#include "rptBaocaotonghopchiphivienphidieutri.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaotonghopchiphivienphidieutri* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaotonghopchiphivienphidieutri* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutri *pVw = (rptBaocaotonghopchiphivienphidieutri *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutri *pVw = (rptBaocaotonghopchiphivienphidieutri *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutri *pVw = (rptBaocaotonghopchiphivienphidieutri *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutri *pVw = (rptBaocaotonghopchiphivienphidieutri *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPolicySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaotonghopchiphivienphidieutri* )pWnd)->OnPolicySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPolicySelendokFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnPolicySelendok();
}
/*static void _OnPolicySetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnPolicyKillfocus();
}*/
/*static void _OnPolicyKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnPolicyKillfocus();
}*/
static long _OnPolicyLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnPolicyLoadData();
}
/*static void _OnPolicyAddNewFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutri *)pWnd)->OnPolicyAddNew();
}*/
static int _OnAddrptBaocaotonghopchiphivienphidieutriFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutri*)pWnd)->OnAddrptBaocaotonghopchiphivienphidieutri();
} 
static int _OnEditrptBaocaotonghopchiphivienphidieutriFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutri*)pWnd)->OnEditrptBaocaotonghopchiphivienphidieutri();
} 
static int _OnDeleterptBaocaotonghopchiphivienphidieutriFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutri*)pWnd)->OnDeleterptBaocaotonghopchiphivienphidieutri();
} 
static int _OnSaverptBaocaotonghopchiphivienphidieutriFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutri*)pWnd)->OnSaverptBaocaotonghopchiphivienphidieutri();
} 
static int _OnCancelrptBaocaotonghopchiphivienphidieutriFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutri*)pWnd)->OnCancelrptBaocaotonghopchiphivienphidieutri();
} 
rptBaocaotonghopchiphivienphidieutri::rptBaocaotonghopchiphivienphidieutri(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle=_T("Tong hop chi phi kham dieu tri vien phi theo khoa");
	SetDefaultValues();
}
rptBaocaotonghopchiphivienphidieutri::~rptBaocaotonghopchiphivienphidieutri(){
}
void rptBaocaotonghopchiphivienphidieutri::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 495, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Month"), 255, 30, 355, 55);
	m_wndReportPeriod.Create(this,357, 30, 490, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 255, 60, 355, 85);
	m_wndToDate.Create(this,357, 60, 490, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 490, 115); 
	m_wndPolicyLabel.Create(this, _T("Policy"), 10, 120, 110, 145);
	m_wndPolicy.Create(this,115, 120, 305, 145); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 160, 160, 240, 185);
	m_wndPrint.Create(this, _T("&Print"), 245, 160, 325, 185);
	m_wndExport.Create(this, _T("&Export"), 330, 160, 410, 185);
	m_wndClose.Create(this, _T("&Close"), 415, 160, 495, 185);	

}
void rptBaocaotonghopchiphivienphidieutri::OnInitializeComponents(){
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
void rptBaocaotonghopchiphivienphidieutri::OnSetWindowEvents(){
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
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDateTime();
	SetMode(VM_EDIT);
}
void rptBaocaotonghopchiphivienphidieutri::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndPolicy.GetDlgCtrlID(), m_szPolicyKey);

}
void rptBaocaotonghopchiphivienphidieutri::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptBaocaotonghopchiphivienphidieutri::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptBaocaotonghopchiphivienphidieutri::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szPolicyKey.Empty();

}
int rptBaocaotonghopchiphivienphidieutri::SetMode(int nMode){
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
/*void rptBaocaotonghopchiphivienphidieutri::OnYearChange(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutri::OnYearSetfocus(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutri::OnYearKillfocus(){
	
} */
int rptBaocaotonghopchiphivienphidieutri::OnYearCheckValue(){
	return 0;
} 
void rptBaocaotonghopchiphivienphidieutri::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaotonghopchiphivienphidieutri::OnReportPeriodSelendok(){
	
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
/*void rptBaocaotonghopchiphivienphidieutri::OnReportPeriodSetfocus(){
	
}*/
/*void rptBaocaotonghopchiphivienphidieutri::OnReportPeriodKillfocus(){
	
}*/
long rptBaocaotonghopchiphivienphidieutri::OnReportPeriodLoadData(){
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
/*void rptBaocaotonghopchiphivienphidieutri::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptBaocaotonghopchiphivienphidieutri::OnFromDateChange(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutri::OnFromDateSetfocus(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutri::OnFromDateKillfocus(){
	
} */
int rptBaocaotonghopchiphivienphidieutri::OnFromDateCheckValue(){
	return 0;
} 
/*void rptBaocaotonghopchiphivienphidieutri::OnToDateChange(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutri::OnToDateSetfocus(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutri::OnToDateKillfocus(){
	
} */
int rptBaocaotonghopchiphivienphidieutri::OnToDateCheckValue(){
	return 0;
} 
void rptBaocaotonghopchiphivienphidieutri::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaotonghopchiphivienphidieutri::OnClerkSelendok(){
	 
}
/*void rptBaocaotonghopchiphivienphidieutri::OnClerkSetfocus(){
	
}*/
/*void rptBaocaotonghopchiphivienphidieutri::OnClerkKillfocus(){
	
}*/
long rptBaocaotonghopchiphivienphidieutri::OnClerkLoadData(){
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
/*void rptBaocaotonghopchiphivienphidieutri::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptBaocaotonghopchiphivienphidieutri::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	UpdateData(true);
	PrintListReport(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);

} 
void rptBaocaotonghopchiphivienphidieutri::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = false;		
	UpdateData(true);
	PrintListReport(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);
} 
void rptBaocaotonghopchiphivienphidieutri::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	UpdateData(true);
	ExportListReport(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);
} 
void rptBaocaotonghopchiphivienphidieutri::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void rptBaocaotonghopchiphivienphidieutri::OnPolicySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaotonghopchiphivienphidieutri::OnPolicySelendok(){
	 
}
/*void rptBaocaotonghopchiphivienphidieutri::OnPolicySetfocus(){
	
}*/
/*void rptBaocaotonghopchiphivienphidieutri::OnPolicyKillfocus(){
	
}*/
long rptBaocaotonghopchiphivienphidieutri::OnPolicyLoadData(){
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
/*void rptBaocaotonghopchiphivienphidieutri::OnPolicyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int rptBaocaotonghopchiphivienphidieutri::OnAddrptBaocaotonghopchiphivienphidieutri(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptBaocaotonghopchiphivienphidieutri::OnEditrptBaocaotonghopchiphivienphidieutri(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptBaocaotonghopchiphivienphidieutri::OnDeleterptBaocaotonghopchiphivienphidieutri(){
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
 		OnCancelrptBaocaotonghopchiphivienphidieutri(); 
 	}
	return 0;
}
int rptBaocaotonghopchiphivienphidieutri::OnSaverptBaocaotonghopchiphivienphidieutri(){
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
 		//OnrptBaocaotonghopchiphivienphidieutriListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptBaocaotonghopchiphivienphidieutri::OnCancelrptBaocaotonghopchiphivienphidieutri(){
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
int rptBaocaotonghopchiphivienphidieutri::OnrptBaocaotonghopchiphivienphidieutriListLoadData(){
	return 0;
}
void rptBaocaotonghopchiphivienphidieutri::PrintListReport(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szWhere1;
	CRecord rs(&pMF->m_db);

	szWhere.Empty();
	szWhere1.Empty();

	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);
	
	if(!m_szPolicyKey.IsEmpty())
		szWhere1.Format(_T(" WHERE ho_type='%s' "), m_szPolicyKey);
	

	szSQL.Format(_T(" SELECT  (select sd_name from sys_dept where sd_id=hfe_deptid) as deptid,hd_docno as docno, ho_type as objecttype, invoiceno,bookno,receiveby,") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	sum(examfee) as examfee, sum(testfee) as testfee,sum(pacsfee) as pacsfee,sum(pacsCDCN) as pacsCDCN,") \
		_T("  	sum(normtechfee) as normtechfee,sum(bedfee) as bedfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee, sum(cost) as cost 	 ") \
		_T("  FROM hms_patient") \
		_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_object ON(hd_object=ho_id)") \
		_T("  LEFT JOIN") \
		_T("  (") \
		_T("      SELECT hfi_receiver as receiveby, ") \
		_T("  	hfe_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_recvno as invoiceno,") \
		_T("  	hfi_bookno as bookno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 1) in('A')then hfe_cost else 0 end as drugfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B2' then hfe_cost else 0 end as pacsfee,") \
		_T("   	case when substr(hfe_group, 1, 2)in('B3') then hfe_cost else 0 end as pacsCDCN,") \
		_T("   	case when substr(hfe_group, 1, 2) in('B4','B5') then hfe_cost else 0 end as normtechfee,  	") \
		_T("   	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
		_T("   	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T("   	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee, ") \
		_T("  	hfe_cost as cost 	") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfi_type='P' AND hfe_cost > 0 AND hfi_class in('E','I') and hfi_recvdate between '%s' and '%s' %s") \
		_T("  ) as tbl ON(hfi_docno=hd_docno) %s ") \
		_T("  GROUP BY deptid,objecttype, docno, pname, birthyear, sex,invoiceno,bookno, receiveby ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY deptid,docno"), szFromDate, szToDate, szWhere,szWhere1);


	if(!rpt.Init(_T("Reports/HMS/HF_TONGHOPCHIPHIKHAMCHUABENHVIENPHIDIEUTRI.RPT")) )
		return ;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	
	//Page Header
	//Report Detail
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	long double grpCost[15];
	long double ttlCost[15];
	double cost = 0;
	for (int i =0; i < 16; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

	long double nSumAmount = 0;
	double nAmount = 0;
	long nIdx=1;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost[15] > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i =7; i < 16; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];
					grpCost[i] = 0;				
				}
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"),  szNewLine);
			szOldLine = szNewLine;
			nIdx=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%ld"),nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);		

		rs.GetValue(_T("bookno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("invoiceno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);	

		rs.GetValue(_T("examfee"), nAmount);
		grpCost[7]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("testfee"), nAmount);
		grpCost[8]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("pacsfee"), nAmount);
		grpCost[9]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("pacsCDCN"), nAmount);
		grpCost[10]+=nAmount;
		FormatCurrency(nAmount, tmpStr);		
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("normtechfee"), nAmount);
		grpCost[11]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		
		rs.GetValue(_T("drugfee"), nAmount);
		grpCost[12]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("bedfee"), nAmount);
		grpCost[13]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		
		rs.GetValue(_T("otherfee"), nAmount);
		grpCost[14]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("Cost"), nAmount);
		grpCost[15]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.MoveNext();
	}
	for (int i =0; i < 16; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[15] > 0){
		CString szField;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =7; i < 16; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[15] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("Tongkhoa"), szAmount);
		for (int i =7; i < 16; i++)
		{
			
			szField.Format(_T("S%d"), i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);		
		}

	}
	//Page Footer
	//Report Footer
	

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();

}

void rptBaocaotonghopchiphivienphidieutri::ExportListReport(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szWhere1,szFromDateToDate;
	CRecord rs(&pMF->m_db);	
	szWhere.Empty();
	szWhere1.Empty();

	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);
	
	if(!m_szPolicyKey.IsEmpty())
		szWhere1.Format(_T(" WHERE ho_type='%s' "), m_szPolicyKey);
	

	szSQL.Format(_T(" SELECT  (select sd_name from sys_dept where sd_id=hfe_deptid) as deptid,hd_docno as docno, ho_type as objecttype, invoiceno,bookno,receiveby,") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	sum(examfee) as examfee, sum(testfee) as testfee,sum(pacsfee) as pacsfee,sum(pacsCDCN) as pacsCDCN,") \
		_T("  	sum(normtechfee) as normtechfee,sum(bedfee) as bedfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee, sum(cost) as cost 	 ") \
		_T("  FROM hms_patient") \
		_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_object ON(hd_object=ho_id)") \
		_T("  LEFT JOIN") \
		_T("  (") \
		_T("      SELECT hfi_receiver as receiveby, ") \
		_T("  	hfe_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_recvno as invoiceno,") \
		_T("  	hfi_bookno as bookno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 1) in('A')then hfe_cost else 0 end as drugfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B2' then hfe_cost else 0 end as pacsfee,") \
		_T("   	case when substr(hfe_group, 1, 2)in('B3') then hfe_cost else 0 end as pacsCDCN,") \
		_T("   	case when substr(hfe_group, 1, 2) in('B4','B5') then hfe_cost else 0 end as normtechfee,  	") \
		_T("   	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
		_T("   	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T("   	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee, ") \
		_T("  	hfe_cost as cost 	") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfi_type='P' AND hfe_cost > 0 AND hfi_class in('E','I') and hfi_recvdate between '%s' and '%s' %s") \
		_T("  ) as tbl ON(hfi_docno=hd_docno) %s ") \
		_T("  GROUP BY deptid,objecttype, docno, pname, birthyear, sex,invoiceno,bookno, receiveby ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY deptid,docno"), szFromDate, szToDate, szWhere,szWhere1);
	
	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0,5);
	xls.SetColumnWidth(1,23);
	xls.SetColumnWidth(2,10);
	xls.SetColumnWidth(3,10);
	xls.SetColumnWidth(4,10);
	xls.SetColumnWidth(5,10);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,12);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,12);
	xls.SetColumnWidth(11,12);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	

	xls.SetCellMergedColumns(0,3,17);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	TranslateString(_T("Tong hop chi phi kham dieu tri vien phi theo khoa"), tmpStr);
	xls.SetCellText(0, 3, tmpStr,FMT_TEXT,true,18);
	xls.SetCellMergedColumns(0,4,17);
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 4, szFromDateToDate,FMT_TEXT,true,12);


	int nRow = 6;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Quy\x1EC3n"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("S\x1ED1 H\x110"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("H\x1ECFng"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);		
	TranslateString(_T("Ph\xED kh\xE1m"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("\x58\xE9t nghi\x1EC7m"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(8, nRow, _T("CDHA"), FMT_TEXT,true);	
	xls.SetCellText(9, nRow, _T("TDCN"), FMT_TEXT,true);
	TranslateString(_T("TT, PT"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(12, nRow, _T("Gi\x1B0\x1EDDng"), FMT_TEXT,true);
	xls.SetCellText(13, nRow, _T("Ph\xED kh\xE1\x63"), FMT_TEXT,true);	
	xls.SetCellText(14, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT,true);

	BeginWaitCursor();
	//Page Header
	//Report Detail
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double grpCost[15];
	long double ttlCost[15];
	double cost = 0;
	for (int i =0; i < 16; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

	long double nSumAmount = 0;
	double nAmount = 0;
	long nIdx=1;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){			
			if(grpCost[14] > 0)
			{
				nRow++;
				xls.MergeCell(nRow,1,nRow,5);
				xls.SetCellText(1,nRow,_T("\x43\x1ED9ng:"),FMT_TEXT,TRUE);
				for (int i =6; i < 15; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpCost[i]);
					xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1,TRUE);
					ttlCost[i] += grpCost[i];
					grpCost[i] = 0;
				}
			}
			nRow++;
			xls.MergeCell(nRow,1,nRow,5);
			xls.SetCellText(1,nRow, szNewLine, FMT_TEXT,TRUE);
			szOldLine = szNewLine;
			nIdx=1;
		}

		nRow++;
		tmpStr.Format(_T("%ld"),nIdx++);
		xls.SetCellText(0,nRow,tmpStr,FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr,FMT_INTEGER);		

		rs.GetValue(_T("bookno"), tmpStr);
		xls.SetCellText(3,nRow,tmpStr,FMT_TEXT);
		rs.GetValue(_T("invoiceno"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("examfee"), nAmount);
		grpCost[6]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(6,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("testfee"), nAmount);
		grpCost[7]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(7,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsfee"), nAmount);
		grpCost[8]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(8,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsCDCN"), nAmount);
		grpCost[9]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(9,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("normtechfee"), nAmount);
		grpCost[10]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(10,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("drugfee"), nAmount);
		grpCost[11]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(11,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("bedfee"), nAmount);
		grpCost[12]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(12,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("otherfee"), nAmount);
		grpCost[13]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(13,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Cost"), nAmount);
		grpCost[14]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(14,nRow,tmpStr,FMT_NUMBER1);

		rs.MoveNext();
	}
	for (int i =0; i < 15; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[14] > 0){
		nRow++;
		xls.MergeCell(nRow,1,nRow,4);
		xls.SetCellText(1,nRow,_T("\x43\x1ED9ng:"),FMT_TEXT,TRUE);
		for (int i =6; i < 15; i++)
		{
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1,TRUE);
		}
	
	}
	if(ttlCost[14] > 0){
		nRow++;
		xls.MergeCell(nRow,1,nRow,4);
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT,TRUE);
		for (int i =6; i < 15; i++)
		{
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1,TRUE);		
		}

	}
	
	xls.Save(_T("Exports\\Tonghopchiphidieutritrongkhoa.xls"));	
	EndWaitCursor();

}
