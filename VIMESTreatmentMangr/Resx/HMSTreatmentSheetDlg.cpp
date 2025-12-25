#include "HMSTreatmentSheetDlg.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnDateChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDateChange();
} */
/*static int _OnDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDateKillfocus();} */ 
/*static int _OnDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDateCheckValue();
} 
/*static int _OnDescriptionChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDescriptionChange();
} */
/*static int _OnDescriptionSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDescriptionKillfocus();} */ 
/*static int _OnDescriptionKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnDescriptionCheckValue();
} 
static int _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTreatmentSheetDlg* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDoctorSelendokFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg *)pWnd)->OnDoctorSelendok();
}
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg *)pWnd)->OnDoctorKillfocus();
}*/
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg *)pWnd)->OnDoctorKillfocus();
}*/
static int _OnDoctorLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg *)pWnd)->OnDoctorLoadData();
}
/*static int _OnDoctorAddNewFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg *)pWnd)->OnDoctorAddNew();
}*/
/*static int _OnMedicalInstructionChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnMedicalInstructionChange();
} */
/*static int _OnMedicalInstructionSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnMedicalInstructionKillfocus();} */ 
/*static int _OnMedicalInstructionKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnMedicalInstructionKillfocus();
} */
static int _OnMedicalInstructionCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentSheetDlg *)pWnd)->OnMedicalInstructionCheckValue();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentSheetDlg *pVw = (CHMSTreatmentSheetDlg *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTreatmentSheetDlg *pVw = (CHMSTreatmentSheetDlg *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSTreatmentSheetDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg*)pWnd)->OnAddHMSTreatmentSheetDlg();
} 
static int _OnEditHMSTreatmentSheetDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg*)pWnd)->OnEditHMSTreatmentSheetDlg();
} 
static int _OnDeleteHMSTreatmentSheetDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg*)pWnd)->OnDeleteHMSTreatmentSheetDlg();
} 
static int _OnSaveHMSTreatmentSheetDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg*)pWnd)->OnSaveHMSTreatmentSheetDlg();
} 
static int _OnCancelHMSTreatmentSheetDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentSheetDlg*)pWnd)->OnCancelHMSTreatmentSheetDlg();
} 
CHMSTreatmentSheetDlg::CHMSTreatmentSheetDlg(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CHMSTreatmentSheetDlg::~CHMSTreatmentSheetDlg(){
}
void CHMSTreatmentSheetDlg::OnCreateComponents(){
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 5, 447, 168);
	m_wndDateLabel.Create(this, _T("Date"), 9, 23, 99, 43);
	m_wndDate.Create(this,104, 23, 204, 43); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 9, 48, 99, 68);
	m_wndDescription.Create(this,104, 48, 444, 68); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 209, 23, 259, 43);
	m_wndDoctor.Create(this,264, 23, 444, 43); 
	m_wndMedicalInstructionLabel.Create(this, _T("Medical Instruction"), 9, 73, 99, 93);
	m_wndMedicalInstruction.Create(this,104, 73, 444, 163); 
	m_wndSave.Create(this, _T("&Save"), 314, 173, 379, 195);
	m_wndCancel.Create(this, _T("&Cancel"), 384, 173, 449, 195);

}
void CHMSTreatmentSheetDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndDate.SetDataRequirement(TRUE);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetDataRequirement(TRUE);
	m_wndDoctor.SetDataRequirement(TRUE);
	m_wndDoctor.LimitText(1024);
	m_wndMedicalInstruction.SetLimitText(1024);
	m_wndMedicalInstruction.SetDataRequirement(TRUE);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSTreatmentSheetDlg::OnSetWindowEvents(){
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndMedicalInstruction.SetEvent(WE_CHANGE, _OnMedicalInstructionChangeFnc);
	//m_wndMedicalInstruction.SetEvent(WE_SETFOCUS, _OnMedicalInstructionSetfocusFnc);
	//m_wndMedicalInstruction.SetEvent(WE_KILLFOCUS, _OnMedicalInstructionKillfocusFnc);
	m_wndMedicalInstruction.SetEvent(WE_CHECKVALUE, _OnMedicalInstructionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentSheetDlgFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentSheetDlgFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentSheetDlgFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentSheetDlgFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentSheetDlgFnc, 0, 'T', VK_CONTROL);

}
void CHMSTreatmentSheetDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndMedicalInstruction.GetDlgCtrlID(), m_szMedicalInstruction);

}
void CHMSTreatmentSheetDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentSheetDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentSheetDlg::SetDefaultValues(){

	m_szDate.Empty();
	m_szDescription.Empty();
	m_szDoctorKey.Empty();
	m_szMedicalInstruction.Empty();

}
/*int CHMSTreatmentSheetDlg::OnDateChange(){
	return 0;
} */
/*int CHMSTreatmentSheetDlg::OnDateSetfocus(){
	return 0;
} */
/*int CHMSTreatmentSheetDlg::OnDateKillfocus(){
	return 0;
} */
int CHMSTreatmentSheetDlg::OnDateCheckValue(){
	return 0;
} 
/*int CHMSTreatmentSheetDlg::OnDescriptionChange(){
	return 0;
} */
/*int CHMSTreatmentSheetDlg::OnDescriptionSetfocus(){
	return 0;
} */
/*int CHMSTreatmentSheetDlg::OnDescriptionKillfocus(){
	return 0;
} */
int CHMSTreatmentSheetDlg::OnDescriptionCheckValue(){
	return 0;
} 
int CHMSTreatmentSheetDlg::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentSheetDlg::OnDoctorSelendok(){
	 return 0;
}
/*int CHMSTreatmentSheetDlg::OnDoctorSetfocus(){
	 return 0;
}*/
/*int CHMSTreatmentSheetDlg::OnDoctorKillfocus(){
	 return 0;
}*/
int CHMSTreatmentSheetDlg::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey()){
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSTreatmentSheetDlg::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSTreatmentSheetDlg::OnMedicalInstructionChange(){
	return 0;
} */
/*int CHMSTreatmentSheetDlg::OnMedicalInstructionSetfocus(){
	return 0;
} */
/*int CHMSTreatmentSheetDlg::OnMedicalInstructionKillfocus(){
	return 0;
} */
int CHMSTreatmentSheetDlg::OnMedicalInstructionCheckValue(){
	return 0;
} 
int CHMSTreatmentSheetDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentSheetDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentSheetDlg::OnAddHMSTreatmentSheetDlg(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTreatmentSheetDlg"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSTreatmentSheetDlg::OnEditHMSTreatmentSheetDlg(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTreatmentSheetDlg"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSTreatmentSheetDlg::OnDeleteHMSTreatmentSheetDlg(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSTreatmentSheetDlg(); 
 		OnHMSTreatmentSheetDlgLoadData(); 
 	} */ return 0;
 } 
int CHMSTreatmentSheetDlg::OnSaveHMSTreatmentSheetDlg(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("HMSTreatmentSheetDlg"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?O?kListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSTreatmentSheetDlg::OnCancelHMSTreatmentSheetDlg(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
