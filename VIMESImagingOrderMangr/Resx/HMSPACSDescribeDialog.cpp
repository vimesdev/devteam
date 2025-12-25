#include "HMSPACSDescribeDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnDescribeChangeFnc(CWnd *pWnd){
	((CHMSPACSDescribeDialog *)pWnd)->OnDescribeChange();
} */
/*static void _OnDescribeSetfocusFnc(CWnd *pWnd){
	((CHMSPACSDescribeDialog *)pWnd)->OnDescribeSetfocus();} */ 
/*static void _OnDescribeKillfocusFnc(CWnd *pWnd){
	((CHMSPACSDescribeDialog *)pWnd)->OnDescribeKillfocus();
} */
static int _OnDescribeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSDescribeDialog *)pWnd)->OnDescribeCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPACSDescribeDialog *pVw = (CHMSPACSDescribeDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPACSDescribeDialog *pVw = (CHMSPACSDescribeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CHMSPACSDescribeDialog *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CHMSPACSDescribeDialog *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CHMSPACSDescribeDialog *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSDescribeDialog *)pWnd)->OnResultCheckValue();
} 
static int _OnAddHMSPACSDescribeDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSDescribeDialog*)pWnd)->OnAddHMSPACSDescribeDialog();
} 
static int _OnEditHMSPACSDescribeDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSDescribeDialog*)pWnd)->OnEditHMSPACSDescribeDialog();
} 
static int _OnDeleteHMSPACSDescribeDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSDescribeDialog*)pWnd)->OnDeleteHMSPACSDescribeDialog();
} 
static int _OnSaveHMSPACSDescribeDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSDescribeDialog*)pWnd)->OnSaveHMSPACSDescribeDialog();
} 
static int _OnCancelHMSPACSDescribeDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSDescribeDialog*)pWnd)->OnCancelHMSPACSDescribeDialog();
} 
CHMSPACSDescribeDialog::CHMSPACSDescribeDialog(){

	m_nDlgWidth = 719;
	m_nDlgHeight = 549;
	SetDefaultValues();
}
CHMSPACSDescribeDialog::~CHMSPACSDescribeDialog(){
}
void CHMSPACSDescribeDialog::OnCreateComponents(){
	m_wndDescribeLabel.Create(this, _T("Describe"), 4, 5, 634, 451);
	m_wndDescribe.Create(this,10, 30, 630, 375); 
	m_wndApply.Create(this, _T("&Apply"), 470, 456, 550, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 555, 456, 635, 480);
	m_wndResultLabel.Create(this, _T("Result"), 10, 380, 90, 402);
	m_wndResult.Create(this,95, 380, 630, 446); 

}
void CHMSPACSDescribeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDescribe.SetLimitText(1024);
	SetMode(VM_EDIT);
}
void CHMSPACSDescribeDialog::OnSetWindowEvents(){
	//m_wndDescribe.SetEvent(WE_CHANGE, _OnDescribeChangeFnc);
	//m_wndDescribe.SetEvent(WE_SETFOCUS, _OnDescribeSetfocusFnc);
	//m_wndDescribe.SetEvent(WE_KILLFOCUS, _OnDescribeKillfocusFnc);
	m_wndDescribe.SetEvent(WE_CHECKVALUE, _OnDescribeCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);

}
void CHMSPACSDescribeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDescribe.GetDlgCtrlID(), m_szDescribe);
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);

}
void CHMSPACSDescribeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPACSDescribeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPACSDescribeDialog::SetDefaultValues(){

	m_szDescribe.Empty();
	m_szResult.Empty();

}
int CHMSPACSDescribeDialog::SetMode(int nMode){ 
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
/*void CHMSPACSDescribeDialog::OnDescribeChange(){
	
} */
/*void CHMSPACSDescribeDialog::OnDescribeSetfocus(){
	
} */
/*void CHMSPACSDescribeDialog::OnDescribeKillfocus(){
	
} */
int CHMSPACSDescribeDialog::OnDescribeCheckValue(){
	return 0;
} 
void CHMSPACSDescribeDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnOK();
} 
void CHMSPACSDescribeDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
/*void CHMSPACSDescribeDialog::OnResultChange(){
	
} */
/*void CHMSPACSDescribeDialog::OnResultSetfocus(){
	
} */
/*void CHMSPACSDescribeDialog::OnResultKillfocus(){
	
} */
int CHMSPACSDescribeDialog::OnResultCheckValue(){
	return 0;
} 
int CHMSPACSDescribeDialog::OnAddHMSPACSDescribeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPACSDescribeDialog::OnEditHMSPACSDescribeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPACSDescribeDialog::OnDeleteHMSPACSDescribeDialog(){
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
 		OnCancelHMSPACSDescribeDialog(); 
 	}
return 0;
 } 
int CHMSPACSDescribeDialog::OnSaveHMSPACSDescribeDialog(){
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
 		//OnHMSPACSDescribeDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPACSDescribeDialog::OnCancelHMSPACSDescribeDialog(){
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
int CHMSPACSDescribeDialog::OnHMSPACSDescribeDialogListLoadData(){
	return 0;
}
