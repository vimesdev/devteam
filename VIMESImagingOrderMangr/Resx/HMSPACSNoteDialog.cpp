#include "HMSPACSNoteDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnDescribeChangeFnc(CWnd *pWnd){
	((CHMSPACSNoteDialog *)pWnd)->OnDescribeChange();
} */
/*static void _OnDescribeSetfocusFnc(CWnd *pWnd){
	((CHMSPACSNoteDialog *)pWnd)->OnDescribeSetfocus();} */ 
/*static void _OnDescribeKillfocusFnc(CWnd *pWnd){
	((CHMSPACSNoteDialog *)pWnd)->OnDescribeKillfocus();
} */
static int _OnDescribeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSNoteDialog *)pWnd)->OnDescribeCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPACSNoteDialog *pVw = (CHMSPACSNoteDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPACSNoteDialog *pVw = (CHMSPACSNoteDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPACSNoteDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSNoteDialog*)pWnd)->OnAddHMSPACSNoteDialog();
} 
static int _OnEditHMSPACSNoteDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSNoteDialog*)pWnd)->OnEditHMSPACSNoteDialog();
} 
static int _OnDeleteHMSPACSNoteDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSNoteDialog*)pWnd)->OnDeleteHMSPACSNoteDialog();
} 
static int _OnSaveHMSPACSNoteDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSNoteDialog*)pWnd)->OnSaveHMSPACSNoteDialog();
} 
static int _OnCancelHMSPACSNoteDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSNoteDialog*)pWnd)->OnCancelHMSPACSNoteDialog();
} 
CHMSPACSNoteDialog::CHMSPACSNoteDialog(){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPACSNoteDialog::~CHMSPACSNoteDialog(){
}
void CHMSPACSNoteDialog::OnCreateComponents(){
	m_wndDescribeLabel.Create(this, _T("Describe"), 5, 5, 635, 450);
	m_wndDescribe.Create(this,10, 30, 630, 444); 
	m_wndApply.Create(this, _T("&Apply"), 466, 454, 546, 478);
	m_wndCancel.Create(this, _T("&Cancel"), 559, 454, 639, 478);

}
void CHMSPACSNoteDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDescribe.SetLimitText(35);
	m_wndDescribe.SetCheckValue(true);

}
void CHMSPACSNoteDialog::OnSetWindowEvents(){
	//m_wndDescribe.SetEvent(WE_CHANGE, _OnDescribeChangeFnc);
	//m_wndDescribe.SetEvent(WE_SETFOCUS, _OnDescribeSetfocusFnc);
	//m_wndDescribe.SetEvent(WE_KILLFOCUS, _OnDescribeKillfocusFnc);
	m_wndDescribe.SetEvent(WE_CHECKVALUE, _OnDescribeCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSPACSNoteDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDescribe.GetDlgCtrlID(), m_szDescribe);

}
void CHMSPACSNoteDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPACSNoteDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPACSNoteDialog::SetDefaultValues(){

	m_szDescribe.Empty();

}
int CHMSPACSNoteDialog::SetMode(int nMode){ 
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
/*void CHMSPACSNoteDialog::OnDescribeChange(){
	
} */
/*void CHMSPACSNoteDialog::OnDescribeSetfocus(){
	
} */
/*void CHMSPACSNoteDialog::OnDescribeKillfocus(){
	
} */
int CHMSPACSNoteDialog::OnDescribeCheckValue(){
	return 0;
} 
void CHMSPACSNoteDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPACSNoteDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPACSNoteDialog::OnAddHMSPACSNoteDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPACSNoteDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPACSNoteDialog::OnEditHMSPACSNoteDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPACSNoteDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPACSNoteDialog::OnDeleteHMSPACSNoteDialog(){
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
 		OnCancelHMSPACSNoteDialog(); 
 	}
return 0;
 } 
int CHMSPACSNoteDialog::OnSaveHMSPACSNoteDialog(){
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
 		//OnHMSPACSNoteDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPACSNoteDialog::OnCancelHMSPACSNoteDialog(){
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
int CHMSPACSNoteDialog::OnHMSPACSNoteDialogListLoadData(){
	return 0;
}
