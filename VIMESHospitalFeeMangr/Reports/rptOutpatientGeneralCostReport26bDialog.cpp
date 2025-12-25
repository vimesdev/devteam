#include "rptOutpatientGeneralCostReport26bDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOutpatientGeneralCostReport26bDialog * )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOutpatientGeneralCostReport26bDialog * )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnClerkAddNew();
}*/

static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnDeptLoadData();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptOutpatientGeneralCostReport26bDialog *pVw = (rptOutpatientGeneralCostReport26bDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptOutpatientGeneralCostReport26bDialog *pVw = (rptOutpatientGeneralCostReport26bDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptOutpatientGeneralCostReport26bDialog *pVw = (rptOutpatientGeneralCostReport26bDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptOutpatientGeneralCostReport26bDialog *pVw = (rptOutpatientGeneralCostReport26bDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnAddHMSGeneralCostReportDialog();
} 
static int _OnEditHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnEditHMSGeneralCostReportDialog();
} 
static int _OnDeleteHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnDeleteHMSGeneralCostReportDialog();
} 
static int _OnSaveHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnSaveHMSGeneralCostReportDialog();
} 
static int _OnCancelHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((rptOutpatientGeneralCostReport26bDialog *)pWnd)->OnCancelHMSGeneralCostReportDialog();
} 
rptOutpatientGeneralCostReport26bDialog ::rptOutpatientGeneralCostReport26bDialog (CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle = _T("General Treatment Cost 26A Report");
	SetDefaultValues();
}
rptOutpatientGeneralCostReport26bDialog ::~rptOutpatientGeneralCostReport26bDialog (){
}
void rptOutpatientGeneralCostReport26bDialog ::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 400, 150);
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

	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 65, 165, 145, 190);
	//m_wndPrint.Create(this, _T("&Print"), 150, 165, 230, 190);
	m_wndExport.Create(this, _T("&Export"), 235, 155, 315, 180);
	m_wndClose.Create(this, _T("&Close"), 320, 155, 400, 180);

}
void rptOutpatientGeneralCostReport26bDialog ::OnInitializeComponents(){
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

}
void rptOutpatientGeneralCostReport26bDialog ::OnSetWindowEvents(){
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
void rptOutpatientGeneralCostReport26bDialog ::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
}
void rptOutpatientGeneralCostReport26bDialog ::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptOutpatientGeneralCostReport26bDialog ::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptOutpatientGeneralCostReport26bDialog ::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();

}
int rptOutpatientGeneralCostReport26bDialog ::SetMode(int nMode){
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
/*void rptOutpatientGeneralCostReport26bDialog ::OnYearChange(){
	
} */
/*void rptOutpatientGeneralCostReport26bDialog ::OnYearSetfocus(){
	
} */
/*void rptOutpatientGeneralCostReport26bDialog ::OnYearKillfocus(){
	
} */
int rptOutpatientGeneralCostReport26bDialog ::OnYearCheckValue(){
	return 0;
} 
void rptOutpatientGeneralCostReport26bDialog ::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOutpatientGeneralCostReport26bDialog ::OnReportPeriodSelendok(){
	
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
/*void rptOutpatientGeneralCostReport26bDialog ::OnReportPeriodSetfocus(){
	
}*/
/*void rptOutpatientGeneralCostReport26bDialog ::OnReportPeriodKillfocus(){
	
}*/
long rptOutpatientGeneralCostReport26bDialog ::OnReportPeriodLoadData(){
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
/*void rptOutpatientGeneralCostReport26bDialog ::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptOutpatientGeneralCostReport26bDialog ::OnFromDateChange(){
	
} */
/*void rptOutpatientGeneralCostReport26bDialog ::OnFromDateSetfocus(){
	
} */
/*void rptOutpatientGeneralCostReport26bDialog ::OnFromDateKillfocus(){
	
} */
int rptOutpatientGeneralCostReport26bDialog ::OnFromDateCheckValue(){
	return 0;
} 
/*void rptOutpatientGeneralCostReport26bDialog ::OnToDateChange(){
	
} */
/*void rptOutpatientGeneralCostReport26bDialog ::OnToDateSetfocus(){
	
} */
/*void rptOutpatientGeneralCostReport26bDialog ::OnToDateKillfocus(){
	
} */
int rptOutpatientGeneralCostReport26bDialog ::OnToDateCheckValue(){
	return 0;
} 
void rptOutpatientGeneralCostReport26bDialog ::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOutpatientGeneralCostReport26bDialog ::OnClerkSelendok(){
	 
}
/*void rptOutpatientGeneralCostReport26bDialog ::OnClerkSetfocus(){
	
}*/
/*void rptOutpatientGeneralCostReport26bDialog ::OnClerkKillfocus(){
	
}*/
long rptOutpatientGeneralCostReport26bDialog ::OnClerkLoadData(){
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
/*void rptOutpatientGeneralCostReport26bDialog ::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

long rptOutpatientGeneralCostReport26bDialog ::OnDeptLoadData(){
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

void rptOutpatientGeneralCostReport26bDialog ::OnPrintPreviewSelect(){	
	ExportToExcell26bReport();		
	UpdateData(false);
} 
void rptOutpatientGeneralCostReport26bDialog ::OnPrintSelect(){	
	ExportToExcell26bReport();		
	UpdateData(false);
} 
void rptOutpatientGeneralCostReport26bDialog ::OnExportSelect(){	
	//UpdateData(true);
	ExportToExcell26bReport();		
	UpdateData(false);
} 
void rptOutpatientGeneralCostReport26bDialog ::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int rptOutpatientGeneralCostReport26bDialog ::OnAddHMSGeneralCostReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptOutpatientGeneralCostReport26bDialog ::OnEditHMSGeneralCostReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptOutpatientGeneralCostReport26bDialog ::OnDeleteHMSGeneralCostReportDialog(){
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
int rptOutpatientGeneralCostReport26bDialog ::OnSaveHMSGeneralCostReportDialog(){
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
int rptOutpatientGeneralCostReport26bDialog ::OnCancelHMSGeneralCostReportDialog(){
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
int rptOutpatientGeneralCostReport26bDialog ::OnHMSGeneralCostReportDialogListLoadData(){
	return 0;
}

void rptOutpatientGeneralCostReport26bDialog::ExportToExcell26bReport(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,szUserReceiver,szFromDateToDate, szTmp;
	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."), _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};	
	
	szWhere.Empty();	
	
	if (!m_wndClerk.GetCurrent(0).IsEmpty())
		szUserReceiver.Format(_T(" and hfi_receiver ='%s' "), m_wndClerk.GetCurrent(0));
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T(" and hfe_deptid ='%s' "), m_szDeptKey);


	if (pMF->m_szDiscountPrintReport != _T("Y"))
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	case when hp_sex = 'M' then 1 else 2 end as sex, ") \
		_T("  	hc_cardno as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("	hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T("  	hc_regcode as regplace,") \
		_T("	hc_regdate as regdate, ") \
		_T("	hc_expdate as expdate, ") \
		_T("  	hc_line as insline,") \
		_T("	hfe_deptid as deptid, idx,") \
		_T("	hcr_recordno as recordno, ") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	admitdate as admitdate, ") \
		_T(" 	dischargedate as dischargedate, ") \
		_T(" 	bedqty as totaltreat, ") \
		_T("  	hd_icd as icd10,") \
		_T("	userid, ") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("	sum(bloodfee) as bloodfee, ") \
		_T("	sum(DrugK) as DrugK, ") \
		_T("  	sum(testfee) as testfee ,") \
		_T("	sum(GPSinhthiet) as GPSinhthiet, ") \
		_T("	sum(GPTuthi) as GPTuthi, ") \
		_T("  	sum(testfee+GPSinhthiet+GPTuthi) as Totaltestfee ,") \
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
		_T("  	sum(PTNoisoi+Phauthuat) as TongPhauthuat ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(bedfee) as bedfee ,") \
		_T("  	sum(cost) as cost,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("	sum(diffpaid) as diffpaid, ") \
		_T("	sum(patpaid+discount) as TotalInspaid, ") \
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
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("	hfi_receiver as userid, ") \
		_T("  	case when substr(hfe_group, 1, 1) in('A') and hfe_group  not in('A1400','A2000','A9000') then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2' then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
		_T("  	case when hfe_group ='A1400' then hfe_cost-hfe_diffcost else 0 end as DrugK,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1' and substr(hfe_group, 1, 3) not in ('B1E','B1F') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 3)='B1E' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as GPSinhthiet,") \
		_T("   	case when substr(hfe_group, 1, 3)='B1F' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as GPTuthi,") \
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
		_T(" 	and hfi_class in('O') and hfe_discount > 0 %s %s ") \
		_T("  ) as tbl ") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
		_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T("  WHERE hcr_status ='T' and ho_type in('I','C') and length(hc_cardno) > 0") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno,address, insline,insgroup,linename,hdline,regplace,deptid,regdate, ") \
		_T("		expdate,recordno, admitdate,dischargedate ,icd10,totaltreat,userid,idx ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline,cardno,idx,deptid,userid"), m_szFromDate, m_szToDate, szUserReceiver,szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	case when hp_sex = 'M' then 1 else 2 end as sex, ") \
		_T("  	hc_cardno as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("	hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T("  	hc_regcode as regplace,") \
		_T("	hc_regdate as regdate, ") \
		_T("	hc_expdate as expdate, ") \
		_T("  	hc_line as insline,") \
		_T("	hfe_deptid as deptid,idx, ") \
		_T("	hcr_recordno as recordno, ") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	admitdate as admitdate, ") \
		_T(" 	dischargedate as dischargedate, ") \
		_T(" 	bedqty as totaltreat, ") \
		_T("  	hd_icd as icd10,") \
		_T("	userid, ") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("	sum(bloodfee) as bloodfee, ") \
		_T("	sum(DrugK) as DrugK, ") \
		_T("  	sum(testfee) as testfee ,") \
		_T("	sum(GPSinhthiet) as GPSinhthiet, ") \
		_T("	sum(GPTuthi) as GPTuthi, ") \
		_T("  	sum(testfee+GPSinhthiet+GPTuthi) as Totaltestfee ,") \
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
		_T("  	sum(PTNoisoi+Phauthuat) as TongPhauthuat ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(bedfee) as bedfee ,") \
		_T("  	sum(cost) as cost,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("	sum(diffpaid) as diffpaid, ") \
		_T("	sum(patpaid+discount) as TotalInspaid, ") \
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
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("	hfi_receiver as userid, ") \
		_T("  	case when substr(hfe_group, 1, 1) in('A') and hfe_group  not in('A1400','A2000','A9000') then hfe_discount else 0 end as drugfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2000' then hfe_discount else 0 end as bloodfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A1400' then hfe_discount else 0 end as DrugK,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1' and substr(hfe_group, 1, 3) not in ('B1E','B1F') and hfe_hitech='N' then hfe_discount else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 3)='B1E' and hfe_hitech='N' then hfe_discount else 0 end as GPSinhthiet,") \
		_T("   	case when substr(hfe_group, 1, 3)='B1F' and hfe_hitech='N' then hfe_discount else 0 end as GPTuthi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B21' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeexq,") \
		_T("   	case when substr(hfe_group, 1, 3)='B24' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeeSADT,") \
		_T("   	case when substr(hfe_group, 1, 3)='B25' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeeSAMAU,") \
		_T("   	case when substr(hfe_group, 1, 3)='B31' and hfe_hitech='N' then hfe_discount else 0 end as Noisoi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B33' and hfe_hitech='N' then hfe_discount else 0 end as Dientim,") \
		_T("   	case when substr(hfe_group, 1, 3)='B34' and hfe_hitech='N' then hfe_discount else 0 end as Diennao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B35' and hfe_hitech='N' then hfe_discount else 0 end as DoHohap,") \
		_T("   	case when substr(hfe_group, 1, 3)='B36' and hfe_hitech='N' then hfe_discount else 0 end as Luuhuyetnao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B37' and hfe_hitech='N' then hfe_discount else 0 end as Dotimthai,") \
		_T("   	case when substr(hfe_group, 1, 3)='B22' and hfe_hitech='N' then hfe_discount else 0 end as CtyThuong ,") \
		_T("   	case when substr(hfe_group, 1, 3)='B22' and hfe_hitech='Y' then hfe_discount else 0 end as Cty64 ,") \
		_T("  	case when substr(hfe_group, 1, 2) ='B4' and hfe_hitech='N' then hfe_discount else 0 end as Phauthuat,") \
		_T("  	case when substr(hfe_group, 1, 2) ='B4' and hfe_hitech='Y' then hfe_discount else 0 end as PTNoisoi,") \
		_T("  	case when substr(hfe_group, 1, 2) ='B5' and hfe_group not in('B5500','B5600','B5700') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Thuthuat,") \
		_T("  	case when hfe_group = 'B5500' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as TNTThuong,") \
		_T("  	case when hfe_group = 'B5600' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as TNTLienDoanh,") \
		_T("  	case when hfe_group = 'B5700' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as TANSOI,") \
		_T("  	case when substr(hfe_group, 1, 3) <> 'B22' and hfe_hitech='Y' then hfe_discount else 0 end as hitechfee,") \
		_T("  	case when hfe_group='A9000' then hfe_discount else 0 end as materialfee,") \
		_T("	(select  sum(hb_treatqty) from hms_bed  where hb_docno =hfe_docno) as bedqty, ") \
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
		_T(" 	and hfi_class in('O') and hfe_discount > 0 %s %S ") \
		_T("  ) as tbl ") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
		_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T("  WHERE hcr_status ='T' and ho_type in('I','C') and length(hc_cardno) > 0") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno,address, insline,insgroup,linename,hdline, ") \
		_T("		regplace,deptid,regdate,expdate,recordno,admitdate,dischargedate , icd10, totaltreat,userid,idx ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline,cardno,idx,deptid,userid"), m_szFromDate, m_szToDate, szUserReceiver,szWhere);
	}

	
	//_fmsg(_T("%s"), szSQL);
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
	xls.SetColumnWidth(2,10);
	xls.SetColumnWidth(3,23);	
	xls.SetColumnWidth(4,17);
	xls.SetColumnWidth(5,6);
	xls.SetColumnWidth(6,30);
	xls.SetColumnWidth(7,10);
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,10);
	xls.SetColumnWidth(11,10);
	xls.SetColumnWidth(12,16);
	for (int i =13;i<=58;i++)
	{
		xls.SetColumnWidth(i,12);
	}
	
	

	xls.SetRowHeight(6,30);	
	xls.SetRowHeight(7,30);
	xls.SetRowHeight(8,20);

	xls.SetCellMergedColumns(0,3,22);
	xls.SetCellMergedColumns(0,4,22);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	TranslateString(_T("List of recommended payment of medical inpatients"), tmpStr);
	xls.SetCellText(0, 3, tmpStr,FMT_TEXT,true,18,0);	
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 4, szFromDateToDate,FMT_TEXT,true,12);

	int nRow = 6;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Sheet No"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);
	
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Birth Date"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(7, nRow, _T("Dept"), FMT_TEXT,true);

	xls.SetCellText(8, nRow, _T("Th\x1EA9m \x111\x1ECBnh"), FMT_TEXT,true);
	xls.SetCellText(9, nRow, _T("\x110i\x1EC1u \x63h\x1EC9nh"), FMT_TEXT,true);
	
	TranslateString(_T("Reg Date"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Exp Date Place ID"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Card Number"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Register Place ID"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT,true);
	
	TranslateString(_T("M\xE3 \x62\x1EC7nh"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("ICD 10"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT,true);
	
	TranslateString(_T("TT, \x110T"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("In Date"), tmpStr);
	xls.SetCellText(17, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Out Date"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Total Treatment"), tmpStr);
	xls.SetCellText(19, nRow, tmpStr, FMT_TEXT,true);	
	

	
	
	//Thuoc mau, thuoc k
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(37, nRow, tmpStr, FMT_TEXT,true);		
	TranslateString(_T("Blood"), tmpStr);
	xls.SetCellText(38, nRow, tmpStr, FMT_TEXT,true);	
	
	xls.SetCellText(46, nRow, _T("VTYT"), FMT_TEXT,true);	
	xls.SetCellText(47, nRow, _T("DVKTC"), FMT_TEXT,true);	
	TranslateString(_T("Drug K"), tmpStr);
	xls.SetCellText(48, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Bed Fee"), tmpStr);
	xls.SetCellText(49, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(50, nRow, _T("PhiVC"), FMT_TEXT,true);	
	
	TranslateString(_T("T\x1ED5ng CP BHYT"), tmpStr);	
	xls.SetCellText(51, nRow, tmpStr, FMT_TEXT,true);	
			
	// Benh nhan thanh toan	
	TranslateString(_T("\x43\xF9ng \x63hi tr\x1EA3"), tmpStr);
	xls.SetCellText(52, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("BN Tu t\xFA\x63 "), tmpStr);
	xls.SetCellText(55, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(56, nRow, tmpStr, FMT_TEXT,true);
	
	
	xls.SetCellText(57, nRow, _T("User"), FMT_TEXT,true);	
	xls.SetCellText(58, nRow, _T("RecordNo"), FMT_TEXT,true);

	xls.SetCellMergedColumns(20,nRow,4);	
	TranslateString(_T("\x58\xC9T NGHI\x1EC6M"), tmpStr); //XET NGHIEM
	xls.SetCellText(20, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(24,nRow,7);	
	TranslateString(_T("NH\xD3M TH\x102M \x44\xD2 \x43H\x1EE8\x43 N\x102NG"), tmpStr); // TDCN
	xls.SetCellText(24, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(31,nRow,6);
	TranslateString(_T("NH\xD3M \x43\x110H\x41"), tmpStr); //CDHA
	xls.SetCellText(31, nRow, tmpStr, FMT_TEXT,true);
	
	xls.SetCellMergedColumns(39,nRow,3);
	TranslateString(_T("PH\x1EAAU THU\x1EACT"), tmpStr); // Nhom thu thuat
	xls.SetCellText(39, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(42,nRow,4);
	TranslateString(_T("THU THU\x1EACT"), tmpStr); // Nhom thu thuat
	xls.SetCellText(42, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(53,nRow,2);
	TranslateString(_T("BHXH Th\x61nh to\xE1n"), tmpStr); // BHXH Thanh toan
	xls.SetCellText(53, nRow, tmpStr, FMT_TEXT,true);

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
	xls.SetCellMergedRows(14,nRow,2);
	xls.SetCellMergedRows(15,nRow,2);
	
	//xls.SetCellMergedRows(35,nRow,2);
	
	//xls.SetCellMergedRows(40,nRow,2);

	
	//xls.SetCellMergedRows(45,nRow,2);	
	xls.SetCellMergedRows(46,nRow,2);	
	xls.SetCellMergedRows(47,nRow,2);	
	xls.SetCellMergedRows(48,nRow,2);
	xls.SetCellMergedRows(49,nRow,2);
	
	xls.SetCellMergedRows(50,nRow,2);
	xls.SetCellMergedRows(51,nRow,2);	
	xls.SetCellMergedRows(51,nRow,2);	
	xls.SetCellMergedRows(52,nRow,2);	
	
	xls.SetCellMergedRows(55,nRow,2);
	xls.SetCellMergedRows(56,nRow,2);	
	xls.SetCellMergedRows(57,nRow,2);	
	xls.SetCellMergedRows(58,nRow,2);	
	
	
	
	

	
	nRow=7;	
	
	
	
	//Xet Nghiem
	xls.SetCellText(20, nRow, _T("T\x1ED5ng XN"), FMT_TEXT,true);	
	TranslateString(_T("GP Sinh thi\x1EBFt"), tmpStr);
	xls.SetCellText(21, nRow, _T("XN"), FMT_TEXT,true);	
	TranslateString(_T("GP Sinh thi\x1EBFt"), tmpStr);
	xls.SetCellText(22, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("GP T\x1EED thi"), tmpStr);
	xls.SetCellText(23, nRow, tmpStr, FMT_TEXT,true);	

	
	//Nhom TDCN
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(24, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(25, nRow, _T("N\x1ED9i soi"), FMT_TEXT,true);	//Noi soi
	xls.SetCellText(26, nRow, _T("\x110i\x1EC7n tim"), FMT_TEXT,true); // Dien tim
	TranslateString(_T("\x110i\x1EC7n n\xE3o"), tmpStr); // Dien nao
	xls.SetCellText(27, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(28, nRow, _T("\x110o CNHH"), FMT_TEXT,true);	//Do chuc nang HH
	xls.SetCellText(29, nRow, _T("\x110o DLXuong"), FMT_TEXT,true); // Do do loang xuong
	TranslateString(_T("\x110o TT"), tmpStr);// Do tim thai
	xls.SetCellText(30, nRow, tmpStr, FMT_TEXT,true);
	//Nhom CDHA
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(31, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("X.Quang"), tmpStr); // Q. Quang
	xls.SetCellText(32, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Si\xEAu \xE2m \x110T"), tmpStr); //Sieu am DT
	xls.SetCellText(33, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(34, nRow, _T("Si\xEAu \xE2m m\xE0u"), FMT_TEXT,true); //Sieu AM mau

	TranslateString(_T("Cty Th\x1B0\x1EDDng"), tmpStr); //CTY Thuong
	xls.SetCellText(35, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(36, nRow, _T("Cty 64 LAT"), FMT_TEXT,true); //CTy 64 LAT
	
	// phau thuat
	
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

	// BHYT thanh toan
	TranslateString(_T("S\x1ED1 ti\x1EC1n"), tmpStr);	
	xls.SetCellText(53, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Trong \x111\xF3 ngo\xE0i qu\x1EF9 \x111\x1ECBnh su\x1EA5t"), tmpStr);	
	xls.SetCellText(54, nRow, tmpStr, FMT_TEXT,true);
	
	

	int nIndex = 0,nIdx=0;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine;
	CString szNewDocno, szOldDocno;


	long double grpCost[60];
	long double grpLine[60];
	long double ttlCost[60];
	long double grpOfLine[60];
	double cost = 0;
	nRow++;
	for (int i =0; i < 59; i++)
	{
		tmpStr.Format(_T("%d"), i);
		xls.SetCellText(i, nRow,tmpStr,FMT_INTEGER,true);
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i]=0;
	}
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("insline"), szNewLine);		
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField,szAmount;
			if(grpOfLine[56] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				xls.SetCellMergedColumns(1,nRow,13);
				tmpStr.Format(_T("%s"),szAmount );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i =20; i < 57; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}			
			
			if(grpCost[56] > 0){
				nRow ++;
				CString szField, szAmount;
				TranslateString(_T("Total Line"), szAmount);
				tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
				xls.SetCellMergedColumns(1,nRow,13);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11);
				for (int i =20; i < 57; i++)
				{			
					tmpStr.Format(_T("%.2f"),grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,11);
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;						
				}
			}

			if(grpLine[56] > 0)
			{			
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(1,nRow,13);
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);				
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,12);
				for (int i =20; i < 57; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,12);				
					grpLine[i] = 0;					
				}
			}

			nRow++;
			rs.GetValue(_T("linename"), szLineName);
			xls.SetCellMergedColumns(0,nRow,33);
			tmpStr.Format(_T("%s"),  szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));			
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,12);
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");			
		}
			
		// Nhom bao hiem (I, II, II)
		rs.GetValue(_T("insgroup"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty()){
			CString szField,szAmount;

			if(grpOfLine[56] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				xls.SetCellMergedColumns(1,nRow,13);
				tmpStr.Format(_T("%s"),szAmount );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i =20; i < 57; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}

			if(grpLine[56] > 0)
			{
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(1,nRow,13);
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11);			
				for (int i =20; i < 57; i++)
				{
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,11);
					grpLine[i] = 0;						
				}
			}

			nRow++;
			xls.SetCellMergedColumns(0,nRow,36);
			tmpStr.Format(_T("%s"), szNewGroup +_T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,11);
			szOldGroup = szNewGroup;	
			szOldOfLine = _T("xxxx");			
		}
		
		//Dung tuyen hay trai tuyen
		rs.GetValue(_T("hdline"), szNewOfLine);
		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[56] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				xls.SetCellMergedColumns(1,nRow,13);
				tmpStr.Format(_T("%s"),szAmount );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i =20; i < 57; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}
			
			if (szNewOfLine == _T("0") )
				tmpStr.Format(_T("%s"), lszLine[0]);
			else
				tmpStr.Format(_T("%s"), lszLine[1]);
			nRow++;
			xls.SetCellMergedColumns(0,nRow,36);
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true);
			szOldOfLine = szNewOfLine;			
		}

		// Merged the so ho so
		rs.GetValue(_T("docno"), szNewDocno);		
		if(szNewDocno != szOldDocno && !szNewDocno.IsEmpty())
		{		
			szOldDocno = szNewDocno;
			xls.MergeCell(nRow-nIdx+1,0,nRow+1,0);
			nIndex++;
			nIdx=0;
		}

		
		nRow++;
		nIdx++;
		tmpStr.Format(_T("%d"), nIndex);		
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER,false);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_INTEGER,false);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_INTEGER,false);		
		rs.GetValue(_T("Address"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);		
		tmpStr = CDate::Convert(rs.GetValue(_T("regdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(10, nRow, tmpStr, FMT_DATE,false);
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(11, nRow, tmpStr, FMT_DATE,false);		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,false);		
		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr, FMT_INTEGER,false);		
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(15, nRow, tmpStr, FMT_TEXT,false);
		tmpStr.Format(_T("%s"), rs.GetValue(_T("hdline")));
		xls.SetCellText(16, nRow, tmpStr, FMT_INTEGER,false);		
		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(17, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(18, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("totaltreat"), tmpStr);
		xls.SetCellText(19, nRow, tmpStr, FMT_INTEGER);			
				
		
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

		rs.GetValue(_T("GpSinhthiet"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(22, nRow, tmpStr, FMT_NUMBER1,false);	
	
		rs.GetValue(_T("GPTuthi"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		grpOfLine[23] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(23, nRow, tmpStr, FMT_NUMBER1,false);	
// TDCN
		rs.GetValue(_T("tdcnfee"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		grpOfLine[24] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(24,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Noisoi"), cost);
		grpCost[25] += cost;
		grpLine[25] += cost;
		grpOfLine[25] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(25,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dientim"), cost);
		grpCost[26] += cost;
		grpLine[26] += cost;
		grpOfLine[26] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(26,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Diennao"), cost);
		grpCost[27] += cost;
		grpLine[27] += cost;
		grpOfLine[27] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(27,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dohohap"), cost);
		grpCost[28] += cost;
		grpLine[28] += cost;
		grpOfLine[28] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(28,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("Luuhuyetnao"), cost);
		grpCost[29] += cost;
		grpLine[29] += cost;
		grpOfLine[29] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(29,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dotimthai"), cost);
		grpCost[30] += cost;
		grpLine[30] += cost;
		grpOfLine[30] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(30,nRow,tmpStr,FMT_NUMBER1);	
// CDHA
		rs.GetValue(_T("pacsfee"), cost);
		grpCost[31] += cost;
		grpLine[31] += cost;
		grpOfLine[31] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(31,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacsfeexq"), cost);
		grpCost[32] += cost;
		grpLine[32] += cost;
		grpOfLine[32] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(32,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacsfeeSADT"), cost);
		grpCost[33] += cost;
		grpLine[33] += cost;
		grpOfLine[33] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(33,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsfeeSAMAU"), cost);
		grpCost[34] += cost;
		grpLine[34] += cost;
		grpOfLine[34] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(34,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("CtyThuong"), cost);
		grpCost[35] += cost;
		grpLine[35] += cost;
		grpOfLine[35] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(35,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("Cty64"), cost);
		grpCost[36] += cost;
		grpLine[36] += cost;
		grpOfLine[36] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(36,nRow,tmpStr,FMT_NUMBER1);
		
			//---- thuoc
		rs.GetValue(_T("drugfee"), cost);
		grpCost[37] += cost;
		grpLine[37] += cost;
		grpOfLine[37] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(37, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("bloodfee"), cost);
		grpCost[38] += cost;
		grpLine[38] += cost;
		grpOfLine[38] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(38, nRow, tmpStr, FMT_NUMBER1,false);


		rs.GetValue(_T("TongPhauthuat"), cost);
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
	
		
		///----------------------------------------
		rs.GetValue(_T("materialfee"), cost);
		grpCost[46] += cost;
		grpLine[46] += cost;
		grpOfLine[46] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(46, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[47] += cost;
		grpLine[47] += cost;
		grpOfLine[47] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(47, nRow, tmpStr, FMT_NUMBER1,false);	
		
		rs.GetValue(_T("drugk"), cost);
		grpCost[48] += cost;
		grpLine[48] += cost;
		grpOfLine[48] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(48, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("bedfee"), cost);
		grpCost[49] += cost;
		grpLine[49] += cost;
		grpOfLine[49] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(49, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[50] += cost;
		grpLine[50] += cost;
		grpOfLine[50] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(50, nRow, tmpStr, FMT_NUMBER1,false);		
		
		rs.GetValue(_T("Totalinspaid"), cost);
		grpCost[51] += cost;
		grpLine[51] += cost;
		grpOfLine[51] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(51, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("patpaid"), cost);
		grpCost[52] += cost;
		grpLine[52] += cost;
		grpOfLine[52] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(52, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("inspaid"), cost);
		grpCost[53] += cost;
		grpLine[53] += cost;
		grpOfLine[53] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(53, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("diffpaid"), cost);
		grpCost[55] += cost;
		grpLine[55] += cost;
		grpOfLine[55] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(55, nRow, tmpStr, FMT_NUMBER1,false);

		
		
		
		
		rs.GetValue(_T("cost"), cost);
		grpCost[56] += cost;
		grpLine[56] += cost;
		grpOfLine[56] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(56, nRow, tmpStr, FMT_NUMBER1,false);

		

		
		rs.GetValue(_T("Userid"), tmpStr);
		xls.SetCellText(57, nRow, tmpStr, FMT_TEXT);

	
		rs.GetValue(_T("recordno"), tmpStr);
		xls.SetCellText(58, nRow, tmpStr, FMT_INTEGER);

		rs.MoveNext();
	}

	for (int i =0; i < 57; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if(grpOfLine[56] > 0)
	{
		CString szAmount;
		nRow++;
		TranslateString(_T("\x43\x1ED9ng:"), szAmount);
		xls.SetCellMergedColumns(1,nRow,13);
		tmpStr.Format(_T("%s"),szAmount );
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
		for (int i =20; i < 57; i++)
		{
			tmpStr.Format(_T("%.2f"),grpOfLine[i]);
			xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
			grpOfLine[i] = 0;						
		}
	}
	
	if(grpLine[56] > 0){
		nRow ++;
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		tmpStr.Format(_T("%s (%s)"),szAmount , szOldGroup);
		xls.SetCellMergedColumns(1,nRow,13);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true,11);
		for (int i =20; i < 57; i++)
		{				
			tmpStr.Format(_T("%.2f"),grpLine[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true,11);
		}	
	}
	
	if(grpCost[56] > 0){
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
		xls.SetCellMergedColumns(1,nRow,13);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,12);
		for (int i =20; i < 57; i++)
		{			
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,12);
		}
	}

	
	if(ttlCost[56] > 0){
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Amount "), szAmount);	
		tmpStr.Format(_T("%s :"),szAmount );
		xls.SetCellMergedColumns(1,nRow,13);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,13);
		for (int i =20; i < 57; i++)
		{			
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,13);
		}

	}
	xls.Save(_T("Exports\\Bang ke CP benh nhan dieu tri ngoai tru trong khoa(BHYT26a).xls"));
	EndWaitCursor();
	
}