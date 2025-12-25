#include "RejectOrderNoteDialog.h"
#include "MainFrame_E10.h"
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CRejectOrderNoteDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CRejectOrderNoteDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CRejectOrderNoteDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CRejectOrderNoteDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnRejectSelectFnc(CWnd *pWnd){
	CRejectOrderNoteDialog *pVw = (CRejectOrderNoteDialog *)pWnd;
	pVw->OnRejectSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CRejectOrderNoteDialog *pVw = (CRejectOrderNoteDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddRejectOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CRejectOrderNoteDialog*)pWnd)->OnAddRejectOrderNoteDialog();
} 
static int _OnEditRejectOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CRejectOrderNoteDialog*)pWnd)->OnEditRejectOrderNoteDialog();
} 
static int _OnDeleteRejectOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CRejectOrderNoteDialog*)pWnd)->OnDeleteRejectOrderNoteDialog();
} 
static int _OnSaveRejectOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CRejectOrderNoteDialog*)pWnd)->OnSaveRejectOrderNoteDialog();
} 
static int _OnCancelRejectOrderNoteDialogFnc(CWnd *pWnd){
	 return ((CRejectOrderNoteDialog*)pWnd)->OnCancelRejectOrderNoteDialog();
} 
CRejectOrderNoteDialog::CRejectOrderNoteDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 205;
	SetDefaultValues();
	m_szTitle = _T("Reject Order");
}
CRejectOrderNoteDialog::~CRejectOrderNoteDialog(){
}
void CRejectOrderNoteDialog::OnCreateComponents(){
	m_wndNote.Create(this,5, 45, 475, 170, TRUE, FALSE, TRUE); 
	m_wndReject.Create(this, _T("&Reject"), 310, 175, 390, 200);
	m_wndCancel.Create(this, _T("&Close"), 395, 175, 475, 200);
	m_wndNoteLabel.Create(this, _T("Do you want to reject the order submited by [%s]"), 5, 5, 475, 40);

}
void CRejectOrderNoteDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	CString szLabel, szText;
	TranslateString(_T("Do you want to reject the order submited by"), szLabel);
	szText.Format(_T("%s [%s]"), szLabel, m_szSubmitedBy);
	m_wndNoteLabel.SetWindowText(szText);

}
void CRejectOrderNoteDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndReject.SetEvent(WE_CLICK, _OnRejectSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_EDIT);

}
void CRejectOrderNoteDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CRejectOrderNoteDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRejectOrderNoteDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CRejectOrderNoteDialog::SetDefaultValues(){

	m_szNote.Empty();

}
int CRejectOrderNoteDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CRejectOrderNoteDialog::OnNoteChange(){
	
} */
/*void CRejectOrderNoteDialog::OnNoteSetfocus(){
	
} */
/*void CRejectOrderNoteDialog::OnNoteKillfocus(){
	
} */
int CRejectOrderNoteDialog::OnNoteCheckValue(){
	return 0;
} 
void CRejectOrderNoteDialog::OnRejectSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiDialog::OnOK();
} 
void CRejectOrderNoteDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CRejectOrderNoteDialog::OnAddRejectOrderNoteDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRejectOrderNoteDialog::OnEditRejectOrderNoteDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRejectOrderNoteDialog::OnDeleteRejectOrderNoteDialog(){
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
 		OnCancelRejectOrderNoteDialog();
 	}
	return 0;
}
int CRejectOrderNoteDialog::OnSaveRejectOrderNoteDialog(){
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
 		//OnRejectOrderNoteDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRejectOrderNoteDialog::OnCancelRejectOrderNoteDialog(){
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
int CRejectOrderNoteDialog::OnRejectOrderNoteDialogListLoadData(){
	return 0;
}
