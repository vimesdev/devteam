#include "HMSPACSFormSetupDialog.h"
#include "MainFrm.h"
#include "HMSSelectPACSFormDialog.h"

static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSFormSetupDialog *)pWnd)->OnSearchByNameCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPACSFormSetupDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSPACSFormSetupDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog *)pWnd)->OnGroupAddNew();
}*/
static long _OnParaclinicalListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPACSFormSetupDialog*)pWnd)->OnParaclinicalListLoadData();
} 
static void _OnParaclinicalListDblClickFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog*)pWnd)->OnParaclinicalListDblClick();
} 
static void _OnParaclinicalListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPACSFormSetupDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
} 
static int _OnParaclinicalListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPACSFormSetupDialog*)pWnd)->OnParaclinicalListDeleteItem();
} 
static long _OnPACSFormListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPACSFormSetupDialog*)pWnd)->OnPACSFormListLoadData();
} 
static void _OnPACSFormListDblClickFnc(CWnd *pWnd){
	((CHMSPACSFormSetupDialog*)pWnd)->OnPACSFormListDblClick();
} 
static void _OnPACSFormListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPACSFormSetupDialog*)pWnd)->OnPACSFormListSelectChange(nOldItem, nNewItem);
} 
static int _OnPACSFormListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPACSFormSetupDialog*)pWnd)->OnPACSFormListDeleteItem();
} 
static int _OnAddHMSPACSFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSFormSetupDialog*)pWnd)->OnAddHMSPACSFormSetupDialog();
} 
static int _OnEditHMSPACSFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSFormSetupDialog*)pWnd)->OnEditHMSPACSFormSetupDialog();
} 
static int _OnDeleteHMSPACSFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSFormSetupDialog*)pWnd)->OnDeleteHMSPACSFormSetupDialog();
} 
static int _OnSaveHMSPACSFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSFormSetupDialog*)pWnd)->OnSaveHMSPACSFormSetupDialog();
} 
static int _OnCancelHMSPACSFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPACSFormSetupDialog*)pWnd)->OnCancelHMSPACSFormSetupDialog();
}
static int _OnLoadCLSListFnc(CWnd *pWnd){
	return ((CHMSPACSFormSetupDialog*)pWnd)->OnLoadCLSList();
}
static int _OnAddPACSFormFnc(CWnd *pWnd){
	return ((CHMSPACSFormSetupDialog*)pWnd)->OnAddPACSForm();
}
static int _OnSortIndexFnc(CWnd *pWnd){
	return ((CHMSPACSFormSetupDialog*)pWnd)->OnSortIndex();
}
CHMSPACSFormSetupDialog::CHMSPACSFormSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 815;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CHMSPACSFormSetupDialog::~CHMSPACSFormSetupDialog(){
}
void CHMSPACSFormSetupDialog::OnCreateComponents()
{
	m_wndParaclinicalInfo.Create(this, _T("Paraclinical Information"), 5, 5, 805, 615);
	m_wndPACSFromInfo.Create(this, _T("PACS Form List"), 365, 30, 800, 610);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 360, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 585, 90, 610);
	m_wndGroup.Create(this,95, 585, 360, 610); 
	m_wndParaclinicalList.Create(this,10, 60, 360, 580); 
	m_wndPACSFormList.Create(this,370, 55, 795, 605);

}
void CHMSPACSFormSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchByName.SetLimitText(254);
	m_wndSearchByName.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(81);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);


	m_wndParaclinicalList.InsertColumn(0, _T("ID"), CFMT_TEXT, 75);
	m_wndParaclinicalList.InsertColumn(1, _T("Name"), CFMT_TEXT, 260);
	m_wndParaclinicalList.InsertColumn(2, _T("GroupID"), CFMT_TEXT, 0);


	m_wndPACSFormList.InsertColumn(0, _T("ID"), CFMT_TEXT, 125);
	m_wndPACSFormList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPACSFormList.InsertColumn(2, _T("Report Name"), CFMT_TEXT, 110);

	m_wndPACSFormList.SetAllowDrag(TRUE);

}
void CHMSPACSFormSetupDialog::OnSetWindowEvents()
{
	m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndParaclinicalList.SetEvent(WE_SELCHANGE, _OnParaclinicalListSelectChangeFnc);
	m_wndParaclinicalList.SetEvent(WE_LOADDATA, _OnParaclinicalListLoadDataFnc);
	m_wndParaclinicalList.SetEvent(WE_DBLCLICK, _OnParaclinicalListDblClickFnc);
	m_wndParaclinicalList.SetWindowText(_T("Paraclinical List"));
	m_wndParaclinicalList.AddEvent(1, _T("Add PACS Form"), _OnAddPACSFormFnc);
	m_wndParaclinicalList.AddEvent(0, _T("-"));
	m_wndParaclinicalList.AddEvent(2, _T("Load List"), _OnLoadCLSListFnc);
	m_wndPACSFormList.SetEvent(WE_SELCHANGE, _OnPACSFormListSelectChangeFnc);
	m_wndPACSFormList.SetEvent(WE_LOADDATA, _OnPACSFormListLoadDataFnc);
	m_wndPACSFormList.SetEvent(WE_DBLCLICK, _OnPACSFormListDblClickFnc);
	m_wndPACSFormList.SetWindowText(_T("PACS Form List"));
	m_wndPACSFormList.AddEvent(1, _T("Delete"), _OnPACSFormListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPACSFormList.AddEvent(0, _T("-"));
	m_wndPACSFormList.AddEvent(2, _T("Sort Index"), _OnSortIndexFnc);
	OnLoadCLSList();
}
void CHMSPACSFormSetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);

}
void CHMSPACSFormSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPACSFormSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPACSFormSetupDialog::SetDefaultValues(){

	m_szSearchByName.Empty();
	m_szGroupKey.Empty();

}
int CHMSPACSFormSetupDialog::SetMode(int nMode){
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
void CHMSPACSFormSetupDialog::OnSearchByNameChange()
{
	//UpdateData(TRUE);
	//OnParaclinicalListLoadData();
}
/*void CHMSPACSFormSetupDialog::OnSearchByNameSetfocus(){
	
} */
/*void CHMSPACSFormSetupDialog::OnSearchByNameKillfocus(){
	
} */
int CHMSPACSFormSetupDialog::OnSearchByNameCheckValue()
{
	UpdateData(TRUE);
	OnParaclinicalListLoadData();
	return 0;
} 
void CHMSPACSFormSetupDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPACSFormSetupDialog::OnGroupSelendok()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndParaclinicalList.BeginLoad(); 
	m_wndParaclinicalList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT distinct hfl_feeid AS ID, hfl_name AS Name, hfl_groupid AS GroupID ")\
				 _T("FROM hms_fee_list ")\
				 _T("LEFT JOIN hms_pacs_form_menu ON(hfl_feeid=hpfm_itemid) ")\
				 _T("WHERE (substr(hfl_feeid, 1, 2) IN('B2','B3') or substr(hfl_feeid, 1, 3) IN('B1E','B1F','B1H')) AND hfl_active in('Y','N') AND hfl_groupid='%s'")\
				 _T("ORDER BY hfl_feeid"), m_szGroupKey);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("GroupID")), NULL);
		rs.MoveNext();
	}
	m_wndParaclinicalList.EndLoad();
}
/*void CHMSPACSFormSetupDialog::OnGroupSetfocus(){
	
}*/
/*void CHMSPACSFormSetupDialog::OnGroupKillfocus(){
	
}*/
long CHMSPACSFormSetupDialog::OnGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name ") \
				_T(" FROM hms_fee_group ")\
			    _T("WHERE (substr(hfg_id, 1, 2) IN('B2','B3') ") \
				_T("		or substr(hfg_id, 1, 3) IN('B1E','B1F','B1H')") \
				_T("		or hfg_id in (select ss_code ") \
				_T("				from sys_sel ") \
				_T("				where ss_id = 'hms_fee_group_id_opt_result')) ") \
				_T("		AND substr(hfg_id, 3, 3)<>'000' %s ")\
				 _T("ORDER BY hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPACSFormSetupDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPACSFormSetupDialog::OnParaclinicalListDblClick()
{
	OnAddPACSForm();
} 
void CHMSPACSFormSetupDialog::OnParaclinicalListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_szItemID = m_wndParaclinicalList.GetItemText(nNewItem, 0);
	OnPACSFormListLoadData();
} 
int CHMSPACSFormSetupDialog::OnParaclinicalListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CHMSPACSFormSetupDialog::OnParaclinicalListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
//_msg(_T("Ok"));
	if (m_szSearchByName.IsEmpty())
		szWhere.Empty();
	else
		szWhere.Format(_T(" AND lower(hfl_name) LIKE chr(37)||lower('%s')||chr(37) "),  m_szSearchByName);
	if (!m_szGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfl_groupid='%s'"), m_szGroupKey);
	}
	m_wndParaclinicalList.BeginLoad(); 
	m_wndParaclinicalList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT distinct hfl_feeid AS ID, ") \
				_T("	hfl_name AS Name, ") \
				_T("	hfl_groupid AS GroupID ")\
				_T(" FROM hms_fee_list ")\
				_T(" LEFT JOIN hms_pacs_form_menu ON(hfl_feeid=hpfm_itemid) ")\
				_T(" WHERE (substr(hfl_feeid, 1, 2) IN('B2','B3') ") \
				_T("		or substr(hfl_feeid, 1, 3) IN('B1E','B1F','B1H') ") \
				_T("		or hfl_groupid in (select ss_code ") \
				_T("				from sys_sel ") \
				_T("				where ss_id = 'hms_fee_group_id_opt_result')) ") \
				_T(" AND hfl_active in('Y','N')  %s ")\
				_T(" ORDER BY hfl_feeid"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("GroupID")), NULL);
		rs.MoveNext();
	}
	m_wndParaclinicalList.EndLoad(); 
	return nCount;
}
void CHMSPACSFormSetupDialog::OnPACSFormListDblClick(){
	
} 
void CHMSPACSFormSetupDialog::OnPACSFormListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPACSFormSetupDialog::OnPACSFormListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndPACSFormList.GetCurSel();
	if (nSel < 0)
		return -1;
	if (m_szItemID.IsEmpty())
		return -1;
	CString szSQL, szFormID;
	int ret = -1;
	pMF->BeginTransaction();
	szFormID = m_wndPACSFormList.GetItemText(nSel, 0);
	szSQL.Format(_T("DELETE FROM hms_pacs_form_menu WHERE hpfm_itemid='%s' AND hpfm_formid='%s'"),
				 m_szItemID, szFormID);
	ret = pMF->ExecSQL(szSQL);
	if (ret < 0)
	{
		ShowMessageBox(_T("Error while executing"), MB_ICONERROR | MB_OK);
		pMF->Rollback();
		return -1;
	}
	pMF->Commit();
	OnPACSFormListLoadData();
	return 0;
} 
long CHMSPACSFormSetupDialog::OnPACSFormListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPACSFormList.BeginLoad(); 
	m_wndPACSFormList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hpfm_formid AS ID, hpf_name AS Name, hpf_reportname AS ReportName ")\
		         _T("FROM hms_pacs_form_menu ")\
				 _T("LEFT JOIN hms_pacs_form ON(hpf_id=hpfm_formid) ")\
				 _T("WHERE hpfm_itemid='%s' ")\
				 _T("ORDER BY hpfm_index, hpfm_formid"), m_szItemID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPACSFormList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("ReportName")), NULL);
		rs.MoveNext();
	}
	m_wndPACSFormList.EndLoad(); 
	return nCount;
}
int CHMSPACSFormSetupDialog::OnAddHMSPACSFormSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPACSFormSetupDialog::OnEditHMSPACSFormSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPACSFormSetupDialog::OnDeleteHMSPACSFormSetupDialog(){
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
 		OnCancelHMSPACSFormSetupDialog(); 
 	}
	return 0;
}
int CHMSPACSFormSetupDialog::OnSaveHMSPACSFormSetupDialog(){
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
 		//OnHMSPACSFormSetupDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPACSFormSetupDialog::OnCancelHMSPACSFormSetupDialog(){
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
int CHMSPACSFormSetupDialog::OnHMSPACSFormSetupDialogListLoadData(){
	return 0;
}

int CHMSPACSFormSetupDialog::OnLoadCLSList()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsc(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	m_wndParaclinicalList.BeginLoad(); 
	m_wndParaclinicalList.DeleteAllItems();
	szSQL.Format(_T("SELECT Count(*) FROM hms_pacs_form_menu"));
	rsc.ExecSQL(szSQL);
	if (rsc.GetIntValue() > 0)
	{
		szSQL.Format(_T("SELECT distinct hpfm_itemid as ID, ")\
			        _T("hfl_name as Name, ")\
					_T("hfl_groupid as GroupID ")\
					_T("FROM hms_pacs_form_menu ")\
					_T("LEFT JOIN hms_fee_list ON(hfl_feeid=hpfm_itemid) ")\
					_T("WHERE hfl_active in('Y','N') ")\
					_T("ORDER BY hpfm_itemid"));
	}
	else
	{
		szSQL.Format(_T("SELECT hfl_feeid as ID, ")\
			        _T("hfl_name as Name, ")\
					_T("hfl_groupid as GroupID ")\
					_T("FROM hms_fee_list ")\
					_T("WHERE (substr(hfl_feeid, 1, 2) IN('B2','B3') or substr(hfe_feeid, 1, 3) IN('B1E','B1F','B1H')) AND hfl_active in('Y','N')")\
					_T("ORDER BY hfl_feeid, hfl_idx"));
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndParaclinicalList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("GroupID")), NULL);
		rs.MoveNext();
	}
	m_wndParaclinicalList.EndLoad();
	return nCount;
}

