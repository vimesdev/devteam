#include "HMSPatientCareDlg.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnDateChangeFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDateChange();
} */
/*static int _OnDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDateKillfocus();} */ 
/*static int _OnDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDateCheckValue();
} 
/*static int _OnDescriptionChangeFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDescriptionChange();
} */
/*static int _OnDescriptionSetfocusFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDescriptionKillfocus();} */ 
/*static int _OnDescriptionKillfocusFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnDescriptionCheckValue();
} 
static int _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSPatientCareDlg* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDoctorSelendokFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg *)pWnd)->OnDoctorSelendok();
}
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg *)pWnd)->OnDoctorKillfocus();
}*/
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg *)pWnd)->OnDoctorKillfocus();
}*/
static int _OnDoctorLoadDataFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg *)pWnd)->OnDoctorLoadData();
}
/*static int _OnDoctorAddNewFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg *)pWnd)->OnDoctorAddNew();
}*/
/*static int _OnMedicalInstructionChangeFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnMedicalInstructionChange();
} */
/*static int _OnMedicalInstructionSetfocusFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnMedicalInstructionKillfocus();} */ 
/*static int _OnMedicalInstructionKillfocusFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnMedicalInstructionKillfocus();
} */
static int _OnMedicalInstructionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientCareDlg *)pWnd)->OnMedicalInstructionCheckValue();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientCareDlg *pVw = (CHMSPatientCareDlg *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPatientCareDlg *pVw = (CHMSPatientCareDlg *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSPatientCareDlgFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg*)pWnd)->OnAddHMSPatientCareDlg();
} 
static int _OnEditHMSPatientCareDlgFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg*)pWnd)->OnEditHMSPatientCareDlg();
} 
static int _OnDeleteHMSPatientCareDlgFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg*)pWnd)->OnDeleteHMSPatientCareDlg();
} 
static int _OnSaveHMSPatientCareDlgFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg*)pWnd)->OnSaveHMSPatientCareDlg();
} 
static int _OnCancelHMSPatientCareDlgFnc(CWnd *pWnd){
	 return ((CHMSPatientCareDlg*)pWnd)->OnCancelHMSPatientCareDlg();
} 
CHMSPatientCareDlg::CHMSPatientCareDlg(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CHMSPatientCareDlg::~CHMSPatientCareDlg(){
}
void CHMSPatientCareDlg::OnCreateComponents(){
	m_wndPatientCareInformation.Create(this, _T("Patient Care Information"), 5, 5, 447, 168);
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
void CHMSPatientCareDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
//	m_wndDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(1024);
	m_wndMedicalInstruction.SetLimitText(1024);
	m_wndMedicalInstruction.SetCheckValue(true);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPatientCareDlg::OnSetWindowEvents(){
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

}
void CHMSPatientCareDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndMedicalInstruction.GetDlgCtrlID(), m_szMedicalInstruction);

}
void CHMSPatientCareDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientCareDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientCareDlg::SetDefaultValues(){

	m_szDate.Empty();
	m_szDescription.Empty();
	m_szDoctorKey.Empty();
	m_szMedicalInstruction.Empty();

}
/*int CHMSPatientCareDlg::OnDateChange(){
	return 0;
} */
/*int CHMSPatientCareDlg::OnDateSetfocus(){
	return 0;
} */
/*int CHMSPatientCareDlg::OnDateKillfocus(){
	return 0;
} */
int CHMSPatientCareDlg::OnDateCheckValue(){
	return 0;
} 
/*int CHMSPatientCareDlg::OnDescriptionChange(){
	return 0;
} */
/*int CHMSPatientCareDlg::OnDescriptionSetfocus(){
	return 0;
} */
/*int CHMSPatientCareDlg::OnDescriptionKillfocus(){
	return 0;
} */
int CHMSPatientCareDlg::OnDescriptionCheckValue(){
	return 0;
} 
int CHMSPatientCareDlg::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCareDlg::OnDoctorSelendok(){
	 return 0;
}
/*int CHMSPatientCareDlg::OnDoctorSetfocus(){
	 return 0;
}*/
/*int CHMSPatientCareDlg::OnDoctorKillfocus(){
	 return 0;
}*/
int CHMSPatientCareDlg::OnDoctorLoadData(){
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
/*int CHMSPatientCareDlg::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSPatientCareDlg::OnMedicalInstructionChange(){
	return 0;
} */
/*int CHMSPatientCareDlg::OnMedicalInstructionSetfocus(){
	return 0;
} */
/*int CHMSPatientCareDlg::OnMedicalInstructionKillfocus(){
	return 0;
} */
int CHMSPatientCareDlg::OnMedicalInstructionCheckValue(){
	return 0;
} 
int CHMSPatientCareDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCareDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCareDlg::OnAddHMSPatientCareDlg(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPatientCareDlg"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSPatientCareDlg::OnEditHMSPatientCareDlg(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPatientCareDlg"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSPatientCareDlg::OnDeleteHMSPatientCareDlg(){ /* 
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
 		OnCancelHMSPatientCareDlg(); 
 		OnHMSPatientCareDlgLoadData(); 
 	} */ return 0;
 } 
int CHMSPatientCareDlg::OnSaveHMSPatientCareDlg(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_VIMES_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_VIMES_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("HMSPatientCareDlg"), szSQL); 
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
int CHMSPatientCareDlg::OnCancelHMSPatientCareDlg(){ /* 
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
