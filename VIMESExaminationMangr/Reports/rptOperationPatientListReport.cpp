#include "rptOperationPatientListReport.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptOperationPatientListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptOperationPatientListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOperationPatientListReport* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((rptOperationPatientListReport *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((rptOperationPatientListReport *)pWnd)->OnDoctorAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptOperationPatientListReport *pVw = (rptOperationPatientListReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptOperationPatientListReport *pVw = (rptOperationPatientListReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptOperationPatientListReportFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReport*)pWnd)->OnAddrptOperationPatientListReport();
} 
static int _OnEditrptOperationPatientListReportFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReport*)pWnd)->OnEditrptOperationPatientListReport();
} 
static int _OnDeleterptOperationPatientListReportFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReport*)pWnd)->OnDeleterptOperationPatientListReport();
} 
static int _OnSaverptOperationPatientListReportFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReport*)pWnd)->OnSaverptOperationPatientListReport();
} 
static int _OnCancelrptOperationPatientListReportFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReport*)pWnd)->OnCancelrptOperationPatientListReport();
} 
rptOperationPatientListReport::rptOperationPatientListReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 120;
	SetDefaultValues();
}
rptOperationPatientListReport::~rptOperationPatientListReport(){
}
void rptOperationPatientListReport::OnCreateComponents(){
	m_wndrptOperationPatientListReport.Create(this, _T("List of patients to surgery orperation"), 5, 5, 346, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 8, 30, 88, 55);
	m_wndFromDate.Create(this,88, 30, 168, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 175, 30, 255, 55);
	m_wndToDate.Create(this,260, 29, 343, 54); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 9, 58, 89, 83);
	m_wndDoctor.Create(this,88, 58, 343, 83); 
	m_wndPrint.Create(this, _T("&Print"), 184, 89, 259, 114);
	m_wndClose.Create(this, _T("&Close"), 268, 89, 343, 114);

}
void rptOperationPatientListReport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1,2,3, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);


}
void rptOperationPatientListReport::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void rptOperationPatientListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);

}
void rptOperationPatientListReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptOperationPatientListReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptOperationPatientListReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDoctorKey.Empty();

}
int rptOperationPatientListReport::SetMode(int nMode){
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
/*void rptOperationPatientListReport::OnFromDateChange(){
	
} */
/*void rptOperationPatientListReport::OnFromDateSetfocus(){
	
} */
/*void rptOperationPatientListReport::OnFromDateKillfocus(){
	
} */
int rptOperationPatientListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void rptOperationPatientListReport::OnToDateChange(){
	
} */
/*void rptOperationPatientListReport::OnToDateSetfocus(){
	
} */
/*void rptOperationPatientListReport::OnToDateKillfocus(){
	
} */
int rptOperationPatientListReport::OnToDateCheckValue(){
	return 0;
} 
void rptOperationPatientListReport::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOperationPatientListReport::OnDoctorSelendok(){
	 
}
/*void rptOperationPatientListReport::OnDoctorSetfocus(){
	
}*/
/*void rptOperationPatientListReport::OnDoctorKillfocus(){
	
}*/
long rptOperationPatientListReport::OnDoctorLoadData(){
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
/*void rptOperationPatientListReport::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptOperationPatientListReport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	if(!m_szDoctorKey.IsEmpty())
		{
			szWhere.Format(_T(" AND ho_doctor='%s' "), m_szDoctorKey);
		}
	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hi_icd as icd,") \
		_T(" hi_name as namedisease,") \
		_T(" hms_operation_fee.hfe_cost as cost,") \
		_T(" ho_performdate as performdate, ") \
		_T(" ho_doctor as doctor") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_icd ON( hd_icd = hi_icd)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_operation_fee ON (ho_idx = hfe_idx )") \
		_T(" LEFT JOIN hms_card ON (hfe_patientno = hc_patientno)") \
		_T(" WHERE ho_performdate BETWEEN date('%s') AND date('%s')") \
		_T(" GROUP BY patientname, age, cardno, sex, docno, icd, namedisease, performdate, doctor,cost") \
		_T(" ORDER BY patientname, age, cardno, sex, docno, icd, namedisease, performdate, doctor,cost"), m_szFromDate, m_szToDate, szWhere); 
	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/KHAMBENH/RPT_DANHSACHBNLAMPHAUTHUATTHUTHUAT.RPT")))
	return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
//	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
//	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("HEALTH_SERVICE"), _T("SO Y TE"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITAL_NAME"), _T("TEN BENH VIEN"));	
	rpt.GetPageHeader()->SetValue(_T("pageno"), _T(" Chua co"));
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("icd"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("namedisease"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("cost"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("performdate"), tmpStr);
		rptDetail->SetValue(_T("10"), CDate::Convert(rs.GetValue(_T("performdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("doctor"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void rptOperationPatientListReport::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int rptOperationPatientListReport::OnAddrptOperationPatientListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptOperationPatientListReport::OnEditrptOperationPatientListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptOperationPatientListReport::OnDeleterptOperationPatientListReport(){
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
 	}
	return 0;
}
int rptOperationPatientListReport::OnSaverptOperationPatientListReport(){
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
 		//OnrptOperationPatientListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptOperationPatientListReport::OnCancelrptOperationPatientListReport(){
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
