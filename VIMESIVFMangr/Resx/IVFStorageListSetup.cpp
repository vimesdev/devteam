#include "IVFStorageListSetup.h"
#include "MainFrm.h"
static long _OnCassetteListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageListSetup*)pWnd)->OnCassetteListLoadData();
} 
static void _OnCassetteListDblClickFnc(CWnd *pWnd){
	((CIVFStorageListSetup*)pWnd)->OnCassetteListDblClick();
} 
static void _OnCassetteListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageListSetup*)pWnd)->OnCassetteListSelectChange(nOldItem, nNewItem);
} 
static int _OnCassetteListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetup*)pWnd)->OnCassetteListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFStorageListSetup *pVw = (CIVFStorageListSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFStorageListSetup *pVw = (CIVFStorageListSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFStorageListSetup *pVw = (CIVFStorageListSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static long _OnTopInfoLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageListSetup*)pWnd)->OnTopInfoLoadData();
} 
static void _OnTopInfoDblClickFnc(CWnd *pWnd){
	((CIVFStorageListSetup*)pWnd)->OnTopInfoDblClick();
} 
static void _OnTopInfoSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageListSetup*)pWnd)->OnTopInfoSelectChange(nOldItem, nNewItem);
} 
static int _OnTopInfoDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetup*)pWnd)->OnTopInfoDeleteItem();
} 
static int _OnAddIVFStorageListSetupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetup*)pWnd)->OnAddIVFStorageListSetup();
} 
static int _OnEditIVFStorageListSetupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetup*)pWnd)->OnEditIVFStorageListSetup();
} 
static int _OnDeleteIVFStorageListSetupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetup*)pWnd)->OnDeleteIVFStorageListSetup();
} 
static int _OnSaveIVFStorageListSetupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetup*)pWnd)->OnSaveIVFStorageListSetup();
} 
static int _OnCancelIVFStorageListSetupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetup*)pWnd)->OnCancelIVFStorageListSetup();
} 
CIVFStorageListSetup::CIVFStorageListSetup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CIVFStorageListSetup::~CIVFStorageListSetup(){
}
void CIVFStorageListSetup::OnCreateComponents(){
	m_wndCassetteList.Create(this,5, 5, 255, 445); 
	m_wndAdd.Create(this, _T("&Add"), 5, 450, 85, 475);
	m_wndEdit.Create(this, _T("&Edit"), 90, 450, 170, 475);
	m_wndDelete.Create(this, _T("&Delete"), 175, 450, 255, 475);
	m_wndTopInfo.Create(this,260, 5, 800, 475); 

}
void CIVFStorageListSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();





}
void CIVFStorageListSetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCassetteList.SetEvent(WE_SELCHANGE, _OnCassetteListSelectChangeFnc);
	m_wndCassetteList.SetEvent(WE_LOADDATA, _OnCassetteListLoadDataFnc);
	m_wndCassetteList.SetEvent(WE_DBLCLICK, _OnCassetteListDblClickFnc);
	m_wndCassetteList.AddEvent(1, _T("Delete"), _OnCassetteListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndTopInfo.SetEvent(WE_SELCHANGE, _OnTopInfoSelectChangeFnc);
	m_wndTopInfo.SetEvent(WE_LOADDATA, _OnTopInfoLoadDataFnc);
	m_wndTopInfo.SetEvent(WE_DBLCLICK, _OnTopInfoDblClickFnc);
	m_wndTopInfo.AddEvent(1, _T("Delete"), _OnTopInfoDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CIVFStorageListSetup::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFStorageListSetup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFStorageListSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageListSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageListSetup::SetDefaultValues(){


}
int CIVFStorageListSetup::SetMode(int nMode){
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
void CIVFStorageListSetup::OnCassetteListDblClick(){
	
} 
void CIVFStorageListSetup::OnCassetteListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageListSetup::OnCassetteListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageListSetup::OnCassetteListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndCassetteList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCassetteList.AddItems(
		rs.MoveNext();
	}
	m_wndCassetteList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFStorageListSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetup::OnTopInfoDblClick(){
	
} 
void CIVFStorageListSetup::OnTopInfoSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageListSetup::OnTopInfoDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageListSetup::OnTopInfoLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTopInfo.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTopInfo.AddItems(
		rs.MoveNext();
	}
	m_wndTopInfo.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CIVFStorageListSetup::OnAddIVFStorageListSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageListSetup::OnEditIVFStorageListSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageListSetup::OnDeleteIVFStorageListSetup(){
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
 		OnCancelIVFStorageListSetup();
 	}
	return 0;
}
int CIVFStorageListSetup::OnSaveIVFStorageListSetup(){
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
 		//OnIVFStorageListSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageListSetup::OnCancelIVFStorageListSetup(){
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
int CIVFStorageListSetup::OnIVFStorageListSetupListLoadData(){
	return 0;
}
