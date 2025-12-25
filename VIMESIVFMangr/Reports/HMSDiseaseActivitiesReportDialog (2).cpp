#include "HMSDiseaseActivitiesReportDialog.h"
#include "ReportDocument.h"
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
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDiseaseActivitiesReportDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesReportDialog *)pWnd)->OnDoctorAddNew();
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
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 89, 110, 114);
	m_wndDoctor.Create(this,115, 89, 395, 114); 
	/*m_wndOutPatient.Create(this, _T("OutPatient"), 12, 119, 134, 144);
	m_wndInPatient.Create(this, _T("InPatient"), 139, 119, 261, 144);
	m_wndAllHospitals.Create(this, _T("AllHospitals"), 266, 119, 388, 144);*/
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 154, 230, 179);
	m_wndPrint.Create(this, _T("&Print"), 235, 154, 315, 179);
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
//	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

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
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
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
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);

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
	m_szDoctorKey.Empty();
	


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
void CHMSDiseaseActivitiesReportDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiseaseActivitiesReportDialog::OnDoctorSelendok(){
	 
}
/*void CHMSDiseaseActivitiesReportDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSDiseaseActivitiesReportDialog::OnDoctorKillfocus(){
	
}*/
long CHMSDiseaseActivitiesReportDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty())
	{
			szWhere.Format(_T(" AND su_userid='%s' "), m_szDoctorKey);
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select su_userid as userid, su_name as name from sys_user ORDER BY userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	
}
/*void CHMSDiseaseActivitiesReportDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDiseaseActivitiesReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview=true;
	Printbaocaotinhhinhbenhtattuvong(m_szFromDate, m_szToDate, m_szDoctorKey, m_bPreview);
	UpdateData(false);
	
} 
void CHMSDiseaseActivitiesReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview =false;
	Printbaocaotinhhinhbenhtattuvong(m_szFromDate, m_szToDate, m_szDoctorKey, m_bPreview);
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
 _fmsg(_T("%s"), szSQL); 
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

void CHMSDiseaseActivitiesReportDialog::Printbaocaotinhhinhbenhtattuvong(CString szFromDate, CString szToDate, CString szDoctor, bool bPreview){	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhereExam, szWhereIn;
	CString szDate, szSysDate, szOldLine, szNewLine;
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

	szSQL.Format(_T(" SELECT (SELECT hic_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
				_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
				_T(" 	where hi_icd=icd limit 1) as namechapter,	") \
				_T("	(SELECT hic_id from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
				_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
				_T(" 	where hi_icd=icd limit 1) as icdchapter,	") \
				_T(" 	(SELECT hig_name from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
				_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
				_T(" 	where hi_icd=icd limit 1) as nameGroup,") \
				_T(" 	(SELECT hig_icd from hms_icd left join hms_icdgroup on(hi_groupid=hig_id) ") \
				_T(" 	left join hms_icdchapter on(hic_id=hig_chapterid)") \
				_T(" 	where hi_icd=icd limit 1) as ICDGroup,	") \
				_T(" 	sum(TongsoKB) as TongsoKB, sum(TSTreemKB) as TSTreemKB, sum(TsTuvongKB) as TsTuvongKB,") \
				_T(" 	sum(TongsoDT) as TongsoDT, sum(TSTuvongDT) as TSTuvongDT, sum(TSDieutri) as TSDieutri, ") \
				_T(" 	sum(TongsoTE) as TongsoTE,sum(TongsoTE04) as TongsoTE04, sum(TongsoTE04) as TongsoTE04, ") \
				_T(" 	sum(TSTuvong15) as TSTuvong15, sum(TSTuvong04) as TSTuvong04,") \
				_T(" 	sum(TSNgayDT15) as TSNgayDT15, sum(TSNgayDT04) as TSNgayDT04") \
				_T(" FROM (SELECT hd_icd as icd, 1 as TongsoKB,") \
				_T(" 		case when date_part('year', age(hp_birthdate)) <= 6 then 1 else 0 end as TSTreemKB,") \
				_T(" 		case when hd_result in('5','6') then 1 else 0 end as TsTuvongKB, 0 as TongsoDT,0 as TSTuvongDT,0 as TSDieutri,") \
				_T(" 		0 as TongsoTE,0 as TongsoTE04, 0 as TSTuvong15, 0 as TSTuvong04,0 as TSNgayDT15, 0 as TSNgayDT04") \
				_T(" 	FROM hms_doc") \
				_T(" 	LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" 	WHERE length(hd_icd) > 0 AND hd_status='T' AND date(hd_enddate) BETWEEN date('%s') AND date('%s')") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT hcr_mainicd,0,0,0,1 as TongsoDT,") \
				_T(" 		case when hcr_result in('5','6') then 1 else 0 end  TsTuvongDT,	0,") \
				_T(" 		case when date_part('year', age(hp_birthdate)) <=15 then 1 else 0 end as TSTreem15,") \
				_T(" 		case when date_part('year', age(hp_birthdate)) <=4 then 1 else 0 end as TSTreem04,") \
				_T(" 		case when date_part('year', age(hp_birthdate)) <= 15  and hcr_result in('5','6') then 1 else 0 end as TSTuvong15,") \
				_T(" 		case when date_part('year', age(hp_birthdate)) <= 4 and hcr_result in('5','6') then 1 else 0 end as TSTuvong04,0,0") \
				_T(" 	FROM hms_clinical_record") \
				_T(" 	LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
				_T(" 	WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
				_T(" 	UNION ALL") \
				_T(" 	SELECT hcr_mainicd,0,0,0,0,0,	sum(hb_treatqty) as TongsoDT,0,0,0,0, ") \
				_T(" 		sum(case when date_part('year', age(hp_birthdate)) <= 15 then hb_treatqty else 0 end) as TSNgayDT15,") \
				_T(" 		sum(case when date_part('year', age(hp_birthdate)) <= 4 then hb_treatqty else 0 end) as TSNgayDT04") \
				_T(" 	FROM hms_clinical_record") \
				_T(" 	LEFT JOIN hms_patient ON(hp_patientno=hcr_patientno)") \
				_T(" 	LEFT JOIN hms_bed ON(hb_patientno=hcr_patientno) ") \
				_T(" 	WHERE hcr_status='T' AND length(hcr_mainicd) > 0 AND date(hcr_dischargedate) BETWEEN date('%s') AND date('%s')") \
				_T("	GROUP BY hcr_mainicd ") \
				_T(" ) as Tbltmp") \
				_T(" GROUP BY icdchapter,namechapter,nameGroup, ICDGroup	") \
				_T(" ORDER BY icdchapter,namechapter,nameGroup"), szFromDate, szToDate, szFromDate, szToDate,szFromDate, szToDate);
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);	
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);		
		return ;
	}
	
	
	//Report Header
	
	int nIndex = 1;
	long Count=0;
	long ttgrp[17],ttlTotal[17];
	
	for (int i =0; i < 16; i++)
	{
		ttgrp[i] = 0;
		ttlTotal[i] = 0;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("icdchapter"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			if (ttgrp[4] + ttgrp[7] > 0 )
			{	CString szField;
				TranslateString(_T("Total Group"), tmpStr);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );			
				for (int i =4; i < 16; i++)
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
		rs.GetValue(_T("TSTuvongDT"), Count);
			ttgrp[8]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("TSDieutri"), Count);
			ttgrp[9]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("TongsoTE"), Count);
			ttgrp[10]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("10"),tmpStr);
		rs.GetValue(_T("TongsoTE04"), Count);
			ttgrp[11]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("11"),tmpStr);
		rs.GetValue(_T("TSTuvong15"), Count);
			ttgrp[12]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("12"),tmpStr);
		rs.GetValue(_T("TSTuvong04"), Count);
			ttgrp[13]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("13"),tmpStr);
		rs.GetValue(_T("TSNgayDT15"), Count);
			ttgrp[14]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("14"),tmpStr);
		rs.GetValue(_T("TSNgayDT04"), Count);
			ttgrp[15]+=Count;
			tmpStr.Format(_T("%ld"), Count);			
		rptDetail->SetValue(_T("15"),tmpStr);
		rs.MoveNext();
	}

	if (ttgrp[4] + ttgrp[7] > 0 )
	{	
		CString szField;
		TranslateString(_T("Total Group"), tmpStr);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );			
		for (int i =4; i < 16; i++)
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
		for (int i =4; i < 16; i++)
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
	EndWaitCursor();
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
	}