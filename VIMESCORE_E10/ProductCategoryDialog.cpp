#include "ProductCategoryDialog.h"
#include "MainFrame_E10.h"
#include "ProductCategoryList.h"
static void _OnParentCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductCategoryDialog* )pWnd)->OnParentCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentCategorySelendokFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnParentCategorySelendok();
}
/*static void _OnParentCategorySetfocusFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnParentCategoryKillfocus();
}*/
/*static void _OnParentCategoryKillfocusFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnParentCategoryKillfocus();
}*/
static long _OnParentCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductCategoryDialog *)pWnd)->OnParentCategoryLoadData();
}
/*static void _OnParentCategoryAddNewFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnParentCategoryAddNew();
}*/
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductCategoryDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductCategoryDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductCategoryDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductCategoryDialog *pVw = (CProductCategoryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductCategoryDialog *pVw = (CProductCategoryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductCategoryDialog*)pWnd)->OnAddProductCategoryDialog();
} 
static int _OnEditProductCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductCategoryDialog*)pWnd)->OnEditProductCategoryDialog();
} 
static int _OnDeleteProductCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductCategoryDialog*)pWnd)->OnDeleteProductCategoryDialog();
} 
static int _OnSaveProductCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductCategoryDialog*)pWnd)->OnSaveProductCategoryDialog();
} 
static int _OnCancelProductCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductCategoryDialog*)pWnd)->OnCancelProductCategoryDialog();
} 
CProductCategoryDialog::CProductCategoryDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 555;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CProductCategoryDialog::~CProductCategoryDialog(){
}
void CProductCategoryDialog::OnCreateComponents(){
	m_wndCategoryInformation.Create(this, _T("Category Information"), 5, 4, 540, 119);
	m_wndParentCategoryLabel.Create(this, _T("Parent Category"), 10, 30, 130, 55);
	m_wndParentCategory.Create(this,135, 30, 535, 55); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 60, 130, 85);
	m_wndCode.Create(this,135, 60, 235, 85); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 90, 130, 115);
	m_wndName.Create(this,135, 90, 535, 115); 
	m_wndSave.Create(this, _T("&Save"), 356, 125, 446, 150);
	m_wndClose.Create(this, _T("&Close"), 451, 125, 541, 150);

}
void CProductCategoryDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndParentCategory.SetCheckValue(true);
	m_wndParentCategory.LimitText(35);
	m_wndCode.SetLimitText(35);
	m_wndCode.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);


	m_wndParentCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndParentCategory.InsertColumn(1, _T("code"), CFMT_TEXT, 60);
	m_wndParentCategory.InsertColumn(2, _T("Name"), CFMT_TEXT, 550);
	m_wndParentCategory.Format(0, 2);

	m_product_categoryTbl.SetTableName(_T("m_product_category"));
	m_product_categoryTbl.AddField(_T("mpc_createdby"), dfText, 15); 
	m_product_categoryTbl.AddField(_T("mpc_updatedby"), dfText, 15); 
	m_product_categoryTbl.AddField(_T("mpc_code"), dfText, 7); 
	m_product_categoryTbl.AddField(_T("mpc_name"), dfText, 254); 
	m_product_categoryTbl.AddField(_T("mpc_parent_id"), dfLong); 
	m_product_categoryTbl.AddField(_T("mpc_org_id"), dfText, 3); 


}
void CProductCategoryDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndParentCategory.SetEvent(WE_SELENDOK, _OnParentCategorySelendokFnc);
	//m_wndParentCategory.SetEvent(WE_SETFOCUS, _OnParentCategorySetfocusFnc);
	//m_wndParentCategory.SetEvent(WE_KILLFOCUS, _OnParentCategoryKillfocusFnc);
	m_wndParentCategory.SetEvent(WE_SELCHANGE, _OnParentCategorySelectChangeFnc);
	m_wndParentCategory.SetEvent(WE_LOADDATA, _OnParentCategoryLoadDataFnc);
	//m_wndParentCategory.SetEvent(WE_ADDNEW, _OnParentCategoryAddNewFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode=GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CProductCategoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndParentCategory.GetDlgCtrlID(), m_szParentCategoryKey);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CProductCategoryDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szID;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT * FROM m_product_category WHERE mpc_product_category_id=%ld "), m_nID);
	SetDefaultValues();
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("mpc_product_category_id"), m_nID);
		rs.GetValue(_T("mpc_parent_id"), m_szParentCategoryKey);
		rs.GetValue(_T("mpc_code"), m_szCode);
		rs.GetValue(_T("mpc_name"), m_szName);
		rs.GetValue(_T("mpc_level"), m_nLevel);
	}

}
void CProductCategoryDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szGroupID, tmpStr;
	
	m_product_categoryTbl.SetValue(_T("mpc_createdby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE mpc_product_category_id=%ld "), m_nID);
		m_product_categoryTbl.Open(&pMF->m_db, szWhere);
	}
	m_product_categoryTbl.SetValue(_T("mpc_updatedby"), pMF->GetCurrentUser());
	
	m_product_categoryTbl.SetValue(_T("mpc_code"), m_szCode);
	m_product_categoryTbl.SetValue(_T("mpc_name"), m_szName);
	m_product_categoryTbl.SetValue(_T("mpc_level"), m_nLevel);
	m_product_categoryTbl.SetValue(_T("mpc_parent_id"), m_szParentCategoryKey);
	m_product_categoryTbl.SetValue(_T("mpc_org_id"), pMF->GetModuleID());

}
void CProductCategoryDialog::SetDefaultValues(){

	m_szParentCategoryKey.Empty();
	m_szCode.Empty();
	m_szName.Empty();

}
int CProductCategoryDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndParentCategory.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndName.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0,  -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CProductCategoryDialog::OnParentCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductCategoryDialog::OnParentCategorySelendok(){
	if(GetMode() == VM_ADD)
	{
		UpdateData(TRUE);
		m_szCode.Format(_T("%s"), m_wndParentCategory.GetCurrent(1));
		m_szCode.Trim();
		UpdateData(FALSE); 
	}

}
/*void CProductCategoryDialog::OnParentCategorySetfocus(){
	
}*/
/*void CProductCategoryDialog::OnParentCategoryKillfocus(){
	
}*/
long CProductCategoryDialog::OnParentCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndParentCategory, m_szParentCategoryKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParentCategory.IsSearchKey() && !m_szParentCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szParentCategoryKey
};
	m_wndParentCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParentCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductCategoryDialog::OnParentCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductCategoryDialog::OnCodeChange(){
	
} */
/*void CProductCategoryDialog::OnCodeSetfocus(){
	
} */
/*void CProductCategoryDialog::OnCodeKillfocus(){
	
} */
int CProductCategoryDialog::OnCodeCheckValue(){
	CString szSQL;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT COUNT(*) FROM m_product_category ") \
			_T(" WHERE mpc_code='%s' "), 
			m_szCode, str2long(m_szParentCategoryKey));
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			return -1;
		}

	}
	else if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT COUNT(*) FROM m_product_category ") \
			_T(" WHERE mpc_code='%s' and mpc_product_category_id<>%ld "), 
			m_szCode, m_nID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			return -1;
		}
	}
	
	return 0;

} 
/*void CProductCategoryDialog::OnNameChange(){
	
} */
/*void CProductCategoryDialog::OnNameSetfocus(){
	
} */
/*void CProductCategoryDialog::OnNameKillfocus(){
	
} */
int CProductCategoryDialog::OnNameCheckValue(){
	if(m_szName.IsEmpty())
		return -1;
	return 0;
} 
void CProductCategoryDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductCategoryDialog();
} 
void CProductCategoryDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductCategoryDialog::OnAddProductCategoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductCategoryDialog::OnEditProductCategoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductCategoryDialog::OnDeleteProductCategoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelProductCategoryDialog();
 	}
	return 0;
}
int CProductCategoryDialog::OnSaveProductCategoryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_product_categoryTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE mpc_product_category_id=%ld "), m_nID);
 		szSQL = m_product_categoryTbl.GetUpdateSQL(_T("mpc_product_category_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnProductCategoryDialogListLoadData();
		szSQL.Format(_T("M_PRODUCT_CATEGORY_RECALC_LVL(%ld)"), m_nID);
		pMF->ExecDML(szSQL);
 		if(GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			CGuiDialog::OnOK();
		((CProductCategoryList*) m_pParentWnd)->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductCategoryDialog::OnCancelProductCategoryDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CProductCategoryDialog::OnProductCategoryDialogListLoadData(){
	return 0;
}
