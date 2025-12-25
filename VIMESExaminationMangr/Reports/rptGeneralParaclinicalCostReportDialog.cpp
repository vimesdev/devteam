#include "rptGeneralParaclinicalCostReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralParaclinicalCostReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralParaclinicalCostReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralParaclinicalCostReportDialog *pVw = (rptGeneralParaclinicalCostReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralParaclinicalCostReportDialog *pVw = (rptGeneralParaclinicalCostReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralParaclinicalCostReportDialog *pVw = (rptGeneralParaclinicalCostReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptGeneralParaclinicalCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralParaclinicalCostReportDialog*)pWnd)->OnAddrptGeneralParaclinicalCostReportDialog();
} 
static int _OnEditrptGeneralParaclinicalCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralParaclinicalCostReportDialog*)pWnd)->OnEditrptGeneralParaclinicalCostReportDialog();
} 
static int _OnDeleterptGeneralParaclinicalCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralParaclinicalCostReportDialog*)pWnd)->OnDeleterptGeneralParaclinicalCostReportDialog();
} 
static int _OnSaverptGeneralParaclinicalCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralParaclinicalCostReportDialog*)pWnd)->OnSaverptGeneralParaclinicalCostReportDialog();
} 
static int _OnCancelrptGeneralParaclinicalCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralParaclinicalCostReportDialog*)pWnd)->OnCancelrptGeneralParaclinicalCostReportDialog();
} 
rptGeneralParaclinicalCostReportDialog::rptGeneralParaclinicalCostReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_bPreview = true;
}
rptGeneralParaclinicalCostReportDialog::~rptGeneralParaclinicalCostReportDialog(){
}
void rptGeneralParaclinicalCostReportDialog::OnCreateComponents(){
	m_wndReportConditio.Create(this, _T("Report Condition"), 5, 5, 360, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 180, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 185, 30, 265, 55);
	m_wndReportPeriod.Create(this,270, 30, 355, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 180, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 60, 265, 85);
	m_wndToDate.Create(this,270, 60, 355, 85); 
	m_wndPrint.Create(this, _T("&Print"), 125, 95, 200, 120);
	m_wndExport.Create(this, _T("&Export"), 205, 95, 280, 120);
	m_wndClose.Create(this, _T("&Close"), 285, 95, 360, 120);

}
void rptGeneralParaclinicalCostReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
//	m_wndYear.SetCheckValue(true);
//	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void rptGeneralParaclinicalCostReportDialog::OnSetWindowEvents(){
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
//	m_szReportPeriodKey = _T("");
	SetMode(VM_EDIT);

}
void rptGeneralParaclinicalCostReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptGeneralParaclinicalCostReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptGeneralParaclinicalCostReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralParaclinicalCostReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptGeneralParaclinicalCostReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
/*void rptGeneralParaclinicalCostReportDialog::OnYearChange(){
	
} */
/*void rptGeneralParaclinicalCostReportDialog::OnYearSetfocus(){
	
} */
/*void rptGeneralParaclinicalCostReportDialog::OnYearKillfocus(){
	
} */
int rptGeneralParaclinicalCostReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptGeneralParaclinicalCostReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralParaclinicalCostReportDialog::OnReportPeriodSelendok(){
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
/*void rptGeneralParaclinicalCostReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralParaclinicalCostReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralParaclinicalCostReportDialog::OnReportPeriodLoadData(){
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
/*void rptGeneralParaclinicalCostReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralParaclinicalCostReportDialog::OnFromDateChange(){
	
} */
/*void rptGeneralParaclinicalCostReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptGeneralParaclinicalCostReportDialog::OnFromDateKillfocus(){
	
} */
int rptGeneralParaclinicalCostReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralParaclinicalCostReportDialog::OnToDateChange(){
	
} */
/*void rptGeneralParaclinicalCostReportDialog::OnToDateSetfocus(){
	
} */
/*void rptGeneralParaclinicalCostReportDialog::OnToDateKillfocus(){
	
} */
int rptGeneralParaclinicalCostReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralParaclinicalCostReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szFromDate, szToDate;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere, szAmount;
	CString szDate, szSysDate;	
	CReport rpt; 
	szSysDate = pMF->GetSysDate(); 	
	szSQL.Format(_T(" SELECT 	deptid,") \
				_T(" 	roomid,") \
				_T(" 	hrl_name as roomname,") \
				_T(" sum(CountB11) as CountB11,") \
				_T(" sum(CountB12) as CountB12,") \
				_T(" sum(CountB13) as CountB13,") \
				_T(" sum(CountB14) as CountB14,") \
				_T(" sum(CountB15) as CountB15,") \
				_T(" sum(CountB16) as CountB16,") \
				_T(" sum(CountB17) as CountB17,") \
				_T(" sum(CountB18) as CountB18,") \
				_T(" sum(CountB19) as CountB19,") \
				_T(" sum(CountB1A) as CountB1A,") \
				_T(" sum(CountB1B) as CountB1B,") \
				_T(" sum(CountB1C) as CountB1C,") \
				_T(" sum(CountB1D) as CountB1D,") \
				_T(" sum(CountB1E) as CountB1E,") \
				_T(" sum(CountB1F) as CountB1F,") \
				_T(" sum(CountB21) as CountB21,") \
				_T(" sum(CountB22) as CountB22,") \
				_T(" sum(CountB23) as CountB23,") \
				_T(" sum(CountB24) as CountB24,") \
				_T(" sum(CountB25) as CountB25,") \
				_T(" sum(CountB26) as CountB26,") \
				_T(" sum(CountB27) as CountB27,") \
				_T(" sum(CountB28) as CountB28,") \
				_T(" sum(CountB29) as CountB29,") \
				_T(" sum(CountB31) as CountB31,") \
				_T(" sum(CountB32) as CountB32,") \
				_T(" sum(CountB33) as CountB33,") \
				_T(" sum(CountB34) as CountB34,") \
				_T(" sum(CountB35) as CountB35,") \
				_T(" sum(CountB36) as CountB36,") \
				_T(" sum(CountB37) as CountB37,") \
				_T(" sum(CountB38) as CountB38,") \
				_T(" sum(CountB39) as CountB39,") \
				_T(" sum(B11) as B11,") \
				_T(" sum(B12) as B12,") \
				_T(" sum(B13) as B13,") \
				_T(" sum(B14) as B14,") \
				_T(" sum(B15) as B15,") \
				_T(" sum(B16) as B16,") \
				_T(" sum(B17) as B17,") \
				_T(" sum(B18) as B18,") \
				_T(" sum(B19) as B19,") \
				_T(" sum(B1A) as B1A,") \
				_T(" sum(B1B) as B1B,") \
				_T(" sum(B1C) as B1C,") \
				_T(" sum(B1D) as B1D,") \
				_T(" sum(B1E) as B1E,") \
				_T(" sum(B1F) as B1F,") \
				_T(" sum(B21) as B21,") \
				_T(" sum(B22) as B22,") \
				_T(" sum(B23) as B23,") \
				_T(" sum(B24) as B24,") \
				_T(" sum(B25) as B25,") \
				_T(" sum(B26) as B26,") \
				_T(" sum(B27) as B27,") \
				_T(" sum(B28) as B28,") \
				_T(" sum(B29) as B29,") \
				_T(" sum(B31) as B31,") \
				_T(" sum(B32) as B32,") \
				_T(" sum(B33) as B33,") \
				_T(" sum(B34) as B34,") \
				_T(" sum(B35) as B35,") \
				_T(" sum(B36) as B36,") \
				_T(" sum(B37) as B37,") \
				_T(" sum(B38) as B38,") \
				_T(" sum(B39) as B39,") \
				_T(" sum(TotalCost) as TotalCost,") \
				_T(" sum(TotalPayment) as TotalPayment") \
				_T(" FROM") \
				_T(" ( ") \
				_T("    SELECT deptid, roomid,") \
				_T(" 	case when groupid= 'B11' then 1 else 0 end as CountB11,") \
				_T(" 	case when groupid= 'B12' then 1 else 0 end as CountB12,") \
				_T(" 	case when groupid= 'B13' then 1 else 0 end as CountB13,") \
				_T(" 	case when groupid= 'B14' then 1 else 0 end as CountB14,") \
				_T(" 	case when groupid= 'B15' then 1 else 0 end as CountB15,") \
				_T(" 	case when groupid= 'B16' then 1 else 0 end as CountB16,") \
				_T(" 	case when groupid= 'B17' then 1 else 0 end as CountB17,") \
				_T(" 	case when groupid= 'B18' then 1 else 0 end as CountB18,") \
				_T(" 	case when groupid= 'B19' then 1 else 0 end as CountB19,") \
				_T(" 	case when groupid= 'B1A' then 1 else 0 end as CountB1A,") \
				_T(" 	case when groupid= 'B1B' then 1 else 0 end as CountB1B,") \
				_T(" 	case when groupid= 'B1C' then 1 else 0 end as CountB1C,") \
				_T(" 	case when groupid= 'B1D' then 1 else 0 end as CountB1D,") \
				_T(" 	case when groupid= 'B1E' then 1 else 0 end as CountB1E,") \
				_T(" 	case when groupid= 'B1F' then 1 else 0 end as CountB1F,") \
				_T(" 	case when groupid= 'B21' then 1 else 0 end as CountB21,") \
				_T(" 	case when groupid= 'B22' then 1 else 0 end as CountB22,") \
				_T(" 	case when groupid= 'B23' then 1 else 0 end as CountB23,") \
				_T(" 	case when groupid= 'B24' then 1 else 0 end as CountB24,") \
				_T(" 	case when groupid= 'B25' then 1 else 0 end as CountB25,") \
				_T(" 	case when groupid= 'B26' then 1 else 0 end as CountB26,") \
				_T(" 	case when groupid= 'B27' then 1 else 0 end as CountB27,") \
				_T(" 	case when groupid= 'B28' then 1 else 0 end as CountB28,") \
				_T(" 	case when groupid= 'B29' then 1 else 0 end as CountB29,") \
				_T(" 	case when groupid= 'B31' then 1 else 0 end as CountB31,") \
				_T(" 	case when groupid= 'B32' then 1 else 0 end as CountB32,") \
				_T(" 	case when groupid= 'B33' then 1 else 0 end as CountB33,") \
				_T(" 	case when groupid= 'B34' then 1 else 0 end as CountB34,") \
				_T(" 	case when groupid= 'B35' then 1 else 0 end as CountB35,") \
				_T(" 	case when groupid= 'B36' then 1 else 0 end as CountB36,") \
				_T(" 	case when groupid= 'B37' then 1 else 0 end as CountB37,") \
				_T(" 	case when groupid= 'B38' then 1 else 0 end as CountB38,") \
				_T(" 	case when groupid= 'B39' then 1 else 0 end as CountB39,") \
				_T(" 	sum(B11) as B11,") \
				_T(" 	sum(B12) as B12,") \
				_T(" 	sum(B13) as B13,") \
				_T(" 	sum(B14) as B14,") \
				_T(" 	sum(B15) as B15,") \
				_T(" 	sum(B16) as B16,") \
				_T(" 	sum(B17) as B17,") \
				_T(" 	sum(B18) as B18,") \
				_T(" 	sum(B19) as B19,") \
				_T(" 	sum(B1A) as B1A,") \
				_T(" 	sum(B1B) as B1B,") \
				_T(" 	sum(B1C) as B1C,") \
				_T(" 	sum(B1D) as B1D,") \
				_T(" 	sum(B1E) as B1E,") \
				_T(" 	sum(B1F) as B1F,") \
				_T(" 	sum(B21) as B21,") \
				_T(" 	sum(B22) as B22,") \
				_T(" 	sum(B23) as B23,") \
				_T(" 	sum(B24) as B24,") \
				_T(" 	sum(B25) as B25,") \
				_T(" 	sum(B26) as B26,") \
				_T(" 	sum(B27) as B27,") \
				_T(" 	sum(B28) as B28,") \
				_T(" 	sum(B29) as B29,") \
				_T(" 	sum(B31) as B31,") \
				_T(" 	sum(B32) as B32,") \
				_T(" 	sum(B33) as B33,") \
				_T(" 	sum(B34) as B34,") \
				_T(" 	sum(B35) as B35,") \
				_T(" 	sum(B36) as B36,") \
				_T(" 	sum(B37) as B37,") \
				_T(" 	sum(B38) as B38,") \
				_T(" 	sum(B39) as B39,") \
				_T(" 	sum(TotalCost) as TotalCost,") \
				_T(" 	sum(TotalPayment) as TotalPayment") \
				_T(" FROM ") \
				_T(" (") \
				_T(" 	SELECT substr(hfe_group, 1, 3) as groupid,") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_roomid as roomid,") \
				_T(" 	hfe_docno as docno,") \
				_T(" 	hfe_idx as orderid,") \
				_T(" 	case when substr(hfe_group,1,2) IN('B1','B2','B3') then sum(hfe_cost) else 0 end as TotalCost,") \
				_T(" 	case when substr(hfe_group,1,2) IN('B1','B2','B3') then sum(hfe_patpaid+hfe_difpaid) else 0 end as TotalPayment,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B11' then sum(hfe_cost) else 0 end as B11,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B12' then sum(hfe_cost) else 0 end as B12,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B13' then sum(hfe_cost) else 0 end as B13,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B14' then sum(hfe_cost) else 0 end as B14,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B15' then sum(hfe_cost) else 0 end as B15,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B16' then sum(hfe_cost) else 0 end as B16,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B17' then sum(hfe_cost) else 0 end as B17,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B18' then sum(hfe_cost) else 0 end as B18,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B19' then sum(hfe_cost) else 0 end as B19,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B1A' then sum(hfe_cost) else 0 end as B1A,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B1B' then sum(hfe_cost) else 0 end as B1B,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B1C' then sum(hfe_cost) else 0 end as B1C,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B1D' then sum(hfe_cost) else 0 end as B1D,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B1E' then sum(hfe_cost) else 0 end as B1E,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B1F' then sum(hfe_cost) else 0 end as B1F,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B21' then sum(hfe_cost) else 0 end as B21,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B22' then sum(hfe_cost) else 0 end as B22,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B23' then sum(hfe_cost) else 0 end as B23,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B24' then sum(hfe_cost) else 0 end as B24,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B25' then sum(hfe_cost) else 0 end as B25,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B26' then sum(hfe_cost) else 0 end as B26,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B27' then sum(hfe_cost) else 0 end as B27,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B28' then sum(hfe_cost) else 0 end as B28,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B29' then sum(hfe_cost) else 0 end as B29,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B31' then sum(hfe_cost) else 0 end as B31,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B32' then sum(hfe_cost) else 0 end as B32,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B33' then sum(hfe_cost) else 0 end as B33,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B34' then sum(hfe_cost) else 0 end as B34,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B35' then sum(hfe_cost) else 0 end as B35,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B36' then sum(hfe_cost) else 0 end as B36,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B37' then sum(hfe_cost) else 0 end as B37,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B38' then sum(hfe_cost) else 0 end as B38,") \
				_T(" 	case when substr(hfe_group,1,3) = 'B39' then sum(hfe_cost) else 0 end as B39") \
				_T(" FROM hms_fee_invoice") \
				_T(" LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfi_invoiceno=hfe_invoiceno)") \
				_T(" WHERE 	hfe_deptid='%s' ") \
				_T(" 	AND hfi_type='P' ") \
				_T(" 	AND hfi_cost > 0") \
				_T(" 	AND date(hfi_recvdate) BETWEEN date('%s') and date('%s')") \
				_T(" GROUP BY deptid, roomid, hfe_group, docno, orderid") \
				_T(" ) as tbl") \
				_T(" GROUP BY deptid, roomid, groupid, docno, orderid") \
				_T(" ) as tbl2") \
				_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=deptid AND hrl_id=roomid)") \
				_T(" GROUP BY deptid, roomid, roomname") \
				_T(" ORDER BY deptid, roomid"),pMF->m_szDept, m_szFromDate, m_szToDate); 
	_fmsg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);
	BeginWaitCursor();
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,7);
	xls.SetColumnWidth(1,25);
	xls.SetColumnWidth(2,7);
	xls.SetColumnWidth(3,12);
	xls.SetColumnWidth(4,7);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,7);
	xls.SetColumnWidth(7,12);
	xls.SetColumnWidth(8,7);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,7);
	xls.SetColumnWidth(11,12);
	xls.SetColumnWidth(12,7);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,7);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,7);
	xls.SetColumnWidth(17,12);
	xls.SetColumnWidth(18,7);
	xls.SetColumnWidth(19,12);
	xls.SetCellMergedColumns(0,0,2);
	xls.SetCellMergedColumns(0,1,2);

