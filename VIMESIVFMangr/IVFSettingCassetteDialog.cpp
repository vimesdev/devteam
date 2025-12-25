#include "IVFSettingCassetteDialog.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingCassetteDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingCassetteDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFSettingCassetteDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFSettingCassetteDialog*)pWnd)->OnListDeleteItem();
}

static int _OnListRefreshItemFnc(CWnd *pWnd){
	 return ((CIVFSettingCassetteDialog*)pWnd)->OnListLoadData();
}
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingCassetteDialog *)pWnd)->OnIDCheckValue();
} 
static void _OnParentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSettingCassetteDialog* )pWnd)->OnParentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentSelendokFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnParentSelendok();
}
/*static void _OnParentSetfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnParentKillfocus();
}*/
/*static void _OnParentKillfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnParentKillfocus();
}*/
static long _OnParentLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingCassetteDialog *)pWnd)->OnParentLoadData();
}
/*static void _OnParentAddNewFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnParentAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CIVFSettingCassetteDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingCassetteDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CIVFSettingCassetteDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFSettingCassetteDialog *pVw = (CIVFSettingCassetteDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFSettingCassetteDialog *pVw = (CIVFSettingCassetteDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFSettingCassetteDialog *pVw = (CIVFSettingCassetteDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFSettingCassetteDialog *pVw = (CIVFSettingCassetteDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFSettingCassetteDialog *pVw = (CIVFSettingCassetteDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFSettingCassetteDialog *pVw = (CIVFSettingCassetteDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingCassetteDialog*)pWnd)->OnAddIVFSettingDialog();
} 
static int _OnEditIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingCassetteDialog*)pWnd)->OnEditIVFSettingDialog();
} 
static int _OnDeleteIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingCassetteDialog*)pWnd)->OnDeleteIVFSettingDialog();
} 
static int _OnSaveIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingCassetteDialog*)pWnd)->OnSaveIVFSettingDialog();
} 
static int _OnCancelIVFSettingDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingCassetteDialog*)pWnd)->OnCancelIVFSettingDialog();
} 
CIVFSettingCassetteDialog::CIVFSettingCassetteDialog(CWnd *pParent, CString szTable, CString szParentTable, CString szTitle):
	CGuiDialog(pParent), m_szTable(szTable), m_szParentTable(szParentTable)
	{

	m_nDlgWidth = 615;
	m_nDlgHeight = 485;
	SetDefaultValues();
	if(m_szParentTable.IsEmpty())
		m_bHasParent = false;
	else
		m_bHasParent = true;
	m_szKeyName.Format(_T("%s_id"), m_szTable);
	m_szPrefix = _T("");
	m_szTitle = szTitle;
	m_szGrandParentTbl = _T("ivf_storage_thung");
}
CIVFSettingCassetteDialog::~CIVFSettingCassetteDialog(){
}
void CIVFSettingCassetteDialog::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 6, 5, 86, 30);
	m_wndSearch.Create(this,91, 5, 487, 30); 
	m_wndList.Create(this,5, 35, 605, 390); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 395, 85, 420);
	m_wndID.Create(this,90, 395, 170, 420); 
	m_wndParentLabel.Create(this, _T("Group"), 175, 395, 255, 420);
	m_wndParent.Create(this,260, 395, 605, 420); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 425, 85, 450);
	m_wndDescription.Create(this,90, 425, 605, 450); 
	m_wndIsActive.Create(this, _T("IsActive"), 5, 455, 85, 480);
	m_wndAdd.Create(this, _T("&Add"), 105, 455, 185, 480);
	m_wndEdit.Create(this, _T("&Edit"), 190, 455, 270, 480);
	m_wndDelete.Create(this, _T("&Delete"), 275, 455, 355, 480);
	m_wndSave.Create(this, _T("&Save"), 360, 455, 440, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 455, 525, 480);
	m_wndClose.Create(this, _T("&Close"), 530, 455, 610, 480);

}
void CIVFSettingCassetteDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(254);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetAllowEmpty(true);

	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndParent.SetCheckValue(false);
	m_wndParent.LimitText(254);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);
	m_wndParent.SetCheckValue(m_bHasParent);
	m_wndParent.ShowWindow(m_bHasParent?SW_SHOW:SW_HIDE);
	m_wndIsActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);//id
	if(!m_szParentTable.IsEmpty())
	{
		m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
		m_wndList.InsertColumn(2, _T("Group"), CFMT_TEXT, 100);
		m_wndList.InsertColumn(3, _T("Container"), CFMT_TEXT, 250);
	}
	else
	{
		m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
		m_wndList.InsertColumn(2, _T("Group"), CFMT_TEXT, 0);
	}


	m_wndParent.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);//id
	m_wndParent.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndParent.InsertColumn(2, _T("Parent"), CFMT_TEXT, 200);

	m_settingTbl.SetTableName(m_szTable);
	m_settingTbl.AddField(m_szKeyName, dfText, 32);
	m_settingTbl.AddField(_T("description"), dfText, 254);
	m_settingTbl.AddField(_T("parent_id"), dfText, 15);
	m_settingTbl.AddField(_T("isactive"),dfText, 1);
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select count(*) from sys.dba_tables where owner = 'VIMES' and upper(table_name) = upper('%s')"), m_szTable);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() == 0)
	{
		CString szForeignKey;
		szForeignKey.Empty();
		if (!m_szParentTable.IsEmpty())
		{
			szForeignKey.Format(_T(", FOREIGN KEY (parent_id) REFERENCES %s (%s_id)"), m_szParentTable, m_szParentTable);
		}
		szSQL.Format(_T(" CREATE TABLE %s(") \
		_T("     %s_id            NVARCHAR2(32) DEFAULT SYS_GUID(),") \
		_T("	 code NVARCHAR2(15), ") \
		_T("     description   NVARCHAR2(254),") \
		_T("     parent_id         NVARCHAR2(32),") \
		_T("     isactive      NVARCHAR2(1) DEFAULT 'Y',") \
		_T("     PRIMARY KEY (%s_id)") \
		_T("	 %s") \
		_T(" )"), m_szTable, m_szTable, m_szTable, szForeignKey); 

		pMF->ExecSQL(szSQL);
	}
	//m_szTitle.MakeUpper();
	//SetWindowTitle(m_szTitle);
}
void CIVFSettingCassetteDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Refresh"), _OnListRefreshItemFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndParent.SetEvent(WE_SELENDOK, _OnParentSelendokFnc);
	//m_wndParent.SetEvent(WE_SETFOCUS, _OnParentSetfocusFnc);
	//m_wndParent.SetEvent(WE_KILLFOCUS, _OnParentKillfocusFnc);
	m_wndParent.SetEvent(WE_SELCHANGE, _OnParentSelectChangeFnc);
	m_wndParent.SetEvent(WE_LOADDATA, _OnParentLoadDataFnc);
	//m_wndParent.SetEvent(WE_ADDNEW, _OnParentAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();
}
void CIVFSettingCassetteDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndParent.GetDlgCtrlID(), m_szParentKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CIVFSettingCassetteDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Parent")] =  m_szParentKey;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Parent")].GetValue(m_szParentKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CIVFSettingCassetteDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM %s WHERE %s='%s'"), m_szTable, m_szKeyName, m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("description"), m_szDescription);
		rs.GetValue(_T("parent_id"), m_szParentKey);
		CString szActive;
		rs.GetValue(_T("isactive"), szActive);
		if(szActive == _T("Y"))
			m_bIsActive = TRUE;
		else
			m_bIsActive = FALSE;
	}

}
void CIVFSettingCassetteDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_settingTbl.SetValue(m_szKeyName, m_szID);
	m_settingTbl.SetValue(_T("description"), m_szDescription);
	m_settingTbl.SetValue(_T("parent_id"), m_szParentKey);
	m_settingTbl.SetValue(_T("isactive"), m_bIsActive?_T("Y"):_T("N"));
}
void CIVFSettingCassetteDialog::SetDefaultValues(){

	m_szSearch.Empty();
	m_szID.Empty();
	m_szParentKey.Empty();
	m_szDescription.Empty();
	m_bIsActive = TRUE;

}
int CIVFSettingCassetteDialog::SetMode(int nMode){
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
			m_wndID.SetFocus();
			m_wndSearch.SetCheckValue(FALSE);
			m_wndSearch.EnableWindow(FALSE);
			szSQL.Format(_T("AD_GETCURVAL('%s', '', 3)"), m_szKeyName);
			m_szID = pMF->ExecDML(szSQL);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndDescription.SetFocus();
			m_wndSearch.SetCheckValue(FALSE);
			m_wndSearch.EnableWindow(FALSE);
			m_wndID.EnableWindow(FALSE);
			m_wndDescription.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndSearch.SetCheckValue(TRUE);
			m_wndSearch.EnableWindow(TRUE);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
			m_wndSearch.SetCheckValue(TRUE);
			m_wndSearch.EnableWindow(TRUE);
 			break;
 		};
		
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
/*void CIVFSettingCassetteDialog::OnSearchChange(){
	
} */
/*void CIVFSettingCassetteDialog::OnSearchSetfocus(){
	
} */
/*void CIVFSettingCassetteDialog::OnSearchKillfocus(){
	
} */
int CIVFSettingCassetteDialog::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
} 
void CIVFSettingCassetteDialog::OnListDblClick(){
	
} 
void CIVFSettingCassetteDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	SetMode(VM_VIEW);
} 
int CIVFSettingCassetteDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFSettingDialog();
	 return 0;
} 
long CIVFSettingCassetteDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and (t1.code='%s' or lower(t1.description) like(chr(37)||lower('%s')||chr(37))) "),  m_szSearch, m_szSearch);
	}
	if(!m_szParentTable.IsEmpty())
	{
		szSQL.Format(_T("SELECT t1.%s as id, t1.code, t1.description, t2.description as parent_desc, ") \
			_T(" (select t3.description from %s t3 where %s_id = t2.parent_id) as grand_parent_desc") \
			_T(" FROM %s t1 ") \
			_T(" LEFT JOIN %s t2 ON(t1.parent_id=t2.%s_id) ") \
			_T(" WHERE t1.isactive='Y' %s ORDER BY t1.%s ")
			, m_szKeyName, m_szGrandParentTbl, m_szGrandParentTbl, m_szTable,m_szParentTable, m_szParentTable, szWhere, m_szKeyName);
	}
	else
	{
		szSQL.Format(_T("SELECT %s as id,  description, '' as parent_desc FROM %s t1 WHERE isactive='Y' %s ORDER BY %s "), m_szKeyName, m_szTable, szWhere, m_szKeyName);
	}
	_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("parent_desc")),
			rs.GetValue(_T("grand_parent_desc")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	
	return nCount;
	return 0;
}
/*void CIVFSettingCassetteDialog::OnIDChange(){
	
} */
/*void CIVFSettingCassetteDialog::OnIDSetfocus(){
	
} */
/*void CIVFSettingCassetteDialog::OnIDKillfocus(){
	
} */
int CIVFSettingCassetteDialog::OnIDCheckValue(){
	if(GetMode() == VM_ADD)
	{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT count(*) FROM %s WHERE code='%s' "), m_szTable, m_szID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndID.SetToolTipMessage(_T("Mã đã tồn tại"));
			return -1;
		}
	}
	return 0;
} 
void CIVFSettingCassetteDialog::OnParentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingCassetteDialog::OnParentSelendok(){
	 
}
/*void CIVFSettingCassetteDialog::OnParentSetfocus(){
	
}*/
/*void CIVFSettingCassetteDialog::OnParentKillfocus(){
	
}*/
long CIVFSettingCassetteDialog::OnParentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParent.IsSearchKey() && !m_szParentKey.IsEmpty()){
	 szWhere.Format(_T(" and %s_id='%s' "), m_szParentTable, m_szParentKey);
	};
	m_wndParent.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT %s_id as id, description, ") \
				_T(" (select t3.description from %s t3 where %s_id = t2.parent_id) as grand_parent_desc") \
				_T(" FROM %s t2 WHERE isactive='Y' %s ORDER BY %s_id "), m_szParentTable, m_szGrandParentTbl, m_szGrandParentTbl, m_szParentTable, szWhere, m_szParentTable);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParent.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("grand_parent_desc")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CIVFSettingCassetteDialog::OnParentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFSettingCassetteDialog::OnDescriptionChange(){
	
} */
/*void CIVFSettingCassetteDialog::OnDescriptionSetfocus(){
	
} */
/*void CIVFSettingCassetteDialog::OnDescriptionKillfocus(){
	
} */
int CIVFSettingCassetteDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CIVFSettingCassetteDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CIVFSettingCassetteDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddIVFSettingDialog();
} 
void CIVFSettingCassetteDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditIVFSettingDialog();
} 
void CIVFSettingCassetteDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFSettingDialog();
}
void CIVFSettingCassetteDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFSettingDialog();
}  
void CIVFSettingCassetteDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelIVFSettingDialog();
} 
void CIVFSettingCassetteDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CIVFSettingCassetteDialog::OnAddIVFSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFSettingCassetteDialog::OnEditIVFSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFSettingCassetteDialog::OnDeleteIVFSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM %s WHERE %s='%s' "), m_szTable, m_szKeyName, m_szID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	else
	{
		ShowMessageBox(_T("Child record found!"));
	}
	return 0;
}
int CIVFSettingCassetteDialog::OnSaveIVFSettingDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_settingTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere, szExcept;
		
 		szWhere.Format(_T(" WHERE %s='%s' "), m_szKeyName, m_szID);
 		szExcept.Format(_T("%s,%s"), m_szKeyName, _T("parent_id"));
 		szSQL = m_settingTbl.GetUpdateSQL(szExcept);
 		szSQL += szWhere;
 	}
 _tprintf(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		OnListLoadData();
		if(GetMode() == VM_ADD)
		{
			szSQL.Format(_T("SYS_GETNEXTID('%s', 'Y')"), m_szKeyName);
			pMF->ExecDML(szSQL);
			SetMode(VM_ADD);
		}
		else
			SetMode(VM_VIEW);
 	}
 	else
 	{
		//Tự đông tạo bảng trường hợp chưa có bảng
		CString szForeignKey;
		szForeignKey.Empty();
		if (!m_szParentTable.IsEmpty())
		{
			szForeignKey.Format(_T(", FOREIGN KEY (parent_id) REFERENCES %s (%s_id)"), m_szParentTable, m_szParentTable);
		}
		szSQL.Format(_T(" CREATE TABLE %s(") \
		_T("     %s_id            NVARCHAR2(32) DEFAULT SYS_GUID(),") \
		_T("	 code NVARCHAR2(15), ") \
		_T("     description   NVARCHAR2(254),") \
		_T("     parent_id         NVARCHAR2(32),") \
		_T("     isactive      NVARCHAR2(1) DEFAULT 'Y',") \
		_T("     PRIMARY KEY (%s_id)") \
		_T("	 %s") \
		_T(" )"), m_szTable, m_szTable, m_szTable, szForeignKey); 

		pMF->ExecSQL(szSQL);
 	}
 	return ret;
 	return 0;
}
int CIVFSettingCassetteDialog::OnCancelIVFSettingDialog(){
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
int CIVFSettingCassetteDialog::OnIVFSettingDialogListLoadData(){
	return 0;
}
