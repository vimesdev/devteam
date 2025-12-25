#include "DicomPreviewDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnAddDicomPreviewDialogFnc(CWnd *pWnd){
	 return ((CDicomPreviewDialog*)pWnd)->OnAddDicomPreviewDialog();
} 
static int _OnEditDicomPreviewDialogFnc(CWnd *pWnd){
	 return ((CDicomPreviewDialog*)pWnd)->OnEditDicomPreviewDialog();
} 
static int _OnDeleteDicomPreviewDialogFnc(CWnd *pWnd){
	 return ((CDicomPreviewDialog*)pWnd)->OnDeleteDicomPreviewDialog();
} 
static int _OnSaveDicomPreviewDialogFnc(CWnd *pWnd){
	 return ((CDicomPreviewDialog*)pWnd)->OnSaveDicomPreviewDialog();
} 
static int _OnCancelDicomPreviewDialogFnc(CWnd *pWnd){
	 return ((CDicomPreviewDialog*)pWnd)->OnCancelDicomPreviewDialog();
} 
CDicomPreviewDialog::CDicomPreviewDialog(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CDicomPreviewDialog::~CDicomPreviewDialog(){
}
void CDicomPreviewDialog::OnCreateComponents(){

}
void CDicomPreviewDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CDicomPreviewDialog::OnSetWindowEvents(){
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddDicomPreviewDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditDicomPreviewDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteDicomPreviewDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveDicomPreviewDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelDicomPreviewDialogFnc, 0, 'T', VK_CONTROL);

}
void CDicomPreviewDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CDicomPreviewDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDicomPreviewDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CDicomPreviewDialog::SetDefaultValues(){


}
int CDicomPreviewDialog::SetMode(int nMode){ 
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
int CDicomPreviewDialog::OnAddDicomPreviewDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add DicomPreviewDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CDicomPreviewDialog::OnEditDicomPreviewDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit DicomPreviewDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CDicomPreviewDialog::OnDeleteDicomPreviewDialog(){
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
 		OnCancelDicomPreviewDialog(); 
 	}
return 0;
 } 
int CDicomPreviewDialog::OnSaveDicomPreviewDialog(){
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
 		//OnDicomPreviewDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CDicomPreviewDialog::OnCancelDicomPreviewDialog(){
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
int CDicomPreviewDialog::OnDicomPreviewDialogListLoadData(){
	return 0;
}
