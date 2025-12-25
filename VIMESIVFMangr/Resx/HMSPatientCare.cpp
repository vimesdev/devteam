#include "HMSPatientCare.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnCareListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnCareListLoadData();
} 
static int _OnCareListDblClickFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnCareListDblClick();
} 
static int _OnCareListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSPatientCare*)pWnd)->OnCareListSelectChange(nOldItem, nNewItem);
} 
static int _OnCareListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnCareListDeleteItem();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSPatientCare *pVw = (CHMSPatientCare *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSPatientCare *pVw = (CHMSPatientCare *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPatientCare *pVw = (CHMSPatientCare *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnAddHMSPatientCareFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnAddHMSPatientCare();
} 
static int _OnEditHMSPatientCareFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnEditHMSPatientCare();
} 
static int _OnDeleteHMSPatientCareFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnDeleteHMSPatientCare();
} 
static int _OnSaveHMSPatientCareFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnSaveHMSPatientCare();
} 
static int _OnCancelHMSPatientCareFnc(CWnd *pWnd){
	 return ((CHMSPatientCare*)pWnd)->OnCancelHMSPatientCare();
} 
CHMSPatientCare::CHMSPatientCare(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CHMSPatientCare::~CHMSPatientCare(){
}
void CHMSPatientCare::OnCreateComponents(){
	m_wndPatientCareInformation.Create(this, _T("Patient Care Information"), 5, 5, 593, 365);
	m_wndCareList.Create(this,9, 24, 589, 360); 
	m_wndAdd.Create(this, _T("&Add"), 389, 370, 454, 392);
	m_wndEdit.Create(this, _T("&Edit"), 459, 370, 524, 392);
	m_wndDelete.Create(this, _T("&Delete"), 529, 370, 594, 392);

}
void CHMSPatientCare::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndCareList.InsertColumn(0, _T("Date"), CFMT_DATE, 70);
	m_wndCareList.InsertColumn(1, _T("Time"), CFMT_TIME, 50);
	m_wndCareList.InsertColumn(2, _T("Description"), CFMT_TEXT, 200);
	m_wndCareList.InsertColumn(3, _T("Medical Instruction"), CFMT_TEXT, 250);

}
void CHMSPatientCare::OnSetWindowEvents(){
	m_wndCareList.SetEvent(WE_SELCHANGE, _OnCareListSelectChangeFnc);
	m_wndCareList.SetEvent(WE_LOADDATA, _OnCareListLoadDataFnc);
	m_wndCareList.SetEvent(WE_DBLCLICK, _OnCareListDblClickFnc);
	m_wndCareList.AddEvent(1, _T("Delete"), _OnCareListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientCareFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientCareFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientCareFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientCareFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientCareFnc, 0, 'T', VK_CONTROL);

}
void CHMSPatientCare::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPatientCare::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientCare::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientCare::SetDefaultValues(){


}
int CHMSPatientCare::OnCareListDblClick(){
	 return 0;
} 
int CHMSPatientCare::OnCareListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCare::OnCareListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCare::OnCareListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndCareList.BeginLoad(); 
	m_wndCareList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCareList.AddItems(
			rs.GetValue(_T("Date")), 
			rs.GetValue(_T("Time")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("MedicalInstruction")), NULL);
		rs.MoveNext();
	}
	m_wndCareList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSPatientCare::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCare::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCare::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPatientCare::OnAddHMSPatientCare(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPatientCare"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSPatientCare::OnEditHMSPatientCare(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPatientCare"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSPatientCare::OnDeleteHMSPatientCare(){ /* 
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
 		OnCancelHMSPatientCare(); 
 		OnHMSPatientCareLoadData(); 
 	} */ return 0;
 } 
int CHMSPatientCare::OnSaveHMSPatientCare(){ /* 
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
 _fmsg(_T("HMSPatientCare"), szSQL); 
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
int CHMSPatientCare::OnCancelHMSPatientCare(){ /* 
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
