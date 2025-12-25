#include "HMSAdmission.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiDialog.h"

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
static void _OnICDDiagnosticSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmission* )pWnd)->OnICDDiagnosticSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDDiagnosticSelendokFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICDDiagnosticSelendok();
}
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICDDiagnosticKillfocus();
}*/
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICDDiagnosticKillfocus();
}*/
static long _OnICDDiagnosticLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmission *)pWnd)->OnICDDiagnosticLoadData();
}
/*static void _OnICDDiagnosticAddNewFnc(CWnd *pWnd){
	((CHMSAdmission *)pWnd)->OnICDDiagnosticAddNew();
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
	m_wndAdmissionInformation.Create(this, _T("Dept Discharge Information"), 5, 5, 600, 230);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 130, 55);
	m_wndDate.Create(this,135, 30, 260, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 265, 30, 356, 55);
	m_wndDepartment.Create(this,361, 30, 596, 55); 
	m_wndICDDiagnosticLabel.Create(this, _T("ICD Diagnostic"), 10, 60, 130, 85);
	m_wndICDDiagnostic.Create(this,135, 60, 596, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 596, 115);
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 596, 145); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 150, 130, 175);
	m_wndConclusion.Create(this,135, 149, 596, 224, TRUE, FALSE, TRUE);
	//m_wndOutPatient.Create(this, _T("Out Patient"), 135, 235, 305, 260);
	m_wndUpdate.Create(this, _T("&Update"), 290, 235, 390, 260);
	m_wndSave.Create(this, _T("&Save"), 395, 235, 495, 260);
	m_wndCancel.Create(this, _T("&Cancel"), 500, 235, 600, 260);

}
void CHMSAdmission::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(128);
	m_wndICDDiagnostic.SetCheckValue(true);
	m_wndICDDiagnostic.LimitText(254);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(254);
	//m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(254);
	//m_wndConclusion.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndICDDiagnostic.Format(2, 1, 18);
	m_wndICDDiagnostic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICDDiagnostic.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

	m_hms_treatment_recordTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatment_recordTbl.AddField(_T("htr_createdby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_createddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updatedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updateddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_patientno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_docno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_deptid"), dfText, 7); 
	m_hms_treatment_recordTbl.AddField(_T("htr_idx"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_status"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_outpatient"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254);
	m_hms_treatment_recordTbl.AddField(_T("htr_tdeptid"), dfText, 7);
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
	m_wndICDDiagnostic.SetEvent(WE_SELENDOK, _OnICDDiagnosticSelendokFnc);
	//m_wndICDDiagnostic.SetEvent(WE_SETFOCUS, _OnICDDiagnosticSetfocusFnc);
	//m_wndICDDiagnostic.SetEvent(WE_KILLFOCUS, _OnICDDiagnosticKillfocusFnc);
	m_wndICDDiagnostic.SetEvent(WE_SELCHANGE, _OnICDDiagnosticSelectChangeFnc);
	m_wndICDDiagnostic.SetEvent(WE_LOADDATA, _OnICDDiagnosticLoadDataFnc);
	//m_wndICDDiagnostic.SetEvent(WE_ADDNEW, _OnICDDiagnosticAddNewFnc);
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
//	if(GetMode() == VM_NONE)
//		return;	
	GetDataToScreen();
}
void CHMSAdmission::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndICDDiagnostic.GetDlgCtrlID(), m_szICDDiagnosticKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	//DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);

}
void CHMSAdmission::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT htr_dischargedate, htr_mainicd, htr_maindisease, htr_status, htr_tdeptid, hcr_conclusion, hcr_reldisease ") \
		_T("FROM hms_treatment_record LEFT JOIN hms_clinical_record ON(hcr_docno=htr_docno) ") \
		_T("WHERE htr_docno=%ld AND htr_idx=%d AND htr_suggestion IN('A','I','M')"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("htr_dischargedate"), m_szDate);
		rs.GetValue(_T("hcr_conclusion"), m_szConclusion);
		rs.GetValue(_T("htr_mainicd"), m_szICDDiagnosticKey);
		rs.GetValue(_T("htr_maindisease"), m_szMainDisease);		
		rs.GetValue(_T("htr_tdeptid"), m_szDepartmentKey);
		//rs.GetValue(_T("htr_outpatient"), m_bOutPatient); 
		rs.GetValue(_T("hcr_reldisease"), m_szRelationDisease);		
		rs.GetValue(_T("htr_status"), szStatus);
	}
	else
	{
		szSQL.Format(_T("SELECT * FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d "), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("htr_conclusion"), m_szConclusion);
			rs.GetValue(_T("htr_mainicd"), m_szICDDiagnosticKey);
			rs.GetValue(_T("htr_maindisease"), m_szMainDisease);
			rs.GetValue(_T("htr_status"), szStatus);
			rs.GetValue(_T("htr_tdeptid"), m_szDepartmentKey);
			//rs.GetValue(_T("htr_outpatient"), m_bOutPatient); 
		}
	}

	if(szStatus == _T("T"))
		rs.GetValue(_T("htr_dischargedate"), m_szDate);
	else
		m_szDate = pMF->GetSysDateTime();
	
	
	if(m_szMainDisease.IsEmpty())
		m_szMainDisease = pMF->m_szDiagnostic;
	m_szICDDiagnosticKey.Trim();

	
	SetMode(VM_VIEW);



}
void CHMSAdmission::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	//Kiem tra neu ton tai ho so dieu tri dang mo thi update lai
	szSQL.Format(_T("SELECT htr_idx as idx,htr_status as status FROM hms_treatment_record ") \
		_T(" WHERE htr_docno=%ld AND htr_deptid='%s' AND htr_status='A' "), 
		pMF->m_nDocumentNo, m_szDepartmentKey);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		m_bAddNew = false;
		rs.GetValue(_T("idx"), m_nIndex);
		rs.GetValue(_T("status"), m_szStatus);
	}
	else
	{
		m_bAddNew = true;
		szSQL.Format(_T("SELECT max(htr_idx)+1 as idx FROM hms_treatment_record WHERE htr_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("idx"), m_nIndex);
		}
		else
			m_nIndex = pMF->m_nRefIndex+1;
	}
	m_hms_treatment_recordTbl.SetValue(_T("htr_createdby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_createddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_patientno"), pMF->m_nPatientNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), pMF->m_nDocumentNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_deptid"), m_szDepartmentKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_idx"), m_nIndex); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_status"), _T("A")); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), m_szICDDiagnosticKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), m_szMainDisease);
	m_hms_treatment_recordTbl.SetValue(_T("htr_outpatient"), m_bOutPatient?_T("Y"):_T("N")); 
	
}

void CHMSAdmission::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_szICDDiagnosticKey.Empty();
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

	if (OnCheckAdmitdateBed(pMF->m_nDocumentNo, pMF->m_szDept)==false)
	{		
		return -1;
	}		
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
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,szGroupID;

	/*int nCount = 0;
	szSQL.Format(_T(" SELECT sd_groupid FROM sys_dept WHERE sd_id = '%s' "), pMF->m_szDept);
	nCount = rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("sd_groupid"), szGroupID);
	}*/

	szFilter.Format(_T(" AND sd_type='DT' AND sd_id<>'%s' "), pMF->m_szDept, szGroupID);
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
void CHMSAdmission::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmission::OnICDDiagnosticSelendok(){
	UpdateData(true);
	m_szMainDisease = m_wndICDDiagnostic.GetCurrent(1);
	UpdateData(false);
	 
}
/*void CHMSAdmission::OnICDDiagnosticSetfocus(){
	
}*/
/*void CHMSAdmission::OnICDDiagnosticKillfocus(){
	
}*/
long CHMSAdmission::OnICDDiagnosticLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->LoadICD(&m_wndICDDiagnostic, m_szICDDiagnosticKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICDDiagnostic.IsSearchKey() && !m_szICDDiagnosticKey.IsEmpty()){
	};
	m_wndICDDiagnostic.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICDDiagnostic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmission::OnICDDiagnosticAddNew(){
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
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;
 
} 
int CHMSAdmission::OnEditHMSAdmission(){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(pMF->IsPaidFees()){
		ShowMessageBox(_T("Patients paid hospital fees. Do not allow reupdate."));
		return -1;
	}
	if(CompareDate(pMF->m_wndPatientDocument.m_szUpdatedDate, pMF->GetSysDate()) != 0 &&  pMF->m_wndPatientDocument.m_szDocStatus != _T("I")){
		if(!pMF->CheckPermission(_T("02.02")))
		{	
			return -1;
		}
	}

	//Kiem tra neu ton tai ho so dieu tri dang mo thi update lai
	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx>%d AND htr_status in('I','T') "), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue())
	{
		return -1;
	}


	CString szAcceptedFee, szStatus;

	szSQL.Format(_T("SELECT htr_status, htrf_acceptedfee FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_status"), szStatus);
	rs.GetValue(_T("htrf_acceptedfee"), szAcceptedFee);

	if(szAcceptedFee == _T("A") || szAcceptedFee == _T("P") || szAcceptedFee == _T("Y"))
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 \x111\x1B0\x1EE3\x63 \x78\xE1\x63 nh\x1EADn \x63hi ph\xED ho\x1EB7\x63 th\x61nh to\xE1n vi\x1EC7n ph\xED."));
		return -1;
	}


 	SetMode(VM_EDIT);
	m_bAddNew = true;
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
 	if(GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	////Kiem tra neu ton tai ho so dieu tri dang mo thi update lai
	//szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record ") \
	//	_T(" WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), 
	//	pMF->m_nDocumentNo, pMF->m_szDept);
	//rs.ExecSQL(szSQL);
	//if(rs.GetIntValue())
	//{
	//	return -1;
	//}

	
 	if(!IsValidateData()) 
 		return -1; 

	if(m_szDepartmentKey.IsEmpty())
	{
		m_wndDepartment.SetFocus();
		return -1;
	}

	szSQL.Format(_T("HMS_WARDMOVEMENT(%ld, %ld, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s', '%s', '%s', '%s', '%s', '%s') "),
		pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->GetCurrentUser(), m_szDate, pMF->GetDepartmentID(), m_szDepartmentKey,
		m_szICDDiagnosticKey, m_szMainDisease, m_szRelationDisease, m_szConclusion);

	int res = str2int(pMF->ExecDML(szSQL));
	if(res < 0)
	{
		ShowMessageBox(_T("Cannot movement"));
		return -1;
	}

	SetMode(VM_VIEW);
	pMF->m_wndPatientDocument.LoadData(pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nRefIndex);
	return res;



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
bool CHMSAdmission::OnCheckAdmitdateBed(int m_nDocno, CString m_szDeptID){
	CMainFrame *pMF =(CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T("SELECT max(hb_enddate) FROM hms_bed WHERE hb_docno=%ld AND hb_deptid='%s'"), m_nDocno, m_szDeptID);
	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();

	if(CompareDate(m_szDate,tmpStr) >= 0) return true;
	
	return false;

}
