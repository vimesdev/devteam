#include "RISResultDialog2.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnSaveSelectFnc(CWnd *pWnd){
	CRISResultDialog2 *pVw = (CRISResultDialog2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRISResultDialog2 *pVw = (CRISResultDialog2 *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnPictureChangeFnc(CWnd *pWnd){
	((CRISResultDialog2 *)pWnd)->OnPictureChange();
} */
/*static void _OnPictureSetfocusFnc(CWnd *pWnd){
	((CRISResultDialog2 *)pWnd)->OnPictureSetfocus();} */ 
/*static void _OnPictureKillfocusFnc(CWnd *pWnd){
	((CRISResultDialog2 *)pWnd)->OnPictureKillfocus();
} */
static int _OnPictureCheckValueFnc(CWnd *pWnd){
	return ((CRISResultDialog2 *)pWnd)->OnPictureCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CRISResultDialog2 *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CRISResultDialog2 *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CRISResultDialog2 *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CRISResultDialog2 *)pWnd)->OnConclusionCheckValue();
} 
static int _OnAddRISResultDialog2Fnc(CWnd *pWnd){
	 return ((CRISResultDialog2*)pWnd)->OnAddRISResultDialog2();
} 
static int _OnEditRISResultDialog2Fnc(CWnd *pWnd){
	 return ((CRISResultDialog2*)pWnd)->OnEditRISResultDialog2();
} 
static int _OnDeleteRISResultDialog2Fnc(CWnd *pWnd){
	 return ((CRISResultDialog2*)pWnd)->OnDeleteRISResultDialog2();
} 
static int _OnSaveRISResultDialog2Fnc(CWnd *pWnd){
	 return ((CRISResultDialog2*)pWnd)->OnSaveRISResultDialog2();
} 
static int _OnCancelRISResultDialog2Fnc(CWnd *pWnd){
	 return ((CRISResultDialog2*)pWnd)->OnCancelRISResultDialog2();
} 
CRISResultDialog2::CRISResultDialog2(){

	m_nDlgWidth = 685;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CRISResultDialog2::~CRISResultDialog2(){
}
void CRISResultDialog2::OnCreateComponents(){
	m_wndDescribeGroup.Create(this, _T("Describe"), 5, 5, 347, 453);
	m_wndPictureGroup.Create(this, _T("Picture"), 350, 5, 680, 274);
	m_wndConclutionGroup.Create(this, _T("Conclusion"), 350, 279, 680, 452);
	m_wndSave.Create(this, _T("&Save"), 536, 458, 606, 480);
	m_wndClose.Create(this, _T("&Close"), 611, 458, 681, 480);
	m_wndPicture.Create(this,354, 28, 677, 270); 
	m_wndConclusion.Create(this,354, 301, 677, 446); 

}
void CRISResultDialog2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPicture.SetLimitText(35);
	m_wndPicture.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);

}
void CRISResultDialog2::OnSetWindowEvents(){
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndPicture.SetEvent(WE_CHANGE, _OnPictureChangeFnc);
	//m_wndPicture.SetEvent(WE_SETFOCUS, _OnPictureSetfocusFnc);
	//m_wndPicture.SetEvent(WE_KILLFOCUS, _OnPictureKillfocusFnc);
	m_wndPicture.SetEvent(WE_CHECKVALUE, _OnPictureCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);

}
void CRISResultDialog2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPicture.GetDlgCtrlID(), m_szPicture);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CRISResultDialog2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRISResultDialog2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRISResultDialog2::SetDefaultValues(){

	m_szPicture.Empty();
	m_szConclusion.Empty();

}
int CRISResultDialog2::SetMode(int nMode){ 
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
void CRISResultDialog2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRISResultDialog2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CRISResultDialog2::OnPictureChange(){
	
} */
/*void CRISResultDialog2::OnPictureSetfocus(){
	
} */
/*void CRISResultDialog2::OnPictureKillfocus(){
	
} */
int CRISResultDialog2::OnPictureCheckValue(){
	return 0;
} 
/*void CRISResultDialog2::OnConclusionChange(){
	
} */
/*void CRISResultDialog2::OnConclusionSetfocus(){
	
} */
/*void CRISResultDialog2::OnConclusionKillfocus(){
	
} */
int CRISResultDialog2::OnConclusionCheckValue(){
	return 0;
} 
int CRISResultDialog2::OnAddRISResultDialog2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add RISResultDialog2"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CRISResultDialog2::OnEditRISResultDialog2(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit RISResultDialog2"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CRISResultDialog2::OnDeleteRISResultDialog2(){
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
 		OnCancelRISResultDialog2(); 
 	}
return 0;
 } 
int CRISResultDialog2::OnSaveRISResultDialog2(){
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
 		//OnRISResultDialog2ListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRISResultDialog2::OnCancelRISResultDialog2(){
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
int CRISResultDialog2::OnRISResultDialog2ListLoadData(){
	return 0;
}
