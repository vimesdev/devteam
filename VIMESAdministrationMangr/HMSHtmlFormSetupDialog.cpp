#include "HMSHtmlFormSetupDialog.h"
#include "MainFrm.h"
#include "StringToken.h"

/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSHtmlFormSetupDialog *pVw = (CHMSHtmlFormSetupDialog *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHtmlFormSetupDialog* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnModuleSelendokFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnModuleSelendok();
}
/*static void _OnModuleSetfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnModuleKillfocus();
}*/
/*static void _OnModuleKillfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnModuleKillfocus();
}*/
static long _OnModuleLoadDataFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnModuleLoadData();
}
/*static void _OnModuleAddNewFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnModuleAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHtmlFormSetupDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHtmlFormSetupDialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnCategoryAddNew();
}*/
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnIndexCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSHtmlFormSetupDialog*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSHtmlFormSetupDialog *pVw = (CHMSHtmlFormSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSHtmlFormSetupDialog *pVw = (CHMSHtmlFormSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSHtmlFormSetupDialog *pVw = (CHMSHtmlFormSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHtmlFormSetupDialog *pVw = (CHMSHtmlFormSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHtmlFormSetupDialog *pVw = (CHMSHtmlFormSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSHtmlFormSetupDialog *pVw = (CHMSHtmlFormSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHtmlFormSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHtmlFormSetupDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSHtmlFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSHtmlFormSetupDialog*)pWnd)->OnAddHMSHtmlFormSetupDialog();
} 
static int _OnEditHMSHtmlFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSHtmlFormSetupDialog*)pWnd)->OnEditHMSHtmlFormSetupDialog();
} 
static int _OnDeleteHMSHtmlFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSHtmlFormSetupDialog*)pWnd)->OnDeleteHMSHtmlFormSetupDialog();
} 
static int _OnSaveHMSHtmlFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSHtmlFormSetupDialog*)pWnd)->OnSaveHMSHtmlFormSetupDialog();
} 
static int _OnCancelHMSHtmlFormSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSHtmlFormSetupDialog*)pWnd)->OnCancelHMSHtmlFormSetupDialog();
}

static long _OnCategorySearchLoadDataFnc(CWnd *pWnd){
	return ((CHMSHtmlFormSetupDialog *)pWnd)->OnCategorySearchLoadData();
}

