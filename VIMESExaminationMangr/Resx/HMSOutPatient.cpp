#include "HMSOutPatient.h"
#include "MainFrm.h"
/*static void _OnInDateChangeFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnInDateChange();
} */
/*static void _OnInDateSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnInDateSetfocus();} */ 
/*static void _OnInDateKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatient *)pWnd)->OnInDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOutPatient* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSOutPatient *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExamineDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOutPatient* )pWnd)->OnExamineDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamineDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnExamineDiseaseSelendok();
}
/*static void _OnExamineDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnExamineDiseaseKillfocus();
}*/
/*static void _OnExamineDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnExamineDiseaseKillfocus();
}*/
static long _OnExamineDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSOutPatient *)pWnd)->OnExamineDiseaseLoadData();
}
/*static void _OnExamineDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnExamineDiseaseAddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatient *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatient *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatient *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatient *)pWnd)->OnConclusionCheckValue();
} 
static void _OnOutPatientTreatmentSelectFnc(CWnd *pWnd){
	 ((CHMSOutPatient*)pWnd)->OnOutPatientTreatmentSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSOutPatient *pVw = (CHMSOutPatient *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOutPatient *pVw = (CHMSOutPatient *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOutPatient *pVw = (CHMSOutPatient *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSOutPatientFnc(CWnd *pWnd){
	 return ((CHMSOutPatient*)pWnd)->OnAddHMSOutPatient();
} 
static int _OnEditHMSOutPatientFnc(CWnd *pWnd){
	 return ((CHMSOutPatient*)pWnd)->OnEditHMSOutPatient();
} 
static int _OnDeleteHMSOutPatientFnc(CWnd *pWnd){
	 return ((CHMSOutPatient*)pWnd)->OnDeleteHMSOutPatient();
} 
static int _OnSaveHMSOutPatientFnc(CWnd *pWnd){
	 return ((CHMSOutPatient*)pWnd)->OnSaveHMSOutPatient();
} 
static int _OnCancelHMSOutPatientFnc(CWnd *pWnd){
	 return ((CHMSOutPatient*)pWnd)->OnCancelHMSOutPatient();
} 
CHMSOutPatient::CHMSOutPatient(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSOutPatient::~CHMSOutPatient(){
}
void CHMSOutPatient::OnCreateComponents(){
	m_wndAdmissionInformation.Create(this, _T("Admission Information"), 5, 5, 600, 230);
	m_wndInDateLabel.Create(this, _T("Date"), 10, 30, 130, 55);
	m_wndInDate.Create(this,135, 30, 260, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 265, 30, 356, 55);
	m_wndDepartment.Create(this,361, 30, 596, 55); 
	m_wndICDDiagnosicLabel.Create(this, _T("ICD Diagnosic"), 10, 60, 130, 85);
	m_wndExamineDisease.Create(this,135, 60, 596, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 596, 115); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 596, 145); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 150, 130, 175);
	m_wndConclusion.Create(this,135, 149, 596, 224); 
	m_wndOutPatientTreatment.Create(this, _T("Out Patient Treatment"), 135, 235, 305, 260);
	m_wndUpdate.Create(this, _T("&Update"), 365, 235, 440, 260);
	m_wndSave.Create(this, _T("&Save"), 445, 235, 520, 260);
	m_wndCancel.Create(this, _T("&Cancel"), 525, 235, 600, 260);

}
void CHMSOutPatient::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndInDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndInDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndExamineDisease.SetCheckValue(true);
	m_wndExamineDisease.LimitText(1024);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndExamineDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamineDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSOutPatient::OnSetWindowEvents(){
	//m_wndInDate.SetEvent(WE_CHANGE, _OnInDateChangeFnc);
	//m_wndInDate.SetEvent(WE_SETFOCUS, _OnInDateSetfocusFnc);
	//m_wndInDate.SetEvent(WE_KILLFOCUS, _OnInDateKillfocusFnc);
	m_wndInDate.SetEvent(WE_CHECKVALUE, _OnInDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndExamineDisease.SetEvent(WE_SELENDOK, _OnExamineDiseaseSelendokFnc);
	//m_wndExamineDisease.SetEvent(WE_SETFOCUS, _OnExamineDiseaseSetfocusFnc);
	//m_wndExamineDisease.SetEvent(WE_KILLFOCUS, _OnExamineDiseaseKillfocusFnc);
	m_wndExamineDisease.SetEvent(WE_SELCHANGE, _OnExamineDiseaseSelectChangeFnc);
	m_wndExamineDisease.SetEvent(WE_LOADDATA, _OnExamineDiseaseLoadDataFnc);
	//m_wndExamineDisease.SetEvent(WE_ADDNEW, _OnExamineDiseaseAddNewFnc);
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
	m_wndOutPatientTreatment.SetEvent(WE_CLICK, _OnOutPatientTreatmentSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOutPatientFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOutPatientFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOutPatientFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOutPatientFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOutPatientFnc, 0, 'T', VK_CONTROL);

}
void CHMSOutPatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInDate.GetDlgCtrlID(), m_szInDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndExamineDisease.GetDlgCtrlID(), m_szExamineDiseaseKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Check(pDX, m_wndOutPatientTreatment.GetDlgCtrlID(), m_bOutPatientTreatment);

}
void CHMSOutPatient::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOutPatient::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOutPatient::SetDefaultValues(){

	m_szInDate.Empty();
	m_szDepartmentKey.Empty();
	m_szExamineDiseaseKey.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szConclusion.Empty();
	m_bOutPatientTreatment=FALSE;

}
int CHMSOutPatient::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
/*void CHMSOutPatient::OnInDateChange(){
	
} */
/*void CHMSOutPatient::OnInDateSetfocus(){
	
} */
/*void CHMSOutPatient::OnInDateKillfocus(){
	
} */
int CHMSOutPatient::OnInDateCheckValue(){
	return 0;
} 
void CHMSOutPatient::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatient::OnDepartmentSelendok(){
	 
}
/*void CHMSOutPatient::OnDepartmentSetfocus(){
	
}*/
/*void CHMSOutPatient::OnDepartmentKillfocus(){
	
}*/
long CHMSOutPatient::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSOutPatient::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOutPatient::OnExamineDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatient::OnExamineDiseaseSelendok(){
	 
}
/*void CHMSOutPatient::OnExamineDiseaseSetfocus(){
	
}*/
/*void CHMSOutPatient::OnExamineDiseaseKillfocus(){
	
}*/
long CHMSOutPatient::OnExamineDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamineDisease.IsSearchKey() && !m_szExamineDiseaseKey.IsEmpty()){
	};
	m_wndExamineDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamineDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOutPatient::OnExamineDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOutPatient::OnMainDiseaseChange(){
	
} */
/*void CHMSOutPatient::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSOutPatient::OnMainDiseaseKillfocus(){
	
} */
int CHMSOutPatient::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSOutPatient::OnRelationDiseaseChange(){
	
} */
/*void CHMSOutPatient::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSOutPatient::OnRelationDiseaseKillfocus(){
	
} */
int CHMSOutPatient::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSOutPatient::OnConclusionChange(){
	
} */
/*void CHMSOutPatient::OnConclusionSetfocus(){
	
} */
/*void CHMSOutPatient::OnConclusionKillfocus(){
	
} */
int CHMSOutPatient::OnConclusionCheckValue(){
	return 0;
} 
	void CHMSOutPatient::OnOutPatientTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSOutPatient::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatient::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatient::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOutPatient::OnAddHMSOutPatient(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSOutPatient::OnEditHMSOutPatient(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOutPatient::OnDeleteHMSOutPatient(){
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
 		OnCancelHMSOutPatient(); 
 	}
	return 0;
}
int CHMSOutPatient::OnSaveHMSOutPatient(){
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
 		//OnHMSOutPatientListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOutPatient::OnCancelHMSOutPatient(){
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
int CHMSOutPatient::OnHMSOutPatientListLoadData(){
	return 0;
}
