#include "HMSAdmissionClinicalDialog.h"
#include "MainFrm.h"
#include "HMSDiseasePrehistoryDialog.h"
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnAdmitDateCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnPathologicalChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnPathologicalChange();
} */
/*static void _OnPathologicalSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnPathologicalSetfocus();} */ 
/*static void _OnPathologicalKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnPathologicalKillfocus();
} */
static int _OnPathologicalCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnPathologicalCheckValue();
} 
/*static void _OnDiseasePrehistoryChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnDiseasePrehistoryChange();
} */
/*static void _OnDiseasePrehistorySetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnDiseasePrehistorySetfocus();} */ 
/*static void _OnDiseasePrehistoryKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnDiseasePrehistoryKillfocus();
} */
static int _OnDiseasePrehistoryCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnDiseasePrehistoryCheckValue();
} 
static int _OnDiseasePrehistoryClickFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnDiseasePrehistoryClick();
} 
/*static void _OnSystemicChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnSystemicChange();
} */
/*static void _OnSystemicSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnSystemicSetfocus();} */ 
/*static void _OnSystemicKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnSystemicKillfocus();
} */
static int _OnSystemicCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnSystemicCheckValue();
} 
/*static void _OnPathsOfBodyChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnPathsOfBodyChange();
} */
/*static void _OnPathsOfBodySetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnPathsOfBodySetfocus();} */ 
/*static void _OnPathsOfBodyKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnPathsOfBodyKillfocus();
} */
static int _OnPathsOfBodyCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnPathsOfBodyCheckValue();
} 
/*static void _OnTestsChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnTestsChange();
} */
/*static void _OnTestsSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnTestsSetfocus();} */ 
/*static void _OnTestsKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnTestsKillfocus();
} */
static int _OnTestsCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnTestsCheckValue();
} 
/*static void _OnSummarizeChangeFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnSummarizeChange();
} */
/*static void _OnSummarizeSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnSummarizeSetfocus();} */ 
/*static void _OnSummarizeKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionClinicalDialog *)pWnd)->OnSummarizeKillfocus();
} */
static int _OnSummarizeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionClinicalDialog *)pWnd)->OnSummarizeCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSAdmissionClinicalDialog *pVw = (CHMSAdmissionClinicalDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdmissionClinicalDialog *pVw = (CHMSAdmissionClinicalDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdmissionClinicalDialog *pVw = (CHMSAdmissionClinicalDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAdmissionClinicalDialog *pVw = (CHMSAdmissionClinicalDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdmissionClinicalDialog *pVw = (CHMSAdmissionClinicalDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdmissionClinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionClinicalDialog*)pWnd)->OnAddHMSAdmissionClinicalDialog();
} 
static int _OnEditHMSAdmissionClinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionClinicalDialog*)pWnd)->OnEditHMSAdmissionClinicalDialog();
} 
static int _OnDeleteHMSAdmissionClinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionClinicalDialog*)pWnd)->OnDeleteHMSAdmissionClinicalDialog();
} 
static int _OnSaveHMSAdmissionClinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionClinicalDialog*)pWnd)->OnSaveHMSAdmissionClinicalDialog();
} 
static int _OnCancelHMSAdmissionClinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionClinicalDialog*)pWnd)->OnCancelHMSAdmissionClinicalDialog();
} 
CHMSAdmissionClinicalDialog::CHMSAdmissionClinicalDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 695;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szPathological.Empty();
	m_szDiseasePrehistory.Empty();
	m_szSystemic.Empty();
	m_szPathsOfBody.Empty();
	m_szTests.Empty();
	m_szSummarize.Empty();

}
CHMSAdmissionClinicalDialog::~CHMSAdmissionClinicalDialog(){
}
void CHMSAdmissionClinicalDialog::OnCreateComponents(){
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 5, 5, 125, 30);
	m_wndAdmitDate.Create(this,130, 5, 255, 30); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 260, 5, 375, 30);
	m_wndDepartment.Create(this,380, 5, 687, 30); 
	m_wndReasonLabel.Create(this, _T("Reason"), 5, 35, 125, 60);
	m_wndReason.Create(this,130, 35, 687, 60); 
	m_wndPathologicalLabel.Create(this, _T("Pathology Process"), 5, 65, 125, 90);
	m_wndPathological.Create(this,130, 65, 687, 115, TRUE, FALSE, TRUE); 
	m_wndDiseasePrehistoryLabel.Create(this, _T("Disease Prehistory"), 5, 120, 125, 145);
	m_wndDiseasePrehistory.Create(this,130, 120, 687, 170, TRUE, FALSE, TRUE);
	m_wndSystemicLabel.Create(this, _T("Systemic"), 5, 175, 125, 200);
	m_wndSystemic.Create(this,130, 175, 687, 250, TRUE, FALSE, TRUE);
	m_wndPathsOfBodyLabel.Create(this, _T("Paths of body"), 5, 255, 125, 280);
	m_wndPathsOfBody.Create(this,130, 255, 687, 455, TRUE, FALSE, TRUE);
	m_wndTestsLabel.Create(this, _T("Tests"), 5, 460, 125, 485);
	m_wndTests.Create(this,130, 460, 687, 510, TRUE, FALSE, TRUE);
	m_wndSummarizeLabel.Create(this, _T("Summarize"), 5, 515, 125, 540);
	m_wndSummarize.Create(this,130, 515, 687, 565, TRUE, FALSE, TRUE);
	m_wndUpdate.Create(this, _T("&Update"), 296, 570, 371, 595);
	m_wndSave.Create(this, _T("&Save"), 376, 570, 451, 595);
	m_wndCancel.Create(this, _T("&Cancel"), 456, 570, 531, 595);
	m_wndPrint.Create(this, _T("&Print"), 536, 570, 611, 595);
	m_wndClose.Create(this, _T("&Close"), 616, 570, 691, 595);


}
void CHMSAdmissionClinicalDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndAdmitDate.SetReadOnly(true);
	
	m_wndDepartment.SetLimitText(7);
	m_wndDepartment.SetReadOnly(true);
	m_wndReason.SetLimitText(128);
	//m_wndReason.SetCheckValue(true);
	m_wndPathological.SetLimitText(1024);
	//m_wndPathological.SetCheckValue(true);
	m_wndDiseasePrehistory.SetLimitText(1024);
	m_wndDiseasePrehistory.SetReadOnly(true);
	m_wndDiseasePrehistoryLabel.SetHyperlink(true);
	m_wndSystemic.SetLimitText(1024);
	//m_wndSystemic.SetCheckValue(true);
	m_wndPathsOfBody.SetLimitText(1024);
	//m_wndPathsOfBody.SetCheckValue(true);
	m_wndTests.SetLimitText(512);
	//m_wndTests.SetCheckValue(true);
	m_wndSummarize.SetLimitText(1024);
	//m_wndSummarize.SetCheckValue(true);
	m_hms_clinical_recordTbl.SetTableName(_T("hms_clinical_record"));
	m_hms_clinical_recordTbl.AddField(_T("hcr_createdby"), dfText, 15); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_createddate"), dfDateTime); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_updatedby"), dfText, 15); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_updateddate"), dfDateTime); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_patientno"), dfLong); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_docno"), dfLong); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_recordno"), dfText, 15); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_status"), dfText, 1); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admitdate"), dfDateTime); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admitdept"), dfText, 7); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admiticd"), dfText, 13); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admitdisease"), dfText, 7); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_reason"), dfText, 128); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_pathological"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_systemic"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_partsbody"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_speciality"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_tests"), dfText, 512); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_summarize"), dfText, 1024);

	m_hms_treatment_recordTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatment_recordTbl.AddField(_T("htr_createdby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_createddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updatedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updateddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_patientno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_docno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_deptid"), dfText, 7); 
	m_hms_treatment_recordTbl.AddField(_T("htr_recordno"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_idx"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_status"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254); 
	m_hms_treatment_recordTbl.AddField(_T("htr_sumtreat"), dfInteger); 

	
}
void CHMSAdmissionClinicalDialog::OnSetWindowEvents(){
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	//m_wndPathological.SetEvent(WE_CHANGE, _OnPathologicalChangeFnc);
	//m_wndPathological.SetEvent(WE_SETFOCUS, _OnPathologicalSetfocusFnc);
	//m_wndPathological.SetEvent(WE_KILLFOCUS, _OnPathologicalKillfocusFnc);
	m_wndPathological.SetEvent(WE_CHECKVALUE, _OnPathologicalCheckValueFnc);
	//m_wndDiseasePrehistory.SetEvent(WE_CHANGE, _OnDiseasePrehistoryChangeFnc);
	//m_wndDiseasePrehistory.SetEvent(WE_SETFOCUS, _OnDiseasePrehistorySetfocusFnc);
	//m_wndDiseasePrehistory.SetEvent(WE_KILLFOCUS, _OnDiseasePrehistoryKillfocusFnc);
	m_wndDiseasePrehistory.SetEvent(WE_CHECKVALUE, _OnDiseasePrehistoryCheckValueFnc);
	m_wndDiseasePrehistoryLabel.SetEvent(WE_CLICK, _OnDiseasePrehistoryClickFnc);
	//m_wndSystemic.SetEvent(WE_CHANGE, _OnSystemicChangeFnc);
	//m_wndSystemic.SetEvent(WE_SETFOCUS, _OnSystemicSetfocusFnc);
	//m_wndSystemic.SetEvent(WE_KILLFOCUS, _OnSystemicKillfocusFnc);
	m_wndSystemic.SetEvent(WE_CHECKVALUE, _OnSystemicCheckValueFnc);
	//m_wndPathsOfBody.SetEvent(WE_CHANGE, _OnPathsOfBodyChangeFnc);
	//m_wndPathsOfBody.SetEvent(WE_SETFOCUS, _OnPathsOfBodySetfocusFnc);
	//m_wndPathsOfBody.SetEvent(WE_KILLFOCUS, _OnPathsOfBodyKillfocusFnc);
	m_wndPathsOfBody.SetEvent(WE_CHECKVALUE, _OnPathsOfBodyCheckValueFnc);
	//m_wndTests.SetEvent(WE_CHANGE, _OnTestsChangeFnc);
	//m_wndTests.SetEvent(WE_SETFOCUS, _OnTestsSetfocusFnc);
	//m_wndTests.SetEvent(WE_KILLFOCUS, _OnTestsKillfocusFnc);
	m_wndTests.SetEvent(WE_CHECKVALUE, _OnTestsCheckValueFnc);
	//m_wndSummarize.SetEvent(WE_CHANGE, _OnSummarizeChangeFnc);
	//m_wndSummarize.SetEvent(WE_SETFOCUS, _OnSummarizeSetfocusFnc);
	//m_wndSummarize.SetEvent(WE_KILLFOCUS, _OnSummarizeKillfocusFnc);
	m_wndSummarize.SetEvent(WE_CHECKVALUE, _OnSummarizeCheckValueFnc);
	
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
}
void CHMSAdmissionClinicalDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndPathological.GetDlgCtrlID(), m_szPathological);
	DDX_Text(pDX, m_wndDiseasePrehistory.GetDlgCtrlID(), m_szDiseasePrehistory);
	DDX_Text(pDX, m_wndSystemic.GetDlgCtrlID(), m_szSystemic);
	DDX_Text(pDX, m_wndPathsOfBody.GetDlgCtrlID(), m_szPathsOfBody);
	DDX_Text(pDX, m_wndTests.GetDlgCtrlID(), m_szTests);
	DDX_Text(pDX, m_wndSummarize.GetDlgCtrlID(), m_szSummarize);

}
void CHMSAdmissionClinicalDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_szDepartment = pMF->GetDepartmentName(m_szDeptID);
	
	
	szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld"), pMF->m_nPatientNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		CString tmpStr;
		rs.GetValue(_T("hdh_owner"), tmpStr);
		m_szDiseasePrehistory += tmpStr;
		rs.GetValue(_T("hdh_family"), tmpStr);
		if(!m_szDiseasePrehistory.IsEmpty())
			m_szDiseasePrehistory += _T("; ");
		m_szDiseasePrehistory += tmpStr;
		rs.GetValue(_T("hdh_drugallergy"), tmpStr);
		if(!m_szDiseasePrehistory.IsEmpty())
			m_szDiseasePrehistory += _T("; ");
		m_szDiseasePrehistory += tmpStr;
	}
	szSQL.Format(_T("SELECT * FROM hms_clinical_record where hcr_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_status"),  m_szStatus);
		rs.GetValue(_T("hcr_admitdate"), m_szAdmitDate);
		rs.GetValue(_T("hcr_reason"), m_szReason);
		rs.GetValue(_T("hcr_pathological"), m_szPathological);
		rs.GetValue(_T("hcr_systemic"), m_szSystemic);
		rs.GetValue(_T("hcr_partsbody"), m_szPathsOfBody);
		rs.GetValue(_T("hcr_tests"), m_szTests);
		rs.GetValue(_T("hcr_summarize"), m_szSummarize);
	
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);


}
void CHMSAdmissionClinicalDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_clinical_recordTbl.SetValue(_T("hcr_createdby"), pMF->GetCurrentUser());
	m_hms_clinical_recordTbl.SetValue(_T("hcr_createddate"), pMF->GetSysDateTime());
	m_hms_clinical_recordTbl.SetValue(_T("hcr_updatedby"), pMF->GetCurrentUser());
	m_hms_clinical_recordTbl.SetValue(_T("hcr_updateddate"), pMF->GetSysDateTime());
	m_hms_clinical_recordTbl.SetValue(_T("hcr_patientno"), pMF->m_nPatientNo);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_docno"), pMF->m_nDocumentNo);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_status"),  m_szStatus);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_admitdate"), m_szAdmitDate);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_admiticd"), pMF->m_szICD10);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_admitdisease"), pMF->m_szDiagnostic);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_admitdept"), m_szDeptID);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_reason"), m_szReason);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_pathological"), m_szPathological);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_systemic"), m_szSystemic);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_partsbody"), m_szPathsOfBody);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_tests"), m_szTests);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_summarize"), m_szSummarize);


	m_hms_treatment_recordTbl.SetValue(_T("htr_createdby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_createddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_patientno"), pMF->m_nPatientNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), pMF->m_nDocumentNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_idx"), 1); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_status"), m_szStatus); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szAdmitDate); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_deptid"), m_szDeptID); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), _T("")); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), _T("")); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_sumtreat"), _T("0")); 
}
void CHMSAdmissionClinicalDialog::SetDefaultValues(){
	m_szAdmitDate.Empty();
	m_szReason.Empty();
	m_szStatus=_T("A");
}
int CHMSAdmissionClinicalDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, 4, -1); 
 			SetDefaultValues(); 
			m_szAdmitDate = pMF->GetSysDateTime();
			m_wndReason.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, 4, -1); 
			m_wndReason.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, 2, -1); 
 			SetDefaultValues(); 
			m_szPathological = pMF->m_wndPatientDocument.m_wndExamine.m_szPathologyProcess;
			m_szPathsOfBody = pMF->m_wndPatientDocument.m_wndExamine.m_szExamine;
 			break; 
 		}; 
		
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSAdmissionClinicalDialog::OnAdmitDateChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnAdmitDateCheckValue(){
	return 0;
} 
/*void CHMSAdmissionClinicalDialog::OnDepartmentChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnDepartmentSetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnDepartmentKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnDepartmentCheckValue(){
	return 0;
} 
/*void CHMSAdmissionClinicalDialog::OnReasonChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnReasonSetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnReasonKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnReasonCheckValue(){
	return 0;
} 
/*void CHMSAdmissionClinicalDialog::OnPathologicalChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnPathologicalSetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnPathologicalKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnPathologicalCheckValue(){
	return 0;
} 
/*void CHMSAdmissionClinicalDialog::OnDiseasePrehistoryChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnDiseasePrehistorySetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnDiseasePrehistoryKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnDiseasePrehistoryCheckValue(){
	return 0;
} 
int CHMSAdmissionClinicalDialog::OnDiseasePrehistoryClick(){
	CHMSDiseasePrehistoryDialog dlg(this);
	if(dlg.DoModal() == IDOK){
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld"), pMF->m_nPatientNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			CString tmpStr;
			rs.GetValue(_T("hdh_owner"), tmpStr);
			m_szDiseasePrehistory += tmpStr;
			rs.GetValue(_T("hdh_family"), tmpStr);
			if(!m_szDiseasePrehistory.IsEmpty())
				m_szDiseasePrehistory += _T("; ");
			m_szDiseasePrehistory += tmpStr;
			rs.GetValue(_T("hdh_drugallergy"), tmpStr);
			if(!m_szDiseasePrehistory.IsEmpty())
				m_szDiseasePrehistory += _T("; ");
			m_szDiseasePrehistory += tmpStr;
			UpdateData(false);
		}
	}
	return 0;

} 
/*void CHMSAdmissionClinicalDialog::OnSystemicChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnSystemicSetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnSystemicKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnSystemicCheckValue(){
	return 0;
} 
/*void CHMSAdmissionClinicalDialog::OnPathsOfBodyChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnPathsOfBodySetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnPathsOfBodyKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnPathsOfBodyCheckValue(){
	return 0;
} 
/*void CHMSAdmissionClinicalDialog::OnTestsChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnTestsSetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnTestsKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnTestsCheckValue(){
	return 0;
} 
/*void CHMSAdmissionClinicalDialog::OnSummarizeChange(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnSummarizeSetfocus(){
	
} */
/*void CHMSAdmissionClinicalDialog::OnSummarizeKillfocus(){
	
} */
int CHMSAdmissionClinicalDialog::OnSummarizeCheckValue(){
	return 0;
} 
void CHMSAdmissionClinicalDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSAdmissionClinicalDialog();
} 
void CHMSAdmissionClinicalDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAdmissionClinicalDialog();
} 
void CHMSAdmissionClinicalDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSAdmissionClinicalDialog();
} 
void CHMSAdmissionClinicalDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->PrintAdmissionSheet(pMF->m_nDocumentNo);
} 
void CHMSAdmissionClinicalDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CHMSAdmissionClinicalDialog::OnAddHMSAdmissionClinicalDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	
	return 0; 
}
int CHMSAdmissionClinicalDialog::OnEditHMSAdmissionClinicalDialog(){
 	if(GetMode() != VM_VIEW && GetMode() != VM_NONE) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld and hcr_status in('I','T') "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is treatment. Can not update or create sheet in treatment."), MB_OK|MB_ICONWARNING);
		return -1;
	}

	if(GetMode() == VM_NONE)
		SetMode(VM_ADD);
	else
 		SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdmissionClinicalDialog::OnDeleteHMSAdmissionClinicalDialog(){
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
 		OnCancelHMSAdmissionClinicalDialog(); 
 	}
	return 0;
}
int CHMSAdmissionClinicalDialog::OnSaveHMSAdmissionClinicalDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld and hcr_status in('I','T') "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is treatment. Can not update or create sheet in treatment."), MB_OK|MB_ICONWARNING);
		return -1;
	}


 	if(!IsValidateData()) 
 		return -1; 
 	
	
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_clinical_recordTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE hcr_docno=%ld"), pMF->m_nDocumentNo); 
 		szSQL = m_hms_clinical_recordTbl.GetUpdateSQL(_T("hcr_createdby,hcr_createddate,hcr_status")); 
 		szSQL += szWhere; 
 	} 
	//_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_ADD){
			szSQL = m_hms_treatment_recordTbl.GetInsertSQL();
		}
		else
		{
			CString szWhere; 
			szWhere.Format(_T(" WHERE htr_docno=%ld"), pMF->m_nDocumentNo); 
 			szSQL = m_hms_treatment_recordTbl.GetUpdateSQL(_T("htr_createdby,htr_createddate,htr_status")); 
 			szSQL += szWhere;

		}
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW); 
		CGuiDialog::OnOK();
		OnPrintSelect();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSAdmissionClinicalDialog::OnCancelHMSAdmissionClinicalDialog(){

 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE);
 	}
 	return 0;
} 
int CHMSAdmissionClinicalDialog::OnHMSAdmissionClinicalDialogListLoadData(){
	return 0;
}
