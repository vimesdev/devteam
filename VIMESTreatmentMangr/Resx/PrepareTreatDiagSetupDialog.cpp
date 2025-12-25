#include "PrepareTreatDiagSetupDialog.h"
#include "MainFrm.h"
static long _OnDiagListLoadDataFnc(CWnd *pWnd){
	return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnDiagListLoadData();
} 
static void _OnDiagListDblClickFnc(CWnd *pWnd){
	((CPrepareTreatDiagSetupDialog*)pWnd)->OnDiagListDblClick();
} 
static void _OnDiagListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPrepareTreatDiagSetupDialog*)pWnd)->OnDiagListSelectChange(nOldItem, nNewItem);
} 
static int _OnDiagListDeleteItemFnc(CWnd *pWnd){
	 return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnDiagListDeleteItem();
} 
static long _OnDugListLoadDataFnc(CWnd *pWnd){
	return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnDugListLoadData();
} 
static void _OnDugListDblClickFnc(CWnd *pWnd){
	((CPrepareTreatDiagSetupDialog*)pWnd)->OnDugListDblClick();
} 
static void _OnDugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPrepareTreatDiagSetupDialog*)pWnd)->OnDugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnDugListDeleteItem();
} 
static void _OnAddDiagramSelectFnc(CWnd *pWnd){
	CPrepareTreatDiagSetupDialog *pVw = (CPrepareTreatDiagSetupDialog *)pWnd;
	pVw->OnAddDiagramSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPrepareTreatDiagSetupDialog *pVw = (CPrepareTreatDiagSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPrepareTreatDiagSetupDialog *pVw = (CPrepareTreatDiagSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPrepareTreatDiagSetupDialog *pVw = (CPrepareTreatDiagSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPrepareTreatDiagSetupDialogFnc(CWnd *pWnd){
	 return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnAddPrepareTreatDiagSetupDialog();
} 
static int _OnEditPrepareTreatDiagSetupDialogFnc(CWnd *pWnd){
	 return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnEditPrepareTreatDiagSetupDialog();
} 
static int _OnDeletePrepareTreatDiagSetupDialogFnc(CWnd *pWnd){
	 return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnDeletePrepareTreatDiagSetupDialog();
} 
static int _OnSavePrepareTreatDiagSetupDialogFnc(CWnd *pWnd){
	 return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnSavePrepareTreatDiagSetupDialog();
} 
static int _OnCancelPrepareTreatDiagSetupDialogFnc(CWnd *pWnd){
	 return ((CPrepareTreatDiagSetupDialog*)pWnd)->OnCancelPrepareTreatDiagSetupDialog();
} 
CPrepareTreatDiagSetupDialog::CPrepareTreatDiagSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 455;
	SetDefaultValues();
}
CPrepareTreatDiagSetupDialog::~CPrepareTreatDiagSetupDialog(){
}
void CPrepareTreatDiagSetupDialog::OnCreateComponents(){
	m_wndDiagramList.Create(this, _T("Diagram List"), 5, 5, 250, 410);
	m_wndDrugInformation.Create(this, _T("Drug Information"), 255, 5, 960, 410);
	m_wndDiagList.Create(this,10, 30, 245, 405); 
	m_wndDugList.Create(this,260, 30, 955, 405); 
	m_wndAddDiagram.Create(this, _T("Add Diagram"), 5, 415, 131, 440);
	m_wndAdd.Create(this, _T("&Add"), 710, 415, 790, 440);
	m_wndDelete.Create(this, _T("&Delete"), 795, 415, 875, 440);
	m_wndClose.Create(this, _T("&Close"), 880, 415, 960, 440);

}
void CPrepareTreatDiagSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndDiagList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndDiagList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);


	m_wndDugList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndDugList.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 200);
	m_wndDugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndDugList.InsertColumn(3, _T("LD/m2"), CFMT_TEXT, 80);
	m_wndDugList.InsertColumn(4, _T("Dung môi"), CFMT_TEXT, 80);
	m_wndDugList.InsertColumn(5, _T("Th? tích(ml)"), CFMT_TEXT, 80);
	m_wndDugList.InsertColumn(6, _T("T/g s? d?ng"), CFMT_TEXT, 80);

}
void CPrepareTreatDiagSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiagList.SetEvent(WE_SELCHANGE, _OnDiagListSelectChangeFnc);
	m_wndDiagList.SetEvent(WE_LOADDATA, _OnDiagListLoadDataFnc);
	m_wndDiagList.SetEvent(WE_DBLCLICK, _OnDiagListDblClickFnc);
	m_wndDiagList.AddEvent(1, _T("Delete"), _OnDiagListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDugList.SetEvent(WE_SELCHANGE, _OnDugListSelectChangeFnc);
	m_wndDugList.SetEvent(WE_LOADDATA, _OnDugListLoadDataFnc);
	m_wndDugList.SetEvent(WE_DBLCLICK, _OnDugListDblClickFnc);
	m_wndDugList.AddEvent(1, _T("Delete"), _OnDugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddDiagram.SetEvent(WE_CLICK, _OnAddDiagramSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CPrepareTreatDiagSetupDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPrepareTreatDiagSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPrepareTreatDiagSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPrepareTreatDiagSetupDialog::SetDefaultValues(){


}
int CPrepareTreatDiagSetupDialog::SetMode(int nMode){
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
void CPrepareTreatDiagSetupDialog::OnDiagListDblClick(){
	
} 
void CPrepareTreatDiagSetupDialog::OnDiagListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPrepareTreatDiagSetupDialog::OnDiagListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPrepareTreatDiagSetupDialog::OnDiagListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDiagList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDiagList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPrepareTreatDiagSetupDialog::OnDugListDblClick(){
	
} 
void CPrepareTreatDiagSetupDialog::OnDugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPrepareTreatDiagSetupDialog::OnDugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPrepareTreatDiagSetupDialog::OnDugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDugList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDugList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DrugName")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("LD/m2")), 
			rs.GetValue(_T("Dungmôi")), 
			rs.GetValue(_T("Th?tích(ml)")), 
			rs.GetValue(_T("T/gs?d?ng")), NULL);
		rs.MoveNext();
	}
	m_wndDugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPrepareTreatDiagSetupDialog::OnAddDiagramSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareTreatDiagSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareTreatDiagSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareTreatDiagSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPrepareTreatDiagSetupDialog::OnAddPrepareTreatDiagSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPrepareTreatDiagSetupDialog::OnEditPrepareTreatDiagSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPrepareTreatDiagSetupDialog::OnDeletePrepareTreatDiagSetupDialog(){
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
 		OnCancelPrepareTreatDiagSetupDialog();
 	}
	return 0;
}
int CPrepareTreatDiagSetupDialog::OnSavePrepareTreatDiagSetupDialog(){
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
 		//OnPrepareTreatDiagSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPrepareTreatDiagSetupDialog::OnCancelPrepareTreatDiagSetupDialog(){
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
int CPrepareTreatDiagSetupDialog::OnPrepareTreatDiagSetupDialogListLoadData(){
	return 0;
}
