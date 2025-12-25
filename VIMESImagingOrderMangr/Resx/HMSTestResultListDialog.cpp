#include "HMSTestResultListDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestResultListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSTestResultListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTestResultListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestResultListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnResultListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestResultListDialog*)pWnd)->OnResultListLoadData();
} 
static void _OnResultListDblClickFnc(CWnd *pWnd){
	((CHMSTestResultListDialog*)pWnd)->OnResultListDblClick();
} 
static void _OnResultListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTestResultListDialog*)pWnd)->OnResultListSelectChange(nOldItem, nNewItem);
} 
static int _OnResultListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestResultListDialog*)pWnd)->OnResultListDeleteItem();
} 
static void _OnEditResultSelectFnc(CWnd *pWnd){
	CHMSTestResultListDialog *pVw = (CHMSTestResultListDialog *)pWnd;
	pVw->OnEditResultSelect();
} 
static void _OnSyncPatientSelectFnc(CWnd *pWnd){
	CHMSTestResultListDialog *pVw = (CHMSTestResultListDialog *)pWnd;
	pVw->OnSyncPatientSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTestResultListDialog *pVw = (CHMSTestResultListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CHMSTestResultListDialog*)pWnd)->OnAddHMSTestResultListDialog();
} 
static int _OnEditHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CHMSTestResultListDialog*)pWnd)->OnEditHMSTestResultListDialog();
} 
static int _OnDeleteHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CHMSTestResultListDialog*)pWnd)->OnDeleteHMSTestResultListDialog();
} 
static int _OnSaveHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CHMSTestResultListDialog*)pWnd)->OnSaveHMSTestResultListDialog();
} 
static int _OnCancelHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CHMSTestResultListDialog*)pWnd)->OnCancelHMSTestResultListDialog();
} 
CHMSTestResultListDialog::CHMSTestResultListDialog(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSTestResultListDialog::~CHMSTestResultListDialog(){
}
void CHMSTestResultListDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 430, 570);
	m_wndResultInformation.Create(this, _T("Result Information"), 435, 5, 798, 570);
	m_wndPatientList.Create(this,10, 25, 425, 565); 
	m_wndResultList.Create(this,440, 25, 795, 565); 
	m_wndEditResult.Create(this, _T("&Edit Result"), 546, 574, 626, 598);
	m_wndSyncPatient.Create(this, _T("&Sync Patient"), 634, 573, 714, 597);
	m_wndClose.Create(this, _T("&Close"), 719, 573, 799, 597);

}
void CHMSTestResultListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndPatientList.InsertColumn(0, _T("PID"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(3, _T("Age"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(5, _T("Tray"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(6, _T("Cup"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(7, _T("Rack No"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(8, _T("Doc ID"), CFMT_NUMBER, 80);


	m_wndResultList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndResultList.InsertColumn(1, _T("Test ID"), CFMT_TEXT, 70);
	m_wndResultList.InsertColumn(2, _T("Test Name"), CFMT_TEXT, 140);
	m_wndResultList.InsertColumn(3, _T("Result"), CFMT_TEXT, 80);

}
void CHMSTestResultListDialog::OnSetWindowEvents(){
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndResultList.SetEvent(WE_SELCHANGE, _OnResultListSelectChangeFnc);
	m_wndResultList.SetEvent(WE_LOADDATA, _OnResultListLoadDataFnc);
	m_wndResultList.SetEvent(WE_DBLCLICK, _OnResultListDblClickFnc);
	m_wndResultList.AddEvent(1, _T("Delete"), _OnResultListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndEditResult.SetEvent(WE_CLICK, _OnEditResultSelectFnc);
	m_wndSyncPatient.SetEvent(WE_CLICK, _OnSyncPatientSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSTestResultListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSTestResultListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTestResultListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTestResultListDialog::SetDefaultValues(){


}
int CHMSTestResultListDialog::SetMode(int nMode){ 
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
void CHMSTestResultListDialog::OnPatientListDblClick(){
	
} 
void CHMSTestResultListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTestResultListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTestResultListDialog::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("PID")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Tray")), 
			rs.GetValue(_T("Cup")), 
			rs.GetValue(_T("RackNo")), 
			rs.GetValue(_T("DocID")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTestResultListDialog::OnResultListDblClick(){
	
} 
void CHMSTestResultListDialog::OnResultListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTestResultListDialog::OnResultListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTestResultListDialog::OnResultListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndResultList.BeginLoad(); 
	m_wndResultList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResultList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("TestID")), 
			rs.GetValue(_T("TestName")), 
			rs.GetValue(_T("Result")), NULL);
		rs.MoveNext();
	}
	m_wndResultList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTestResultListDialog::OnEditResultSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestResultListDialog::OnSyncPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestResultListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTestResultListDialog::OnAddHMSTestResultListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTestResultListDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSTestResultListDialog::OnEditHMSTestResultListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTestResultListDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSTestResultListDialog::OnDeleteHMSTestResultListDialog(){
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
 		OnCancelHMSTestResultListDialog(); 
 	}
return 0;
 } 
int CHMSTestResultListDialog::OnSaveHMSTestResultListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSTestResultListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTestResultListDialog::OnCancelHMSTestResultListDialog(){
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
int CHMSTestResultListDialog::OnHMSTestResultListDialogListLoadData(){
	return 0;
}
