#include "rptBaocaotonghopchiphivienphidieutrichitiet.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaotonghopchiphivienphidieutrichitiet* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaotonghopchiphivienphidieutrichitiet* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutrichitiet *pVw = (rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutrichitiet *pVw = (rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutrichitiet *pVw = (rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptBaocaotonghopchiphivienphidieutrichitiet *pVw = (rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPolicySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaotonghopchiphivienphidieutrichitiet* )pWnd)->OnPolicySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPolicySelendokFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnPolicySelendok();
}
/*static void _OnPolicySetfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnPolicyKillfocus();
}*/
/*static void _OnPolicyKillfocusFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnPolicyKillfocus();
}*/
static long _OnPolicyLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnPolicyLoadData();
}
/*static void _OnPolicyAddNewFnc(CWnd *pWnd){
	((rptBaocaotonghopchiphivienphidieutrichitiet *)pWnd)->OnPolicyAddNew();
}*/
static int _OnAddrptBaocaotonghopchiphivienphidieutrichitietFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutrichitiet*)pWnd)->OnAddrptBaocaotonghopchiphivienphidieutrichitiet();
} 
static int _OnEditrptBaocaotonghopchiphivienphidieutrichitietFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutrichitiet*)pWnd)->OnEditrptBaocaotonghopchiphivienphidieutrichitiet();
} 
static int _OnDeleterptBaocaotonghopchiphivienphidieutrichitietFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutrichitiet*)pWnd)->OnDeleterptBaocaotonghopchiphivienphidieutrichitiet();
} 
static int _OnSaverptBaocaotonghopchiphivienphidieutrichitietFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutrichitiet*)pWnd)->OnSaverptBaocaotonghopchiphivienphidieutrichitiet();
} 
static int _OnCancelrptBaocaotonghopchiphivienphidieutrichitietFnc(CWnd *pWnd){
	 return ((rptBaocaotonghopchiphivienphidieutrichitiet*)pWnd)->OnCancelrptBaocaotonghopchiphivienphidieutrichitiet();
} 
rptBaocaotonghopchiphivienphidieutrichitiet::rptBaocaotonghopchiphivienphidieutrichitiet(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle=_T("Tong hop chi phi kham dieu tri vien phi theo khoa (chi tiet)");
	SetDefaultValues();
}
rptBaocaotonghopchiphivienphidieutrichitiet::~rptBaocaotonghopchiphivienphidieutrichitiet(){
}
void rptBaocaotonghopchiphivienphidieutrichitiet::OnCreateComponents(){
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
void rptBaocaotonghopchiphivienphidieutrichitiet::OnInitializeComponents(){
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
void rptBaocaotonghopchiphivienphidieutrichitiet::OnSetWindowEvents(){
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
void rptBaocaotonghopchiphivienphidieutrichitiet::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndPolicy.GetDlgCtrlID(), m_szPolicyKey);

}
void rptBaocaotonghopchiphivienphidieutrichitiet::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptBaocaotonghopchiphivienphidieutrichitiet::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptBaocaotonghopchiphivienphidieutrichitiet::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szPolicyKey.Empty();

}
int rptBaocaotonghopchiphivienphidieutrichitiet::SetMode(int nMode){
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
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnYearChange(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnYearSetfocus(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnYearKillfocus(){
	
} */
int rptBaocaotonghopchiphivienphidieutrichitiet::OnYearCheckValue(){
	return 0;
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnReportPeriodSelendok(){
	
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
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnReportPeriodSetfocus(){
	
}*/
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnReportPeriodKillfocus(){
	
}*/
long rptBaocaotonghopchiphivienphidieutrichitiet::OnReportPeriodLoadData(){
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
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnFromDateChange(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnFromDateSetfocus(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnFromDateKillfocus(){
	
} */
int rptBaocaotonghopchiphivienphidieutrichitiet::OnFromDateCheckValue(){
	return 0;
} 
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnToDateChange(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnToDateSetfocus(){
	
} */
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnToDateKillfocus(){
	
} */
int rptBaocaotonghopchiphivienphidieutrichitiet::OnToDateCheckValue(){
	return 0;
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnClerkSelendok(){
	 
}
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnClerkSetfocus(){
	
}*/
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnClerkKillfocus(){
	
}*/
long rptBaocaotonghopchiphivienphidieutrichitiet::OnClerkLoadData(){
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
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptBaocaotonghopchiphivienphidieutrichitiet::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	UpdateData(true);
	PrintListReport(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);

} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = false;		
	UpdateData(true);
	PrintListReport(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
		
	UpdateData(true);
	ExportListReport(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnPolicySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaotonghopchiphivienphidieutrichitiet::OnPolicySelendok(){
	 
}
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnPolicySetfocus(){
	
}*/
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnPolicyKillfocus(){
	
}*/
long rptBaocaotonghopchiphivienphidieutrichitiet::OnPolicyLoadData(){
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
/*void rptBaocaotonghopchiphivienphidieutrichitiet::OnPolicyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int rptBaocaotonghopchiphivienphidieutrichitiet::OnAddrptBaocaotonghopchiphivienphidieutrichitiet(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptBaocaotonghopchiphivienphidieutrichitiet::OnEditrptBaocaotonghopchiphivienphidieutrichitiet(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptBaocaotonghopchiphivienphidieutrichitiet::OnDeleterptBaocaotonghopchiphivienphidieutrichitiet(){
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
 		OnCancelrptBaocaotonghopchiphivienphidieutrichitiet(); 
 	}
	return 0;
}
int rptBaocaotonghopchiphivienphidieutrichitiet::OnSaverptBaocaotonghopchiphivienphidieutrichitiet(){
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
 		//OnrptBaocaotonghopchiphivienphidieutrichitietListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptBaocaotonghopchiphivienphidieutrichitiet::OnCancelrptBaocaotonghopchiphivienphidieutrichitiet(){
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
int rptBaocaotonghopchiphivienphidieutrichitiet::OnrptBaocaotonghopchiphivienphidieutrichitietListLoadData(){
	return 0;
}
void rptBaocaotonghopchiphivienphidieutrichitiet::PrintListReport(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szWhere1;
	CRecord rs(&pMF->m_db);

	szWhere.Empty();
	szWhere1.Empty();

	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);

	if (!m_szPolicyKey.IsEmpty())
		szWhere1.Format(_T(" WHERE ho_type ='%s' "), m_szPolicyKey);

	szSQL.Format(_T(" SELECT  (select sd_name from sys_dept where sd_id=hfe_deptid) as deptid,hd_docno as docno, ho_type as objecttype, invoiceno,bookno,receiveby,") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	sum(examfee) as examfee, sum(testfee) as testfee,sum(pacsfeexq) as pacsfeexq,") \
		_T("	sum(pacsfeecity) as pacsfeecity, sum(pacsfeeMRI) as pacsMRI, sum(pacsfeeSADT) as pacsfeeSADT, sum(pacsfeeSAMAU) as pacsfeeSAMAU, ") \
		_T("	sum(noisoi) as noisoi, sum(dientim) as dientim, sum(diennao) as diennao, sum(dohohap) as dohohap, sum(luuhuyetnao) as luuhuyetnao, sum(Dotimthai) as dotimthai, ") \
		_T("  	sum(normtechfee) as normtechfee,sum(bedfee) as bedfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee, ") \
		_T("	sum(cost) as cost 	 ") \
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
		_T("   	case when substr(hfe_group, 1, 3)='B21' then hfe_cost else 0 end as pacsfeexq,") \
		_T("   	case when substr(hfe_group, 1, 3)='B22' then hfe_cost else 0 end as pacsfeecity,") \
		_T("   	case when substr(hfe_group, 1, 3)='B23' then hfe_cost else 0 end as pacsfeeMRI,") \
		_T("   	case when substr(hfe_group, 1, 3)='B24' then hfe_cost else 0 end as pacsfeeSADT,") \
		_T("   	case when substr(hfe_group, 1, 3)='B25' then hfe_cost else 0 end as pacsfeeSAMAU,") \
		_T("   	case when substr(hfe_group, 1, 3)='B31' then hfe_cost else 0 end as Noisoi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B33' then hfe_cost else 0 end as Dientim,") \
		_T("   	case when substr(hfe_group, 1, 3)='B34' then hfe_cost else 0 end as Diennao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B35' then hfe_cost else 0 end as DoHohap,") \
		_T("   	case when substr(hfe_group, 1, 3)='B36' then hfe_cost else 0 end as Luuhuyetnao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B37' then hfe_cost else 0 end as Dotimthai,") \
		_T("   	case when substr(hfe_group, 1, 2) in('B4','B5')  then hfe_cost else 0 end as normtechfee,  	") \
		_T("   	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
		_T("   	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T("   	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
		_T("  	hfe_cost as cost 	") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfi_type='P' and hfi_class in('E','I') AND hfe_cost > 0 and hfi_recvdate between '%s' and '%s'  %s") \
		_T("  ) as tbl ON(hfi_docno=hd_docno) %s	") \
		_T("  GROUP BY deptid,objecttype, docno, pname, birthyear, sex,invoiceno,bookno, receiveby ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY deptid,docno"), szFromDate, szToDate, szWhere, szWhere1);


	if(!rpt.Init(_T("Reports/HMS/HF_TONGHOPCHIPHIKHAMCHUABENHVIENPHIDIEUTRICHITIET.RPT")) )
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
	long double grpCost[25];
	long double ttlCost[25];
	double cost = 0;
	for (int i =0; i < 25; i++)
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
			if(grpCost[24] > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i =7; i < 25; i++)
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
		rptDetail->SetValue(_T("D0000"), tmpStr);

		rs.GetValue(_T("testfee"), nAmount);
		grpCost[8]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B1000"), tmpStr);

		rs.GetValue(_T("pacsfeexq"), nAmount);
		grpCost[9]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B2100"), tmpStr);

		rs.GetValue(_T("pacsfeecity"), nAmount);
		grpCost[10]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B2200"), tmpStr);
		
		rs.GetValue(_T("pacsfeeMRI"), nAmount);
		grpCost[11]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B2300"), tmpStr);

		rs.GetValue(_T("pacsfeeSADT"), nAmount);
		grpCost[12]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B2400"), tmpStr);

		rs.GetValue(_T("pacsfeeSAMAU"), nAmount);
		grpCost[13]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B2500"), tmpStr);

		rs.GetValue(_T("Noisoi"), nAmount);
		grpCost[14]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B3100"), tmpStr);

		rs.GetValue(_T("Dientim"), nAmount);
		grpCost[15]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B3300"), tmpStr);

		rs.GetValue(_T("Diennao"), nAmount);
		grpCost[16]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B3400"), tmpStr);

		rs.GetValue(_T("Dohohap"), nAmount);
		grpCost[17]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B3500"), tmpStr);
		
		rs.GetValue(_T("Luuhuyetnao"), nAmount);
		grpCost[18]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B3600"), tmpStr);

		rs.GetValue(_T("Dotimthai"), nAmount);
		grpCost[19]+=nAmount;
		FormatCurrency(nAmount, tmpStr);	
		rptDetail->SetValue(_T("B3700"), tmpStr);

		rs.GetValue(_T("normtechfee"), nAmount);
		grpCost[20]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("B4000"), tmpStr);
		
		rs.GetValue(_T("drugfee"), nAmount);
		grpCost[21]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("A0000"), tmpStr);

		rs.GetValue(_T("bedfee"), nAmount);
		grpCost[22]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("C0000"), tmpStr);

		rs.GetValue(_T("otherfee"), nAmount);
		grpCost[23]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("F0000"), tmpStr);
		
		rs.GetValue(_T("Cost"), nAmount);
		grpCost[24]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr);

		
		rs.MoveNext();
	}
	for (int i =0; i < 25; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[24] > 0){
		CString szField;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =7; i < 25; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[24] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("Tongkhoa"), szAmount);
		for (int i =7; i < 25; i++)
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

void rptBaocaotonghopchiphivienphidieutrichitiet::ExportListReport(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szWhere1,szFromDateToDate;
	CRecord rs(&pMF->m_db);	
		szWhere.Empty();
	szWhere1.Empty();

	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);

	if (!m_szPolicyKey.IsEmpty())
		szWhere1.Format(_T(" WHERE ho_type ='%s' "), m_szPolicyKey);

	szSQL.Format(_T(" SELECT  (select sd_name from sys_dept where sd_id=hfe_deptid) as deptid,hd_docno as docno, ho_type as objecttype, invoiceno,bookno,receiveby,") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	sum(examfee) as examfee, sum(testfee) as testfee,sum(pacsfeexq) as pacsfeexq,") \
		_T("	sum(pacsfeecity) as pacsfeecity, sum(pacsfeeMRI) as pacsMRI, sum(pacsfeeSADT) as pacsfeeSADT, sum(pacsfeeSAMAU) as pacsfeeSAMAU, ") \
		_T("	sum(noisoi) as noisoi, sum(dientim) as dientim, sum(diennao) as diennao, sum(dohohap) as dohohap, sum(luuhuyetnao) as luuhuyetnao, sum(Dotimthai) as dotimthai, ") \
		_T("  	sum(normtechfee) as normtechfee,sum(bedfee) as bedfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee, ") \
		_T("	sum(cost) as cost 	 ") \
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
		_T("   	case when substr(hfe_group, 1, 3)='B21' then hfe_cost else 0 end as pacsfeexq,") \
		_T("   	case when substr(hfe_group, 1, 3)='B22' then hfe_cost else 0 end as pacsfeecity,") \
		_T("   	case when substr(hfe_group, 1, 3)='B23' then hfe_cost else 0 end as pacsfeeMRI,") \
		_T("   	case when substr(hfe_group, 1, 3)='B24' then hfe_cost else 0 end as pacsfeeSADT,") \
		_T("   	case when substr(hfe_group, 1, 3)='B25' then hfe_cost else 0 end as pacsfeeSAMAU,") \
		_T("   	case when substr(hfe_group, 1, 3)='B31' then hfe_cost else 0 end as Noisoi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B33' then hfe_cost else 0 end as Dientim,") \
		_T("   	case when substr(hfe_group, 1, 3)='B34' then hfe_cost else 0 end as Diennao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B35' then hfe_cost else 0 end as DoHohap,") \
		_T("   	case when substr(hfe_group, 1, 3)='B36' then hfe_cost else 0 end as Luuhuyetnao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B37' then hfe_cost else 0 end as Dotimthai,") \
		_T("   	case when substr(hfe_group, 1, 2) in('B4','B5')  then hfe_cost else 0 end as normtechfee,  	") \
		_T("   	case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,") \
		_T("   	case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T("   	case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
		_T("  	hfe_cost as cost 	") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfi_type='P' and hfi_class in('E','I') AND hfe_cost > 0 and hfi_recvdate between '%s' and '%s'  %s") \
		_T("  ) as tbl ON(hfi_docno=hd_docno) %s	") \
		_T("  GROUP BY deptid,objecttype, docno, pname, birthyear, sex,invoiceno,bookno, receiveby ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY deptid,docno"), szFromDate, szToDate, szWhere, szWhere1);

	
	
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

	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,12);
	xls.SetColumnWidth(17,12);
	xls.SetColumnWidth(18,12);
	xls.SetColumnWidth(19,12);
	xls.SetColumnWidth(20,12);

	xls.SetColumnWidth(21,12);
	xls.SetColumnWidth(22,12);
	xls.SetColumnWidth(23,12);
	
	
	

	xls.SetCellMergedColumns(0,3,24);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	TranslateString(_T("\x43HI TI\x1EBET \x43HI PH\xCD \x42\x1EC6NH NH\xC2N TRONG KHO\x41"), tmpStr);
	xls.SetCellText(0, 3, tmpStr,FMT_TEXT,true,18);
	xls.SetCellMergedColumns(0,4,24);
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
	xls.SetCellText(8, nRow, _T("XQ"), FMT_TEXT,true);	
	xls.SetCellText(9, nRow, _T("CITY"), FMT_TEXT,true);
	TranslateString(_T("MRI"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("S\x41 \x110T"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellText(12, nRow, _T("SA MAU"), FMT_TEXT,true);
	xls.SetCellText(13, nRow, _T("NOI SOI"), FMT_TEXT,true);	
	xls.SetCellText(14, nRow, _T("DIEN TIM"), FMT_TEXT,true);


	TranslateString(_T("DIEN NAO"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(16, nRow, _T("DO CNHH"), FMT_TEXT,true);	
	xls.SetCellText(17, nRow, _T("LUU HUYET NAO"), FMT_TEXT,true);
	TranslateString(_T("DO TIM THAI"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("PT-TT"), tmpStr);
	xls.SetCellText(19, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(20, nRow, _T("THU\x1ED0\x43"), FMT_TEXT,true);
	xls.SetCellText(21, nRow, _T("GIUONG"), FMT_TEXT,true);	
	xls.SetCellText(22, nRow, _T("PHI KHAC"), FMT_TEXT,true);
	xls.SetCellText(23, nRow, _T("T\x1ED4NG \x43P"), FMT_TEXT,true);


	BeginWaitCursor();
	//Page Header
	//Report Detail
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double grpCost[25];
	long double ttlCost[25];
	double cost = 0;
	for (int i =0; i < 25; i++)
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
			if(grpCost[23] > 0)
			{
				nRow++;
				xls.MergeCell(nRow,1,nRow,5);
				xls.SetCellText(1,nRow,_T("\x43\x1ED9ng:"),FMT_TEXT,TRUE);
				for (int i =6; i < 24; i++)
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

		rs.GetValue(_T("pacsfeexq"), nAmount);
		grpCost[8]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(8,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsfeecity"), nAmount);
		grpCost[9]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(9,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacsfeeMRI"), nAmount);
		grpCost[10]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(10,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsfeeSADT"), nAmount);
		grpCost[11]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(11,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsfeeSAMAU"), nAmount);
		grpCost[12]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(12,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Noisoi"), nAmount);
		grpCost[13]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(13,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dientim"), nAmount);
		grpCost[14]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(14,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Diennao"), nAmount);
		grpCost[15]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(15,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dohohap"), nAmount);
		grpCost[16]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(16,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("Luuhuyetnao"), nAmount);
		grpCost[17]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(17,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dotimthai"), nAmount);
		grpCost[18]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(18,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("normtechfee"), nAmount);
		grpCost[19]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(19,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("drugfee"), nAmount);
		grpCost[20]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(20,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("bedfee"), nAmount);
		grpCost[21]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(21,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("otherfee"), nAmount);
		grpCost[22]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(22,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("Cost"), nAmount);
		grpCost[23]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(23,nRow,tmpStr,FMT_NUMBER1);

		rs.MoveNext();
	}
	for (int i =0; i < 24; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[23] > 0){
		nRow++;
		xls.MergeCell(nRow,1,nRow,5);
		xls.SetCellText(1,nRow,_T("\x43\x1ED9ng:"),FMT_TEXT,TRUE);
		for (int i =6; i < 23; i++)
		{
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1,TRUE);
		}
	
	}
	if(ttlCost[23] > 0){
		nRow++;
		xls.MergeCell(nRow,1,nRow,5);
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT,TRUE);
		for (int i =6; i < 24; i++)
		{
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1,TRUE);		
		}

	}
	
	xls.Save(_T("Exports\\Tonghopchiphidieutritrongkhoachitiet.xls"));	
	EndWaitCursor();

}
