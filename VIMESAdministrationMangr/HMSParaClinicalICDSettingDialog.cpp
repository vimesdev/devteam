#include "HMSParaClinicalICDSettingDialog.h"
#include "MainFrm.h"
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaClinicalICDSettingDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog *)pWnd)->OnSearchCheckValue();
} 

static void _OnMapedSelectFnc(CWnd *pWnd){
	 ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnMapedSelect();
}

static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaClinicalICDSettingDialog*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnFeeListDeleteItem();
} 

static int _OnFeeListAllItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnFeeListAllItem();
} 

static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaClinicalICDSettingDialog* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnChapterAddNew();
}*/
/*static void _OnIcdNameChangeFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnIcdNameChange();
} */
/*static void _OnIcdNameSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnIcdNameSetfocus();} */ 
/*static void _OnIcdNameKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnIcdNameKillfocus();
} */
static int _OnIcdNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog *)pWnd)->OnIcdNameCheckValue();
} 
static long _OnIcdListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnIcdListLoadData();
} 
static void _OnIcdListDblClickFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog*)pWnd)->OnIcdListDblClick();
} 
static void _OnIcdListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaClinicalICDSettingDialog*)pWnd)->OnIcdListSelectChange(nOldItem, nNewItem);
} 
static int _OnIcdListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnIcdListDeleteItem();
}

static int _OnIcdListMarkItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnIcdListMarkItem();
}

static int _OnIcdListUnMarkItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnIcdListUnMarkItem();
}

/*static void _OnMapNameChangeFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnMapNameChange();
} */
/*static void _OnMapNameSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnMapNameSetfocus();} */ 
/*static void _OnMapNameKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog *)pWnd)->OnMapNameKillfocus();
} */
static int _OnMapNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog *)pWnd)->OnMapNameCheckValue();
} 
static long _OnMapListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnMapListLoadData();
} 
static void _OnMapListDblClickFnc(CWnd *pWnd){
	((CHMSParaClinicalICDSettingDialog*)pWnd)->OnMapListDblClick();
} 
static void _OnMapListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaClinicalICDSettingDialog*)pWnd)->OnMapListSelectChange(nOldItem, nNewItem);
} 
static int _OnMapListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnMapListDeleteItem();
}

static int _OnMapListMarkItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnMapListMarkItem();
}

static int _OnMapListUnMarkItemFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnMapListUnMarkItem();
}

