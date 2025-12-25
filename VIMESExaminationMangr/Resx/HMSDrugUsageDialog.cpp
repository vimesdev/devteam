#include "HMSDrugUsageDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSDrugUsageDialog *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSDrugUsageDialog *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSDrugUsageDialog *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugUsageDialog *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDrugUsageDialog *pVw = (CHMSDrugUsageDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDrugUsageDialog *pVw = (CHMSDrugUsageDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDrugUsageDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugUsageDialog*)pWnd)->OnAddHMSDrugUsageDialog();
} 
static int _OnEditHMSDrugUsageDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugUsageDialog*)pWnd)->OnEditHMSDrugUsageDialog();
} 
static int _OnDeleteHMSDrugUsageDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugUsageDialog*)pWnd)->OnDeleteHMSDrugUsageDialog();
} 
static int _OnSaveHMSDrugUsageDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugUsageDialog*)pWnd)->OnSaveHMSDrugUsageDialog();
} 
static int _OnCancelHMSDrugUsageDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugUsageDialog*)pWnd)->OnCancelHMSDrugUsageDialog();
} 
CHMSDrugUsageDialog::CHMSDrugUsageDialog(){

	m_nDlgWidth = 786;
	m_nDlgHeight = 586;
	SetDefaultValues();
}
CHMSDrugUsageDialog::~CHMSDrugUsageDialog(){
}
void CHMSDrugUsageDialog::OnCreateComponents(){
	m_wndUsageOfDrugInformation.Create(this, _T("Usage Of Drug Information"), 5, 5, 505, 60);
	m_wndUsageLabel.Create(this, _T("Usage"), 10, 30, 90, 55);
	m_wndUsage.Create(this,95, 30, 500, 55); 
	m_wndSave.Create(this, _T("&Save"), 350, 65, 425, 90);
	m_wndCancel.Create(this, _T("&Cancel"), 430, 65, 505, 90);

}
void CHMSDrugUsageDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndUsage.SetLimitText(35);
	m_wndUsage.SetCheckValue(true);

}
void CHMSDrugUsageDialog::OnSetWindowEvents(){
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSDrugUsageDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);

}
void CHMSDrugUsageDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDrugUsageDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDrugUsageDialog::SetDefaultValues(){

	m_szUsage.Empty();

}
int CHMSDrugUsageDialog::SetMode(int nMode){ 
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
/*void CHMSDrugUsageDialog::OnUsageChange(){
	
} */
/*void CHMSDrugUsageDialog::OnUsageSetfocus(){
	
} */
/*void CHMSDrugUsageDialog::OnUsageKillfocus(){
	
} */
int CHMSDrugUsageDialog::OnUsageCheckValue(){
	return 0;
} 
void CHMSDrugUsageDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugUsageDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDrugUsageDialog::OnAddHMSDrugUsageDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSDrugUsageDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSDrugUsageDialog::OnEditHMSDrugUsageDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSDrugUsageDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSDrugUsageDialog::OnDeleteHMSDrugUsageDialog(){
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
 		OnCancelHMSDrugUsageDialog(); 
 	}
return 0;
 } 
int CHMSDrugUsageDialog::OnSaveHMSDrugUsageDialog(){
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
 		//OnHMSDrugUsageDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDrugUsageDialog::OnCancelHMSDrugUsageDialog(){
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
int CHMSDrugUsageDialog::OnHMSDrugUsageDialogListLoadData(){
	return 0;
}
