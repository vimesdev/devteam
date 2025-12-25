#include "PMSReturnDrugListDialog.h"
#include "MainFrm.h"
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnDrugListDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMSReturnDrugListDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSReturnDrugListDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMSReturnDrugListDialog *pVw = (CPMSReturnDrugListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSReturnDrugListDialog *pVw = (CPMSReturnDrugListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnAddPMSReturnDrugListDialog();
} 
static int _OnEditPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnEditPMSReturnDrugListDialog();
} 
static int _OnDeletePMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnDeletePMSReturnDrugListDialog();
} 
static int _OnSavePMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnSavePMSReturnDrugListDialog();
} 
static int _OnCancelPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnCancelPMSReturnDrugListDialog();
} 
CPMSReturnDrugListDialog::CPMSReturnDrugListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CPMSReturnDrugListDialog::~CPMSReturnDrugListDialog(){
}
void CPMSReturnDrugListDialog::OnCreateComponents(){
	m_wndDrugListGroup.Create(this, _T("Drug List"), 5, 5, 640, 450);
	m_wndDrugList.Create(this,10, 30, 635, 445); 
	m_wndApply.Create(this, _T("&Apply"), 475, 455, 555, 480);
	m_wndClose.Create(this, _T("&Close"), 560, 455, 640, 480);

}
void CPMSReturnDrugListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndDrugList.InsertColumn(0, _T("Drug Name"), CFMT_TEXT, 250);
	m_wndDrugList.InsertColumn(1, _T("Unit"), CFMT_TEXT, 80);
	m_wndDrugList.InsertColumn(2, _T("Order Qty"), CFMT_NUMBER, 70);
	m_wndDrugList.InsertColumn(3, _T("Return Qty"), CFMT_NUMBER, 70);

}
void CPMSReturnDrugListDialog::OnSetWindowEvents(){
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CPMSReturnDrugListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPMSReturnDrugListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSReturnDrugListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSReturnDrugListDialog::SetDefaultValues(){


}
int CPMSReturnDrugListDialog::SetMode(int nMode){
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
void CPMSReturnDrugListDialog::OnDrugListDblClick(){
	
} 
void CPMSReturnDrugListDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSReturnDrugListDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSReturnDrugListDialog::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	m_wndDrugList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
			rs.GetValue(_T("DrugName")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("OrderQty")), 
			rs.GetValue(_T("ReturnQty")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPMSReturnDrugListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnDrugListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSReturnDrugListDialog::OnAddPMSReturnDrugListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSReturnDrugListDialog::OnEditPMSReturnDrugListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSReturnDrugListDialog::OnDeletePMSReturnDrugListDialog(){
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
 		OnCancelPMSReturnDrugListDialog(); 
 	}
	return 0;
}
int CPMSReturnDrugListDialog::OnSavePMSReturnDrugListDialog(){
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
 		//OnPMSReturnDrugListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSReturnDrugListDialog::OnCancelPMSReturnDrugListDialog(){
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
int CPMSReturnDrugListDialog::OnPMSReturnDrugListDialogListLoadData(){
	return 0;
}
