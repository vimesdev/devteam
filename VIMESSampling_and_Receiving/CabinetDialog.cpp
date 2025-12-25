#include "CabinetDialog.h"
#include "HMSMainFrame.h"

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CCabinetDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddCabinetDialogFnc(CWnd *pWnd){
	 return ((CCabinetDialog*)pWnd)->OnAddCabinetDialog();
} 
static int _OnEditCabinetDialogFnc(CWnd *pWnd){
	 return ((CCabinetDialog*)pWnd)->OnEditCabinetDialog();
} 
static int _OnDeleteCabinetDialogFnc(CWnd *pWnd){
	 return ((CCabinetDialog*)pWnd)->OnDeleteCabinetDialog();
} 
static int _OnSaveCabinetDialogFnc(CWnd *pWnd){
	 return ((CCabinetDialog*)pWnd)->OnSaveCabinetDialog();
} 
static int _OnCancelCabinetDialogFnc(CWnd *pWnd){
	 return ((CCabinetDialog*)pWnd)->OnCancelCabinetDialog();
} 
CCabinetDialog::CCabinetDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1000;
	m_nDlgHeight = 625;
	m_szTitle = _T("Medical Cabinet Management");
	SetDefaultValues();
}
CCabinetDialog::~CCabinetDialog(){
}
void CCabinetDialog::OnCreateComponents(){
	m_wndTab.Create(this,0, 0, 970, 600); 

	m_wndMedicalOrderList.Create(&m_wndTab);
	m_wndMedicalOrder.Create(&m_wndTab);
	m_wndTab.Add(_T("Order List"), &m_wndMedicalOrderList);
	m_wndTab.Add(_T("Order Information"), &m_wndMedicalOrder);
	SetWindowText(_T("Medical Cabinet Management"));

	m_wndMedicalOrderList.m_wndOrder = &m_wndMedicalOrder;	
	
}
void CCabinetDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CCabinetDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndMedicalOrderList.OnInitDialog();
	m_wndMedicalOrder.OnInitDialog();

	SetMode(VM_VIEW);

	m_wndTab.SetCurSel(0);
}
void CCabinetDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CCabinetDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCabinetDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CCabinetDialog::SetDefaultValues(){


}
int CCabinetDialog::SetMode(int nMode){
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

void CCabinetDialog::OnTabSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CCabinetDialog::OnAddCabinetDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCabinetDialog::OnEditCabinetDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CCabinetDialog::OnDeleteCabinetDialog(){
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
 		OnCancelCabinetDialog(); 
 	}
	return 0;
}
int CCabinetDialog::OnSaveCabinetDialog(){
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
 		//OnCabinetDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CCabinetDialog::OnCancelCabinetDialog(){
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
int CCabinetDialog::OnCabinetDialogListLoadData(){
	return 0;
}
