#include "HMSFoodOrderDiaglog.h"
#include "HMSMainFrame.h"

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSFoodOrderDiaglog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddCHMSFoodOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog*)pWnd)->OnAddCHMSFoodOrderDiaglog();
} 
static int _OnEditCHMSFoodOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog*)pWnd)->OnEditCHMSFoodOrderDiaglog();
} 
static int _OnDeleteCHMSFoodOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog*)pWnd)->OnDeleteCHMSFoodOrderDiaglog();
} 
static int _OnSaveCHMSFoodOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog*)pWnd)->OnSaveCHMSFoodOrderDiaglog();
} 
static int _OnCancelCHMSFoodOrderDiaglogFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog*)pWnd)->OnCancelCHMSFoodOrderDiaglog();
} 
CHMSFoodOrderDiaglog::CHMSFoodOrderDiaglog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1020;
	m_nDlgHeight = 720;
	m_szTitle = _T("Daily food order");
	SetDefaultValues();
}
CHMSFoodOrderDiaglog::~CHMSFoodOrderDiaglog(){
}
void CHMSFoodOrderDiaglog::OnCreateComponents(){
	m_wndTab.Create(this,0, 0, 1010, 680);
	m_wndDailyFoodOrderList.Create(&m_wndTab);
	m_wndDailyFoodOrder.Create(&m_wndTab);
	m_wndDailyFoodOrderCancel.Create(&m_wndTab);
	m_wndTab.Add(_T("Order List"), &m_wndDailyFoodOrderList);
	m_wndTab.Add(_T("Order Information"), &m_wndDailyFoodOrder);
	m_wndTab.Add(_T("Order Information Cancel"), &m_wndDailyFoodOrderCancel);
	SetWindowText(_T("Delivery Food Management"));
	m_wndDailyFoodOrderList.m_wndOrder = &m_wndDailyFoodOrder;
	m_wndDailyFoodOrderList.m_wndOrderCancel = &m_wndDailyFoodOrderCancel;
}
void CHMSFoodOrderDiaglog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSFoodOrderDiaglog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndDailyFoodOrderList.OnInitDialog();
	m_wndDailyFoodOrder.OnInitDialog();
	m_wndDailyFoodOrderCancel.OnInitDialog();

	SetMode(VM_VIEW);

	m_wndTab.SetCurSel(1);
}
void CHMSFoodOrderDiaglog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSFoodOrderDiaglog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFoodOrderDiaglog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSFoodOrderDiaglog::SetDefaultValues(){


}
int CHMSFoodOrderDiaglog::SetMode(int nMode){
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

void CHMSFoodOrderDiaglog::OnTabSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFoodOrderDiaglog::OnAddCHMSFoodOrderDiaglog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFoodOrderDiaglog::OnEditCHMSFoodOrderDiaglog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodOrderDiaglog::OnDeleteCHMSFoodOrderDiaglog(){
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
 		OnCancelCHMSFoodOrderDiaglog(); 
 	}
	return 0;
}
int CHMSFoodOrderDiaglog::OnSaveCHMSFoodOrderDiaglog(){
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
 		//OnCHMSFoodOrderDiaglogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSFoodOrderDiaglog::OnCancelCHMSFoodOrderDiaglog(){
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
int CHMSFoodOrderDiaglog::OnCHMSFoodOrderDialogListLoadData(){
	return 0;
}
