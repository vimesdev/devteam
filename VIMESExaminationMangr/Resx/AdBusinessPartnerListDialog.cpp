#include "AdBusinessPartnerListDialog.h"
#include "MainFrm.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerListDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerListDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CAdBusinessPartnerListDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnAddAdBusinessPartnerListDialog();
} 
static int _OnEditAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnEditAdBusinessPartnerListDialog();
} 
static int _OnDeleteAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnDeleteAdBusinessPartnerListDialog();
} 
static int _OnSaveAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnSaveAdBusinessPartnerListDialog();
} 
static int _OnCancelAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnCancelAdBusinessPartnerListDialog();
} 
CAdBusinessPartnerListDialog::CAdBusinessPartnerListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdBusinessPartnerListDialog::~CAdBusinessPartnerListDialog(){
}
void CAdBusinessPartnerListDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 910, 60);
	m_wndGroupList.Create(this, _T("Information"), 5, 65, 910, 605);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 110, 55);
	m_wndType.Create(this,115, 30, 405, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 410, 30, 510, 55);
	m_wndSearchName.Create(this,515, 30, 775, 55); 
	m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndList.Create(this,10, 90, 905, 245); 
	m_wndAdd.Create(this, _T("&Add"), 655, 250, 735, 275);
	m_wndEdit.Create(this, _T("&Edit"), 740, 250, 820, 275);
	m_wndDelete.Create(this, _T("&Delete"), 825, 250, 905, 275);
	m_wndTab.Create(this,10, 280, 905, 600); 

}
void CAdBusinessPartnerListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndSearchName.SetLimitText(1024);
	m_wndSearchName.SetCheckValue(true);





}
void CAdBusinessPartnerListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CAdBusinessPartnerListDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("SearchName")] =  m_szSearchName;
	}
	else
	{
			
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	}

}
void CAdBusinessPartnerListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerListDialog::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szSearchName.Empty();

}
int CAdBusinessPartnerListDialog::SetMode(int nMode){
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
void CAdBusinessPartnerListDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerListDialog::OnTypeSelendok(){
	 
}
/*void CAdBusinessPartnerListDialog::OnTypeSetfocus(){
	
}*/
/*void CAdBusinessPartnerListDialog::OnTypeKillfocus(){
	
}*/
long CAdBusinessPartnerListDialog::OnTypeLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdBusinessPartnerListDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdBusinessPartnerListDialog::OnSearchNameChange(){
	
} */
/*void CAdBusinessPartnerListDialog::OnSearchNameSetfocus(){
	
} */
/*void CAdBusinessPartnerListDialog::OnSearchNameKillfocus(){
	
} */
int CAdBusinessPartnerListDialog::OnSearchNameCheckValue(){
	return 0;
} 
void CAdBusinessPartnerListDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerListDialog::OnListDblClick(){
	
} 
void CAdBusinessPartnerListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerListDialog::OnListLoadData(){
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
void CAdBusinessPartnerListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerListDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerListDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerListDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerListDialog::OnAddAdBusinessPartnerListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerListDialog::OnEditAdBusinessPartnerListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerListDialog::OnDeleteAdBusinessPartnerListDialog(){
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
 		OnCancelAdBusinessPartnerListDialog();
 	}
	return 0;
}
int CAdBusinessPartnerListDialog::OnSaveAdBusinessPartnerListDialog(){
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
 		//OnAdBusinessPartnerListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerListDialog::OnCancelAdBusinessPartnerListDialog(){
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
int CAdBusinessPartnerListDialog::OnAdBusinessPartnerListDialogListLoadData(){
	return 0;
}
