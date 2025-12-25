#include "HMSAdditionalFeeDialog.h"
#include "MainFrm.h"
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdditionalFeeDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnTestListDeleteItem();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnSelectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListLoadData();
} 
static void _OnSelectListDblClickFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListDblClick();
} 
static void _OnSelectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeDialog *pVw = (CHMSAdditionalFeeDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeDialog *pVw = (CHMSAdditionalFeeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeDialog *pVw = (CHMSAdditionalFeeDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static int _OnAddHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnAddHMSAdditionalFeeDialog();
} 
static int _OnEditHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnEditHMSAdditionalFeeDialog();
} 
static int _OnDeleteHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnDeleteHMSAdditionalFeeDialog();
} 
static int _OnSaveHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnSaveHMSAdditionalFeeDialog();
} 
static int _OnCancelHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnCancelHMSAdditionalFeeDialog();
} 
CHMSAdditionalFeeDialog::CHMSAdditionalFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSAdditionalFeeDialog::~CHMSAdditionalFeeDialog(){
}
void CHMSAdditionalFeeDialog::OnCreateComponents(){
	m_wndGroupTest.Create(this, _T("Group Fee"), 5, 5, 290, 575);
	m_wndTestList.Create(this,295, 5, 1000, 210); 
	m_wndSearchLabel.Create(this, _T("&Search"), 295, 215, 395, 240);
	m_wndSearch.Create(this,400, 215, 895, 240); 
	m_wndSelectList.Create(this,295, 245, 1000, 575); 
	m_wndApply.Create(this, _T("&Apply"), 795, 580, 895, 605);
	m_wndClose.Create(this, _T("&Cancel"), 900, 580, 1000, 605);
	m_wndSearch.Create(this, _T("Search"), 900, 215, 1000, 240);

}
void CHMSAdditionalFeeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);





}
void CHMSAdditionalFeeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	m_wndSelectList.AddEvent(1, _T("Delete"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	SetMode(VM_NONE);

}
void CHMSAdditionalFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CHMSAdditionalFeeDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CHMSAdditionalFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdditionalFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdditionalFeeDialog::SetDefaultValues(){

	m_szSearch.Empty();

}
int CHMSAdditionalFeeDialog::SetMode(int nMode){
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
void CHMSAdditionalFeeDialog::OnTestListDblClick(){
	
} 
void CHMSAdditionalFeeDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdditionalFeeDialog::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAdditionalFeeDialog::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSAdditionalFeeDialog::OnSearchChange(){
	
} */
/*void CHMSAdditionalFeeDialog::OnSearchSetfocus(){
	
} */
/*void CHMSAdditionalFeeDialog::OnSearchKillfocus(){
	
} */
int CHMSAdditionalFeeDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSAdditionalFeeDialog::OnSelectListDblClick(){
	
} 
void CHMSAdditionalFeeDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdditionalFeeDialog::OnSelectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAdditionalFeeDialog::OnSelectListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectList.AddItems(
		rs.MoveNext();
	}
	m_wndSelectList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSAdditionalFeeDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdditionalFeeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdditionalFeeDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdditionalFeeDialog::OnAddHMSAdditionalFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdditionalFeeDialog::OnEditHMSAdditionalFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdditionalFeeDialog::OnDeleteHMSAdditionalFeeDialog(){
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
 		OnCancelHMSAdditionalFeeDialog();
 	}
	return 0;
}
int CHMSAdditionalFeeDialog::OnSaveHMSAdditionalFeeDialog(){
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
 		//OnHMSAdditionalFeeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdditionalFeeDialog::OnCancelHMSAdditionalFeeDialog(){
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
int CHMSAdditionalFeeDialog::OnHMSAdditionalFeeDialogListLoadData(){
	return 0;
}
