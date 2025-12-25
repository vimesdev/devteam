#include "ChestItemApplyDialog.h"
#include "MainFrame_E10.h"

static void _OnProductTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CChestItemApplyDialog* )pWnd)->OnProductTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductTypeSelendokFnc(CWnd *pWnd){
	((CChestItemApplyDialog *)pWnd)->OnProductTypeSelendok();
}
/*static void _OnProductTypeSetfocusFnc(CWnd *pWnd){
	((CChestItemApplyDialog *)pWnd)->OnProductTypeKillfocus();
}*/
/*static void _OnProductTypeKillfocusFnc(CWnd *pWnd){
	((CChestItemApplyDialog *)pWnd)->OnProductTypeKillfocus();
}*/
static long _OnProductTypeLoadDataFnc(CWnd *pWnd){
	return ((CChestItemApplyDialog *)pWnd)->OnProductTypeLoadData();
}
/*static void _OnProductTypeAddNewFnc(CWnd *pWnd){
	((CChestItemApplyDialog *)pWnd)->OnProductTypeAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CChestItemApplyDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CChestItemApplyDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CChestItemApplyDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CChestItemApplyDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CChestItemApplyDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CChestItemApplyDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CChestItemApplyDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnListCheckAll();
} 
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnListUncheckAll();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CChestItemApplyDialog *pVw = (CChestItemApplyDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CChestItemApplyDialog *pVw = (CChestItemApplyDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CChestItemApplyDialog *pVw = (CChestItemApplyDialog *)pWnd;
	pVw->OnFindSelect();
} 
static int _OnAddChestItemApplyDialogFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnAddChestItemApplyDialog();
} 
static int _OnEditChestItemApplyDialogFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnEditChestItemApplyDialog();
} 
static int _OnDeleteChestItemApplyDialogFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnDeleteChestItemApplyDialog();
} 
static int _OnSaveChestItemApplyDialogFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnSaveChestItemApplyDialog();
} 
static int _OnCancelChestItemApplyDialogFnc(CWnd *pWnd){
	 return ((CChestItemApplyDialog*)pWnd)->OnCancelChestItemApplyDialog();
} 
CChestItemApplyDialog::CChestItemApplyDialog(CWnd *pParent, int nMode, int nStorageID, int nLocationID):
	CGuiDialog(pParent){
	m_nMode = nMode;
	m_nStorageID = nStorageID;
	m_nLocationID = nLocationID;
	_debug(_T("%d %d"), m_nStorageID, m_nLocationID);
	m_nDlgWidth = 490;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CChestItemApplyDialog::~CChestItemApplyDialog(){
}
void CChestItemApplyDialog::OnCreateComponents(){
	m_wndChestItem.Create(this, _T("Chest Item"), 5, 5, 485, 365);
	m_wndProductTypeLabel.Create(this, _T("Product Type"), 10, 30, 90, 55);
	m_wndProductType.Create(this,95, 30, 280, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 285, 30, 365, 55);
	m_wndSearch.Create(this,370, 30, 450, 55);
	m_wndList.Create(this,10, 60, 480, 360);
	m_wndList.SetCheckBox(true);
	m_wndApply.Create(this, _T("&Apply"), 320, 370, 400, 395);
	m_wndClose.Create(this, _T("&Close"), 405, 370, 485, 395);
	m_wndFind.Create(this, _T("@"), 455, 30, 480, 55);

}
void CChestItemApplyDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductType.SetCheckValue(true);
	m_wndProductType.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);

	m_wndProductType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProductType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 45);
	m_wndList.InsertColumn(1, _T("Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 275);
	m_wndList.InsertColumn(3, _T(""), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 50);

	m_product_locationTbl.SetTableName(_T("m_product_location"));
	m_product_locationTbl.AddField(_T("mpl_storage_id"), dfInteger);
	m_product_locationTbl.AddField(_T("mpl_product_id"), dfLong);
	m_product_locationTbl.AddField(_T("mpl_location_id"), dfInteger);

}
void CChestItemApplyDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductType.SetEvent(WE_SELENDOK, _OnProductTypeSelendokFnc);
	//m_wndProductType.SetEvent(WE_SETFOCUS, _OnProductTypeSetfocusFnc);
	//m_wndProductType.SetEvent(WE_KILLFOCUS, _OnProductTypeKillfocusFnc);
	m_wndProductType.SetEvent(WE_SELCHANGE, _OnProductTypeSelectChangeFnc);
	m_wndProductType.SetEvent(WE_LOADDATA, _OnProductTypeLoadDataFnc);
	//m_wndProductType.SetEvent(WE_ADDNEW, _OnProductTypeAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("Uncheck All"), _OnListUnCheckAllFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	OnListLoadData();

}
void CChestItemApplyDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProductType.GetDlgCtrlID(), m_szProductTypeKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CChestItemApplyDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CChestItemApplyDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CChestItemApplyDialog::SetDefaultValues(){

	m_szProductTypeKey.Empty();
	m_szSearch.Empty();

}
int CChestItemApplyDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CChestItemApplyDialog::OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CChestItemApplyDialog::OnProductTypeSelendok(){
	 
}
/*void CChestItemApplyDialog::OnProductTypeSetfocus(){
	
}*/
/*void CChestItemApplyDialog::OnProductTypeKillfocus(){
	
}*/
long CChestItemApplyDialog::OnProductTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductTypeList(&m_wndProductType, m_szProductTypeKey);
}
/*void CChestItemApplyDialog::OnProductTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CChestItemApplyDialog::OnSearchChange(){
	
} */
/*void CChestItemApplyDialog::OnSearchSetfocus(){
	
} */
/*void CChestItemApplyDialog::OnSearchKillfocus(){
	
} */
int CChestItemApplyDialog::OnSearchCheckValue(){
	m_wndList.Search(2, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CChestItemApplyDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	m_wndList.SetCheck(nSel, true);
} 
void CChestItemApplyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CChestItemApplyDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CChestItemApplyDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	if (!m_szProductTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_producttype = '%s'"), m_szProductTypeKey);
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT    product_id id, product_code code, ") \
				_T("           product_name name, product_uomname ") \
				_T(" FROM      m_product_view ") \
				_T(" WHERE product_id NOT IN (SELECT mpl_product_id FROM m_product_location WHERE mpl_storage_id = %d)") \
				_T(" AND product_id IN (SELECT msl_product_id FROM m_storageline WHERE msl_storage_id = %d) %s ORDER BY product_name"), m_nStorageID, m_nStorageID, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIdx++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("code")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("id")),
			rs.GetValue(_T("product_uomname")) ,NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CChestItemApplyDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	m_product_locationTbl.SetValue(_T("mpl_storage_id"), m_nStorageID);
	m_product_locationTbl.SetValue(_T("mpl_location_id"), m_nLocationID);
	for (int i = 0; i < m_wndList.GetItemCount();i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_nProductID = str2long(m_wndList.GetItemText(i, 3));
			m_product_locationTbl.SetValue(_T("mpl_product_id"), m_nProductID);
			szSQL = m_product_locationTbl.GetInsertSQL();
			pMF->ExecSQL(szSQL);
		}
	}
	OnListLoadData();
} 
void CChestItemApplyDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CChestItemApplyDialog::OnFindSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
int CChestItemApplyDialog::OnAddChestItemApplyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CChestItemApplyDialog::OnEditChestItemApplyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CChestItemApplyDialog::OnDeleteChestItemApplyDialog(){
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
 		OnCancelChestItemApplyDialog();
 	}
	return 0;
}
int CChestItemApplyDialog::OnSaveChestItemApplyDialog(){
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
 		//OnChestItemApplyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CChestItemApplyDialog::OnCancelChestItemApplyDialog(){
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
int CChestItemApplyDialog::OnChestItemApplyDialogListLoadData(){
	return 0;
}
int CChestItemApplyDialog::OnListCheckAll(){
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		m_wndList.SetCheck(i, true);
	return 0;
}

int CChestItemApplyDialog::OnListUncheckAll(){
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		m_wndList.SetCheck(i, false);
	return 0;
}