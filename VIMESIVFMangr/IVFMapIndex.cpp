#include "IVFMapIndex.h"
#include "MainFrm.h"
static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnSearchChange();
}
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFMapIndex *)pWnd)->OnSearchCheckValue();
} 
static void _OnIndexNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFMapIndex* )pWnd)->OnIndexNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndexNameSelendokFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnIndexNameSelendok();
}
/*static void _OnIndexNameSetfocusFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnIndexNameKillfocus();
}*/
/*static void _OnIndexNameKillfocusFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnIndexNameKillfocus();
}*/
static long _OnIndexNameLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapIndex *)pWnd)->OnIndexNameLoadData();
}
/*static void _OnIndexNameAddNewFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnIndexNameAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFMapIndex* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapIndex *)pWnd)->OnItemLoadData();
}

/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CIVFMapIndex *)pWnd)->OnItemAddNew();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapIndex *)pWnd)->OnGroupLoadData();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CIVFMapIndex *pVw = (CIVFMapIndex *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFMapIndex *pVw = (CIVFMapIndex *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnParaclinicalSelectFnc(CWnd *pWnd){
	  ((CIVFMapIndex*)pWnd)->OnParaclinicalSelect();
}
static void _OnDrugSelectFnc(CWnd *pWnd){
	  ((CIVFMapIndex*)pWnd)->OnDrugSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFMapIndex*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFMapIndex*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFMapIndex*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFMapIndex*)pWnd)->OnListDeleteItem();
} 
static int _OnAddIVFMapIndexFnc(CWnd *pWnd){
	 return ((CIVFMapIndex*)pWnd)->OnAddIVFMapIndex();
} 
static int _OnEditIVFMapIndexFnc(CWnd *pWnd){
	 return ((CIVFMapIndex*)pWnd)->OnEditIVFMapIndex();
} 
static int _OnDeleteIVFMapIndexFnc(CWnd *pWnd){
	 return ((CIVFMapIndex*)pWnd)->OnDeleteIVFMapIndex();
} 
static int _OnSaveIVFMapIndexFnc(CWnd *pWnd){
	 return ((CIVFMapIndex*)pWnd)->OnSaveIVFMapIndex();
} 
static int _OnCancelIVFMapIndexFnc(CWnd *pWnd){
	 return ((CIVFMapIndex*)pWnd)->OnCancelIVFMapIndex();
} 
CIVFMapIndex::CIVFMapIndex(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CIVFMapIndex::~CIVFMapIndex(){
}
void CIVFMapIndex::OnCreateComponents(){
	m_wndMap.Create(this, _T("Map"), 5, 360, 640, 445);
	m_wndIndexList.Create(this, _T("Index List"), 5, 5, 640, 355);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 335, 55); 
	m_wndIndexNameLabel.Create(this, _T("Index Name"), 10, 385, 90, 410);
	m_wndIndexName.Create(this,95, 385, 270, 410); 
	m_wndGroupLabel.Create(this, _T("Group"), 275, 385, 355, 410);
	m_wndGroup.Create(this,360, 385, 635, 410); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 415, 90, 440);
	m_wndItem.Create(this,95, 415, 635, 440); 
	m_wndApply.Create(this, _T("&Apply"), 475, 450, 555, 475);
	m_wndClose.Create(this, _T("&Close"), 560, 450, 640, 475);
	m_wndParaclinical.Create(this, _T("Paraclinical"), 405, 30, 515, 55);
	m_wndDrug.Create(this, _T("Drug"), 520, 30, 630, 55);
	m_wndList.Create(this,10, 60, 635, 350); 

}
void CIVFMapIndex::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndIndexName.SetCheckValue(true);
	m_wndIndexName.LimitText(1024);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(1024);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Index Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("Item"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(4, _T("Code"), CFMT_TEXT, 80);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("Item ID"), CFMT_TEXT, 100);
	m_wndItem.InsertColumn(2, _T("Desc"), CFMT_TEXT, 700);
	m_wndItem.InsertColumn(3, _T("Type"), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(4, _T("Apply date"), CFMT_TEXT, 100);
	m_wndItem.Format(5, 2);

	m_wndIndexName.InsertColumn(0, _T("Index ID"), CFMT_TEXT, 100);
	m_wndIndexName.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);

	m_wndGroup.InsertColumn(0, _T("Group ID"), CFMT_TEXT, 150);
	m_wndGroup.InsertColumn(1, _T("Desc"), CFMT_TEXT, 350);
}
void CIVFMapIndex::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndIndexName.SetEvent(WE_SELENDOK, _OnIndexNameSelendokFnc);
	//m_wndIndexName.SetEvent(WE_SETFOCUS, _OnIndexNameSetfocusFnc);
	//m_wndIndexName.SetEvent(WE_KILLFOCUS, _OnIndexNameKillfocusFnc);
	m_wndIndexName.SetEvent(WE_SELCHANGE, _OnIndexNameSelectChangeFnc);
	m_wndIndexName.SetEvent(WE_LOADDATA, _OnIndexNameLoadDataFnc);
	//m_wndIndexName.SetEvent(WE_ADDNEW, _OnIndexNameAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndParaclinical.SetEvent(WE_CLICK, _OnParaclinicalSelectFnc);
	m_wndDrug.SetEvent(WE_CLICK, _OnDrugSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	OnListLoadData();
	EnableControls();
	EnableButtons(FALSE, -1);

}
void CIVFMapIndex::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndIndexName.GetDlgCtrlID(), m_szIndexNameKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Radio(pDX, m_wndParaclinical.GetDlgCtrlID(), m_nParaclinical);
	DDX_Radio(pDX, m_wndDrug.GetDlgCtrlID(), m_nDrug);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);

}
void CIVFMapIndex::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("IndexName")] =  m_szIndexNameKey;
	m_jData[_T("Item")] =  m_szItemKey;
	m_jData[_T("Paraclinical")] =  m_nParaclinical;
	m_jData[_T("Drug")] =  m_nDrug;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("IndexName")].GetValue(m_szIndexNameKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	m_jData[_T("Paraclinical")].GetValue(m_nParaclinical);
	m_jData[_T("Drug")].GetValue(m_nDrug);
	}

}
void CIVFMapIndex::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFMapIndex::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFMapIndex::SetDefaultValues(){

	m_szSearch.Empty();
	m_szIndexNameKey.Empty();
	m_szItemKey.Empty();
	m_nParaclinical=0;
	m_szGroupKey.Empty();
}
int CIVFMapIndex::SetMode(int nMode){
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
void CIVFMapIndex::OnSearchChange(){
	UpdateData();
	//if (m_szSearch.GetLength() < 2)
	//{
	//	return;
	//}
	m_wndList.Search(2, m_szSearch, SS_LIKE);

}
/*void CIVFMapIndex::OnSearchSetfocus(){
	
} */
/*void CIVFMapIndex::OnSearchKillfocus(){
	
} */
int CIVFMapIndex::OnSearchCheckValue(){
	return 0;
} 
void CIVFMapIndex::OnIndexNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFMapIndex::OnIndexNameSelendok(){
	 
}
/*void CIVFMapIndex::OnIndexNameSetfocus(){
	
}*/
/*void CIVFMapIndex::OnIndexNameKillfocus(){
	
}*/
long CIVFMapIndex::OnIndexNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSelId;
	if (m_nParaclinical == 0)
	{
		szSelId = _T("ivf_para_index");
	}
	else if (m_nParaclinical == 1)
	{
		szSelId = _T("ivf_drug_index");
	}
	return pMF->LoadSelectionList(&m_wndIndexName, szSelId, m_szIndexNameKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndexName.IsSearchKey() && !m_szIndexNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szIndexNameKey
};
	m_wndIndexName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndexName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFMapIndex::OnIndexNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFMapIndex::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFMapIndex::OnItemSelendok(){
	 
}
/*void CIVFMapIndex::OnItemSetfocus(){
	
}*/
/*void CIVFMapIndex::OnItemKillfocus(){
	
}*/
long CIVFMapIndex::OnItemLoadData(){
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
	switch (m_nParaclinical)
	{
		case 0:
			szWhere.AppendFormat(_T(" AND itype IN ('P', 'T')"));
			break;
		case 1:
			szWhere.AppendFormat(_T(" AND itype IN ('D')"));
			break;
		default:
			break;
	}
	szSQL.Format(_T("SELECT iid, icode, iname, itype, apply_date ") \
				_T(" FROM ivf_item_view ") \
				_T(" WHERE iid not in (select imi_item_id from ivf_map_index) ") \
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
/*void CIVFMapIndex::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFMapIndex::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CDbfMap tbl;
	tbl.SetTableName(_T("ivf_map_index"));
	tbl.AddField(_T("imi_createdby"), dfText, 20);
	tbl.AddField(_T("imi_index_id"), dfText, 30);
	tbl.AddField(_T("imi_item_id"), dfText, 20);
	tbl.AddField(_T("imi_type"), dfText, 1);
	tbl.SetValue(_T("imi_createdby"), pMF->GetCurrentUser());
	tbl.SetValue(_T("imi_index_id"), m_wndIndexName.GetCurrent(0));
	tbl.SetValue(_T("imi_item_id"), m_wndItem.GetCurrent(0));
	tbl.SetValue(_T("imi_type"), m_wndItem.GetCurrent(3));
	szSQL = tbl.GetInsertSQL();
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
} 
void CIVFMapIndex::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CIVFMapIndex::OnParaclinicalSelect(){
	UpdateData();
	OnListLoadData();
}
void CIVFMapIndex::OnDrugSelect(){
	UpdateData();
	OnListLoadData();
}
void CIVFMapIndex::OnListDblClick(){
	
} 
void CIVFMapIndex::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFMapIndex::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nID = str2long(m_wndList.GetItemText(nSel, 0));
	CString szSQL;
	szSQL.Format(_T("DELETE FROM ivf_map_index WHERE imi_id = %ld"), nID);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)	
	{
		OnListLoadData();
	}
	return 0;
} 
long CIVFMapIndex::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	switch (m_nParaclinical)
	{
		case 0:
			szWhere.Format(_T(" AND imi_type IN ('P', 'T')"));
			break;
		case 1:
			szWhere.Format(_T(" AND imi_type = 'D'"));
			break;
		default:
			break;
	}
	szSQL.Format(
		_T("SELECT    imi_id AS ID,") \
		_T(" Get_syssel_desc('ivf_drug_index', imi_index_id)||Get_syssel_desc('ivf_para_index', imi_index_id) AS index_name,") \
		_T("          iname AS item, icode") \
		_T(" FROM      ivf_map_index") \
		_T(" LEFT JOIN ivf_item_view ON ( imi_item_id = iid )") \
		_T(" WHERE 1=1 %s") \
		_T(" ORDER     BY id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			int2str(nIdx++),
			rs.GetValue(_T("Index_Name")), 
			rs.GetValue(_T("Item")),
			rs.GetValue(_T("icode"))
			, NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CIVFMapIndex::OnAddIVFMapIndex(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFMapIndex::OnEditIVFMapIndex(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFMapIndex::OnDeleteIVFMapIndex(){
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
 		OnCancelIVFMapIndex();
 	}
	return 0;
}
int CIVFMapIndex::OnSaveIVFMapIndex(){
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
 		//OnIVFMapIndexListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFMapIndex::OnCancelIVFMapIndex(){
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
int CIVFMapIndex::OnIVFMapIndexListLoadData(){
	return 0;
}

long CIVFMapIndex::OnGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and group_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	switch (m_nParaclinical)
	{
		case 0:
			szWhere.AppendFormat(_T(" AND group_type IN ('P', 'T')"));
			break;
		case 1:
			szWhere.AppendFormat(_T(" AND group_type IN ('D')"));
			break;
		default:
			break;
	}
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