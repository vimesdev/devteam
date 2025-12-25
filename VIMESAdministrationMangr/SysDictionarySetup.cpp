#include "SysDictionarySetup.h"
#include "MainFrm.h"
static void _OnSearchChangeFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnSearchChange();
}
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CSysDictionarySetup *)pWnd)->OnSearchCheckValue();
} 
static void _OnEnglishLanguageSelectFnc(CWnd *pWnd){
	 ((CSysDictionarySetup*)pWnd)->OnEnglishLanguageSelect();
}
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysDictionarySetup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnEnglishWordChangeFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnEnglishWordChange();
} */
/*static void _OnEnglishWordSetfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnEnglishWordSetfocus();} */ 
/*static void _OnEnglishWordKillfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnEnglishWordKillfocus();
} */
static int _OnEnglishWordCheckValueFnc(CWnd *pWnd){
	return ((CSysDictionarySetup *)pWnd)->OnEnglishWordCheckValue();
} 
/*static void _OnOtherLanguageChangeFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnOtherLanguageChange();
} */
/*static void _OnOtherLanguageSetfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnOtherLanguageSetfocus();} */ 
/*static void _OnOtherLanguageKillfocusFnc(CWnd *pWnd){
	((CSysDictionarySetup *)pWnd)->OnOtherLanguageKillfocus();
} */
static int _OnOtherLanguageCheckValueFnc(CWnd *pWnd){
	return ((CSysDictionarySetup *)pWnd)->OnOtherLanguageCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysDictionarySetup *pVw = (CSysDictionarySetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSysDictionarySetup *pVw = (CSysDictionarySetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysDictionarySetup *pVw = (CSysDictionarySetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysDictionarySetup *pVw = (CSysDictionarySetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSysDictionarySetup *pVw = (CSysDictionarySetup *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnDictListLoadDataFnc(CWnd *pWnd){
	return ((CSysDictionarySetup*)pWnd)->OnDictListLoadData();
} 
static void _OnDictListDblClickFnc(CWnd *pWnd){
	((CSysDictionarySetup*)pWnd)->OnDictListDblClick();
} 
static void _OnDictListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysDictionarySetup*)pWnd)->OnDictListSelectChange(nOldItem, nNewItem);
} 
static int _OnDictListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysDictionarySetup*)pWnd)->OnDictListDeleteItem();
} 
static int _OnAddSysDictionarySetupFnc(CWnd *pWnd){
	 return ((CSysDictionarySetup*)pWnd)->OnAddSysDictionarySetup();
} 
static int _OnEditSysDictionarySetupFnc(CWnd *pWnd){
	 return ((CSysDictionarySetup*)pWnd)->OnEditSysDictionarySetup();
} 
static int _OnDeleteSysDictionarySetupFnc(CWnd *pWnd){
	 return ((CSysDictionarySetup*)pWnd)->OnDeleteSysDictionarySetup();
} 
static int _OnSaveSysDictionarySetupFnc(CWnd *pWnd){
	 return ((CSysDictionarySetup*)pWnd)->OnSaveSysDictionarySetup();
} 
static int _OnCancelSysDictionarySetupFnc(CWnd *pWnd){
	 return ((CSysDictionarySetup*)pWnd)->OnCancelSysDictionarySetup();
} 
CSysDictionarySetup::CSysDictionarySetup(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CSysDictionarySetup::~CSysDictionarySetup(){
}
void CSysDictionarySetup::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("&Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 395, 55); 
	m_wndEnglishLanguage.Create(this, _T("English Language"), 400, 30, 550, 55);
	m_wndDictionaryList.Create(this, _T("Dictionary List"), 5, 5, 805, 590);
	m_wndDictList.Create(this,10, 60, 800, 525); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 530, 105, 555);
	m_wndID.Create(this,110, 530, 395, 555); 
	m_wndEnglishWordLabel.Create(this, _T("English Word"), 10, 560, 105, 585);
	m_wndEnglishWord.Create(this,110, 560, 395, 585); 
	m_wndOtherLanguageLabel.Create(this, _T("Other Language"), 400, 560, 495, 585);
	m_wndOtherLanguage.Create(this,500, 560, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 435, 595, 505, 620);
	m_wndEdit.Create(this, _T("&Edit"), 510, 595, 580, 620);
	m_wndDelete.Create(this, _T("&Delete"), 585, 595, 655, 620);
	m_wndSave.Create(this, _T("&Save"), 660, 595, 730, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 735, 595, 805, 620);

}
void CSysDictionarySetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndSearch.SetLimitText(35);
//	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	m_wndID.SetLimitText(100);
	m_wndID.SetCheckValue(true);
	m_wndID.SetInitCap(2);
	m_wndEnglishWord.SetLimitText(100);
	m_wndEnglishWord.SetCheckValue(true);
	m_wndEnglishWord.SetInitCap(2);
	m_wndOtherLanguage.SetCheckValue(true);
	m_wndOtherLanguage.SetInitCap(2);


	m_wndDictList.InsertColumn(0, _T("ID"), CFMT_TEXT, 250);
	m_wndDictList.InsertColumn(1, _T("English"), CFMT_TEXT, 250);
	m_wndDictList.InsertColumn(2, _T("Viet Nam"), CFMT_TEXT, 260);
	
	m_sys_dictTbl.SetTableName(_T("sys_dict"));
	m_sys_dictTbl.AddField(_T("sd_enname"), dfText, 254); 
	m_sys_dictTbl.AddField(_T("sd_vnname"), dfText, 254); 
	m_sys_dictTbl.AddField(_T("sd_stdname"), dfText, 128); 

}
void CSysDictionarySetup::OnSetWindowEvents(){
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndEnglishLanguage.SetEvent(WE_CLICK, _OnEnglishLanguageSelectFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndEnglishWord.SetEvent(WE_CHANGE, _OnEnglishWordChangeFnc);
	//m_wndEnglishWord.SetEvent(WE_SETFOCUS, _OnEnglishWordSetfocusFnc);
	//m_wndEnglishWord.SetEvent(WE_KILLFOCUS, _OnEnglishWordKillfocusFnc);
	m_wndEnglishWord.SetEvent(WE_CHECKVALUE, _OnEnglishWordCheckValueFnc);
	//m_wndOtherLanguage.SetEvent(WE_CHANGE, _OnOtherLanguageChangeFnc);
	//m_wndOtherLanguage.SetEvent(WE_SETFOCUS, _OnOtherLanguageSetfocusFnc);
	//m_wndOtherLanguage.SetEvent(WE_KILLFOCUS, _OnOtherLanguageKillfocusFnc);
	m_wndOtherLanguage.SetEvent(WE_CHECKVALUE, _OnOtherLanguageCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndDictList.SetEvent(WE_SELCHANGE, _OnDictListSelectChangeFnc);
	m_wndDictList.SetEvent(WE_LOADDATA, _OnDictListLoadDataFnc);
	m_wndDictList.SetEvent(WE_DBLCLICK, _OnDictListDblClickFnc);
	m_wndDictList.AddEvent(1, _T("Delete"), _OnDictListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysDictionarySetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysDictionarySetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysDictionarySetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysDictionarySetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysDictionarySetupFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
	//OnDictListLoadData();
}
void CSysDictionarySetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndEnglishLanguage.GetDlgCtrlID(), m_bEnglishLanguage);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndEnglishWord.GetDlgCtrlID(), m_szEnglishWord);
	DDX_Text(pDX, m_wndOtherLanguage.GetDlgCtrlID(), m_szOtherLanguage);

}
void CSysDictionarySetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysDictionarySetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}
void CSysDictionarySetup::SetDefaultValues(){

	m_szSearch.Empty();
	m_bEnglishLanguage=FALSE;
	m_szID.Empty();
	m_szEnglishWord.Empty();
	m_szOtherLanguage.Empty();

}
int CSysDictionarySetup::SetMode(int nMode){
	int nOldMode = GetMode(); 
 	CGuiView::SetMode(nMode); 
	switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndID.SetFocus();
			SetDefaultValues();
			m_wndSearch.SetCheckValue(TRUE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndEnglishWord.SetFocus();
			m_wndSearch.SetCheckValue(FALSE);
			m_wndID.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndID.EnableWindow(FALSE);
			m_wndSearch.SetReadOnly(FALSE);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
			m_wndSearch.SetFocus();
			m_wndSearch.SetCheckValue(TRUE);
 			break; 
 		}; 
	m_wndSearch.EnableWindow(TRUE);
//	m_wndID.EnableWindow(FALSE);
 	UpdateData(FALSE); 
 	return nOldMode; 
}
void CSysDictionarySetup::OnSearchChange(){
	//OnDictListLoadData();
}
/*void CSysDictionarySetup::OnSearchSetfocus(){
	
} */
/*void CSysDictionarySetup::OnSearchKillfocus(){
	
} */
int CSysDictionarySetup::OnSearchCheckValue(){
	UpdateData();
	OnDictListLoadData();
	return 0;
} 
void CSysDictionarySetup::OnEnglishLanguageSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDictListLoadData();
}
/*void CSysDictionarySetup::OnIDChange(){
	
} */
/*void CSysDictionarySetup::OnIDSetfocus(){
	
} */
/*void CSysDictionarySetup::OnIDKillfocus(){
	
} */
int CSysDictionarySetup::OnIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() != VM_ADD)
		return 0;

	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CString szSQL, szTemp;
	szTemp = m_szID;
	szTemp.Replace(_T("'"), _T("''"));
	szSQL.Format(_T("SELECT COUNT(*) FROM sys_dict WHERE lower(sd_stdname)=lower('%s') "), szTemp);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_wndID.SetToolTipMessage(_T("Name has been existing in the database"));
		return -1;
	}
	m_szEnglishWord = m_szID;
	UpdateData(false);
	return 0;
} 
/*void CSysDictionarySetup::OnEnglishWordChange(){
	
} */
/*void CSysDictionarySetup::OnEnglishWordSetfocus(){
	
} */
/*void CSysDictionarySetup::OnEnglishWordKillfocus(){
	
} */
int CSysDictionarySetup::OnEnglishWordCheckValue(){
	return 0;
} 
/*void CSysDictionarySetup::OnOtherLanguageChange(){
	
} */
/*void CSysDictionarySetup::OnOtherLanguageSetfocus(){
	
} */
/*void CSysDictionarySetup::OnOtherLanguageKillfocus(){
	
} */
int CSysDictionarySetup::OnOtherLanguageCheckValue(){
	return 0;
} 
void CSysDictionarySetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddSysDictionarySetup();
} 
void CSysDictionarySetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditSysDictionarySetup();
} 
void CSysDictionarySetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteSysDictionarySetup();
} 
void CSysDictionarySetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveSysDictionarySetup();
} 
void CSysDictionarySetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelSysDictionarySetup();
} 
void CSysDictionarySetup::OnDictListDblClick(){
	
} 
void CSysDictionarySetup::OnDictListSelectChange(int nOldItem, int nNewItem)
{
	int nCurSel = m_wndDictList.GetCurSel();
	if (nCurSel < 0) return;
	m_szEnglishWord = m_wndDictList.GetItemText(nCurSel, 1);
	m_szOtherLanguage = m_wndDictList.GetItemText(nCurSel, 2);	
	m_szID = m_wndDictList.GetItemText(nCurSel, 0);
	EnableControls(FALSE);
	EnableButtons(TRUE, 0, 1, 2, 5);
	UpdateData(false);
	SetMode(VM_VIEW);
} 
int CSysDictionarySetup::OnDictListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteSysDictionarySetup();
	 return 0;
} 
long CSysDictionarySetup::OnDictListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL, szWhere;
	long nCount=0;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	if(!m_szSearch.IsEmpty())
	{
		m_szSearch.Replace(_T("'"), _T("''"));
		if(m_bEnglishLanguage)
			szWhere.Format(_T(" WHERE lower(sd_enname) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
		else
			szWhere.Format(_T(" WHERE lower(sd_vnname) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}
	szSQL.Format(_T("select sd_enname as enname, sd_vnname as vnname, sd_stdname as idx from sys_dict %s order by sd_stdname "), szWhere);
	m_wndDictList.BeginLoad();
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDictList.AddItems(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("enname")),
			rs.GetValue(_T("vnname")),NULL);
		nCount++;
		rs.MoveNext();
	}
	m_wndDictList.EndLoad();
	return nCount;
}
int CSysDictionarySetup::OnAddSysDictionarySetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSysDictionarySetup::OnEditSysDictionarySetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysDictionarySetup::OnDeleteSysDictionarySetup()
{
	int nCurSel = m_wndDictList.GetCurSel();
	if(nCurSel < 0) 
		return 0;
	int retMsg = AfxMessageBox(_T("Do you want to delete items"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(retMsg != IDYES)
		return 0;
	
	CString szSQL, szEnglish;
	CString szTemp;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();

	for (int i = m_wndDictList.GetItemCount()-1; i >= 0; i--)
	{
		if(m_wndDictList.GetItemState(i, LVIS_SELECTED))
		{
			szEnglish = m_wndDictList.GetItemText(i, 0);
			szEnglish.Replace(_T("'"), _T("''"));

			szSQL.Format(_T("DELETE FROM sys_dict WHERE sd_stdname='%s' "), szEnglish);
			pMF->m_db.ExecSQL(szSQL);
			m_wndDictList.DeleteItem(i);
		}
	}
	//_fmsg(_T("%s"), szSQL);
	 return 0;
}
int CSysDictionarySetup::OnSaveSysDictionarySetup()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL, szTemp;
	UpdateData(true);
	if(!IsValidateData())
	{
		ShowMessage(17);
		return -1;
	}

	if(GetMode() == VM_ADD)
	{
		
		//szSQL.Format(_T("select coalesce(max(sd_stdname), 0)+1 FROM sys_dict"));
		//rs.ExecSQL(szSQL);
		m_sys_dictTbl.SetValue(_T("sd_stdname"), m_szEnglishWord);
		m_sys_dictTbl.SetValue(_T("sd_enname"), m_szEnglishWord);
		m_sys_dictTbl.SetValue(_T("sd_vnname"), m_szOtherLanguage);
		
		szSQL = m_sys_dictTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		OnDictListLoadData();
		SetMode(VM_ADD);
	
	}
	else
	{
		m_sys_dictTbl.SetValue(_T("sd_enname"), m_szEnglishWord);
		m_sys_dictTbl.SetValue(_T("sd_vnname"), m_szOtherLanguage);
		szTemp = m_szID;
		szTemp.Replace(_T("'"), _T("''"));

		szSQL.Format(_T("%s WHERE sd_stdname='%s' "), m_sys_dictTbl.GetUpdateSQL(_T("sd_stdname")), szTemp);	
		int ret = pMF->ExecSQL(szSQL);
		OnDictListLoadData();
		SetMode(VM_VIEW);
	}
	_fmsg(_T("%s"), szSQL);
	 return 0;
}
int CSysDictionarySetup::OnCancelSysDictionarySetup(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
	return 0;
} 
int CSysDictionarySetup::OnSysDictionarySetupListLoadData(){
	return 0;
}
void CSysDictionarySetup::Refresh(){
	OnDictListLoadData();
}