static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSParaClinicalICDSettingDialog *pVw = (CHMSParaClinicalICDSettingDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSParaClinicalICDSettingDialog *pVw = (CHMSParaClinicalICDSettingDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaClinicalICDSettingDialog *pVw = (CHMSParaClinicalICDSettingDialog *)pWnd;
	pVw->OnCloseSelect();
}

static int _OnAddHMSParaClinicalICDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnAddHMSParaClinicalICDSettingDialog();
} 
static int _OnEditHMSParaClinicalICDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnEditHMSParaClinicalICDSettingDialog();
} 
static int _OnDeleteHMSParaClinicalICDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnDeleteHMSParaClinicalICDSettingDialog();
} 
static int _OnSaveHMSParaClinicalICDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnSaveHMSParaClinicalICDSettingDialog();
} 
static int _OnCancelHMSParaClinicalICDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalICDSettingDialog*)pWnd)->OnCancelHMSParaClinicalICDSettingDialog();
} 
CHMSParaClinicalICDSettingDialog::CHMSParaClinicalICDSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_bAll = FALSE;
}
CHMSParaClinicalICDSettingDialog::~CHMSParaClinicalICDSettingDialog(){
}
void CHMSParaClinicalICDSettingDialog::OnCreateComponents(){
	m_wndParaClinical.Create(this, _T("Para-Clinical"), 5, 5, 515, 300);
	m_wndICDGroup.Create(this, _T("ICD Group"), 5, 305, 515, 600);
	m_wndMappingGroup.Create(this, _T("Mapping Group"), 520, 5, 1000, 600);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 30, 90, 55);
	m_wndGroup.Create(this,95, 30, 215, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 219, 30, 299, 55);
	m_wndSearch.Create(this,304, 30, 431, 55); 
	m_wndMaped.Create(this, _T("Maped"), 435, 30, 510, 55);

	m_wndFeeList.Create(this,10, 60, 510, 295); 
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 330, 90, 355);
	m_wndChapter.Create(this,95, 330, 295, 355); 
	m_wndIcdNameLabel.Create(this, _T("Icd Name"), 300, 330, 380, 355);
	m_wndIcdName.Create(this,385, 330, 512, 355); 
	m_wndIcdList.Create(this,10, 360, 512, 595); 
	m_wndMapNameLabel.Create(this, _T("Map Name"), 525, 30, 605, 55);
	m_wndMapName.Create(this,610, 30, 995, 55); 
	m_wndMapList.Create(this,526, 61, 996, 596); 
	m_wndAdd.Create(this, _T(">>"), 435, 605, 515, 630);
	m_wndRemove.Create(this, _T("<<"), 520, 605, 600, 630);
	m_wndClose.Create(this, _T("&Close"), 920, 605, 1000, 630);

}
void CHMSParaClinicalICDSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetCheckValue(false);
	m_wndGroup.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	m_wndChapter.SetCheckValue(true);
	m_wndChapter.LimitText(35);
	m_wndIcdName.SetLimitText(35);
	m_wndIcdName.SetCheckValue(true);
	m_wndIcdName.SetNotEmpty(false);

	m_wndMapName.SetLimitText(35);
	m_wndMapName.SetCheckValue(true);
	m_wndMapName.SetNotEmpty(false);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndGroup.Format(2, 0);

	m_wndFeeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFeeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 360);
	m_wndFeeList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//group
	m_wndFeeList.InsertColumn(3, _T("Active"), CFMT_TEXT|CFMT_CENTER, 40);//group


	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChapter.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndIcdList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndIcdList.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndIcdList.InsertColumn(2, _T("Mark"), CFMT_TEXT, 50);


	m_wndMapList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMapList.InsertColumn(1, _T("Name"), CFMT_TEXT, 360);
	m_wndMapList.InsertColumn(2, _T("Mark"), CFMT_TEXT, 50);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	szSQL.Format(_T(" SELECT trim(hi_icd) as icd ,") \
_T("   hi_name,") \
_T("   hi_groupid") \
_T(" FROM hms_icd") \
_T(" WHERE hi_active='Y' %s") \
_T(" ORDER BY hi_icd,") \
_T("   hi_name"), szWhere);

	rs.ExecSQL(szSQL);
	m_icdList.RemoveAll();
	while(!rs.IsEOF()){ 
		ICDINFO icd;
		rs.GetValue(_T("icd"), icd.icd);
		rs.GetValue(_T("hi_name"), icd.name);
		rs.GetValue(_T("hi_groupid"), icd.group);
		m_icdList.Add(icd);
		rs.MoveNext();
	}
	 
