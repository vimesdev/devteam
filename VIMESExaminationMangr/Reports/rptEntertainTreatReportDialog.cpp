#include "rptEntertainTreatReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptEntertainTreatReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptEntertainTreatReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptEntertainTreatReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptEntertainTreatReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptEntertainTreatReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptEntertainTreatReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptEntertainTreatReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptEntertainTreatReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptEntertainTreatReportDialog *pVw = (rptEntertainTreatReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptEntertainTreatReportDialog *pVw = (rptEntertainTreatReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptEntertainTreatReportDialog*)pWnd)->OnAddrptEntertainTreatReportDialog();
} 
static int _OnEditrptEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptEntertainTreatReportDialog*)pWnd)->OnEditrptEntertainTreatReportDialog();
} 
static int _OnDeleterptEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptEntertainTreatReportDialog*)pWnd)->OnDeleterptEntertainTreatReportDialog();
} 
static int _OnSaverptEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptEntertainTreatReportDialog*)pWnd)->OnSaverptEntertainTreatReportDialog();
} 
static int _OnCancelrptEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptEntertainTreatReportDialog*)pWnd)->OnCancelrptEntertainTreatReportDialog();
} 
rptEntertainTreatReportDialog::rptEntertainTreatReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
rptEntertainTreatReportDialog::~rptEntertainTreatReportDialog(){
}
void rptEntertainTreatReportDialog::OnCreateComponents(){
	m_wndReportConditio.Create(this, _T("Report Condition"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrint.Create(this, _T("&Print"), 195, 65, 275, 90);
	m_wndClose.Create(this, _T("&Close"), 280, 65, 360, 90);

}
void rptEntertainTreatReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void rptEntertainTreatReportDialog::OnSetWindowEvents(){
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);
}
void rptEntertainTreatReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptEntertainTreatReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptEntertainTreatReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptEntertainTreatReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptEntertainTreatReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void rptEntertainTreatReportDialog::OnFromDateChange(){
	
} */
/*void rptEntertainTreatReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptEntertainTreatReportDialog::OnFromDateKillfocus(){
	
} */
int rptEntertainTreatReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptEntertainTreatReportDialog::OnToDateChange(){
	
} */
/*void rptEntertainTreatReportDialog::OnToDateSetfocus(){
	
} */
/*void rptEntertainTreatReportDialog::OnToDateKillfocus(){
	
} */
int rptEntertainTreatReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptEntertainTreatReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	szSQL.Format(_T(" SELECT hd_docno as docno, hp_patientno as patientno,") \
_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as Age, ") \
_T(" 	hp_sex as sexid,") \
_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
_T(" 	sys_sel_getname('sys_ethnic', cast(hp_ethnic as text)) as ethnic,") \
_T(" 	hms_getaddress(hp_provid, hp_distid, hp_villid) as Address,") \
_T(" 	hp_occupation as occupationid,") \
_T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as text)) as occupation,") \
_T(" 	hp_workplace as WorkPlace,") \
_T(" 	hp_birthdate as Birthdate,") \
_T("	hd_diagnostic as diagnostic, ") \
_T(" 	(select hh_name from hms_hospital where trim(hh_id)=trim(hd_tohosid) limit 1) as transfer_hospital,") \
_T(" 	htd_date as treat_date,") \
_T(" 	hd_doctor as doctor,") \
_T(" 	(select ss_desc as name FROM sys_sel WHERE ss_id='hms_dttd_grp' and ss_code=htd_group limit 1) as tuber_group,") \
_T(" 	(select ss_desc as name FROM sys_sel WHERE ss_id='hms_dttd_type' and ss_code=htd_group limit 1) as infection_group	") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc on (hp_patientno = hd_patientno)") \
_T(" LEFT JOIN hms_treatment_dttd ON(htd_docno=hd_docno)") \
_T(" WHERE htd_date BETWEEN date('%s') and date('%s') and hd_suggestion='T' ") \
, m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_ENTERTINTREATPATIENTLIST.RPT")) )
	{
		return ;
	}
	//Report Header
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDate::Convert(m_szFromDate), CDate::Convert(m_szToDate));
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
		rs.GetValue(_T("treat_date"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("transfer_hospital"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("doctor"), tmpStr);
		rptDetail->SetValue(_T("10"), pMF->GetDoctorName(tmpStr));
		rs.GetValue(_T("tuber_group"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.GetValue(_T("infection_group"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		rs.MoveNext();
	}
	//Report Footer
	rpt.GetReportFooter()->Format(_T("PrintDate"),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.PrintPreview();
} 
void rptEntertainTreatReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int rptEntertainTreatReportDialog::OnAddrptEntertainTreatReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptEntertainTreatReportDialog::OnEditrptEntertainTreatReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptEntertainTreatReportDialog::OnDeleterptEntertainTreatReportDialog(){
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
 		OnCancelrptEntertainTreatReportDialog(); 
 	}
	return 0;
}
int rptEntertainTreatReportDialog::OnSaverptEntertainTreatReportDialog(){
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
 		//OnrptEntertainTreatReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptEntertainTreatReportDialog::OnCancelrptEntertainTreatReportDialog(){
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
int rptEntertainTreatReportDialog::OnrptEntertainTreatReportDialogListLoadData(){
	return 0;
}
