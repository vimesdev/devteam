#include "IVFSettingThungDialog.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFSettingThungDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFSettingThungDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnListDeleteItem();
}

static int _OnListRefreshItemFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnListLoadData();
}
static int _OnListGenChildItemFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnListGenChildItem();
}
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnIDCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSettingThungDialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategoryAddNew();
}*/
static void _OnLocationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSettingThungDialog* )pWnd)->OnLocationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLocationSelendokFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationSelendok();
}
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationKillfocus();
}*/
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationKillfocus();
}*/
static long _OnLocationLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnLocationLoadData();
}
/*static void _OnLocationAddNewFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnMaxCapacityChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnMaxCapacityChange();
} */
/*static void _OnMaxCapacitySetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnMaxCapacitySetfocus();} */ 
/*static void _OnMaxCapacityKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnMaxCapacityKillfocus();
} */
static int _OnMaxCapacityCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnMaxCapacityCheckValue();
} 
/*static void _OnNitoDateChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnNitoDateChange();
} */
/*static void _OnNitoDateSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnNitoDateSetfocus();} */ 
/*static void _OnNitoDateKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnNitoDateKillfocus();
} */
static int _OnNitoDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnNitoDateCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CIVFSettingThungDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnAddIVFSettingThungDialog();
} 
static int _OnEditIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnEditIVFSettingThungDialog();
} 
static int _OnDeleteIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnDeleteIVFSettingThungDialog();
} 
static int _OnSaveIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnSaveIVFSettingThungDialog();
} 
static int _OnCancelIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnCancelIVFSettingThungDialog();
} 
CIVFSettingThungDialog::CIVFSettingThungDialog(CWnd *pParent, CString szTable, CString szParentTable):
	CGuiDialog(pParent), m_szTable(szTable), m_szLocationTable(szParentTable)
	{

	m_nDlgWidth = 615;
	m_nDlgHeight = 485;
	SetDefaultValues();
	if(m_szLocationTable.IsEmpty())
		m_bHasParent = false;
	else
		m_bHasParent = true;
	m_szKeyName.Format(_T("%s_id"), m_szTable);
	m_szPrefix = _T("");
	m_szCategoryTable = _T("ivf_storage_dungcu");
	m_szTitle = _T("Danh mục thùng");
}
CIVFSettingThungDialog::~CIVFSettingThungDialog(){
}
void CIVFSettingThungDialog::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 6, 5, 86, 30);
	m_wndSearch.Create(this,91, 5, 487, 30); 
	m_wndList.Create(this,5, 35, 800, 390); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 395, 85, 420);
	m_wndID.Create(this,90, 395, 170, 420); 
	m_wndCategoryLabel.Create(this, _T("Category"), 175, 395, 255, 420);
	m_wndCategory.Create(this,260, 395, 480, 420); 
	m_wndLocationLabel.Create(this, _T("Location"), 485, 395, 565, 420);
	m_wndLocation.Create(this,570, 395, 800, 420); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 425, 85, 450);
	m_wndDescription.Create(this,90, 425, 480, 450); 
	m_wndMaxCapacityLabel.Create(this, _T("Max Capacity"), 485, 425, 565, 450);
	m_wndMaxCapacity.Create(this,570, 425, 650, 450); 
	m_wndNitoDateLabel.Create(this, _T("Nito date"), 655, 425, 711, 450);
	m_wndNitoDate.Create(this,716, 425, 796, 450); 
	m_wndIsActive.Create(this, _T("IsActive"), 5, 455, 85, 480);
	m_wndAdd.Create(this, _T("&Add"), 295, 455, 375, 480);
	m_wndEdit.Create(this, _T("&Edit"), 380, 455, 460, 480);
	m_wndDelete.Create(this, _T("&Delete"), 465, 455, 545, 480);
	m_wndSave.Create(this, _T("&Save"), 550, 455, 630, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 635, 455, 715, 480);
	m_wndClose.Create(this, _T("&Close"), 720, 455, 800, 480);

}
void CIVFSettingThungDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(254);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetAllowEmpty(true);

	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);
	m_wndLocation.SetCheckValue(true);
	m_wndLocation.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndMaxCapacity.SetLimitText(16);
	m_wndMaxCapacity.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);
	m_wndLocation.SetCheckValue(m_bHasParent);
	m_wndLocation.ShowWindow(m_bHasParent?SW_SHOW:SW_HIDE);
	m_wndIsActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);//id
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Category"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Location"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("Ngày đổ nito"), CFMT_DATE, 90);
	

	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndLocation.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);//id
	m_wndLocation.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_settingTbl.SetTableName(m_szTable);
	m_settingTbl.AddField(m_szKeyName, dfText, 32);
	m_settingTbl.AddField(_T("description"), dfText, 254);
	m_settingTbl.AddField(_T("parent_id"), dfText, 32);
	m_settingTbl.AddField(_T("category"), dfText, 32);
	m_settingTbl.AddField(_T("max_capacity"), dfInteger);
	m_settingTbl.AddField(_T("nito_date"), dfDate);
	m_settingTbl.AddField(_T("isactive"),dfText, 1);
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select count(*) from sys.dba_tables where owner = 'VIMES' and upper(table_name) = upper('%s')"), m_szTable);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() == 0)
	{
		szSQL.Format(_T(" CREATE TABLE %s(") \
		_T("     %s_id            NVARCHAR2(32) DEFAULT SYS_GUID(),") \
		_T("	 code NVARCHAR2(15), ") \
		_T("     description   NVARCHAR2(254),") \
		_T("     parent_id         NVARCHAR2(32),") \
		_T("     isactive      NVARCHAR2(1) DEFAULT 'Y',") \
		_T("	 MAX_CAPACITY INTEGER,") \
		_T("	 CODE NVARCHAR2(15),") \
		_T("	 CATEGORY NVARCHAR2(32),") \
		_T("	 NITO_DATE DATE,") \
		_T("     PRIMARY KEY (%s_id)") \
		_T(" )"), m_szTable, m_szTable, m_szTable); 

		pMF->ExecSQL(szSQL);
	}
}
void CIVFSettingThungDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Refresh"), _OnListRefreshItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Generate child item"), _OnListGenChildItemFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndLocation.SetEvent(WE_SELENDOK, _OnLocationSelendokFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_SELCHANGE, _OnLocationSelectChangeFnc);
	m_wndLocation.SetEvent(WE_LOADDATA, _OnLocationLoadDataFnc);
	//m_wndLocation.SetEvent(WE_ADDNEW, _OnLocationAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndMaxCapacity.SetEvent(WE_CHANGE, _OnMaxCapacityChangeFnc);
	//m_wndMaxCapacity.SetEvent(WE_SETFOCUS, _OnMaxCapacitySetfocusFnc);
	//m_wndMaxCapacity.SetEvent(WE_KILLFOCUS, _OnMaxCapacityKillfocusFnc);
	m_wndMaxCapacity.SetEvent(WE_CHECKVALUE, _OnMaxCapacityCheckValueFnc);
	//m_wndNitoDate.SetEvent(WE_CHANGE, _OnNitoDateChangeFnc);
	//m_wndNitoDate.SetEvent(WE_SETFOCUS, _OnNitoDateSetfocusFnc);
	//m_wndNitoDate.SetEvent(WE_KILLFOCUS, _OnNitoDateKillfocusFnc);
	m_wndNitoDate.SetEvent(WE_CHECKVALUE, _OnNitoDateCheckValueFnc);
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
void CIVFSettingThungDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocationKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndMaxCapacity.GetDlgCtrlID(), m_nMaxCapacity);
	DDX_TextEx(pDX, m_wndNitoDate.GetDlgCtrlID(), m_szNitoDate);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CIVFSettingThungDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Category")] =  m_szCategoryKey;
	m_jData[_T("Location")] =  m_szLocationKey;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("MaxCapacity")] =  m_nMaxCapacity;
	m_jData[_T("NitoDate")] =  m_szNitoDate;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Category")].GetValue(m_szCategoryKey);
	m_jData[_T("Location")].GetValue(m_szLocationKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("MaxCapacity")].GetValue(m_nMaxCapacity);
	m_jData[_T("NitoDate")].GetValue(m_szNitoDate);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CIVFSettingThungDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM %s WHERE %s='%s'"), m_szTable, m_szKeyName, m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("description"), m_szDescription);
		rs.GetValue(_T("parent_id"), m_szLocationKey);
		rs.GetValue(_T("category"), m_szCategoryKey);
		rs.GetValue(_T("max_capacity"), m_nMaxCapacity);
		rs.GetValue(_T("nito_date"), m_szNitoDate);
		CString szActive;
		rs.GetValue(_T("isactive"), szActive);
		if(szActive == _T("Y"))
			m_bIsActive = TRUE;
		else
			m_bIsActive = FALSE;
	}

}
void CIVFSettingThungDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_settingTbl.SetValue(m_szKeyName, m_szID);
	m_settingTbl.SetValue(_T("description"), m_szDescription);
	m_settingTbl.SetValue(_T("parent_id"), m_szLocationKey);
	m_settingTbl.SetValue(_T("category"), m_szCategoryKey);
	m_settingTbl.SetValue(_T("max_capacity"), m_nMaxCapacity);
	m_settingTbl.SetValue(_T("nito_date"), m_szNitoDate);
	m_settingTbl.SetValue(_T("isactive"), m_bIsActive?_T("Y"):_T("N"));
}
void CIVFSettingThungDialog::SetDefaultValues(){

	m_szSearch.Empty();
	m_szID.Empty();
	m_szCategoryKey.Empty();
	m_szLocationKey.Empty();
	m_szDescription.Empty();
	m_nMaxCapacity=0;
	m_szNitoDate.Empty();
	m_bIsActive=TRUE;

}
int CIVFSettingThungDialog::SetMode(int nMode){
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
/*void CIVFSettingThungDialog::OnSearchChange(){
	
} */
/*void CIVFSettingThungDialog::OnSearchSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnSearchKillfocus(){
	
} */
int CIVFSettingThungDialog::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
} 
void CIVFSettingThungDialog::OnListDblClick(){
	
} 
void CIVFSettingThungDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	SetMode(VM_VIEW);
} 
int CIVFSettingThungDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFSettingThungDialog();
	 return 0;
} 
long CIVFSettingThungDialog::OnListLoadData(){

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
	szSQL.Format(_T("SELECT t1.%s as id, t1.code, t1.description, t2.description as parent_desc, t3.description as category_desc,nito_date ") \
			_T("FROM %s t1 ") \
			_T("LEFT JOIN %s t2 ON(t1.parent_id=t2.%s_id) ") \
			_T("LEFT JOIN ivf_storage_dungcu t3 on(t3.ivf_storage_dungcu_id=t1.category) ") \
			_T(" WHERE t1.isactive='Y' %s ORDER BY t1.%s "), m_szKeyName, m_szTable,m_szLocationTable, m_szLocationTable, szWhere, m_szKeyName);
	
	_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("category_desc")),
			rs.GetValue(_T("parent_desc")),			
			rs.GetValue(_T("nito_date")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	
	return nCount;
	return 0;
}
/*void CIVFSettingThungDialog::OnIDChange(){
	
} */
/*void CIVFSettingThungDialog::OnIDSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnIDKillfocus(){
	
} */
int CIVFSettingThungDialog::OnIDCheckValue(){
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
void CIVFSettingThungDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnCategorySelendok(){
	 
}
/*void CIVFSettingThungDialog::OnCategorySetfocus(){
	
}*/
/*void CIVFSettingThungDialog::OnCategoryKillfocus(){
	
}*/
long CIVFSettingThungDialog::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadComboBoxList(&m_wndCategory, m_szCategoryKey, _T("ivf_storage_dungcu"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCategoryKey
};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFSettingThungDialog::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFSettingThungDialog::OnLocationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnLocationSelendok(){
	 
}
/*void CIVFSettingThungDialog::OnLocationSetfocus(){
	
}*/
/*void CIVFSettingThungDialog::OnLocationKillfocus(){
	
}*/
long CIVFSettingThungDialog::OnLocationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLocation.IsSearchKey() && !m_szLocationKey.IsEmpty()){
	 szWhere.Format(_T(" and %s_id='%s' "), m_szLocationTable, m_szLocationKey);
	};
	m_wndLocation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT %s_id as id, description FROM %s WHERE isactive='Y' %s ORDER BY %s_id "), m_szLocationTable, m_szLocationTable, szWhere, m_szLocationTable);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLocation.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("description")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CIVFSettingThungDialog::OnLocationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFSettingThungDialog::OnDescriptionChange(){
	
} */
/*void CIVFSettingThungDialog::OnDescriptionSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnDescriptionKillfocus(){
	
} */
int CIVFSettingThungDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CIVFSettingThungDialog::OnMaxCapacityChange(){
	
} */
/*void CIVFSettingThungDialog::OnMaxCapacitySetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnMaxCapacityKillfocus(){
	
} */
int CIVFSettingThungDialog::OnMaxCapacityCheckValue(){
	return 0;
} 
/*void CIVFSettingThungDialog::OnNitoDateChange(){
	
} */
/*void CIVFSettingThungDialog::OnNitoDateSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnNitoDateKillfocus(){
	
} */
int CIVFSettingThungDialog::OnNitoDateCheckValue(){
	return 0;
} 
	void CIVFSettingThungDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CIVFSettingThungDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddIVFSettingThungDialog();
} 
void CIVFSettingThungDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditIVFSettingThungDialog();
} 
void CIVFSettingThungDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFSettingThungDialog();
}
void CIVFSettingThungDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFSettingThungDialog();
}  
void CIVFSettingThungDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelIVFSettingThungDialog();
} 
void CIVFSettingThungDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CIVFSettingThungDialog::OnAddIVFSettingThungDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFSettingThungDialog::OnEditIVFSettingThungDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFSettingThungDialog::OnDeleteIVFSettingThungDialog(){
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
	return 0;
}
int CIVFSettingThungDialog::OnSaveIVFSettingThungDialog(){
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
		szSQL.Format(_T(" CREATE TABLE %s(") \
		_T("     %s_id            NVARCHAR2(32) DEFAULT SYS_GUID(),") \
		_T("	 code NVARCHAR2(15), ") \
		_T("     description   NVARCHAR2(254),") \
		_T("     parent_id         NVARCHAR2(32),") \
		_T("     isactive      NVARCHAR2(1) DEFAULT 'Y',") \
		_T("	 MAX_CAPACITY INTEGER,") \
		_T("	 CODE NVARCHAR2(15),") \
		_T("	 CATEGORY NVARCHAR2(32),") \
		_T("	 NITO_DATE DATE,") \
		_T("     PRIMARY KEY (%s_id)") \
		_T(" )"), m_szTable, m_szTable, m_szTable); 

		pMF->ExecSQL(szSQL);
 	}
 	return ret;
 	return 0;
}
int CIVFSettingThungDialog::OnCancelIVFSettingThungDialog(){
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
int CIVFSettingThungDialog::OnIVFSettingThungDialogListLoadData(){
	return 0;
}

int CIVFSettingThungDialog::OnListGenChildItem()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("IVF_AUTOGEN_GIA('%s')"), m_szID);
	int nRet = str2int(pMF->ExecDML(szSQL));
	return nRet;
}