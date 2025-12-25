#include "HMSTerminateDocumentDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnSuggestionSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSTerminateDocumentDialog*)pWnd)->OnSuggestionSelectChange(nOld, nNew);
} 
static int _OnAddHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnAddHMSTerminateDocumentDialog();
} 
static int _OnEditHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnEditHMSTerminateDocumentDialog();
} 
static int _OnDeleteHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnDeleteHMSTerminateDocumentDialog();
} 
static int _OnSaveHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnSaveHMSTerminateDocumentDialog();
} 
static int _OnCancelHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnCancelHMSTerminateDocumentDialog();
} 
CHMSTerminateDocumentDialog::CHMSTerminateDocumentDialog(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
CHMSTerminateDocumentDialog::~CHMSTerminateDocumentDialog(){
}
void CHMSTerminateDocumentDialog::OnCreateComponents(){
	m_wndSuggestionInformation.Create(this, _T("Suggestion Information"), 5, 6, 795, 496);
	m_wndSuggestion.Create(this,10, 30, 790, 490); 

}
void CHMSTerminateDocumentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CHMSTerminateDocumentDialog::OnSetWindowEvents(){
	m_wndSuggestion.SetEvent(WE_SELCHANGE, _OnSuggestionSelectChangeFnc);

}
void CHMSTerminateDocumentDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSTerminateDocumentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTerminateDocumentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTerminateDocumentDialog::SetDefaultValues(){


}
int CHMSTerminateDocumentDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
void CHMSTerminateDocumentDialog::OnSuggestionSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTerminateDocumentDialog::OnAddHMSTerminateDocumentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTerminateDocumentDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSTerminateDocumentDialog::OnEditHMSTerminateDocumentDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTerminateDocumentDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSTerminateDocumentDialog::OnDeleteHMSTerminateDocumentDialog(){
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
 		OnCancelHMSTerminateDocumentDialog(); 
 	}
return 0;
 } 
int CHMSTerminateDocumentDialog::OnSaveHMSTerminateDocumentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSTerminateDocumentDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTerminateDocumentDialog::OnCancelHMSTerminateDocumentDialog(){
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
int CHMSTerminateDocumentDialog::OnHMSTerminateDocumentDialogListLoadData(){
	return 0;
}