*/

}
void CHMSParaClinicalICDSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndMaped.SetEvent(WE_CLICK, _OnMapedSelectFnc);

	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	//m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFeeList.AddEvent(1, _T("Active All"), _OnFeeListAllItemFnc);
	m_wndChapter.SetEvent(WE_SELENDOK, _OnChapterSelendokFnc);
	//m_wndChapter.SetEvent(WE_SETFOCUS, _OnChapterSetfocusFnc);
	//m_wndChapter.SetEvent(WE_KILLFOCUS, _OnChapterKillfocusFnc);
	m_wndChapter.SetEvent(WE_SELCHANGE, _OnChapterSelectChangeFnc);
	m_wndChapter.SetEvent(WE_LOADDATA, _OnChapterLoadDataFnc);
	//m_wndChapter.SetEvent(WE_ADDNEW, _OnChapterAddNewFnc);
	//m_wndIcdName.SetEvent(WE_CHANGE, _OnIcdNameChangeFnc);
	//m_wndIcdName.SetEvent(WE_SETFOCUS, _OnIcdNameSetfocusFnc);
	//m_wndIcdName.SetEvent(WE_KILLFOCUS, _OnIcdNameKillfocusFnc);
	m_wndIcdName.SetEvent(WE_CHECKVALUE, _OnIcdNameCheckValueFnc);
	m_wndIcdList.SetEvent(WE_SELCHANGE, _OnIcdListSelectChangeFnc);
	m_wndIcdList.SetEvent(WE_LOADDATA, _OnIcdListLoadDataFnc);
	m_wndIcdList.SetEvent(WE_DBLCLICK, _OnIcdListDblClickFnc);
	//m_wndIcdList.AddEvent(1, _T("Delete"), _OnIcdListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndIcdList.AddEvent(1, _T("Mark"), _OnIcdListMarkItemFnc);
	m_wndIcdList.AddEvent(0, _T("-"));
	m_wndIcdList.AddEvent(3, _T("UnMark"), _OnIcdListUnMarkItemFnc);
	//m_wndMapName.SetEvent(WE_CHANGE, _OnMapNameChangeFnc);
	//m_wndMapName.SetEvent(WE_SETFOCUS, _OnMapNameSetfocusFnc);
	//m_wndMapName.SetEvent(WE_KILLFOCUS, _OnMapNameKillfocusFnc);
	m_wndMapName.SetEvent(WE_CHECKVALUE, _OnMapNameCheckValueFnc);
	m_wndMapList.SetEvent(WE_SELCHANGE, _OnMapListSelectChangeFnc);
	m_wndMapList.SetEvent(WE_LOADDATA, _OnMapListLoadDataFnc);
	m_wndMapList.SetEvent(WE_DBLCLICK, _OnMapListDblClickFnc);
	
	m_wndMapList.AddEvent(1, _T("Delete"), _OnMapListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMapList.AddEvent(0, _T("-"));
	m_wndMapList.AddEvent(2, _T("Mark"), _OnMapListMarkItemFnc);
	m_wndMapList.AddEvent(0, _T("-"));
	m_wndMapList.AddEvent(3, _T("UnMark"), _OnMapListUnMarkItemFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	SetMode(VM_VIEW);
	OnFeeListLoadData();

}
void CHMSParaClinicalICDSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndMaped.GetDlgCtrlID(), m_bMaped);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_Text(pDX, m_wndIcdName.GetDlgCtrlID(), m_szIcdName);
	DDX_Text(pDX, m_wndMapName.GetDlgCtrlID(), m_szMapName);

}
void CHMSParaClinicalICDSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("Chapter")] =  m_szChapterKey;
	m_jData[_T("IcdName")] =  m_szIcdName;
	m_jData[_T("MapName")] =  m_szMapName;
	}
	else
	{
			
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("Chapter")].GetValue(m_szChapterKey);
	m_jData[_T("IcdName")].GetValue(m_szIcdName);
	m_jData[_T("MapName")].GetValue(m_szMapName);
	}

}
void CHMSParaClinicalICDSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSParaClinicalICDSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaClinicalICDSettingDialog::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szSearch.Empty();
	m_bMaped=TRUE;
	m_szChapterKey.Empty();
	m_szIcdName.Empty();
	m_szMapName.Empty();

}
int CHMSParaClinicalICDSettingDialog::SetMode(int nMode){
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
 			EnableControls(TRUE);
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
void CHMSParaClinicalICDSettingDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalICDSettingDialog::OnGroupSelendok(){
	OnFeeListLoadData();
}
/*void CHMSParaClinicalICDSettingDialog::OnGroupSetfocus(){
	
}*/
/*void CHMSParaClinicalICDSettingDialog::OnGroupKillfocus(){
	
}*/
long CHMSParaClinicalICDSettingDialog::OnGroupLoadData(){
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
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group ")\
			     _T("WHERE (substr(hfg_id, 1, 2) IN('B1', 'B2','B3') or substr(hfg_id, 1, 3) IN('B1E','B1F')) AND substr(hfg_id, 3, 3)<>'000' %s ")\
				 _T("ORDER BY hfg_index, hfg_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSParaClinicalICDSettingDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnSearchChange(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnSearchSetfocus(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnSearchKillfocus(){
	
} */
int CHMSParaClinicalICDSettingDialog::OnSearchCheckValue(){
	OnFeeListLoadData();
	return 1;
} 
void CHMSParaClinicalICDSettingDialog::OnMapedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnFeeListLoadData();
}
void CHMSParaClinicalICDSettingDialog::OnFeeListDblClick(){
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0)
		return;
	CString szActive = m_wndFeeList.GetItemText(nSel, 3);
	if(szActive !=_T("Y"))
		szActive = _T("Y");
	else
		szActive = _T("N");
	m_wndFeeList.SetItemText(nSel, 3, szActive);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_paraclinic_icd SEt hpi_active='%s' WHERE hpi_itemid='%s' "), szActive, m_szItemId);
	pMF->ExecSQL(szSQL);
	m_wndFeeList.Invalidate(FALSE);
	
} 
void CHMSParaClinicalICDSettingDialog::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szItemId = m_wndFeeList.GetItemText(nNewItem, 0);
	OnIcdListLoadData();
	OnMapListLoadData();
} 
int CHMSParaClinicalICDSettingDialog::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}

