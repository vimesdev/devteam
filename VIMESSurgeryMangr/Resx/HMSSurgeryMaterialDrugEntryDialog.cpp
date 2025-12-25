#include "HMSSurgeryMaterialDrugEntryDialog.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryMaterialDrugEntryDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnStockAddNew();
}*/
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnDrugListDeleteItem();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugEntryDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugEntryDialog *pVw = (CHMSSurgeryMaterialDrugEntryDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugEntryDialog *pVw = (CHMSSurgeryMaterialDrugEntryDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnApplyListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnApplyListLoadData();
} 
static void _OnApplyListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnApplyListDblClick();
} 
static void _OnApplyListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnApplyListSelectChange(nOldItem, nNewItem);
} 
static int _OnApplyListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnApplyListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugEntryDialog *pVw = (CHMSSurgeryMaterialDrugEntryDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugEntryDialog *pVw = (CHMSSurgeryMaterialDrugEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSurgeryMaterialDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnAddHMSSurgeryMaterialDrugEntryDialog();
} 
static int _OnEditHMSSurgeryMaterialDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnEditHMSSurgeryMaterialDrugEntryDialog();
} 
static int _OnDeleteHMSSurgeryMaterialDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnDeleteHMSSurgeryMaterialDrugEntryDialog();
} 
static int _OnSaveHMSSurgeryMaterialDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnSaveHMSSurgeryMaterialDrugEntryDialog();
} 
static int _OnCancelHMSSurgeryMaterialDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugEntryDialog*)pWnd)->OnCancelHMSSurgeryMaterialDrugEntryDialog();
} 
CHMSSurgeryMaterialDrugEntryDialog::CHMSSurgeryMaterialDrugEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 825;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSSurgeryMaterialDrugEntryDialog::~CHMSSurgeryMaterialDrugEntryDialog(){
}
void CHMSSurgeryMaterialDrugEntryDialog::OnCreateComponents(){
	m_wndMaterialDrug.Create(this, _T("Material && Drug"), 5, 5, 817, 565);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 90, 55);
	m_wndStock.Create(this,95, 30, 410, 55); 
	m_wndDrugList.Create(this,10, 60, 410, 560); 
	m_wndSearchNameLabel.Create(this, _T("Search For Name"), 10, 570, 125, 595);
	m_wndSearchName.Create(this,130, 570, 330, 595); 
	m_wndAdd.Create(this, _T("&Add >>"), 335, 570, 410, 595);
	m_wndRemove.Create(this, _T("<< &Remove"), 415, 570, 490, 595);
	m_wndApplyList.Create(this,415, 60, 815, 560); 
	m_wndApply.Create(this, _T("&Apply"), 664, 570, 739, 595);
	m_wndClose.Create(this, _T("&Close"), 744, 570, 819, 595);

}
void CHMSSurgeryMaterialDrugEntryDialog::OnInitializeComponents(){
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
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndDrugList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(4, _T("On Hand"), CFMT_NUMBER, 70);


	m_wndApplyList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndApplyList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 150);
	m_wndApplyList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndApplyList.InsertColumn(3, _T("Unit Price"), CFMT_TEXT, 80);
	m_wndApplyList.InsertColumn(4, _T("Quantity"), CFMT_TEXT, 70);

}
void CHMSSurgeryMaterialDrugEntryDialog::OnSetWindowEvents(){
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndApplyList.SetEvent(WE_SELCHANGE, _OnApplyListSelectChangeFnc);
	m_wndApplyList.SetEvent(WE_LOADDATA, _OnApplyListLoadDataFnc);
	m_wndApplyList.SetEvent(WE_DBLCLICK, _OnApplyListDblClickFnc);
	m_wndApplyList.AddEvent(1, _T("Delete"), _OnApplyListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSSurgeryMaterialDrugEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CHMSSurgeryMaterialDrugEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryMaterialDrugEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgeryMaterialDrugEntryDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szSearchName.Empty();

}
int CHMSSurgeryMaterialDrugEntryDialog::SetMode(int nMode){
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
void CHMSSurgeryMaterialDrugEntryDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugEntryDialog::OnStockSelendok(){
	 
}
/*void CHMSSurgeryMaterialDrugEntryDialog::OnStockSetfocus(){
	
}*/
/*void CHMSSurgeryMaterialDrugEntryDialog::OnStockKillfocus(){
	
}*/
long CHMSSurgeryMaterialDrugEntryDialog::OnStockLoadData(){
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
/*void CHMSSurgeryMaterialDrugEntryDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryMaterialDrugEntryDialog::OnDrugListDblClick(){
	
} 
void CHMSSurgeryMaterialDrugEntryDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryMaterialDrugEntryDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryMaterialDrugEntryDialog::OnDrugListLoadData(){
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
			rs.GetValue(_T("OnHand")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryMaterialDrugEntryDialog::OnSearchNameChange(){
	
} */
/*void CHMSSurgeryMaterialDrugEntryDialog::OnSearchNameSetfocus(){
	
} */
/*void CHMSSurgeryMaterialDrugEntryDialog::OnSearchNameKillfocus(){
	
} */
int CHMSSurgeryMaterialDrugEntryDialog::OnSearchNameCheckValue(){
	return 0;
} 
void CHMSSurgeryMaterialDrugEntryDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugEntryDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugEntryDialog::OnApplyListDblClick(){
	
} 
void CHMSSurgeryMaterialDrugEntryDialog::OnApplyListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryMaterialDrugEntryDialog::OnApplyListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryMaterialDrugEntryDialog::OnApplyListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndApplyList.BeginLoad(); 
	m_wndApplyList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndApplyList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Quantity")), NULL);
		rs.MoveNext();
	}
	m_wndApplyList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSSurgeryMaterialDrugEntryDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryMaterialDrugEntryDialog::OnAddHMSSurgeryMaterialDrugEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryMaterialDrugEntryDialog::OnEditHMSSurgeryMaterialDrugEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryMaterialDrugEntryDialog::OnDeleteHMSSurgeryMaterialDrugEntryDialog(){
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
 		OnCancelHMSSurgeryMaterialDrugEntryDialog(); 
 	}
	return 0;
}
int CHMSSurgeryMaterialDrugEntryDialog::OnSaveHMSSurgeryMaterialDrugEntryDialog(){
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
 		//OnHMSSurgeryMaterialDrugEntryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryMaterialDrugEntryDialog::OnCancelHMSSurgeryMaterialDrugEntryDialog(){
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
int CHMSSurgeryMaterialDrugEntryDialog::OnHMSSurgeryMaterialDrugEntryDialogListLoadData(){
	return 0;
}
