#include "rptDetailedlistofpatientcostinpatienttreatment.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailedlistofpatientcostinpatienttreatment * )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailedlistofpatientcostinpatienttreatment * )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnClerkAddNew();
}*/

static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnDeptLoadData();
}

static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnObjectLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptDetailedlistofpatientcostinpatienttreatment *pVw = (rptDetailedlistofpatientcostinpatienttreatment *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptDetailedlistofpatientcostinpatienttreatment *pVw = (rptDetailedlistofpatientcostinpatienttreatment *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptDetailedlistofpatientcostinpatienttreatment *pVw = (rptDetailedlistofpatientcostinpatienttreatment *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptDetailedlistofpatientcostinpatienttreatment *pVw = (rptDetailedlistofpatientcostinpatienttreatment *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnAddHMSGeneralCostReportDialog();
} 
static int _OnEditHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnEditHMSGeneralCostReportDialog();
} 
static int _OnDeleteHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnDeleteHMSGeneralCostReportDialog();
} 
static int _OnSaveHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnSaveHMSGeneralCostReportDialog();
} 
static int _OnCancelHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailedlistofpatientcostinpatienttreatment *)pWnd)->OnCancelHMSGeneralCostReportDialog();
} 
rptDetailedlistofpatientcostinpatienttreatment ::rptDetailedlistofpatientcostinpatienttreatment (CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle = _T("General Treatment Cost Report");
	SetDefaultValues();
}
rptDetailedlistofpatientcostinpatienttreatment ::~rptDetailedlistofpatientcostinpatienttreatment (){
}
void rptDetailedlistofpatientcostinpatienttreatment ::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 400, 180);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 30, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 395, 115);	
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 110, 145);
	m_wndDept.Create(this,115, 120, 395, 145); 
	
	m_wndObjectLabel.Create(this, _T("Object"), 10, 150, 110, 175);
	m_wndObject.Create(this,115, 150, 295, 175); 

	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 65, 165, 145, 190);
	//m_wndPrint.Create(this, _T("&Print"), 150, 165, 230, 190);
	m_wndExport.Create(this, _T("&Export"), 235, 185, 315, 215);
	m_wndClose.Create(this, _T("&Close"), 320, 185, 400, 215);

}
void rptDetailedlistofpatientcostinpatienttreatment ::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);


	m_wndReportPeriod.Format(2, 1, 17);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1,_T("Description"), CFMT_TEXT,150);
	
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObject.InsertColumn(1,_T("Description"), CFMT_TEXT,150);

}
void rptDetailedlistofpatientcostinpatienttreatment ::OnSetWindowEvents(){
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

	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);

	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);
}
void rptDetailedlistofpatientcostinpatienttreatment ::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
}
void rptDetailedlistofpatientcostinpatienttreatment ::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptDetailedlistofpatientcostinpatienttreatment ::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptDetailedlistofpatientcostinpatienttreatment ::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();

}
int rptDetailedlistofpatientcostinpatienttreatment ::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnYearChange(){
	
} */
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnYearSetfocus(){
	
} */
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnYearKillfocus(){
	
} */
int rptDetailedlistofpatientcostinpatienttreatment ::OnYearCheckValue(){
	return 0;
} 
void rptDetailedlistofpatientcostinpatienttreatment ::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailedlistofpatientcostinpatienttreatment ::OnReportPeriodSelendok(){
	
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
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnReportPeriodSetfocus(){
	
}*/
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnReportPeriodKillfocus(){
	
}*/
long rptDetailedlistofpatientcostinpatienttreatment ::OnReportPeriodLoadData(){
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
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnFromDateChange(){
	
} */
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnFromDateSetfocus(){
	
} */
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnFromDateKillfocus(){
	
} */
int rptDetailedlistofpatientcostinpatienttreatment ::OnFromDateCheckValue(){
	return 0;
} 
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnToDateChange(){
	
} */
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnToDateSetfocus(){
	
} */
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnToDateKillfocus(){
	
} */
int rptDetailedlistofpatientcostinpatienttreatment ::OnToDateCheckValue(){
	return 0;
} 
void rptDetailedlistofpatientcostinpatienttreatment ::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailedlistofpatientcostinpatienttreatment ::OnClerkSelendok(){
	 
}
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnClerkSetfocus(){
	
}*/
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnClerkKillfocus(){
	
}*/
long rptDetailedlistofpatientcostinpatienttreatment ::OnClerkLoadData(){
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
/*void rptDetailedlistofpatientcostinpatienttreatment ::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

long rptDetailedlistofpatientcostinpatienttreatment ::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id ='%s' "), m_szDeptKey);
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type='DT' %s ORDER BY sd_id"), szWhere);
		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}


long rptDetailedlistofpatientcostinpatienttreatment ::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		//szWhere.Format(_T(" and ho_id =%d "), ToInt(m_szObjectKey));
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select ho_type as id, ho_desc as name from hms_object where ho_type not in('I','C') %s order by cast(ho_id as integer)"), szWhere);
		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

void rptDetailedlistofpatientcostinpatienttreatment ::OnPrintPreviewSelect(){	
	ExportToExcellReport();		
	UpdateData(false);
} 
void rptDetailedlistofpatientcostinpatienttreatment ::OnPrintSelect(){	
	ExportToExcellReport();		
	UpdateData(false);
} 
void rptDetailedlistofpatientcostinpatienttreatment ::OnExportSelect(){	
	//UpdateData(true);
	ExportToExcellReport();		
	UpdateData(false);
} 
void rptDetailedlistofpatientcostinpatienttreatment ::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int rptDetailedlistofpatientcostinpatienttreatment ::OnAddHMSGeneralCostReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptDetailedlistofpatientcostinpatienttreatment ::OnEditHMSGeneralCostReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptDetailedlistofpatientcostinpatienttreatment ::OnDeleteHMSGeneralCostReportDialog(){
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
 		OnCancelHMSGeneralCostReportDialog(); 
 	}
	return 0;
}
int rptDetailedlistofpatientcostinpatienttreatment ::OnSaveHMSGeneralCostReportDialog(){
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
 		//OnHMSGeneralCostReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptDetailedlistofpatientcostinpatienttreatment ::OnCancelHMSGeneralCostReportDialog(){
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
int rptDetailedlistofpatientcostinpatienttreatment ::OnHMSGeneralCostReportDialogListLoadData(){
	return 0;
}
//Bao cao chi phi benh nhan dich vu dieu tri trong khoa
void rptDetailedlistofpatientcostinpatienttreatment::ExportToExcellReport(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,szUserReceiver,szFromDateToDate, szTmp, szObject;
	
	
	szWhere.Empty();	
	
	if (!m_wndClerk.GetCurrent(0).IsEmpty())
		szUserReceiver.Format(_T(" and hfi_receiver ='%s' "), m_wndClerk.GetCurrent(0));
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T(" and hfe_deptid ='%s' "), m_szDeptKey);

	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" and ho_type ='%s' "), m_szObjectKey);
	
	szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
	_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T("  	date_part('year', hp_birthdate) as birthyear,") \
	_T(" 	case when hp_sex = 'M' then 1 else 2 end as sex, ") \
	_T("	hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
	_T("	hfe_deptid as deptid, idx,") \
	_T("	hcr_recordno as recordno, ") \
	_T(" 	admitdate as admitdate, ") \
	_T(" 	dischargedate as dischargedate, ") \
	_T(" 	bedqty as totaltreat, ") \
	_T("  	hd_icd as icd10,") \
	_T("	userid,recvdate, ") \
	_T("  	sum(drugfee) as drugfee,") \
	_T("	sum(bloodfee) as bloodfee, ") \
	_T("	sum(DrugK) as DrugK, ") \
	_T("	sum(Dichtruyen) as Dichtruyen, ") \
	_T("  	sum(testfee) as testfee ,") \
	_T("	sum(GPSinhthiet) as GPSinhthiet, ") \
	_T("	sum(GPTuthi) as GPTuthi, ") \
	_T("	sum(NuoicayKSD) as NuoicayKSD, ") \
	_T("  	sum(testfee+GPSinhthiet+GPTuthi+NuoicayKSD) as Totaltestfee ,") \
	_T("	sum(pacsfeexq) as pacsfeexq,") \
	_T("	sum(pacsfeeSADT) as pacsfeeSADT, ")\
	_T("	sum(pacsfeeSAMAU) as pacsfeeSAMAU, ") \
	_T("	sum(CtyThuong) as CtyThuong, ") \
	_T("	sum(Cty64) as Cty64, ") \
	_T("	sum(pacsfeeSAMAU+pacsfeeSADT+pacsfeexq+CtyThuong+Cty64) as pacsfee,") \
	_T("	sum(noisoi) as noisoi, ") \
	_T("	sum(dientim) as dientim, ") \
	_T("	sum(diennao) as diennao, ") \
	_T("	sum(dohohap) as dohohap, ") \
	_T("	sum(luuhuyetnao) as luuhuyetnao,") \
	_T("	sum(Dotimthai) as dotimthai, ") \
	_T("	sum(noisoi+dientim+diennao+dohohap+luuhuyetnao+dotimthai) as tdcnfee, ") \
	_T("  	sum(Thuthuat) as Thuthuat ,") \
	_T("  	sum(TNTThuong) as TNTThuong ,") \
	_T("  	sum(TNTLiendoanh) as TNTLiendoanh ,") \
	_T("  	sum(Tansoi) as Tansoi ,") \
	_T("  	sum(Phauthuat) as Phauthuat ,") \
	_T("  	sum(PTNoisoi) as PTNoisoi ,") \
	_T("  	sum(PTNoisoi+Phauthuat) as TongPTTT ,") \
	_T("  	sum(hitechfee) as hitechfee ,") \
	_T("  	sum(materialfee) as materialfee ,") \
	_T("  	sum(bedfee) as bedfee ,") \
	_T("  	sum(cost) as cost,") \
	_T("  	sum(otherfee) as otherfee ,") \
	_T("  	sum(discount) as inspaid ,") \
	_T("	case when ho_type ='X' then sum(totaltestpacsfee-(totaltestpacsfee/1.5)) else 0 end as NguoiNN, ") \
	_T("	(select sum(hfi_patpaid) from hms_fee_invoice where (hfi_type ='A' and hfi_category ='A' and hfi_status='O') and (hfi_docno=hd_docno and hfe_deptid=hfi_deptid)) as TamungVV, ") \
	_T("	(select sum(hfi_patpaid) from hms_fee_invoice where (hfi_type ='A' and hfi_category ='D' and hfi_status='P') and (hfi_docno=hd_docno and hfe_deptid=hfi_deptid)) as TamungRV, ") \
	_T("	(select sum(hfi_patpaid) from hms_fee_invoice where hfi_type ='R' and (hfi_docno=hd_docno and hfe_deptid=hfi_deptid)) as Hoanung," )\
	_T("	(select sum(hfi_patpaid) from hms_fee_invoice where hfi_type ='D' and (hfi_docno=hd_docno and hfe_deptid=hfi_deptid)) as Miengiam, ") \
	_T("	(select sum(hfi_patpaid) from hms_fee_invoice where (hfi_type = 'P' and hfi_type not in('A','D')) and (hfi_docno=hd_docno and hfe_deptid=hfi_deptid)) as Thutructiep, ") \
	_T("  	sum(patpaid) as patpaid ") \
	_T("  FROM") \
	_T("  (") \
	_T("      SELECT ") \
	_T("  	hfe_deptid,") \
	_T("	(select case when min(htr_idx) > 0 then min(htr_idx) else 0 end from hms_treatment_record where htr_docno=hfi_docno and htr_deptid=hfe_deptid) as idx,  ") \
	_T("	(select case when hfe_deptid ='KB' then min(date(hd_admitdate)) else min(date(htr_admitdate)) end from hms_doc left join hms_treatment_record on(hd_docno=htr_docno) where htr_docno=hfi_docno and (htr_deptid=hfe_deptid or hd_enddept=hfe_deptid)) as admitdate,  ") \
	_T("	(select case when hfe_deptid ='KB' then max(date(hd_enddate)) else max(date(htr_dischargedate)) end from hms_doc left join hms_treatment_record on(hd_docno=htr_docno) where htr_docno=hfi_docno and (htr_deptid=hfe_deptid or hd_enddept=hfe_deptid)) as dischargedate, ") \
	_T("  	hfi_class,") \
	_T("  	hfi_docno,") \
	_T("  	hfi_invoiceno,") \
	_T("  	hfe_group as groupid,") \
	_T("	date(hfi_recvdate) as recvdate, ") \
	_T("  	hfe_quantity as qty,") \
	_T("  	hfe_unitprice	as unitprice,") \
	_T("	hfi_receiver as userid, ") \
	_T("  	case when substr(hfe_group, 1, 1) in('A') and hfe_group  not in('A1400','A2000','A9000','A3000') then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
	_T("  	case when substr(hfe_group, 1, 2)='A2' then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
	_T("  	case when hfe_group ='A1400' then hfe_cost-hfe_diffcost else 0 end as DrugK,") \
	_T("  	case when hfe_group ='A3000' then hfe_cost-hfe_diffcost else 0 end as Dichtruyen,") \
	_T("   	case when substr(hfe_group, 1, 1) in ('B') then hfe_cost-hfe_diffcost else 0 end as totaltestpacsfee,") \
	_T("   	case when substr(hfe_group, 1, 2)='B1' and substr(hfe_group, 1, 3) not in ('B1E','B1F') and hfe_itemid <> 'B1D00003' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as testfee,") \
	_T("   	case when substr(hfe_group, 1, 3)='B1E' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as GPSinhthiet,") \
	_T("   	case when substr(hfe_group, 1, 3)='B1F' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as GPTuthi,") \
	_T("   	case when substr(hfe_group, 1, 3)='B1D' and hfe_itemid='B1D00003' then hfe_cost-hfe_diffcost else 0 end as NuoicayKSD,") \
	_T("   	case when substr(hfe_group, 1, 3)='B21' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeexq,") \
	_T("   	case when substr(hfe_group, 1, 3)='B24' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeeSADT,") \
	_T("   	case when substr(hfe_group, 1, 3)='B25' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeeSAMAU,") \
	_T("   	case when substr(hfe_group, 1, 3)='B31' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Noisoi,") \
	_T("   	case when substr(hfe_group, 1, 3)='B33' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Dientim,") \
	_T("   	case when substr(hfe_group, 1, 3)='B34' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Diennao,") \
	_T("   	case when substr(hfe_group, 1, 3)='B35' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as DoHohap,") \
	_T("   	case when substr(hfe_group, 1, 3)='B36' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Luuhuyetnao,") \
	_T("   	case when substr(hfe_group, 1, 3)='B37' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Dotimthai,") \
	_T("   	case when substr(hfe_group, 1, 3)='B22' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as CtyThuong ,") \
	_T("   	case when substr(hfe_group, 1, 3)='B22' and hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as Cty64 ,") \
	_T("  	case when substr(hfe_group, 1, 2) ='B5' and hfe_group not in('B5500','B5600','B5700') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Thuthuat,") \
	_T("  	case when hfe_group = 'B5500' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as TNTThuong,") \
	_T("  	case when hfe_group = 'B5600' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as TNTLienDoanh,") \
	_T("  	case when hfe_group = 'B5700' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as TANSOI,") \
	_T("  	case when substr(hfe_group, 1, 2) ='B4' and hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as PTNoisoi,") \
	_T("  	case when substr(hfe_group, 1, 2) ='B4' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Phauthuat,") \
	_T("  	case when substr(hfe_group, 1, 3) <> 'B22' and hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as hitechfee,") \
	_T("  	case when hfe_group='A9000' then hfe_cost-hfe_diffcost else 0 end as materialfee,") \
	_T("	(select  sum(hb_treatqty) from hms_bed  where hb_docno =hfe_docno and hb_deptid=hfe_deptid) as bedqty, ") \
	_T("  	case when hfe_group='C0000' then hfe_cost-hfe_diffcost else 0 end as bedfee,") \
	_T("  	case when hfe_group='F0000' then hfe_cost-hfe_diffcost else 0 end as otherfee,") \
	_T("  	hfe_cost as cost,") \
	_T("  	hfe_discount as discount,") \
	_T("  	hfe_patpaid as patpaid,") \
	_T("  	hfe_diffpaid as diffpaid,") \
	_T("  	hfe_patdebt as patdebt") \
	_T("  FROM hmsv_fee") \
	_T("  LEFT JOIN hms_fee_invoice ON(hfi_docno=hfe_docno AND hfe_invoiceno=hfi_invoiceno)") \
	_T("  WHERE hfe_status='P' ") \
	_T("	and hfe_type not in('E')") \
	_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') ") \
	_T(" 	and hfi_type='P' and hfe_group<>'D0000' ") \
	_T(" 	and hfi_class in('I','O') %s %s ") \
	_T("  ) as tbl ") \
	_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
	_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
	_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
	_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
	_T("  WHERE hcr_status ='T' and ho_type not in('I','C') %s") \
	_T("  GROUP BY docno, pname, birthyear, sex, address,deptid, ho_type,") \
	_T("		   recordno, admitdate,dischargedate ,icd10,totaltreat,userid,idx,recvdate ") \
	_T("  HAVING sum(cost) > 0") \
	_T("  ORDER BY docno,pname,idx,deptid,userid"), m_szFromDate, m_szToDate, szUserReceiver,szWhere, szObject);


	
	_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No Data"), MB_OK);
		return ;
	}

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0,5);
	
	xls.SetColumnWidth(1,10);
	xls.SetColumnWidth(2,23);	
	xls.SetColumnWidth(3,5);
	xls.SetColumnWidth(4,8);
	xls.SetColumnWidth(5,30);
	xls.SetColumnWidth(6,10);
	xls.SetColumnWidth(7,10);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,12);
	xls.SetColumnWidth(11,12);
	
	for (int i=10;i<57;i++){		
		xls.SetColumnWidth(i,12);
	}

	xls.SetRowHeight(6,30);	
	xls.SetRowHeight(7,30);
	xls.SetRowHeight(8,20);
	xls.SetCellMergedColumns(0,3,22);
	xls.SetCellMergedColumns(0,4,22);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	TranslateString(_T("\x42\x1EA2NG K\xCA \x43P \x42\x1EC6NH NH\xC2N \x110I\x1EC0U TR\x1ECA N\x1ED8I TR\xDA"), tmpStr);
	xls.SetCellText(0, 3, tmpStr,FMT_TEXT,true,18,0);	
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 4, szFromDateToDate,FMT_TEXT,true,12);

	int nRow = 6;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Birth Date"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(6, nRow, _T("Khoa"), FMT_TEXT,true);
	TranslateString(_T("ICD 10"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("In Date"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Out Date"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("T\x1EA1m \x1EE9ng VV"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("T\x1EA1m \x1EE9ng RV"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);
	
	TranslateString(_T("Sao BA"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sao BK"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT,true);	
	
	xls.SetCellText(46, nRow, _T("DVKTC"), FMT_TEXT,true);	
	TranslateString(_T("Total Treatment"), tmpStr);
	xls.SetCellText(47, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Bed Fee"), tmpStr);
	xls.SetCellText(48, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(49, nRow, _T("Gi\x1B0\x1EDDng YC"), FMT_TEXT,true);	
	
	TranslateString(_T("Thu th\xEAm ng\x1B0\x1EDDi n\x1B0\x1EDB\x63 ngo\xE0i"), tmpStr);
	xls.SetCellText(50, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Discount"), tmpStr);	
	xls.SetCellText(51, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(52, nRow, tmpStr, FMT_TEXT,true);
	
	TranslateString(_T("Ho\xE0n \x1EE9ng"), tmpStr);	
	xls.SetCellText(53, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(54, nRow, _T("User"), FMT_TEXT,true);	
	xls.SetCellText(55, nRow, _T("Ng\xE0y thu"), FMT_TEXT,true);	
	xls.SetCellText(56, nRow, _T("RecordNo"), FMT_TEXT,true);

	xls.SetCellMergedColumns(14,nRow,6);	
	TranslateString(_T("THU\x1ED0\x43 M\xC1U, \x44\x1ECA\x43H TRUY\x1EC0N"), tmpStr); // THUOC, MAU, DICH TRUYEN
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(20,nRow,4);	
	TranslateString(_T("\x58\xC9T NGHI\x1EC6M"), tmpStr); //XET NGHIEM
	xls.SetCellText(20, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(25,nRow,8);	
	TranslateString(_T("NH\xD3M TH\x102M \x44\xD2 \x43H\x1EE8\x43 N\x102NG"), tmpStr); // TDCN
	xls.SetCellText(25, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(33,nRow,6);
	TranslateString(_T("NH\xD3M \x43\x110H\x41"), tmpStr); //CDHA
	xls.SetCellText(33, nRow, tmpStr, FMT_TEXT,true);
	
	xls.SetCellMergedColumns(39,nRow,7);
	TranslateString(_T("PH\x1EAAU THU\x1EACT-THU THU\x1EACT"), tmpStr); // Nhom thu thuat-PT
	xls.SetCellText(39, nRow, tmpStr, FMT_TEXT,true);

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
	xls.SetCellMergedRows(10,nRow,2);
	xls.SetCellMergedRows(11,nRow,2);

	xls.SetCellMergedRows(12,nRow,2);	
	xls.SetCellMergedRows(13,nRow,2);

	
	
	xls.SetCellMergedRows(46,nRow,2);
	xls.SetCellMergedRows(47,nRow,2);
	xls.SetCellMergedRows(48,nRow,2);
	xls.SetCellMergedRows(49,nRow,2);
	xls.SetCellMergedRows(50,nRow,2);
	xls.SetCellMergedRows(51,nRow,2);
	xls.SetCellMergedRows(52,nRow,2);
	xls.SetCellMergedRows(53,nRow,2);	
	xls.SetCellMergedRows(54,nRow,2);
	xls.SetCellMergedRows(55,nRow,2);
	xls.SetCellMergedRows(56,nRow,2);
	
	
	
	

	
	nRow=7;	
	
	//Thuoc mau, thuoc k
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Drug K"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("\x44\x1ECB\x63h truy\x1EC1n"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Blood"), tmpStr);
	xls.SetCellText(17, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("M\xE1u ho\xE0n h\x1ED5i"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(19, nRow, _T("VTYT"), FMT_TEXT,true);	
	
	//Xet Nghiem
	xls.SetCellText(20, nRow, _T("T\x1ED5ng XN"), FMT_TEXT,true);	
	xls.SetCellText(21, nRow, _T("XN"), FMT_TEXT,true);	
	TranslateString(_T("Nu\xF4i \x63\x1EA5y KSD"), tmpStr);
	xls.SetCellText(22, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("GP Sinh thi\x1EBFt"), tmpStr);
	xls.SetCellText(23, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("GP T\x1EED thi"), tmpStr);
	xls.SetCellText(24, nRow, tmpStr, FMT_TEXT,true);	

	
	//Nhom TDCN
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(25, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(26, nRow, _T("N\x1ED9i soi"), FMT_TEXT,true);	//Noi soi
	xls.SetCellText(27, nRow, _T("\x110i\x1EC7n tim"), FMT_TEXT,true); // Dien tim
	TranslateString(_T("\x110i\x1EC7n n\xE3o"), tmpStr); // Dien nao
	xls.SetCellText(28, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(29, nRow, _T("\x110o CNHH"), FMT_TEXT,true);	//Do chuc nang HH
	xls.SetCellText(30, nRow, _T("\x110o DLX"), FMT_TEXT,true); // Do do loang xuong
	xls.SetCellText(31, nRow, _T("L\x1B0u HN"), FMT_TEXT,true); // Luu huyet nao
	TranslateString(_T("\x110o TT"), tmpStr);// Do tim thai
	xls.SetCellText(32, nRow, tmpStr, FMT_TEXT,true);
	//Nhom CDHA
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(33, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("X.Quang"), tmpStr); // Q. Quang
	xls.SetCellText(34, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Si\xEAu \xE2m \x110T"), tmpStr); //Sieu am DT
	xls.SetCellText(35, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(36, nRow, _T("Si\xEAu \xE2m m\xE0u"), FMT_TEXT,true); //Sieu AM mau

	TranslateString(_T("Cty Th\x1B0\x1EDDng"), tmpStr); //CTY Thuong
	xls.SetCellText(37, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(38, nRow, _T("Cty 64 LAT"), FMT_TEXT,true); //CTy 64 LAT

	// Phau thuat		
	TranslateString(_T("T\x1ED5ng PT+TT"), tmpStr);
	xls.SetCellText(39, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Ph\x1EABu thu\x1EADt"), tmpStr);
	xls.SetCellText(40, nRow, tmpStr, FMT_TEXT,true);
	
	TranslateString(_T("PT-N\x1ED9i soi"), tmpStr);
	xls.SetCellText(41, nRow, tmpStr, FMT_TEXT,true);
	//Thu thuat
	TranslateString(_T("Thu thu\x1EADt"), tmpStr);
	xls.SetCellText(42, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("TNT"), tmpStr);
	xls.SetCellText(43, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("TNT - LD"), tmpStr);
	xls.SetCellText(44, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("T\xE1n s\x1ECFi"), tmpStr);
	xls.SetCellText(45, nRow, tmpStr, FMT_TEXT,true);

	
	int nIndex = 1,nTreat=0;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine;

	long double grpCost[57];
	long double grpLine[57];
	long double ttlCost[57];
	long double grpOfLine[57];
	double cost = 0;
	nRow++;
	for (int i =0; i < 57; i++)
	{
		tmpStr.Format(_T("%d"), i+1);
		xls.SetCellText(i, nRow,tmpStr,FMT_INTEGER,true);
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i]=0;		
	}
	while(!rs.IsEOF())
	{		
		
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);		
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1,false);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER,false);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_INTEGER,false);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_INTEGER,false);		
		rs.GetValue(_T("Address"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,false);
		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("TamungVV"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("TamungRV"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_NUMBER1);

		//Thuoc
		rs.GetValue(_T("drugfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		grpOfLine[14] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(14, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("drugk"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("Dichtruyen"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		grpOfLine[16] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(16, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("Mauhoanhoi"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(18, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(19, nRow, tmpStr, FMT_NUMBER1,false);

		
	// Xet nghiem
		rs.GetValue(_T("Totaltestfee"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(20, nRow, tmpStr, FMT_NUMBER1,false);	
		
		rs.GetValue(_T("testfee"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		grpOfLine[21] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(21, nRow, tmpStr, FMT_NUMBER1,false);	
	
		rs.GetValue(_T("NuoicayKSD"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(22, nRow, tmpStr, FMT_NUMBER1,false);	

		rs.GetValue(_T("GpSinhthiet"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		grpOfLine[23] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(23, nRow, tmpStr, FMT_NUMBER1,false);	
	
		rs.GetValue(_T("GPTuthi"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		grpOfLine[24] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(24, nRow, tmpStr, FMT_NUMBER1,false);	
// TDCN
		rs.GetValue(_T("tdcnfee"), cost);
		grpCost[25] += cost;
		grpLine[25] += cost;
		grpOfLine[25] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(25,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Noisoi"), cost);
		grpCost[26] += cost;
		grpLine[26] += cost;
		grpOfLine[26] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(26,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dientim"), cost);
		grpCost[27] += cost;
		grpLine[27] += cost;
		grpOfLine[27] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(27,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Diennao"), cost);
		grpCost[28] += cost;
		grpLine[28] += cost;
		grpOfLine[28] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(28,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dohohap"), cost);
		grpCost[29] += cost;
		grpLine[29] += cost;
		grpOfLine[29] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(29,nRow,tmpStr,FMT_NUMBER1);
				
		rs.GetValue(_T("Luuhuyetnao"), cost);
		grpCost[30] += cost;
		grpLine[30] += cost;
		grpOfLine[30] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(30,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Doloangxuong"), cost);
		grpCost[31] += cost;
		grpLine[31] += cost;
		grpOfLine[31] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(31,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dotimthai"), cost);
		grpCost[32] += cost;
		grpLine[32] += cost;
		grpOfLine[32] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(32,nRow,tmpStr,FMT_NUMBER1);	
// CDHA
		rs.GetValue(_T("pacsfee"), cost);
		grpCost[33] += cost;
		grpLine[33] += cost;
		grpOfLine[33] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(33,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacsfeexq"), cost);
		grpCost[34] += cost;
		grpLine[34] += cost;
		grpOfLine[34] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(34,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacsfeeSADT"), cost);
		grpCost[35] += cost;
		grpLine[35] += cost;
		grpOfLine[35] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(35,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsfeeSAMAU"), cost);
		grpCost[36] += cost;
		grpLine[36] += cost;
		grpOfLine[36] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(36,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("CtyThuong"), cost);
		grpCost[37] += cost;
		grpLine[37] += cost;
		grpOfLine[37] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(37,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("Cty64"), cost);
		grpCost[38] += cost;
		grpLine[38] += cost;
		grpOfLine[38] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(38,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("TongPTTT"), cost);
		grpCost[39] += cost;
		grpLine[39] += cost;
		grpOfLine[39] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(39, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("Phauthuat"), cost);
		grpCost[40] += cost;
		grpLine[40] += cost;
		grpOfLine[40] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(40, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("PTNoisoi"), cost);
		grpCost[41] += cost;
		grpLine[41] += cost;
		grpOfLine[41] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(41, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("Thuthuat"), cost);
		grpCost[42] += cost;
		grpLine[42] += cost;
		grpOfLine[42] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(42, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("TNTThuong"), cost);
		grpCost[43] += cost;
		grpLine[43] += cost;
		grpOfLine[43] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(43, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("TNTLiendoanh"), cost);
		grpCost[44] += cost;
		grpLine[44] += cost;
		grpOfLine[44] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(44, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("Tansoi"), cost);
		grpCost[45] += cost;
		grpLine[45] += cost;
		grpOfLine[45] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(45, nRow, tmpStr, FMT_NUMBER1,false);		
		
	//---------------------------------------------------------------------
		rs.GetValue(_T("hitechfee"), cost);
		grpCost[46] += cost;
		grpLine[46] += cost;
		grpOfLine[46] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(46, nRow, tmpStr, FMT_NUMBER1,false);	
		
		
		
		rs.GetValue(_T("totaltreat"), nTreat);
		tmpStr.Format(_T("%d"), nTreat);
		xls.SetCellText(47, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("bedfee"), cost);	
		tmpStr.Format(_T("%.2f"), cost);
		
		
		if ((cost/nTreat) > 20000)
		{			
			grpCost[49] += cost;
			grpLine[49] += cost;
			grpOfLine[49] += cost;			
			xls.SetCellText(49, nRow, tmpStr, FMT_NUMBER1,false);
		}
		else
		{
			grpCost[48] += cost;
			grpLine[48] += cost;
			grpOfLine[48] += cost;
			xls.SetCellText(48, nRow, tmpStr, FMT_NUMBER1,false);
		}

		rs.GetValue(_T("NguoiNN"), cost);
		grpCost[50] += cost;
		grpLine[50] += cost;
		grpOfLine[50] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(50, nRow, tmpStr, FMT_NUMBER1,false);
	
		
		rs.GetValue(_T("Miengiam"), cost);
		grpCost[51] += cost;
		grpLine[51] += cost;
		grpOfLine[51] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(51, nRow, tmpStr, FMT_NUMBER1,false);		
		
		
		rs.GetValue(_T("cost"), cost);
		grpCost[52] += cost;
		grpLine[52] += cost;
		grpOfLine[52] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(52, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("Hoanung"), cost);
		grpCost[53] += cost;
		grpLine[53] += cost;
		grpOfLine[53] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(53, nRow, tmpStr, FMT_NUMBER1,false);

				
		rs.GetValue(_T("Userid"), tmpStr);
		xls.SetCellText(54, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("recvdate"), tmpStr);
		xls.SetCellText(55, nRow, CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy), FMT_DATE);	

		rs.GetValue(_T("recordno"), tmpStr);
		xls.SetCellText(56, nRow, tmpStr, FMT_INTEGER);

		rs.MoveNext();
	}

	for (int i =0; i < 57; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	
	if(ttlCost[52] > 0){
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Amount "), szAmount);	
		tmpStr.Format(_T("%s :"),szAmount );
		xls.SetCellMergedColumns(1,nRow,13);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,13);

		for (int i =10; i < 57; i++)
		{			
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,13);
		}

	}
	xls.Save(_T("Exports\\Chiphibenhnhandichvunoitru.xls"));
	EndWaitCursor();
	
}