int CHMSParaClinicalICDSettingDialog::OnFeeListAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_paraclinic_icd SET hpi_active='Y' "));
	pMF->ExecSQL(szSQL);
	OnFeeListLoadData();
	return 0;
}

long CHMSParaClinicalICDSettingDialog::OnFeeListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(TRUE);
	if (m_szSearch.IsEmpty())
		szWhere.Empty();
	else
		szWhere.Format(_T(" AND lower(hfl_name) LIKE (chr(37)||lower('%s')||chr(37)) "),  m_szSearch);

	if(!m_szGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfl_groupid='%s' "), m_szGroupKey);
	}
	m_wndFeeList.BeginLoad(); 
	m_wndFeeList.DeleteAllItems(); 
	int nCount = 0;


	if(!m_bMaped)
	{
		bool bNewPrice = str2int(pMF->GetParam(_T("apply_newprice")));
		if(bNewPrice)
		{
			CString szApplyDate = pMF->GetParam(_T("apply_date"));
			szWhere.AppendFormat(_T(" and hfl_applydate >= TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
		}
		
		szSQL.Format(_T("SELECT hfl_feeid AS ID, hfl_name AS Name, hfl_groupid AS GroupID, 'N' as active ")\
					_T("FROM hms_fee_list ")\
					_T("WHERE hfl_active='Y'  %s ")\
					_T("ORDER BY hfl_feeid"), szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT distinct hfl_feeid AS ID, \
		hfl_name       AS Name, \
		hfl_groupid    AS GroupID, hpi_active as active \
		FROM HMS_PARACLINIC_ICD \
		LEFT JOIN hms_fee_list \
		ON(hfl_feeid=hpi_itemid) \
		WHERE hfl_active='Y' %s ORDER BY hfl_groupid, hfl_name "), szWhere);

	}

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("GroupID")), 
			rs.GetValue(_T("active")), 
			NULL);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	m_wndIcdList.DeleteAllItems();
	m_wndMapList.DeleteAllItems();
	return 0;

}
void CHMSParaClinicalICDSettingDialog::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalICDSettingDialog::OnChapterSelendok()
{
	OnIcdListLoadData();
}
/*void CHMSParaClinicalICDSettingDialog::OnChapterSetfocus(){
	
}*/
/*void CHMSParaClinicalICDSettingDialog::OnChapterKillfocus(){
	
}*/
long CHMSParaClinicalICDSettingDialog::OnChapterLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey() && !m_szChapterKey.IsEmpty()){
		szWhere.Format(_T(" and hig_id=%ld "), str2long(m_szChapterKey));
	};
	m_wndChapter.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hig_id as id, hig_name as name FROM hms_icdgroup WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSParaClinicalICDSettingDialog::OnChapterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnIcdNameChange(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnIcdNameSetfocus(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnIcdNameKillfocus(){
	
} */
int CHMSParaClinicalICDSettingDialog::OnIcdNameCheckValue(){
	OnIcdListLoadData();
	return 1;
} 

int CHMSParaClinicalICDSettingDialog::AddItem(CString szIcd)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("INSERT INTO hms_paraclinic_icd(hpi_itemid, hpi_icd, hpi_numday) values('%s','%s',%d) "),
	m_szItemId, szIcd, 365);
	int ret = pMF->ExecSQL(szSQL);
	return ret;
}
void CHMSParaClinicalICDSettingDialog::OnIcdListDblClick()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndIcdList.GetCurSel();
	if(nSel < 0)
		return;
	CString szIcd = m_wndIcdList.GetItemText(nSel, 0);
	int ret = AddItem(szIcd);
	if(ret > 0)
		{
			OnMapListLoadData();
			m_wndIcdList.DeleteItem(nSel);
		}
	
} 
void CHMSParaClinicalICDSettingDialog::OnIcdListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaClinicalICDSettingDialog::OnIcdListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 

