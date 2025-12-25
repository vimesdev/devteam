#include "HMSTransferFloor.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiDialog.h"

/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferFloor *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTransferFloor* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransferFloor *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnICDDiagnosticSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTransferFloor* )pWnd)->OnICDDiagnosticSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDDiagnosticSelendokFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnICDDiagnosticSelendok();
}
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnICDDiagnosticKillfocus();
}*/
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnICDDiagnosticKillfocus();
}*/
static long _OnICDDiagnosticLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransferFloor *)pWnd)->OnICDDiagnosticLoadData();
}
/*static void _OnICDDiagnosticAddNewFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnICDDiagnosticAddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferFloor *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferFloor *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSTransferFloor *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferFloor *)pWnd)->OnConclusionCheckValue();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CHMSTransferFloor*)pWnd)->OnOutPatientSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSTransferFloor *pVw = (CHMSTransferFloor *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTransferFloor *pVw = (CHMSTransferFloor *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTransferFloor *pVw = (CHMSTransferFloor *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSTransferFloorFnc(CWnd *pWnd){
	 return ((CHMSTransferFloor*)pWnd)->OnAddHMSTransferFloor();
} 
static int _OnEditHMSTransferFloorFnc(CWnd *pWnd){
	 return ((CHMSTransferFloor*)pWnd)->OnEditHMSTransferFloor();
} 
static int _OnDeleteHMSTransferFloorFnc(CWnd *pWnd){
	 return ((CHMSTransferFloor*)pWnd)->OnDeleteHMSTransferFloor();
} 
static int _OnSaveHMSTransferFloorFnc(CWnd *pWnd){
	 return ((CHMSTransferFloor*)pWnd)->OnSaveHMSTransferFloor();
} 
static int _OnCancelHMSTransferFloorFnc(CWnd *pWnd){
	 return ((CHMSTransferFloor*)pWnd)->OnCancelHMSTransferFloor();
} 
CHMSTransferFloor::CHMSTransferFloor(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSTransferFloor::~CHMSTransferFloor(){
}
void CHMSTransferFloor::OnCreateComponents(){
	m_wndAdmissionInformation.Create(this, _T("Dept Discharge Information"), 5, 5, 600, 230);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 130, 55);
	m_wndDate.Create(this,135, 30, 260, 55); 
	m_wndDepartmentLabel.Create(this, _T("Floor"), 265, 30, 356, 55);
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
	m_wndUpdate.Create(this, _T("&Update"), 365, 235, 440, 260);
	m_wndSave.Create(this, _T("&Save"), 445, 235, 520, 260);
	m_wndCancel.Create(this, _T("&Cancel"), 525, 235, 600, 260);

}
void CHMSTransferFloor::OnInitializeComponents(){
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


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

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
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254);
	m_hms_treatment_recordTbl.AddField(_T("htr_tdeptid"), dfText, 7);
	
}
void CHMSTransferFloor::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTransferFloorFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTransferFloorFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTransferFloorFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTransferFloorFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTransferFloorFnc, 0, 'T', VK_CONTROL);
*/
//	if(GetMode() == VM_NONE)
//		return;
	GetDataToScreen();
}
void CHMSTransferFloor::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndICDDiagnostic.GetDlgCtrlID(), m_szICDDiagnosticKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	//DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);

}
void CHMSTransferFloor::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d AND (htr_suggestion IN('A','I','M','F') or htr_suggestion is null ) "), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("htr_conclusion"), m_szConclusion);
		rs.GetValue(_T("htr_mainicd"), m_szICDDiagnosticKey);
		rs.GetValue(_T("htr_maindisease"), m_szMainDisease);
		rs.GetValue(_T("htr_dischargedate"), m_szDate);
		rs.GetValue(_T("htr_tdeptid"), m_szDepartmentKey);
	}
	if(m_szDate.IsEmpty())
			m_szDate = pMF->GetSysDateTime();
		if(m_szMainDisease.IsEmpty())
			m_szMainDisease = pMF->m_szDiagnostic;
		m_szICDDiagnosticKey.Trim();
	SetMode(VM_VIEW);



}
void CHMSTransferFloor::GetScreenToData(){
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
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szDate); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), m_szICDDiagnosticKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), m_szMainDisease);
	
}

