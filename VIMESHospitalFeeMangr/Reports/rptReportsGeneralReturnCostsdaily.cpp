#include "rptReportsGeneralReturnCostsdaily.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptReportsGeneralReturnCostsdaily *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptReportsGeneralReturnCostsdaily* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptReportsGeneralReturnCostsdaily *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptReportsGeneralReturnCostsdaily *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptReportsGeneralReturnCostsdaily *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptReportsGeneralReturnCostsdaily* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptReportsGeneralReturnCostsdaily *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptReportsGeneralReturnCostsdaily *pVw = (rptReportsGeneralReturnCostsdaily *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptReportsGeneralReturnCostsdaily *pVw = (rptReportsGeneralReturnCostsdaily *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptReportsGeneralReturnCostsdaily *pVw = (rptReportsGeneralReturnCostsdaily *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptReportsGeneralReturnCostsdaily *pVw = (rptReportsGeneralReturnCostsdaily *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptReportsGeneralReturnCostsdaily* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((rptReportsGeneralReturnCostsdaily *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((rptReportsGeneralReturnCostsdaily *)pWnd)->OnObjectAddNew();
}*/
static int _OnAddrptReportsGeneralReturnCostsdailyFnc(CWnd *pWnd){
	 return ((rptReportsGeneralReturnCostsdaily*)pWnd)->OnAddrptReportsGeneralReturnCostsdaily();
} 
static int _OnEditrptReportsGeneralReturnCostsdailyFnc(CWnd *pWnd){
	 return ((rptReportsGeneralReturnCostsdaily*)pWnd)->OnEditrptReportsGeneralReturnCostsdaily();
} 
static int _OnDeleterptReportsGeneralReturnCostsdailyFnc(CWnd *pWnd){
	 return ((rptReportsGeneralReturnCostsdaily*)pWnd)->OnDeleterptReportsGeneralReturnCostsdaily();
} 
static int _OnSaverptReportsGeneralReturnCostsdailyFnc(CWnd *pWnd){
	 return ((rptReportsGeneralReturnCostsdaily*)pWnd)->OnSaverptReportsGeneralReturnCostsdaily();
} 
static int _OnCancelrptReportsGeneralReturnCostsdailyFnc(CWnd *pWnd){
	 return ((rptReportsGeneralReturnCostsdaily*)pWnd)->OnCancelrptReportsGeneralReturnCostsdaily();
} 
rptReportsGeneralReturnCostsdaily::rptReportsGeneralReturnCostsdaily(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle=_T("Detailed list of refund daily");
	SetDefaultValues();
}
rptReportsGeneralReturnCostsdaily::~rptReportsGeneralReturnCostsdaily(){
}
void rptReportsGeneralReturnCostsdaily::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 4, 6, 479, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 245, 30, 345, 55);
	m_wndReportPeriod.Create(this,350, 30, 475, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 345, 85);
	m_wndToDate.Create(this,350, 60, 475, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 240, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 245, 90, 345, 115);
	m_wndObject.Create(this,350, 90, 475, 115); 
	
	m_wndExport.Create(this, _T("&Export"), 315, 125, 395, 150);
	m_wndClose.Create(this, _T("&Close"), 400, 125, 480, 150);
}
void rptReportsGeneralReturnCostsdaily::OnInitializeComponents(){
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
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndReportPeriod.Format(2, 1, 17);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void rptReportsGeneralReturnCostsdaily::OnSetWindowEvents(){
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = pMF->GetSysDate() + _T("07:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	SetMode(VM_EDIT);
}
void rptReportsGeneralReturnCostsdaily::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	/*DDX_Radio(pDX, m_wndTUVaovien.GetDlgCtrlID(), m_nTUVaovien);
	DDX_Radio(pDX, m_wndTURavien.GetDlgCtrlID(), m_nTURavien);
	DDX_Radio(pDX, m_wndSelectAll.GetDlgCtrlID(), m_nSelectAll);*/
}
void rptReportsGeneralReturnCostsdaily::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptReportsGeneralReturnCostsdaily::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptReportsGeneralReturnCostsdaily::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szObjectKey.Empty();
	m_nTUVaovien=1;
	m_nTURavien=1;
	m_nSelectAll=0;

}
int rptReportsGeneralReturnCostsdaily::SetMode(int nMode){
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
/*void rptReportsGeneralReturnCostsdaily::OnYearChange(){
	
} */
/*void rptReportsGeneralReturnCostsdaily::OnYearSetfocus(){
	
} */
/*void rptReportsGeneralReturnCostsdaily::OnYearKillfocus(){
	
} */
int rptReportsGeneralReturnCostsdaily::OnYearCheckValue(){
	return 0;
} 
void rptReportsGeneralReturnCostsdaily::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptReportsGeneralReturnCostsdaily::OnReportPeriodSelendok(){
	
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
/*void rptReportsGeneralReturnCostsdaily::OnReportPeriodSetfocus(){
	
}*/
/*void rptReportsGeneralReturnCostsdaily::OnReportPeriodKillfocus(){
	
}*/
long rptReportsGeneralReturnCostsdaily::OnReportPeriodLoadData(){
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
/*void rptReportsGeneralReturnCostsdaily::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptReportsGeneralReturnCostsdaily::OnFromDateChange(){
	
} */
/*void rptReportsGeneralReturnCostsdaily::OnFromDateSetfocus(){
	
} */
/*void rptReportsGeneralReturnCostsdaily::OnFromDateKillfocus(){
	
} */
int rptReportsGeneralReturnCostsdaily::OnFromDateCheckValue(){
	return 0;
} 
/*void rptReportsGeneralReturnCostsdaily::OnToDateChange(){
	
} */
/*void rptReportsGeneralReturnCostsdaily::OnToDateSetfocus(){
	
} */
/*void rptReportsGeneralReturnCostsdaily::OnToDateKillfocus(){
	
} */
int rptReportsGeneralReturnCostsdaily::OnToDateCheckValue(){
	return 0;
} 
void rptReportsGeneralReturnCostsdaily::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptReportsGeneralReturnCostsdaily::OnClerkSelendok(){
	 
}
/*void rptReportsGeneralReturnCostsdaily::OnClerkSetfocus(){
	
}*/
/*void rptReportsGeneralReturnCostsdaily::OnClerkKillfocus(){
	
}*/
long rptReportsGeneralReturnCostsdaily::OnClerkLoadData(){
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
/*void rptReportsGeneralReturnCostsdaily::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptReportsGeneralReturnCostsdaily::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	UpdateData(true);
	OnExportToExcell(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);

} 
void rptReportsGeneralReturnCostsdaily::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = false;		
	UpdateData(true);
	OnExportToExcell(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);
} 
void rptReportsGeneralReturnCostsdaily::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	UpdateData(true);
	OnExportToExcell(m_szFromDate, m_szToDate, m_szClerkKey);
	UpdateData(false);
		
} 
void rptReportsGeneralReturnCostsdaily::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void rptReportsGeneralReturnCostsdaily::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptReportsGeneralReturnCostsdaily::OnObjectSelendok(){
	 
}
/*void rptReportsGeneralReturnCostsdaily::OnObjectSetfocus(){
	
}*/
/*void rptReportsGeneralReturnCostsdaily::OnObjectKillfocus(){
	
}*/
long rptReportsGeneralReturnCostsdaily::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" where ho_id='%s'"), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select ho_type as id, ho_desc as name from hms_object %s order by cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptReportsGeneralReturnCostsdaily::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int rptReportsGeneralReturnCostsdaily::OnAddrptReportsGeneralReturnCostsdaily(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptReportsGeneralReturnCostsdaily::OnEditrptReportsGeneralReturnCostsdaily(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptReportsGeneralReturnCostsdaily::OnDeleterptReportsGeneralReturnCostsdaily(){
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
 		OnCancelrptReportsGeneralReturnCostsdaily(); 
 	}
	return 0;
}
int rptReportsGeneralReturnCostsdaily::OnSaverptReportsGeneralReturnCostsdaily(){
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
 		//OnrptReportsGeneralReturnCostsdailyListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptReportsGeneralReturnCostsdaily::OnCancelrptReportsGeneralReturnCostsdaily(){
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
int rptReportsGeneralReturnCostsdaily::OnrptReportsGeneralReturnCostsdailyListLoadData(){
	return 0;
}
void rptReportsGeneralReturnCostsdaily::PrintDepositReceiptPatientListReport(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);

	UpdateData(true);
	szWhere.Empty();
	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);
	
	
	if (m_nSelectAll !=0)
	{
		if (m_nTURavien == 0)
				szWhere.AppendFormat(_T(" AND hfi_category = 'D' "));
		else
			if (m_nTUVaovien == 0)
				szWhere.AppendFormat(_T(" AND hfi_category <> 'D' "));
	}	 

	if (!m_szObjectKey.IsEmpty())
		szWhere.Format(_T(" AND ho_type ='%s' "), m_szObjectKey);

	szSQL.Format(_T(" SELECT hfi_category as category, hfi_receiver as receiveby, hfi_recvdate as recvdate,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_docno as docno,") \
				_T("	ho_desc as ObjectName,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	(select sd_name from sys_dept where sd_id=hfi_deptid) as department,") \
				_T(" 	hfi_patpaid as amount") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_fee_invoice ON(hfi_docno=hd_docno)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object) ") \
				_T(" WHERE hfi_type ='A' and hfi_patpaid > 0 ") \
				_T(" 	and hfi_recvdate between timestamp '%s' and  timestamp '%s' %s") \
				_T(" ORDER BY recvdate, recvno, pname"), szFromDate, szToDate, szWhere);


	if(!rpt.Init(_T("Reports/HMS/HF_ADVANCEPAYMENTPATIENTLIST.RPT")) )
		return ;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	
	//Page Header
	//Report Detail
	CReportSection* rptDetail;
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double nSumAmount = 0;
	double nAmount = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("recvdate"), tmpStr);
		rptDetail->SetValue(_T("1"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		rs.GetValue(_T("recvno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("department"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("amount"), nAmount);
		nSumAmount += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("receiveby"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("category"), tmpStr);
		if(tmpStr == _T("D"))
			rptDetail->SetValue(_T("10"), _T("RV"));
		else
			rptDetail->SetValue(_T("10"), _T("VV"));

		rs.MoveNext();
	}
	if(nSumAmount > 0){
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(nSumAmount, tmpStr);
		rptDetail->SetValue(_T("SumAmount"), tmpStr);
	}
	//Page Footer
	//Report Footer
	

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();

}
void rptReportsGeneralReturnCostsdaily::OnExportToExcell(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);

	
	szWhere.Empty();
	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);	
	
	if (!m_szObjectKey.IsEmpty())
		szWhere.Format(_T(" AND ho_type ='%s' "), m_szObjectKey);

	szSQL.Format(_T(" SELECT hfi_docno as docno,") \
				_T("	ho_desc as ObjectName,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	(select sd_name from sys_dept where sd_id=hfi_deptid) as department,") \
				_T(" 	case when hfi_type ='R' then hfi_patpaid else 0 end as Refund, 	") \
				_T(" 	case when hfi_type ='R' then hfi_recvdate else null end as RefundDate,") \
				_T(" 	case when hfi_type ='R' then hfi_receiver else null end as RefundUser,") \
				_T(" 	case when hfi_type ='D' and hfi_category ='A' then hfi_patpaid else 0 end as Discount, 	") \
				_T(" 	case when hfi_type ='D' and hfi_category ='A' then hfi_recvdate else null end as DiscountDate, 	") \
				_T(" 	case when hfi_type ='D' and hfi_category ='A' then hfi_receiver else null end as DiscountUser 	") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_fee_invoice ON(hfi_docno=hd_docno)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object) ") \
				_T(" WHERE hfi_type in('R','D') and hfi_patpaid > 0 ") \
				_T(" 	and hfi_recvdate between timestamp '%s' and  timestamp '%s' %s") \
				_T(" ORDER BY docno,pname,department,hfi_recvdate"), szFromDate, szToDate, szWhere);


	CExcel xls;	
	xls.CreateSheet(1);
	
	xls.SetColumnWidth(0,10);
	xls.SetColumnWidth(1,10);
	xls.SetColumnWidth(2,25);
	xls.SetColumnWidth(3,8);
	xls.SetColumnWidth(4,8);

	xls.SetColumnWidth(5,15);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,20);
	xls.SetColumnWidth(8,15);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,20);
		
	xls.SetColumnWidth(11,15);

	
	xls.SetRowHeight(6,30);
	xls.SetRowHeight(7,30);


	xls.SetCellMergedColumns(0,3,22);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N HO\xC0N \x1EE8NG-MI\x1EC4N GI\x1EA2M"), FMT_TEXT,true,10,0);
	xls.SetCellMergedColumns(0,3,22);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111i\x1EBFn ng\xE0y %s"), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,10,0);
	

	int nRow = 6;
	xls.SetCellText(0, nRow, _T("STT"),FMT_TEXT,true,10,0);	
	xls.SetCellText(1, nRow, _T("S\x1ED1 h\x1ED3 s\x1A1"),FMT_TEXT,true,10,0);
	xls.SetCellText(2, nRow, _T("H\x1ECD v\xE0 ti\xEAn"),FMT_TEXT,true,10,0);
	xls.SetCellText(3, nRow, _T("Tu\x1ED5i"),FMT_TEXT,true,10,0);
	xls.SetCellText(4, nRow, _T("Gi\x1EDBi"),FMT_TEXT,true,10,0);

	xls.SetCellText(11, nRow, _T("Object"),FMT_TEXT,true,10,0);	
	
	xls.SetCellMergedColumns(5,nRow,3);	
	TranslateString(_T("HO\xC0N \x1EE8NG"), tmpStr); // Hoan ung
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(8,nRow,3);
	TranslateString(_T("MI\x1EC4N GI\x1EA2M"), tmpStr); // Mien giam
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	
	
	xls.SetCellMergedRows(0,nRow,2);
	xls.SetCellMergedRows(1,nRow,2);
	xls.SetCellMergedRows(2,nRow,2);	
	xls.SetCellMergedRows(3,nRow,2);
	xls.SetCellMergedRows(4,nRow,2);
	xls.SetCellMergedRows(11,nRow,2);

	nRow = 7;
	xls.SetCellText(5, nRow, _T("Ng\xE0y gi\x1EDD"),FMT_TEXT,true,10,0);
	xls.SetCellText(6, nRow, _T("S\x1ED1 ti\x1EC1n"),FMT_TEXT,true,10,0);
	xls.SetCellText(7, nRow, _T("Ng\x1B0\x1EDDi thu"),FMT_TEXT,true,10,0);

	xls.SetCellText(8, nRow, _T("Ng\xE0y gi\x1EDD"),FMT_TEXT,true,10,0);
	xls.SetCellText(9, nRow, _T("S\x1ED1 ti\x1EC1n"),FMT_TEXT,true,10,0);
	xls.SetCellText(10, nRow, _T("Ng\x1B0\x1EDDi thu"),FMT_TEXT,true,10,0);	

	
	
	
	nRow++;
	for(int i =0; i<12;i++)
	{
		tmpStr.Format(_T("%d"),i+1);
		xls.SetCellText(i, nRow, tmpStr,FMT_INTEGER,TRUE,12);
	}
		
	
	//Page Header
	//Report Detail
	
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double C[5], nTotalDept=0;
	double nAmount = 0;
	CString szNewLine, szOldLine;
	C[0]=C[1]=C[2]=C[3]=C[4]=C[5]=0;

	int nIndex=0;
	while(!rs.IsEOF())
	{
		//rs.GetValue(_T("Docno"), szNewLine);
		//if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		//{
		//	if((C[0]+C[1]+C[2]) >0 && nIndex > 1)
		//	{
		//		nRow++;
		//		//xls.SetCellMergedColumns(1,nRow,4);
		//		xls.SetCellText(1,nRow,_T("\x43\x1ED9ng:"),FMT_TEXT,TRUE);
		//		tmpStr.Format(_T("%.2f"), C[0]);
		//		xls.SetCellText(6,nRow,tmpStr,FMT_NUMBER1,TRUE);
		//		
		//		tmpStr.Format(_T("%.2f"), C[1]);
		//		xls.SetCellText(9,nRow,tmpStr,FMT_NUMBER1,TRUE);
		//		
		//		C1[0] +=C[0];
		//		C1[1] +=C[1];
		//		C1[2] +=C[2];
		//		
		//		C[0]=C[1]=C[2]=0;
		//	}
		//
		//	szOldLine = szNewLine;
		//	nIndex=0;
		//}

		nRow++;
		nIndex++;
		tmpStr.Format(_T("%d"),nIndex);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		
		
		rs.GetValue(_T("RefundDate"), tmpStr);	
		if (!tmpStr.IsEmpty()) xls.SetCellText(5, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm), FMT_TEXT);
		rs.GetValue(_T("Refund"), nAmount);
		C[0] += nAmount;
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("RefundUser"), tmpStr);
		xls.SetCellText(7, nRow, pMF->GetDoctorName(tmpStr), FMT_TEXT);

		rs.GetValue(_T("DiscountDate"), tmpStr);		
		if (!tmpStr.IsEmpty()) xls.SetCellText(8, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm), FMT_TEXT);
		rs.GetValue(_T("Discount"), nAmount);
		C[1] += nAmount;
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("DiscountdUser"), tmpStr);
		xls.SetCellText(10, nRow, pMF->GetDoctorName(tmpStr), FMT_TEXT);

		rs.GetValue(_T("ObjectName"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);
		rs.MoveNext();
	}

	if((C[0]+C[1]) >0)
	{
		nRow++;
		xls.SetCellMergedColumns(1,nRow,4);
		xls.SetCellText(1,nRow,_T("T\x1ED5ng \x63\x1ED9ng:"),FMT_TEXT,TRUE);
		tmpStr.Format(_T("%.2f"), C[0]);
		xls.SetCellText(6,nRow,tmpStr,FMT_NUMBER1,TRUE);
		
		tmpStr.Format(_T("%.2f"), C[1]);
		xls.SetCellText(9,nRow,tmpStr,FMT_NUMBER1,TRUE);
		
	}
	xls.Save(_T("Exports\\Bao cao chi tiet chi tra benh nhan.xls"));

}