int CHMSPACSFormSetupDialog::OnAddPACSForm()
{
	int nSel = m_wndParaclinicalList.GetCurSel();
	if (nSel < 0)
		return -1;
	if (m_szItemID.IsEmpty())
		return -1;
	CHMSSelectPACSFormDialog dlg(this);
	dlg.m_szID = m_szItemID;
	dlg.m_szGroupID = m_wndParaclinicalList.GetItemText(nSel, 2);
	if (dlg.DoModal() == IDOK)
	{
		m_wndParaclinicalList.SetCurSel(nSel);
	}
	return 0;
}

int CHMSPACSFormSetupDialog::OnSortIndex()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	if (m_szItemID.IsEmpty())
		return -1;
	CString szSQL, szFormID;
	int ret = -1;
	pMF->BeginTransaction();
	for (int i = 0; i < m_wndPACSFormList.GetItemCount(); i++)
	{
		szFormID = m_wndPACSFormList.GetItemText(i, 0);
		szSQL.Format(_T("UPDATE hms_pacs_form_menu SET hpfm_index=%d ")\
			         _T("WHERE hpfm_itemid='%s' AND hpfm_formid='%s'"),
					 i + 1, m_szItemID, szFormID);
		ret = pMF->ExecSQL(szSQL);
		if (ret <= 0)
		{
			ShowMessageBox(_T("Error while executing"), MB_ICONERROR | MB_OK);
			pMF->Rollback();
			return -1;
		}
	}
	pMF->Commit();
	OnPACSFormListLoadData();
	return 0;
}