int CHMSParaClinicalICDSettingDialog::OnIcdListMarkItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndIcdList.GetItemCount(); i++)
	{
		m_wndIcdList.SetItemText(i, 2, _T("[X]"));
	}

	 return 0;
} 

int CHMSParaClinicalICDSettingDialog::OnIcdListUnMarkItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndIcdList.GetItemCount(); i++)
	{
		m_wndIcdList.SetItemText(i, 2, _T(""));
	}
	return 0;
} 

long CHMSParaClinicalICDSettingDialog::OnIcdListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	

	UpdateData(TRUE);
	if(m_szChapterKey.IsEmpty())
		return 0;

	szWhere.Empty();
	
	szWhere.Format(_T("and hi_groupid=%ld"), str2long(m_szChapterKey));
	if(!m_szIcdName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(hi_name) like(chr(37)||lower('%s')||chr(37)) "), m_szIcdName);
	}
	szWhere.AppendFormat(_T(" and hi_icd not in(select hpi_icd from hms_paraclinic_icd where hpi_itemid='%s') "), m_szItemId);
	szSQL.Format(_T(" SELECT trim(hi_icd) as icd ,") \
_T("   hi_name as name,") \
_T("   hi_groupid") \
_T(" FROM hms_icd") \
_T(" WHERE hi_active='Y' %s") \
_T(" ORDER BY hi_icd,") \
_T("   hi_name"), szWhere);

	_tprintf(_T("\r\n%s"), szSQL);

	m_wndIcdList.BeginLoad(); 
	int nCount = 0;
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIcdList.AddItems(
			rs.GetValue(_T("icd")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}

	m_wndIcdList.EndLoad(); 
	return nCount;
}
/*void CHMSParaClinicalICDSettingDialog::OnMapNameChange(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnMapNameSetfocus(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnMapNameKillfocus(){
	
} */
int CHMSParaClinicalICDSettingDialog::OnMapNameCheckValue(){
	OnMapListLoadData();
	return 1;
} 
void CHMSParaClinicalICDSettingDialog::OnMapListDblClick(){
	
} 
void CHMSParaClinicalICDSettingDialog::OnMapListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaClinicalICDSettingDialog::OnMapListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndMapList.GetCurSel();
	if(nSel < 0)
		return 0;
	
	int ret = ShowMessageBox(_T("Bạn có muốn xóa đề mục đã chọn không?"), MB_YESNO);
	if(ret == IDNO)
		return 0;

	CString szIcd;
	szIcd = m_wndMapList.GetItemText(nSel, 0);
	ret = DeleteItem(szIcd);
	if(ret > 0)
	{
		m_wndMapList.DeleteItem(nSel);
	}
	 return 0;
} 

