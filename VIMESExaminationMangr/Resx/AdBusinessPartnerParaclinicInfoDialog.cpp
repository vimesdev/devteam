#include "AdBusinessPartnerParaclinicInfoDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddGroupSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerParaclinicInfoDialog *pVw = (CAdBusinessPartnerParaclinicInfoDialog *)pWnd;
	pVw->OnAddGroupSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerParaclinicInfoDialog *pVw = (CAdBusinessPartnerParaclinicInfoDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerParaclinicInfoDialog *pVw = (CAdBusinessPartnerParaclinicInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdBusinessPartnerParaclinicInfoDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnAddAdBusinessPartnerParaclinicInfoDialog();
} 
static int _OnEditAdBusinessPartnerParaclinicInfoDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnEditAdBusinessPartnerParaclinicInfoDialog();
} 
static int _OnDeleteAdBusinessPartnerParaclinicInfoDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnDeleteAdBusinessPartnerParaclinicInfoDialog();
} 
static int _OnSaveAdBusinessPartnerParaclinicInfoDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnSaveAdBusinessPartnerParaclinicInfoDialog();
} 
static int _OnCancelAdBusinessPartnerParaclinicInfoDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerParaclinicInfoDialog*)pWnd)->OnCancelAdBusinessPartnerParaclinicInfoDialog();
} 
CAdBusinessPartnerParaclinicInfoDialog::CAdBusinessPartnerParaclinicInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 705;
	m_nDlgHeight = 565;
	SetDefaultValues();
}
CAdBusinessPartnerParaclinicInfoDialog::~CAdBusinessPartnerParaclinicInfoDialog(){
}
void CAdBusinessPartnerParaclinicInfoDialog::OnCreateComponents(){
	m_wndList.Create(this,6, 5, 686, 525); 
	m_wndAddGroup.Create(this, _T("&Add Group"), 5, 530, 95, 555);
	m_wndAdd.Create(this, _T("&Add"), 100, 530, 190, 555);
	m_wndClose.Create(this, _T("&Close"), 595, 530, 685, 555);

}
void CAdBusinessPartnerParaclinicInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 59);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 70);

}
void CAdBusinessPartnerParaclinicInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddGroup.SetEvent(WE_CLICK, _OnAddGroupSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerParaclinicInfoDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerParaclinicInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdBusinessPartnerParaclinicInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerParaclinicInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerParaclinicInfoDialog::SetDefaultValues(){


}
int CAdBusinessPartnerParaclinicInfoDialog::SetMode(int nMode){
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
void CAdBusinessPartnerParaclinicInfoDialog::OnListDblClick(){
	
} 
void CAdBusinessPartnerParaclinicInfoDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerParaclinicInfoDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerParaclinicInfoDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Quantity")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdBusinessPartnerParaclinicInfoDialog::OnAddGroupSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerParaclinicInfoDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerParaclinicInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerParaclinicInfoDialog::OnAddAdBusinessPartnerParaclinicInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerParaclinicInfoDialog::OnEditAdBusinessPartnerParaclinicInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerParaclinicInfoDialog::OnDeleteAdBusinessPartnerParaclinicInfoDialog(){
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
 		OnCancelAdBusinessPartnerParaclinicInfoDialog();
 	}
	return 0;
}
int CAdBusinessPartnerParaclinicInfoDialog::OnSaveAdBusinessPartnerParaclinicInfoDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnAdBusinessPartnerParaclinicInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerParaclinicInfoDialog::OnCancelAdBusinessPartnerParaclinicInfoDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CAdBusinessPartnerParaclinicInfoDialog::OnAdBusinessPartnerParaclinicInfoDialogListLoadData(){
	return 0;
}
