#include "AllocateMaterialDialog.h"
#include "HMSMainFrame.h"

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CAllocateMaterialDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddAllocateMaterialDialogFnc(CWnd *pWnd){
	 return ((CAllocateMaterialDialog*)pWnd)->OnAddAllocateMaterialDialog();
} 
static int _OnEditAllocateMaterialDialogFnc(CWnd *pWnd){
	 return ((CAllocateMaterialDialog*)pWnd)->OnEditAllocateMaterialDialog();
} 
static int _OnDeleteAllocateMaterialDialogFnc(CWnd *pWnd){
	 return ((CAllocateMaterialDialog*)pWnd)->OnDeleteAllocateMaterialDialog();
} 
static int _OnSaveAllocateMaterialDialogFnc(CWnd *pWnd){
	 return ((CAllocateMaterialDialog*)pWnd)->OnSaveAllocateMaterialDialog();
} 
static int _OnCancelAllocateMaterialDialogFnc(CWnd *pWnd){
	 return ((CAllocateMaterialDialog*)pWnd)->OnCancelAllocateMaterialDialog();
} 
CAllocateMaterialDialog::CAllocateMaterialDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1000;
	m_nDlgHeight = 625;
	m_szTitle = _T("Medical AllocateMaterial Management");
	SetDefaultValues();
}
CAllocateMaterialDialog::~CAllocateMaterialDialog(){
}
void CAllocateMaterialDialog::OnCreateComponents(){
	m_wndTab.Create(this,0, 0, 970, 600); 

	m_wndMedicalOrderList.Create(&m_wndTab);
	m_wndMedicalOrder.Create(&m_wndTab);
	m_wndTab.Add(_T("Order List"), &m_wndMedicalOrderList);
	m_wndTab.Add(_T("Order Information"), &m_wndMedicalOrder);
	SetWindowText(_T("Medical AllocateMaterial Management"));

	m_wndMedicalOrderList.m_wndOrder = &m_wndMedicalOrder;	
	
}
void CAllocateMaterialDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CAllocateMaterialDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndMedicalOrderList.OnInitDialog();
	m_wndMedicalOrder.OnInitDialog();

	SetMode(VM_VIEW);

	m_wndTab.SetCurSel(0);
}
void CAllocateMaterialDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CAllocateMaterialDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAllocateMaterialDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CAllocateMaterialDialog::SetDefaultValues(){


}
int CAllocateMaterialDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
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

void CAllocateMaterialDialog::OnTabSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CAllocateMaterialDialog::OnAddAllocateMaterialDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAllocateMaterialDialog::OnEditAllocateMaterialDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAllocateMaterialDialog::OnDeleteAllocateMaterialDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelAllocateMaterialDialog(); 
 	}
	return 0;
}
int CAllocateMaterialDialog::OnSaveAllocateMaterialDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnAllocateMaterialDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAllocateMaterialDialog::OnCancelAllocateMaterialDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CAllocateMaterialDialog::OnAllocateMaterialDialogListLoadData(){
	return 0;
}
