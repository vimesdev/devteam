#include "HMSAdmission.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSAdmissionClinicalDialog.h"

/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmission *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmission* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmission *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmission* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmission *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmission *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmission *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmission *)pWnd)->OnConclusionCheckValue();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CHMSAdmission*)pWnd)->OnOutPatientSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSAdmission *pVw = (CHMSAdmission *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdmission *pVw = (CHMSAdmission *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdmission *pVw = (CHMSAdmission *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSAdmissionFnc(CWnd *pWnd){
	 return ((CHMSAdmission*)pWnd)->OnAddHMSAdmission();
} 
static int _OnEditHMSAdmissionFnc(CWnd *pWnd){
	 return ((CHMSAdmission*)pWnd)->OnEditHMSAdmission();
} 
static int _OnDeleteHMSAdmissionFnc(CWnd *pWnd){
	 return ((CHMSAdmission*)pWnd)->OnDeleteHMSAdmission();
} 
static int _OnSaveHMSAdmissionFnc(CWnd *pWnd){
	 return ((CHMSAdmission*)pWnd)->OnSaveHMSAdmission();
} 
static int _OnCancelHMSAdmissionFnc(CWnd *pWnd){
	 return ((CHMSAdmission*)pWnd)->OnCancelHMSAdmission();
} 
CHMSAdmission::CHMSAdmission(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSAdmission::~CHMSAdmission(){
}
void CHMSAdmission::OnCreateComponents(){
	m_wndAdmissionInformation.Create(this, _T("Admission Information"), 5, 5, 600, 230);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 130, 55);
	m_wndDate.Create(this,135, 30, 260, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 265, 30, 356, 55);
	m_wndDepartment.Create(this,361, 30, 596, 55); 
	m_wndICD10Label.Create(this, _T("ICD Diagnostic"), 10, 60, 130, 85);
	m_wndICD10.Create(this,135, 60, 596, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 596, 115);
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 596, 145); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 150, 130, 175);
	m_wndConclusion.Create(this,135, 149, 596, 224, TRUE, FALSE, TRUE);
	m_wndOutPatient.Create(this, _T("Out Patient"), 135, 235, 305, 260);
	m_wndUpdate.Create(this, _T("&Update"), 365, 235, 440, 260);
	m_wndSave.Create(this, _T("&Save"), 445, 235, 520, 260);
	m_wndCancel.Create(this, _T("&Cancel"), 525, 235, 600, 260);

}
void CHMSAdmission::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(128);
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(254);
	m_wndICD10.SetRequirementLength(1);
	m_wndICD10.SetVisibleLines(15);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(254);
	//m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(254);
	//m_wndConclusion.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_outstate"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_enddept"), dfText, 7);
	m_hms_docTbl.AddField(_T("hd_enddate"), dfDateTime);
	m_hms_docTbl.AddField(_T("hd_icd"), dfText, 13);
	m_hms_docTbl.AddField(_T("hd_diagnostic"), dfText, 254);	//Benh chinh
	m_hms_docTbl.AddField(_T("hd_reldisease"), dfText, 254);	//benh kem theo
	m_hms_docTbl.AddField(_T("hd_conclusion"), dfText, 254);	//Ket luan
	m_hms_docTbl.AddField(_T("hd_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_docTbl.AddField(_T("hd_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_docTbl.AddField(_T("hd_doctor"), dfText, 15);
	m_hms_docTbl.AddField(_T("hd_indept"), dfText, 7);	//Khoa dieu tri
	m_hms_docTbl.AddField(_T("hd_tohosid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_outpatient"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_areceptidx"), dfInteger);


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
	m_hms_clinical_recordTbl.AddField(_T("hcr_refidx"), dfInteger);

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
void CHMSAdmission::OnSetWindowEvents(){
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAdmissionFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAdmissionFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAdmissionFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAdmissionFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAdmissionFnc, 0, 'T', VK_CONTROL);
*/
	
	GetDataToScreen();
}
void CHMSAdmission::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);

}
void CHMSAdmission::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hd_conclusion"), m_szConclusion);
		rs.GetValue(_T("hd_icd"), m_szICD10Key);
		rs.GetValue(_T("hd_diagnostic"), m_szMainDisease);
		rs.GetValue(_T("hd_reldisease"), m_szRelationDisease);
		rs.GetValue(_T("hd_enddate"), m_szDate);
		rs.GetValue(_T("hd_indept"), m_szDepartmentKey);
		CString tmpStr;
		rs.GetValue(_T("hd_outpatient"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bOutPatient = true; 
		else m_bOutPatient = false;

		if(m_szDate.IsEmpty())
			m_szDate = pMF->GetSysDateTime();
		if(m_szMainDisease.IsEmpty())
			m_szMainDisease = pMF->m_szDiagnostic;

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSAdmission::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_docTbl.SetValue(_T("hd_doctor"), pMF->m_szDoctor);
	m_hms_docTbl.SetValue(_T("hd_status"), _T("T"));
	m_hms_docTbl.SetValue(_T("hd_conclusion"), m_szConclusion);
	m_hms_docTbl.SetValue(_T("hd_icd"), m_szICD10Key);
	m_hms_docTbl.SetValue(_T("hd_diagnostic"), m_szMainDisease);
	m_hms_docTbl.SetValue(_T("hd_reldisease"), m_szRelationDisease);
	m_hms_docTbl.SetValue(_T("hd_suggestion"), _T("A"));
	m_hms_docTbl.SetValue(_T("hd_enddept"), pMF->m_szDept);
	m_hms_docTbl.SetValue(_T("hd_enddate"), m_szDate);
	m_hms_docTbl.SetValue(_T("hd_indept"), m_szDepartmentKey);
	m_hms_docTbl.SetValue(_T("hd_outpatient"), m_bOutPatient?_T("Y"):_T("N"));
	m_hms_docTbl.SetValue(_T("hd_areceptidx"), pMF->m_nRefIndex);	

}

void CHMSAdmission::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_szICD10Key.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szConclusion.Empty();
	m_bOutPatient=FALSE;

}
int CHMSAdmission::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
			m_wndDepartment.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*void CHMSAdmission::OnDateChange(){
	
} */
/*void CHMSAdmission::OnDateSetfocus(){
	
} */
/*void CHMSAdmission::OnDateKillfocus(){
	
} */
int CHMSAdmission::OnDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(CompareDate(pMF->m_szEntryDate, m_szDate) > 0)
		return -1;
	return 0;
} 
void CHMSAdmission::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmission::OnDepartmentSelendok(){
	 
}
/*void CHMSAdmission::OnDepartmentSetfocus(){
	
}*/
/*void CHMSAdmission::OnDepartmentKillfocus(){
	
}*/
long CHMSAdmission::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND sd_type='DT' AND sd_id<>'%s' "), pMF->m_szDept);
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmission::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAdmission::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmission::OnICD10Selendok(){
	UpdateData(true);
	m_szMainDisease = m_wndICD10.GetCurrent(1);
	UpdateData(false);
	 
}
/*void CHMSAdmission::OnICD10Setfocus(){
	
}*/
/*void CHMSAdmission::OnICD10Killfocus(){
	
}*/
long CHMSAdmission::OnICD10LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->LoadICD(&m_wndICD10, m_szICD10Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
	};
	m_wndICD10.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmission::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdmission::OnMainDiseaseChange(){
	
} */
/*void CHMSAdmission::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSAdmission::OnMainDiseaseKillfocus(){
	
} */
int CHMSAdmission::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSAdmission::OnRelationDiseaseChange(){
	
} */
/*void CHMSAdmission::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSAdmission::OnRelationDiseaseKillfocus(){
	
} */
int CHMSAdmission::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSAdmission::OnConclusionChange(){
	
} */
/*void CHMSAdmission::OnConclusionSetfocus(){
	
} */
/*void CHMSAdmission::OnConclusionKillfocus(){
	
} */
int CHMSAdmission::OnConclusionCheckValue(){
	return 0;
} 
	void CHMSAdmission::OnOutPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSAdmission::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSAdmission();
	
} 
void CHMSAdmission::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAdmission();
	
} 
void CHMSAdmission::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSAdmission();
} 
int CHMSAdmission::OnAddHMSAdmission(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 	
 	SetMode(VM_ADD);
	return 0;
 
} 
int CHMSAdmission::OnEditHMSAdmission(){	
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szUser;
	szUser = pMF->GetCurrentUser();	
	
	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is being on the department. Can not update it."), MB_OK);
		return -1;
	}

	if(pMF->IsPaidFees() && szUser.MakeUpper() !=_T("ADMIN")){
		ShowMessageBox(_T("Patients paid hospital fees. Do not allow reupdate."));
		return -1;
	}


 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSAdmission::OnDeleteHMSAdmission(){
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
 		OnCancelHMSAdmission(); 
 	}
