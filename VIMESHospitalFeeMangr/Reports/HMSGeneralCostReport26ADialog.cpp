#include "HMSGeneralCostReport26ADialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostReport26ADialog * )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostReport26ADialog * )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkAddNew();
}*/

static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnDeptLoadData();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnAddHMSGeneralCostReportDialog();
} 
static int _OnEditHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnEditHMSGeneralCostReportDialog();
} 
static int _OnDeleteHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnDeleteHMSGeneralCostReportDialog();
} 
static int _OnSaveHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnSaveHMSGeneralCostReportDialog();
} 
static int _OnCancelHMSGeneralCostReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnCancelHMSGeneralCostReportDialog();
} 
CHMSGeneralCostReport26ADialog ::CHMSGeneralCostReport26ADialog (CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle = _T("General Treatment Cost 26A Report");
	SetDefaultValues();
}
CHMSGeneralCostReport26ADialog ::~CHMSGeneralCostReport26ADialog (){
}
void CHMSGeneralCostReport26ADialog ::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 400, 160);
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
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 110, 155);
	m_wndDept.Create(this,115, 120, 395, 155); 

	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 65, 165, 145, 190);
	m_wndPrint.Create(this, _T("&Print"), 150, 165, 230, 190);
	m_wndExport.Create(this, _T("&Export"), 235, 165, 315, 190);
	m_wndClose.Create(this, _T("&Close"), 320, 165, 400, 190);

}
void CHMSGeneralCostReport26ADialog ::OnInitializeComponents(){
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
void CHMSGeneralCostReport26ADialog ::OnSetWindowEvents(){
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
void CHMSGeneralCostReport26ADialog ::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CHMSGeneralCostReport26ADialog ::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralCostReport26ADialog ::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralCostReport26ADialog ::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();

}
int CHMSGeneralCostReport26ADialog ::SetMode(int nMode){
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
/*void CHMSGeneralCostReport26ADialog ::OnYearChange(){
	
} */
/*void CHMSGeneralCostReport26ADialog ::OnYearSetfocus(){
	
} */
/*void CHMSGeneralCostReport26ADialog ::OnYearKillfocus(){
	
} */
int CHMSGeneralCostReport26ADialog ::OnYearCheckValue(){
	return 0;
} 
void CHMSGeneralCostReport26ADialog ::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostReport26ADialog ::OnReportPeriodSelendok(){
	
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
/*void CHMSGeneralCostReport26ADialog ::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSGeneralCostReport26ADialog ::OnReportPeriodKillfocus(){
	
}*/
long CHMSGeneralCostReport26ADialog ::OnReportPeriodLoadData(){
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
/*void CHMSGeneralCostReport26ADialog ::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSGeneralCostReport26ADialog ::OnFromDateChange(){
	
} */
/*void CHMSGeneralCostReport26ADialog ::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralCostReport26ADialog ::OnFromDateKillfocus(){
	
} */
int CHMSGeneralCostReport26ADialog ::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralCostReport26ADialog ::OnToDateChange(){
	
} */
/*void CHMSGeneralCostReport26ADialog ::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralCostReport26ADialog ::OnToDateKillfocus(){
	
} */
int CHMSGeneralCostReport26ADialog ::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralCostReport26ADialog ::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostReport26ADialog ::OnClerkSelendok(){
	 
}
/*void CHMSGeneralCostReport26ADialog ::OnClerkSetfocus(){
	
}*/
/*void CHMSGeneralCostReport26ADialog ::OnClerkKillfocus(){
	
}*/
long CHMSGeneralCostReport26ADialog ::OnClerkLoadData(){
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
/*void CHMSGeneralCostReport26ADialog ::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

long CHMSGeneralCostReport26ADialog ::OnDeptLoadData(){
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

void CHMSGeneralCostReport26ADialog ::OnPrintPreviewSelect(){	
	UpdateData(true);
	PrintGeneralCost26AReport(m_szReportPeriodKey,m_szFromDate,m_szToDate,true);
	UpdateData(false);
} 
void CHMSGeneralCostReport26ADialog ::OnPrintSelect(){	
	PrintGeneralCost26AReport(m_szReportPeriodKey,m_szFromDate,m_szToDate,false);	
} 
void CHMSGeneralCostReport26ADialog ::OnExportSelect(){	
	UpdateData(true);
	ExportToExcell26AReport(m_szReportPeriodKey,m_szFromDate,m_szToDate,m_bPreview);		
	UpdateData(false);
} 
void CHMSGeneralCostReport26ADialog ::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSGeneralCostReport26ADialog ::OnAddHMSGeneralCostReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralCostReport26ADialog ::OnEditHMSGeneralCostReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralCostReport26ADialog ::OnDeleteHMSGeneralCostReportDialog(){
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
int CHMSGeneralCostReport26ADialog ::OnSaveHMSGeneralCostReportDialog(){
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
int CHMSGeneralCostReport26ADialog ::OnCancelHMSGeneralCostReportDialog(){
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
int CHMSGeneralCostReport26ADialog ::OnHMSGeneralCostReportDialogListLoadData(){
	return 0;
}
void CHMSGeneralCostReport26ADialog::PrintGeneralCost26AReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview)
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,szUserReceiver;
	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."), _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};
	
	szWhere.Empty();
	
	UpdateData(true);

	if(!rpt.Init(_T("Reports/HMS/HF_GENERALCOSTOFINPATIENT80AREPORT.RPT")) )
		return;

	if (!m_wndClerk.GetCurrent(0).IsEmpty())
		szUserReceiver.Format(_T(" and hfi_receiver ='%s' "), m_wndClerk.GetCurrent(0));

	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T(" and hfe_deptid ='%s' "), m_szDeptKey);

	if (pMF->m_szDiscountPrintReport !=_T("Y"))
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_line as insline,") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hcr_admitdate) as admitdate, ") \
		_T(" 	date(hcr_dischargedate) as dischargedate, ") \
		_T(" 	bedqty as totaltreat, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("	sum(drugfeek) as drugfeek ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(cost-diffpaid) as cost,") \
		_T("  	sum(bedfee) as bedfee ,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfi_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 2)in('A1','A3') and (hfe_group <> 'A1400') then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
		_T("  	case when hfe_group ='A1400'then hfe_cost-hfe_diffcost else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_cost-hfe_diffcost else 0 end as materialfee,") \
		_T("	(select  sum(hb_treatqty) from hms_bed  where hb_docno =hfe_docno) as bedqty, ") \
		_T("  	case when hfe_group='C0000' then hfe_cost-hfe_diffcost else 0 end as bedfee,") \
		_T("  	case when hfe_group='F0000' then hfe_cost-hfe_diffcost else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfe_status='P' ") \
		_T("	and hfe_type not in('E')") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') ") \
		_T(" 	and hfi_type='P' and hfe_group<>'D0000' ") \
		_T(" 	and hfi_class in('I','O') and hfe_discount > 0 %s %s ") \
		_T("  ) as tbl ") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
		_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T("  WHERE hcr_status ='T' and ho_type in('I','C') and length(hc_cardno) > 0") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline,insgroup,linename,hdline, regplace, icd10, admitdate, dischargedate, totaltreat ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline,cardno"), szFromDate, szToDate, szUserReceiver, szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_line as insline,") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hcr_admitdate) as admitdate, ") \
		_T(" 	date(hcr_dischargedate) as dischargedate, ") \
		_T(" 	bedqty as totaltreat, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("	sum(drugfeek) as drugfeek ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(discount) as cost,") \
		_T("  	sum(bedfee) as bedfee ,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfi_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 2)in('A1','A3') and (hfe_group <> 'A1400') then hfe_discount else 0 end as drugfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_discount else 0 end as bloodfee,") \
		_T("  	case when hfe_group ='A1400'then hfe_discount else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_discount else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_discount else 0 end as pacsfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_discount else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_discount else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_discount else 0 end as materialfee,") \
		_T("	(select  sum(hb_treatqty) from hms_bed  where hb_docno =hfe_docno) as bedqty, ") \
		_T("  	case when hfe_group='C0000' then hfe_discount else 0 end as bedfee,") \
		_T("  	case when hfe_group='F0000' then hfe_discount else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfe_status='P' ") \
		_T("	and hfe_type not in('E')") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') ") \
		_T(" 	and hfi_type='P' and hfe_group<>'D0000' ") \
		_T(" 	and hfi_class in('I','O') and hfe_discount > 0 %s %s ") \
		_T("  ) as tbl ") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
		_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T("  WHERE hcr_status ='T' and ho_type in('I','C') and length(hc_cardno) > 0") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline,insgroup,linename,hdline, regplace, icd10, admitdate, dischargedate, totaltreat ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline,cardno"), szFromDate, szToDate, szUserReceiver, szWhere);
			
	}
	
	UpdateData(false);
	//_fmsg(_T("%s"), szSQL);

	BeginWaitCursor();	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No Data"), MB_OK);
		return ;
	}	

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr = pMF->GetDepartmentName(m_szDeptKey);
	rpt.GetReportHeader()->SetValue(_T("Dept"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	rs.GetValue(_T("invoiceno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine, szSumOfline;
	CReportSection* rptDetail;
	long double grpCost[25];
	long double grpLine[25];
	long double ttlCost[25];
	long double grpOfLine[25];
	double cost = 0;
	for (int i =0; i < 25; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i] = 0;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("insline"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[22] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =12; i < 25; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}

					
			if(grpCost[22] > 0)
			{					
				TranslateString(_T("Total Line"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szLineName);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =12; i < 25; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;				
				}
			}

			if(grpLine[22] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =12; i < 25; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpLine[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(12);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rs.GetValue(_T("linename"), szLineName);
			rptDetail->SetValue(_T("InsuranceLine"), szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));		
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}
		rs.GetValue(_T("insgroup"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[22] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =12; i < 25; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}

			if(grpLine[22] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =12; i < 25; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpLine[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),szNewGroup +_T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			szOldGroup = szNewGroup;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}	

		rs.GetValue(_T("hdline"), szNewOfLine);
		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[22] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =12; i < 25; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}

			if (szNewOfLine == _T("0") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("a");
			}
			else
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("b");
			}
			
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),tmpStr);
			szOldOfLine = szNewOfLine;			
			nIndex=1;
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
		rptDetail->SetValue(_T("8"), tmpStr);
		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("9"), tmpStr);
		tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("totaltreat"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);				
		
		rs.GetValue(_T("testfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		grpOfLine[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		
		rs.GetValue(_T("drugfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		grpOfLine[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("normtechfee"), cost);		
		grpCost[16] += cost;
		grpLine[16] += cost;
		grpOfLine[16] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("materialfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("drugfeek"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);

		rs.GetValue(_T("bedfee"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		grpOfLine[21] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);
		
		rs.GetValue(_T("cost"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);	
		

		rs.GetValue(_T("patpaid"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		grpOfLine[23] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		grpOfLine[24] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr);
		rs.MoveNext();
	}
	for (int i =12; i < 25; i++)
	{
			ttlCost[i] += grpCost[i];
	}

	if(grpOfLine[22] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("\x43\x1ED9ng"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =12; i < 25; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpOfLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);					
			grpOfLine[i] = 0;
		}
	}

	if(grpLine[22] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =12; i < 25; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}

	if(grpCost[22] > 0){		
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =12; i < 25; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[22] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount:"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i =0; i < 25; i++)
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
	
	EndWaitCursor();
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}


void CHMSGeneralCostReport26ADialog::ExportToExcell26AReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,szUserReceiver,szFromDateToDate, szTmp;
	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."), _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};
	
	szWhere.Empty();	
	UpdateData(true);
	if (!m_wndClerk.GetCurrent(0).IsEmpty())
		szUserReceiver.Format(_T(" and hfi_receiver ='%s' "), m_wndClerk.GetCurrent(0));
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T(" and hfe_deptid ='%s' "), m_szDeptKey);


	if (pMF->m_szDiscountPrintReport != _T("Y"))
	{
		szSQL.Format(__T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	hms_getaddress(hp_provid, hp_distid, hp_villid) as dtladdr,") \
		_T("	hd_emergency as emergency,") \
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regdate as regdate,") \
		_T("  	hc_expdate as expdate,") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_line as insline,") \
		_T("	hfi_deptid as deptid, ") \
		_T("	hcr_recordno as recordno, ") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hcr_admitdate) as admitdate, ") \
		_T(" 	date(hcr_dischargedate) as dischargedate, ") \
		_T(" 	bedqty as totaltreat, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("	sum(drugfeek) as drugfeek ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(cost-diffpaid) as cost,") \
		_T("  	sum(bedfee) as bedfee ,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfi_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 2)in('A1','A3') and (hfe_group <> 'A1400') then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
		_T("  	case when hfe_group ='A1400'then hfe_cost-hfe_diffcost else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_cost-hfe_diffcost else 0 end as materialfee,") \
		_T("	(select  sum(hb_treatqty) from hms_bed  where hb_docno =hfe_docno) as bedqty, ") \
		_T("  	case when hfe_group='C0000' then hfe_cost-hfe_diffcost else 0 end as bedfee,") \
		_T("  	case when hfe_group='F0000' then hfe_cost-hfe_diffcost else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfe_status='P' ") \
		_T("	and hfe_type not in('E')") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') ") \
		_T(" 	and hfi_type='P' and hfe_group<>'D0000' ") \
		_T(" 	and hfi_class in('I','O') and hfe_discount > 0 %s %S ") \
		_T("  ) as tbl ") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
		_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T("  WHERE hcr_status ='T' and ho_type in('I','C') and length(hc_cardno) > 0") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline,insgroup,linename,hdline,regplace,deptid,recordno, icd10, admitdate, dischargedate, totaltreat, dtladdr, emergency, regdate, expdate ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline,cardno"), szFromDate, szToDate, szUserReceiver,szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	hms_getaddress(hp_provid, hp_distid, hp_villid) as dtladdr,") \
		_T("	hd_emergency as emergency,") \
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_regdate as regdate,") \
		_T("  	hc_expdate as expdate,") \
		_T("	hfi_deptid as deptid, ") \
		_T("	hcr_recordno as recordno, ") \
		_T("  	hc_line as insline,") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hcr_admitdate) as admitdate, ") \
		_T(" 	date(hcr_dischargedate) as dischargedate, ") \
		_T(" 	bedqty as totaltreat, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("	sum(drugfeek) as drugfeek ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(discount) as cost,") \
		_T("  	sum(bedfee) as bedfee ,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfi_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 2)in('A1','A3') and (hfe_group <> 'A1400') then hfe_discount else 0 end as drugfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_discount else 0 end as bloodfee,") \
		_T("  	case when hfe_group ='A1400'then hfe_discount else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_discount else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_discount else 0 end as pacsfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_discount else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_discount else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_discount else 0 end as materialfee,") \
		_T("	(select  sum(hb_treatqty) from hms_bed  where hb_docno =hfe_docno) as bedqty, ") \
		_T("  	case when hfe_group='C0000' then hfe_discount else 0 end as bedfee,") \
		_T("  	case when hfe_group='F0000' then hfe_discount else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfe_status='P' ") \
		_T("	and hfe_type not in('E')") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') ") \
		_T(" 	and hfi_type='P' and hfe_group<>'D0000' ") \
		_T(" 	and hfi_class in('I','O') and hfe_discount > 0 %s %s ") \
		_T("  ) as tbl ") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
		_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T("  WHERE hcr_status ='T' and ho_type in('I','C') and length(hc_cardno) > 0") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline,insgroup,linename,hdline, regplace,deptid,recordno, icd10, admitdate, dischargedate, totaltreat, dtladdr, emergency, regdate, expdate ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline,cardno"), szFromDate, szToDate, szUserReceiver, szWhere);			
	}

	UpdateData(false);
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
	xls.SetColumnWidth(1,26);
	xls.SetColumnWidth(2,9);
	xls.SetColumnWidth(3,5);
	xls.SetColumnWidth(4,51);
	xls.SetColumnWidth(5,17);
	xls.SetColumnWidth(6,13);
	xls.SetColumnWidth(7,12);
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,10);
	xls.SetColumnWidth(11,10);
	xls.SetColumnWidth(12,10);
	xls.SetColumnWidth(13,15);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,12);
	xls.SetColumnWidth(17,12);
	xls.SetColumnWidth(18,12);
	xls.SetColumnWidth(19,12);
	xls.SetColumnWidth(20,12);
	xls.SetColumnWidth(21,17);
	xls.SetColumnWidth(22,12);
	xls.SetColumnWidth(23,12);
	xls.SetColumnWidth(24,14);
	xls.SetColumnWidth(25,14);
	xls.SetColumnWidth(26,14);
	xls.SetColumnWidth(27,21);
	xls.SetColumnWidth(28,9);
	xls.SetColumnWidth(29,9);
	xls.SetColumnWidth(30,13);
	//xls.SetRowHeight(8,30);	
	//xls.SetRowHeight(9,30);	
	
	
	xls.SetCellMergedColumns(0,1,8);
	xls.SetCellMergedColumns(0,2,8);
	xls.SetCellMergedColumns(0,3,8);
	xls.SetCellMergedColumns(0,5,31);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	xls.SetCellText(0,3, pMF->GetDepartmentName(m_szDeptKey),true);
	TranslateString(_T("List of recommended payment of medical inpatients"), tmpStr);
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,18);
	xls.SetCellMergedColumns(0,6,31);
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 6, szFromDateToDate,FMT_TEXT,true,12);


	int nRow = 8;
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
	xls.SetCellMergedRows(25,nRow,2);
	xls.SetCellMergedRows(26,nRow,2);
	xls.SetCellMergedRows(27,nRow,2);
	xls.SetCellMergedRows(28,nRow,2);
	xls.SetCellMergedRows(29,nRow,2);
	xls.SetCellMergedRows(30,nRow,2);
	
	xls.SetCellMergedColumns(14,nRow,11);

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Birth Date"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(4, nRow, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER, true, 10);
	TranslateString(_T("Card Number"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(6, nRow, _T("Ng\xE0y \x111\x103ng k\xFD"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(7, nRow, _T("Ng\xE0y h\x1EBFt h\x1EA1n"), FMT_TEXT | FMT_CENTER, true, 10);
	TranslateString(_T("Register Place ID"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);		
	TranslateString(_T("ICD 10"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);
	TranslateString(_T("In Date"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Out Date"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Total Treatment"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	nRow=9;
	TranslateString(_T("Medical expenses incurred at medical care facilities"), tmpStr);
	xls.SetCellText(14, nRow-1, tmpStr, FMT_TEXT|FMT_CENTER, true);	
	xls.SetCellText(14, nRow, _T("XN,CDCN"), FMT_TEXT|FMT_CENTER,true);	
	xls.SetCellText(15, nRow, _T("CDHA"), FMT_TEXT|FMT_CENTER,true);
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Blood"), tmpStr);
	xls.SetCellText(17, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("TT, PT"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(19, nRow, _T("VTYT"), FMT_TEXT|FMT_CENTER,true);	
	xls.SetCellText(20, nRow, _T("DVKTC"), FMT_TEXT|FMT_CENTER,true);	
	xls.SetCellText(21, nRow, _T("Thuoc K, Thai gep"), FMT_TEXT|FMT_CENTER,true);
	TranslateString(_T("Bed Amount Fee"), tmpStr);
	xls.SetCellText(22, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);	;	
	xls.SetCellText(23, nRow, _T("Phi VC"), FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(24, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true);
	TranslateString(_T("Difference Receipt"), tmpStr);
	xls.SetCellText(25, nRow - 1, tmpStr, FMT_TEXT|FMT_CENTER,true);	
	TranslateString(_T("Insurance Paid"), tmpStr);	
	xls.SetCellText(26, nRow - 1, tmpStr, FMT_TEXT|FMT_CENTER,true);
	TranslateString(_T("Trong do ngoai quy DS"), tmpStr);	
	xls.SetCellText(27, nRow - 1, tmpStr, FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(28, nRow - 1, _T("Kho\x61"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(29, nRow - 1, _T("S\x1ED1 l\x1B0u tr\x1EEF"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(30, nRow - 1, _T("L\xFD \x64o v\xE0o vi\x1EC7n"), FMT_TEXT|FMT_CENTER,true);

	int nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine, szSumOfline;
	
	long double grpCost[31];
	long double grpLine[31];
	long double grpOfLine[31];
	long double ttlCost[31];
	double cost = 0;
	for (int i =0; i < 31; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i] = 0;
	}
	while(!rs.IsEOF())
	{			
		rs.GetValue(_T("insline"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField,szAmount;			
			if(grpOfLine[24] > 0)
			{			
				nRow++;
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				xls.SetCellMergedColumns(1, nRow, 13);
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);				
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);
				for (int i = 14; i < 31; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,10,0);					
					grpOfLine[i] = 0;					
				}
			}
			
			if(grpCost[24] > 0)
			{
				nRow ++;
				CString szField, szAmount;
				TranslateString(_T("Total Line"), szAmount);
				tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
				xls.SetCellMergedColumns(1, nRow, 13);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
				for (int i = 14; i < 31; i++)
				{			
					tmpStr.Format(_T("%.2f"),grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,11,0);	
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;	
				}
			}
			
			if(grpLine[24] > 0)
			{			
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(1, nRow, 13);
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);				
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);
				for (int i = 14; i < 31; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,10,0);					
					grpLine[i] = 0;					
				}
			}

			nRow++;
			xls.SetCellMergedColumns(0, nRow, 31);
			rs.GetValue(_T("linename"), szLineName);
			tmpStr.Format(_T("%s"),  szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));			
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,12,0);
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}

		rs.GetValue(_T("insgroup"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			CString szField,szAmount;
			if(grpOfLine[24] > 0)
			{			
				nRow++;
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				xls.SetCellMergedColumns(1, nRow, 13);
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);				
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);
				for (int i = 14; i < 31; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,10,0);					
					grpOfLine[i] = 0;					
				}
			}

			if(grpLine[24] > 0)
			{
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(1, nRow, 13);
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);				
				for (int i = 14; i < 31; i++)
				{
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpLine[i] = 0;						
				}
			}
			nRow++;
			xls.SetCellMergedColumns(0, nRow, 31);
			tmpStr.Format(_T("%s"), szNewGroup +_T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,11,0);
			szOldGroup = szNewGroup;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}

		//Dung tuyen hay benh nhan trai tuyen
		rs.GetValue(_T("hdline"), szNewOfLine);
		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty())
		{
			CString szField,szAmount;
			if(grpOfLine[24] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				xls.SetCellMergedColumns(1, nRow, 13);
				tmpStr.Format(_T("%s (%s)"),szAmount, szSumOfline );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i = 14; i < 31; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}
			
			if (szNewOfLine == _T("0") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("a");
			}
			else
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("b");
			}

			nRow++;
			xls.SetCellMergedColumns(0, nRow, 31);
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true);
			szOldOfLine = szNewOfLine;
			nIndex=1;
		}

		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dtladdr"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("regdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_INTEGER);
		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("totaltreat"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("testfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		grpOfLine[14] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(14, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		grpOfLine[16] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(16, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("normtechfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(18, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("materialfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(19, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(20, nRow, tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("drugfeek"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		grpOfLine[21] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(21, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("bedfee"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(22, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		grpOfLine[23] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(23, nRow, tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("cost"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		grpOfLine[24] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(24, nRow, tmpStr, FMT_NUMBER1);		
		
		rs.GetValue(_T("patpaid"), cost);
		grpCost[25] += cost;
		grpLine[25] += cost;
		grpOfLine[25] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(25, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[26] += cost;
		grpLine[26] += cost;
		grpOfLine[26] += cost;
		tmpStr.Format(_T("%.2f"),cost );
		xls.SetCellText(26, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(28, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("recordno"), tmpStr);
		xls.SetCellText(29, nRow, tmpStr, FMT_INTEGER);

		if (rs.GetValue(_T("emergency")).Trim() == _T("Y"))
			xls.SetCellText(30, nRow, _T("2"), FMT_INTEGER);

		rs.MoveNext();
	}
	for (int i =0; i < 31; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if(grpOfLine[24] > 0)
	{	
		CString szField,szAmount;
		nRow++;
		TranslateString(_T("\x43\x1ED9ng"), szAmount);
		xls.SetCellMergedColumns(1, nRow, 13);
		tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);				
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);
		for (int i = 14; i < 31; i++)
		{					
			tmpStr.Format(_T("%.2f"),grpOfLine[i]);
			xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,10,0);					
			grpOfLine[i] = 0;					
		}
	}

	if(grpLine[24] > 0)
	{
		nRow ++;
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		tmpStr.Format(_T("%s (%s)"),szAmount , szOldGroup);
		xls.SetCellMergedColumns(0, nRow, 14);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,10,0);
		for (int i = 14; i < 31; i++)
		{			
			tmpStr.Format(_T("%.2f"),grpLine[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,10,0);
		}	
	}

	if(grpCost[24] > 0)
	{
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
		xls.SetCellMergedColumns(0, nRow, 14);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,10,0);
		for (int i = 14; i < 31; i++)
		{			
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,10,0);
		}
	
	}
	if(ttlCost[24] > 0)
	{
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);	
		tmpStr.Format(_T("%s :"),szAmount );
		xls.SetCellMergedColumns(0, nRow, 14);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,12,0);
		for (int i = 14; i < 31; i++)
		{			
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,12,0);
		}

	}
	
	xls.Save(_T("Exports\\ChiphikhambenhBHYT_26a.xls"));
	EndWaitCursor();
	
}