void CHMSTransferFloor::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_szICDDiagnosticKey.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szConclusion.Empty();
	m_bOutPatient=FALSE;

}
int CHMSTransferFloor::SetMode(int nMode){ 
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
/*void CHMSTransferFloor::OnDateChange(){
	
} */
/*void CHMSTransferFloor::OnDateSetfocus(){
	
} */
/*void CHMSTransferFloor::OnDateKillfocus(){
	
} */
int CHMSTransferFloor::OnDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(CompareDate(pMF->m_szEntryDate, m_szDate) > 0)
		return -1;	

	if (OnCheckAdmitdateBed(pMF->m_nDocumentNo, pMF->m_szDept)==false)
	{		
		return -1;
	}		
	return 0;
} 
void CHMSTransferFloor::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransferFloor::OnDepartmentSelendok(){
	 
}
/*void CHMSTransferFloor::OnDepartmentSetfocus(){
	
}*/
/*void CHMSTransferFloor::OnDepartmentKillfocus(){
	
}*/
long CHMSTransferFloor::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter, szGroupID;

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	int nCount = 0;
	szSQL.Format(_T(" SELECT sd_groupid FROM sys_dept WHERE sd_id = '%s' "), pMF->m_szDept);
	nCount = rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("sd_groupid"), szGroupID);
	}
	
	szFilter.Format(_T(" AND sd_type='DT' AND sd_id <>'%s' and sd_groupid ='%s' "), pMF->m_szDept, szGroupID);	
	return pMF->LoadDepartment(&m_wndDepartment, _T(""), szFilter);
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
/*void CHMSTransferFloor::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTransferFloor::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransferFloor::OnICDDiagnosticSelendok(){
	UpdateData(true);
	m_szMainDisease = m_wndICDDiagnostic.GetCurrent(1);
	UpdateData(false);
	 
}
/*void CHMSTransferFloor::OnICDDiagnosticSetfocus(){
	
}*/
/*void CHMSTransferFloor::OnICDDiagnosticKillfocus(){
	
}*/
long CHMSTransferFloor::OnICDDiagnosticLoadData(){
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
/*void CHMSTransferFloor::OnICDDiagnosticAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTransferFloor::OnMainDiseaseChange(){
	
} */
/*void CHMSTransferFloor::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSTransferFloor::OnMainDiseaseKillfocus(){
	
} */
int CHMSTransferFloor::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSTransferFloor::OnRelationDiseaseChange(){
	
} */
/*void CHMSTransferFloor::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSTransferFloor::OnRelationDiseaseKillfocus(){
	
} */
int CHMSTransferFloor::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSTransferFloor::OnConclusionChange(){
	
} */
/*void CHMSTransferFloor::OnConclusionSetfocus(){
	
} */
/*void CHMSTransferFloor::OnConclusionKillfocus(){
	
} */
int CHMSTransferFloor::OnConclusionCheckValue(){
	return 0;
} 
	void CHMSTransferFloor::OnOutPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSTransferFloor::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSTransferFloor();
	
} 
void CHMSTransferFloor::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTransferFloor();
	
} 
void CHMSTransferFloor::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSTransferFloor();
} 
int CHMSTransferFloor::OnAddHMSTransferFloor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;
 
} 
int CHMSTransferFloor::OnEditHMSTransferFloor(){
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
	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}

 	SetMode(VM_EDIT);
	m_bAddNew = true;
	return 0; 
} 
int CHMSTransferFloor::OnDeleteHMSTransferFloor(){
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
 		OnCancelHMSTransferFloor(); 
 	}
return 0;
 } 
int CHMSTransferFloor::OnSaveHMSTransferFloor(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//Kiem tra neu ton tai ho so dieu tri dang mo thi update lai
	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}

 	if(!IsValidateData()) 
 		return -1; 
//	pMF->BeginTransaction();
	szSQL.Format(_T("UPDATE hms_treatment_record ") \
		_T("SET htr_updateddate=systimestamp, htr_status='T', htr_dischargedate='%s', htr_mainicd='%s', htr_maindisease='%s', htr_suggestion='F', htr_tdeptid='%s' ") \
		_T("WHERE htr_docno=%ld AND htr_idx=%d"), 
		m_szDate, m_szICDDiagnosticKey, m_szMainDisease, m_szDepartmentKey, pMF->m_nDocumentNo, pMF->m_nRefIndex);
	//_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0) 
 	{ 
		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		// Update lai khoa benh nhan chuyen den
		szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_dischargedept ='%s', hcr_refidx=%d WHERE hcr_docno=%ld"),m_szDepartmentKey,m_nIndex,pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		if(m_bAddNew)
			szSQL = m_hms_treatment_recordTbl.GetInsertSQL();
		else
		{
			CString szWhere;
			szSQL = m_hms_treatment_recordTbl.GetUpdateSQL(_T("htr_createddate,htr_createdby,htr_patientno,htr_docno,htr_idx"));
			szWhere.Format(_T(" WHERE htr_docno=%ld AND htr_idx=%d"), pMF->m_nDocumentNo, m_nIndex);
			szSQL += szWhere;
		}
		pMF->ExecSQL(szSQL);

		//pMF->Commit();
 		SetMode(VM_VIEW); 
		((CGuiDialog *)	GetParent()->GetParent())->OnOK();
 	} 
 	else 
 	{ 
		//pMF->Rollback();
 	} 
 	return ret; 

}
int CHMSTransferFloor::OnCancelHMSTransferFloor(){
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
int CHMSTransferFloor::OnHMSTransferFloorListLoadData(){
	return 0;
}
bool CHMSTransferFloor::OnCheckAdmitdateBed(int m_nDocno, CString m_szDeptID){
	CMainFrame *pMF =(CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T("SELECT max(hb_enddate) FROM hms_bed WHERE hb_docno=%ld AND hb_deptid='%s'"), m_nDocno, m_szDeptID);
	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();

	if(CompareDate(m_szDate,tmpStr) >= 0) return true;
	
	return false;

}
