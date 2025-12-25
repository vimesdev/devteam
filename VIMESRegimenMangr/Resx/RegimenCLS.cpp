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


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 750);
	m_edu_transferorder_lineTbl.SetTableName(_T("edu_transferorder_line"));
	m_edu_transferorder_lineTbl.AddField(_T("etol_id"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_createdby"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_createddate"), dfDateTime); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_updatedby"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_updateddate"), dfDateTime); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_transfer_id"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_student_id"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_name"), dfText, 65); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_birthdate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_sex"), dfText, 3); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_ethnic"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_address"), dfText, 254); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_occupation"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_position"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_rank"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_phone"), dfText, 12); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_cardid"), dfText, 25); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_date"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_startdate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_enddate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_deptid"), dfText, 7); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_technique"), dfText, 1); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_certificate"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_decide"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_decidedate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_content"), dfText, 115); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_projectid"), dfText, 5); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_placetol_id"), dfText, 5); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_certificate_receive"), dfText, 115); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_deptid_receive"), dfText, 7); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_result"), dfText, 1); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_typeid"), dfText, 2); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_workunit"), dfText, 2); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_note"), dfText, 254); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_status"), dfText, 1); 

}
void CRegimenCLS::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddRegimenCLSFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditRegimenCLSFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteRegimenCLSFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveRegimenCLSFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelRegimenCLSFnc, 0, 'T', VK_CONTROL);
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
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
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
