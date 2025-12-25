#include "HMSDiseaseActivitiesReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDiseaseActivitiesReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDiseaseActivitiesReportDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSDiseaseActivitiesReportDialog *pVw = (CHMSDiseaseActivitiesReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDiseaseActivitiesReportDialog *pVw = (CHMSDiseaseActivitiesReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDiseaseActivitiesReportDialog *pVw = (CHMSDiseaseActivitiesReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDiseaseActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesReportDialog*)pWnd)->OnAddHMSDiseaseActivitiesReportDialog();
} 
static int _OnEditCHMSDiseaseActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesReportDialog*)pWnd)->OnEditHMSDiseaseActivitiesReportDialog();
} 
static int _OnDeleteCHMSDiseaseActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesReportDialog*)pWnd)->OnDeleteHMSDiseaseActivitiesReportDialog();
} 
static int _OnSaveCHMSDiseaseActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesReportDialog*)pWnd)->OnSaveHMSDiseaseActivitiesReportDialog();
} 
static int _OnCancelCHMSDiseaseActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesReportDialog*)pWnd)->OnCancelHMSDiseaseActivitiesReportDialog();
} 
CHMSDiseaseActivitiesReportDialog::CHMSDiseaseActivitiesReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CHMSDiseaseActivitiesReportDialog::~CHMSDiseaseActivitiesReportDialog(){
}
void CHMSDiseaseActivitiesReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 148);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 29, 305, 54);
	m_wndReportPeriod.Create(this,310, 29, 395, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 110, 84);
	m_wndFromDate.Create(this,115, 59, 200, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 59, 305, 84);
	m_wndToDate.Create(this,310, 59, 395, 84); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 89, 110, 114);
	m_wndDept.Create(this,115, 89, 395, 114); 
	/*m_wndOutPatient.Create(this, _T("OutPatient"), 12, 119, 134, 144);
	m_wndInPatient.Create(this, _T("InPatient"), 139, 119, 261, 144);
	m_wndAllHospitals.Create(this, _T("AllHospitals"), 266, 119, 388, 144);*/
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 154, 230, 179);
	m_wndPrint.Create(this, _T("&Export"), 235, 154, 315, 179);
	m_wndClose.Create(this, _T("&Close"), 320, 154, 400, 179);	

}
void CHMSDiseaseActivitiesReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
//	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSDiseaseActivitiesReportDialog::OnSetWindowEvents(){
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
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
	m_nAllHospitals=0;	
	SetMode(VM_EDIT);
	UpdateData(false);
}
void CHMSDiseaseActivitiesReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CHMSDiseaseActivitiesReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiseaseActivitiesReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiseaseActivitiesReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	


}
int CHMSDiseaseActivitiesReportDialog::SetMode(int nMode){
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
/*void CHMSDiseaseActivitiesReportDialog::OnYearChange(){
	
} */
/*void CHMSDiseaseActivitiesReportDialog::OnYearSetfocus(){
	
} */
/*void CHMSDiseaseActivitiesReportDialog::OnYearKillfocus(){
	
} */
int CHMSDiseaseActivitiesReportDialog::OnYearCheckValue(){
	return 0;
} 
void CHMSDiseaseActivitiesReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiseaseActivitiesReportDialog::OnReportPeriodSelendok(){
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
/*void CHMSDiseaseActivitiesReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSDiseaseActivitiesReportDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSDiseaseActivitiesReportDialog::OnReportPeriodLoadData(){
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
/*void CHMSDiseaseActivitiesReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDiseaseActivitiesReportDialog::OnFromDateChange(){
	
} */
/*void CHMSDiseaseActivitiesReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSDiseaseActivitiesReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSDiseaseActivitiesReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSDiseaseActivitiesReportDialog::OnToDateChange(){
	
} */
/*void CHMSDiseaseActivitiesReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSDiseaseActivitiesReportDialog::OnToDateKillfocus(){
	
} */
int CHMSDiseaseActivitiesReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSDiseaseActivitiesReportDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiseaseActivitiesReportDialog::OnDeptSelendok(){
	 
}
/*void CHMSDiseaseActivitiesReportDialog::OnDeptSetfocus(){
	
}*/
/*void CHMSDiseaseActivitiesReportDialog::OnDeptKillfocus(){
	
}*/
long CHMSDiseaseActivitiesReportDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_code='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type='DT' %s ORDER BY sd_id"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDiseaseActivitiesReportDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDiseaseActivitiesReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview=true;
	Printbaocaotinhhinhbenhtattuvong(m_szFromDate, m_szToDate, m_szDeptKey, m_bPreview);
	UpdateData(false);
	
} 
void CHMSDiseaseActivitiesReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview =false;
	OnExportExcell();
	UpdateData(false);
} 
void CHMSDiseaseActivitiesReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSDiseaseActivitiesReportDialog::OnAddHMSDiseaseActivitiesReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDiseaseActivitiesReportDialog::OnEditHMSDiseaseActivitiesReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiseaseActivitiesReportDialog::OnDeleteHMSDiseaseActivitiesReportDialog(){
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
 		OnCancelHMSDiseaseActivitiesReportDialog(); 
 	}
	return 0;
}
int CHMSDiseaseActivitiesReportDialog::OnSaveHMSDiseaseActivitiesReportDialog(){
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
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnCHMSDiseaseActivitiesReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDiseaseActivitiesReportDialog::OnCancelHMSDiseaseActivitiesReportDialog(){
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
int CHMSDiseaseActivitiesReportDialog::OnHMSDiseaseActivitiesReportDialogListLoadData(){
	return 0;
}

void CHMSDiseaseActivitiesReportDialog::Printbaocaotinhhinhbenhtattuvong(CString szFromDate, CString szToDate, CString szDept, bool bPreview){	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhereExam, szWhereIn;
	CString szDate, szSysDate, szOldLine, szNewLine,szWhere;
	szSysDate = pMF->GetSysDate();
	CReport rpt; 

	if(!rpt.Init(_T("Reports/HMS/RPT_BAOCAOTINHHINHBENHTATTUVONG.RPT")))
	return ;
	
		
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 

	if (m_szDeptKey.IsEmpty())
	{
		szSQL.Format(_T(" SELECT (SELECT hic_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as namechapter,	") \
					_T("        (SELECT hic_id from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as icdchapter,	") \
					_T("        (SELECT hig_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as nameGroup,") \
					_T("        (SELECT hig_icd from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as ICDGroup,	") \
					_T("        sum(TongsoKB) as TongsoKB, sum(TSNuKB) as TSNuKB, sum(TSTreemKB) as TSTreemKB, sum(TsTuvongKB) as TsTuvongKB,") \
					_T("        sum(TongsoDT) as TongsoDT, sum(TongsoNuDT) as TongsoNuDT, sum(TSTuvongDT) as TSTuvongDT,") \
					_T("        sum(TSNuTuvongDT) as TSNuTuvongDT, sum(TSDieutri) as TSDieutri, ") \
					_T("        sum(TongsoTE) as TongsoTE,sum(TongsoTE04) as TongsoTE04,") \
					_T("        sum(TSTuvong15) as TSTuvong15, sum(TSTuvong04) as TSTuvong04,") \
					_T("        sum(TSNgayDT15) as TSNgayDT15, sum(TSNgayDT04) as TSNgayDT04,") \
					_T("        sum(TSTuoi60) as TSTuoi60, sum(TSNu60) as TSNu60,") \
					_T("        sum(TSTuvong60) as TSTuvong60, sum(TSTuvongNu60) as TSTuvongNu60") \
					_T(" FROM ") \
					_T(" (") \
					_T("  SELECT hd_icd as icd, 1 as TongsoKB,") \
					_T("    case when hp_sex = 'F' then 1 else 0 end as TSNuKB,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <= 6 then 1 else 0 end as TSTreemKB,") \
					_T(" 	case when hd_suggestion ='D' and hd_result in('5','6') then 1 else 0 end as TsTuvongKB, 0 as TongsoDT,0 as TongsoNuDT,0 as TSTuvongDT,0 as TSNuTuvongDT,0 as TSDieutri,") \
					_T(" 	0 as TongsoTE,0 as TongsoTE04, 0 as TSTuvong15, 0 as TSTuvong04, 0 as TsTuoi60, 0 as TsNu60, 0 as TSTuvong60, 0 as TsTuvongNu60, ") \
					_T(" 	0 as TSNgayDT15, 0 as TSNgayDT04") \
					_T("  FROM hms_doc") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
					_T("  WHERE length(hd_icd) > 0 AND hd_status='T' AND date(hd_enddate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,1 as TongsoDT,") \
					_T(" 	case when hp_sex = 'F' then 1 else 0 end as TongsoNuDT, ") \
					_T("    case when hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TsTuvongDT, ") \
					_T(" 	case when hp_sex = 'F' and hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TSNuTuvongDT,0, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=15 then 1 else 0 end as TSTreem15,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=4 then 1 else 0 end as TSTreem04,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <= 15 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong15,") \
					_T("    case when date_part('year', age(hp_birthdate)) <= 4 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong04,0,0,0,0,0,0") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0,0,0,0,0,0, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 then 1 else 0 end as TSTuoi60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' then 1 else 0 end as TSNu60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvongNu60,0,0") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0, sum(hb_treatqty) as TongsoDT,0,0,0,0,0,0,0,0, ") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 15 then hb_treatqty else 0 end) as TSNgayDT15,") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 4 then hb_treatqty else 0 end) as TSNgayDT04") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  LEFT JOIN hms_bed ON(hb_docno=hcr_docno) ") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  GROUP BY hcr_mainicd, hcr_dischargedate") \
					_T(" ) as Tbltmp") \
					_T(" GROUP BY icdchapter, namechapter, nameGroup, ICDGroup	") \
					_T(" ORDER BY icdchapter, namechapter, nameGroup"),
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate);		
	}
	else
	{
		szWhere.Format(_T(" AND hcr_dischargedept='%s' "), m_szDeptKey); 
		szSQL.Format(_T(" SELECT (SELECT hic_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as namechapter,	") \
					_T("        (SELECT hic_id from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as icdchapter,	") \
					_T("        (SELECT hig_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as nameGroup,") \
					_T("        (SELECT hig_icd from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as ICDGroup,	") \
					_T("        sum(TongsoKB) as TongsoKB, sum(TSNuKB) as TSNuKB, sum(TSTreemKB) as TSTreemKB, sum(TsTuvongKB) as TsTuvongKB,") \
					_T("        sum(TongsoDT) as TongsoDT, sum(TongsoNuDT) as TongsoNuDT, sum(TSTuvongDT) as TSTuvongDT,") \
					_T("        sum(TSNuTuvongDT) as TSNuTuvongDT, sum(TSDieutri) as TSDieutri, ") \
					_T("        sum(TongsoTE) as TongsoTE,sum(TongsoTE04) as TongsoTE04,") \
					_T("        sum(TSTuvong15) as TSTuvong15, sum(TSTuvong04) as TSTuvong04,") \
					_T("        sum(TSNgayDT15) as TSNgayDT15, sum(TSNgayDT04) as TSNgayDT04,") \
					_T("        sum(TSTuoi60) as TSTuoi60, sum(TSNu60) as TSNu60,") \
					_T("        sum(TSTuvong60) as TSTuvong60, sum(TSTuvongNu60) as TSTuvongNu60") \
					_T(" FROM ") \
					_T(" (") \
					_T("  SELECT hcr_mainicd as icd,0 as TongsoKB,0 as TSNuKB,0 as TSTreemKB,0 as TsTuvongKB,1 as TongsoDT,") \
					_T(" 	case when hp_sex = 'F' then 1 else 0 end as TongsoNuDT, ") \
					_T("    case when hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TsTuvongDT, ") \
					_T(" 	case when hp_sex = 'F' and hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TSNuTuvongDT,0 as TSDieutri, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=15 then 1 else 0 end as TongsoTE,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=4 then 1 else 0 end as TongsoTE04,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <= 15 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong15,") \
					_T("    case when date_part('year', age(hp_birthdate)) <= 4 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong04,") \
					_T("    0 as TsTuoi60,0 as TsNu60,0 as TSTuvong60,0 as TsTuvongNu60,0 as TSNgayDT15,0 as TSNgayDT04,hcr_dischargedept") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 %s AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0,0,0,0,0,0, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 then 1 else 0 end as TSTuoi60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' then 1 else 0 end as TSNu60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvongNu60,0,0,hcr_dischargedept") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 %s AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0, sum(hb_treatqty) as TongsoDT,0,0,0,0,0,0,0,0, ") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 15 then hb_treatqty else 0 end) as TSNgayDT15,") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 4 then hb_treatqty else 0 end) as TSNgayDT04,hcr_dischargedept") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  LEFT JOIN hms_bed ON(hb_docno=hcr_docno) ") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 %s AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  GROUP BY hcr_mainicd, hcr_dischargedept, hcr_dischargedate") \
					_T(" ) as Tbltmp") \
					_T(" GROUP BY icdchapter, namechapter, nameGroup, ICDGroup	") \
					_T(" ORDER BY icdchapter, namechapter, nameGroup"),
					szWhere, m_szFromDate, m_szToDate, 
					szWhere, m_szFromDate, m_szToDate,
					szWhere, m_szFromDate, m_szToDate
					);
	}
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);	
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);		
		return ;
	}
	
	
		//Report Header
	
	int nIndex = 1;
	long Count=0;
	long ttgrp[24], ttlTotal[24];
	
	for (int i =0; i < 24; i++)
	{
		ttgrp[i] = 0;
		ttlTotal[i] = 0;
	}	

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("icdchapter"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if (ttgrp[4] + ttgrp[7] > 0 )
			{	CString szField;
				TranslateString(_T("Total Group"), tmpStr);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );			
				for (int i =4; i < 22; i++)
					{
						szField.Format(_T("S%d"), i);
						tmpStr.Format(_T("%ld"), ttgrp[i]);
						rptDetail->SetValue(szField, tmpStr);					
						ttlTotal[i]+=ttgrp[i];
						ttgrp[i]=0;
					}
			}
			CString szField,szAmount;						
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rs.GetValue(_T("namechapter"), tmpStr);
			rptDetail->SetValue(_T("GroupName"),tmpStr);
			szOldLine = szNewLine;
			nIndex=1;
		}

		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);				
		rs.GetValue(_T("nameGroup"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("ICDGroup"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("TongsoKB"), Count);
		ttgrp[4]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("TSNuKB"), Count);
		ttgrp[22]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("22"), tmpStr);

		rs.GetValue(_T("TSTreemKB"), Count);
			ttgrp[5]+=Count;
			tmpStr.Format(_T("%ld"), Count);	
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("TsTuvongKB"), Count);
			ttgrp[6]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("TongsoDT"), Count);
			ttgrp[7]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("7"), tmpStr);		
		rs.GetValue(_T("TongsoNuDT"), Count);
			ttgrp[8]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("TSTuvongDT"), Count);
			ttgrp[9]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("TSNuTuvongDT"), Count);
			ttgrp[10]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("10"),tmpStr);
		rs.GetValue(_T("TSDieutri"), Count);
			ttgrp[11]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("11"),tmpStr);
		rs.GetValue(_T("TongsoTE"), Count);
			ttgrp[12]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("12"),tmpStr);
		rs.GetValue(_T("TongsoTE04"), Count);
			ttgrp[13]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("13"),tmpStr);
		rs.GetValue(_T("TSTuvong15"), Count);
			ttgrp[14]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("14"),tmpStr);
		rs.GetValue(_T("TSTuvong04"), Count);
			ttgrp[15]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("15"),tmpStr);
		rs.GetValue(_T("TSNgayDT15"), Count);
		ttgrp[16]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("16"),tmpStr);
		rs.GetValue(_T("TSNgayDT04"), Count);
		ttgrp[17]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("17"),tmpStr);

		rs.GetValue(_T("TSTuoi60"), Count);
		ttgrp[18]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("18"),tmpStr);

		rs.GetValue(_T("TSNu60"), Count);
		ttgrp[19]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("19"),tmpStr);

		rs.GetValue(_T("TSTuvong60"), Count);
		ttgrp[20]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("20"),tmpStr);
		rs.GetValue(_T("TSTuvongNu60"), Count);
		ttgrp[21]+=Count;
		tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("21"),tmpStr);

		rs.MoveNext();
	}

	if (ttgrp[4] + ttgrp[7] > 0 )
	{	
		CString szField;
		TranslateString(_T("Total Group"), tmpStr);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );			
		for (int i =4; i < 23; i++)
		{
			szField.Format(_T("S%d"), i);
			tmpStr.Format(_T("%ld"), ttgrp[i]);
			rptDetail->SetValue(szField, tmpStr);
			ttlTotal[i]+=ttgrp[i];
		}
	}

	if (ttlTotal[4] + ttlTotal[7] > 0 )
	{	
		CString szField;
		TranslateString(_T("Total"), tmpStr);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );			
		for (int i =4; i < 23; i++)
		{
			szField.Format(_T("S%d"), i);
			tmpStr.Format(_T("%ld"), ttlTotal[i]);
			rptDetail->SetValue(szField, tmpStr);			
		}
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();

	EndWaitCursor();
}
void CHMSDiseaseActivitiesReportDialog::OnExportExcell(){	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel,szWhere, szWhereExam, szWhereIn;
	CString szDate, szSysDate, szOldLine, szNewLine;
	szSysDate = pMF->GetSysDate();

	BeginWaitCursor();
	UpdateData(TRUE);
	int nRow = 1;
	int nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 46);
	xls.SetColumnWidth(2, 16);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 14);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 13);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 10);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 10);
	xls.SetColumnWidth(18, 10);
	xls.SetColumnWidth(19, 10);
	xls.SetColumnWidth(20, 10);
	xls.SetColumnWidth(21, 10);

	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT, true, 12, 0);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 12, 0);
	xls.SetCellMergedColumns(nCol, nRow + 2, 15);	
	xls.SetCellText(nCol, nRow + 3, _T("BAO CAO TINH HINH BENH TAT TU VONG"), FMT_TEXT, true, 16, 0);
	xls.SetCellMergedColumns(nCol, nRow + 3, 15);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, true, 12, 0);

	xls.SetCellMergedRows(nCol, nRow + 6, 4);
	xls.SetCellText(nCol, nRow + 6, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellMergedRows(nCol + 1, nRow + 6, 4);
	TranslateString(_T("Description"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 6, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellMergedRows(nCol + 2, nRow + 6, 4);
	xls.SetCellText(nCol + 2, nRow + 6, _T("ICD"), FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 3, nRow + 6, 4);
	xls.SetCellMergedRows(nCol + 3, nRow + 7, 3);
	xls.SetCellMergedRows(nCol + 4, nRow + 7, 3);
	xls.SetCellMergedRows(nCol + 5, nRow + 7, 3);
	xls.SetCellMergedRows(nCol + 6, nRow + 7, 3);
	TranslateString(_T("Examination Activities"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 6, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	TranslateString(_T("Examed"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	TranslateString(_T("Female"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	TranslateString(_T("Children"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	TranslateString(_T("Death"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 7, nRow + 6, 15);
	TranslateString(_T("Treatment Activities"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 6, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 7, nRow + 7, 5);
	TranslateString(_T("Total Patient"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 12, nRow + 7, 6);
	TranslateString(_T("Total Children < 15 age"), tmpStr);
	xls.SetCellText(nCol + 12, nRow + 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedRows(nCol + 7, nRow + 8, 2);
	TranslateString(_T("Disease"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedRows(nCol + 8, nRow + 8, 2);
	TranslateString(_T("Diseased Female"), tmpStr);
	xls.SetCellText(nCol + 8, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedRows(nCol + 9, nRow + 8, 2);
	TranslateString(_T("Death"), tmpStr);
	xls.SetCellText(nCol + 9, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedRows(nCol + 10, nRow + 8, 2);
	TranslateString(_T("Dead Female"), tmpStr);
	xls.SetCellText(nCol + 10, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedRows(nCol + 11, nRow + 8, 2);
	TranslateString(_T("Day Treatment"), tmpStr);
	xls.SetCellText(nCol + 11, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 12, nRow + 8, 2);
	TranslateString(_T("Disease"), tmpStr);
	xls.SetCellText(nCol + 12, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 14, nRow + 8, 2);
	TranslateString(_T("The Patient died"), tmpStr);
	xls.SetCellText(nCol + 14, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 16, nRow + 8, 2);
	TranslateString(_T("Treatment Number"), tmpStr);
	xls.SetCellText(nCol + 16, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);


	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(nCol + 12, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("0-4 Age"), tmpStr);
	xls.SetCellText(nCol + 13, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(nCol + 14, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("0-4 Age"), tmpStr);
	xls.SetCellText(nCol + 15, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(nCol + 16, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("0-4 Age"), tmpStr);
	xls.SetCellText(nCol + 17, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 18, nRow + 7, 4);
	TranslateString(_T("Patient > 60 age"), tmpStr);
	xls.SetCellText(nCol + 18, nRow + 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 18, nRow + 8, 2);
	TranslateString(_T("Disease"), tmpStr);
	xls.SetCellText(nCol + 18, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol + 20, nRow + 8, 2);
	TranslateString(_T("Death"), tmpStr);
	xls.SetCellText(nCol + 20, nRow + 8, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(nCol + 18, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Female"), tmpStr);
	xls.SetCellText(nCol + 19, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(nCol + 20, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Female"), tmpStr);
	xls.SetCellText(nCol + 21, nRow + 9, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	
	
	if (m_szDeptKey.IsEmpty())
	{
		szSQL.Format(_T(" SELECT (SELECT hic_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as namechapter,	") \
					_T("        (SELECT hic_id from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as icdchapter,	") \
					_T("        (SELECT hig_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as nameGroup,") \
					_T("        (SELECT hig_icd from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as ICDGroup,	") \
					_T("        sum(TongsoKB) as TongsoKB, sum(TSNuKB) as TSNuKB, sum(TSTreemKB) as TSTreemKB, sum(TsTuvongKB) as TsTuvongKB,") \
					_T("        sum(TongsoDT) as TongsoDT, sum(TongsoNuDT) as TongsoNuDT, sum(TSTuvongDT) as TSTuvongDT,") \
					_T("        sum(TSNuTuvongDT) as TSNuTuvongDT, sum(TSDieutri) as TSDieutri, ") \
					_T("        sum(TongsoTE) as TongsoTE,sum(TongsoTE04) as TongsoTE04,") \
					_T("        sum(TSTuvong15) as TSTuvong15, sum(TSTuvong04) as TSTuvong04,") \
					_T("        sum(TSNgayDT15) as TSNgayDT15, sum(TSNgayDT04) as TSNgayDT04,") \
					_T("        sum(TSTuoi60) as TSTuoi60, sum(TSNu60) as TSNu60,") \
					_T("        sum(TSTuvong60) as TSTuvong60, sum(TSTuvongNu60) as TSTuvongNu60") \
					_T(" FROM ") \
					_T(" (") \
					_T("  SELECT hd_icd as icd, 1 as TongsoKB,") \
					_T("    case when hp_sex = 'F' then 1 else 0 end as TSNuKB,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <= 6 then 1 else 0 end as TSTreemKB,") \
					_T(" 	case when hd_suggestion ='D' and hd_result in('5','6') then 1 else 0 end as TsTuvongKB, 0 as TongsoDT,0 as TongsoNuDT,0 as TSTuvongDT,0 as TSNuTuvongDT,0 as TSDieutri,") \
					_T(" 	0 as TongsoTE,0 as TongsoTE04, 0 as TSTuvong15, 0 as TSTuvong04, 0 as TsTuoi60, 0 as TsNu60, 0 as TSTuvong60, 0 as TsTuvongNu60, ") \
					_T(" 	0 as TSNgayDT15, 0 as TSNgayDT04") \
					_T("  FROM hms_doc") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
					_T("  WHERE length(hd_icd) > 0 AND hd_status='T' AND date(hd_enddate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,1 as TongsoDT,") \
					_T(" 	case when hp_sex = 'F' then 1 else 0 end as TongsoNuDT, ") \
					_T("    case when hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TsTuvongDT, ") \
					_T(" 	case when hp_sex = 'F' and hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TSNuTuvongDT,0, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=15 then 1 else 0 end as TSTreem15,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=4 then 1 else 0 end as TSTreem04,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <= 15 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong15,") \
					_T("    case when date_part('year', age(hp_birthdate)) <= 4 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong04,0,0,0,0,0,0") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0,0,0,0,0,0, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 then 1 else 0 end as TSTuoi60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' then 1 else 0 end as TSNu60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvongNu60,0,0") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0, sum(hb_treatqty) as TongsoDT,0,0,0,0,0,0,0,0, ") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 15 then hb_treatqty else 0 end) as TSNgayDT15,") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 4 then hb_treatqty else 0 end) as TSNgayDT04") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  LEFT JOIN hms_bed ON(hb_docno=hcr_docno) ") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  GROUP BY hcr_mainicd, hcr_dischargedate") \
					_T(" ) as Tbltmp") \
					_T(" GROUP BY icdchapter, namechapter, nameGroup, ICDGroup	") \
					_T(" ORDER BY icdchapter, namechapter, nameGroup"),
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate, 
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate);		
	}
	else
	{
		szWhere.Format(_T(" AND hcr_dischargedept='%s' "), m_szDeptKey); 
		szSQL.Format(_T(" SELECT (SELECT hic_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as namechapter,	") \
					_T("        (SELECT hic_id from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as icdchapter,	") \
					_T("        (SELECT hig_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as nameGroup,") \
					_T("        (SELECT hig_icd from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
					_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
					_T(" 	where hi_icd=icd limit 1) as ICDGroup,	") \
					_T("        sum(TongsoKB) as TongsoKB, sum(TSNuKB) as TSNuKB, sum(TSTreemKB) as TSTreemKB, sum(TsTuvongKB) as TsTuvongKB,") \
					_T("        sum(TongsoDT) as TongsoDT, sum(TongsoNuDT) as TongsoNuDT, sum(TSTuvongDT) as TSTuvongDT,") \
					_T("        sum(TSNuTuvongDT) as TSNuTuvongDT, sum(TSDieutri) as TSDieutri, ") \
					_T("        sum(TongsoTE) as TongsoTE,sum(TongsoTE04) as TongsoTE04,") \
					_T("        sum(TSTuvong15) as TSTuvong15, sum(TSTuvong04) as TSTuvong04,") \
					_T("        sum(TSNgayDT15) as TSNgayDT15, sum(TSNgayDT04) as TSNgayDT04,") \
					_T("        sum(TSTuoi60) as TSTuoi60, sum(TSNu60) as TSNu60,") \
					_T("        sum(TSTuvong60) as TSTuvong60, sum(TSTuvongNu60) as TSTuvongNu60") \
					_T(" FROM ") \
					_T(" (") \
					_T("  SELECT hcr_mainicd as icd,0 as TongsoKB,0 as TSNuKB,0 as TSTreemKB,0 as TsTuvongKB,1 as TongsoDT,") \
					_T(" 	case when hp_sex = 'F' then 1 else 0 end as TongsoNuDT, ") \
					_T("    case when hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TsTuvongDT, ") \
					_T(" 	case when hp_sex = 'F' and hcr_result in('5','6') and hcr_suggestion ='D' then 1 else 0 end as TSNuTuvongDT,0 as TSDieutri, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=15 then 1 else 0 end as TongsoTE,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <=4 then 1 else 0 end as TongsoTE04,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) <= 15 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong15,") \
					_T("    case when date_part('year', age(hp_birthdate)) <= 4 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong04,") \
					_T("    0 as TsTuoi60,0 as TsNu60,0 as TSTuvong60,0 as TsTuvongNu60,0 as TSNgayDT15,0 as TSNgayDT04,hcr_dischargedept") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 %s AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0,0,0,0,0,0, ") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 then 1 else 0 end as TSTuoi60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' then 1 else 0 end as TSNu60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvong60,") \
					_T(" 	case when date_part('year', age(hp_birthdate)) > 60 and hp_sex ='F' and hcr_suggestion ='D' and hcr_result in('5','6') then 1 else 0 end as TSTuvongNu60,0,0,hcr_dischargedept") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 %s AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  UNION ALL") \
					_T("  SELECT hcr_mainicd,0,0,0,0,0,0,0,0, sum(hb_treatqty) as TongsoDT,0,0,0,0,0,0,0,0, ") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 15 then hb_treatqty else 0 end) as TSNgayDT15,") \
					_T(" 	sum(case when date_part('year', age(hp_birthdate)) <= 4 then hb_treatqty else 0 end) as TSNgayDT04,hcr_dischargedept") \
					_T("  FROM hms_clinical_record") \
					_T("  LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
					_T("  LEFT JOIN hms_bed ON(hb_docno=hcr_docno) ") \
					_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 %s AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
					_T("  GROUP BY hcr_mainicd, hcr_dischargedept, hcr_dischargedate") \
					_T(" ) as Tbltmp") \
					_T(" GROUP BY icdchapter, namechapter, nameGroup, ICDGroup	") \
					_T(" ORDER BY icdchapter, namechapter, nameGroup"),
					szWhere, m_szFromDate, m_szToDate, 
					szWhere, m_szFromDate, m_szToDate,
					szWhere, m_szFromDate, m_szToDate
					);
	}
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);	
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);		
		return ;
	}
	

	int nIndex;
	long Count = 0;
	long ttgrp[24],ttlTotal[24];
	
	for (int i =0; i < 24; i++)
	{
		ttgrp[i] = 0;
		ttlTotal[i] = 0;
	}

	nRow += 10;
	
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("icdchapter"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if (ttgrp[4] + ttgrp[7] > 0 )
			{	
				TranslateString(_T("Total Group"), tmpStr);
				xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);			
				for (int i = 4; i < 22; i++)
				{
					xls.SetCellText(nCol + i - 1, nRow, ToString(ttgrp[i]), FMT_INTEGER, true);
					ttlTotal[i] += ttgrp[i];
					ttgrp[i]=0;
				}
				nRow++;
			}

			xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("namechapter")), FMT_TEXT, true);
			szOldLine = szNewLine;
			nIndex=1;
			nRow++;
		}
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER, false);
		xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("nameGroup")), FMT_TEXT, false);
		rs.GetValue(_T("ICDGroup"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, rs.GetValue(_T("ICDGroup")), FMT_TEXT, false);
		rs.GetValue(_T("TongsoKB"), Count);
		ttgrp[4] += Count;
		xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("TongsoKB")), FMT_INTEGER, false);

		rs.GetValue(_T("TSNuKB"), Count);
		ttgrp[5] += Count;
		xls.SetCellText(nCol + 4, nRow, rs.GetValue(_T("TSNuKB")), FMT_INTEGER, false);

		rs.GetValue(_T("TSTreemKB"), Count);
		ttgrp[6] += Count;
		xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("TSTreemKB")), FMT_INTEGER, false);

		rs.GetValue(_T("TsTuvongKB"), Count);
		ttgrp[7] += Count;
		xls.SetCellText(nCol + 6, nRow, rs.GetValue(_T("TsTuvongKB")), FMT_INTEGER, false);

		rs.GetValue(_T("TongsoDT"), Count);
		ttgrp[8] += Count;
		xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("TongsoDT")), FMT_INTEGER, false);

		rs.GetValue(_T("TongsoNuDT"), Count);
		ttgrp[9] += Count;
		xls.SetCellText(nCol + 8, nRow, rs.GetValue(_T("TongsoDT")), FMT_INTEGER, false);
			
		rs.GetValue(_T("TSTuvongDT"), Count);
		ttgrp[10] += Count;
		xls.SetCellText(nCol + 9, nRow, rs.GetValue(_T("TSTuvongDT")), FMT_INTEGER, false);

		rs.GetValue(_T("TSNuTuvongDT"), Count);
		ttgrp[11] += Count;
		xls.SetCellText(nCol + 10, nRow, rs.GetValue(_T("TSTuvongDT")), FMT_INTEGER, false);
		
		rs.GetValue(_T("TSDieutri"), Count);
		ttgrp[12] += Count;
		xls.SetCellText(nCol + 11, nRow, rs.GetValue(_T("TSDieutri")), FMT_INTEGER, false);
		
		rs.GetValue(_T("TongsoTE"), Count);
		ttgrp[13] += Count;
		xls.SetCellText(nCol + 12, nRow, rs.GetValue(_T("TongsoTE")), FMT_INTEGER, false);
		
		rs.GetValue(_T("TongsoTE04"), Count);
		ttgrp[14] += Count;
		xls.SetCellText(nCol + 13, nRow, rs.GetValue(_T("TongsoTE04")), FMT_INTEGER, false);
		
		rs.GetValue(_T("TSTuvong15"), Count);
		ttgrp[15] += Count;
		xls.SetCellText(nCol + 14, nRow, rs.GetValue(_T("TSTuvong15")), FMT_INTEGER, false);
		
		rs.GetValue(_T("TSTuvong04"), Count);
		ttgrp[16] += Count;
		xls.SetCellText(nCol + 15, nRow, rs.GetValue(_T("TSTuvong04")), FMT_INTEGER, false);
		
		rs.GetValue(_T("TSNgayDT15"), Count);
		ttgrp[17] += Count;
		xls.SetCellText(nCol + 16, nRow, rs.GetValue(_T("TSNgayDT15")), FMT_INTEGER, false);
		
		rs.GetValue(_T("TSNgayDT04"), Count);
		ttgrp[18] += Count;
		xls.SetCellText(nCol + 17, nRow, rs.GetValue(_T("TSNgayDT04")), FMT_INTEGER, false);

		rs.GetValue(_T("TSTuoi60"), Count);
		ttgrp[19] += Count;
		xls.SetCellText(nCol + 18, nRow, rs.GetValue(_T("TSTuoi60")), FMT_INTEGER, false);

		rs.GetValue(_T("TSNu60"), Count);
		ttgrp[20] += Count;
		xls.SetCellText(nCol + 19, nRow, rs.GetValue(_T("TSNu60")), FMT_INTEGER, false);

		rs.GetValue(_T("TSTuvong60"), Count);
		ttgrp[21] += Count;
		xls.SetCellText(nCol + 20, nRow, rs.GetValue(_T("TSTuvong60")), FMT_INTEGER, false);

		rs.GetValue(_T("TSTuvongNu60"), Count);
		ttgrp[22] += Count;
		xls.SetCellText(nCol + 21, nRow, rs.GetValue(_T("TSTuvongNu60")), FMT_INTEGER, false);
		nRow++;
		rs.MoveNext();
	}
	if (ttgrp[4] + ttgrp[8] > 0 )
	{	
		TranslateString(_T("Total Group"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);		
		for (int i = 4; i < 23; i++)
		{
			tmpStr.Format(_T("%ld"), ttgrp[i]);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_INTEGER, true);
			ttlTotal[i] += ttgrp[i];
		}
	}
	nRow++;
	if (ttlTotal[4] + ttlTotal[8] > 0 )
	{	
		TranslateString(_T("Total"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);		
		for (int i = 4; i < 23; i++)
		{
			tmpStr.Format(_T("%ld"), ttlTotal[i]);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_INTEGER, true);		
		}
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao benh tat tu vong.xls"));
	//UpdateData(FALSE);
} 