static void _OnCategorySearchSelendokFnc(CWnd *pWnd){
	((CHMSHtmlFormSetupDialog *)pWnd)->OnCategorySearchSelendok();
}
static void _OnTT32SelectFnc(CWnd* pWnd) {
	((CHMSHtmlFormSetupDialog*) pWnd)->OnTT32Select();
}
CHMSHtmlFormSetupDialog::CHMSHtmlFormSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_szTableName = _T("hms_html_form_setup");
	SetDefaultValues();
}
CHMSHtmlFormSetupDialog::~CHMSHtmlFormSetupDialog(){
}
void CHMSHtmlFormSetupDialog::OnCreateComponents()
{
	/*m_wndSearchLabel.Create(this, _T("Search"), 5, 5, 85, 30);
	m_wndSearch.Create(this,90, 5, 320, 30); 
	//m_wndFind.Create(this, _T("@"), 325, 5, 405, 30);
	m_wndIDLabel.Create(this, _T("ID"), 5, 360, 85, 385);
	m_wndID.Create(this,90, 360, 320, 385); 
	m_wndNameLabel.Create(this, _T("Name"), 325, 360, 405, 385);
	m_wndName.Create(this,410, 360, 635, 385);
	m_wndModuleLabel.Create(this, _T("Module"), 5, 390, 85, 415);
	m_wndModule.Create(this,90, 390, 320, 415); 
	m_wndDeptLabel.Create(this, _T("Dept"), 325, 390, 405, 415);
	m_wndDept.Create(this,410, 390, 635, 415); 
	m_wndCategoryLabel.Create(this, _T("Category"), 5, 420, 85, 445);
	m_wndCategory.Create(this,90, 420, 320, 445); 
	m_wndPrintFileLabel.Create(this, _T("Print File"), 325, 420, 405, 445);
	m_wndPrintFile.Create(this,410, 420, 635, 445); 
	m_wndDataViewLabel.Create(this, _T("Data View"), 5, 450, 85, 475);
	m_wndDataView.Create(this,90, 450, 320, 475); 
	m_wndIndexLabel.Create(this, _T("Index"), 325, 450, 405, 475);
	m_wndIndex.Create(this,410, 450, 455, 475); 
	m_wndActive.Create(this, _T("Active"), 460, 450, 545, 475);
	m_wndIsView.Create(this, _T("Is View"), 550, 450, 635, 475);
	m_wndAdd.Create(this, _T("&Add"), 130, 480, 210, 505);
	m_wndEdit.Create(this, _T("&Edit"), 215, 480, 295, 505);
	m_wndDelete.Create(this, _T("&Delete"), 300, 480, 380, 505);
	m_wndSave.Create(this, _T("&Save"), 385, 480, 465, 505);
	m_wndCancel.Create(this, _T("&Cancel"), 470, 480, 550, 505);
	m_wndClose.Create(this, _T("&Close"), 555, 480, 635, 505);
	m_wndList.Create(this,5, 35, 635, 355);*/

	m_wndSearchLabel.Create(this, _T("Search"), 425, 5, 505, 30);
	m_wndSearch.Create(this, 510, 5, 825, 30); 
	m_wndTT32.Create(this, _T("TT32"), 830, 5, 905, 30);
	m_wndIDLabel.Create(this, _T("ID"), 5, 360, 85, 385);
	m_wndID.Create(this,90, 360, 454, 385); 
	m_wndNameLabel.Create(this, _T("Name"), 459, 360, 539, 385);
	m_wndName.Create(this,544, 360, 905, 385); 
	m_wndModuleLabel.Create(this, _T("Module"), 5, 390, 85, 415);
	m_wndModule.Create(this,90, 390, 454, 415); 
	m_wndDeptLabel.Create(this, _T("Dept"), 459, 390, 539, 415);
	m_wndDept.Create(this,544, 390, 905, 415); 
	m_wndCategoryLabel.Create(this, _T("Category"), 5, 420, 85, 445);
	m_wndCategory.Create(this,90, 420, 454, 445); 
	m_wndPrintFileLabel.Create(this, _T("Print File"), 459, 420, 539, 445);
	m_wndPrintFile.Create(this,544, 420, 905, 445); 
	m_wndDataViewLabel.Create(this, _T("Data View"), 5, 450, 85, 475);
	m_wndDataView.Create(this,90, 450, 454, 475); 
	m_wndIndexLabel.Create(this, _T("Index"), 459, 450, 539, 475);
	m_wndIndex.Create(this,544, 450, 589, 475); 
	m_wndActive.Create(this, _T("Active"), 594, 450, 679, 475);
	m_wndIsView.Create(this, _T("Is View"), 684, 450, 749, 475);
	m_wndIsMultSheet.Create(this, _T("Multi Sheet"), 755, 450, 840, 475);
	m_wndInOpt.Create(this, _T("In Opt"), 845, 450, 925, 475);
	m_wndAdd.Create(this, _T("&Add"), 398, 480, 478, 505);
	m_wndEdit.Create(this, _T("&Edit"), 483, 480, 563, 505);
	m_wndDelete.Create(this, _T("&Delete"), 568, 480, 648, 505);
	m_wndSave.Create(this, _T("&Save"), 653, 480, 733, 505);
	m_wndCancel.Create(this, _T("&Cancel"), 738, 480, 818, 505);
	m_wndClose.Create(this, _T("&Close"), 823, 480, 903, 505);
	m_wndList.Create(this,5, 35, 905, 355); 
	m_wndCategorySearchLabel.Create(this, _T("Search By Category"), 5, 5, 139, 30);
	m_wndCategorySearch.Create(this,144, 5, 420, 30); 

}
void CHMSHtmlFormSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	//m_wndSearch.SetCheckValue(true);
	m_wndSearch.ModifyStyle(WS_TABSTOP, 0);
	m_wndID.SetLimitText(64);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(128);
	m_wndName.SetCheckValue(true);
	//m_wndModule.SetCheckValue(true);
	m_wndModule.LimitText(256);
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(512);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(22);
	m_wndIndex.SetLimitText(22);
	m_wndIndex.SetCheckValue(true);

	m_wndModule.SetCheckBox();
	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.SetCheckBox();
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCategorySearch.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategorySearch.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT | CFMT_CENTER, 50);
	m_wndList.InsertColumn(1, _T("ID"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(3, _T("Module"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Dept"), CFMT_TEXT, 100);
	
	m_wndList.SetAutoIndex(true);

	m_hms_html_form_setupTbl.SetTableName(m_szTableName);
	m_hms_html_form_setupTbl.AddField(_T("HHFS_ID"), dfText, 64); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_NAME"), dfText, 128); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_CATEGORY"), dfLong); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_PRINT_FILE"), dfText, 64); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_DATA_VIEW"), dfText, 64); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_INDEX"), dfLong); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_MODULE"), dfText, 256); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_DEPT"), dfText, 512); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_ACTIVE"), dfText, 1); 
	m_hms_html_form_setupTbl.AddField(_T("HHFS_IS_VIEW"), dfText, 1);
	m_hms_html_form_setupTbl.AddField(_T("HHFS_MULTI_SHEET"), dfText, 1);
	m_hms_html_form_setupTbl.AddField(_T("HHFS_SURGERY_TYPE"), dfText, 1);
}
void CHMSHtmlFormSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndModule.SetEvent(WE_SELENDOK, _OnModuleSelendokFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	//m_wndIndex.SetEvent(WE_CHANGE, _OnIndexChangeFnc);
	//m_wndIndex.SetEvent(WE_SETFOCUS, _OnIndexSetfocusFnc);
	//m_wndIndex.SetEvent(WE_KILLFOCUS, _OnIndexKillfocusFnc);
	m_wndIndex.SetEvent(WE_CHECKVALUE, _OnIndexCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndCategorySearch.SetEvent(WE_LOADDATA, _OnCategorySearchLoadDataFnc);
	m_wndCategorySearch.SetEvent(WE_SELENDOK, _OnCategorySearchSelendokFnc);
	m_wndTT32.SetEvent(WE_CLICK, _OnTT32SelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();
	OnModuleLoadData();
}
void CHMSHtmlFormSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndPrintFile.GetDlgCtrlID(), m_szPrintFile);
	DDX_Text(pDX, m_wndDataView.GetDlgCtrlID(), m_szDataView);
	DDX_Text(pDX, m_wndIndex.GetDlgCtrlID(), m_nIndex);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndIsView.GetDlgCtrlID(), m_bIsView);
	DDX_Check(pDX, m_wndIsMultSheet.GetDlgCtrlID(), m_bIsMultiSheet);
	DDX_Check(pDX, m_wndInOpt.GetDlgCtrlID(), m_bInOpt);
	DDX_TextEx(pDX, m_wndCategorySearch.GetDlgCtrlID(), m_szCategorySearchKey);
	DDX_Check(pDX, m_wndTT32.GetDlgCtrlID(), m_bTT32);
}
void CHMSHtmlFormSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Module")] =  m_szModuleKey;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Category")] =  m_szCategoryKey;
	m_jData[_T("Index")] =  m_nIndex;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Module")].GetValue(m_szModuleKey);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Category")].GetValue(m_szCategoryKey);
	m_jData[_T("Index")].GetValue(m_nIndex);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CHMSHtmlFormSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM %s WHERE hhfs_id = '%s'"), m_szTableName, m_szID);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		SetMode(VM_NONE);
	}
	rs.GetValue(_T("HHFS_ID"), m_szID);
	rs.GetValue(_T("HHFS_NAME"), m_szName);
	rs.GetValue(_T("HHFS_CATEGORY"), m_szCategoryKey);
	rs.GetValue(_T("HHFS_PRINT_FILE"), m_szPrintFile);
	rs.GetValue(_T("HHFS_DATA_VIEW"), m_szDataView);
	rs.GetValue(_T("HHFS_INDEX"), m_nIndex);
	//rs.GetValue(_T("HHFS_MODULE"), m_szModuleKey);
	//rs.GetValue(_T("HHFS_DEPT"), m_szDeptKey);
	rs.GetValue(_T("HHFS_ACTIVE"), tmpStr);
	m_bActive = tmpStr==_T("Y")?true:false;
	rs.GetValue(_T("hhfs_multi_sheet"), tmpStr);
	m_bIsMultiSheet = tmpStr == _T("Y") ? true : false;
	rs.GetValue(_T("hhfs_surgery_type"), tmpStr);
	m_bInOpt = tmpStr == _T("Y") ? true : false;
	SetCheckData(&m_wndModule, rs.GetValue(_T("HHFS_MODULE")));
	SetCheckData(&m_wndDept, rs.GetValue(_T("HHFS_DEPT")));
	SetMode(VM_VIEW);
}

