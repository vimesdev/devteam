#include "HMSMedicalCabinetDrugList.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetDrugList* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugList *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList *)pWnd)->OnStockAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugList *)pWnd)->OnNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMedicalCabinetDrugList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSMedicalCabinetDrugListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugList*)pWnd)->OnAddHMSMedicalCabinetDrugList();
} 
static int _OnEditHMSMedicalCabinetDrugListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugList*)pWnd)->OnEditHMSMedicalCabinetDrugList();
} 
static int _OnDeleteHMSMedicalCabinetDrugListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugList*)pWnd)->OnDeleteHMSMedicalCabinetDrugList();
} 
static int _OnSaveHMSMedicalCabinetDrugListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugList*)pWnd)->OnSaveHMSMedicalCabinetDrugList();
} 
static int _OnCancelHMSMedicalCabinetDrugListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugList*)pWnd)->OnCancelHMSMedicalCabinetDrugList();
} 
CHMSMedicalCabinetDrugList::CHMSMedicalCabinetDrugList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSMedicalCabinetDrugList::~CHMSMedicalCabinetDrugList(){
}
void CHMSMedicalCabinetDrugList::OnCreateComponents(){
	m_wndStockInventory.Create(this, _T("Stock Inventory"), 5, 5, 795, 595);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 90, 55);
	m_wndStock.Create(this,95, 30, 295, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 298, 30, 378, 55);
	m_wndName.Create(this,383, 30, 583, 55); 
	m_wndList.Create(this,10, 60, 790, 590); 

}
void CHMSMedicalCabinetDrugList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(5, _T("Expiry"), CFMT_DATE, 85);
	m_wndList.InsertColumn(6, _T("Product country"), CFMT_TEXT, 100);

}
void CHMSMedicalCabinetDrugList::OnSetWindowEvents(){
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSMedicalCabinetDrugListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSMedicalCabinetDrugListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSMedicalCabinetDrugListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSMedicalCabinetDrugListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSMedicalCabinetDrugListFnc, 0, 'T', VK_CONTROL);

}
void CHMSMedicalCabinetDrugList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSMedicalCabinetDrugList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinetDrugList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMedicalCabinetDrugList::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szName.Empty();

}
int CHMSMedicalCabinetDrugList::SetMode(int nMode){
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
void CHMSMedicalCabinetDrugList::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrugList::OnStockSelendok(){
	 
}
/*void CHMSMedicalCabinetDrugList::OnStockSetfocus(){
	
}*/
/*void CHMSMedicalCabinetDrugList::OnStockKillfocus(){
	
}*/
long CHMSMedicalCabinetDrugList::OnStockLoadData(){
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
/*void CHMSMedicalCabinetDrugList::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetDrugList::OnNameChange(){
	
} */
/*void CHMSMedicalCabinetDrugList::OnNameSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugList::OnNameKillfocus(){
	
} */
int CHMSMedicalCabinetDrugList::OnNameCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetDrugList::OnListDblClick(){
	
} 
void CHMSMedicalCabinetDrugList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetDrugList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMedicalCabinetDrugList::OnListLoadData(){
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
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("GenericName")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Expiry")), 
			rs.GetValue(_T("Productcountry")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSMedicalCabinetDrugList::OnAddHMSMedicalCabinetDrugList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMedicalCabinetDrugList::OnEditHMSMedicalCabinetDrugList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMedicalCabinetDrugList::OnDeleteHMSMedicalCabinetDrugList(){
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
 		OnCancelHMSMedicalCabinetDrugList(); 
 	}
	return 0;
}
int CHMSMedicalCabinetDrugList::OnSaveHMSMedicalCabinetDrugList(){
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
 		//OnHMSMedicalCabinetDrugListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMedicalCabinetDrugList::OnCancelHMSMedicalCabinetDrugList(){
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
int CHMSMedicalCabinetDrugList::OnHMSMedicalCabinetDrugListListLoadData(){
	return 0;
}
