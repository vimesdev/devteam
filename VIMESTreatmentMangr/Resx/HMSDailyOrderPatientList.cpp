#include "HMSDailyOrderPatientList.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnListDeleteItem();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderPatientList *)pWnd)->OnSearchCheckValue();
} 
/*static void _OnTotalItemsChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsChange();
} */
/*static void _OnTotalItemsSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsSetfocus();} */ 
/*static void _OnTotalItemsKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsKillfocus();
} */
static int _OnTotalItemsCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsCheckValue();
} 
static int _OnAddHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnAddHMSDailyOrderPatientList();
} 
static int _OnEditHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnEditHMSDailyOrderPatientList();
} 
static int _OnDeleteHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnDeleteHMSDailyOrderPatientList();
} 
static int _OnSaveHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnSaveHMSDailyOrderPatientList();
} 
static int _OnCancelHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnCancelHMSDailyOrderPatientList();
} 
CHMSDailyOrderPatientList::CHMSDailyOrderPatientList(){

	m_nDlgWidth = 405;
	m_nDlgHeight = 455;
	SetDefaultValues();
}
CHMSDailyOrderPatientList::~CHMSDailyOrderPatientList(){
}
void CHMSDailyOrderPatientList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 385, 355); 
	m_wndSearchLabel.Create(this, _T("Search"), 5, 360, 85, 385);
	m_wndSearch.Create(this,90, 360, 230, 385); 
	m_wndTotalItemsLabel.Create(this, _T("Total Patient"), 235, 360, 325, 385);
	m_wndTotalItems.Create(this,330, 360, 385, 385); 

}
void CHMSDailyOrderPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndTotalItems.SetLimitText(16);
	m_wndTotalItems.SetCheckValue(true);



}
void CHMSDailyOrderPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	//m_wndTotalItems.SetEvent(WE_CHANGE, _OnTotalItemsChangeFnc);
	//m_wndTotalItems.SetEvent(WE_SETFOCUS, _OnTotalItemsSetfocusFnc);
	//m_wndTotalItems.SetEvent(WE_KILLFOCUS, _OnTotalItemsKillfocusFnc);
	m_wndTotalItems.SetEvent(WE_CHECKVALUE, _OnTotalItemsCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDailyOrderPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDailyOrderPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDailyOrderPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDailyOrderPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDailyOrderPatientListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSDailyOrderPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndTotalItems.GetDlgCtrlID(), m_nTotalItems);

}
void CHMSDailyOrderPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyOrderPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderPatientList::SetDefaultValues(){

	m_szSearch.Empty();
	m_nTotalItems=0;

}
int CHMSDailyOrderPatientList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CHMSDailyOrderPatientList::OnListDblClick(){
	
} 
void CHMSDailyOrderPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderPatientList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSDailyOrderPatientList::OnSearchChange(){
	
} */
/*void CHMSDailyOrderPatientList::OnSearchSetfocus(){
	
} */
/*void CHMSDailyOrderPatientList::OnSearchKillfocus(){
	
} */
int CHMSDailyOrderPatientList::OnSearchCheckValue(){
	return 0;
} 
/*void CHMSDailyOrderPatientList::OnTotalItemsChange(){
	
} */
/*void CHMSDailyOrderPatientList::OnTotalItemsSetfocus(){
	
} */
/*void CHMSDailyOrderPatientList::OnTotalItemsKillfocus(){
	
} */
int CHMSDailyOrderPatientList::OnTotalItemsCheckValue(){
	return 0;
} 
int CHMSDailyOrderPatientList::OnAddHMSDailyOrderPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyOrderPatientList::OnEditHMSDailyOrderPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyOrderPatientList::OnDeleteHMSDailyOrderPatientList(){
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
 		OnCancelHMSDailyOrderPatientList();
 	}
	return 0;
}
int CHMSDailyOrderPatientList::OnSaveHMSDailyOrderPatientList(){
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
 		//OnHMSDailyOrderPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDailyOrderPatientList::OnCancelHMSDailyOrderPatientList(){
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
int CHMSDailyOrderPatientList::OnHMSDailyOrderPatientListListLoadData(){
	return 0;
}
