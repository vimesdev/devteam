#include "HMSSurgeryAddDialog.h"
#include "MainFrm.h"
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryAddDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryAddDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryAddDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryAddDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryAddDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryAddDialog *)pWnd)->OnNameAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgeryAddDialog *pVw = (CHMSSurgeryAddDialog *)pWnd;
	pVw->OnAddSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryAddDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryAddDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryAddDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryAddDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSSurgeryAddDialog *pVw = (CHMSSurgeryAddDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSurgeryAddDialog *pVw = (CHMSSurgeryAddDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSurgeryAddDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryAddDialog*)pWnd)->OnAddHMSSurgeryAddDialog();
} 
static int _OnEditHMSSurgeryAddDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryAddDialog*)pWnd)->OnEditHMSSurgeryAddDialog();
} 
static int _OnDeleteHMSSurgeryAddDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryAddDialog*)pWnd)->OnDeleteHMSSurgeryAddDialog();
} 
static int _OnSaveHMSSurgeryAddDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryAddDialog*)pWnd)->OnSaveHMSSurgeryAddDialog();
} 
static int _OnCancelHMSSurgeryAddDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryAddDialog*)pWnd)->OnCancelHMSSurgeryAddDialog();
} 
CHMSSurgeryAddDialog::CHMSSurgeryAddDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 515;
	m_nDlgHeight = 200;
	SetDefaultValues();
}
CHMSSurgeryAddDialog::~CHMSSurgeryAddDialog(){
}
void CHMSSurgeryAddDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 85, 30);
	m_wndName.Create(this,90, 5, 425, 30); 
	m_wndAdd.Create(this, _T("&Add"), 430, 5, 505, 30);
	m_wndList.Create(this,5, 35, 505, 160); 
	m_wndOK.Create(this, _T("&OK"), 350, 165, 425, 190);
	m_wndClose.Create(this, _T("&Close"), 430, 165, 505, 190);

}
void CHMSSurgeryAddDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_NUMBER, 85);

}
void CHMSSurgeryAddDialog::OnSetWindowEvents(){
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSSurgeryAddDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSSurgeryAddDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSSurgeryAddDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSSurgeryAddDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSSurgeryAddDialogFnc, 0, 'T', VK_CONTROL);

}
void CHMSSurgeryAddDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);

}
void CHMSSurgeryAddDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryAddDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgeryAddDialog::SetDefaultValues(){

	m_szNameKey.Empty();

}
int CHMSSurgeryAddDialog::SetMode(int nMode){
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
void CHMSSurgeryAddDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryAddDialog::OnNameSelendok(){
	 
}
/*void CHMSSurgeryAddDialog::OnNameSetfocus(){
	
}*/
/*void CHMSSurgeryAddDialog::OnNameKillfocus(){
	
}*/
long CHMSSurgeryAddDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryAddDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryAddDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryAddDialog::OnListDblClick(){
	
} 
void CHMSSurgeryAddDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryAddDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryAddDialog::OnListLoadData(){
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
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSSurgeryAddDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryAddDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryAddDialog::OnAddHMSSurgeryAddDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryAddDialog::OnEditHMSSurgeryAddDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryAddDialog::OnDeleteHMSSurgeryAddDialog(){
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
 		OnCancelHMSSurgeryAddDialog(); 
 	}
	return 0;
}
int CHMSSurgeryAddDialog::OnSaveHMSSurgeryAddDialog(){
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
 		//OnHMSSurgeryAddDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryAddDialog::OnCancelHMSSurgeryAddDialog(){
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
int CHMSSurgeryAddDialog::OnHMSSurgeryAddDialogListLoadData(){
	return 0;
}
