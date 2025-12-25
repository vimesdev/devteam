#include "rptListofInPatientTreatment.h"
#include "../MainFrm.h"
#include "ReportDocument.h";
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptListofInPatientTreatment *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptListofInPatientTreatment *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptListofInPatientTreatment *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptListofInPatientTreatment *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptListofInPatientTreatment *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptListofInPatientTreatment *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptListofInPatientTreatment *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptListofInPatientTreatment *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptListofInPatientTreatment *pVw = (rptListofInPatientTreatment *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptListofInPatientTreatment *pVw = (rptListofInPatientTreatment *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptListofInPatientTreatmentFnc(CWnd *pWnd){
	 return ((rptListofInPatientTreatment*)pWnd)->OnAddrptListofInPatientTreatment();
} 
static int _OnEditrptListofInPatientTreatmentFnc(CWnd *pWnd){
	 return ((rptListofInPatientTreatment*)pWnd)->OnEditrptListofInPatientTreatment();
} 
static int _OnDeleterptListofInPatientTreatmentFnc(CWnd *pWnd){
	 return ((rptListofInPatientTreatment*)pWnd)->OnDeleterptListofInPatientTreatment();
} 
static int _OnSaverptListofInPatientTreatmentFnc(CWnd *pWnd){
	 return ((rptListofInPatientTreatment*)pWnd)->OnSaverptListofInPatientTreatment();
} 
static int _OnCancelrptListofInPatientTreatmentFnc(CWnd *pWnd){
	 return ((rptListofInPatientTreatment*)pWnd)->OnCancelrptListofInPatientTreatment();
} 
rptListofInPatientTreatment::rptListofInPatientTreatment(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
rptListofInPatientTreatment::~rptListofInPatientTreatment(){
}
void rptListofInPatientTreatment::OnCreateComponents(){
	m_wndrptListofInPatientTreatment.Create(this, _T("List of In Patient Treatment"), 5, 2, 357, 58);
	m_wndFromDateLabel.Create(this, _T("From Date"), 8, 28, 86, 53);
	m_wndFromDate.Create(this,93, 28, 176, 53); 
	m_wndToDateLabel.Create(this, _T("To Date"), 184, 28, 262, 53);
	m_wndToDate.Create(this,269, 28, 352, 53); 
	m_wndPrint.Create(this, _T("&Print"), 204, 63, 277, 88);
	m_wndClose.Create(this, _T("&Close"), 284, 63, 357, 88);

}
void rptListofInPatientTreatment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1,2, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);
}
void rptListofInPatientTreatment::OnSetWindowEvents(){
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
void rptListofInPatientTreatment::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptListofInPatientTreatment::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptListofInPatientTreatment::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptListofInPatientTreatment::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptListofInPatientTreatment::SetMode(int nMode){
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
/*void rptListofInPatientTreatment::OnFromDateChange(){
	
} */
/*void rptListofInPatientTreatment::OnFromDateSetfocus(){
	
} */
/*void rptListofInPatientTreatment::OnFromDateKillfocus(){
	
} */
int rptListofInPatientTreatment::OnFromDateCheckValue(){
	return 0;
} 
/*void rptListofInPatientTreatment::OnToDateChange(){
	
} */
/*void rptListofInPatientTreatment::OnToDateSetfocus(){
	
} */
/*void rptListofInPatientTreatment::OnToDateKillfocus(){
	
} */
int rptListofInPatientTreatment::OnToDateCheckValue(){
	return 0;
} 
void rptListofInPatientTreatment::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
	CReport rpt;
	UpdateData(true);	
	szSQL.Format(_T(" SELECT  hd_admitdate as admitdate,") \
		_T(" hd_docno  as docno,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hp_dtladdr||'-'||hms_getaddress(hp_provid, hp_distid, hp_villid) as dtladdr,") \
		_T(" (Select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid) as roomname,") \
		_T(" hcr_maindisease as maindisease,") \
		_T(" 	hcr_treatdoctor as treatdoctor") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hd_docno = hcr_docno)") \
		_T(" LEFT JOIN hms_exam ON(hcr_docno = he_docno)") \
		_T(" WHERE hd_admitdate BETWEEN date('%s') AND date('%s')") \
		_T(" GROUP BY admitdate, docno,  patientname, age, sex, dtladdr,roomname, maindisease, treatdoctor") \
		_T(" ORDER BY admitdate, docno,  patientname, age, sex, dtladdr,roomname, maindisease, treatdoctor"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
		if(!rpt.Init(_T("Reports/NOITRU/RPT_DANHSACHBENHNHANNOITRUDANGDIEUTRI.RPT")) )
		return;
	//Report Header
	rpt.GetReportHeader()->SetValue(_T("HEATH_SERVICE"), _T("SO Y TE"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITAL_NAME"), _T("BENH VIEN THANH NHAN"));
//	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
//	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
			CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	//Page Header
	rpt.GetPageHeader()->SetValue(_T("PageNo"), _T("Sotrang"));
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("admitdate"), tmpStr);
		rptDetail->SetValue(_T("1"), CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("dtladdr"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//rs.GetValue(_T("bedname"), tmpStr);
		//rptDetail->SetValue(_T("8"), tmpStr);*/
		rs.GetValue(_T("maindisease"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("treatdoctor"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	
} 
void rptListofInPatientTreatment::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int rptListofInPatientTreatment::OnAddrptListofInPatientTreatment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptListofInPatientTreatment::OnEditrptListofInPatientTreatment(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptListofInPatientTreatment::OnDeleterptListofInPatientTreatment(){
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
 		OnCancelrptListofInPatientTreatment(); 
 	}
	return 0;
}
int rptListofInPatientTreatment::OnSaverptListofInPatientTreatment(){
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
 		//OnrptListofInPatientTreatmentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptListofInPatientTreatment::OnCancelrptListofInPatientTreatment(){
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
int rptListofInPatientTreatment::OnrptListofInPatientTreatmentListLoadData(){
	return 0;
}
