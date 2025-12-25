#include "RegimenDrug.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRegimenDrug*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRegimenDrug*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRegimenDrug*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRegimenDrug*)pWnd)->OnListDeleteItem();
} 
static int _OnAddRegimenDrugFnc(CWnd *pWnd){
	 return ((CRegimenDrug*)pWnd)->OnAddRegimenDrug();
} 
static int _OnEditRegimenDrugFnc(CWnd *pWnd){
	 return ((CRegimenDrug*)pWnd)->OnEditRegimenDrug();
} 
static int _OnDeleteRegimenDrugFnc(CWnd *pWnd){
	 return ((CRegimenDrug*)pWnd)->OnDeleteRegimenDrug();
} 
static int _OnSaveRegimenDrugFnc(CWnd *pWnd){
	 return ((CRegimenDrug*)pWnd)->OnSaveRegimenDrug();
} 
static int _OnCancelRegimenDrugFnc(CWnd *pWnd){
	 return ((CRegimenDrug*)pWnd)->OnCancelRegimenDrug();
} 
CRegimenDrug::CRegimenDrug(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRegimenDrug::~CRegimenDrug(){
}
void CRegimenDrug::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 800, 355);
	m_wndList.Create(this,10, 30, 795, 350); 

}
void CRegimenDrug::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 750);	

}
void CRegimenDrug::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	
	SetMode(VM_NONE);

}
void CRegimenDrug::OnDoDataExchange(CDataExchange* pDX){

}
void CRegimenDrug::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CRegimenDrug::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRegimenDrug::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createdby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createddate"), pMF->GetSysDateTime());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updatedby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updateddate"), pMF->GetSysDateTime());

}
void CRegimenDrug::SetDefaultValues(){


}
int CRegimenDrug::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CRegimenDrug::OnListDblClick(){
	
} 
void CRegimenDrug::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRegimenDrug::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CRegimenDrug::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

		szSQL.Format(_T("select itemid as id, mpc_name as name, idx from hms_phacdo_line ") \
				_T(" left join m_product_class on (  mpc_product_class_id = cast(itemid as integer) )  ") \
				_T("	where hms_phacdo_id =%ld and typeid ='DRU' order by idx "), m_nID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	
	return 0;
}
int CRegimenDrug::OnAddRegimenDrug(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRegimenDrug::OnEditRegimenDrug(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRegimenDrug::OnDeleteRegimenDrug(){
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
 		OnCancelRegimenDrug();
 	}
	return 0;
}
int CRegimenDrug::OnSaveRegimenDrug(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_transferorder_lineTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_transferorder_lineTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnRegimenDrugListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRegimenDrug::OnCancelRegimenDrug(){
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
int CRegimenDrug::OnRegimenDrugListLoadData(){
	return 0;
}
