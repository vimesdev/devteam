#include "RegimenCLS.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRegimenCLS*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRegimenCLS*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRegimenCLS*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRegimenCLS*)pWnd)->OnListDeleteItem();
} 
static int _OnAddRegimenCLSFnc(CWnd *pWnd){
	 return ((CRegimenCLS*)pWnd)->OnAddRegimenCLS();
} 
static int _OnEditRegimenCLSFnc(CWnd *pWnd){
	 return ((CRegimenCLS*)pWnd)->OnEditRegimenCLS();
} 
static int _OnDeleteRegimenCLSFnc(CWnd *pWnd){
	 return ((CRegimenCLS*)pWnd)->OnDeleteRegimenCLS();
} 
static int _OnSaveRegimenCLSFnc(CWnd *pWnd){
	 return ((CRegimenCLS*)pWnd)->OnSaveRegimenCLS();
} 
static int _OnCancelRegimenCLSFnc(CWnd *pWnd){
	 return ((CRegimenCLS*)pWnd)->OnCancelRegimenCLS();
} 
CRegimenCLS::CRegimenCLS(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRegimenCLS::~CRegimenCLS(){
}
void CRegimenCLS::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 800, 355);
	m_wndList.Create(this,10, 30, 795, 350); 

}
void CRegimenCLS::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 750);
	
}
void CRegimenCLS::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	
	SetMode(VM_NONE);

}
void CRegimenCLS::OnDoDataExchange(CDataExchange* pDX){

}
void CRegimenCLS::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CRegimenCLS::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRegimenCLS::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createdby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createddate"), pMF->GetSysDateTime());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updatedby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updateddate"), pMF->GetSysDateTime());

}
void CRegimenCLS::SetDefaultValues(){


}
int CRegimenCLS::SetMode(int nMode){
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
void CRegimenCLS::OnListDblClick(){
	
} 
void CRegimenCLS::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRegimenCLS::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CRegimenCLS::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT itemid, hfl_name FROM hms_phacdo_line, hms_fee_list WHERE  hfl_feeid=itemid AND typeid='CLS' AND hms_phacdo_id=%ld "), m_nID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("itemid")), 
			rs.GetValue(_T("hfl_name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	
	return 0;
}
int CRegimenCLS::OnAddRegimenCLS(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRegimenCLS::OnEditRegimenCLS(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRegimenCLS::OnDeleteRegimenCLS(){
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
 		OnCancelRegimenCLS();
 	}
	return 0;
}
int CRegimenCLS::OnSaveRegimenCLS(){
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
 		//OnRegimenCLSListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRegimenCLS::OnCancelRegimenCLS(){
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
int CRegimenCLS::OnRegimenCLSListLoadData(){
	return 0;
}
