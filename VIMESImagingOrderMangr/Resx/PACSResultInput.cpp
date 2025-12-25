#include "PACSResultInput.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnRemarkChangeFnc(CWnd *pWnd){
	((CPACSResultInput *)pWnd)->OnRemarkChange();
} */
/*static void _OnRemarkSetfocusFnc(CWnd *pWnd){
	((CPACSResultInput *)pWnd)->OnRemarkSetfocus();} */ 
/*static void _OnRemarkKillfocusFnc(CWnd *pWnd){
	((CPACSResultInput *)pWnd)->OnRemarkKillfocus();
} */
static int _OnRemarkCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultInput *)pWnd)->OnRemarkCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CPACSResultInput *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CPACSResultInput *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CPACSResultInput *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultInput *)pWnd)->OnConclusionCheckValue();
} 
static int _OnAddPACSResultInputFnc(CWnd *pWnd){
	 return ((CPACSResultInput*)pWnd)->OnAddPACSResultInput();
} 
static int _OnEditPACSResultInputFnc(CWnd *pWnd){
	 return ((CPACSResultInput*)pWnd)->OnEditPACSResultInput();
} 
static int _OnDeletePACSResultInputFnc(CWnd *pWnd){
	 return ((CPACSResultInput*)pWnd)->OnDeletePACSResultInput();
} 
static int _OnSavePACSResultInputFnc(CWnd *pWnd){
	 return ((CPACSResultInput*)pWnd)->OnSavePACSResultInput();
} 
static int _OnCancelPACSResultInputFnc(CWnd *pWnd){
	 return ((CPACSResultInput*)pWnd)->OnCancelPACSResultInput();
} 
CPACSResultInput::CPACSResultInput(){

	m_nDlgWidth = 615;
	m_nDlgHeight = 410;
	SetDefaultValues();
}
CPACSResultInput::~CPACSResultInput(){
}
void CPACSResultInput::OnCreateComponents(){
	m_wndResultInformation.Create(this, _T("Result Information"), 5, 5, 605, 400);
	m_wndRemarkLabel.Create(this, _T("Remark"), 11, 28, 92, 50);
	m_wndRemark.Create(this,97, 28, 598, 316); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 11, 321, 92, 343);
	m_wndConclusion.Create(this,97, 321, 598, 393); 

}
void CPACSResultInput::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndRemark.SetLimitText(35);
	m_wndRemark.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);

}
void CPACSResultInput::OnSetWindowEvents(){
	//m_wndRemark.SetEvent(WE_CHANGE, _OnRemarkChangeFnc);
	//m_wndRemark.SetEvent(WE_SETFOCUS, _OnRemarkSetfocusFnc);
	//m_wndRemark.SetEvent(WE_KILLFOCUS, _OnRemarkKillfocusFnc);
	m_wndRemark.SetEvent(WE_CHECKVALUE, _OnRemarkCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSResultInputFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSResultInputFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSResultInputFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSResultInputFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSResultInputFnc, 0, 'T', VK_CONTROL);

}
void CPACSResultInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRemark.GetDlgCtrlID(), m_szRemark);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CPACSResultInput::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSResultInput::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSResultInput::SetDefaultValues(){

	m_szRemark.Empty();
	m_szConclusion.Empty();

}
int CPACSResultInput::SetMode(int nMode){ 
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
/*void CPACSResultInput::OnRemarkChange(){
	
} */
/*void CPACSResultInput::OnRemarkSetfocus(){
	
} */
/*void CPACSResultInput::OnRemarkKillfocus(){
	
} */
int CPACSResultInput::OnRemarkCheckValue(){
	return 0;
} 
/*void CPACSResultInput::OnConclusionChange(){
	
} */
/*void CPACSResultInput::OnConclusionSetfocus(){
	
} */
/*void CPACSResultInput::OnConclusionKillfocus(){
	
} */
int CPACSResultInput::OnConclusionCheckValue(){
	return 0;
} 
int CPACSResultInput::OnAddPACSResultInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add PACSResultInput"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CPACSResultInput::OnEditPACSResultInput(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit PACSResultInput"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPACSResultInput::OnDeletePACSResultInput(){
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
 		OnCancelPACSResultInput(); 
 	}
return 0;
 } 
int CPACSResultInput::OnSavePACSResultInput(){
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
 		//OnPACSResultInputListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSResultInput::OnCancelPACSResultInput(){
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
int CPACSResultInput::OnPACSResultInputListLoadData(){
	return 0;
}
