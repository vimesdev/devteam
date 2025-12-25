#include "HMSSearchPatientDialog.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSSearchPatientDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSSearchPatientDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSSearchPatientDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSSearchPatientDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSSearchPatientDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSSearchPatientDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSSearchPatientDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSearchPatientDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSSearchPatientDialog *pVw = (CHMSSearchPatientDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSearchPatientDialog *pVw = (CHMSSearchPatientDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSearchPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchPatientDialog*)pWnd)->OnAddHMSSearchPatientDialog();
} 
static int _OnEditHMSSearchPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchPatientDialog*)pWnd)->OnEditHMSSearchPatientDialog();
} 
static int _OnDeleteHMSSearchPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchPatientDialog*)pWnd)->OnDeleteHMSSearchPatientDialog();
} 
static int _OnSaveHMSSearchPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchPatientDialog*)pWnd)->OnSaveHMSSearchPatientDialog();
} 
static int _OnCancelHMSSearchPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchPatientDialog*)pWnd)->OnCancelHMSSearchPatientDialog();
} 
CHMSSearchPatientDialog::CHMSSearchPatientDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 280;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSSearchPatientDialog::~CHMSSearchPatientDialog(){
}
void CHMSSearchPatientDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 275, 90);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 215, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 270, 85); 
	m_wndSearch.Create(this, _T("&Search"), 110, 95, 190, 120);
	m_wndClose.Create(this, _T("&Close"), 195, 95, 275, 120);

}
void CHMSSearchPatientDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDocumentNo.SetLimitText(10);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.ModifyStyle(0, ES_NUMBER);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);

}
void CHMSSearchPatientDialog::OnSetWindowEvents(){
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CHMSSearchPatientDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSSearchPatientDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSearchPatientDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSearchPatientDialog::SetDefaultValues(){

	m_szDocumentNo.Empty();
	m_szPatientName.Empty();

}
int CHMSSearchPatientDialog::SetMode(int nMode){
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
/*void CHMSSearchPatientDialog::OnDocumentNoChange(){
	
} */
/*void CHMSSearchPatientDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSSearchPatientDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSSearchPatientDialog::OnDocumentNoCheckValue(){
	if(m_szDocumentNo.IsEmpty())
		m_wndPatientName.EnableWindow(true);
	else
		m_wndPatientName.EnableWindow(false);
	return 0;
} 
/*void CHMSSearchPatientDialog::OnPatientNameChange(){
	
} */
/*void CHMSSearchPatientDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSSearchPatientDialog::OnPatientNameKillfocus(){
	
} */
int CHMSSearchPatientDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSSearchPatientDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnOK();
} 
void CHMSSearchPatientDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSSearchPatientDialog::OnAddHMSSearchPatientDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSearchPatientDialog::OnEditHMSSearchPatientDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSearchPatientDialog::OnDeleteHMSSearchPatientDialog(){
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
 		OnCancelHMSSearchPatientDialog(); 
 	}
	return 0;
}
int CHMSSearchPatientDialog::OnSaveHMSSearchPatientDialog(){
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
 		//OnHMSSearchPatientDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSearchPatientDialog::OnCancelHMSSearchPatientDialog(){
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
int CHMSSearchPatientDialog::OnHMSSearchPatientDialogListLoadData(){
	return 0;
}
