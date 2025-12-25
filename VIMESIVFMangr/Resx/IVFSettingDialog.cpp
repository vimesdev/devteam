#include "IVFSettingDialog.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFSettingDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFSettingDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFSettingDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingDialog *)pWnd)->OnIDCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSettingDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CIVFSettingDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CIVFSettingDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFSettingDialog *pVw = (CIVFSettingDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFSettingDialog *pVw = (CIVFSettingDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFSettingDialog *pVw = (CIVFSettingDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFSettingDialog *pVw = (CIVFSettingDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFSettingDialog *pVw = (CIVFSettingDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFSettingDialog *pVw = (CIVFSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingDialog*)pWnd)->OnAddIVFSettingDialog();
} 
static int _OnEditIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingDialog*)pWnd)->OnEditIVFSettingDialog();
} 
static int _OnDeleteIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingDialog*)pWnd)->OnDeleteIVFSettingDialog();
} 
static int _OnSaveIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingDialog*)pWnd)->OnSaveIVFSettingDialog();
} 
static int _OnCancelIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingDialog*)pWnd)->OnCancelIVFSettingDialog();
} 
CIVFSettingDialog::CIVFSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 615;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CIVFSettingDialog::~CIVFSettingDialog(){
}
void CIVFSettingDialog::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 6, 5, 86, 30);
	m_wndSearch.Create(this,91, 5, 487, 30); 
	m_wndList.Create(this,5, 35, 605, 390); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 395, 85, 420);
	m_wndID.Create(this,90, 395, 170, 420); 
	m_wndGroupLabel.Create(this, _T("Group"), 175, 395, 255, 420);
	m_wndGroup.Create(this,260, 395, 605, 420); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 425, 85, 450);
	m_wndDescription.Create(this,90, 425, 605, 450); 
	m_wndIsActive.Create(this, _T("IsActive"), 5, 455, 85, 480);
	m_wndAdd.Create(this, _T("&Add"), 105, 455, 185, 480);
	m_wndEdit.Create(this, _T("&Edit"), 190, 455, 270, 480);
	m_wndDelete.Create(this, _T("&Delete"), 275, 455, 355, 480);
	m_wndSave.Create(this, _T("&Save"), 360, 455, 440, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 455, 525, 480);
	m_wndClose.Create(this, _T("&Close"), 530, 455, 610, 480);

}
void CIVFSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CIVFSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CIVFSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFSettingDialog::SetDefaultValues(){

	m_szSearch.Empty();
	m_szID.Empty();
	m_szGroupKey.Empty();
	m_szDescription.Empty();
	m_bIsActive=FALSE;

}
int CIVFSettingDialog::SetMode(int nMode){
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
/*void CIVFSettingDialog::OnSearchChange(){
	
} */
/*void CIVFSettingDialog::OnSearchSetfocus(){
	
} */
/*void CIVFSettingDialog::OnSearchKillfocus(){
	
} */
int CIVFSettingDialog::OnSearchCheckValue(){
	return 0;
} 
void CIVFSettingDialog::OnListDblClick(){
	
} 
void CIVFSettingDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFSettingDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFSettingDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CIVFSettingDialog::OnIDChange(){
	
} */
/*void CIVFSettingDialog::OnIDSetfocus(){
	
} */
/*void CIVFSettingDialog::OnIDKillfocus(){
	
} */
int CIVFSettingDialog::OnIDCheckValue(){
	return 0;
} 
void CIVFSettingDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingDialog::OnGroupSelendok(){
	 
}
/*void CIVFSettingDialog::OnGroupSetfocus(){
	
}*/
/*void CIVFSettingDialog::OnGroupKillfocus(){
	
}*/
long CIVFSettingDialog::OnGroupLoadData(){
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
/*void CIVFSettingDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFSettingDialog::OnDescriptionChange(){
	
} */
/*void CIVFSettingDialog::OnDescriptionSetfocus(){
	
} */
/*void CIVFSettingDialog::OnDescriptionKillfocus(){
	
} */
int CIVFSettingDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CIVFSettingDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CIVFSettingDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFSettingDialog::OnAddIVFSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFSettingDialog::OnEditIVFSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFSettingDialog::OnDeleteIVFSettingDialog(){
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
 		OnCancelIVFSettingDialog();
 	}
	return 0;
}
int CIVFSettingDialog::OnSaveIVFSettingDialog(){
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
 		//OnIVFSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFSettingDialog::OnCancelIVFSettingDialog(){
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
int CIVFSettingDialog::OnIVFSettingDialogListLoadData(){
	return 0;
}
