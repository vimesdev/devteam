#include "ProductControlInput.h"
#include "MainFrame_E10.h"
#include "ProductControl.h"

static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductControlInput* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CProductControlInput *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CProductControlInput *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CProductControlInput *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CProductControlInput *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CProductControlInput *)pWnd)->OnObjectAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductControlInput *pVw = (CProductControlInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductControlInput *pVw = (CProductControlInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductControlInputFnc(CWnd *pWnd){
	 return ((CProductControlInput*)pWnd)->OnAddProductControlInput();
} 
static int _OnEditProductControlInputFnc(CWnd *pWnd){
	 return ((CProductControlInput*)pWnd)->OnEditProductControlInput();
} 
static int _OnDeleteProductControlInputFnc(CWnd *pWnd){
	 return ((CProductControlInput*)pWnd)->OnDeleteProductControlInput();
} 
static int _OnSaveProductControlInputFnc(CWnd *pWnd){
	 return ((CProductControlInput*)pWnd)->OnSaveProductControlInput();
} 
static int _OnCancelProductControlInputFnc(CWnd *pWnd){
	 return ((CProductControlInput*)pWnd)->OnCancelProductControlInput();
} 
CProductControlInput::CProductControlInput(
	CWnd *pParent, 
	long nProduct_id, 
	long nProduct_control_id, 
	CString	szType,
	CGuiListCtrl* pList
):CGuiDialog(pParent), 
	m_szType(szType), 
	m_nProduct_id(nProduct_id), 
	m_nProduct_control_id(nProduct_control_id),
	m_pList(pList){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CProductControlInput::~CProductControlInput(){
}
void CProductControlInput::OnCreateComponents(){
	m_wndObjectLabel.Create(this, _T("Object"), 5, 5, 85, 30);
	m_wndObject.Create(this,90, 5, 350, 30); 
	m_wndSave.Create(this, _T("&Save"), 355, 5, 380, 30);
	m_wndClose.Create(this, _T("&Close"), 385, 5, 410, 30);

}
void CProductControlInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CProductControlInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);

}
void CProductControlInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CProductControlInput::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Object")] =  m_szObjectKey;
	}
	else
	{
			
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	}

}
void CProductControlInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductControlInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductControlInput::SetDefaultValues(){

	m_szObjectKey.Empty();

}
int CProductControlInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
 			SetDefaultValues();
			m_wndObject.SetFocus();
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
void CProductControlInput::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductControlInput::OnObjectSelendok(){
	 
}
/*void CProductControlInput::OnObjectSetfocus(){
	
}*/
/*void CProductControlInput::OnObjectKillfocus(){
	
}*/
long CProductControlInput::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nCount = 0;
	CString szFilter, szExcept=_T("'-1'");
	CGuiListCtrl* pList = m_pList;
	for (int i = 0; i < pList->GetItemCount(); i++)
	{
		if (!szExcept.IsEmpty())
		{
			szExcept += _T(",");
		}
		szExcept.AppendFormat(_T("'%s'"), pList->GetItemText(i, 1));
	}
	if (m_szType == _T("S"))
	{
		szFilter.Format(_T(" and msl_storage_id not in (%s)"), szExcept);
		nCount = pMF->LoadStorageList(&m_wndObject, m_szObjectKey, szFilter);
	}
	if (m_szType == _T("D"))
	{
		szFilter.Format(_T(" and sd_id not in (%s)"), szExcept);
		//nCount = pMF->LoadDepartment(&m_wndObject, m_szObjectKey, szFilter);
		nCount = pMF->LoadDepartmentList(&m_wndObject, m_szObjectKey, szFilter);
	}
	if (m_szType == _T("U"))
	{
		szFilter.Format(_T(" and su_userid not in (%s)"), szExcept);
		nCount = pMF->LoadUserList(&m_wndObject, m_szObjectKey, szFilter);
	}
	return nCount;
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductControlInput::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductControlInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		return;
	}
	CString szSQL;
	if (m_szType == _T("S"))
	{
		szSQL.Format(
		_T(" INSERT INTO m_product_control") \
		_T(" (") \
		_T("	mpc_createdby,") \
		_T("    mpc_id,") \
		_T("    mpc_product_id,") \
		_T("    mpc_storage_id") \
		_T(" )") \
		_T(" VALUES ") \
		_T(" ( '%s',") \
		_T("   m_product_control_id_asq.NEXTVAL,") \
		_T("   %ld,") \
		_T("   %d ") \
		_T(" )"), pMF->GetCurrentUser(), m_nProduct_id, str2int(m_szObjectKey));

	}
	else 
	{
		szSQL.Format(
		_T(" INSERT INTO m_product_control_line") \
		_T(" (") \
		_T("   mpcl_createdby,") \
		_T("   mpcl_id,") \
		_T("   mpcl_product_control_id,") \
		_T("   mpcl_ref_id,") \
		_T("   mpcl_type") \
		_T(" )") \
		_T(" VALUES") \
		_T(" ( ") \
		_T("   '%s',") \
		_T("   m_product_control_line_id_asq.NEXTVAL,") \
		_T("   %ld,") \
		_T("   '%s',") \
		_T("   '%s' ") \
		_T("  )"), pMF->GetCurrentUser(), m_nProduct_control_id, m_szObjectKey, m_szType);
	}
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		((CProductControl*) m_pParentWnd)->Refresh();
		SetMode(VM_ADD);
	}
} 
void CProductControlInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductControlInput::OnAddProductControlInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductControlInput::OnEditProductControlInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductControlInput::OnDeleteProductControlInput(){
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
 		OnCancelProductControlInput();
 	}
	return 0;
}
int CProductControlInput::OnSaveProductControlInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnProductControlInputListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductControlInput::OnCancelProductControlInput(){
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
int CProductControlInput::OnProductControlInputListLoadData(){
	return 0;
}
