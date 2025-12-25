#include "HMSMedicalCabinet.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnTabControlSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSMedicalCabinet*)pWnd)->OnTabControlSelectChange(nOld, nNew);
} 
static int _OnAddHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnAddHMSMedicalCabinet();
} 
static int _OnEditHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnEditHMSMedicalCabinet();
} 
static int _OnDeleteHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnDeleteHMSMedicalCabinet();
} 
static int _OnSaveHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnSaveHMSMedicalCabinet();
} 
static int _OnCancelHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnCancelHMSMedicalCabinet();
} 
CHMSMedicalCabinet::CHMSMedicalCabinet(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSMedicalCabinet::~CHMSMedicalCabinet(){
}
void CHMSMedicalCabinet::OnCreateComponents(){
	m_wndTabControl.Create(this,1, 2, 801, 602); 

}
void CHMSMedicalCabinet::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CHMSMedicalCabinet::OnSetWindowEvents(){
	m_wndTabControl.SetEvent(WE_SELCHANGE, _OnTabControlSelectChangeFnc);

}
void CHMSMedicalCabinet::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSMedicalCabinet::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinet::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMedicalCabinet::SetDefaultValues(){


}
int CHMSMedicalCabinet::SetMode(int nMode){ 
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
void CHMSMedicalCabinet::OnTabControlSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinet::OnAddHMSMedicalCabinet(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSMedicalCabinet"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSMedicalCabinet::OnEditHMSMedicalCabinet(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSMedicalCabinet"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSMedicalCabinet::OnDeleteHMSMedicalCabinet(){
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
 		OnCancelHMSMedicalCabinet(); 
 	}
return 0;
 } 
int CHMSMedicalCabinet::OnSaveHMSMedicalCabinet(){
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
 		//OnHMSMedicalCabinetListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMedicalCabinet::OnCancelHMSMedicalCabinet(){
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
int CHMSMedicalCabinet::OnHMSMedicalCabinetListLoadData(){
	return 0;
}