//	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
//	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,3,20);	
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O \x43\x1EACN L\xC2M S\xC0NG TH\x45O PH\xD2NG KH\xC1M"),FMT_CENTER,true,16,0);
	xls.SetCellMergedColumns(0,4,20);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0,4, tmpStr,FMT_CENTER,true,12,0);
	int nRow = 6;
	xls.SetCellMergedRows(0,5,2);
	xls.SetCellMergedRows(1,5,2);
	xls.SetCellText(0, nRow-1, _T("STT"), FMT_CENTER,true, 12);
	
	TranslateString(_T("Ph\xF2ng kh\xE1m"), tmpStr);
	xls.SetCellText(1, nRow-1, tmpStr, FMT_CENTER,true, 12);
	
	xls.SetCellMergedColumns(2,5,2);
	xls.SetCellText(2,5,_T("Huy\x1EBFt h\x1ECD\x63"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_CENTER,true);
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_CENTER,true);	

	xls.SetCellMergedColumns(4,5,2);
	xls.SetCellText(4,5,_T("SH m\xE0u"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_CENTER,true);
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_CENTER,true);

	
	xls.SetCellMergedColumns(6,5,2);
	xls.SetCellText(6,5,_T("N\x1B0\x1EDB\x63 ti\x1EC3u"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_CENTER,true);
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_CENTER,true);	

	xls.SetCellMergedColumns(8,5,2);
	xls.SetCellText(8,5,_T("XN kh\xE1\x63"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_CENTER,true);

	xls.SetCellMergedColumns(10,5,2);
	xls.SetCellText(10,5,_T("X quang"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_CENTER,true);

	xls.SetCellMergedColumns(12,5,2);
	xls.SetCellText(12,5,_T("SA \x111\x65n tr\x1EAFng"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_CENTER,true);

	xls.SetCellMergedColumns(14,5,2);
	xls.SetCellText(14,5,_T("XA M\xE0u"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_CENTER,true);

	xls.SetCellMergedColumns(16,5,2);
	xls.SetCellText(16,5,_T("N\x1ED9i soi"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(17, nRow, tmpStr, FMT_CENTER,true);

	xls.SetCellMergedColumns(18,5,2);
	xls.SetCellText(18,5,_T("\x110i\x1EC7n tim"),FMT_CENTER,true, 12);
	TranslateString(_T("L\x1EA7n"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Ti\x1EC1n"), tmpStr);
	xls.SetCellText(19, nRow, tmpStr, FMT_CENTER,true);
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	int nTotal[19];
	long double nTong;
	nTong = 0;
	for (int i = 2;i<=19;i++)
	{
		nTotal[i]=0;
	}	
	while(!rs.IsEOF())
	{
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("CountB11"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B11"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CountB12"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B12"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CountB13"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B13"), tmpStr);		
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CountB19"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B19"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);


		rs.GetValue(_T("CountB21"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B21"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CountB32"), tmpStr);
		nTotal[12] += ToInt(tmpStr);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B32"), tmpStr);
		nTotal[13] += ToInt(tmpStr);
		xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CountB35"), tmpStr);
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(14, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B35"), tmpStr);
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CountB31"), tmpStr);
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(16, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B31"), tmpStr);
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CountB33"), tmpStr);
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(18, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("B33"), tmpStr);
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(19, nRow, tmpStr, FMT_NUMBER1);

		rs.MoveNext();
	}
	nRow++;
	TranslateString(_T("T\x1ED5ng l\x1EA7n \ ti\x1EC1n t\x1EEBng m\x1EE5\x63"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_CENTER, true, 12);
	for (int i =2; i <= 19; i++)
	{		
		tmpStr.Format(_T("%ld"),nTotal[i] );

		xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true, 12);
		 if(i%2!=0)
		 {
			 nTong += nTotal[i];
		 }
	}
	nRow++;
	xls.SetCellMergedColumns(2,nRow,18);
	tmpStr.Format(_T("%.2f"), nTong);
	xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1, true,12);
	xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"),FMT_CENTER,true,12);
	xls.Save(_T("Exports\\Bao cao can lam sang theo phong kham.xls"));
	EndWaitCursor();
	

} 
void rptGeneralParaclinicalCostReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	PrintGeneralParaclinicalCostReport(m_szFromDate, m_szToDate);
} 
void rptGeneralParaclinicalCostReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptGeneralParaclinicalCostReportDialog::OnAddrptGeneralParaclinicalCostReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralParaclinicalCostReportDialog::OnEditrptGeneralParaclinicalCostReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralParaclinicalCostReportDialog::OnDeleterptGeneralParaclinicalCostReportDialog(){
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
 		OnCancelrptGeneralParaclinicalCostReportDialog(); 
 	}
	return 0;
}
int rptGeneralParaclinicalCostReportDialog::OnSaverptGeneralParaclinicalCostReportDialog(){
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
 		//OnrptGeneralParaclinicalCostReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralParaclinicalCostReportDialog::OnCancelrptGeneralParaclinicalCostReportDialog(){
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
int rptGeneralParaclinicalCostReportDialog::OnrptGeneralParaclinicalCostReportDialogListLoadData(){
	return 0;
}
void rptGeneralParaclinicalCostReportDialog::PrintGeneralParaclinicalCostReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, tmpStr2, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CReport rpt; 
	szSQL.Format(_T(" SELECT 	deptid,") \
		_T(" 	roomid,") \
		_T(" 	hrl_name as roomname,") \
		_T(" sum(CountB11) as CountB11,") \
		_T(" sum(CountB12) as CountB12,") \
		_T(" sum(CountB13) as CountB13,") \
		_T(" sum(CountB14) as CountB14,") \
		_T(" sum(CountB15) as CountB15,") \
		_T(" sum(CountB16) as CountB16,") \
		_T(" sum(CountB17) as CountB17,") \
		_T(" sum(CountB18) as CountB18,") \
		_T(" sum(CountB19) as CountB19,") \
		_T(" sum(CountB1A) as CountB1A,") \
		_T(" sum(CountB1B) as CountB1B,") \
		_T(" sum(CountB1C) as CountB1C,") \
		_T(" sum(CountB1D) as CountB1D,") \
		_T(" sum(CountB1E) as CountB1E,") \
		_T(" sum(CountB1F) as CountB1F,") \
		_T(" sum(CountB21) as CountB21,") \
		_T(" sum(CountB22) as CountB22,") \
		_T(" sum(CountB23) as CountB23,") \
		_T(" sum(CountB24) as CountB24,") \
		_T(" sum(CountB25) as CountB25,") \
		_T(" sum(CountB26) as CountB26,") \
		_T(" sum(CountB27) as CountB27,") \
		_T(" sum(CountB28) as CountB28,") \
		_T(" sum(CountB29) as CountB29,") \
		_T(" sum(CountB31) as CountB31,") \
		_T(" sum(CountB32) as CountB32,") \
		_T(" sum(CountB33) as CountB33,") \
		_T(" sum(CountB34) as CountB34,") \
		_T(" sum(CountB35) as CountB35,") \
		_T(" sum(CountB36) as CountB36,") \
		_T(" sum(CountB37) as CountB37,") \
		_T(" sum(CountB38) as CountB38,") \
		_T(" sum(CountB39) as CountB39,") \
		_T(" sum(B11) as B11,") \
		_T(" sum(B12) as B12,") \
		_T(" sum(B13) as B13,") \
		_T(" sum(B14) as B14,") \
		_T(" sum(B15) as B15,") \
		_T(" sum(B16) as B16,") \
		_T(" sum(B17) as B17,") \
		_T(" sum(B18) as B18,") \
		_T(" sum(B19) as B19,") \
		_T(" sum(B1A) as B1A,") \
		_T(" sum(B1B) as B1B,") \
		_T(" sum(B1C) as B1C,") \
		_T(" sum(B1D) as B1D,") \
		_T(" sum(B1E) as B1E,") \
		_T(" sum(B1F) as B1F,") \
		_T(" sum(B21) as B21,") \
		_T(" sum(B22) as B22,") \
		_T(" sum(B23) as B23,") \
		_T(" sum(B24) as B24,") \
		_T(" sum(B25) as B25,") \
		_T(" sum(B26) as B26,") \
		_T(" sum(B27) as B27,") \
		_T(" sum(B28) as B28,") \
		_T(" sum(B29) as B29,") \
		_T(" sum(B31) as B31,") \
		_T(" sum(B32) as B32,") \
		_T(" sum(B33) as B33,") \
		_T(" sum(B34) as B34,") \
		_T(" sum(B35) as B35,") \
		_T(" sum(B36) as B36,") \
		_T(" sum(B37) as B37,") \
		_T(" sum(B38) as B38,") \
		_T(" sum(B39) as B39,") \
		_T(" sum(TotalCost) as TotalCost,") \
		_T(" sum(TotalPayment) as TotalPayment") \
		_T(" FROM") \
		_T(" ( ") \
		_T("    SELECT deptid, roomid,") \
		_T(" 	case when groupid= 'B11' then 1 else 0 end as CountB11,") \
		_T(" 	case when groupid= 'B12' then 1 else 0 end as CountB12,") \
		_T(" 	case when groupid= 'B13' then 1 else 0 end as CountB13,") \
		_T(" 	case when groupid= 'B14' then 1 else 0 end as CountB14,") \
		_T(" 	case when groupid= 'B15' then 1 else 0 end as CountB15,") \
		_T(" 	case when groupid= 'B16' then 1 else 0 end as CountB16,") \
		_T(" 	case when groupid= 'B17' then 1 else 0 end as CountB17,") \
		_T(" 	case when groupid= 'B18' then 1 else 0 end as CountB18,") \
		_T(" 	case when groupid= 'B19' then 1 else 0 end as CountB19,") \
		_T(" 	case when groupid= 'B1A' then 1 else 0 end as CountB1A,") \
		_T(" 	case when groupid= 'B1B' then 1 else 0 end as CountB1B,") \
		_T(" 	case when groupid= 'B1C' then 1 else 0 end as CountB1C,") \
		_T(" 	case when groupid= 'B1D' then 1 else 0 end as CountB1D,") \
		_T(" 	case when groupid= 'B1E' then 1 else 0 end as CountB1E,") \
		_T(" 	case when groupid= 'B1F' then 1 else 0 end as CountB1F,") \
		_T(" 	case when groupid= 'B21' then 1 else 0 end as CountB21,") \
		_T(" 	case when groupid= 'B22' then 1 else 0 end as CountB22,") \
		_T(" 	case when groupid= 'B23' then 1 else 0 end as CountB23,") \
		_T(" 	case when groupid= 'B24' then 1 else 0 end as CountB24,") \
		_T(" 	case when groupid= 'B25' then 1 else 0 end as CountB25,") \
		_T(" 	case when groupid= 'B26' then 1 else 0 end as CountB26,") \
		_T(" 	case when groupid= 'B27' then 1 else 0 end as CountB27,") \
		_T(" 	case when groupid= 'B28' then 1 else 0 end as CountB28,") \
		_T(" 	case when groupid= 'B29' then 1 else 0 end as CountB29,") \
		_T(" 	case when groupid= 'B31' then 1 else 0 end as CountB31,") \
		_T(" 	case when groupid= 'B32' then 1 else 0 end as CountB32,") \
		_T(" 	case when groupid= 'B33' then 1 else 0 end as CountB33,") \
		_T(" 	case when groupid= 'B34' then 1 else 0 end as CountB34,") \
		_T(" 	case when groupid= 'B35' then 1 else 0 end as CountB35,") \
		_T(" 	case when groupid= 'B36' then 1 else 0 end as CountB36,") \
		_T(" 	case when groupid= 'B37' then 1 else 0 end as CountB37,") \
		_T(" 	case when groupid= 'B38' then 1 else 0 end as CountB38,") \
		_T(" 	case when groupid= 'B39' then 1 else 0 end as CountB39,") \
		_T(" 	sum(B11) as B11,") \
		_T(" 	sum(B12) as B12,") \
		_T(" 	sum(B13) as B13,") \
		_T(" 	sum(B14) as B14,") \
		_T(" 	sum(B15) as B15,") \
		_T(" 	sum(B16) as B16,") \
		_T(" 	sum(B17) as B17,") \
		_T(" 	sum(B18) as B18,") \
		_T(" 	sum(B19) as B19,") \
		_T(" 	sum(B1A) as B1A,") \
		_T(" 	sum(B1B) as B1B,") \
		_T(" 	sum(B1C) as B1C,") \
		_T(" 	sum(B1D) as B1D,") \
		_T(" 	sum(B1E) as B1E,") \
		_T(" 	sum(B1F) as B1F,") \
		_T(" 	sum(B21) as B21,") \
		_T(" 	sum(B22) as B22,") \
		_T(" 	sum(B23) as B23,") \
		_T(" 	sum(B24) as B24,") \
		_T(" 	sum(B25) as B25,") \
		_T(" 	sum(B26) as B26,") \
		_T(" 	sum(B27) as B27,") \
		_T(" 	sum(B28) as B28,") \
		_T(" 	sum(B29) as B29,") \
		_T(" 	sum(B31) as B31,") \
		_T(" 	sum(B32) as B32,") \
		_T(" 	sum(B33) as B33,") \
		_T(" 	sum(B34) as B34,") \
		_T(" 	sum(B35) as B35,") \
		_T(" 	sum(B36) as B36,") \
		_T(" 	sum(B37) as B37,") \
		_T(" 	sum(B38) as B38,") \
		_T(" 	sum(B39) as B39,") \
		_T(" 	sum(TotalCost) as TotalCost,") \
		_T(" 	sum(TotalPayment) as TotalPayment") \
		_T(" FROM ") \
		_T(" (") \
		_T(" 	SELECT substr(hfe_group, 1, 3) as groupid,") \
		_T(" 	hfe_deptid as deptid,") \
		_T(" 	hfe_roomid as roomid,") \
		_T(" 	hfe_docno as docno,") \
		_T(" 	hfe_idx as orderid,") \
		_T(" 	case when substr(hfe_group,1,2) IN('B1','B2','B3') then sum(hfe_cost) else 0 end as TotalCost,") \
		_T(" 	case when substr(hfe_group,1,2) IN('B1','B2','B3') then sum(hfe_patpaid+hfe_difpaid) else 0 end as TotalPayment,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B11' then sum(hfe_cost) else 0 end as B11,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B12' then sum(hfe_cost) else 0 end as B12,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B13' then sum(hfe_cost) else 0 end as B13,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B14' then sum(hfe_cost) else 0 end as B14,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B15' then sum(hfe_cost) else 0 end as B15,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B16' then sum(hfe_cost) else 0 end as B16,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B17' then sum(hfe_cost) else 0 end as B17,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B18' then sum(hfe_cost) else 0 end as B18,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B19' then sum(hfe_cost) else 0 end as B19,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B1A' then sum(hfe_cost) else 0 end as B1A,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B1B' then sum(hfe_cost) else 0 end as B1B,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B1C' then sum(hfe_cost) else 0 end as B1C,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B1D' then sum(hfe_cost) else 0 end as B1D,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B1E' then sum(hfe_cost) else 0 end as B1E,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B1F' then sum(hfe_cost) else 0 end as B1F,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B21' then sum(hfe_cost) else 0 end as B21,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B22' then sum(hfe_cost) else 0 end as B22,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B23' then sum(hfe_cost) else 0 end as B23,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B24' then sum(hfe_cost) else 0 end as B24,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B25' then sum(hfe_cost) else 0 end as B25,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B26' then sum(hfe_cost) else 0 end as B26,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B27' then sum(hfe_cost) else 0 end as B27,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B28' then sum(hfe_cost) else 0 end as B28,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B29' then sum(hfe_cost) else 0 end as B29,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B31' then sum(hfe_cost) else 0 end as B31,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B32' then sum(hfe_cost) else 0 end as B32,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B33' then sum(hfe_cost) else 0 end as B33,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B34' then sum(hfe_cost) else 0 end as B34,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B35' then sum(hfe_cost) else 0 end as B35,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B36' then sum(hfe_cost) else 0 end as B36,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B37' then sum(hfe_cost) else 0 end as B37,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B38' then sum(hfe_cost) else 0 end as B38,") \
		_T(" 	case when substr(hfe_group,1,3) = 'B39' then sum(hfe_cost) else 0 end as B39") \
		_T(" FROM hms_fee_invoice") \
		_T(" LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfi_invoiceno=hfe_invoiceno)") \
		_T(" WHERE 	hfe_deptid='%s' ") \
		_T(" 	AND hfi_type='P' ") \
		_T(" 	AND hfi_cost > 0") \
		_T(" 	AND date(hfi_recvdate) BETWEEN date('%s') and date('%s')") \
		_T(" GROUP BY deptid, roomid, hfe_group, docno, orderid") \
		_T(" ) as tbl") \
		_T(" GROUP BY deptid, roomid, groupid, docno, orderid") \
		_T(" ) as tbl2") \
		_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=deptid AND hrl_id=roomid)") \
		_T(" GROUP BY deptid, roomid, roomname") \
		_T(" ORDER BY deptid, roomid"),pMF->m_szDept, szFromDate, szToDate); 
	_fmsg(_T("%s"), szSQL);
	int nCount = rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_GENERALPARACLINICALCOSTREPORT.RPT")))
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	//rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	//rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	
	CString szName;
	double value;
	double nTotalValue[100];
	for (int i =0; i < 100; i++)
		nTotalValue[i]=0;
	
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("Index"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("roomname"), tmpStr);
		for (int i = 3; i < rs.GetFieldCount(); i++)
		{
			szName = rs.GetFieldName(i);
			tmpStr = rs.GetValue(i);
			nTotalValue[i] += ToDouble(tmpStr);
			rptDetail->SetValue(szName, tmpStr);
		}
		rs.MoveNext();
	}
	long double nTotalAmount=0;
	for (int i =0; i < rs.GetFieldCount(); i++)
	{
		szName.Format(_T("sum%s"), rs.GetFieldName(i));
		tmpStr.Format(_T("%.2f"), nTotalValue[i]);
		tmpStr2 = rs.GetFieldName(i);
		if(tmpStr2.GetLength()==3){
			nTotalAmount += nTotalValue[i];
		}
		rpt.GetReportFooter()->SetValue(szName, tmpStr);
	}
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		rpt.PrintPreview();
	
}
