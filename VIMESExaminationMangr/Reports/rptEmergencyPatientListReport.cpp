#include "rptEmergencyPatientListReport.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptEmergencyPatientListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptEmergencyPatientListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptEmergencyPatientListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptEmergencyPatientListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptEmergencyPatientListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptEmergencyPatientListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptEmergencyPatientListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptEmergencyPatientListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptEmergencyPatientListReport *pVw = (rptEmergencyPatientListReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptEmergencyPatientListReport *pVw = (rptEmergencyPatientListReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptEmergencyPatientListReportFnc(CWnd *pWnd){
	 return ((rptEmergencyPatientListReport*)pWnd)->OnAddrptEmergencyPatientListReport();
} 
static int _OnEditrptEmergencyPatientListReportFnc(CWnd *pWnd){
	 return ((rptEmergencyPatientListReport*)pWnd)->OnEditrptEmergencyPatientListReport();
} 
static int _OnDeleterptEmergencyPatientListReportFnc(CWnd *pWnd){
	 return ((rptEmergencyPatientListReport*)pWnd)->OnDeleterptEmergencyPatientListReport();
} 
static int _OnSaverptEmergencyPatientListReportFnc(CWnd *pWnd){
	 return ((rptEmergencyPatientListReport*)pWnd)->OnSaverptEmergencyPatientListReport();
} 
static int _OnCancelrptEmergencyPatientListReportFnc(CWnd *pWnd){
	 return ((rptEmergencyPatientListReport*)pWnd)->OnCancelrptEmergencyPatientListReport();
} 
rptEmergencyPatientListReport::rptEmergencyPatientListReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
rptEmergencyPatientListReport::~rptEmergencyPatientListReport(){
}
void rptEmergencyPatientListReport::OnCreateComponents(){
	m_wndrptEmergencyPatientListReport.Create(this, _T("List of emergency patients"), 5, 2, 357, 58);
	m_wndFromDateLabel.Create(this, _T("From Date"), 8, 28, 86, 53);
	m_wndFromDate.Create(this,93, 28, 176, 53); 
	m_wndToDateLabel.Create(this, _T("To Date"), 184, 28, 262, 53);
	m_wndToDate.Create(this,269, 28, 352, 53); 
	m_wndPrint.Create(this, _T("&Print"), 200, 63, 273, 88);
	m_wndClose.Create(this, _T("&Close"), 284, 63, 357, 88);

}
void rptEmergencyPatientListReport::OnInitializeComponents(){
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
void rptEmergencyPatientListReport::OnSetWindowEvents(){
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
void rptEmergencyPatientListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptEmergencyPatientListReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptEmergencyPatientListReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptEmergencyPatientListReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptEmergencyPatientListReport::SetMode(int nMode){
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
/*void rptEmergencyPatientListReport::OnFromDateChange(){
	
} */
/*void rptEmergencyPatientListReport::OnFromDateSetfocus(){
	
} */
/*void rptEmergencyPatientListReport::OnFromDateKillfocus(){
	
} */
int rptEmergencyPatientListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void rptEmergencyPatientListReport::OnToDateChange(){
	
} */
/*void rptEmergencyPatientListReport::OnToDateSetfocus(){
	
} */
/*void rptEmergencyPatientListReport::OnToDateKillfocus(){
	
} */
int rptEmergencyPatientListReport::OnToDateCheckValue(){
	return 0;
} 
void rptEmergencyPatientListReport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	szSQL.Format(_T(" SELECT distinct hd_docno as docno, ") \
		_T(" hd_admitdate as admitdate,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr,") \
		_T(" hc_cardno as cardno,") \
		_T(" hd_conclusion as conclusion ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno and hc_idx=hd_cardidx)") \
		_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno) ") \
		_T(" WHERE date(hd_admitdate) BETWEEN date('%s') AND date('%s') AND he_emergency='Y' AND he_status <> 'O' ") \
		_T(" GROUP BY admitdate, docno, pname, age, sex, dtladdr, cardno, conclusion ") \
		_T(" ORDER BY admitdate, docno, pname, age, sex, dtladdr, cardno, conclusion"), m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	//_msg(_T("%s"), szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_EMERGENCYPATIENTLIST.RPT")) )
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
			CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
//	rpt.GetPageHeader()->SetValue(_T("pageno"), _T(" Chua co"));
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 0;
	while(!rs.IsEOF())
	{
		//rpt.AddDetail();
		rptDetail = rpt.AddDetail();
		nIndex++;	
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("admitdate"), tmpStr);
		rptDetail->SetValue(_T("2"), CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("dtladdr"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("conclusion"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.MoveNext();
	}
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void rptEmergencyPatientListReport::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptEmergencyPatientListReport::OnAddrptEmergencyPatientListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptEmergencyPatientListReport::OnEditrptEmergencyPatientListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptEmergencyPatientListReport::OnDeleterptEmergencyPatientListReport(){
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
 		OnCancelrptEmergencyPatientListReport(); 
 	}
	return 0;
}
int rptEmergencyPatientListReport::OnSaverptEmergencyPatientListReport(){
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
 		//OnrptEmergencyPatientListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptEmergencyPatientListReport::OnCancelrptEmergencyPatientListReport(){
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
int rptEmergencyPatientListReport::OnrptEmergencyPatientListReportListLoadData(){
	return 0;
}
