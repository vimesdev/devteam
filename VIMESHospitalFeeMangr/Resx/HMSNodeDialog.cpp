#include "HMSNodeDialog.h"
#include "MainFrm.h"
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSNodeDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSNodeDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSNodeDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSNodeDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSNodeDialog *pVw = (CHMSNodeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSNodeDialog *pVw = (CHMSNodeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSNodeDialogFnc(CWnd *pWnd){
	 return ((CHMSNodeDialog*)pWnd)->OnAddHMSNodeDialog();
} 
static int _OnEditHMSNodeDialogFnc(CWnd *pWnd){
	 return ((CHMSNodeDialog*)pWnd)->OnEditHMSNodeDialog();
} 
static int _OnDeleteHMSNodeDialogFnc(CWnd *pWnd){
	 return ((CHMSNodeDialog*)pWnd)->OnDeleteHMSNodeDialog();
} 
static int _OnSaveHMSNodeDialogFnc(CWnd *pWnd){
	 return ((CHMSNodeDialog*)pWnd)->OnSaveHMSNodeDialog();
} 
static int _OnCancelHMSNodeDialogFnc(CWnd *pWnd){
	 return ((CHMSNodeDialog*)pWnd)->OnCancelHMSNodeDialog();
} 
CHMSNodeDialog::CHMSNodeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSNodeDialog::~CHMSNodeDialog(){
}
void CHMSNodeDialog::OnCreateComponents(){
	m_wndNoteInformation.Create(this, _T("Note"), 5, 5, 365, 155);
	m_wndNote.Create(this,10, 30, 360, 150); 
	m_wndSave.Create(this, _T("&Save"), 205, 160, 285, 185);
	m_wndClose.Create(this, _T("&Close"), 290, 160, 370, 185);

}
void CHMSNodeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);

}
void CHMSNodeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSNodeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSNodeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSNodeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSNodeDialog::SetDefaultValues(){

	m_szNote.Empty();

}
int CHMSNodeDialog::SetMode(int nMode){
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
/*void CHMSNodeDialog::OnNoteChange(){
	
} */
/*void CHMSNodeDialog::OnNoteSetfocus(){
	
} */
/*void CHMSNodeDialog::OnNoteKillfocus(){
	
} */
int CHMSNodeDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSNodeDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSNodeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSNodeDialog::OnAddHMSNodeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSNodeDialog::OnEditHMSNodeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSNodeDialog::OnDeleteHMSNodeDialog(){
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
 		OnCancelHMSNodeDialog();
 	}
	return 0;
}
int CHMSNodeDialog::OnSaveHMSNodeDialog(){
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
 		//OnHMSNodeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSNodeDialog::OnCancelHMSNodeDialog(){
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
int CHMSNodeDialog::OnHMSNodeDialogListLoadData(){
	return 0;
}
