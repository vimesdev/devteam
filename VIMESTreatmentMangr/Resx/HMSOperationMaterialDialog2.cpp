#include "HMSOperationMaterialDialog2.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnOperationNameChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog2 *)pWnd)->OnOperationNameChange();
} */
/*static void _OnOperationNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog2 *)pWnd)->OnOperationNameSetfocus();} */ 
/*static void _OnOperationNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog2 *)pWnd)->OnOperationNameKillfocus();
} */
static int _OnOperationNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog2 *)pWnd)->OnOperationNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationMaterialDialog2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog2*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSOperationMaterialDialog2Fnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog2*)pWnd)->OnAddHMSOperationMaterialDialog2();
} 
static int _OnEditHMSOperationMaterialDialog2Fnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog2*)pWnd)->OnEditHMSOperationMaterialDialog2();
} 
static int _OnDeleteHMSOperationMaterialDialog2Fnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog2*)pWnd)->OnDeleteHMSOperationMaterialDialog2();
} 
static int _OnSaveHMSOperationMaterialDialog2Fnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog2*)pWnd)->OnSaveHMSOperationMaterialDialog2();
} 
static int _OnCancelHMSOperationMaterialDialog2Fnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog2*)pWnd)->OnCancelHMSOperationMaterialDialog2();
} 
CHMSOperationMaterialDialog2::CHMSOperationMaterialDialog2(){

	m_nDlgWidth = 860;
	m_nDlgHeight = 588;
	SetDefaultValues();
}
CHMSOperationMaterialDialog2::~CHMSOperationMaterialDialog2(){
}
void CHMSOperationMaterialDialog2::OnCreateComponents(){
	m_wndDrugEntry.Create(this, _T("Drug Entry"), 5, 35, 600, 400);
	m_wndOperationNameLabel.Create(this, _T("Operation Name"), 5, 5, 120, 30);
	m_wndOperationName.Create(this,125, 5, 600, 30); 
	m_wndList.Create(this,10, 60, 597, 395); 

}
void CHMSOperationMaterialDialog2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOperationName.SetLimitText(35);
	m_wndOperationName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Note"), CFMT_TEXT, 180);
	m_hms_pharmacyorderTbl.SetTableName(_T("hms_pharmacyorder"));
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_roomid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_bedid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_receptidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuedate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuer"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_status"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_payment"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_type"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_stockid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_sheetidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_advice"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.SetTableName(_T("hms_pharmacyorderln"));
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderno"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_idx"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_itemid"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_stockline"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_name"), dfText, 35); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_unit"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_issueqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_return"), dfText, 1); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_usage"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_dose"), dfText, 35); 

}
void CHMSOperationMaterialDialog2::OnSetWindowEvents(){
	//m_wndOperationName.SetEvent(WE_CHANGE, _OnOperationNameChangeFnc);
	//m_wndOperationName.SetEvent(WE_SETFOCUS, _OnOperationNameSetfocusFnc);
	//m_wndOperationName.SetEvent(WE_KILLFOCUS, _OnOperationNameKillfocusFnc);
	m_wndOperationName.SetEvent(WE_CHECKVALUE, _OnOperationNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

}
void CHMSOperationMaterialDialog2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOperationName.GetDlgCtrlID(), m_szOperationName);

}
void CHMSOperationMaterialDialog2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationMaterialDialog2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());

}
void CHMSOperationMaterialDialog2::SetDefaultValues(){

	m_szOperationName.Empty();

}
int CHMSOperationMaterialDialog2::SetMode(int nMode){ 
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
/*void CHMSOperationMaterialDialog2::OnOperationNameChange(){
	
} */
/*void CHMSOperationMaterialDialog2::OnOperationNameSetfocus(){
	
} */
/*void CHMSOperationMaterialDialog2::OnOperationNameKillfocus(){
	
} */
int CHMSOperationMaterialDialog2::OnOperationNameCheckValue(){
	return 0;
} 
void CHMSOperationMaterialDialog2::OnListDblClick(){
	
} 
void CHMSOperationMaterialDialog2::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMaterialDialog2::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationMaterialDialog2::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSOperationMaterialDialog2::OnAddHMSOperationMaterialDialog2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSOperationMaterialDialog2"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSOperationMaterialDialog2::OnEditHMSOperationMaterialDialog2(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSOperationMaterialDialog2"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSOperationMaterialDialog2::OnDeleteHMSOperationMaterialDialog2(){
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
 		OnCancelHMSOperationMaterialDialog2(); 
 	}
return 0;
 } 
int CHMSOperationMaterialDialog2::OnSaveHMSOperationMaterialDialog2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_pharmacyorderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pharmacyorderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSOperationMaterialDialog2ListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOperationMaterialDialog2::OnCancelHMSOperationMaterialDialog2(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSOperationMaterialDialog2::OnHMSOperationMaterialDialog2ListLoadData(){
	return 0;
}
