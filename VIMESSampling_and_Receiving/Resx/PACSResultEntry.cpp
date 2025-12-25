#include "RISResultEntry.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CRISResultEntry *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CRISResultEntry *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CRISResultEntry *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CRISResultEntry *)pWnd)->OnResultCheckValue();
} 
/*static void _OnConclutionChangeFnc(CWnd *pWnd){
	((CRISResultEntry *)pWnd)->OnConclutionChange();
} */
/*static void _OnConclutionSetfocusFnc(CWnd *pWnd){
	((CRISResultEntry *)pWnd)->OnConclutionSetfocus();} */ 
/*static void _OnConclutionKillfocusFnc(CWnd *pWnd){
	((CRISResultEntry *)pWnd)->OnConclutionKillfocus();
} */
static int _OnConclutionCheckValueFnc(CWnd *pWnd){
	return ((CRISResultEntry *)pWnd)->OnConclutionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CRISResultEntry *pVw = (CRISResultEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRISResultEntry *pVw = (CRISResultEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRISResultEntry *pVw = (CRISResultEntry *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddRISResultEntryFnc(CWnd *pWnd){
	 return ((CRISResultEntry*)pWnd)->OnAddRISResultEntry();
} 
static int _OnEditRISResultEntryFnc(CWnd *pWnd){
	 return ((CRISResultEntry*)pWnd)->OnEditRISResultEntry();
} 
static int _OnDeleteRISResultEntryFnc(CWnd *pWnd){
	 return ((CRISResultEntry*)pWnd)->OnDeleteRISResultEntry();
} 
static int _OnSaveRISResultEntryFnc(CWnd *pWnd){
	 return ((CRISResultEntry*)pWnd)->OnSaveRISResultEntry();
} 
static int _OnCancelRISResultEntryFnc(CWnd *pWnd){
	 return ((CRISResultEntry*)pWnd)->OnCancelRISResultEntry();
} 
CRISResultEntry::CRISResultEntry(){

	m_nDlgWidth = 425;
	m_nDlgHeight = 375;
	SetDefaultValues();
}
CRISResultEntry::~CRISResultEntry(){
}
void CRISResultEntry::OnCreateComponents(){
	m_wndResultInformation.Create(this, _T("Result Information"), 5, 5, 422, 336);
	m_wndResultLabel.Create(this, _T("Result"), 9, 25, 73, 47);
	m_wndResult.Create(this,78, 25, 418, 225); 
	m_wndConclutionLabel.Create(this, _T("Conclution"), 9, 231, 73, 253);
	m_wndConclution.Create(this,78, 231, 418, 331); 
	m_wndSave.Create(this, _T("&Save"), 196, 340, 266, 362);
	m_wndClose.Create(this, _T("&Close"), 353, 341, 423, 363);
	m_wndPrint.Create(this, _T("&Print"), 274, 341, 344, 363);

}
void CRISResultEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndResult.SetLimitText(35);
	m_wndResult.SetCheckValue(true);
	m_wndConclution.SetLimitText(35);
	m_wndConclution.SetCheckValue(true);

}
void CRISResultEntry::OnSetWindowEvents(){
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
void CRISResultEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_Text(pDX, m_wndConclution.GetDlgCtrlID(), m_szConclution);

}
void CRISResultEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRISResultEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRISResultEntry::SetDefaultValues(){

	m_szResult.Empty();
	m_szConclution.Empty();

}
int CRISResultEntry::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
/*void CRISResultEntry::OnResultChange(){
	
} */
/*void CRISResultEntry::OnResultSetfocus(){
	
} */
/*void CRISResultEntry::OnResultKillfocus(){
	
} */
int CRISResultEntry::OnResultCheckValue(){
	return 0;
} 
/*void CRISResultEntry::OnConclutionChange(){
	
} */
/*void CRISResultEntry::OnConclutionSetfocus(){
	
} */
/*void CRISResultEntry::OnConclutionKillfocus(){
	
} */
int CRISResultEntry::OnConclutionCheckValue(){
	return 0;
} 
void CRISResultEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRISResultEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRISResultEntry::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRISResultEntry::OnAddRISResultEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add RISResultEntry"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CRISResultEntry::OnEditRISResultEntry(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit RISResultEntry"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CRISResultEntry::OnDeleteRISResultEntry(){
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
 		OnCancelRISResultEntry(); 
 	}
return 0;
 } 
int CRISResultEntry::OnSaveRISResultEntry(){
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
 		//OnRISResultEntryListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRISResultEntry::OnCancelRISResultEntry(){
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
int CRISResultEntry::OnRISResultEntryListLoadData(){
	return 0;
}
