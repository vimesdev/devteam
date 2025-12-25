#include "IVFSettingEmbryoQualityDlg.h"
#include "MainFrm.h"
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFSettingEmbryoQualityDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingEmbryoQualityDlg *)pWnd)->OnSearchCheckValue();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingEmbryoQualityDlg *)pWnd)->OnIDCheckValue();
} 
static void _OnParentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSettingEmbryoQualityDlg* )pWnd)->OnParentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentSelendokFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnParentSelendok();
}
/*static void _OnParentSetfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnParentKillfocus();
}*/
/*static void _OnParentKillfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnParentKillfocus();
}*/
static long _OnParentLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingEmbryoQualityDlg *)pWnd)->OnParentLoadData();
}
/*static void _OnParentAddNewFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnParentAddNew();
}*/
/*static void _OnLevelChangeFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnLevelChange();
} */
/*static void _OnLevelSetfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnLevelSetfocus();} */ 
/*static void _OnLevelKillfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnLevelKillfocus();
} */
static int _OnLevelCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingEmbryoQualityDlg *)pWnd)->OnLevelCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CIVFSettingEmbryoQualityDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingEmbryoQualityDlg *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CIVFSettingEmbryoQualityDlg*)pWnd)->OnIsActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFSettingEmbryoQualityDlg *pVw = (CIVFSettingEmbryoQualityDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFSettingEmbryoQualityDlg *pVw = (CIVFSettingEmbryoQualityDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFSettingEmbryoQualityDlg *pVw = (CIVFSettingEmbryoQualityDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFSettingEmbryoQualityDlg *pVw = (CIVFSettingEmbryoQualityDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFSettingEmbryoQualityDlg *pVw = (CIVFSettingEmbryoQualityDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFSettingEmbryoQualityDlg *pVw = (CIVFSettingEmbryoQualityDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFSettingEmbryoQualityDlgFnc(CWnd *pWnd){
	 return ((CIVFSettingEmbryoQualityDlg*)pWnd)->OnAddIVFSettingEmbryoQualityDlg();
} 
static int _OnEditIVFSettingEmbryoQualityDlgFnc(CWnd *pWnd){
	 return ((CIVFSettingEmbryoQualityDlg*)pWnd)->OnEditIVFSettingEmbryoQualityDlg();
} 
static int _OnDeleteIVFSettingEmbryoQualityDlgFnc(CWnd *pWnd){
	 return ((CIVFSettingEmbryoQualityDlg*)pWnd)->OnDeleteIVFSettingEmbryoQualityDlg();
} 
static int _OnSaveIVFSettingEmbryoQualityDlgFnc(CWnd *pWnd){
	 return ((CIVFSettingEmbryoQualityDlg*)pWnd)->OnSaveIVFSettingEmbryoQualityDlg();
} 
static int _OnCancelIVFSettingEmbryoQualityDlgFnc(CWnd *pWnd){
	 return ((CIVFSettingEmbryoQualityDlg*)pWnd)->OnCancelIVFSettingEmbryoQualityDlg();
} 
CIVFSettingEmbryoQualityDlg::CIVFSettingEmbryoQualityDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFSettingEmbryoQualityDlg::~CIVFSettingEmbryoQualityDlg(){
}
void CIVFSettingEmbryoQualityDlg::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 5, 5, 85, 30);
	m_wndSearch.Create(this,90, 5, 485, 30); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 395, 85, 420);
	m_wndID.Create(this,90, 395, 170, 420); 
	m_wndParentLabel.Create(this, _T("Group"), 175, 395, 255, 420);
	m_wndParent.Create(this,260, 395, 490, 420); 
	m_wndLevelLabel.Create(this, _T("Level"), 495, 395, 550, 420);
	m_wndLevel.Create(this,555, 395, 605, 420); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 425, 85, 450);
	m_wndDescription.Create(this,90, 425, 490, 450); 
	m_wndIsActive.Create(this, _T("IsActive"), 495, 425, 605, 450);
	m_wndAdd.Create(this, _T("&Add"), 105, 455, 185, 480);
	m_wndEdit.Create(this, _T("&Edit"), 190, 455, 270, 480);
	m_wndDelete.Create(this, _T("&Delete"), 275, 455, 355, 480);
	m_wndSave.Create(this, _T("&Save"), 360, 455, 440, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 455, 525, 480);
	m_wndClose.Create(this, _T("&Close"), 530, 455, 610, 480);
	m_wndList.Create(this,5, 35, 605, 390); 
}
void CIVFSettingEmbryoQualityDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	//m_wndSearch.SetCheckValue(true);
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndParent.SetCheckValue(true);
	m_wndParent.LimitText(1024);
	m_wndLevel.SetLimitText(16);
	m_wndLevel.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndSearch.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);//id
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Group"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Level"), CFMT_NUMBER, 50);

	m_settingTbl.SetTableName(_T("ivf_thietlap_chatluong"));
	m_settingTbl.AddField(_T("ivf_thietlap_chatluong_id"), dfText, 32);
	m_settingTbl.AddField(_T("ten_chat_luong"), dfText, 32);
	m_settingTbl.AddField(_T("nhom_chat_luong"), dfText, 5);
	m_settingTbl.AddField(_T("muc_chat_luong"),dfInteger);
	m_settingTbl.AddField(_T("hoat_dong"),dfText, 1);

	m_wndParent.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);//id
	m_wndParent.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
}
void CIVFSettingEmbryoQualityDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
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
	//m_wndLevel.SetEvent(WE_CHANGE, _OnLevelChangeFnc);
	//m_wndLevel.SetEvent(WE_SETFOCUS, _OnLevelSetfocusFnc);
	//m_wndLevel.SetEvent(WE_KILLFOCUS, _OnLevelKillfocusFnc);
	m_wndLevel.SetEvent(WE_CHECKVALUE, _OnLevelCheckValueFnc);
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
	OnListLoadData();
	SetMode(VM_NONE);
}
void CIVFSettingEmbryoQualityDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndParent.GetDlgCtrlID(), m_szParentKey);
	DDX_Text(pDX, m_wndLevel.GetDlgCtrlID(), m_nLevel);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CIVFSettingEmbryoQualityDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Parent")] =  m_szParentKey;
	m_jData[_T("Level")] =  m_nLevel;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Parent")].GetValue(m_szParentKey);
	m_jData[_T("Level")].GetValue(m_nLevel);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CIVFSettingEmbryoQualityDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ivf_thietlap_chatluong WHERE ivf_thietlap_chatluong_id='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ten_chat_luong"), m_szDescription);
		rs.GetValue(_T("nhom_chat_luong"), m_szParentKey);
		CString szActive;
		rs.GetValue(_T("hoat_dong"), szActive);
		if(szActive == _T("Y"))
			m_bIsActive = TRUE;
		else
			m_bIsActive = FALSE;
		rs.GetValue(_T("muc_chat_luong"), m_nLevel);
	}

}
void CIVFSettingEmbryoQualityDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_settingTbl.SetValue(_T("ivf_thietlap_chatluong_id"), m_szID);
	m_settingTbl.SetValue(_T("ten_chat_luong"), m_szDescription);
	m_settingTbl.SetValue(_T("nhom_chat_luong"), m_szParentKey);
	m_settingTbl.SetValue(_T("muc_chat_luong"), m_nLevel);
	m_settingTbl.SetValue(_T("hoat_dong"), m_bIsActive?_T("Y"):_T("N"));
}
void CIVFSettingEmbryoQualityDlg::SetDefaultValues(){

	m_szSearch.Empty();
	m_szID.Empty();
	m_szParentKey.Empty();
	m_nLevel=0;
	m_szDescription.Empty();
	m_bIsActive=TRUE;

}
int CIVFSettingEmbryoQualityDlg::SetMode(int nMode){
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
			m_wndParent.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 5, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CIVFSettingEmbryoQualityDlg::OnSearchChange(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnSearchSetfocus(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnSearchKillfocus(){
	
} */
int CIVFSettingEmbryoQualityDlg::OnSearchCheckValue(){
	return OnListLoadData();
} 
/*void CIVFSettingEmbryoQualityDlg::OnIDChange(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnIDSetfocus(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnIDKillfocus(){
	
} */
int CIVFSettingEmbryoQualityDlg::OnIDCheckValue(){
	return 0;
} 
void CIVFSettingEmbryoQualityDlg::OnParentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingEmbryoQualityDlg::OnParentSelendok(){
	 
}
/*void CIVFSettingEmbryoQualityDlg::OnParentSetfocus(){
	
}*/
/*void CIVFSettingEmbryoQualityDlg::OnParentKillfocus(){
	
}*/
long CIVFSettingEmbryoQualityDlg::OnParentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndParent, _T("ivf_doi_tuong_theo_doi_phoi"), m_szParentKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParent.IsSearchKey() && !m_szParentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szParentKey
};
	m_wndParent.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParent.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFSettingEmbryoQualityDlg::OnParentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnLevelChange(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnLevelSetfocus(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnLevelKillfocus(){
	
} */
int CIVFSettingEmbryoQualityDlg::OnLevelCheckValue(){
	return 0;
} 
/*void CIVFSettingEmbryoQualityDlg::OnDescriptionChange(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnDescriptionSetfocus(){
	
} */
/*void CIVFSettingEmbryoQualityDlg::OnDescriptionKillfocus(){
	
} */
int CIVFSettingEmbryoQualityDlg::OnDescriptionCheckValue(){
	return 0;
} 
	void CIVFSettingEmbryoQualityDlg::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CIVFSettingEmbryoQualityDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddIVFSettingEmbryoQualityDlg();
} 
void CIVFSettingEmbryoQualityDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditIVFSettingEmbryoQualityDlg();
} 
void CIVFSettingEmbryoQualityDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFSettingEmbryoQualityDlg();
} 
void CIVFSettingEmbryoQualityDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFSettingEmbryoQualityDlg();
} 
void CIVFSettingEmbryoQualityDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelIVFSettingEmbryoQualityDlg();
} 
void CIVFSettingEmbryoQualityDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CIVFSettingEmbryoQualityDlg::OnAddIVFSettingEmbryoQualityDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFSettingEmbryoQualityDlg::OnEditIVFSettingEmbryoQualityDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFSettingEmbryoQualityDlg::OnDeleteIVFSettingEmbryoQualityDlg(){
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
 		OnCancelIVFSettingEmbryoQualityDlg();
 	}
	return 0;
}
int CIVFSettingEmbryoQualityDlg::OnSaveIVFSettingEmbryoQualityDlg(){
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
 		CString szWhere;
 		szWhere.Format(_T(" WHERE ivf_thietlap_chatluong_id = '%s'"), m_szID);
 		szSQL = m_settingTbl.GetUpdateSQL(_T("ivf_thietlap_chatluong_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnIVFSettingEmbryoQualityDlgListLoadData();
		OnListLoadData();
		if (GetMode() == VM_ADD)
		{
			SetMode(GetMode());
		}
		else
		{
			SetMode(VM_VIEW);
		}

 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFSettingEmbryoQualityDlg::OnCancelIVFSettingEmbryoQualityDlg(){
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
int CIVFSettingEmbryoQualityDlg::OnIVFSettingEmbryoQualityDlgListLoadData(){
	return 0;
}

long CIVFSettingEmbryoQualityDlg::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(ten_chat_luong) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}
	szSQL.Format(_T("SELECT ivf_thietlap_chatluong_id as id, ") \
				_T("	ten_chat_luong as description, ") \
				_T("	ivf_get_sel('ivf_doi_tuong_theo_doi_phoi', nhom_chat_luong) as parent_desc, ") \
				_T("	muc_chat_luong") \
				_T(" FROM ivf_thietlap_chatluong ") \
				_T(" WHERE hoat_dong = 'Y' %s ") \
				_T(" ORDER BY nhom_chat_luong, muc_chat_luong "), szWhere);
	_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("parent_desc")),
			rs.GetValue(_T("muc_chat_luong")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CIVFSettingEmbryoQualityDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	SetMode(VM_VIEW);
} 