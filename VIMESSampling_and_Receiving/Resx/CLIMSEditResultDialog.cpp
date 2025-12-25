#include "CLIMSEditResultDialog.h"
#include "MainFrm.h"
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CCLIMSEditResultDialog *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CCLIMSEditResultDialog *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CCLIMSEditResultDialog *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSEditResultDialog *)pWnd)->OnResultCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CCLIMSEditResultDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CCLIMSEditResultDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CCLIMSEditResultDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSEditResultDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCLIMSEditResultDialog *pVw = (CCLIMSEditResultDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCLIMSEditResultDialog *pVw = (CCLIMSEditResultDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CCLIMSEditResultDialog*)pWnd)->OnAddCLIMSEditResultDialog();
} 
static int _OnEditCLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CCLIMSEditResultDialog*)pWnd)->OnEditCLIMSEditResultDialog();
} 
static int _OnDeleteCLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CCLIMSEditResultDialog*)pWnd)->OnDeleteCLIMSEditResultDialog();
} 
static int _OnSaveCLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CCLIMSEditResultDialog*)pWnd)->OnSaveCLIMSEditResultDialog();
} 
static int _OnCancelCLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CCLIMSEditResultDialog*)pWnd)->OnCancelCLIMSEditResultDialog();
} 
CCLIMSEditResultDialog::CCLIMSEditResultDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCLIMSEditResultDialog::~CCLIMSEditResultDialog(){
}
void CCLIMSEditResultDialog::OnCreateComponents(){
	m_wndEditResult.Create(this, _T("Edit Result"), 1, 6, 416, 91);
	m_wndResultLabel.Create(this, _T("Result"), 10, 30, 90, 55);
	m_wndResult.Create(this,95, 30, 415, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 414, 85); 
	m_wndSave.Create(this, _T("&Save"), 251, 96, 331, 121);
	m_wndClose.Create(this, _T("&Close"), 336, 96, 416, 121);

}
void CCLIMSEditResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndResult.SetLimitText(1024);
	m_wndResult.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);

}
void CCLIMSEditResultDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CCLIMSEditResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CCLIMSEditResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCLIMSEditResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCLIMSEditResultDialog::SetDefaultValues(){

	m_szResult.Empty();
	m_szNote.Empty();

}
int CCLIMSEditResultDialog::SetMode(int nMode){
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
/*void CCLIMSEditResultDialog::OnResultChange(){
	
} */
/*void CCLIMSEditResultDialog::OnResultSetfocus(){
	
} */
/*void CCLIMSEditResultDialog::OnResultKillfocus(){
	
} */
int CCLIMSEditResultDialog::OnResultCheckValue(){
	return 0;
} 
/*void CCLIMSEditResultDialog::OnNoteChange(){
	
} */
/*void CCLIMSEditResultDialog::OnNoteSetfocus(){
	
} */
/*void CCLIMSEditResultDialog::OnNoteKillfocus(){
	
} */
int CCLIMSEditResultDialog::OnNoteCheckValue(){
	return 0;
} 
void CCLIMSEditResultDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSEditResultDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSEditResultDialog::OnAddCLIMSEditResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCLIMSEditResultDialog::OnEditCLIMSEditResultDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCLIMSEditResultDialog::OnDeleteCLIMSEditResultDialog(){
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
 		OnCancelCLIMSEditResultDialog();
 	}
	return 0;
}
int CCLIMSEditResultDialog::OnSaveCLIMSEditResultDialog(){
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
 		//OnCLIMSEditResultDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCLIMSEditResultDialog::OnCancelCLIMSEditResultDialog(){
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
int CCLIMSEditResultDialog::OnCLIMSEditResultDialogListLoadData(){
	return 0;
}
