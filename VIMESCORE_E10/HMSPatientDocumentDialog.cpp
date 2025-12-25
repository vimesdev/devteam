#include "HMSPatientDocumentDialog.h"
#include "MainFrame_E10.h"
static int _OnAddHMSPatientDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentDialog*)pWnd)->OnAddHMSPatientDocumentDialog();
} 
static int _OnEditHMSPatientDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentDialog*)pWnd)->OnEditHMSPatientDocumentDialog();
} 
static int _OnDeleteHMSPatientDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentDialog*)pWnd)->OnDeleteHMSPatientDocumentDialog();
} 
static int _OnSaveHMSPatientDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentDialog*)pWnd)->OnSaveHMSPatientDocumentDialog();
} 
static int _OnCancelHMSPatientDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentDialog*)pWnd)->OnCancelHMSPatientDocumentDialog();
} 
CHMSPatientDocumentDialog::CHMSPatientDocumentDialog(CWnd *pParent): CGuiDialog(pParent)
{

	m_nDlgWidth = 965;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CHMSPatientDocumentDialog::~CHMSPatientDocumentDialog(){
}
void CHMSPatientDocumentDialog::OnCreateComponents(){
	m_wndPatientList.Create(this, CRect(5, 5, 320, 600));
	m_wndPatientProfile.Create(this, CRect(325, 5, 600, 600));
}
void CHMSPatientDocumentDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHMSPatientDocumentDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}
void CHMSPatientDocumentDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPatientDocumentDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSPatientDocumentDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDocumentDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHMSPatientDocumentDialog::SetDefaultValues(){


}
int CHMSPatientDocumentDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
int CHMSPatientDocumentDialog::OnAddHMSPatientDocumentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientDocumentDialog::OnEditHMSPatientDocumentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientDocumentDialog::OnDeleteHMSPatientDocumentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSPatientDocumentDialog();
 	}
	return 0;
}
int CHMSPatientDocumentDialog::OnSaveHMSPatientDocumentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnHMSPatientDocumentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientDocumentDialog::OnCancelHMSPatientDocumentDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CHMSPatientDocumentDialog::OnHMSPatientDocumentDialogListLoadData(){
	return 0;
}
