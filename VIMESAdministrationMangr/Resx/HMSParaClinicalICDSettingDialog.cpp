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

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
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
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 330, 90, 355);
	m_wndChapter.Create(this,95, 330, 295, 355); 
	m_wndIcdNameLabel.Create(this, _T("Icd Name"), 300, 330, 380, 355);
	m_wndIcdName.Create(this,385, 330, 512, 355); 
	m_wndMapNameLabel.Create(this, _T("Map Name"), 525, 30, 605, 55);
	m_wndMapName.Create(this,610, 30, 995, 55); 
	m_wndAdd.Create(this, _T(">>"), 435, 605, 515, 630);
	m_wndRemove.Create(this, _T("<<"), 520, 605, 600, 630);
	m_wndClose.Create(this, _T("&Close"), 920, 605, 1000, 630);

}
void CHMSParaClinicalICDSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);
	m_wndChapter.SetCheckValue(true);
	m_wndChapter.LimitText(1024);
	m_wndIcdName.SetLimitText(1024);
	m_wndIcdName.SetCheckValue(true);
	m_wndMapName.SetLimitText(1024);
	m_wndMapName.SetCheckValue(true);





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
	//m_wndMapName.SetEvent(WE_CHANGE, _OnMapNameChangeFnc);
	//m_wndMapName.SetEvent(WE_SETFOCUS, _OnMapNameSetfocusFnc);
	//m_wndMapName.SetEvent(WE_KILLFOCUS, _OnMapNameKillfocusFnc);
	m_wndMapName.SetEvent(WE_CHECKVALUE, _OnMapNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

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
	m_jData[_T("Maped")] =  m_bMaped;
	m_jData[_T("Chapter")] =  m_szChapterKey;
	m_jData[_T("IcdName")] =  m_szIcdName;
	m_jData[_T("MapName")] =  m_szMapName;
	}
	else
	{
			
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("Maped")].GetValue(m_bMaped);
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
	m_bMaped=FALSE;
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
void CHMSParaClinicalICDSettingDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalICDSettingDialog::OnGroupSelendok(){
	 
}
/*void CHMSParaClinicalICDSettingDialog::OnGroupSetfocus(){
	
}*/
/*void CHMSParaClinicalICDSettingDialog::OnGroupKillfocus(){
	
}*/
long CHMSParaClinicalICDSettingDialog::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupKey
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
	return 0;
} 
	void CHMSParaClinicalICDSettingDialog::OnMapedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaClinicalICDSettingDialog::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalICDSettingDialog::OnChapterSelendok(){
	 
}
/*void CHMSParaClinicalICDSettingDialog::OnChapterSetfocus(){
	
}*/
/*void CHMSParaClinicalICDSettingDialog::OnChapterKillfocus(){
	
}*/
long CHMSParaClinicalICDSettingDialog::OnChapterLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey() && !m_szChapterKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChapterKey
};
	m_wndChapter.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapter.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
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
	return 0;
} 
/*void CHMSParaClinicalICDSettingDialog::OnMapNameChange(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnMapNameSetfocus(){
	
} */
/*void CHMSParaClinicalICDSettingDialog::OnMapNameKillfocus(){
	
} */
int CHMSParaClinicalICDSettingDialog::OnMapNameCheckValue(){
	return 0;
} 
void CHMSParaClinicalICDSettingDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalICDSettingDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalICDSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
