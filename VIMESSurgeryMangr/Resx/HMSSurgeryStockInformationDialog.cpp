#include "HMSSurgeryStockInformationDialog.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryStockInformationDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryStockInformationDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog *)pWnd)->OnStockAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryStockInformationDialog *)pWnd)->OnSearchNameCheckValue();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryStockInformationDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryStockInformationDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryStockInformationDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryStockInformationDialog*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnAddHMSSurgeryStockInformationDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryStockInformationDialog*)pWnd)->OnAddHMSSurgeryStockInformationDialog();
} 
static int _OnEditHMSSurgeryStockInformationDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryStockInformationDialog*)pWnd)->OnEditHMSSurgeryStockInformationDialog();
} 
static int _OnDeleteHMSSurgeryStockInformationDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryStockInformationDialog*)pWnd)->OnDeleteHMSSurgeryStockInformationDialog();
} 
static int _OnSaveHMSSurgeryStockInformationDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryStockInformationDialog*)pWnd)->OnSaveHMSSurgeryStockInformationDialog();
} 
static int _OnCancelHMSSurgeryStockInformationDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryStockInformationDialog*)pWnd)->OnCancelHMSSurgeryStockInformationDialog();
} 
CHMSSurgeryStockInformationDialog::CHMSSurgeryStockInformationDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 825;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSSurgeryStockInformationDialog::~CHMSSurgeryStockInformationDialog(){
}
void CHMSSurgeryStockInformationDialog::OnCreateComponents(){
	m_wndStockInformation.Create(this, _T("Stock Information"), 5, 5, 795, 600);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 90, 55);
	m_wndStock.Create(this,95, 30, 410, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search For Name"), 418, 30, 533, 55);
	m_wndSearchName.Create(this,538, 30, 790, 55); 
	m_wndDrugList.Create(this,10, 60, 790, 595); 

}
void CHMSSurgeryStockInformationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDrugList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndDrugList.InsertColumn(1, _T("Name/ Cnt"), CFMT_TEXT, 150);
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndDrugList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(4, _T("On Hand"), CFMT_NUMBER, 70);
	m_wndDrugList.InsertColumn(5, _T("Made In"), CFMT_TEXT, 80);
	m_wndDrugList.InsertColumn(6, _T("Manufacture"), CFMT_TEXT, 100);
	m_wndDrugList.InsertColumn(7, _T("Expiry Date"), CFMT_DATE, 90);
	m_wndDrugList.InsertColumn(8, _T("Unpaid Surgery"), CFMT_TEXT, 90);

}
void CHMSSurgeryStockInformationDialog::OnSetWindowEvents(){
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);

}
void CHMSSurgeryStockInformationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CHMSSurgeryStockInformationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryStockInformationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgeryStockInformationDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szSearchName.Empty();

}
int CHMSSurgeryStockInformationDialog::SetMode(int nMode){
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
void CHMSSurgeryStockInformationDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryStockInformationDialog::OnStockSelendok(){
	 
}
/*void CHMSSurgeryStockInformationDialog::OnStockSetfocus(){
	
}*/
/*void CHMSSurgeryStockInformationDialog::OnStockKillfocus(){
	
}*/
long CHMSSurgeryStockInformationDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryStockInformationDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryStockInformationDialog::OnSearchNameChange(){
	
} */
/*void CHMSSurgeryStockInformationDialog::OnSearchNameSetfocus(){
	
} */
/*void CHMSSurgeryStockInformationDialog::OnSearchNameKillfocus(){
	
} */
int CHMSSurgeryStockInformationDialog::OnSearchNameCheckValue(){
	return 0;
} 
void CHMSSurgeryStockInformationDialog::OnDrugListDblClick(){
	
} 
void CHMSSurgeryStockInformationDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryStockInformationDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryStockInformationDialog::OnDrugListLoadData(){
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
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("OnHand")), 
			rs.GetValue(_T("MadeIn")), 
			rs.GetValue(_T("Manufacture")), 
			rs.GetValue(_T("ExpiryDate")), 
			rs.GetValue(_T("UnpaidSurgery")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSSurgeryStockInformationDialog::OnAddHMSSurgeryStockInformationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryStockInformationDialog::OnEditHMSSurgeryStockInformationDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryStockInformationDialog::OnDeleteHMSSurgeryStockInformationDialog(){
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
 		OnCancelHMSSurgeryStockInformationDialog(); 
 	}
	return 0;
}
int CHMSSurgeryStockInformationDialog::OnSaveHMSSurgeryStockInformationDialog(){
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
 		//OnHMSSurgeryStockInformationDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryStockInformationDialog::OnCancelHMSSurgeryStockInformationDialog(){
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
int CHMSSurgeryStockInformationDialog::OnHMSSurgeryStockInformationDialogListLoadData(){
	return 0;
}
