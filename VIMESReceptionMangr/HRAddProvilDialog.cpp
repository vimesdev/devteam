#include "HRAddProvilDialog.h"
#include "MainFrm.h"
static void _OnProvilSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHRAddProvilDialog* )pWnd)->OnProvilSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvilSelendokFnc(CWnd *pWnd){
	((CHRAddProvilDialog *)pWnd)->OnProvilSelendok();
}
/*static void _OnProvilSetfocusFnc(CWnd *pWnd){
	((CHRAddProvilDialog *)pWnd)->OnProvilKillfocus();
}*/
/*static void _OnProvilKillfocusFnc(CWnd *pWnd){
	((CHRAddProvilDialog *)pWnd)->OnProvilKillfocus();
}*/
static long _OnProvilLoadDataFnc(CWnd *pWnd){
	return ((CHRAddProvilDialog *)pWnd)->OnProvilLoadData();
}
/*static void _OnProvilAddNewFnc(CWnd *pWnd){
	((CHRAddProvilDialog *)pWnd)->OnProvilAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHRAddProvilDialog *pVw = (CHRAddProvilDialog *)pWnd;
	pVw->OnOKSelect();
} 
static int _OnAddHRAddProvilDialogFnc(CWnd *pWnd){
	 return ((CHRAddProvilDialog*)pWnd)->OnAddHRAddProvilDialog();
} 
static int _OnEditHRAddProvilDialogFnc(CWnd *pWnd){
	 return ((CHRAddProvilDialog*)pWnd)->OnEditHRAddProvilDialog();
} 
static int _OnDeleteHRAddProvilDialogFnc(CWnd *pWnd){
	 return ((CHRAddProvilDialog*)pWnd)->OnDeleteHRAddProvilDialog();
} 
static int _OnSaveHRAddProvilDialogFnc(CWnd *pWnd){
	 return ((CHRAddProvilDialog*)pWnd)->OnSaveHRAddProvilDialog();
} 
static int _OnCancelHRAddProvilDialogFnc(CWnd *pWnd){
	 return ((CHRAddProvilDialog*)pWnd)->OnCancelHRAddProvilDialog();
} 
CHRAddProvilDialog::CHRAddProvilDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 380;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHRAddProvilDialog::~CHRAddProvilDialog(){
}
void CHRAddProvilDialog::OnCreateComponents(){
	m_wndProvilInfo.Create(this, _T("Provil Info"), 5, 6, 370, 61);
	m_wndProvilLabel.Create(this, _T("Provil"), 10, 30, 90, 55);
	m_wndProvil.Create(this,95, 30, 365, 55); 
	m_wndOK.Create(this, _T("&Ok"), 285, 65, 365, 90);

}
void CHRAddProvilDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProvil.SetCheckValue(true);
	m_wndProvil.LimitText(35);


	m_wndProvil.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvil.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHRAddProvilDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProvil.SetEvent(WE_SELENDOK, _OnProvilSelendokFnc);
	//m_wndProvil.SetEvent(WE_SETFOCUS, _OnProvilSetfocusFnc);
	//m_wndProvil.SetEvent(WE_KILLFOCUS, _OnProvilKillfocusFnc);
	m_wndProvil.SetEvent(WE_SELCHANGE, _OnProvilSelectChangeFnc);
	m_wndProvil.SetEvent(WE_LOADDATA, _OnProvilLoadDataFnc);
	//m_wndProvil.SetEvent(WE_ADDNEW, _OnProvilAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	SetMode(VM_ADD);

}
void CHRAddProvilDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProvil.GetDlgCtrlID(), m_szProvilKey);

}
void CHRAddProvilDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Provil")] =  m_szProvilKey;
	}
	else
	{
			
	m_jData[_T("Provil")].GetValue(m_szProvilKey);
	}

}
void CHRAddProvilDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHRAddProvilDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHRAddProvilDialog::SetDefaultValues(){

	m_szProvilKey.Empty();

}
int CHRAddProvilDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
void CHRAddProvilDialog::OnProvilSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHRAddProvilDialog::OnProvilSelendok(){
	 
}
/*void CHRAddProvilDialog::OnProvilSetfocus(){
	
}*/
/*void CHRAddProvilDialog::OnProvilKillfocus(){
	
}*/
long CHRAddProvilDialog::OnProvilLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvil.IsSearchKey() && !m_szProvilKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s' "), m_szProvilKey);
	}
	m_wndProvil.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select sp_id_bh as id, sp_name as name from sys_prov   ORDER BY sp_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvil.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHRAddProvilDialog::OnProvilAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHRAddProvilDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if( m_szProvilKey.IsEmpty())
	{
		ShowMessageBox(_T("Bat buoc phai chon tinh thanh pho"));
		return;
	}
	OnOK();
	
} 
int CHRAddProvilDialog::OnAddHRAddProvilDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHRAddProvilDialog::OnEditHRAddProvilDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHRAddProvilDialog::OnDeleteHRAddProvilDialog(){
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
 		OnCancelHRAddProvilDialog();
 	}
	return 0;
}
int CHRAddProvilDialog::OnSaveHRAddProvilDialog(){
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
 		//OnHRAddProvilDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHRAddProvilDialog::OnCancelHRAddProvilDialog(){
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
int CHRAddProvilDialog::OnHRAddProvilDialogListLoadData(){
	return 0;
}
