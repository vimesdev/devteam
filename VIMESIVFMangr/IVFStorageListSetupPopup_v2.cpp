#include "IVFStorageListSetupPopup_v2.h"
#include "MainFrm.h"
static void _OnParentCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageListSetupPopup_v2* )pWnd)->OnParentCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentCategorySelendokFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnParentCategorySelendok();
}
/*static void _OnParentCategorySetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnParentCategoryKillfocus();
}*/
/*static void _OnParentCategoryKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnParentCategoryKillfocus();
}*/
static long _OnParentCategoryLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup_v2 *)pWnd)->OnParentCategoryLoadData();
}
/*static void _OnParentCategoryAddNewFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnParentCategoryAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup_v2 *)pWnd)->OnNameCheckValue();
} 
/*static void _OnMaxCapacityChangeFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnMaxCapacityChange();
} */
/*static void _OnMaxCapacitySetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnMaxCapacitySetfocus();} */ 
/*static void _OnMaxCapacityKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup_v2 *)pWnd)->OnMaxCapacityKillfocus();
} */
static int _OnMaxCapacityCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup_v2 *)pWnd)->OnMaxCapacityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupPopup_v2 *pVw = (CIVFStorageListSetupPopup_v2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupPopup_v2 *pVw = (CIVFStorageListSetupPopup_v2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFStorageListSetupPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup_v2*)pWnd)->OnAddIVFStorageListSetupPopup_v2();
} 
static int _OnEditIVFStorageListSetupPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup_v2*)pWnd)->OnEditIVFStorageListSetupPopup_v2();
} 
static int _OnDeleteIVFStorageListSetupPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup_v2*)pWnd)->OnDeleteIVFStorageListSetupPopup_v2();
} 
static int _OnSaveIVFStorageListSetupPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup_v2*)pWnd)->OnSaveIVFStorageListSetupPopup_v2();
} 
static int _OnCancelIVFStorageListSetupPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup_v2*)pWnd)->OnCancelIVFStorageListSetupPopup_v2();
} 
CIVFStorageListSetupPopup_v2::CIVFStorageListSetupPopup_v2(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFStorageListSetupPopup_v2::~CIVFStorageListSetupPopup_v2(){
}
void CIVFStorageListSetupPopup_v2::OnCreateComponents(){
	m_wndCategoryInformation.Create(this, _T("Category Information"), 5, 5, 540, 90);
	m_wndParentCategoryLabel.Create(this, _T("Parent Category"), 10, 30, 130, 55);
	m_wndParentCategory.Create(this,135, 30, 535, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 130, 85);
	m_wndName.Create(this,135, 60, 389, 85); 
	m_wndMaxCapacityLabel.Create(this, _T("Max Capacity"), 395, 60, 475, 85);
	m_wndMaxCapacity.Create(this,480, 60, 535, 85); 
	m_wndSave.Create(this, _T("&Save"), 355, 95, 445, 120);
	m_wndClose.Create(this, _T("&Close"), 450, 95, 540, 120);

}
void CIVFStorageListSetupPopup_v2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndParentCategory.SetCheckValue(true);
	m_wndParentCategory.LimitText(1024);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndMaxCapacity.SetLimitText(16);
	m_wndMaxCapacity.SetCheckValue(true);

	m_wndParentCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndParentCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CIVFStorageListSetupPopup_v2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndParentCategory.SetEvent(WE_SELENDOK, _OnParentCategorySelendokFnc);
	//m_wndParentCategory.SetEvent(WE_SETFOCUS, _OnParentCategorySetfocusFnc);
	//m_wndParentCategory.SetEvent(WE_KILLFOCUS, _OnParentCategoryKillfocusFnc);
	m_wndParentCategory.SetEvent(WE_SELCHANGE, _OnParentCategorySelectChangeFnc);
	m_wndParentCategory.SetEvent(WE_LOADDATA, _OnParentCategoryLoadDataFnc);
	//m_wndParentCategory.SetEvent(WE_ADDNEW, _OnParentCategoryAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndMaxCapacity.SetEvent(WE_CHANGE, _OnMaxCapacityChangeFnc);
	//m_wndMaxCapacity.SetEvent(WE_SETFOCUS, _OnMaxCapacitySetfocusFnc);
	//m_wndMaxCapacity.SetEvent(WE_KILLFOCUS, _OnMaxCapacityKillfocusFnc);
	m_wndMaxCapacity.SetEvent(WE_CHECKVALUE, _OnMaxCapacityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFStorageListSetupPopup_v2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndParentCategory.GetDlgCtrlID(), m_szParentCategoryKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndMaxCapacity.GetDlgCtrlID(), m_nMaxCapacity);

}
void CIVFStorageListSetupPopup_v2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ParentCategory")] =  m_szParentCategoryKey;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("MaxCapacity")] =  m_nMaxCapacity;
	}
	else
	{
			
	m_jData[_T("ParentCategory")].GetValue(m_szParentCategoryKey);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("MaxCapacity")].GetValue(m_nMaxCapacity);
	}

}
void CIVFStorageListSetupPopup_v2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageListSetupPopup_v2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageListSetupPopup_v2::SetDefaultValues(){

	m_szParentCategoryKey.Empty();
	m_szName.Empty();
	m_nMaxCapacity=0;

}
int CIVFStorageListSetupPopup_v2::SetMode(int nMode){
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
void CIVFStorageListSetupPopup_v2::OnParentCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetupPopup_v2::OnParentCategorySelendok(){
	 
}
/*void CIVFStorageListSetupPopup_v2::OnParentCategorySetfocus(){
	
}*/
/*void CIVFStorageListSetupPopup_v2::OnParentCategoryKillfocus(){
	
}*/
long CIVFStorageListSetupPopup_v2::OnParentCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageListSetupPopup_v2::OnParentCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFStorageListSetupPopup_v2::OnNameChange(){
	
} */
/*void CIVFStorageListSetupPopup_v2::OnNameSetfocus(){
	
} */
/*void CIVFStorageListSetupPopup_v2::OnNameKillfocus(){
	
} */
int CIVFStorageListSetupPopup_v2::OnNameCheckValue(){
	return 0;
} 
/*void CIVFStorageListSetupPopup_v2::OnMaxCapacityChange(){
	
} */
/*void CIVFStorageListSetupPopup_v2::OnMaxCapacitySetfocus(){
	
} */
/*void CIVFStorageListSetupPopup_v2::OnMaxCapacityKillfocus(){
	
} */
int CIVFStorageListSetupPopup_v2::OnMaxCapacityCheckValue(){
	return 0;
} 
void CIVFStorageListSetupPopup_v2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetupPopup_v2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageListSetupPopup_v2::OnAddIVFStorageListSetupPopup_v2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageListSetupPopup_v2::OnEditIVFStorageListSetupPopup_v2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageListSetupPopup_v2::OnDeleteIVFStorageListSetupPopup_v2(){
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
 		OnCancelIVFStorageListSetupPopup_v2();
 	}
	return 0;
}
int CIVFStorageListSetupPopup_v2::OnSaveIVFStorageListSetupPopup_v2(){
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
 		//OnIVFStorageListSetupPopup_v2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageListSetupPopup_v2::OnCancelIVFStorageListSetupPopup_v2(){
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
int CIVFStorageListSetupPopup_v2::OnIVFStorageListSetupPopup_v2ListLoadData(){
	return 0;
}
