#include "HMSFoodOrderDiaglog_EM.h"
#include "HMSMainFrame.h"

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSFoodOrderDiaglog_EM*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddCHMSFoodOrderDiaglog_EMFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog_EM*)pWnd)->OnAddCHMSFoodOrderDiaglog_EM();
} 
static int _OnEditCHMSFoodOrderDiaglog_EMFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog_EM*)pWnd)->OnEditCHMSFoodOrderDiaglog_EM();
} 
static int _OnDeleteCHMSFoodOrderDiaglog_EMFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog_EM*)pWnd)->OnDeleteCHMSFoodOrderDiaglog_EM();
} 
static int _OnSaveCHMSFoodOrderDiaglog_EMFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog_EM*)pWnd)->OnSaveCHMSFoodOrderDiaglog_EM();
} 
static int _OnCancelCHMSFoodOrderDiaglog_EMFnc(CWnd *pWnd){
	 return ((CHMSFoodOrderDiaglog_EM*)pWnd)->OnCancelCHMSFoodOrderDiaglog_EM();
} 
CHMSFoodOrderDiaglog_EM::CHMSFoodOrderDiaglog_EM(CWnd *pParent):

	CGuiDialog(pParent)
{
	m_nDlgWidth = 1020;
	m_nDlgHeight = 720;
	m_szTitle = _T("Daily food order");
	SetDefaultValues();

}
CHMSFoodOrderDiaglog_EM::~CHMSFoodOrderDiaglog_EM(){
}
void CHMSFoodOrderDiaglog_EM::OnCreateComponents(){
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
void CHMSFoodOrderDiaglog_EM::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSFoodOrderDiaglog_EM::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndDailyFoodOrderList.OnInitDialog();
	m_wndDailyFoodOrder.OnInitDialog();
	m_wndDailyFoodOrderCancel.OnInitDialog();

	SetMode(VM_VIEW);

	m_wndTab.SetCurSel(1);
}
void CHMSFoodOrderDiaglog_EM::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSFoodOrderDiaglog_EM::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFoodOrderDiaglog_EM::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSFoodOrderDiaglog_EM::SetDefaultValues(){


}
int CHMSFoodOrderDiaglog_EM::SetMode(int nMode){
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

void CHMSFoodOrderDiaglog_EM::OnTabSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFoodOrderDiaglog_EM::OnAddCHMSFoodOrderDiaglog_EM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFoodOrderDiaglog_EM::OnEditCHMSFoodOrderDiaglog_EM(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodOrderDiaglog_EM::OnDeleteCHMSFoodOrderDiaglog_EM(){
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
 		OnCancelCHMSFoodOrderDiaglog_EM(); 
 	}
	return 0;
}
int CHMSFoodOrderDiaglog_EM::OnSaveCHMSFoodOrderDiaglog_EM(){
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
 		//OnCHMSFoodOrderDiaglog_EMListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSFoodOrderDiaglog_EM::OnCancelCHMSFoodOrderDiaglog_EM(){
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
int CHMSFoodOrderDiaglog_EM::OnCHMSFoodOrderDialogListLoadData(){
	return 0;
}
