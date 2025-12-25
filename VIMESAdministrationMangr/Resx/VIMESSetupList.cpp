#include "VIMESSetupList.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnSearchCheckValue();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESSetupList*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CVIMESSetupList*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESSetupList*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnItemListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESSetupList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVIMESSetupList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESSetupList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFindChangeFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnFindChange();
} */
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CVIMESSetupList *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnFindCheckValue();
} 
static int _OnAddVIMESSetupListFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnAddVIMESSetupList();
} 
static int _OnEditVIMESSetupListFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnEditVIMESSetupList();
} 
static int _OnDeleteVIMESSetupListFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnDeleteVIMESSetupList();
} 
static int _OnSaveVIMESSetupListFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnSaveVIMESSetupList();
} 
static int _OnCancelVIMESSetupListFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnCancelVIMESSetupList();
} 
CVIMESSetupList::CVIMESSetupList(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CVIMESSetupList::~CVIMESSetupList(){
}
void CVIMESSetupList::OnCreateComponents(){
	m_wndItemInformation.Create(this, _T("Item Information"), 360, 5, 805, 580);
	m_wndSetupListInformation.Create(this, _T("Setup Lists"), 5, 5, 355, 610);
	m_wndSearchLabel.Create(this, _T("&Search"), 365, 30, 430, 55);
	m_wndSearch.Create(this,437, 30, 802, 55); 
	m_wndItemList.Create(this,365, 60, 800, 545); 
	m_wndIDLabel.Create(this, _T("ID"), 365, 550, 425, 575);
	m_wndID.Create(this,430, 550, 500, 575); 
	m_wndNameLabel.Create(this, _T("Name"), 505, 550, 565, 575);
	m_wndName.Create(this,570, 550, 799, 575); 
	m_wndAdd.Create(this, _T("&Add"), 410, 585, 485, 610);
	m_wndEdit.Create(this, _T("&Edit"), 490, 585, 565, 610);
	m_wndDelete.Create(this, _T("&Delete"), 570, 585, 645, 610);
	m_wndSave.Create(this, _T("&Save"), 650, 585, 725, 610);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 585, 805, 610);
	m_wndList.Create(this,10, 60, 350, 605); 
	m_wndFindLabel.Create(this, _T("&Find"), 10, 30, 90, 55);
	m_wndFind.Create(this,95, 30, 350, 55); 

}
void CVIMESSetupList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearch.SetLimitText(25);
	m_wndSearch.SetCheckValue(true);
	m_wndID.SetLimitText(10);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndFind.SetLimitText(35);
	m_wndFind.SetCheckValue(true);


	m_wndItemList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndItemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);
	m_vimes_selTbl.SetTableName(_T("vimes_sel"));
	m_vimes_selTbl.AddField(_T("vms_id"), dfText, 35); 
	m_vimes_selTbl.AddField(_T("vms_code"), dfText, 15); 
	m_vimes_selTbl.AddField(_T("vms_desc"), dfText, 81); 
	m_vimes_selTbl.AddField(_T("vms_note"), dfText, 254); 
	m_vimes_selTbl.AddField(_T("vms_default"), dfText, 1); 

}
void CVIMESSetupList::OnSetWindowEvents(){
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESSetupListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESSetupListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESSetupListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESSetupListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESSetupListFnc, 0, 'T', VK_CONTROL);

}
void CVIMESSetupList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);

}
void CVIMESSetupList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESSetupList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESSetupList::SetDefaultValues(){

	m_szSearch.Empty();
	m_nID=0;
	m_szName.Empty();
	m_szFind.Empty();

}
int CVIMESSetupList::SetMode(int nMode){
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
/*void CVIMESSetupList::OnSearchChange(){
	
} */
/*void CVIMESSetupList::OnSearchSetfocus(){
	
} */
/*void CVIMESSetupList::OnSearchKillfocus(){
	
} */
int CVIMESSetupList::OnSearchCheckValue(){
	return 0;
} 
void CVIMESSetupList::OnItemListDblClick(){
	
} 
void CVIMESSetupList::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESSetupList::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESSetupList::OnItemListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	m_wndItemList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CVIMESSetupList::OnIDChange(){
	
} */
/*void CVIMESSetupList::OnIDSetfocus(){
	
} */
/*void CVIMESSetupList::OnIDKillfocus(){
	
} */
int CVIMESSetupList::OnIDCheckValue(){
	return 0;
} 
/*void CVIMESSetupList::OnNameChange(){
	
} */
/*void CVIMESSetupList::OnNameSetfocus(){
	
} */
/*void CVIMESSetupList::OnNameKillfocus(){
	
} */
int CVIMESSetupList::OnNameCheckValue(){
	return 0;
} 
void CVIMESSetupList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESSetupList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESSetupList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESSetupList::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESSetupList::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESSetupList::OnListDblClick(){
	
} 
void CVIMESSetupList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESSetupList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESSetupList::OnListLoadData(){
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
			rs.GetValue(_T("Desc")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CVIMESSetupList::OnFindChange(){
	
} */
/*void CVIMESSetupList::OnFindSetfocus(){
	
} */
/*void CVIMESSetupList::OnFindKillfocus(){
	
} */
int CVIMESSetupList::OnFindCheckValue(){
	return 0;
} 
int CVIMESSetupList::OnAddVIMESSetupList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESSetupList::OnEditVIMESSetupList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESSetupList::OnDeleteVIMESSetupList(){
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
 		OnCancelVIMESSetupList(); 
 	}
	return 0;
}
int CVIMESSetupList::OnSaveVIMESSetupList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_vimes_selTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_vimes_selTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESSetupListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESSetupList::OnCancelVIMESSetupList(){
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
int CVIMESSetupList::OnVIMESSetupListListLoadData(){
	return 0;
}
