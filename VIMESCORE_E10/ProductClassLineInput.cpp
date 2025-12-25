#include "ProductClassLineInput.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductClassLineInput*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductClassLineInput*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductClassLineInput*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductClassLineInput*)pWnd)->OnListDeleteItem();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductClassLineInput* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CProductClassLineInput *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductClassLineInput *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductClassLineInput *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CProductClassLineInput *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CProductClassLineInput *)pWnd)->OnNameAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductClassLineInput *pVw = (CProductClassLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CProductClassLineInput *pVw = (CProductClassLineInput *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddProductClassLineInputFnc(CWnd *pWnd){
	 return ((CProductClassLineInput*)pWnd)->OnAddProductClassLineInput();
} 
static int _OnEditProductClassLineInputFnc(CWnd *pWnd){
	 return ((CProductClassLineInput*)pWnd)->OnEditProductClassLineInput();
} 
static int _OnDeleteProductClassLineInputFnc(CWnd *pWnd){
	 return ((CProductClassLineInput*)pWnd)->OnDeleteProductClassLineInput();
} 
static int _OnSaveProductClassLineInputFnc(CWnd *pWnd){
	 return ((CProductClassLineInput*)pWnd)->OnSaveProductClassLineInput();
} 
static int _OnCancelProductClassLineInputFnc(CWnd *pWnd){
	 return ((CProductClassLineInput*)pWnd)->OnCancelProductClassLineInput();
} 
CProductClassLineInput::CProductClassLineInput(){
	m_nRefId = 0;
	m_nDlgWidth = 470;
	m_nDlgHeight = 495;
	SetDefaultValues();
}
CProductClassLineInput::~CProductClassLineInput(){
}
void CProductClassLineInput::OnCreateComponents(){
	m_wndList.Create(this,0, 0, 460, 455); 
	m_wndNameLabel.Create(this, _T("Name"), 1, 460, 81, 485);
	m_wndName.Create(this,86, 460, 401, 485); 
	m_wndSave.Create(this, _T("&Save"), 406, 460, 431, 485);
	m_wndCancel.Create(this, _T("&Cancel"), 436, 460, 461, 485);

}
void CProductClassLineInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 340);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_tbl_product_class_line.SetTableName(L"m_product_classline");
	m_tbl_product_class_line.AddField(L"mpcl_class_id", dfLong);
	m_tbl_product_class_line.AddField(L"mpcl_refid", dfLong);

	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
}
void CProductClassLineInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	EnableControls(TRUE);
	EnableButtons(FALSE, -1);
}
void CProductClassLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);

}
void CProductClassLineInput::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szNameKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szNameKey);
	}

}
void CProductClassLineInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductClassLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_tbl_product_class_line.SetValue(L"mpcl_class_id", m_wndName.GetCurrent(0));
	m_tbl_product_class_line.SetValue(L"mpcl_refid", m_nRefId);
}
void CProductClassLineInput::SetDefaultValues(){

	m_szNameKey.Empty();

}
int CProductClassLineInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CProductClassLineInput::OnListDblClick(){
	
} 
void CProductClassLineInput::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nClassId = str2long(m_wndList.GetItemText(nNewItem, 0));
} 
int CProductClassLineInput::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return OnDeleteProductClassLineInput();
	
} 
long CProductClassLineInput::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(L"select mpcl_class_id as id, mpc_name as name from m_product_classline " \
				L" left join m_product_class on (mpc_product_class_id = mpcl_class_id)" \
				L" where mpcl_refid = %ld", m_nRefId);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			int2str(nIdx++), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CProductClassLineInput::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductClassLineInput::OnNameSelendok(){
	 
}
/*void CProductClassLineInput::OnNameSetfocus(){
	
}*/
/*void CProductClassLineInput::OnNameKillfocus(){
	
}*/
long CProductClassLineInput::OnNameLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	if (m_nRefId > 0)
	{
		szFilter.Format(L" and mpc_product_class_id not in (select mpcl_class_id from m_product_classline where mpcl_refid = %ld)", m_nRefId);
	}
	return pMF->LoadProductClassList(&m_wndName, m_szNameKey, szFilter);
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
/*void CProductClassLineInput::OnNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductClassLineInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		return;
	}
	CString szSQL = m_tbl_product_class_line.GetInsertSQL(szSQL);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
		m_wndName.ResetContent();
		m_wndName.SetFocus();
	}
} 
void CProductClassLineInput::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	ClosePopup();
} 
int CProductClassLineInput::OnAddProductClassLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductClassLineInput::OnEditProductClassLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductClassLineInput::OnDeleteProductClassLineInput(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	if (m_wndList.GetCurSel() < 0)
	{
		return -1;
	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM m_product_classline WHERE mpcl_class_id = %ld AND mpcl_refid = %ld"), m_nClassId, m_nRefId);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnListLoadData();
 	}
	return 0;
}
int CProductClassLineInput::OnSaveProductClassLineInput(){
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
 		//OnProductClassLineInputListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductClassLineInput::OnCancelProductClassLineInput(){
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
int CProductClassLineInput::OnProductClassLineInputListLoadData(){
	return 0;
}
