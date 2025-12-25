#include "HMSFeeListApproval.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListApproval *)pWnd)->OnSearchCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeListApproval* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListApproval *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeListApproval* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListApproval *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMSFeeListApproval *)pWnd)->OnItemAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFeeListApproval *pVw = (CHMSFeeListApproval *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeeListApproval *pVw = (CHMSFeeListApproval *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListApproval*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeeListApproval*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeListApproval*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeListApproval*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSFeeListApprovalFnc(CWnd *pWnd){
	 return ((CHMSFeeListApproval*)pWnd)->OnAddHMSFeeListApproval();
} 
static int _OnEditHMSFeeListApprovalFnc(CWnd *pWnd){
	 return ((CHMSFeeListApproval*)pWnd)->OnEditHMSFeeListApproval();
} 
static int _OnDeleteHMSFeeListApprovalFnc(CWnd *pWnd){
	 return ((CHMSFeeListApproval*)pWnd)->OnDeleteHMSFeeListApproval();
} 
static int _OnSaveHMSFeeListApprovalFnc(CWnd *pWnd){
	 return ((CHMSFeeListApproval*)pWnd)->OnSaveHMSFeeListApproval();
} 
static int _OnCancelHMSFeeListApprovalFnc(CWnd *pWnd){
	 return ((CHMSFeeListApproval*)pWnd)->OnCancelHMSFeeListApproval();
} 
CHMSFeeListApproval::CHMSFeeListApproval(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSFeeListApproval::~CHMSFeeListApproval(){
}
void CHMSFeeListApproval::OnCreateComponents(){
	m_wndMap.Create(this, _T("Map"), 5, 360, 640, 445);
	m_wndFeeList.Create(this, _T("Fee List"), 5, 5, 640, 355);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 335, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 385, 90, 410);
	m_wndGroup.Create(this,95, 385, 635, 410); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 415, 90, 440);
	m_wndItem.Create(this,95, 415, 635, 440); 
	m_wndApply.Create(this, _T("&Apply"), 475, 450, 555, 475);
	m_wndClose.Create(this, _T("&Close"), 560, 450, 640, 475);
	m_wndList.Create(this,10, 60, 635, 350); 

}
void CHMSFeeListApproval::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	//m_wndSearch.SetCheckValue(true);
	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	//m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(1024);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);

	m_wndItem.InsertColumn(0, _T("Item ID"), CFMT_TEXT, 100);
	m_wndItem.InsertColumn(1, _T("Desc"), CFMT_TEXT, 600);
	m_wndItem.InsertColumn(2, _T("apply_date"), CFMT_DATE, 150);

	m_wndGroup.InsertColumn(0, _T("Group ID"), CFMT_TEXT, 150);
	m_wndGroup.InsertColumn(1, _T("Desc"), CFMT_TEXT, 350);
}
void CHMSFeeListApproval::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
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
	EnableControls();
	EnableButtons(FALSE, -1);
	OnListLoadData();
}
void CHMSFeeListApproval::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);

}
void CHMSFeeListApproval::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Item")] =  m_szItemKey;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	}

}
void CHMSFeeListApproval::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeeListApproval::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeeListApproval::SetDefaultValues(){

	m_szSearch.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();

}
int CHMSFeeListApproval::SetMode(int nMode){
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
/*void CHMSFeeListApproval::OnSearchChange(){
	
} */
/*void CHMSFeeListApproval::OnSearchSetfocus(){
	
} */
/*void CHMSFeeListApproval::OnSearchKillfocus(){
	
} */
int CHMSFeeListApproval::OnSearchCheckValue(){
	UpdateData();
	//if (m_szSearch.GetLength() < 2)
	//{
	//	return;
	//}
	m_wndList.Search(3, m_szSearch, SS_LIKE);
	return 0;
} 
void CHMSFeeListApproval::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListApproval::OnGroupSelendok(){
	 
}
/*void CHMSFeeListApproval::OnGroupSetfocus(){
	
}*/
/*void CHMSFeeListApproval::OnGroupKillfocus(){
	
}*/
long CHMSFeeListApproval::OnGroupLoadData(){
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
/*void CHMSFeeListApproval::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeeListApproval::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListApproval::OnItemSelendok(){
	 
}
/*void CHMSFeeListApproval::OnItemSetfocus(){
	
}*/
/*void CHMSFeeListApproval::OnItemKillfocus(){
	
}*/
long CHMSFeeListApproval::OnItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" "), m_szItemKey);
	}
	if (!m_szGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfl_groupid = '%s'"), m_szGroupKey);
	}
	szWhere.AppendFormat(_T(" AND hfl_feeid NOT IN (select ss_code from sys_sel where ss_id = 'HMS_FEE_LIST_APPROVAL')"));
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select hfl_feeid as fee_id, hfl_name as fee_name, to_char(HFL_APPLYDATE,'DD/MM/YYYY') as apply_date ") \
				_T(" from hms_fee_list ") \
				_T(" where hfl_active = 'Y' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("fee_id")),
			rs.GetValue(_T("fee_name")),
			rs.GetValue(_T("apply_date")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFeeListApproval::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeeListApproval::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		return;
	}
	CString szSQL;
	CDbfMap tbl;
	tbl.SetTableName(_T("sys_sel"));
	tbl.AddField(_T("ss_id"), dfText, 35);
	tbl.AddField(_T("ss_code"), dfText, 30);
	tbl.AddField(_T("ss_desc"), dfText, 254);

	tbl.SetValue(_T("ss_id"), _T("HMS_FEE_LIST_APPROVAL"));
	tbl.SetValue(_T("ss_code"), m_szItemKey);
	tbl.SetValue(_T("ss_desc"), m_wndItem.GetCurrent(1));
	szSQL = tbl.GetInsertSQL();
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}	
} 
void CHMSFeeListApproval::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSFeeListApproval::OnListDblClick(){
	
} 
void CHMSFeeListApproval::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeListApproval::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	CString szSQL, szItemID = m_wndList.GetItemText(nSel, 0);
	szSQL.Format(_T("DELETE FROM sys_sel WHERE ss_id = 'HMS_FEE_LIST_APPROVAL' and ss_code = '%s'"), szItemID);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
	return 0;
} 
long CHMSFeeListApproval::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T("select ss_code, ss_desc from sys_sel where ss_id = 'HMS_FEE_LIST_APPROVAL'"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ss_code")), 
			int2str(nIdx++), 
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSFeeListApproval::OnAddHMSFeeListApproval(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeListApproval::OnEditHMSFeeListApproval(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeListApproval::OnDeleteHMSFeeListApproval(){
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
 		OnCancelHMSFeeListApproval();
 	}
	return 0;
}
int CHMSFeeListApproval::OnSaveHMSFeeListApproval(){
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
 		//OnHMSFeeListApprovalListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeListApproval::OnCancelHMSFeeListApproval(){
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
int CHMSFeeListApproval::OnHMSFeeListApprovalListLoadData(){
	return 0;
}
