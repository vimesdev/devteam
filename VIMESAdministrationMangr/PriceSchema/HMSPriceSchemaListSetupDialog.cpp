#include "HMSPriceSchemaListSetupDialog.h"
#include "../MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPriceSchemaListSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnListDeleteItem();
} 
static long _OnList2LoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnList2LoadData();
} 
static void _OnList2DblClickFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog*)pWnd)->OnList2DblClick();
} 
static void _OnList2SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPriceSchemaListSetupDialog*)pWnd)->OnList2SelectChange(nOldItem, nNewItem);
} 
static int _OnList2DeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnList2DeleteItem();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPriceSchemaListSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaListSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPriceSchemaListSetupDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaListSetupDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaListSetupDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaListSetupDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaListSetupDialog *pVw = (CHMSPriceSchemaListSetupDialog *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPriceSchemaListSetupDialog *pVw = (CHMSPriceSchemaListSetupDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnUnapplySelectFnc(CWnd *pWnd){
	CHMSPriceSchemaListSetupDialog *pVw = (CHMSPriceSchemaListSetupDialog *)pWnd;
	pVw->OnUnapplySelect();
} 
static int _OnAddHMSPriceSchemaListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnAddHMSPriceSchemaListSetupDialog();
} 
static int _OnEditHMSPriceSchemaListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnEditHMSPriceSchemaListSetupDialog();
} 
static int _OnDeleteHMSPriceSchemaListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnDeleteHMSPriceSchemaListSetupDialog();
} 
static int _OnSaveHMSPriceSchemaListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnSaveHMSPriceSchemaListSetupDialog();
} 
static int _OnCancelHMSPriceSchemaListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaListSetupDialog*)pWnd)->OnCancelHMSPriceSchemaListSetupDialog();
} 
CHMSPriceSchemaListSetupDialog::CHMSPriceSchemaListSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSPriceSchemaListSetupDialog::~CHMSPriceSchemaListSetupDialog(){
}
void CHMSPriceSchemaListSetupDialog::OnCreateComponents(){
	m_wndGroupBox.Create(this, _T("Group Box"), 5, 5, 795, 90);
	m_wndGroup2.Create(this, _T("Group 2"), 5, 95, 385, 570);
	m_wndGroup3.Create(this, _T("Group 3"), 390, 95, 795, 570);
	m_wndList.Create(this,10, 120, 380, 565); 
	m_wndList2.Create(this,395, 120, 790, 565); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 385, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 390, 30, 470, 55);
	m_wndGroup.Create(this,475, 30, 790, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 10, 60, 90, 85);
	m_wndSearch.Create(this,95, 60, 385, 85); 
	m_wndFind.Create(this, _T("&Find"), 390, 60, 470, 85);
	m_wndApply.Create(this, _T(">>"), 305, 575, 385, 600);
	m_wndUnapply.Create(this, _T("<<"), 390, 575, 470, 600);

}
void CHMSPriceSchemaListSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);






	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CHMSPriceSchemaListSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList2.SetEvent(WE_SELCHANGE, _OnList2SelectChangeFnc);
	m_wndList2.SetEvent(WE_LOADDATA, _OnList2LoadDataFnc);
	m_wndList2.SetEvent(WE_DBLCLICK, _OnList2DblClickFnc);
	m_wndList2.AddEvent(1, _T("Delete"), _OnList2DeleteItemFnc, 0, VK_DELETE, 0);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndUnapply.SetEvent(WE_CLICK, _OnUnapplySelectFnc);
	SetMode(VM_NONE);
	CenterWindow(m_pParentWnd);
}
void CHMSPriceSchemaListSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CHMSPriceSchemaListSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CHMSPriceSchemaListSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPriceSchemaListSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPriceSchemaListSetupDialog::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szGroupKey.Empty();
	m_szSearch.Empty();

}
int CHMSPriceSchemaListSetupDialog::SetMode(int nMode){
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
void CHMSPriceSchemaListSetupDialog::OnListDblClick(){
	
} 
void CHMSPriceSchemaListSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriceSchemaListSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPriceSchemaListSetupDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPriceSchemaListSetupDialog::OnList2DblClick(){
	
} 
void CHMSPriceSchemaListSetupDialog::OnList2SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriceSchemaListSetupDialog::OnList2DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPriceSchemaListSetupDialog::OnList2LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList2.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList2.AddItems(
		rs.MoveNext();
	}
	m_wndList2.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPriceSchemaListSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaListSetupDialog::OnTypeSelendok(){
	 
}
/*void CHMSPriceSchemaListSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSPriceSchemaListSetupDialog::OnTypeKillfocus(){
	
}*/
long CHMSPriceSchemaListSetupDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPriceSchemaListSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPriceSchemaListSetupDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaListSetupDialog::OnGroupSelendok(){
	 
}
/*void CHMSPriceSchemaListSetupDialog::OnGroupSetfocus(){
	
}*/
/*void CHMSPriceSchemaListSetupDialog::OnGroupKillfocus(){
	
}*/
long CHMSPriceSchemaListSetupDialog::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupKey
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPriceSchemaListSetupDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPriceSchemaListSetupDialog::OnSearchChange(){
	
} */
/*void CHMSPriceSchemaListSetupDialog::OnSearchSetfocus(){
	
} */
/*void CHMSPriceSchemaListSetupDialog::OnSearchKillfocus(){
	
} */
int CHMSPriceSchemaListSetupDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSPriceSchemaListSetupDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaListSetupDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaListSetupDialog::OnUnapplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriceSchemaListSetupDialog::OnAddHMSPriceSchemaListSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPriceSchemaListSetupDialog::OnEditHMSPriceSchemaListSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPriceSchemaListSetupDialog::OnDeleteHMSPriceSchemaListSetupDialog(){
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
 		OnCancelHMSPriceSchemaListSetupDialog();
 	}
	return 0;
}
int CHMSPriceSchemaListSetupDialog::OnSaveHMSPriceSchemaListSetupDialog(){
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
 		//OnHMSPriceSchemaListSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPriceSchemaListSetupDialog::OnCancelHMSPriceSchemaListSetupDialog(){
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
int CHMSPriceSchemaListSetupDialog::OnHMSPriceSchemaListSetupDialogListLoadData(){
	return 0;
}
