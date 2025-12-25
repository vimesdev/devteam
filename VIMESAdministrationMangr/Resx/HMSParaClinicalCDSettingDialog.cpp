#include "HMSParaClinicalCDSettingDialog.h"
#include "MainFrm.h"
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaClinicalCDSettingDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaClinicalCDSettingDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaClinicalCDSettingDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaClinicalCDSettingDialog* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaClinicalCDSettingDialog *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnChapterAddNew();
}*/
/*static void _OnIcdNameChangeFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnIcdNameChange();
} */
/*static void _OnIcdNameSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnIcdNameSetfocus();} */ 
/*static void _OnIcdNameKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnIcdNameKillfocus();
} */
static int _OnIcdNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaClinicalCDSettingDialog *)pWnd)->OnIcdNameCheckValue();
} 
/*static void _OnMapNameChangeFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnMapNameChange();
} */
/*static void _OnMapNameSetfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnMapNameSetfocus();} */ 
/*static void _OnMapNameKillfocusFnc(CWnd *pWnd){
	((CHMSParaClinicalCDSettingDialog *)pWnd)->OnMapNameKillfocus();
} */
static int _OnMapNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaClinicalCDSettingDialog *)pWnd)->OnMapNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSParaClinicalCDSettingDialog *pVw = (CHMSParaClinicalCDSettingDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSParaClinicalCDSettingDialog *pVw = (CHMSParaClinicalCDSettingDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaClinicalCDSettingDialog *pVw = (CHMSParaClinicalCDSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSParaClinicalCDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalCDSettingDialog*)pWnd)->OnAddHMSParaClinicalCDSettingDialog();
} 
static int _OnEditHMSParaClinicalCDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalCDSettingDialog*)pWnd)->OnEditHMSParaClinicalCDSettingDialog();
} 
static int _OnDeleteHMSParaClinicalCDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalCDSettingDialog*)pWnd)->OnDeleteHMSParaClinicalCDSettingDialog();
} 
static int _OnSaveHMSParaClinicalCDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalCDSettingDialog*)pWnd)->OnSaveHMSParaClinicalCDSettingDialog();
} 
static int _OnCancelHMSParaClinicalCDSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSParaClinicalCDSettingDialog*)pWnd)->OnCancelHMSParaClinicalCDSettingDialog();
} 
CHMSParaClinicalCDSettingDialog::CHMSParaClinicalCDSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSParaClinicalCDSettingDialog::~CHMSParaClinicalCDSettingDialog(){
}
void CHMSParaClinicalCDSettingDialog::OnCreateComponents(){
	m_wndParaClinical.Create(this, _T("Para-Clinical"), 5, 5, 515, 300);
	m_wndICDGroup.Create(this, _T("ICD Group"), 5, 305, 515, 600);
	m_wndMappingGroup.Create(this, _T("Mapping Group"), 520, 5, 1000, 600);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 30, 90, 55);
	m_wndGroup.Create(this,95, 30, 295, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 300, 30, 380, 55);
	m_wndSearch.Create(this,385, 30, 512, 55); 
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
void CHMSParaClinicalCDSettingDialog::OnInitializeComponents(){
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
void CHMSParaClinicalCDSettingDialog::OnSetWindowEvents(){
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
void CHMSParaClinicalCDSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_Text(pDX, m_wndIcdName.GetDlgCtrlID(), m_szIcdName);
	DDX_Text(pDX, m_wndMapName.GetDlgCtrlID(), m_szMapName);

}
void CHMSParaClinicalCDSettingDialog::UpdateJson(BOOL bSave){
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
void CHMSParaClinicalCDSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSParaClinicalCDSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaClinicalCDSettingDialog::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szSearch.Empty();
	m_szChapterKey.Empty();
	m_szIcdName.Empty();
	m_szMapName.Empty();

}
int CHMSParaClinicalCDSettingDialog::SetMode(int nMode){
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
void CHMSParaClinicalCDSettingDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalCDSettingDialog::OnGroupSelendok(){
	 
}
/*void CHMSParaClinicalCDSettingDialog::OnGroupSetfocus(){
	
}*/
/*void CHMSParaClinicalCDSettingDialog::OnGroupKillfocus(){
	
}*/
long CHMSParaClinicalCDSettingDialog::OnGroupLoadData(){
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
/*void CHMSParaClinicalCDSettingDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnSearchChange(){
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnSearchSetfocus(){
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnSearchKillfocus(){
	
} */
int CHMSParaClinicalCDSettingDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSParaClinicalCDSettingDialog::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalCDSettingDialog::OnChapterSelendok(){
	 
}
/*void CHMSParaClinicalCDSettingDialog::OnChapterSetfocus(){
	
}*/
/*void CHMSParaClinicalCDSettingDialog::OnChapterKillfocus(){
	
}*/
long CHMSParaClinicalCDSettingDialog::OnChapterLoadData(){
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
/*void CHMSParaClinicalCDSettingDialog::OnChapterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnIcdNameChange(){
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnIcdNameSetfocus(){
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnIcdNameKillfocus(){
	
} */
int CHMSParaClinicalCDSettingDialog::OnIcdNameCheckValue(){
	return 0;
} 
/*void CHMSParaClinicalCDSettingDialog::OnMapNameChange(){
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnMapNameSetfocus(){
	
} */
/*void CHMSParaClinicalCDSettingDialog::OnMapNameKillfocus(){
	
} */
int CHMSParaClinicalCDSettingDialog::OnMapNameCheckValue(){
	return 0;
} 
void CHMSParaClinicalCDSettingDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalCDSettingDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaClinicalCDSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaClinicalCDSettingDialog::OnAddHMSParaClinicalCDSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSParaClinicalCDSettingDialog::OnEditHMSParaClinicalCDSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSParaClinicalCDSettingDialog::OnDeleteHMSParaClinicalCDSettingDialog(){
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
 		OnCancelHMSParaClinicalCDSettingDialog();
 	}
	return 0;
}
int CHMSParaClinicalCDSettingDialog::OnSaveHMSParaClinicalCDSettingDialog(){
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
 		//OnHMSParaClinicalCDSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSParaClinicalCDSettingDialog::OnCancelHMSParaClinicalCDSettingDialog(){
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
int CHMSParaClinicalCDSettingDialog::OnHMSParaClinicalCDSettingDialogListLoadData(){
	return 0;
}