int CHMSParaClinicalICDSettingDialog::DeleteItem(CString szIcd){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("DELETE FROM hms_paraclinic_icd where hpi_itemid='%s' and hpi_icd='%s' "),
		m_szItemId, szIcd);
	int ret = pMF->ExecSQL(szSQL);
	return ret;
}

int CHMSParaClinicalICDSettingDialog::OnMapListMarkItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndMapList.GetItemCount(); i++)
	{
		m_wndMapList.SetItemText(i, 2, _T("[X]"));
	}

	 return 0;
} 

int CHMSParaClinicalICDSettingDialog::OnMapListUnMarkItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndMapList.GetItemCount(); i++)
	{
		m_wndMapList.SetItemText(i, 2, _T(""));
	}
	return 0;
} 


long CHMSParaClinicalICDSettingDialog::OnMapListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndMapList.BeginLoad(); 
	int nCount = 0;
	if(m_szMapName.IsEmpty())
		szWhere.Empty();
	else
	{
		szWhere.Format(_T(" and lower(hi_name) like(chr(37)||lower('%s')||chr(37)) "), m_szMapName);
	}
	szSQL.Format(_T("SELECT hpi_icd as icd, hi_name as name, hpi_numday as numday FROM hms_paraclinic_icd, hms_icd " )\
		_T(" WHERE hpi_itemid = '%s' and hi_icd=hpi_icd %s ORDER BY hpi_icd "),
		m_szItemId, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapList.AddItems(
			rs.GetValue(_T("icd")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	m_wndMapList.EndLoad(); 
	return nCount;

}

void CHMSParaClinicalICDSettingDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szMark, szIcd;
	for (int i =0; i < m_wndIcdList.GetItemCount(); i++)
	{
		szMark = m_wndIcdList.GetItemText(i, 2);
		if(szMark == _T("[X]"))
		{
			szIcd = m_wndIcdList.GetItemText(i, 0);
			AddItem(szIcd);
		}
	}
	OnIcdListLoadData();
	OnMapListLoadData();
} 
void CHMSParaClinicalICDSettingDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szMark, szIcd;
	for (int i =0; i < m_wndMapList.GetItemCount(); i++)
	{
		szMark = m_wndMapList.GetItemText(i, 2);
		if(szMark == _T("[X]"))
		{
			szIcd = m_wndMapList.GetItemText(i, 0);
			DeleteItem(szIcd);
		}
	}
	OnMapListLoadData();
	OnIcdListLoadData();
} 
void CHMSParaClinicalICDSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

int CHMSParaClinicalICDSettingDialog::OnAddHMSParaClinicalICDSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSParaClinicalICDSettingDialog::OnEditHMSParaClinicalICDSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSParaClinicalICDSettingDialog::OnDeleteHMSParaClinicalICDSettingDialog(){
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
 		OnCancelHMSParaClinicalICDSettingDialog();
 	}
	return 0;
}
int CHMSParaClinicalICDSettingDialog::OnSaveHMSParaClinicalICDSettingDialog(){
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
 		//OnHMSParaClinicalICDSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSParaClinicalICDSettingDialog::OnCancelHMSParaClinicalICDSettingDialog(){
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
int CHMSParaClinicalICDSettingDialog::OnHMSParaClinicalICDSettingDialogListLoadData(){
	return 0;
}
