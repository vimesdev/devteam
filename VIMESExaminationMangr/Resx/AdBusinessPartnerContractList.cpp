#include "AdBusinessPartnerContractList.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnListDeleteItem();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractList*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractList*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnCreateContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnCreateContractSelect();
} 
static void _OnDeleteContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnDeleteContractSelect();
} 
static void _OnPrintContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnPrintContractSelect();
} 
static void _OnAddPatientSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnAddPatientSelect();
} 
static void _OnDeletePatientSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnDeletePatientSelect();
} 
static int _OnAddAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnAddAdBusinessPartnerContractList();
} 
static int _OnEditAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnEditAdBusinessPartnerContractList();
} 
static int _OnDeleteAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnDeleteAdBusinessPartnerContractList();
} 
static int _OnSaveAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnSaveAdBusinessPartnerContractList();
} 
static int _OnCancelAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnCancelAdBusinessPartnerContractList();
} 
CAdBusinessPartnerContractList::CAdBusinessPartnerContractList(){

	m_nDlgWidth = 905;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CAdBusinessPartnerContractList::~CAdBusinessPartnerContractList(){
}
void CAdBusinessPartnerContractList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 450, 285); 
	m_wndPatientList.Create(this,455, 5, 900, 285); 
	m_wndCreateContract.Create(this, _T("&Create Contract"), 7, 290, 127, 315);
	m_wndDeleteContract.Create(this, _T("&Delete Contract"), 132, 290, 252, 315);
	m_wndPrintContract.Create(this, _T("&Print Contract"), 257, 290, 377, 315);
	m_wndAddPatient.Create(this, _T("&Add Patient"), 655, 290, 775, 315);
	m_wndDeletePatient.Create(this, _T("&Delete Patient"), 780, 290, 900, 315);

}
void CAdBusinessPartnerContractList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Contract No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(3, _T("Description"), CFMT_TEXT, 100);


	m_wndPatientList.InsertColumn(0, _T("Patient No"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(2, _T("Birth Date"), CFMT_DATE, 90);
	m_wndPatientList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);

}
void CAdBusinessPartnerContractList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndCreateContract.SetEvent(WE_CLICK, _OnCreateContractSelectFnc);
	m_wndDeleteContract.SetEvent(WE_CLICK, _OnDeleteContractSelectFnc);
	m_wndPrintContract.SetEvent(WE_CLICK, _OnPrintContractSelectFnc);
	m_wndAddPatient.SetEvent(WE_CLICK, _OnAddPatientSelectFnc);
	m_wndDeletePatient.SetEvent(WE_CLICK, _OnDeletePatientSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdBusinessPartnerContractListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdBusinessPartnerContractListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdBusinessPartnerContractListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdBusinessPartnerContractListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdBusinessPartnerContractListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerContractList::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerContractList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdBusinessPartnerContractList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerContractList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerContractList::SetDefaultValues(){


}
int CAdBusinessPartnerContractList::SetMode(int nMode){
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
void CAdBusinessPartnerContractList::OnListDblClick(){
	
} 
void CAdBusinessPartnerContractList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerContractList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ContractNo")), 
			rs.GetValue(_T("Date")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdBusinessPartnerContractList::OnPatientListDblClick(){
	
} 
void CAdBusinessPartnerContractList::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractList::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerContractList::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("PatientNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("BirthDate")), 
			rs.GetValue(_T("Sex")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdBusinessPartnerContractList::OnCreateContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractList::OnDeleteContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractList::OnPrintContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractList::OnAddPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractList::OnDeletePatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractList::OnAddAdBusinessPartnerContractList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerContractList::OnEditAdBusinessPartnerContractList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerContractList::OnDeleteAdBusinessPartnerContractList(){
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
 		OnCancelAdBusinessPartnerContractList();
 	}
	return 0;
}
int CAdBusinessPartnerContractList::OnSaveAdBusinessPartnerContractList(){
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
 		//OnAdBusinessPartnerContractListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerContractList::OnCancelAdBusinessPartnerContractList(){
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
int CAdBusinessPartnerContractList::OnAdBusinessPartnerContractListListLoadData(){
	return 0;
}
