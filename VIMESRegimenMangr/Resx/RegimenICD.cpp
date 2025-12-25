#include "RegimenICD.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRegimenICD*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRegimenICD*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRegimenICD*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRegimenICD*)pWnd)->OnListDeleteItem();
} 
static int _OnAddRegimenICDFnc(CWnd *pWnd){
	 return ((CRegimenICD*)pWnd)->OnAddRegimenICD();
} 
static int _OnEditRegimenICDFnc(CWnd *pWnd){
	 return ((CRegimenICD*)pWnd)->OnEditRegimenICD();
} 
static int _OnDeleteRegimenICDFnc(CWnd *pWnd){
	 return ((CRegimenICD*)pWnd)->OnDeleteRegimenICD();
} 
static int _OnSaveRegimenICDFnc(CWnd *pWnd){
	 return ((CRegimenICD*)pWnd)->OnSaveRegimenICD();
} 
static int _OnCancelRegimenICDFnc(CWnd *pWnd){
	 return ((CRegimenICD*)pWnd)->OnCancelRegimenICD();
} 
CRegimenICD::CRegimenICD(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRegimenICD::~CRegimenICD(){
}
void CRegimenICD::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 800, 355);
	m_wndList.Create(this,10, 30, 795, 350); 

}
void CRegimenICD::OnInitializeComponents(){
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
void CRegimenICD::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddRegimenICDFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditRegimenICDFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteRegimenICDFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveRegimenICDFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelRegimenICDFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CRegimenICD::OnDoDataExchange(CDataExchange* pDX){

}
void CRegimenICD::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CRegimenICD::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRegimenICD::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createdby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createddate"), pMF->GetSysDateTime());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updatedby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updateddate"), pMF->GetSysDateTime());

}
void CRegimenICD::SetDefaultValues(){


}
int CRegimenICD::SetMode(int nMode){
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
void CRegimenICD::OnListDblClick(){
	
} 
void CRegimenICD::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRegimenICD::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CRegimenICD::OnListLoadData(){
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
int CRegimenICD::OnAddRegimenICD(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRegimenICD::OnEditRegimenICD(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRegimenICD::OnDeleteRegimenICD(){
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
 		OnCancelRegimenICD();
 	}
	return 0;
}
int CRegimenICD::OnSaveRegimenICD(){
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
 		//OnRegimenICDListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRegimenICD::OnCancelRegimenICD(){
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
int CRegimenICD::OnRegimenICDListLoadData(){
	return 0;
}
