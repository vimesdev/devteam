#include "HMSExmTestSettingDialog.h"
#include "MainFrm.h"
static long _OnTestLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog*)pWnd)->OnTestLoadData();
} 
static void _OnTestDblClickFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog*)pWnd)->OnTestDblClick();
} 
static void _OnTestSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExmTestSettingDialog*)pWnd)->OnTestSelectChange(nOldItem, nNewItem);
} 
static int _OnTestDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnTestDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExmTestSettingDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExmTestSettingDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExmTestSettingDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExmTestSettingDialog *pVw = (CHMSExmTestSettingDialog *)pWnd;
	pVw->OnAddSelect();
} 
static int _OnAddHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnAddHMSExmTestSettingDialog();
} 
static int _OnEditHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnEditHMSExmTestSettingDialog();
} 
static int _OnDeleteHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnDeleteHMSExmTestSettingDialog();
} 
static int _OnSaveHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnSaveHMSExmTestSettingDialog();
} 
static int _OnCancelHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnCancelHMSExmTestSettingDialog();
} 
CHMSExmTestSettingDialog::CHMSExmTestSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 545;
	SetDefaultValues();
}
CHMSExmTestSettingDialog::~CHMSExmTestSettingDialog(){
}
void CHMSExmTestSettingDialog::OnCreateComponents(){
	m_wndTest.Create(this,191, 5, 801, 505); 
	m_wndList.Create(this,6, 5, 186, 506); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 510, 45, 535);
	m_wndType.Create(this,50, 510, 185, 535); 
	m_wndNameLabel.Create(this, _T("Name"), 190, 510, 270, 535);
	m_wndName.Create(this,275, 510, 715, 535); 
	m_wndAdd.Create(this, _T("&Add"), 720, 510, 800, 535);

}
void CHMSExmTestSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);






	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSExmTestSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTest.SetEvent(WE_SELCHANGE, _OnTestSelectChangeFnc);
	m_wndTest.SetEvent(WE_LOADDATA, _OnTestLoadDataFnc);
	m_wndTest.SetEvent(WE_DBLCLICK, _OnTestDblClickFnc);
	m_wndTest.AddEvent(1, _T("Delete"), _OnTestDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	SetMode(VM_NONE);

}
void CHMSExmTestSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);

}
void CHMSExmTestSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Name")] =  m_szNameKey;
	}
	else
	{
			
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Name")].GetValue(m_szNameKey);
	}

}
void CHMSExmTestSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExmTestSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExmTestSettingDialog::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szNameKey.Empty();

}
int CHMSExmTestSettingDialog::SetMode(int nMode){
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
void CHMSExmTestSettingDialog::OnTestDblClick(){
	
} 
void CHMSExmTestSettingDialog::OnTestSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExmTestSettingDialog::OnTestDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExmTestSettingDialog::OnTestLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTest.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTest.AddItems(
		rs.MoveNext();
	}
	m_wndTest.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSExmTestSettingDialog::OnListDblClick(){
	
} 
void CHMSExmTestSettingDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExmTestSettingDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExmTestSettingDialog::OnListLoadData(){
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
void CHMSExmTestSettingDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExmTestSettingDialog::OnTypeSelendok(){
	 
}
/*void CHMSExmTestSettingDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSExmTestSettingDialog::OnTypeKillfocus(){
	
}*/
long CHMSExmTestSettingDialog::OnTypeLoadData(){
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
/*void CHMSExmTestSettingDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExmTestSettingDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExmTestSettingDialog::OnNameSelendok(){
	 
}
/*void CHMSExmTestSettingDialog::OnNameSetfocus(){
	
}*/
/*void CHMSExmTestSettingDialog::OnNameKillfocus(){
	
}*/
long CHMSExmTestSettingDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExmTestSettingDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExmTestSettingDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExmTestSettingDialog::OnAddHMSExmTestSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExmTestSettingDialog::OnEditHMSExmTestSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExmTestSettingDialog::OnDeleteHMSExmTestSettingDialog(){
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
 		OnCancelHMSExmTestSettingDialog();
 	}
	return 0;
}
int CHMSExmTestSettingDialog::OnSaveHMSExmTestSettingDialog(){
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
 		//OnHMSExmTestSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExmTestSettingDialog::OnCancelHMSExmTestSettingDialog(){
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
int CHMSExmTestSettingDialog::OnHMSExmTestSettingDialogListLoadData(){
	return 0;
}
