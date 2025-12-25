#include "TMOperationMinutes.h"
#include "MainFrame_E10.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationMinutes *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationMinutes *)pWnd)->OnNameCheckValue();
} 
/*static void _OnOperationChangeFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnOperationChange();
} */
/*static void _OnOperationSetfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnOperationSetfocus();} */ 
/*static void _OnOperationKillfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnOperationKillfocus();
} */
static int _OnOperationCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationMinutes *)pWnd)->OnOperationCheckValue();
} 
/*static void _OnProcessChangeFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnProcessChange();
} */
/*static void _OnProcessSetfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnProcessSetfocus();} */ 
/*static void _OnProcessKillfocusFnc(CWnd *pWnd){
	((CTMOperationMinutes *)pWnd)->OnProcessKillfocus();
} */
static int _OnProcessCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationMinutes *)pWnd)->OnProcessCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CTMOperationMinutes *pVw = (CTMOperationMinutes *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMOperationMinutes *pVw = (CTMOperationMinutes *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMOperationMinutes *pVw = (CTMOperationMinutes *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMOperationMinutes *pVw = (CTMOperationMinutes *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMOperationMinutes *pVw = (CTMOperationMinutes *)pWnd;
	pVw->OnCloseSelect();
} 
CTMOperationMinutes::CTMOperationMinutes(CWnd *pParent, long nOptIdx):
	CGuiDialog(pParent){
	m_nOperationIdx = nOptIdx;
	m_nDlgWidth = 1030;
	m_nDlgHeight = 700;
	SetDefaultValues();
}
CTMOperationMinutes::~CTMOperationMinutes(){
}
void CTMOperationMinutes::OnCreateComponents(){
	m_wndOperationMinutes.Create(this, _T("Operation Minutes"), 5, 5, 1020, 660);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 110, 55);
	m_wndDocNo.Create(this,115, 30, 195, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 200, 30, 280, 55);
	m_wndName.Create(this,285, 30, 485, 55); 
	m_wndOperationLabel.Create(this, _T("Operation"), 490, 30, 570, 55);
	m_wndOperation.Create(this,575, 30, 1015, 55); 
	m_wndPostOperationalLabel.Create(this, _T("Post Operational"), 10, 60, 110, 85);
	m_wndPostOperational.Create(this,115, 60, 485, 85);
	m_wndProcessLabel.Create(this, _T("Process"), 10, 90, 90, 115);
	m_wndProcess.Create(this,10, 120, 1015, 655); 
	m_wndUpdate.Create(this, _T("&Update"), 600, 665, 680, 690);
	m_wndSave.Create(this, _T("&Save"), 685, 665, 765, 690);
	m_wndCancel.Create(this, _T("&Cancel"), 770, 665, 850, 690);
	m_wndPrint.Create(this, _T("&Print"), 855, 665, 935, 690);
	m_wndClose.Create(this, _T("&Close"), 940, 665, 1020, 690);
 


}
void CTMOperationMinutes::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(1024);
	m_wndDocNo.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndOperation.SetLimitText(1024);
	m_wndOperation.SetCheckValue(true);
	m_wndProcess.SetLimitText(1024);
	m_wndProcess.SetCheckValue(true);

}
void CTMOperationMinutes::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndOperation.SetEvent(WE_CHANGE, _OnOperationChangeFnc);
	//m_wndOperation.SetEvent(WE_SETFOCUS, _OnOperationSetfocusFnc);
	//m_wndOperation.SetEvent(WE_KILLFOCUS, _OnOperationKillfocusFnc);
	m_wndOperation.SetEvent(WE_CHECKVALUE, _OnOperationCheckValueFnc);
	//m_wndProcess.SetEvent(WE_CHANGE, _OnProcessChangeFnc);
	//m_wndProcess.SetEvent(WE_SETFOCUS, _OnProcessSetfocusFnc);
	//m_wndProcess.SetEvent(WE_KILLFOCUS, _OnProcessKillfocusFnc);
	m_wndProcess.SetEvent(WE_CHECKVALUE, _OnProcessCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CTMOperationMinutes::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndOperation.GetDlgCtrlID(), m_szOperation);
	DDX_Text(pDX, m_wndPostOperational.GetDlgCtrlID(), m_szPostOperational);
	DDX_Text(pDX, m_wndProcess.GetDlgCtrlID(), m_szProcess);

}
void CTMOperationMinutes::SetDefaultValues(){

	m_nDocNo=0;
	m_szName.Empty();
	m_szOperation.Empty();
	m_szProcess.Empty();

}
int CTMOperationMinutes::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 1, 2, -1);
			m_wndDocNo.EnableWindow(FALSE);
			m_wndName.EnableWindow(FALSE);
			m_wndOperation.EnableWindow(FALSE);
			m_wndPostOperational.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 2, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 4, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}

