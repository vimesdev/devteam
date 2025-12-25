#include "CStorageInventoryDialog.h"
#include "MainFrm.h"
static int _OnAddCStorageInventoryDialogFnc(CWnd *pWnd){
	 return ((CCStorageInventoryDialog*)pWnd)->OnAddCStorageInventoryDialog();
} 
static int _OnEditCStorageInventoryDialogFnc(CWnd *pWnd){
	 return ((CCStorageInventoryDialog*)pWnd)->OnEditCStorageInventoryDialog();
} 
static int _OnDeleteCStorageInventoryDialogFnc(CWnd *pWnd){
	 return ((CCStorageInventoryDialog*)pWnd)->OnDeleteCStorageInventoryDialog();
} 
static int _OnSaveCStorageInventoryDialogFnc(CWnd *pWnd){
	 return ((CCStorageInventoryDialog*)pWnd)->OnSaveCStorageInventoryDialog();
} 
static int _OnCancelCStorageInventoryDialogFnc(CWnd *pWnd){
	 return ((CCStorageInventoryDialog*)pWnd)->OnCancelCStorageInventoryDialog();
} 
CCStorageInventoryDialog::CCStorageInventoryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCStorageInventoryDialog::~CCStorageInventoryDialog(){
}
void CCStorageInventoryDialog::OnCreateComponents(){

}
void CCStorageInventoryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCStorageInventoryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);

}
void CCStorageInventoryDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CCStorageInventoryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCStorageInventoryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCStorageInventoryDialog::SetDefaultValues(){


}
int CCStorageInventoryDialog::SetMode(int nMode){
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
int CCStorageInventoryDialog::OnAddCStorageInventoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCStorageInventoryDialog::OnEditCStorageInventoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCStorageInventoryDialog::OnDeleteCStorageInventoryDialog(){
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
 		OnCancelCStorageInventoryDialog();
 	}
	return 0;
}
int CCStorageInventoryDialog::OnSaveCStorageInventoryDialog(){
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
 		//OnCStorageInventoryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCStorageInventoryDialog::OnCancelCStorageInventoryDialog(){
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
int CCStorageInventoryDialog::OnCStorageInventoryDialogListLoadData(){
	return 0;
}
