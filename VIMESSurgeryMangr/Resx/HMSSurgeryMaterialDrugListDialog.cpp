#include "HMSSurgeryMaterialDrugListDialog.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryMaterialDrugListDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnStockAddNew();
}*/
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnDrugListDeleteItem();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugListDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugListDialog *pVw = (CHMSSurgeryMaterialDrugListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugListDialog *pVw = (CHMSSurgeryMaterialDrugListDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnApplyListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnApplyListLoadData();
} 
static void _OnApplyListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnApplyListDblClick();
} 
static void _OnApplyListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnApplyListSelectChange(nOldItem, nNewItem);
} 
static int _OnApplyListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnApplyListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugListDialog *pVw = (CHMSSurgeryMaterialDrugListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugListDialog *pVw = (CHMSSurgeryMaterialDrugListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSurgeryMaterialDrugListDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnAddHMSSurgeryMaterialDrugListDialog();
} 
static int _OnEditHMSSurgeryMaterialDrugListDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnEditHMSSurgeryMaterialDrugListDialog();
} 
static int _OnDeleteHMSSurgeryMaterialDrugListDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnDeleteHMSSurgeryMaterialDrugListDialog();
} 
static int _OnSaveHMSSurgeryMaterialDrugListDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnSaveHMSSurgeryMaterialDrugListDialog();
} 
static int _OnCancelHMSSurgeryMaterialDrugListDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugListDialog*)pWnd)->OnCancelHMSSurgeryMaterialDrugListDialog();
} 
CHMSSurgeryMaterialDrugListDialog::CHMSSurgeryMaterialDrugListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 825;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSSurgeryMaterialDrugListDialog::~CHMSSurgeryMaterialDrugListDialog(){
}
void CHMSSurgeryMaterialDrugListDialog::OnCreateComponents(){
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
void CHMSSurgeryMaterialDrugListDialog::OnInitializeComponents(){
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
void CHMSSurgeryMaterialDrugListDialog::OnSetWindowEvents(){
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
void CHMSSurgeryMaterialDrugListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CHMSSurgeryMaterialDrugListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryMaterialDrugListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgeryMaterialDrugListDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szSearchName.Empty();

}
int CHMSSurgeryMaterialDrugListDialog::SetMode(int nMode){
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
void CHMSSurgeryMaterialDrugListDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugListDialog::OnStockSelendok(){
	 
}
/*void CHMSSurgeryMaterialDrugListDialog::OnStockSetfocus(){
	
}*/
/*void CHMSSurgeryMaterialDrugListDialog::OnStockKillfocus(){
	
}*/
long CHMSSurgeryMaterialDrugListDialog::OnStockLoadData(){
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
/*void CHMSSurgeryMaterialDrugListDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryMaterialDrugListDialog::OnDrugListDblClick(){
	
} 
void CHMSSurgeryMaterialDrugListDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryMaterialDrugListDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryMaterialDrugListDialog::OnDrugListLoadData(){
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
/*void CHMSSurgeryMaterialDrugListDialog::OnSearchNameChange(){
	
} */
/*void CHMSSurgeryMaterialDrugListDialog::OnSearchNameSetfocus(){
	
} */
/*void CHMSSurgeryMaterialDrugListDialog::OnSearchNameKillfocus(){
	
} */
int CHMSSurgeryMaterialDrugListDialog::OnSearchNameCheckValue(){
	return 0;
} 
void CHMSSurgeryMaterialDrugListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugListDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugListDialog::OnApplyListDblClick(){
	
} 
void CHMSSurgeryMaterialDrugListDialog::OnApplyListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryMaterialDrugListDialog::OnApplyListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryMaterialDrugListDialog::OnApplyListLoadData(){
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
void CHMSSurgeryMaterialDrugListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryMaterialDrugListDialog::OnAddHMSSurgeryMaterialDrugListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryMaterialDrugListDialog::OnEditHMSSurgeryMaterialDrugListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryMaterialDrugListDialog::OnDeleteHMSSurgeryMaterialDrugListDialog(){
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
 		OnCancelHMSSurgeryMaterialDrugListDialog(); 
 	}
	return 0;
}
int CHMSSurgeryMaterialDrugListDialog::OnSaveHMSSurgeryMaterialDrugListDialog(){
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
 		//OnHMSSurgeryMaterialDrugListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryMaterialDrugListDialog::OnCancelHMSSurgeryMaterialDrugListDialog(){
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
int CHMSSurgeryMaterialDrugListDialog::OnHMSSurgeryMaterialDrugListDialogListLoadData(){
	return 0;
}
