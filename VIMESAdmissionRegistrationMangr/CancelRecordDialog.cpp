#include "CancelRecordDialog.h"
#include "MainFrm.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CCancelRecordDialog *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CCancelRecordDialog *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CCancelRecordDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CCancelRecordDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CCancelRecordDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CCancelRecordDialog *pVw = (CCancelRecordDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCancelRecordDialog *pVw = (CCancelRecordDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCancelRecordDialogFnc(CWnd *pWnd){
	 return ((CCancelRecordDialog*)pWnd)->OnAddCancelRecordDialog();
} 
static int _OnEditCancelRecordDialogFnc(CWnd *pWnd){
	 return ((CCancelRecordDialog*)pWnd)->OnEditCancelRecordDialog();
} 
static int _OnDeleteCancelRecordDialogFnc(CWnd *pWnd){
	 return ((CCancelRecordDialog*)pWnd)->OnDeleteCancelRecordDialog();
} 
static int _OnSaveCancelRecordDialogFnc(CWnd *pWnd){
	 return ((CCancelRecordDialog*)pWnd)->OnSaveCancelRecordDialog();
} 
static int _OnCancelCancelRecordDialogFnc(CWnd *pWnd){
	 return ((CCancelRecordDialog*)pWnd)->OnCancelCancelRecordDialog();
} 
CCancelRecordDialog::CCancelRecordDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCancelRecordDialog::~CCancelRecordDialog(){
}
void CCancelRecordDialog::OnCreateComponents(){
	m_wndCancelRecord.Create(this, _T("Cancel Record"), 5, 5, 290, 300);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 65, 55);
	m_wndDocNo.Create(this,70, 30, 135, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 140, 30, 200, 55);
	m_wndRecordNo.Create(this,205, 30, 285, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 65, 85);
	m_wndName.Create(this,70, 60, 285, 85); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 90, 65, 115);
	m_wndReason.Create(this,70, 90, 285, 265, 1, 0, 1); 
	m_wndApply.Create(this, _T("&Apply"), 120, 270, 200, 295);
	m_wndClose.Create(this, _T("&Close"), 205, 270, 285, 295);

}
void CCancelRecordDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(16);
	m_wndDocNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndReason.SetLimitText(256);
	m_wndReason.SetCheckValue(true);

}
void CCancelRecordDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_VIEW);

}
void CCancelRecordDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CCancelRecordDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCancelRecordDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCancelRecordDialog::SetDefaultValues(){

	m_nDocNo=0;
	m_szRecordNo.Empty();
	m_szName.Empty();
	m_szReason.Empty();

}
int CCancelRecordDialog::SetMode(int nMode){
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
		m_wndReason.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CCancelRecordDialog::OnDocNoChange(){
	
} */
/*void CCancelRecordDialog::OnDocNoSetfocus(){
	
} */
/*void CCancelRecordDialog::OnDocNoKillfocus(){
	
} */
int CCancelRecordDialog::OnDocNoCheckValue(){
	return 0;
} 
/*void CCancelRecordDialog::OnRecordNoChange(){
	
} */
/*void CCancelRecordDialog::OnRecordNoSetfocus(){
	
} */
/*void CCancelRecordDialog::OnRecordNoKillfocus(){
	
} */
int CCancelRecordDialog::OnRecordNoCheckValue(){
	return 0;
} 
/*void CCancelRecordDialog::OnNameChange(){
	
} */
/*void CCancelRecordDialog::OnNameSetfocus(){
	
} */
/*void CCancelRecordDialog::OnNameKillfocus(){
	
} */
int CCancelRecordDialog::OnNameCheckValue(){
	return 0;
} 
/*void CCancelRecordDialog::OnReasonChange(){
	
} */
/*void CCancelRecordDialog::OnReasonSetfocus(){
	
} */
/*void CCancelRecordDialog::OnReasonKillfocus(){
	
} */
int CCancelRecordDialog::OnReasonCheckValue(){
	return 0;
} 
void CCancelRecordDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	_debug(_T("%s"), m_szReason);
	CGuiDialog::OnOK();
} 
void CCancelRecordDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CCancelRecordDialog::OnAddCancelRecordDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCancelRecordDialog::OnEditCancelRecordDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCancelRecordDialog::OnDeleteCancelRecordDialog(){
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
 		OnCancelCancelRecordDialog();
 	}
	return 0;
}
int CCancelRecordDialog::OnSaveCancelRecordDialog(){
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
 		//OnCancelRecordDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCancelRecordDialog::OnCancelCancelRecordDialog(){
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
int CCancelRecordDialog::OnCancelRecordDialogListLoadData(){
	return 0;
}