void CTMOperationMinutes::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ho_docno doc_no, ") \
				 _T("		get_patientname(ho_docno) patient_name, ") \
				 _T("		ho_comment operation_name,") \
				 _T("		ho_postoperational post_operational,") \
				 _T("		ho_process process ") \
				 _T("FROM hms_operation ") \
				 _T("WHERE ho_idx = %ld"), m_nOperationIdx);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		SetMode(VM_NONE);
		return;
	}
	else
	{
		rs.GetValue(_T("doc_no"), m_nDocNo);
		rs.GetValue(_T("patient_name"), m_szName);
		rs.GetValue(_T("operation_name"), m_szOperation);
		rs.GetValue(_T("post_operational"), m_szPostOperational);
		rs.GetValue(_T("process"), m_szProcess);
		SetMode(VM_VIEW);
	}
}

/*void CTMOperationMinutes::OnDocNoChange(){
	
} */
/*void CTMOperationMinutes::OnDocNoSetfocus(){
	
} */
/*void CTMOperationMinutes::OnDocNoKillfocus(){
	
} */
int CTMOperationMinutes::OnDocNoCheckValue(){
	return 0;
} 
/*void CTMOperationMinutes::OnNameChange(){
	
} */
/*void CTMOperationMinutes::OnNameSetfocus(){
	
} */
/*void CTMOperationMinutes::OnNameKillfocus(){
	
} */
int CTMOperationMinutes::OnNameCheckValue(){
	return 0;
} 
/*void CTMOperationMinutes::OnOperationChange(){
	
} */
/*void CTMOperationMinutes::OnOperationSetfocus(){
	
} */
/*void CTMOperationMinutes::OnOperationKillfocus(){
	
} */
int CTMOperationMinutes::OnOperationCheckValue(){
	return 0;
} 
/*void CTMOperationMinutes::OnProcessChange(){
	
} */
/*void CTMOperationMinutes::OnProcessSetfocus(){
	
} */
/*void CTMOperationMinutes::OnProcessKillfocus(){
	
} */
int CTMOperationMinutes::OnProcessCheckValue(){
	return 0;
} 
void CTMOperationMinutes::OnUpdateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (GetMode() == VM_VIEW)
		SetMode(VM_EDIT);
} 
void CTMOperationMinutes::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!IsValidateData())
		return;
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_operation SET ho_process = '%s', ho_postoperational = '%s' WHERE ho_idx = %ld")
		, m_szProcess, m_szPostOperational, m_nOperationIdx);
	int nRes = pMF->ExecSQL(szSQL);
	if (nRes > 0)
		SetMode(VM_VIEW);
	else
		AfxMessageBox(_T("Update failed!"));
	return;
} 
void CTMOperationMinutes::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (GetMode() == VM_EDIT)
		SetMode(VM_VIEW);
	else
		SetMode(VM_NONE);
} 
void CTMOperationMinutes::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL;
	CString szSQL;
	if (!rpt.Init(_T("Reports\\HMS\\BIENBANPHAUTHUAT.RPT")))
		return;
	szSQL.Format(_T("SELECT ho_docno doc_no, ") \
				 _T("		upper(get_patientname(ho_docno)) patient_name, ") \
				 _T("		extract(year from hp_birthdate) yob,") \
				 _T("		ho_diagnostic diagnosis,") \
				 _T("		ho_postoperational post_operational,") \
				 _T("		(select ham_name from hms_anaesthetic_method where ham_idx = ho_anes_method) operation_method,") \
				 _T("		get_username(ho_practitioner) practitioner,") \
				 _T("		get_username(ho_assistant) assistant,") \
				 _T("		get_username(ho_anaes_method) main_anesthetist,") \
				 _T("		get_username(ho_anesthetist) anesthetist,") \
				 _T("		ho_process operation_process ") \
				 _T("FROM hms_operation ") \
				 _T("LEFT JOIN hms_patient ON (hp_patientno = ho_patientno)") \
				 _T("WHERE ho_idx = %ld AND ho_status = 'T'"), m_nOperationIdx);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;
	rptHeader = rpt.GetReportHeader();
	if (!rptHeader)
		return;
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	rptHeader->SetValue(_T("Patientname"), rs.GetValue(_T("patient_name")));
	rptHeader->SetValue(_T("yearofbirth"), rs.GetValue(_T("yob")));
	rptHeader->SetValue(_T("documentno"), rs.GetValue(_T("doc_no")));
	rptHeader->SetValue(_T("prediagnosis"), rs.GetValue(_T("diagnosis")));
	rptHeader->SetValue(_T("post_operational"), rs.GetValue(_T("post_operational")));
	rptHeader->SetValue(_T("operation_method"), rs.GetValue(_T("operation_method")));
	rptHeader->SetValue(_T("practitioner"), rs.GetValue(_T("practitioner")));
	rptHeader->SetValue(_T("assistant"), rs.GetValue(_T("assistant")));
	rptHeader->SetValue(_T("main_anesthetist"), rs.GetValue(_T("main_anesthetist")));
	rptHeader->SetValue(_T("anesthetist"), rs.GetValue(_T("anesthetist")));
	rptHeader->SetValue(_T("process"), rs.GetValue(_T("operation_process")));
	rpt.PrintPreview();
} 
void CTMOperationMinutes::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
