#include "ProductMapInsuranceGroupDialog.h"
#include "MainFrame_E10.h"
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductMapInsuranceGroupDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CProductMapInsuranceGroupDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CProductMapInsuranceGroupDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnInsuranceGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductMapInsuranceGroupDialog* )pWnd)->OnInsuranceGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInsuranceGroupSelendokFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnInsuranceGroupSelendok();
}
/*static void _OnInsuranceGroupSetfocusFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnInsuranceGroupKillfocus();
}*/
/*static void _OnInsuranceGroupKillfocusFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnInsuranceGroupKillfocus();
}*/
static long _OnInsuranceGroupLoadDataFnc(CWnd *pWnd){
	return ((CProductMapInsuranceGroupDialog *)pWnd)->OnInsuranceGroupLoadData();
}
/*static void _OnInsuranceGroupAddNewFnc(CWnd *pWnd){
	((CProductMapInsuranceGroupDialog *)pWnd)->OnInsuranceGroupAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductMapInsuranceGroupDialog *pVw = (CProductMapInsuranceGroupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductMapInsuranceGroupDialog *pVw = (CProductMapInsuranceGroupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductMapInsuranceGroupDialogFnc(CWnd *pWnd){
	 return ((CProductMapInsuranceGroupDialog*)pWnd)->OnAddProductMapInsuranceGroupDialog();
} 
static int _OnEditProductMapInsuranceGroupDialogFnc(CWnd *pWnd){
	 return ((CProductMapInsuranceGroupDialog*)pWnd)->OnEditProductMapInsuranceGroupDialog();
} 
static int _OnDeleteProductMapInsuranceGroupDialogFnc(CWnd *pWnd){
	 return ((CProductMapInsuranceGroupDialog*)pWnd)->OnDeleteProductMapInsuranceGroupDialog();
} 
static int _OnSaveProductMapInsuranceGroupDialogFnc(CWnd *pWnd){
	 return ((CProductMapInsuranceGroupDialog*)pWnd)->OnSaveProductMapInsuranceGroupDialog();
} 
static int _OnCancelProductMapInsuranceGroupDialogFnc(CWnd *pWnd){
	 return ((CProductMapInsuranceGroupDialog*)pWnd)->OnCancelProductMapInsuranceGroupDialog();
} 
CProductMapInsuranceGroupDialog::CProductMapInsuranceGroupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CProductMapInsuranceGroupDialog::~CProductMapInsuranceGroupDialog(){
}
void CProductMapInsuranceGroupDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 7, 9, 122, 34);
	m_wndName.Create(this,127, 9, 805, 34); 
	m_wndDescription.Create(this,127, 39, 805, 98); 
	m_wndInsuranceGroupLabel.Create(this, _T("Insurance Group"), 7, 103, 122, 128);
	m_wndInsuranceGroup.Create(this,127, 103, 805, 128); 
	m_wndSave.Create(this, _T("&Save"), 639, 133, 719, 158);
	m_wndClose.Create(this, _T("&Close"), 724, 133, 804, 158);

}
void CProductMapInsuranceGroupDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetReadOnly(true);
	m_wndInsuranceGroup.SetCheckValue(true);
	m_wndInsuranceGroup.LimitText(35);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndName.InsertColumn(1, _T("code"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(2, _T("Name"), CFMT_TEXT, 400);
	m_wndName.Format(3, 2);

	m_wndInsuranceGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndInsuranceGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CProductMapInsuranceGroupDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndInsuranceGroup.SetEvent(WE_SELENDOK, _OnInsuranceGroupSelendokFnc);
	//m_wndInsuranceGroup.SetEvent(WE_SETFOCUS, _OnInsuranceGroupSetfocusFnc);
	//m_wndInsuranceGroup.SetEvent(WE_KILLFOCUS, _OnInsuranceGroupKillfocusFnc);
	m_wndInsuranceGroup.SetEvent(WE_SELCHANGE, _OnInsuranceGroupSelectChangeFnc);
	m_wndInsuranceGroup.SetEvent(WE_LOADDATA, _OnInsuranceGroupLoadDataFnc);
	//m_wndInsuranceGroup.SetEvent(WE_ADDNEW, _OnInsuranceGroupAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);

}
void CProductMapInsuranceGroupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndInsuranceGroup.GetDlgCtrlID(), m_szInsuranceGroupKey);

}
void CProductMapInsuranceGroupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szNameKey;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("InsuranceGroup")] =  m_szInsuranceGroupKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szNameKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("InsuranceGroup")].GetValue(m_szInsuranceGroupKey);
	}

}
void CProductMapInsuranceGroupDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductMapInsuranceGroupDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductMapInsuranceGroupDialog::SetDefaultValues(){

	m_szNameKey.Empty();
	m_szDescription.Empty();
	m_szInsuranceGroupKey.Empty();

}
int CProductMapInsuranceGroupDialog::SetMode(int nMode){
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
			m_wndName.SetFocus();

 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
void CProductMapInsuranceGroupDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductMapInsuranceGroupDialog::OnNameSelendok(){
	 UpdateData(TRUE);
	 CString szDesc = m_wndName.GetCurrent(2);
	 m_wndDescription.SetWindowText(szDesc);
}
/*void CProductMapInsuranceGroupDialog::OnNameSetfocus(){
	
}*/
/*void CProductMapInsuranceGroupDialog::OnNameKillfocus(){
	
}*/
long CProductMapInsuranceGroupDialog::OnNameLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and mp_atccode is null "));
	return pMF->LoadProductList(&m_wndName, m_szNameKey);
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
/*void CProductMapInsuranceGroupDialog::OnNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductMapInsuranceGroupDialog::OnDescriptionChange(){
	
} */
/*void CProductMapInsuranceGroupDialog::OnDescriptionSetfocus(){
	
} */
/*void CProductMapInsuranceGroupDialog::OnDescriptionKillfocus(){
	
} */
int CProductMapInsuranceGroupDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CProductMapInsuranceGroupDialog::OnInsuranceGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductMapInsuranceGroupDialog::OnInsuranceGroupSelendok(){
	 
}
/*void CProductMapInsuranceGroupDialog::OnInsuranceGroupSetfocus(){
	
}*/
/*void CProductMapInsuranceGroupDialog::OnInsuranceGroupKillfocus(){
	
}*/
long CProductMapInsuranceGroupDialog::OnInsuranceGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndInsuranceGroup.IsSearchKey() && !m_szInsuranceGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and mpgm_id='%s' "), m_szInsuranceGroupKey);
	};
	m_wndInsuranceGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpgm_id as id, mpgm_name as name ") \
		_T("FROM m_product_group_material WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInsuranceGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CProductMapInsuranceGroupDialog::OnInsuranceGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductMapInsuranceGroupDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	UpdateData(TRUE);
	szSQL.Format(_T("UPDATE m_product SET mp_atccode='%s' WHERE mp_product_id=%ld"),
		m_szInsuranceGroupKey, str2long(m_szNameKey));
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		SetMode(VM_ADD);
	}
} 
void CProductMapInsuranceGroupDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductMapInsuranceGroupDialog::OnAddProductMapInsuranceGroupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductMapInsuranceGroupDialog::OnEditProductMapInsuranceGroupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductMapInsuranceGroupDialog::OnDeleteProductMapInsuranceGroupDialog(){
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
 		OnCancelProductMapInsuranceGroupDialog();
 	}
	return 0;
}
int CProductMapInsuranceGroupDialog::OnSaveProductMapInsuranceGroupDialog(){
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
 		//OnProductMapInsuranceGroupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductMapInsuranceGroupDialog::OnCancelProductMapInsuranceGroupDialog(){
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
int CProductMapInsuranceGroupDialog::OnProductMapInsuranceGroupDialogListLoadData(){
	return 0;
}