return 0;
 } 
int CHMSAdmission::OnSaveHMSAdmission(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
	
	szSQL.Format(_T("SELECT count(*) FROM hms_outpatient WHERE hop_docno=%ld AND hop_status ='O' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is out treatment. Can not update it."), MB_OK|MB_ICONWARNING);
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is being on the department. Can not update it."), MB_OK|MB_ICONWARNING);
		return -1;
	}

 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_docTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE hd_docno=%ld "), pMF->m_nDocumentNo); 
 		szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno")); 
 		szSQL += szWhere; 
 	} 
	//_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(pMF->m_szDiagnostic.IsEmpty())
			szSQL.Format(_T("UPDATE hms_exam SET he_status='T', he_diagnostic='%s' WHERE he_docno=%ld AND he_receptidx=%d"), m_szMainDisease,  pMF->m_nDocumentNo, pMF->m_nRefIndex);
		else
			szSQL.Format(_T("UPDATE hms_exam SET he_status='T' WHERE he_docno=%ld AND he_receptidx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_treatment_dttd WHERE htd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		/*
		szSQL.Format(_T("UPDATE hms_outpatient SET hop_status ='T' WHERE hop_docno in(select hd_docno from hms_doc where hd_patientno=%ld) ;"), pMF->m_nPatientNo);
		pMF->ExecSQL(szSQL);
		*/
		szSQL.Format(_T("DELETE FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);		

//		szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_admitdept='%s' WHERE hcr_docno=%ld and hcr_status='A' "), m_szDepartmentKey, pMF->m_nDocumentNo);
//_fmsg(_T("%s"), szSQL);
//		pMF->ExecSQL(szSQL);
//		szSQL.Format(_T("UPDATE hms_treatment_record SET htr_deptid='%s' WHERE htr_docno=%ld AND htr_idx=1 AND htr_status='A' "), m_szDepartmentKey, pMF->m_nDocumentNo);
//		pMF->ExecSQL(szSQL);
	//	pMF->Commit();
		SetMode(VM_VIEW); 

		if(pMF->m_szRequestCreateAdmissionVote == _T("Y")){
			((CGuiDialog *)	GetParent()->GetParent())->OnOK();
			CHMSAdmissionClinicalDialog dlg(pMF);
			dlg.m_szDeptID = m_szDepartmentKey;
			dlg.DoModal();
		}
		else
		{
			m_hms_clinical_recordTbl.SetValue(_T("hcr_createdby"), pMF->GetCurrentUser());
				m_hms_clinical_recordTbl.SetValue(_T("hcr_createddate"), pMF->GetSysDateTime());
				m_hms_clinical_recordTbl.SetValue(_T("hcr_updatedby"), pMF->GetCurrentUser());
				m_hms_clinical_recordTbl.SetValue(_T("hcr_updateddate"), pMF->GetSysDateTime());
				m_hms_clinical_recordTbl.SetValue(_T("hcr_patientno"), pMF->m_nPatientNo);
				m_hms_clinical_recordTbl.SetValue(_T("hcr_docno"), pMF->m_nDocumentNo);
				m_hms_clinical_recordTbl.SetValue(_T("hcr_status"),  _T("A"));
				m_hms_clinical_recordTbl.SetValue(_T("hcr_admitdate"), m_szDate);
				m_hms_clinical_recordTbl.SetValue(_T("hcr_admiticd"), m_szICD10Key);
				m_hms_clinical_recordTbl.SetValue(_T("hcr_admitdisease"), m_szMainDisease);
				m_hms_clinical_recordTbl.SetValue(_T("hcr_admitdept"), m_szDepartmentKey);
				m_hms_clinical_recordTbl.SetValue(_T("hcr_reason"), _T(""));
				m_hms_clinical_recordTbl.SetValue(_T("hcr_pathological"), _T(""));
				m_hms_clinical_recordTbl.SetValue(_T("hcr_systemic"), _T(""));
				m_hms_clinical_recordTbl.SetValue(_T("hcr_partsbody"), _T(""));
				m_hms_clinical_recordTbl.SetValue(_T("hcr_tests"), _T(""));
				m_hms_clinical_recordTbl.SetValue(_T("hcr_summarize"), _T(""));
				m_hms_clinical_recordTbl.SetValue(_T("hcr_refidx"), 1);
				
				m_hms_treatment_recordTbl.SetValue(_T("htr_createdby"), pMF->GetCurrentUser()); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_createddate"), pMF->GetSysDateTime()); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser()); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime()); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_patientno"), pMF->m_nPatientNo); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), pMF->m_nDocumentNo); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_idx"), 1); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_status"), _T("A")); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szDate); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_deptid"), m_szDepartmentKey); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), m_szICD10Key); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), m_szMainDisease); 
				m_hms_treatment_recordTbl.SetValue(_T("htr_sumtreat"), _T("0")); 


			szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld"), pMF->m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() <= 0)
			{
				szSQL = m_hms_clinical_recordTbl.GetInsertSQL();
				int ret = pMF->ExecSQL(szSQL);
				if(ret > 0){
					szSQL = m_hms_treatment_recordTbl.GetInsertSQL();
					pMF->ExecSQL(szSQL);
				}
			}
			else
			{
				szSQL = m_hms_clinical_recordTbl.GetUpdateSQL(_T("hcr_createddate,hcr_createdby,hcr_patientno,hcr_docno,hcr_status"));
				szSQL.AppendFormat(_T(" WHERE hcr_docno=%ld and hcr_status='A'"), pMF->m_nDocumentNo);
				pMF->ExecSQL(szSQL);
				szSQL = m_hms_treatment_recordTbl.GetUpdateSQL(_T("htr_createddate,htr_createdby,htr_patientno,htr_docno,htr_status"));
				szSQL.AppendFormat(_T(" WHERE htr_docno=%ld and htr_idx=1 and htr_status='A'"), pMF->m_nDocumentNo);
				pMF->ExecSQL(szSQL);
			}
		}
 		
		
 	} 
 	else 
 	{ 
	//	pMF->Rollback();
 	} 
 	return ret; 

}
int CHMSAdmission::OnCancelHMSAdmission(){
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
int CHMSAdmission::OnHMSAdmissionListLoadData(){
	return 0;
}
