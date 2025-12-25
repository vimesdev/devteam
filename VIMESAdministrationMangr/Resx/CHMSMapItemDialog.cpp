#include "CHMSMapItemDialog.h"
#include "MainFrm.h"
static void _OnOldGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSMapItemDialog* )pWnd)->OnOldGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOldGroupSelendokFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnOldGroupSelendok();
}
/*static void _OnOldGroupSetfocusFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnOldGroupKillfocus();
}*/
/*static void _OnOldGroupKillfocusFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnOldGroupKillfocus();
}*/
static long _OnOldGroupLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMapItemDialog *)pWnd)->OnOldGroupLoadData();
}
/*static void _OnOldGroupAddNewFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnOldGroupAddNew();
}*/
static void _OnNewGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSMapItemDialog* )pWnd)->OnNewGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNewGroupSelendokFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnNewGroupSelendok();
}
/*static void _OnNewGroupSetfocusFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnNewGroupKillfocus();
}*/
/*static void _OnNewGroupKillfocusFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnNewGroupKillfocus();
}*/
static long _OnNewGroupLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMapItemDialog *)pWnd)->OnNewGroupLoadData();
}
/*static void _OnNewGroupAddNewFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnNewGroupAddNew();
}*/
static void _OnMapItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSMapItemDialog* )pWnd)->OnMapItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMapItemSelendokFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnMapItemSelendok();
}
/*static void _OnMapItemSetfocusFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnMapItemKillfocus();
}*/
/*static void _OnMapItemKillfocusFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnMapItemKillfocus();
}*/
static long _OnMapItemLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMapItemDialog *)pWnd)->OnMapItemLoadData();
}
/*static void _OnMapItemAddNewFnc(CWnd *pWnd){
	((CCHMSMapItemDialog *)pWnd)->OnMapItemAddNew();
}*/
static void _OnMapSelectFnc(CWnd *pWnd){
	CCHMSMapItemDialog *pVw = (CCHMSMapItemDialog *)pWnd;
	pVw->OnMapSelect();
} 
static long _OnOldListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMapItemDialog*)pWnd)->OnOldListLoadData();
} 
static void _OnOldListDblClickFnc(CWnd *pWnd){
	((CCHMSMapItemDialog*)pWnd)->OnOldListDblClick();
} 
static void _OnOldListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSMapItemDialog*)pWnd)->OnOldListSelectChange(nOldItem, nNewItem);
} 
static int _OnOldListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSMapItemDialog*)pWnd)->OnOldListDeleteItem();
} 
static long _OnMapListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMapItemDialog*)pWnd)->OnMapListLoadData();
} 
static void _OnMapListDblClickFnc(CWnd *pWnd){
	((CCHMSMapItemDialog*)pWnd)->OnMapListDblClick();
} 
static void _OnMapListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSMapItemDialog*)pWnd)->OnMapListSelectChange(nOldItem, nNewItem);
} 
static int _OnMapListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSMapItemDialog*)pWnd)->OnMapListDeleteItem();
} 
static int _OnAddCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CCHMSMapItemDialog*)pWnd)->OnAddCHMSMapItemDialog();
} 
static int _OnEditCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CCHMSMapItemDialog*)pWnd)->OnEditCHMSMapItemDialog();
} 
static int _OnDeleteCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CCHMSMapItemDialog*)pWnd)->OnDeleteCHMSMapItemDialog();
} 
static int _OnSaveCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CCHMSMapItemDialog*)pWnd)->OnSaveCHMSMapItemDialog();
} 
static int _OnCancelCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CCHMSMapItemDialog*)pWnd)->OnCancelCHMSMapItemDialog();
} 
CCHMSMapItemDialog::CCHMSMapItemDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSMapItemDialog::~CCHMSMapItemDialog(){
}
void CCHMSMapItemDialog::OnCreateComponents(){
	m_wndOldGroupLabel.Create(this, _T("Old Group"), 5, 5, 85, 30);
	m_wndOldGroup.Create(this,90, 5, 400, 30); 
	m_wndNewGroupLabel.Create(this, _T("New Group"), 405, 5, 485, 30);
	m_wndNewGroup.Create(this,490, 5, 617, 30); 
	m_wndMapItemLabel.Create(this, _T("Map Item"), 622, 5, 704, 30);
	m_wndMapItem.Create(this,709, 5, 941, 30); 
	m_wndMap.Create(this, _T("&Map"), 946, 5, 1026, 30);
	m_wndOldList.Create(this,5, 35, 400, 655); 
	m_wndMapList.Create(this,405, 35, 1025, 655); 

}
void CCHMSMapItemDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldGroup.SetCheckValue(true);
	m_wndOldGroup.LimitText(35);
	m_wndNewGroup.SetCheckValue(true);
	m_wndNewGroup.LimitText(35);
	m_wndMapItem.SetCheckValue(true);
	m_wndMapItem.LimitText(35);


	m_wndOldGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOldGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNewGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNewGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMapItem.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMapItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOldList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndOldList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndOldList.InsertColumn(2, _T("Group"), CFMT_TEXT, 100);


	m_wndMapList.InsertColumn(0, _T("Old Name"), CFMT_TEXT, 300);
	m_wndMapList.InsertColumn(1, _T("New Name"), CFMT_TEXT, 300);

}
void CCHMSMapItemDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldGroup.SetEvent(WE_SELENDOK, _OnOldGroupSelendokFnc);
	//m_wndOldGroup.SetEvent(WE_SETFOCUS, _OnOldGroupSetfocusFnc);
	//m_wndOldGroup.SetEvent(WE_KILLFOCUS, _OnOldGroupKillfocusFnc);
	m_wndOldGroup.SetEvent(WE_SELCHANGE, _OnOldGroupSelectChangeFnc);
	m_wndOldGroup.SetEvent(WE_LOADDATA, _OnOldGroupLoadDataFnc);
	//m_wndOldGroup.SetEvent(WE_ADDNEW, _OnOldGroupAddNewFnc);
	m_wndNewGroup.SetEvent(WE_SELENDOK, _OnNewGroupSelendokFnc);
	//m_wndNewGroup.SetEvent(WE_SETFOCUS, _OnNewGroupSetfocusFnc);
	//m_wndNewGroup.SetEvent(WE_KILLFOCUS, _OnNewGroupKillfocusFnc);
	m_wndNewGroup.SetEvent(WE_SELCHANGE, _OnNewGroupSelectChangeFnc);
	m_wndNewGroup.SetEvent(WE_LOADDATA, _OnNewGroupLoadDataFnc);
	//m_wndNewGroup.SetEvent(WE_ADDNEW, _OnNewGroupAddNewFnc);
	m_wndMapItem.SetEvent(WE_SELENDOK, _OnMapItemSelendokFnc);
	//m_wndMapItem.SetEvent(WE_SETFOCUS, _OnMapItemSetfocusFnc);
	//m_wndMapItem.SetEvent(WE_KILLFOCUS, _OnMapItemKillfocusFnc);
	m_wndMapItem.SetEvent(WE_SELCHANGE, _OnMapItemSelectChangeFnc);
	m_wndMapItem.SetEvent(WE_LOADDATA, _OnMapItemLoadDataFnc);
	//m_wndMapItem.SetEvent(WE_ADDNEW, _OnMapItemAddNewFnc);
	m_wndMap.SetEvent(WE_CLICK, _OnMapSelectFnc);
	m_wndOldList.SetEvent(WE_SELCHANGE, _OnOldListSelectChangeFnc);
	m_wndOldList.SetEvent(WE_LOADDATA, _OnOldListLoadDataFnc);
	m_wndOldList.SetEvent(WE_DBLCLICK, _OnOldListDblClickFnc);
	m_wndOldList.AddEvent(1, _T("Delete"), _OnOldListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMapList.SetEvent(WE_SELCHANGE, _OnMapListSelectChangeFnc);
	m_wndMapList.SetEvent(WE_LOADDATA, _OnMapListLoadDataFnc);
	m_wndMapList.SetEvent(WE_DBLCLICK, _OnMapListDblClickFnc);
	m_wndMapList.AddEvent(1, _T("Delete"), _OnMapListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CCHMSMapItemDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOldGroup.GetDlgCtrlID(), m_szOldGroupKey);
	DDX_TextEx(pDX, m_wndNewGroup.GetDlgCtrlID(), m_szNewGroupKey);
	DDX_TextEx(pDX, m_wndMapItem.GetDlgCtrlID(), m_szMapItemKey);

}
void CCHMSMapItemDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSMapItemDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSMapItemDialog::SetDefaultValues(){

	m_szOldGroupKey.Empty();
	m_szNewGroupKey.Empty();
	m_szMapItemKey.Empty();

}
int CCHMSMapItemDialog::SetMode(int nMode){
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
void CCHMSMapItemDialog::OnOldGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMapItemDialog::OnOldGroupSelendok(){
	 
}
/*void CCHMSMapItemDialog::OnOldGroupSetfocus(){
	
}*/
/*void CCHMSMapItemDialog::OnOldGroupKillfocus(){
	
}*/
long CCHMSMapItemDialog::OnOldGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOldGroup.IsSearchKey() && !m_szOldGroupKey.IsEmpty()){
	};
	m_wndOldGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOldGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSMapItemDialog::OnOldGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSMapItemDialog::OnNewGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMapItemDialog::OnNewGroupSelendok(){
	 
}
/*void CCHMSMapItemDialog::OnNewGroupSetfocus(){
	
}*/
/*void CCHMSMapItemDialog::OnNewGroupKillfocus(){
	
}*/
long CCHMSMapItemDialog::OnNewGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNewGroup.IsSearchKey() && !m_szNewGroupKey.IsEmpty()){
	};
	m_wndNewGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNewGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSMapItemDialog::OnNewGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSMapItemDialog::OnMapItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMapItemDialog::OnMapItemSelendok(){
	 
}
/*void CCHMSMapItemDialog::OnMapItemSetfocus(){
	
}*/
/*void CCHMSMapItemDialog::OnMapItemKillfocus(){
	
}*/
long CCHMSMapItemDialog::OnMapItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMapItem.IsSearchKey() && !m_szMapItemKey.IsEmpty()){
	};
	m_wndMapItem.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSMapItemDialog::OnMapItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSMapItemDialog::OnMapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMapItemDialog::OnOldListDblClick(){
	
} 
void CCHMSMapItemDialog::OnOldListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSMapItemDialog::OnOldListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSMapItemDialog::OnOldListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOldList.BeginLoad(); 
	m_wndOldList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOldList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Group")), NULL);
		rs.MoveNext();
	}
	m_wndOldList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCHMSMapItemDialog::OnMapListDblClick(){
	
} 
void CCHMSMapItemDialog::OnMapListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSMapItemDialog::OnMapListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSMapItemDialog::OnMapListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMapList.BeginLoad(); 
	m_wndMapList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapList.AddItems(
			rs.GetValue(_T("OldName")), 
			rs.GetValue(_T("NewName")), NULL);
		rs.MoveNext();
	}
	m_wndMapList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CCHMSMapItemDialog::OnAddCHMSMapItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCHMSMapItemDialog::OnEditCHMSMapItemDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSMapItemDialog::OnDeleteCHMSMapItemDialog(){
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
 		OnCancelCHMSMapItemDialog(); 
 	}
	return 0;
}
int CCHMSMapItemDialog::OnSaveCHMSMapItemDialog(){
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
 		//OnCHMSMapItemDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CCHMSMapItemDialog::OnCancelCHMSMapItemDialog(){
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
int CCHMSMapItemDialog::OnCHMSMapItemDialogListLoadData(){
	return 0;
}
