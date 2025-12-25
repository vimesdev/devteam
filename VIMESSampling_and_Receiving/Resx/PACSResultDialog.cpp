#include "RISResultDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CRISResultDialog *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CRISResultDialog *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CRISResultDialog *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CRISResultDialog *)pWnd)->OnResultCheckValue();
} 
/*static void _OnConclutionChangeFnc(CWnd *pWnd){
	((CRISResultDialog *)pWnd)->OnConclutionChange();
} */
/*static void _OnConclutionSetfocusFnc(CWnd *pWnd){
	((CRISResultDialog *)pWnd)->OnConclutionSetfocus();} */ 
/*static void _OnConclutionKillfocusFnc(CWnd *pWnd){
	((CRISResultDialog *)pWnd)->OnConclutionKillfocus();
} */
static int _OnConclutionCheckValueFnc(CWnd *pWnd){
	return ((CRISResultDialog *)pWnd)->OnConclutionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CRISResultDialog *pVw = (CRISResultDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRISResultDialog *pVw = (CRISResultDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRISResultDialog *pVw = (CRISResultDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddRISResultDialogFnc(CWnd *pWnd){
	 return ((CRISResultDialog*)pWnd)->OnAddRISResultDialog();
} 
static int _OnEditRISResultDialogFnc(CWnd *pWnd){
	 return ((CRISResultDialog*)pWnd)->OnEditRISResultDialog();
} 
static int _OnDeleteRISResultDialogFnc(CWnd *pWnd){
	 return ((CRISResultDialog*)pWnd)->OnDeleteRISResultDialog();
} 
static int _OnSaveRISResultDialogFnc(CWnd *pWnd){
	 return ((CRISResultDialog*)pWnd)->OnSaveRISResultDialog();
} 
static int _OnCancelRISResultDialogFnc(CWnd *pWnd){
	 return ((CRISResultDialog*)pWnd)->OnCancelRISResultDialog();
} 
CRISResultDialog::CRISResultDialog(){

	m_nDlgWidth = 425;
	m_nDlgHeight = 375;
	SetDefaultValues();
}
CRISResultDialog::~CRISResultDialog(){
}
void CRISResultDialog::OnCreateComponents(){
	m_wndResultInformation.Create(this, _T("Result Information"), 5, 5, 422, 336);
	m_wndResultLabel.Create(this, _T("Result"), 9, 25, 73, 47);
	m_wndResult.Create(this,78, 25, 418, 225); 
	m_wndConclutionLabel.Create(this, _T("Conclution"), 9, 231, 73, 253);
	m_wndConclution.Create(this,78, 231, 418, 331); 
	m_wndSave.Create(this, _T("&Save"), 196, 340, 266, 362);
	m_wndClose.Create(this, _T("&Close"), 353, 341, 423, 363);
	m_wndPrint.Create(this, _T("&Print"), 274, 341, 344, 363);

}
void CRISResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndResult.SetLimitText(35);
	m_wndResult.SetCheckValue(true);
	m_wndConclution.SetLimitText(35);
	m_wndConclution.SetCheckValue(true);

}
void CRISResultDialog::OnSetWindowEvents(){
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	//m_wndConclution.SetEvent(WE_CHANGE, _OnConclutionChangeFnc);
	//m_wndConclution.SetEvent(WE_SETFOCUS, _OnConclutionSetfocusFnc);
	//m_wndConclution.SetEvent(WE_KILLFOCUS, _OnConclutionKillfocusFnc);
	m_wndConclution.SetEvent(WE_CHECKVALUE, _OnConclutionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

}
void CRISResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_Text(pDX, m_wndConclution.GetDlgCtrlID(), m_szConclution);

}
void CRISResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRISResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRISResultDialog::SetDefaultValues(){

	m_szResult.Empty();
	m_szConclution.Empty();

}
int CRISResultDialog::SetMode(int nMode){ 
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
/*void CRISResultDialog::OnResultChange(){
	
} */
/*void CRISResultDialog::OnResultSetfocus(){
	
} */
/*void CRISResultDialog::OnResultKillfocus(){
	
} */
int CRISResultDialog::OnResultCheckValue(){
	return 0;
} 
/*void CRISResultDialog::OnConclutionChange(){
	
} */
/*void CRISResultDialog::OnConclutionSetfocus(){
	
} */
/*void CRISResultDialog::OnConclutionKillfocus(){
	
} */
int CRISResultDialog::OnConclutionCheckValue(){
	return 0;
} 
void CRISResultDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRISResultDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRISResultDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRISResultDialog::OnAddRISResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add RISResultDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CRISResultDialog::OnEditRISResultDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit RISResultDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CRISResultDialog::OnDeleteRISResultDialog(){
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
 		OnCancelRISResultDialog(); 
 	}
return 0;
 } 
int CRISResultDialog::OnSaveRISResultDialog(){
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
 		//OnRISResultDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRISResultDialog::OnCancelRISResultDialog(){
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
int CRISResultDialog::OnRISResultDialogListLoadData(){
	return 0;
}
