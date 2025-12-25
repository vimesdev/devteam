#include "ApproveOrderNoteDialog.h"
#include "MainFrm.h"
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CApproveOrderNoteDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CApproveOrderNoteDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CApproveOrderNoteDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CApproveOrderNoteDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnApproveSelectFnc(CWnd *pWnd){
	CApproveOrderNoteDialog *pVw = (CApproveOrderNoteDialog *)pWnd;
	pVw->OnApproveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CApproveOrderNoteDialog *pVw = (CApproveOrderNoteDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddApproveOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CApproveOrderNoteDialog*)pWnd)->OnAddApproveOrderNoteDialog();
} 
static int _OnEditApproveOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CApproveOrderNoteDialog*)pWnd)->OnEditApproveOrderNoteDialog();
} 
static int _OnDeleteApproveOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CApproveOrderNoteDialog*)pWnd)->OnDeleteApproveOrderNoteDialog();
} 
static int _OnSaveApproveOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CApproveOrderNoteDialog*)pWnd)->OnSaveApproveOrderNoteDialog();
} 
static int _OnCancelApproveOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CApproveOrderNoteDialog*)pWnd)->OnCancelApproveOrderNoteDialog();
} 
CApproveOrderNoteDialog::CApproveOrderNoteDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CApproveOrderNoteDialog::~CApproveOrderNoteDialog(){
}
void CApproveOrderNoteDialog::OnCreateComponents(){
	m_wndNote.Create(this,5, 45, 475, 170); 
	m_wndApprove.Create(this, _T("&Approve"), 310, 175, 390, 200);
	m_wndCancel.Create(this, _T("&Cancel"), 395, 175, 475, 200);
	m_wndNoteLabel.Create(this, _T("Do you want to approve the order submited by [%s]"), 5, 5, 475, 40);

}
void CApproveOrderNoteDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);

}
void CApproveOrderNoteDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndApprove.SetEvent(WE_CLICK, _OnApproveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CApproveOrderNoteDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CApproveOrderNoteDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CApproveOrderNoteDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CApproveOrderNoteDialog::SetDefaultValues(){

	m_szNote.Empty();

}
int CApproveOrderNoteDialog::SetMode(int nMode){
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
/*void CApproveOrderNoteDialog::OnNoteChange(){
	
} */
/*void CApproveOrderNoteDialog::OnNoteSetfocus(){
	
} */
/*void CApproveOrderNoteDialog::OnNoteKillfocus(){
	
} */
int CApproveOrderNoteDialog::OnNoteCheckValue(){
	return 0;
} 
void CApproveOrderNoteDialog::OnApproveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CApproveOrderNoteDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CApproveOrderNoteDialog::OnAddApproveOrderNoteDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CApproveOrderNoteDialog::OnEditApproveOrderNoteDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CApproveOrderNoteDialog::OnDeleteApproveOrderNoteDialog(){
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
 		OnCancelApproveOrderNoteDialog();
 	}
	return 0;
}
int CApproveOrderNoteDialog::OnSaveApproveOrderNoteDialog(){
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
 		//OnApproveOrderNoteDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CApproveOrderNoteDialog::OnCancelApproveOrderNoteDialog(){
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
int CApproveOrderNoteDialog::OnApproveOrderNoteDialogListLoadData(){
	return 0;
}
