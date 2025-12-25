#include "HMSTestResultListDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestResultListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CLIMSTestResultListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestResultListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestResultListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnResultListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestResultListDialog*)pWnd)->OnResultListLoadData();
} 
static void _OnResultListDblClickFnc(CWnd *pWnd){
	((CLIMSTestResultListDialog*)pWnd)->OnResultListDblClick();
} 
static void _OnResultListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestResultListDialog*)pWnd)->OnResultListSelectChange(nOldItem, nNewItem);
} 
static int _OnResultListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestResultListDialog*)pWnd)->OnResultListDeleteItem();
} 
static void _OnEditResultSelectFnc(CWnd *pWnd){
	CLIMSTestResultListDialog *pVw = (CLIMSTestResultListDialog *)pWnd;
	pVw->OnEditResultSelect();
} 
static void _OnSyncPatientSelectFnc(CWnd *pWnd){
	CLIMSTestResultListDialog *pVw = (CLIMSTestResultListDialog *)pWnd;
	pVw->OnSyncPatientSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CLIMSTestResultListDialog *pVw = (CLIMSTestResultListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CLIMSTestResultListDialog*)pWnd)->OnAddHMSTestResultListDialog();
} 
static int _OnEditHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CLIMSTestResultListDialog*)pWnd)->OnEditHMSTestResultListDialog();
} 
static int _OnDeleteHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CLIMSTestResultListDialog*)pWnd)->OnDeleteHMSTestResultListDialog();
} 
static int _OnSaveHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CLIMSTestResultListDialog*)pWnd)->OnSaveHMSTestResultListDialog();
} 
static int _OnCancelHMSTestResultListDialogFnc(CWnd *pWnd){
	 return ((CLIMSTestResultListDialog*)pWnd)->OnCancelHMSTestResultListDialog();
} 
CLIMSTestResultListDialog::CLIMSTestResultListDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CLIMSTestResultListDialog::~CLIMSTestResultListDialog(){
}
void CLIMSTestResultListDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 430, 570);
	m_wndResultInformation.Create(this, _T("Result Information"), 435, 5, 798, 570);
	m_wndPatientList.Create(this,10, 25, 425, 565); 
	m_wndResultList.Create(this,440, 25, 795, 565); 
	m_wndEditResult.Create(this, _T("&Edit Result"), 546, 574, 626, 598);
	m_wndSyncPatient.Create(this, _T("&Sync Patient"), 634, 573, 714, 597);
	m_wndClose.Create(this, _T("&Close"), 719, 573, 799, 597);

}
void CLIMSTestResultListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);
	m_wndPatientList.InsertColumn(0, _T("PID"), CFMT_TEXT|CFMT_RIGHT, 70);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndPatientList.InsertColumn(3, _T("Age"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(5, _T("Tray"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(6, _T("Cup"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(7, _T("Rack No"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(8, _T("OrderID"), CFMT_NUMBER, 0);


	m_wndResultList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndResultList.InsertColumn(1, _T("Test ID"), CFMT_TEXT, 70);
	m_wndResultList.InsertColumn(2, _T("Test Name"), CFMT_TEXT, 140);
	m_wndResultList.InsertColumn(3, _T("Result"), CFMT_TEXT|CFMT_RIGHT, 80);
	OnPatientListLoadData();

}
void CLIMSTestResultListDialog::OnSetWindowEvents(){
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
void CLIMSTestResultListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSTestResultListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSTestResultListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSTestResultListDialog::SetDefaultValues(){


}
int CLIMSTestResultListDialog::SetMode(int nMode){ 
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
void CLIMSTestResultListDialog::OnPatientListDblClick(){
	
} 
void CLIMSTestResultListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderID = ToLong(m_wndPatientList.GetItemText(nNewItem, 8));
	OnResultListLoadData();
} 
int CLIMSTestResultListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestResultListDialog::OnPatientListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	m_wndPatientList.BeginLoad(); 

	int nCount = 0;
//	szSQL.Format(_T("SELECT * FROM lims_order WHERE limso_instid=%d AND limso_typeid='%s' AND date(limso_performdate) = current_date  AND limso_status <> 'O' ORDER BY limso_oid "), m_nInstrumentID, pMF->m_wndPatientList.m_szTypeKey);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("limso_status"), szStatus);
		m_wndPatientList.AddItems(
			rs.GetValue(_T("limso_pid")), 
			rs.GetValue(_T("limso_docno")), 
			rs.GetValue(_T("limso_pname")), 
			rs.GetValue(_T("limso_age")), 
			rs.GetValue(_T("limso_sex")), 
			rs.GetValue(_T("limso_tray")), 
			rs.GetValue(_T("limso_cup")), 
			rs.GetValue(_T("limso_rack")), 
			rs.GetValue(_T("limso_oid")), 
			NULL);
		if(szStatus == _T("T")){
			m_wndPatientList.SetItemBkColor(m_wndPatientList.GetItemCount()-1, RGB(240, 240, 240));
			m_wndPatientList.SetItemTextColor(m_wndPatientList.GetItemCount()-1, RGB(0, 0, 255));
		}
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;

}
void CLIMSTestResultListDialog::OnResultListDblClick(){
	
} 
void CLIMSTestResultListDialog::OnResultListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestResultListDialog::OnResultListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestResultListDialog::OnResultListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndResultList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT limsr_index, limsr_code, limsid_name, limsr_result \
		FROM lims_instrument_data \
		LEFT JOIN lims_result ON(limsr_code=limsid_code)  \
		WHERE limsid_instid=%d and limsr_oid=%ld and limsr_index > 0"), 
		m_nInstrumentID, m_nOrderID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResultList.AddItems(
			rs.GetValue(_T("limsr_index")), 
			rs.GetValue(_T("limsr_code")), 
			rs.GetValue(_T("limsid_name")), 
			rs.GetValue(_T("limsr_result")), NULL);
		rs.MoveNext();
	}
	m_wndResultList.EndLoad(); 
	return nCount;

}
void CLIMSTestResultListDialog::OnEditResultSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSTestResultListDialog::OnSyncPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSTestResultListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestResultListDialog::OnAddHMSTestResultListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTestResultListDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CLIMSTestResultListDialog::OnEditHMSTestResultListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTestResultListDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CLIMSTestResultListDialog::OnDeleteHMSTestResultListDialog(){
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
int CLIMSTestResultListDialog::OnSaveHMSTestResultListDialog(){
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
int CLIMSTestResultListDialog::OnCancelHMSTestResultListDialog(){
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
int CLIMSTestResultListDialog::OnHMSTestResultListDialogListLoadData(){
	return 0;
}
