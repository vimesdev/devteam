#include "IVFStorageListSetupDialog_v2.h"
#include "MainFrm.h"
#include "IVFStorageListSetupPopup_v2.h"
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CIVFStorageListSetupDialog_v2 *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupDialog_v2 *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupDialog_v2 *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupDialog_v2 *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupDialog_v2 *pVw = (CIVFStorageListSetupDialog_v2 *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupDialog_v2 *pVw = (CIVFStorageListSetupDialog_v2 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupDialog_v2 *pVw = (CIVFStorageListSetupDialog_v2 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupDialog_v2 *pVw = (CIVFStorageListSetupDialog_v2 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnStorageTreeSelChangeFnc(CWnd* pWnd, HTREEITEM oldItem, HTREEITEM newItem)
{
	_tprintf(_T("\npWnd:%u\n"), pWnd);
	((CIVFStorageListSetupDialog_v2*)pWnd)->OnStorageTreeSelChange(oldItem, newItem);
}
static int _OnAddIVFStorageListSetupDialog_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog_v2*)pWnd)->OnAddIVFStorageListSetupDialog_v2();
} 
static int _OnEditIVFStorageListSetupDialog_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog_v2*)pWnd)->OnEditIVFStorageListSetupDialog_v2();
} 
static int _OnDeleteIVFStorageListSetupDialog_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog_v2*)pWnd)->OnDeleteIVFStorageListSetupDialog_v2();
} 
static int _OnSaveIVFStorageListSetupDialog_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog_v2*)pWnd)->OnSaveIVFStorageListSetupDialog_v2();
} 
static int _OnCancelIVFStorageListSetupDialog_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog_v2*)pWnd)->OnCancelIVFStorageListSetupDialog_v2();
} 
CIVFStorageListSetupDialog_v2::CIVFStorageListSetupDialog_v2(CWnd *pParent):
	CGuiDialog(pParent){
_tprintf(_T("\nthis construct: %u\n"), this);
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFStorageListSetupDialog_v2::~CIVFStorageListSetupDialog_v2(){
}
void CIVFStorageListSetupDialog_v2::OnCreateComponents(){
	m_wndStorageInformation.Create(this, _T("Storage Information"), 5, 65, 810, 590);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndStorageTree.Create(WS_VISIBLE | TVS_HASBUTTONS | TVS_HASLINES, CRect(10, 90, 805, 585), this, NULL);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 10, 30, 110, 55);
	m_wndSearchName.Create(this,115, 30, 415, 55); 
	m_wndSearch.Create(this, _T("@"), 420, 30, 445, 55);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);

}
void CIVFStorageListSetupDialog_v2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchName.SetLimitText(1024);
	m_wndSearchName.SetCheckValue(true);

}
void CIVFStorageListSetupDialog_v2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndStorageTree.SetSelChangeCallback(_OnStorageTreeSelChangeFnc);
	OnStorageTreeLoadData();

}
void CIVFStorageListSetupDialog_v2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CIVFStorageListSetupDialog_v2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("SearchName")] =  m_szSearchName;
	}
	else
	{
			
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	}

}
void CIVFStorageListSetupDialog_v2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageListSetupDialog_v2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageListSetupDialog_v2::SetDefaultValues(){

	m_szSearchName.Empty();

}
int CIVFStorageListSetupDialog_v2::SetMode(int nMode){
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
/*void CIVFStorageListSetupDialog_v2::OnSearchNameChange(){
	
} */
/*void CIVFStorageListSetupDialog_v2::OnSearchNameSetfocus(){
	
} */
/*void CIVFStorageListSetupDialog_v2::OnSearchNameKillfocus(){
	
} */
int CIVFStorageListSetupDialog_v2::OnSearchNameCheckValue(){
	return 0;
} 
void CIVFStorageListSetupDialog_v2::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetupDialog_v2::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetupDialog_v2::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetupDialog_v2::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageListSetupDialog_v2::OnAddIVFStorageListSetupDialog_v2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageListSetupDialog_v2::OnEditIVFStorageListSetupDialog_v2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageListSetupDialog_v2::OnDeleteIVFStorageListSetupDialog_v2(){
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
 		OnCancelIVFStorageListSetupDialog_v2();
 	}
	return 0;
}
int CIVFStorageListSetupDialog_v2::OnSaveIVFStorageListSetupDialog_v2(){
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
 		//OnIVFStorageListSetupDialog_v2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageListSetupDialog_v2::OnCancelIVFStorageListSetupDialog_v2(){
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
int CIVFStorageListSetupDialog_v2::OnIVFStorageListSetupDialog_v2ListLoadData(){
	return 0;
}

long CIVFStorageListSetupDialog_v2::OnStorageTreeLoadData()
{
	_tprintf(_T("\nthis: %u\n"), this);
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT isl_id AS s_id,") \
	_T("       isl_name AS s_name,") \
	_T("       isl_level AS s_level") \
	_T(" FROM   ivf_storage_list") \
	_T(" START WITH isl_level = 1") \
	_T(" CONNECT BY PRIOR isl_id = isl_parent_id "));

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		return 0;
	}
	int nLevel = 0;
	m_wndStorageTree.DeleteAllItems();
	HTREEITEM tvi_parent[10], tvi;
	rs.GetValue(_T("s_level"), nLevel);
	tvi_parent[nLevel] = TVI_ROOT;
	m_wndStorageTree.SetItemHeight(30);
	//_tprintf(_T("\nHeight: %d\n"), m_wndStorageTree.GetItemHeight());
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("s_level"), nLevel);
		tvi = m_wndStorageTree.InsertItem(
			rs.GetValue(_T("s_name")), tvi_parent[nLevel]
			);
		tvi_parent[nLevel+1] = tvi;
		m_wndStorageTree.SetItemID(tvi, rs.GetValue(_T("s_id")));
		_tprintf(_T("\ntvi: %u|id: %s\n"), tvi, rs.GetValue(_T("s_id")));
		if (nLevel <=2)
		{
			m_wndStorageTree.SetItemBold(tvi, true);
		}
		rs.MoveNext();
	}
	m_wndStorageTree.ExpandItem(TVI_ROOT, TVE_EXPAND);
	return rs.GetRecordCount();
}

void CIVFStorageListSetupDialog_v2::OnStorageTreeSelChange(HTREEITEM oldItem, HTREEITEM newItem)
{
	_tprintf(_T("\this: %u| nCount:%d\n"), this, m_wndStorageTree.GetCount());
}