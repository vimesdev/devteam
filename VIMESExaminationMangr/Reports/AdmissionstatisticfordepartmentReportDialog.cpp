#include "AdmissionstatisticfordepartmentReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptAdmissionstatisticfordepartmentReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptAdmissionstatisticfordepartmentReportDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CrptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CrptAdmissionstatisticfordepartmentReportDialog *pVw = (CrptAdmissionstatisticfordepartmentReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptAdmissionstatisticfordepartmentReportDialog *pVw = (CrptAdmissionstatisticfordepartmentReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptAdmissionstatisticfordepartmentReportDialog *pVw = (CrptAdmissionstatisticfordepartmentReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnAddAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnEditAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnEditAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnDeleteAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnDeleteAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnSaveAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnSaveAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnCancelAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnCancelAdmissionstatisticfordepartmentReportDialog();
} 
CrptAdmissionstatisticfordepartmentReportDialog::CrptAdmissionstatisticfordepartmentReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_bPreview = true;
}
CrptAdmissionstatisticfordepartmentReportDialog::~CrptAdmissionstatisticfordepartmentReportDialog(){
}
void CrptAdmissionstatisticfordepartmentReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 360, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 180, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 185, 30, 265, 55);
	m_wndReportPeriod.Create(this,270, 30, 355, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 180, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 60, 265, 85);
	m_wndToDate.Create(this,270, 60, 355, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 90, 90, 115);
	m_wndStatus.Create(this,95, 90, 355, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 125, 125, 200, 150);
	m_wndPrint.Create(this, _T("&Print"), 205, 125, 280, 150);
	m_wndClose.Create(this, _T("&Close"), 285, 125, 360, 150);

}
void CrptAdmissionstatisticfordepartmentReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void CrptAdmissionstatisticfordepartmentReportDialog::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
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
void CrptAdmissionstatisticfordepartmentReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CrptAdmissionstatisticfordepartmentReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptAdmissionstatisticfordepartmentReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptAdmissionstatisticfordepartmentReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();

}
int CrptAdmissionstatisticfordepartmentReportDialog::SetMode(int nMode){
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
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnYearChange(){
	
} */
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnYearSetfocus(){
	
} */
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnYearKillfocus(){
	
} */
int CrptAdmissionstatisticfordepartmentReportDialog::OnYearCheckValue(){
	return 0;
} 
void CrptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodSelendok(){
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
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodKillfocus(){
	
}*/
long CrptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodLoadData(){
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
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnFromDateChange(){
	
} */
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnFromDateKillfocus(){
	
} */
int CrptAdmissionstatisticfordepartmentReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnToDateChange(){
	
} */
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnToDateKillfocus(){
	
} */
int CrptAdmissionstatisticfordepartmentReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptAdmissionstatisticfordepartmentReportDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptAdmissionstatisticfordepartmentReportDialog::OnStatusSelendok(){
	 
}
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnStatusSetfocus(){
	
}*/
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnStatusKillfocus(){
	
}*/
long CrptAdmissionstatisticfordepartmentReportDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szLabel;
	m_wndStatus.DeleteAllItems(); 
	TranslateString(_T("Waiting for admission"), szLabel);
	m_wndStatus.AddItems(_T("1"), szLabel, NULL);
	TranslateString(_T("Inpatient"), szLabel);
	m_wndStatus.AddItems(_T("2"), szLabel, NULL);  

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptAdmissionstatisticfordepartmentReportDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptAdmissionstatisticfordepartmentReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	PrintAdmissionStatisticForDepartmentPatientListReport(m_szFromDate, m_szToDate, true);
} 
void CrptAdmissionstatisticfordepartmentReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PrintAdmissionStatisticForDepartmentPatientListReport(m_szFromDate, m_szToDate, false);
} 
void CrptAdmissionstatisticfordepartmentReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CrptAdmissionstatisticfordepartmentReportDialog::OnAddAdmissionstatisticfordepartmentReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptAdmissionstatisticfordepartmentReportDialog::OnEditAdmissionstatisticfordepartmentReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptAdmissionstatisticfordepartmentReportDialog::OnDeleteAdmissionstatisticfordepartmentReportDialog(){
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
 		OnCancelAdmissionstatisticfordepartmentReportDialog(); 
 	}
	return 0;
}
int CrptAdmissionstatisticfordepartmentReportDialog::OnSaveAdmissionstatisticfordepartmentReportDialog(){
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
 		//OnAdmissionstatisticfordepartmentReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptAdmissionstatisticfordepartmentReportDialog::OnCancelAdmissionstatisticfordepartmentReportDialog(){
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
int CrptAdmissionstatisticfordepartmentReportDialog::OnAdmissionstatisticfordepartmentReportDialogListLoadData(){
	return 0;
}
void CrptAdmissionstatisticfordepartmentReportDialog::PrintAdmissionStatisticForDepartmentPatientListReport(CString szFromDate, CString szToDate, bool bPreview){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere;
	CRecord rs(&pMF->m_db);
	CReport rpt;
	UpdateData(true);
	if(!rpt.Init(_T("Reports/HMS/HE_ADMISSIONSTATISTICFORDEPARTMENT.RPT")))
	{
		return;
	}
	
	//rpt.GetReportDocument()->SetMargins(100, 100, 100, 100);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);


	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	CString szDate;
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),
			CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	
	szWhere.Empty();

	if(m_szStatusKey == _T("1")){
		szWhere.Format(_T(" and htr_status not in('I','T') "));
	}
	else if(m_szStatusKey == _T("2"))
		szWhere.Format(_T(" and htr_status in('I','T') "));

	szSQL.Format(_T(" SELECT (select sd_name from sys_dept where sd_id=admitdept) as admitdept, ") \
		_T("sum(c1) as c1, ") \
		_T("sum(c2) as c2, ") \
		_T("sum(c3) as c3, ") \
		_T("sum(c4) as c4,") \
		_T("sum(c5) as c5, ") \
		_T("sum(c6) as c6, ") \
		_T("sum(c7) as c7, ") \
		_T("sum(c8) as c8,") \
		_T("sum(c9) as c9, ") \
		_T("sum(c1+c2+c3+c4+c5+c6+c7+c8+c9) as c10") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT hd_indept as admitdept,") \
		_T(" case when hd_object='1' then 1 else 0 end as c1,") \
		_T(" case when hd_object='2' then 1 else 0 end as c2,") \
		_T(" case when hd_object='3' then 1 else 0 end as c3,") \
		_T(" case when hd_object='4' then 1 else 0 end as c4,") \
		_T(" case when hd_object='5' then 1 else 0 end as c5,") \
		_T(" case when hd_object='6' then 1 else 0 end as c6,") \
		_T(" case when hd_object='7' then 1 else 0 end as c7,") \
		_T(" case when hd_object='8' then 1 else 0 end as c8,") \
		_T(" case when hd_object='9' then 1 else 0 end as c9 ") \
		_T(" FROM hms_doc ") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno and htr_deptid=hd_indept) ") \
		_T(" WHERE hd_status='T' and hd_suggestion='A'  ") \
		_T(" AND date(hd_enddate) BETWEEN date('%s') AND date('%s') ") \
		_T(" %s ") \
		_T(" ) as admittbl") \
		_T(" GROUP BY admitdept") \
		_T(" ORDER BY admitdept"), szFromDate, szToDate, szWhere);	
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	CReportSection* rptDetail=rpt.GetDetail();
	int nIndex=0,nTotal[9];
	for (int i =0; i < 10; i++)
		nTotal[i] = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("0"), tmpStr);
		rs.GetValue(_T("admitdept"), tmpStr);
		rptDetail->SetValue(_T("admitdept"), tmpStr);
		rs.GetValue(_T("c1"), tmpStr); 
		nTotal[0] += ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("c2"), tmpStr); 
		nTotal[1] += ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("c3"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		
		rs.GetValue(_T("c4"), tmpStr); 
		nTotal[3] += ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("c5"), tmpStr); 
		nTotal[4] += ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("c6"), tmpStr); 
		nTotal[5]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("c7"), tmpStr); 
		nTotal[6]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("c8"), tmpStr); 
		nTotal[7]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("c9"), tmpStr); 
		nTotal[8]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("c10"), tmpStr); 
		nTotal[9]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.MoveNext();
	}
	//Report Footer
	if(nTotal[9] > 0)
	{
		FormatCurrency(nTotal[0], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum1"), tmpStr);
		FormatCurrency(nTotal[1], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum2"), tmpStr);
		FormatCurrency(nTotal[2], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum3"), tmpStr);
		FormatCurrency(nTotal[3], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum4"), tmpStr);
		FormatCurrency(nTotal[4], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum5"), tmpStr);
		FormatCurrency(nTotal[5], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum6"), tmpStr);
		FormatCurrency(nTotal[6], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum7"), tmpStr);
		FormatCurrency(nTotal[7], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum8"), tmpStr);
		FormatCurrency(nTotal[8],tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum9"), tmpStr);
		FormatCurrency(nTotal[9], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum10"), tmpStr);
	}
	CString szSysDate  = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
