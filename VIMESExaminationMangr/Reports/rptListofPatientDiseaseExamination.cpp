#include "rptListofPatientDiseaseExamination.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptListofPatientDiseaseExamination *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptListofPatientDiseaseExamination *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptListofPatientDiseaseExamination *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptListofPatientDiseaseExamination *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptListofPatientDiseaseExamination *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptListofPatientDiseaseExamination *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptListofPatientDiseaseExamination *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptListofPatientDiseaseExamination *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptListofPatientDiseaseExamination *pVw = (rptListofPatientDiseaseExamination *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptListofPatientDiseaseExamination *pVw = (rptListofPatientDiseaseExamination *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptListofPatientDiseaseExaminationFnc(CWnd *pWnd){
	 return ((rptListofPatientDiseaseExamination*)pWnd)->OnAddrptListofPatientDiseaseExamination();
} 
static int _OnEditrptListofPatientDiseaseExaminationFnc(CWnd *pWnd){
	 return ((rptListofPatientDiseaseExamination*)pWnd)->OnEditrptListofPatientDiseaseExamination();
} 
static int _OnDeleterptListofPatientDiseaseExaminationFnc(CWnd *pWnd){
	 return ((rptListofPatientDiseaseExamination*)pWnd)->OnDeleterptListofPatientDiseaseExamination();
} 
static int _OnSaverptListofPatientDiseaseExaminationFnc(CWnd *pWnd){
	 return ((rptListofPatientDiseaseExamination*)pWnd)->OnSaverptListofPatientDiseaseExamination();
} 
static int _OnCancelrptListofPatientDiseaseExaminationFnc(CWnd *pWnd){
	 return ((rptListofPatientDiseaseExamination*)pWnd)->OnCancelrptListofPatientDiseaseExamination();
} 
rptListofPatientDiseaseExamination::rptListofPatientDiseaseExamination(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
rptListofPatientDiseaseExamination::~rptListofPatientDiseaseExamination(){
}
void rptListofPatientDiseaseExamination::OnCreateComponents(){
	m_wndrptListofPatientDiseaseExamination.Create(this, _T("list of patient disease examination"), 5, 2, 357, 58);
	m_wndFromDateLabel.Create(this, _T("From Date"), 8, 28, 86, 53);
	m_wndFromDate.Create(this,93, 28, 176, 53); 
	m_wndToDateLabel.Create(this, _T("To Date"), 187, 28, 265, 53);
	m_wndToDate.Create(this,270, 28, 353, 53); 
	m_wndPrint.Create(this, _T("&Print"), 205, 63, 278, 88);
	m_wndClose.Create(this, _T("&Close"), 284, 63, 357, 88);

}
void rptListofPatientDiseaseExamination::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1,2,3, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);
}
void rptListofPatientDiseaseExamination::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void rptListofPatientDiseaseExamination::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptListofPatientDiseaseExamination::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptListofPatientDiseaseExamination::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptListofPatientDiseaseExamination::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptListofPatientDiseaseExamination::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1); 
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
/*void rptListofPatientDiseaseExamination::OnFromDateChange(){
	
} */
/*void rptListofPatientDiseaseExamination::OnFromDateSetfocus(){
	
} */
/*void rptListofPatientDiseaseExamination::OnFromDateKillfocus(){
	
} */
int rptListofPatientDiseaseExamination::OnFromDateCheckValue(){
	return 0;
} 
/*void rptListofPatientDiseaseExamination::OnToDateChange(){
	
} */
/*void rptListofPatientDiseaseExamination::OnToDateSetfocus(){
	
} */
/*void rptListofPatientDiseaseExamination::OnToDateKillfocus(){
	
} */
int rptListofPatientDiseaseExamination::OnToDateCheckValue(){
	return 0;
} 
void rptListofPatientDiseaseExamination::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	//UpdateData(true);
	CReport rpt; 
	szSQL.Format(_T("  SELECT hd_docno as docno,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname, ") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr,") \
		_T(" hc_cardno as cardno, ") \
		_T(" hd_diagnostic as diagnostic,") \
		_T(" (SELECT ho_desc FROM hms_object WHERE ho_id=hd_object) as objectname,") \
		_T(" (SELECT ho_type FROM hms_object WHERE ho_id=hd_object) as objecttype,") \
		_T(" hd_suggestion as suggestion ,") \
		_T(" hd_outpatient as outpatient,") \
		_T(" he_examdate as examdate	") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient ON( hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_exam ON (hp_patientno = he_patientno)") \
		_T(" LEFT JOIN hms_card ON (he_patientno = hc_patientno)") \
		_T(" WHERE date(he_examdate) BETWEEN date('%s') AND date('%s') ") \
		_T(" GROUP BY docno, patientname,sex, age, cardno, diagnostic ,objectname, objecttype, suggestion,outpatient,dtladdr,he_deptid,examdate") \
		_T(" ORDER BY docno, patientname, sex, age , cardno, diagnostic, objectname, objecttype, suggestion,outpatient,dtladdr,he_deptid,examdate"), m_szFromDate, m_szToDate);
		rs.ExecSQL(szSQL);	
	if(!rpt.Init(_T("Reports/KHAMBENH/RPT_DANHSACHBNKHAMBENH.RPT")) )
		return ;
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
//	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
//	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("HEALTH_SERVICE"), _T("SO Y TE"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITAL_NAME"), _T("TEN BENH VIEN"));	
	rpt.GetReportHeader()->SetValue(_T("ToltalPatient"), _T("Tongbenhnhan"));
	//Page Header
	rpt.GetPageHeader()->SetValue(_T("pageno"), _T("sotrang"));
	//Report Detail
	
	CReportSection* rptDetail = rpt.GetDetail();
	while(!rs.IsEOF())
	{
		rptDetail = rpt.GetDetail();
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//rs.GetValue(_T("sex"), tmpStr);
		//rptDetail->SetValue(_T("3"), tmpStr);
		/*if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
		}
		else
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
		}*/
		rs.GetValue(_T("dtladdr"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//rs.GetValue(_T("suggestion"), tmpStr); 
		//rptDetail->SetValue(_T("8"), tmpStr);
		/*if(tmpStr == _T("A"))
		{
			rs.GetValue(_T("outpatient"), tmpStr);
			if(tmpStr==_T("Y"))
			{
				rpt.GetDetail()->SetValue(_T("11"),_T("[X]"));	
			}
			else 
			{
				rpt.GetDetail()->SetValue(_T("11"),_T(""));
			}
		}
		if (tmpStr == _T("D"))
		{
			rpt.GetDetail()->SetValue(_T("12"), _T("[X]"));
		}	
		rptDetail->SetValue(_T("13"), tmpStr);*/
		//rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void rptListofPatientDiseaseExamination::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int rptListofPatientDiseaseExamination::OnAddrptListofPatientDiseaseExamination(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptListofPatientDiseaseExamination::OnEditrptListofPatientDiseaseExamination(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptListofPatientDiseaseExamination::OnDeleterptListofPatientDiseaseExamination(){
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
 		OnCancelrptListofPatientDiseaseExamination(); 
 	}
	return 0;
}
int rptListofPatientDiseaseExamination::OnSaverptListofPatientDiseaseExamination(){
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
 		//OnrptListofPatientDiseaseExaminationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptListofPatientDiseaseExamination::OnCancelrptListofPatientDiseaseExamination(){
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
int rptListofPatientDiseaseExamination::OnrptListofPatientDiseaseExaminationListLoadData(){
	return 0;
}