void CHMSHtmlFormSetupDialog::SetCheckData(CGuiComboBox* pCombo, CString szData)
{
	//_tprintf(_T("\ndata: %s"), szData);
	for (int i = 0; i < pCombo->GetItemCount(); i++)
	{
		pCombo->SetCheck(i, FALSE);
	}
	if (szData.IsEmpty())
	{
		return;
	}
	CStringToken dat(szData);
	CString tmpStr;	
	for (int i = 0; i < dat.GetSize(); i++)
	{
		dat.GetAt(i, tmpStr);
		for (int j = 0; j < pCombo->GetItemCount(); j++)
		{
			pCombo->SetCurSel(j);
			//_tprintf(_T("\ntmpStr: %s| Key: %s|sel: %d|j:%d"), tmpStr, pCombo->GetCurrent(0));
			if (tmpStr == pCombo->GetCurrent(0))
			{
				pCombo->SetCheck(j);
				continue;
			}
		}
	}
}

void CHMSHtmlFormSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_html_form_setupTbl.SetTableName(m_szTableName);
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_ID"), m_szID.MakeUpper());
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_NAME"), m_szName);
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_CATEGORY"), m_szCategoryKey);
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_PRINT_FILE"), m_szPrintFile);
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_DATA_VIEW"), m_szDataView);
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_INDEX"), m_nIndex);
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_MODULE"), m_wndModule.GetCheckData(0));
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_DEPT"), m_wndDept.GetCheckData(0));
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_ACTIVE"), m_bActive?_T("Y"):_T("N"));
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_IS_VIEW"), m_bIsView?_T("Y"):_T("N"));
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_MULTI_SHEET"), m_bIsMultiSheet ? _T("Y") : _T("N"));
	m_hms_html_form_setupTbl.SetValue(_T("HHFS_SURGERY_TYPE"), m_bInOpt? _T("Y") : _T("N"));
}
void CHMSHtmlFormSetupDialog::SetDefaultValues(){

	m_szSearch.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szModuleKey.Empty();
	m_szDeptKey.Empty();
	m_szCategoryKey.Empty();
	m_szCategorySearchKey.Empty();
	m_szPrintFile.Empty();
	m_szDataView.Empty();
	m_nIndex=0;
	m_bActive=FALSE;
	m_bIsView = FALSE;
	m_bIsMultiSheet = FALSE;
	m_bInOpt = FALSE;
	m_bTT32 = FALSE;
	SetCheckData(&m_wndModule, _T(""));
	SetCheckData(&m_wndDept, _T(""));
}
int CHMSHtmlFormSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndID.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndName.SetFocus();
			m_wndID.EnableWindow(FALSE);
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
		m_szModuleKey.Empty();
		m_szDeptKey.Empty();
		m_wndCategorySearch.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSHtmlFormSetupDialog::OnSearchChange(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnSearchSetfocus(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnSearchKillfocus(){
	
} */
int CHMSHtmlFormSetupDialog::OnSearchCheckValue(){
	UpdateData();
	OnListLoadData();
	return 0;
} 
void CHMSHtmlFormSetupDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSHtmlFormSetupDialog::OnIDChange(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnIDSetfocus(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnIDKillfocus(){
	
} */
int CHMSHtmlFormSetupDialog::OnIDCheckValue(){
	return 0;
} 
/*void CHMSHtmlFormSetupDialog::OnNameChange(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnNameKillfocus(){
	
} */
int CHMSHtmlFormSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSHtmlFormSetupDialog::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHtmlFormSetupDialog::OnModuleSelendok(){
	 
}
/*void CHMSHtmlFormSetupDialog::OnModuleSetfocus(){
	
}*/
/*void CHMSHtmlFormSetupDialog::OnModuleKillfocus(){
	
}*/
long CHMSHtmlFormSetupDialog::OnModuleLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//return pMF->LoadSelectionList(&m_wndModule, _T("sys_module_type"), m_szModuleKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szChecked, tmpStr;
	int nItem =1;
	szChecked = m_wndList.GetItemText(m_wndList.GetCurSel(), 3);
	CStringToken checked(szChecked);
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szModuleKey);
	};
	m_wndModule.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ") \
				_T(" FROM sys_sel ") \
				_T(" WHERE ss_id = 'sys_module_type' %s ORDER BY id ")
				, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nItem = m_wndModule.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
			for (int i = 0; i < checked.GetSize(); i++)
			{
				checked.GetAt(i, tmpStr);
				if (tmpStr == rs.GetValue(_T("id")))
				{
					m_wndModule.SetCheck(nItem);
					continue;
				}
			}
		rs.MoveNext();
	}
	if (GetMode() == VM_ADD)
	{
		SetCheckData(&m_wndModule, _T(""));
	}
	return nCount;
}
/*void CHMSHtmlFormSetupDialog::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSHtmlFormSetupDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHtmlFormSetupDialog::OnDeptSelendok(){
	 
}
/*void CHMSHtmlFormSetupDialog::OnDeptSetfocus(){
	
}*/
/*void CHMSHtmlFormSetupDialog::OnDeptKillfocus(){
	
}*/
long CHMSHtmlFormSetupDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//return pMF->LoadDepartment(&m_wndDept, m_szDeptKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szChecked, tmpStr;
	int nItem =1;
	szChecked = m_wndList.GetItemText(m_wndList.GetCurSel(), 4);
	CStringToken checked(szChecked);
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
				_T(" FROM sys_dept ") \
				_T(" WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nItem = m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
			for (int i = 0; i < checked.GetSize(); i++)
			{
				checked.GetAt(i, tmpStr);
				if (tmpStr == rs.GetValue(_T("id")))
				{
					m_wndDept.SetCheck(nItem);
					continue;
				}
			}
		rs.MoveNext();
	}
	if (GetMode() == VM_ADD)
	{
		SetCheckData(&m_wndDept, _T(""));
	}
	return nCount;
}
/*void CHMSHtmlFormSetupDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSHtmlFormSetupDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHtmlFormSetupDialog::OnCategorySelendok(){
	 
}
/*void CHMSHtmlFormSetupDialog::OnCategorySetfocus(){
	
}*/
/*void CHMSHtmlFormSetupDialog::OnCategoryKillfocus(){
	
}*/
long CHMSHtmlFormSetupDialog::OnCategoryLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndCategory, _T("hms_html_form_category"), m_szCategoryKey);
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
/*void CHMSHtmlFormSetupDialog::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHtmlFormSetupDialog::OnIndexChange(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnIndexSetfocus(){
	
} */
/*void CHMSHtmlFormSetupDialog::OnIndexKillfocus(){
	
} */
int CHMSHtmlFormSetupDialog::OnIndexCheckValue(){
	return 0;
} 
void CHMSHtmlFormSetupDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSHtmlFormSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSHtmlFormSetupDialog();
} 
void CHMSHtmlFormSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSHtmlFormSetupDialog();
} 
void CHMSHtmlFormSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSHtmlFormSetupDialog();
} 
void CHMSHtmlFormSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSHtmlFormSetupDialog();
} 
void CHMSHtmlFormSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSHtmlFormSetupDialog();
} 
void CHMSHtmlFormSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSHtmlFormSetupDialog::OnListDblClick(){
	
} 
void CHMSHtmlFormSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 1);
	GetDataToScreen();
} 
int CHMSHtmlFormSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSHtmlFormSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();

	if (!m_szCategorySearchKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND HHFS_CATEGORY = '%s' "), m_szCategorySearchKey);
	}

	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND Lower(hhfs_id||hhfs_name) LIKE chr(37)||Lower('%s')||chr(37) "), m_szSearch);
	}
	szSQL.Format(_T(" SELECT hhfs_id AS id,") \
	_T("        hhfs_name AS name,") \
	_T("        hhfs_module AS MODULE,") \
	_T("        hhfs_dept AS dept,") \
	_T("        hhfs_index AS form_index") \
	_T(" FROM   %s") \
	_T(" WHERE  1=1 %s") \
	_T(" ORDER  BY hhfs_category,hhfs_index,hhfs_id")
	, m_szTableName, szWhere);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("form_Index")),
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Module")), 
			rs.GetValue(_T("Dept")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSHtmlFormSetupDialog::OnAddHMSHtmlFormSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSHtmlFormSetupDialog::OnEditHMSHtmlFormSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSHtmlFormSetupDialog::OnDeleteHMSHtmlFormSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM %s WHERE hhfs_id = '%s'"), m_szTableName, m_szID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}
int CHMSHtmlFormSetupDialog::OnSaveHMSHtmlFormSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_html_form_setupTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hhfs_id = '%s'"), m_szID);
 		szSQL = m_hms_html_form_setupTbl.GetUpdateSQL(_T("hhfs_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
_tprintf(_T("\nret:%d"), ret);
 	if(ret > 0)
 	{
 		//OnHMSHtmlFormSetupDialogListLoadData();
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSHtmlFormSetupDialog::OnCancelHMSHtmlFormSetupDialog(){
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
int CHMSHtmlFormSetupDialog::OnHMSHtmlFormSetupDialogListLoadData(){
	return 0;
}
long CHMSHtmlFormSetupDialog::OnCategorySearchLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndCategorySearch.IsSearchKey() && !m_szCategorySearchKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE HHFS_CATEGORY='%s'"), m_szCategorySearchKey);
	};
	
	szSQL.Format(_T(" SELECT ss_code as id, ss_desc as name from sys_sel") \
	_T(" where ss_id IN ('hms_html_form_category')"), szWhere);

	m_wndCategorySearch.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategorySearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
void CHMSHtmlFormSetupDialog::OnCategorySearchSelendok()
{
	UpdateData(true);
	OnListLoadData();	
}

void CHMSHtmlFormSetupDialog::OnTT32Select()
{
	UpdateData();
	m_szTableName.Format(
		_T("hms_html_form_setup%s")
		, m_bTT32?_T("_TT32"):_T(""));
	OnListLoadData();
}