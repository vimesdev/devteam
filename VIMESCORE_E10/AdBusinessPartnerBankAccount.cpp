#include "AdBusinessPartnerBankAccount.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerBankAccount*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerBankAccount*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerBankAccount*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerBankAccount*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdBusinessPartnerBankAccountFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerBankAccount*)pWnd)->OnAddAdBusinessPartnerBankAccount();
} 
static int _OnEditAdBusinessPartnerBankAccountFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerBankAccount*)pWnd)->OnEditAdBusinessPartnerBankAccount();
} 
static int _OnDeleteAdBusinessPartnerBankAccountFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerBankAccount*)pWnd)->OnDeleteAdBusinessPartnerBankAccount();
} 
static int _OnSaveAdBusinessPartnerBankAccountFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerBankAccount*)pWnd)->OnSaveAdBusinessPartnerBankAccount();
} 
static int _OnCancelAdBusinessPartnerBankAccountFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerBankAccount*)pWnd)->OnCancelAdBusinessPartnerBankAccount();
} 
CAdBusinessPartnerBankAccount::CAdBusinessPartnerBankAccount(){

	m_nDlgWidth = 785;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CAdBusinessPartnerBankAccount::~CAdBusinessPartnerBankAccount(){
}
void CAdBusinessPartnerBankAccount::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 780, 250); 

}
void CAdBusinessPartnerBankAccount::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Bank Name"), 256, 300);
	m_wndList.InsertColumn(1, _T("Account No"), 256, 150);
	m_wndList.InsertColumn(2, _T("Brank"), 256, 220);
	m_wndList.InsertColumn(3, _T("Active"), 256, 80);

}
void CAdBusinessPartnerBankAccount::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdBusinessPartnerBankAccountFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdBusinessPartnerBankAccountFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdBusinessPartnerBankAccountFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdBusinessPartnerBankAccountFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdBusinessPartnerBankAccountFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerBankAccount::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerBankAccount::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerBankAccount::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdBusinessPartnerBankAccount::SetDefaultValues(){


}
int CAdBusinessPartnerBankAccount::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CAdBusinessPartnerBankAccount::OnListDblClick(){
	
} 
void CAdBusinessPartnerBankAccount::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerBankAccount::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerBankAccount::OnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("BankName")), 
			rs.GetValue(_T("AccountNo")), 
			rs.GetValue(_T("Brank")), 
			rs.GetValue(_T("Active")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CAdBusinessPartnerBankAccount::OnAddAdBusinessPartnerBankAccount(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerBankAccount::OnEditAdBusinessPartnerBankAccount(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerBankAccount::OnDeleteAdBusinessPartnerBankAccount(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelAdBusinessPartnerBankAccount();
 	}
	return 0;
}
int CAdBusinessPartnerBankAccount::OnSaveAdBusinessPartnerBankAccount(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnAdBusinessPartnerBankAccountListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerBankAccount::OnCancelAdBusinessPartnerBankAccount(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CAdBusinessPartnerBankAccount::OnAdBusinessPartnerBankAccountListLoadData(){
	return 0;
}
