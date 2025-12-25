#include "IVFMapItemType.h"
#include "MainFrm.h"
static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnSearchChange();
}
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFMapItemType *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFMapItemType* )pWnd)->OnTypeNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeNameSelendokFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnTypeNameSelendok();
}
/*static void _OnTypeNameSetfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnTypeNameKillfocus();
}*/
/*static void _OnTypeNameKillfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnTypeNameKillfocus();
}*/
static long _OnTypeNameLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapItemType *)pWnd)->OnTypeNameLoadData();
}
/*static void _OnTypeNameAddNewFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnTypeNameAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFMapItemType* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapItemType *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFMapItemType* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapItemType *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CIVFMapItemType *)pWnd)->OnItemAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CIVFMapItemType *pVw = (CIVFMapItemType *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFMapItemType *pVw = (CIVFMapItemType *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapItemType*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFMapItemType*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFMapItemType*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFMapItemType*)pWnd)->OnListDeleteItem();
} 
static int _OnAddIVFMapItemTypeFnc(CWnd *pWnd){
	 return ((CIVFMapItemType*)pWnd)->OnAddIVFMapItemType();
} 
static int _OnEditIVFMapItemTypeFnc(CWnd *pWnd){
	 return ((CIVFMapItemType*)pWnd)->OnEditIVFMapItemType();
} 
static int _OnDeleteIVFMapItemTypeFnc(CWnd *pWnd){
	 return ((CIVFMapItemType*)pWnd)->OnDeleteIVFMapItemType();
} 
static int _OnSaveIVFMapItemTypeFnc(CWnd *pWnd){
	 return ((CIVFMapItemType*)pWnd)->OnSaveIVFMapItemType();
} 
static int _OnCancelIVFMapItemTypeFnc(CWnd *pWnd){
	 return ((CIVFMapItemType*)pWnd)->OnCancelIVFMapItemType();
} 
CIVFMapItemType::CIVFMapItemType(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFMapItemType::~CIVFMapItemType(){
}
void CIVFMapItemType::OnCreateComponents(){
	m_wndMap.Create(this, _T("Map"), 5, 360, 640, 445);
	m_wndParaclinicalList.Create(this, _T("Paraclinical List"), 5, 5, 640, 355);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 335, 55); 
	m_wndTypeNameLabel.Create(this, _T("Type Name"), 10, 385, 90, 410);
	m_wndTypeName.Create(this,95, 385, 270, 410); 
	m_wndGroupLabel.Create(this, _T("Group"), 275, 385, 355, 410);
	m_wndGroup.Create(this,360, 385, 635, 410); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 415, 90, 440);
	m_wndItem.Create(this,95, 415, 635, 440); 
	m_wndApply.Create(this, _T("&Apply"), 475, 450, 555, 475);
	m_wndClose.Create(this, _T("&Close"), 560, 450, 640, 475);
	m_wndList.Create(this,10, 60, 635, 350); 

}
void CIVFMapItemType::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	//m_wndSearch.SetCheckValue(true);
	//m_wndTypeName.SetCheckValue(true);
	m_wndTypeName.LimitText(1024);
	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	//m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(1024);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Type Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("Item"), CFMT_TEXT, 350);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("Item ID"), CFMT_TEXT, 100);
	m_wndItem.InsertColumn(2, _T("Desc"), CFMT_TEXT, 700);
	m_wndItem.InsertColumn(3, _T("Type"), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(4, _T("Apply date"), CFMT_TEXT, 100);
	m_wndItem.Format(5, 2);

	m_wndTypeName.InsertColumn(0, _T("Type ID"), CFMT_TEXT, 100);
	m_wndTypeName.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);

	m_wndGroup.InsertColumn(0, _T("Group ID"), CFMT_TEXT, 150);
	m_wndGroup.InsertColumn(1, _T("Desc"), CFMT_TEXT, 350);

}
void CIVFMapItemType::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTypeName.SetEvent(WE_SELENDOK, _OnTypeNameSelendokFnc);
	//m_wndTypeName.SetEvent(WE_SETFOCUS, _OnTypeNameSetfocusFnc);
	//m_wndTypeName.SetEvent(WE_KILLFOCUS, _OnTypeNameKillfocusFnc);
	m_wndTypeName.SetEvent(WE_SELCHANGE, _OnTypeNameSelectChangeFnc);
	m_wndTypeName.SetEvent(WE_LOADDATA, _OnTypeNameLoadDataFnc);
	//m_wndTypeName.SetEvent(WE_ADDNEW, _OnTypeNameAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	OnListLoadData();
	EnableControls();
	EnableButtons(FALSE, -1);

}
void CIVFMapItemType::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndTypeName.GetDlgCtrlID(), m_szTypeNameKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);

}
void CIVFMapItemType::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("TypeName")] =  m_szTypeNameKey;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Item")] =  m_szItemKey;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("TypeName")].GetValue(m_szTypeNameKey);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	}

}
void CIVFMapItemType::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFMapItemType::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFMapItemType::SetDefaultValues(){
	m_szSearch.Empty();
	m_szTypeNameKey.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();

}
int CIVFMapItemType::SetMode(int nMode){
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
void CIVFMapItemType::OnSearchChange(){
	UpdateData();
	//if (m_szSearch.GetLength() < 2)
	//{
	//	return;
	//}
	m_wndList.Search(3, m_szSearch, SS_LIKE);
	
}
/*void CIVFMapItemType::OnSearchSetfocus(){
	
} */
/*void CIVFMapItemType::OnSearchKillfocus(){
	
} */
int CIVFMapItemType::OnSearchCheckValue(){
	return 0;
} 
void CIVFMapItemType::OnTypeNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFMapItemType::OnTypeNameSelendok(){
	 
}
/*void CIVFMapItemType::OnTypeNameSetfocus(){
	
}*/
/*void CIVFMapItemType::OnTypeNameKillfocus(){
	
}*/
long CIVFMapItemType::OnTypeNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadComboBoxList(&m_wndTypeName, m_szTypeNameKey, _T("ivf_storage_loai"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeName.IsSearchKey() && !m_szTypeNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeNameKey
};
	m_wndTypeName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFMapItemType::OnTypeNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFMapItemType::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFMapItemType::OnGroupSelendok(){
	 
}
/*void CIVFMapItemType::OnGroupSetfocus(){
	
}*/
/*void CIVFMapItemType::OnGroupKillfocus(){
	
}*/
long CIVFMapItemType::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and group_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szWhere.AppendFormat(_T(" AND group_type IN ('P', 'T')"));
	szSQL.Format(_T("SELECT group_id, group_name") \
				_T(" FROM ivf_item_group_view ") \
				_T(" WHERE 1=1 ") \
				_T(" %s ORDER BY group_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("group_id")),
			rs.GetValue(_T("group_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CIVFMapItemType::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFMapItemType::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFMapItemType::OnItemSelendok(){
	 
}
/*void CIVFMapItemType::OnItemSetfocus(){
	
}*/
/*void CIVFMapItemType::OnItemKillfocus(){
	
}*/
long CIVFMapItemType::OnItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" and iid='%s' "), m_szItemKey);
	}
	if (!m_szGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and group_id = '%s'"), m_szGroupKey);
	}
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szWhere.AppendFormat(_T(" AND itype IN ('O', 'P', 'T')"));
	szSQL.Format(_T("SELECT iid, icode, iname, itype, apply_date ") \
				_T(" FROM ivf_item_view ") \
				_T(" WHERE 1=1 ") \
				_T(" %s ORDER BY iid, to_date(apply_date, 'dd/mm/yyyy') "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("iid")),
			rs.GetValue(_T("icode")),
			rs.GetValue(_T("iname")),
			rs.GetValue(_T("itype")),
			rs.GetValue(_T("apply_date")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CIVFMapItemType::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFMapItemType::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		return;
	}
	CString szSQL;
	CDbfMap tbl;
	tbl.SetTableName(_T("ivf_lab_group"));
	tbl.AddField(_T("ilg_itemid"), dfText, 15);
	tbl.AddField(_T("ilg_type"), dfText, 15);
	tbl.AddField(_T("ilg_description"), dfText, 128);

	tbl.SetValue(_T("ilg_itemid"), m_szItemKey);
	tbl.SetValue(_T("ilg_type"), m_szTypeNameKey);
	tbl.SetValue(_T("ilg_description"), m_wndTypeName.GetCurrent(1));
	szSQL = tbl.GetInsertSQL();
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
} 
void CIVFMapItemType::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CIVFMapItemType::OnListDblClick(){
	
} 
void CIVFMapItemType::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFMapItemType::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	CString szSQL, szItemID = m_wndList.GetItemText(nSel, 0);
	szSQL.Format(_T("delete from ivf_lab_group where ilg_itemid = '%s'"), szItemID);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
	return 0;
} 
long CIVFMapItemType::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T("SELECT    ilg_itemid AS id,") \
	_T("          ilg_description AS type_name,") \
	_T("          hfl_name AS item") \
	_T(" FROM      ivf_lab_group") \
	_T(" left join hms_fee_list ON ( ilg_itemid = hfl_feeid ) "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			int2str(nIdx++),
			rs.GetValue(_T("Type_Name")), 
			rs.GetValue(_T("Item")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CIVFMapItemType::OnAddIVFMapItemType(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFMapItemType::OnEditIVFMapItemType(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFMapItemType::OnDeleteIVFMapItemType(){
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
 		OnCancelIVFMapItemType();
 	}
	return 0;
}
int CIVFMapItemType::OnSaveIVFMapItemType(){
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
 		//OnIVFMapItemTypeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFMapItemType::OnCancelIVFMapItemType(){
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
int CIVFMapItemType::OnIVFMapItemTypeListLoadData(){
	return 0;
}
