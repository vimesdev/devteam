#include "VIMESSetupList.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnSearchChangeFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnSearchChange();
} */
/*static int _OnSearchSetfocusFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnSearchKillfocus();} */ 
/*static int _OnSearchKillfocusFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnSearchCheckValue();
} 
static int _OnItemListLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnItemListLoadData();
} 
static int _OnItemListDblClickFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnItemListDblClick();
} 
static int _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CVIMESSetupList*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnItemListDeleteItem();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnIDCheckValue();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSetupList *)pWnd)->OnNameCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESSetupList *pVw = (CVIMESSetupList *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnListDblClick();
} 
static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CVIMESSetupList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESSetupList*)pWnd)->OnListDeleteItem();
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

	m_nDlgWidth = 585;
	m_nDlgHeight = 460;
	SetDefaultValues();
}
CVIMESSetupList::~CVIMESSetupList(){
}
void CVIMESSetupList::OnCreateComponents(){
	m_wndItemInformation.Create(this, _T("Item Information"), 296, 5, 578, 353);
	m_wndSearchLabel.Create(this, _T("&Search"), 301, 26, 342, 48);
	m_wndSearch.Create(this,348, 25, 573, 47); 
	m_wndItemList.Create(this,302, 52, 574, 348); 
	m_wndDetails.Create(this, _T("Details"), 296, 358, 578, 430);
	m_wndIDLabel.Create(this, _T("ID"), 301, 377, 342, 399);
	m_wndID.Create(this,347, 377, 418, 399); 
	m_wndNameLabel.Create(this, _T("Name"), 301, 404, 342, 426);
	m_wndName.Create(this,347, 404, 574, 426); 
	m_wndAdd.Create(this, _T("&Add"), 298, 435, 350, 457);
	m_wndEdit.Create(this, _T("&Edit"), 355, 435, 407, 457);
	m_wndDelete.Create(this, _T("&Delete"), 412, 435, 464, 457);
	m_wndSave.Create(this, _T("&Save"), 469, 435, 521, 457);
	m_wndCancel.Create(this, _T("&Cancel"), 526, 435, 578, 457);
	m_wndSetupListInformation.Create(this, _T("Setup Lists"), 5, 5, 291, 455);
	m_wndList.Create(this,10, 24, 286, 450); 

}
void CVIMESSetupList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearch.SetLimitText(25);
	m_wndSearch.SetDataRequirement(TRUE);
	m_wndID.SetLimitText(10);
	m_wndID.SetDataRequirement(TRUE);
	m_wndName.SetLimitText(81);
	m_wndName.SetDataRequirement(TRUE);


	m_wndItemList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndItemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);

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

}
void CVIMESSetupList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESSetupList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESSetupList::SetDefaultValues(){

	m_szSearch.Empty();
	m_nID=0;
	m_szName.Empty();

}
/*int CVIMESSetupList::OnSearchChange(){
	return 0;
} */
/*int CVIMESSetupList::OnSearchSetfocus(){
	return 0;
} */
/*int CVIMESSetupList::OnSearchKillfocus(){
	return 0;
} */
int CVIMESSetupList::OnSearchCheckValue(){
	return 0;
} 
int CVIMESSetupList::OnItemListDblClick(){
	 return 0;
} 
int CVIMESSetupList::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnItemListLoadData(){
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
/*int CVIMESSetupList::OnIDChange(){
	return 0;
} */
/*int CVIMESSetupList::OnIDSetfocus(){
	return 0;
} */
/*int CVIMESSetupList::OnIDKillfocus(){
	return 0;
} */
int CVIMESSetupList::OnIDCheckValue(){
	return 0;
} 
/*int CVIMESSetupList::OnNameChange(){
	return 0;
} */
/*int CVIMESSetupList::OnNameSetfocus(){
	return 0;
} */
/*int CVIMESSetupList::OnNameKillfocus(){
	return 0;
} */
int CVIMESSetupList::OnNameCheckValue(){
	return 0;
} 
int CVIMESSetupList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnListDblClick(){
	 return 0;
} 
int CVIMESSetupList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESSetupList::OnListLoadData(){
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
int CVIMESSetupList::OnAddVIMESSetupList(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add VIMESSetupList"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CVIMESSetupList::OnEditVIMESSetupList(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit VIMESSetupList"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CVIMESSetupList::OnDeleteVIMESSetupList(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelVIMESSetupList(); 
 		OnVIMESSetupListLoadData(); 
 	} */ return 0;
 } 
int CVIMESSetupList::OnSaveVIMESSetupList(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("VIMESSetupList"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?N??ListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CVIMESSetupList::OnCancelVIMESSetupList(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
