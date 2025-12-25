#include "HMSPACSResultDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnRemarkChangeFnc(CWnd *pWnd){
	((CHMSPACSResultDialog *)pWnd)->OnRemarkChange();
} */
/*static void _OnRemarkSetfocusFnc(CWnd *pWnd){
	((CHMSPACSResultDialog *)pWnd)->OnRemarkSetfocus();} */ 
/*static void _OnRemarkKillfocusFnc(CWnd *pWnd){
	((CHMSPACSResultDialog *)pWnd)->OnRemarkKillfocus();
} */
static int _OnRemarkCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSResultDialog *)pWnd)->OnRemarkCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPACSResultDialog *pVw = (CHMSPACSResultDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPACSResultDialog *pVw = (CHMSPACSResultDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPACSResultDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSResultDialog*)pWnd)->OnAddHMSPACSResultDialog();
} 
static int _OnEditHMSPACSResultDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSResultDialog*)pWnd)->OnEditHMSPACSResultDialog();
} 
static int _OnDeleteHMSPACSResultDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSResultDialog*)pWnd)->OnDeleteHMSPACSResultDialog();
} 
static int _OnSaveHMSPACSResultDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSResultDialog*)pWnd)->OnSaveHMSPACSResultDialog();
} 
static int _OnCancelHMSPACSResultDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSResultDialog*)pWnd)->OnCancelHMSPACSResultDialog();
} 
CHMSPACSResultDialog::CHMSPACSResultDialog(){

	m_nDlgWidth = 505;
	m_nDlgHeight = 345;
	SetDefaultValues();
}
CHMSPACSResultDialog::~CHMSPACSResultDialog(){
}
void CHMSPACSResultDialog::OnCreateComponents(){
	m_wndRemarkLabel.Create(this, _T("Remark"), 5, 5, 85, 27);
	m_wndRemark.Create(this,90, 5, 490, 305); 
	m_wndApply.Create(this, _T("&Apply"), 344, 310, 414, 332);
	m_wndCancel.Create(this, _T("&Cancel"), 419, 310, 489, 332);

}
void CHMSPACSResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndRemark.SetLimitText(35);
	m_wndRemark.SetCheckValue(true);

}
void CHMSPACSResultDialog::OnSetWindowEvents(){
	//m_wndRemark.SetEvent(WE_CHANGE, _OnRemarkChangeFnc);
	//m_wndRemark.SetEvent(WE_SETFOCUS, _OnRemarkSetfocusFnc);
	//m_wndRemark.SetEvent(WE_KILLFOCUS, _OnRemarkKillfocusFnc);
	m_wndRemark.SetEvent(WE_CHECKVALUE, _OnRemarkCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSPACSResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRemark.GetDlgCtrlID(), m_szRemark);

}
void CHMSPACSResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPACSResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPACSResultDialog::SetDefaultValues(){

	m_szRemark.Empty();

}
int CHMSPACSResultDialog::SetMode(int nMode){ 
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
/*void CHMSPACSResultDialog::OnRemarkChange(){
	
} */
/*void CHMSPACSResultDialog::OnRemarkSetfocus(){
	
} */
/*void CHMSPACSResultDialog::OnRemarkKillfocus(){
	
} */
int CHMSPACSResultDialog::OnRemarkCheckValue(){
	return 0;
} 
void CHMSPACSResultDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPACSResultDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPACSResultDialog::OnAddHMSPACSResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPACSResultDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPACSResultDialog::OnEditHMSPACSResultDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPACSResultDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPACSResultDialog::OnDeleteHMSPACSResultDialog(){
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
 		OnCancelHMSPACSResultDialog(); 
 	}
return 0;
 } 
int CHMSPACSResultDialog::OnSaveHMSPACSResultDialog(){
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
 		//OnHMSPACSResultDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPACSResultDialog::OnCancelHMSPACSResultDialog(){
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
int CHMSPACSResultDialog::OnHMSPACSResultDialogListLoadData(){
	return 0;
}
