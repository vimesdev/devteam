#include "ProductSyncCategoryMapDialog.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnMappedNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductSyncCategoryMapDialog* )pWnd)->OnMappedNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMappedNameSelendokFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameSelendok();
}
/*static void _OnMappedNameSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameKillfocus();
}*/
/*static void _OnMappedNameKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameKillfocus();
}*/
static long _OnMappedNameLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameLoadData();
}
/*static void _OnMappedNameAddNewFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameAddNew();
}*/
/*static void _OnMappedIDChangeFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDChange();
} */
/*static void _OnMappedIDSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDSetfocus();} */ 
/*static void _OnMappedIDKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDKillfocus();
} */
static int _OnMappedIDCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductSyncCategoryMapDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductSyncCategoryMapDialog *pVw = (CProductSyncCategoryMapDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSyncCategoryMapDialog *pVw = (CProductSyncCategoryMapDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnAddProductSyncCategoryMapDialog();
} 
static int _OnEditProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnEditProductSyncCategoryMapDialog();
} 
static int _OnDeleteProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnDeleteProductSyncCategoryMapDialog();
} 
static int _OnSaveProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnSaveProductSyncCategoryMapDialog();
} 
static int _OnCancelProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnCancelProductSyncCategoryMapDialog();
} 
CProductSyncCategoryMapDialog::CProductSyncCategoryMapDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CProductSyncCategoryMapDialog::~CProductSyncCategoryMapDialog(){
}
void CProductSyncCategoryMapDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 105, 30);
	m_wndName.Create(this,110, 5, 480, 60); 
	m_wndMappedNameLabel.Create(this, _T("Mapped Name"), 5, 65, 105, 90);
	m_wndMappedName.Create(this,110, 65, 480, 90); 
	m_wndMappedIDLabel.Create(this, _T("Mapped ID"), 5, 95, 105, 120);
	m_wndMappedID.Create(this,110, 95, 260, 120); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 125, 105, 150);
	m_wndType.Create(this,110, 125, 480, 150); 
	m_wndSave.Create(this, _T("&Save"), 315, 155, 395, 180);
	m_wndClose.Create(this, _T("&Close"), 400, 155, 480, 180);

}
void CProductSyncCategoryMapDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndMappedName.SetCheckValue(true);
	m_wndMappedName.LimitText(35);
	m_wndMappedID.SetLimitText(35);
	m_wndMappedID.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);


	m_wndMappedName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMappedName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CProductSyncCategoryMapDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndMappedName.SetEvent(WE_SELENDOK, _OnMappedNameSelendokFnc);
	//m_wndMappedName.SetEvent(WE_SETFOCUS, _OnMappedNameSetfocusFnc);
	//m_wndMappedName.SetEvent(WE_KILLFOCUS, _OnMappedNameKillfocusFnc);
	m_wndMappedName.SetEvent(WE_SELCHANGE, _OnMappedNameSelectChangeFnc);
	m_wndMappedName.SetEvent(WE_LOADDATA, _OnMappedNameLoadDataFnc);
	//m_wndMappedName.SetEvent(WE_ADDNEW, _OnMappedNameAddNewFnc);
	//m_wndMappedID.SetEvent(WE_CHANGE, _OnMappedIDChangeFnc);
	//m_wndMappedID.SetEvent(WE_SETFOCUS, _OnMappedIDSetfocusFnc);
	//m_wndMappedID.SetEvent(WE_KILLFOCUS, _OnMappedIDKillfocusFnc);
	m_wndMappedID.SetEvent(WE_CHECKVALUE, _OnMappedIDCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductSyncCategoryMapDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndMappedName.GetDlgCtrlID(), m_szMappedNameKey);
	DDX_Text(pDX, m_wndMappedID.GetDlgCtrlID(), m_szMappedID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CProductSyncCategoryMapDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("MappedName")] =  m_szMappedNameKey;
	m_jData[_T("MappedID")] =  m_szMappedID;
	m_jData[_T("Type")] =  m_szTypeKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("MappedName")].GetValue(m_szMappedNameKey);
	m_jData[_T("MappedID")].GetValue(m_szMappedID);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	}

}
void CProductSyncCategoryMapDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductSyncCategoryMapDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductSyncCategoryMapDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szMappedNameKey.Empty();
	m_szMappedID.Empty();
	m_szTypeKey.Empty();

}
int CProductSyncCategoryMapDialog::SetMode(int nMode){
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
/*void CProductSyncCategoryMapDialog::OnNameChange(){
	
} */
/*void CProductSyncCategoryMapDialog::OnNameSetfocus(){
	
} */
/*void CProductSyncCategoryMapDialog::OnNameKillfocus(){
	
} */
int CProductSyncCategoryMapDialog::OnNameCheckValue(){
	return 0;
} 
void CProductSyncCategoryMapDialog::OnMappedNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncCategoryMapDialog::OnMappedNameSelendok(){
	 
}
/*void CProductSyncCategoryMapDialog::OnMappedNameSetfocus(){
	
}*/
/*void CProductSyncCategoryMapDialog::OnMappedNameKillfocus(){
	
}*/
long CProductSyncCategoryMapDialog::OnMappedNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMappedName.IsSearchKey() && !m_szMappedNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMappedNameKey
};
	m_wndMappedName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMappedName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductSyncCategoryMapDialog::OnMappedNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductSyncCategoryMapDialog::OnMappedIDChange(){
	
} */
/*void CProductSyncCategoryMapDialog::OnMappedIDSetfocus(){
	
} */
/*void CProductSyncCategoryMapDialog::OnMappedIDKillfocus(){
	
} */
int CProductSyncCategoryMapDialog::OnMappedIDCheckValue(){
	return 0;
} 
void CProductSyncCategoryMapDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncCategoryMapDialog::OnTypeSelendok(){
	 
}
/*void CProductSyncCategoryMapDialog::OnTypeSetfocus(){
	
}*/
/*void CProductSyncCategoryMapDialog::OnTypeKillfocus(){
	
}*/
long CProductSyncCategoryMapDialog::OnTypeLoadData(){
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
/*void CProductSyncCategoryMapDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductSyncCategoryMapDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncCategoryMapDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductSyncCategoryMapDialog::OnAddProductSyncCategoryMapDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSyncCategoryMapDialog::OnEditProductSyncCategoryMapDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSyncCategoryMapDialog::OnDeleteProductSyncCategoryMapDialog(){
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
 		OnCancelProductSyncCategoryMapDialog();
 	}
	return 0;
}
int CProductSyncCategoryMapDialog::OnSaveProductSyncCategoryMapDialog(){
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
 		//OnProductSyncCategoryMapDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSyncCategoryMapDialog::OnCancelProductSyncCategoryMapDialog(){
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
int CProductSyncCategoryMapDialog::OnProductSyncCategoryMapDialogListLoadData(){
	return 0;
}
