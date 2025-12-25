#include "xxx.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnAddxxxFnc(CWnd *pWnd){
	 return ((Cxxx*)pWnd)->OnAddxxx();
} 
static int _OnEditxxxFnc(CWnd *pWnd){
	 return ((Cxxx*)pWnd)->OnEditxxx();
} 
static int _OnDeletexxxFnc(CWnd *pWnd){
	 return ((Cxxx*)pWnd)->OnDeletexxx();
} 
static int _OnSavexxxFnc(CWnd *pWnd){
	 return ((Cxxx*)pWnd)->OnSavexxx();
} 
static int _OnCancelxxxFnc(CWnd *pWnd){
	 return ((Cxxx*)pWnd)->OnCancelxxx();
} 
Cxxx::Cxxx(){

	m_nDlgWidth = 786;
	m_nDlgHeight = 586;
	SetDefaultValues();
}
Cxxx::~Cxxx(){
}
void Cxxx::OnCreateComponents(){

}
void Cxxx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_hms_htdocTbl.SetTableName(_T("hms_htdoc"));
	m_hms_htdocTbl.AddField(_T("hhtd_createddate"), dfDateTime); 
	m_hms_htdocTbl.AddField(_T("hhtd_createdby"), dfText, 15); 
	m_hms_htdocTbl.AddField(_T("hhtd_updateddate"), dfDateTime); 
	m_hms_htdocTbl.AddField(_T("hhtd_updatedby"), dfText, 15); 
	m_hms_htdocTbl.AddField(_T("hhtd_docno"), dfLong); 
	m_hms_htdocTbl.AddField(_T("hhtd_clinical_symbol"), dfText, 512); 
	m_hms_htdocTbl.AddField(_T("hhtd_tests"), dfText, 254); 
	m_hms_htdocTbl.AddField(_T("hhtd_medicine_used"), dfText, 254); 
	m_hms_htdocTbl.AddField(_T("hhtd_patient_state"), dfText, 128); 
	m_hms_htdocTbl.AddField(_T("hhtd_transfer_date"), dfDateTime); 
	m_hms_htdocTbl.AddField(_T("hhtd_reason"), dfText, 128); 
	m_hms_htdocTbl.AddField(_T("hhtd_transport"), dfLong); 
	m_hms_htdocTbl.AddField(_T("hhtd_attender"), dfText, 65); 

}
void Cxxx::OnSetWindowEvents(){

}
void Cxxx::OnDoDataExchange(CDataExchange* pDX){

}
void Cxxx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void Cxxx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_htdocTbl.SetValue(_T("hhtd_createddate"), pMF->GetSysDateTime());
	m_hms_htdocTbl.SetValue(_T("hhtd_createdby"), pMF->GetCurrentUser());
	m_hms_htdocTbl.SetValue(_T("hhtd_updateddate"), pMF->GetSysDateTime());
	m_hms_htdocTbl.SetValue(_T("hhtd_updatedby"), pMF->GetCurrentUser());

}
void Cxxx::SetDefaultValues(){


}
int Cxxx::SetMode(int nMode){ 
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
int Cxxx::OnAddxxx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add xxx"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int Cxxx::OnEditxxx(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit xxx"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int Cxxx::OnDeletexxx(){
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
 		OnCancelxxx(); 
 	}
return 0;
 } 
int Cxxx::OnSavexxx(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_htdocTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_htdocTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnxxxListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int Cxxx::OnCancelxxx(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int Cxxx::OnxxxListLoadData(){
	return 0;
}
