#include "CPOAutoEditQuantityDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCPOAutoEditQuantityDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCPOAutoEditQuantityDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCPOAutoEditQuantityDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCPOAutoEditQuantityDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCPOAutoEditQuantityDialog *pVw = (CCPOAutoEditQuantityDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CCPOAutoEditQuantityDialog*)pWnd)->OnAddCPOAutoEditQuantityDialog();
} 
static int _OnEditCPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CCPOAutoEditQuantityDialog*)pWnd)->OnEditCPOAutoEditQuantityDialog();
} 
static int _OnDeleteCPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CCPOAutoEditQuantityDialog*)pWnd)->OnDeleteCPOAutoEditQuantityDialog();
} 
static int _OnSaveCPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CCPOAutoEditQuantityDialog*)pWnd)->OnSaveCPOAutoEditQuantityDialog();
} 
static int _OnCancelCPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CCPOAutoEditQuantityDialog*)pWnd)->OnCancelCPOAutoEditQuantityDialog();
} 
CCPOAutoEditQuantityDialog::CCPOAutoEditQuantityDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CCPOAutoEditQuantityDialog::~CCPOAutoEditQuantityDialog(){
}
void CCPOAutoEditQuantityDialog::OnCreateComponents(){
	m_wndPatientUsageInformation.Create(this, _T("Patient usage information"), 5, 5, 600, 450);
	m_wndList.Create(this,10, 30, 595, 445); 
	m_wndClose.Create(this, _T("&Close"), 520, 455, 600, 480);

}
void CCPOAutoEditQuantityDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Doc No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(3, _T("Order ID"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(5, _T("Edited Quantity"), CFMT_NUMBER, 70);

}
void CCPOAutoEditQuantityDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CCPOAutoEditQuantityDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CCPOAutoEditQuantityDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCPOAutoEditQuantityDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCPOAutoEditQuantityDialog::SetDefaultValues(){


}
int CCPOAutoEditQuantityDialog::SetMode(int nMode){
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
void CCPOAutoEditQuantityDialog::OnListDblClick(){
	
} 
void CCPOAutoEditQuantityDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCPOAutoEditQuantityDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCPOAutoEditQuantityDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("OrderID")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("EditedQuantity")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCPOAutoEditQuantityDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCPOAutoEditQuantityDialog::OnAddCPOAutoEditQuantityDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCPOAutoEditQuantityDialog::OnEditCPOAutoEditQuantityDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCPOAutoEditQuantityDialog::OnDeleteCPOAutoEditQuantityDialog(){
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
 		OnCancelCPOAutoEditQuantityDialog();
 	}
	return 0;
}
int CCPOAutoEditQuantityDialog::OnSaveCPOAutoEditQuantityDialog(){
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
 		//OnCPOAutoEditQuantityDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCPOAutoEditQuantityDialog::OnCancelCPOAutoEditQuantityDialog(){
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
int CCPOAutoEditQuantityDialog::OnCPOAutoEditQuantityDialogListLoadData(){
	return 0;
}
