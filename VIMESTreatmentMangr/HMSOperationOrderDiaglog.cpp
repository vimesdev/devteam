#include "HMSOperationOrderDiaglog.h"
#include "HMSMainFrame.h"

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSOperationOrderDiaglog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddCHMSOperationOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderDiaglog*)pWnd)->OnAddCHMSOperationOrderDiaglog();
} 
static int _OnEditCHMSOperationOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderDiaglog*)pWnd)->OnEditCHMSOperationOrderDiaglog();
} 
static int _OnDeleteCHMSOperationOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderDiaglog*)pWnd)->OnDeleteCHMSOperationOrderDiaglog();
} 
static int _OnSaveCHMSOperationOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderDiaglog*)pWnd)->OnSaveCHMSOperationOrderDiaglog();
} 
static int _OnCancelCHMSOperationOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderDiaglog*)pWnd)->OnCancelCHMSOperationOrderDiaglog();
} 
CHMSOperationOrderDiaglog::CHMSOperationOrderDiaglog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1000;
	m_nDlgHeight = 625;
	m_szTitle = _T("Operation Order");
	SetDefaultValues();
}
CHMSOperationOrderDiaglog::~CHMSOperationOrderDiaglog(){
}
void CHMSOperationOrderDiaglog::OnCreateComponents(){
	m_wndTab.Create(this,0, 0, 970, 620);
	m_wndOperationOrderList.Create(&m_wndTab);
	m_wndOperationOrderFromDept.Create(&m_wndTab);
	m_wndTab.Add(_T("Order List"), &m_wndOperationOrderList);
	m_wndTab.Add(_T("Operation Information"), &m_wndOperationOrderFromDept);
	SetWindowText(_T("Delivery Cabinet Management"));
	m_wndOperationOrderList.m_wndOrder = &m_wndOperationOrderFromDept;	
}
void CHMSOperationOrderDiaglog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSOperationOrderDiaglog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndOperationOrderList.OnInitDialog();
	m_wndOperationOrderFromDept.OnInitDialog();

	SetMode(VM_VIEW);

	m_wndTab.SetCurSel(1);
}
void CHMSOperationOrderDiaglog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSOperationOrderDiaglog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationOrderDiaglog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSOperationOrderDiaglog::SetDefaultValues(){


}
int CHMSOperationOrderDiaglog::SetMode(int nMode){
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

void CHMSOperationOrderDiaglog::OnTabSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationOrderDiaglog::OnAddCHMSOperationOrderDiaglog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSOperationOrderDiaglog::OnEditCHMSOperationOrderDiaglog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationOrderDiaglog::OnDeleteCHMSOperationOrderDiaglog(){
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
 		OnCancelCHMSOperationOrderDiaglog(); 
 	}
	return 0;
}
int CHMSOperationOrderDiaglog::OnSaveCHMSOperationOrderDiaglog(){
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
 		//OnCHMSOperationOrderDiaglogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOperationOrderDiaglog::OnCancelCHMSOperationOrderDiaglog(){
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
int CHMSOperationOrderDiaglog::OnCHMSFoodOrderDialogListLoadData(){
	return 0;
}
