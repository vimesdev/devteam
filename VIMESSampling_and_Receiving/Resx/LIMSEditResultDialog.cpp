#include "LIMSEditResultDialog.h"
#include "MainFrm.h"
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CLIMSEditResultDialog *)pWnd)->OnResultCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CLIMSEditResultDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CLIMSEditResultDialog *pVw = (CLIMSEditResultDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CLIMSEditResultDialog *pVw = (CLIMSEditResultDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnAddLIMSEditResultDialog();
} 
static int _OnEditLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnEditLIMSEditResultDialog();
} 
static int _OnDeleteLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnDeleteLIMSEditResultDialog();
} 
static int _OnSaveLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnSaveLIMSEditResultDialog();
} 
static int _OnCancelLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnCancelLIMSEditResultDialog();
} 
CLIMSEditResultDialog::CLIMSEditResultDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 260;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CLIMSEditResultDialog::~CLIMSEditResultDialog(){
}
void CLIMSEditResultDialog::OnCreateComponents(){
	m_wndEditResult.Create(this, _T("Edit Result"), 5, 5, 250, 90);
	m_wndResultLabel.Create(this, _T("Result"), 10, 30, 90, 55);
	m_wndResult.Create(this,95, 30, 245, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 245, 85); 
	m_wndSave.Create(this, _T("&Save"), 85, 95, 165, 120);
	m_wndClose.Create(this, _T("&Close"), 170, 95, 250, 120);

}
void CLIMSEditResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndResult.SetLimitText(35);
	m_wndResult.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);

}
void CLIMSEditResultDialog::OnSetWindowEvents(){
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
void CLIMSEditResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CLIMSEditResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSEditResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSEditResultDialog::SetDefaultValues(){

	m_szResult.Empty();
	m_szNote.Empty();

}
int CLIMSEditResultDialog::SetMode(int nMode){
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
/*void CLIMSEditResultDialog::OnResultChange(){
	
} */
/*void CLIMSEditResultDialog::OnResultSetfocus(){
	
} */
/*void CLIMSEditResultDialog::OnResultKillfocus(){
	
} */
int CLIMSEditResultDialog::OnResultCheckValue(){
	return 0;
} 
/*void CLIMSEditResultDialog::OnNoteChange(){
	
} */
/*void CLIMSEditResultDialog::OnNoteSetfocus(){
	
} */
/*void CLIMSEditResultDialog::OnNoteKillfocus(){
	
} */
int CLIMSEditResultDialog::OnNoteCheckValue(){
	return 0;
} 
void CLIMSEditResultDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSEditResultDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSEditResultDialog::OnAddLIMSEditResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSEditResultDialog::OnEditLIMSEditResultDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSEditResultDialog::OnDeleteLIMSEditResultDialog(){
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
 		OnCancelLIMSEditResultDialog(); 
 	}
	return 0;
}
int CLIMSEditResultDialog::OnSaveLIMSEditResultDialog(){
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
 		//OnLIMSEditResultDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSEditResultDialog::OnCancelLIMSEditResultDialog(){
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
int CLIMSEditResultDialog::OnLIMSEditResultDialogListLoadData(){
	return 0;
}
