#include "IVFStorageView_v2.h"
#include "MainFrm.h"
static void _OnThungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView_v2* )pWnd)->OnThungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungSelendokFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungSelendok();
}
/*static void _OnThungSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungKillfocus();
}*/
/*static void _OnThungKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungKillfocus();
}*/
static long _OnThungLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnThungLoadData();
}
/*static void _OnThungAddNewFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungAddNew();
}*/
static void _OnGiaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView_v2* )pWnd)->OnGiaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGiaSelendokFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaSelendok();
}
/*static void _OnGiaSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaKillfocus();
}*/
/*static void _OnGiaKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaKillfocus();
}*/
static long _OnGiaLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnGiaLoadData();
}
/*static void _OnGiaAddNewFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaAddNew();
}*/
static void _OnCassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView_v2* )pWnd)->OnCassetteSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCassetteSelendokFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteSelendok();
}
/*static void _OnCassetteSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteKillfocus();
}*/
/*static void _OnCassetteKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteKillfocus();
}*/
static long _OnCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnCassetteLoadData();
}
/*static void _OnCassetteAddNewFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CIVFStorageView_v2 *pVw = (CIVFStorageView_v2 *)pWnd;
	pVw->OnFindSelect();
} 
static int _OnAddIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnAddIVFStorageView_v2();
} 
static int _OnEditIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnEditIVFStorageView_v2();
} 
static int _OnDeleteIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnDeleteIVFStorageView_v2();
} 
static int _OnSaveIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnSaveIVFStorageView_v2();
} 
static int _OnCancelIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnCancelIVFStorageView_v2();
} 
CIVFStorageView_v2::CIVFStorageView_v2(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CIVFStorageView_v2::~CIVFStorageView_v2(){
}
void CIVFStorageView_v2::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 940, 60);
	m_wndStorageInformation.Create(this, _T("Storage Information"), 5, 65, 940, 600);
	m_wndThungLabel.Create(this, _T("thung"), 10, 30, 90, 55);
	m_wndThung.Create(this,95, 30, 235, 55); 
	m_wndGiaLabel.Create(this, _T("gia"), 240, 30, 320, 55);
	m_wndGia.Create(this,325, 30, 465, 55); 
	m_wndCassetteLabel.Create(this, _T("cassette"), 470, 30, 550, 55);
	m_wndCassette.Create(this,555, 30, 695, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 700, 30, 780, 55);
	m_wndSearch.Create(this,785, 30, 883, 55); 
	m_wndFind.Create(this, _T("@"), 888, 30, 928, 55);

}
void CIVFStorageView_v2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThung.SetCheckValue(true);
	m_wndThung.LimitText(1024);
	m_wndGia.SetCheckValue(true);
	m_wndGia.LimitText(1024);
	m_wndCassette.SetCheckValue(true);
	m_wndCassette.LimitText(1024);
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);







}
void CIVFStorageView_v2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThung.SetEvent(WE_SELENDOK, _OnThungSelendokFnc);
	//m_wndThung.SetEvent(WE_SETFOCUS, _OnThungSetfocusFnc);
	//m_wndThung.SetEvent(WE_KILLFOCUS, _OnThungKillfocusFnc);
	m_wndThung.SetEvent(WE_SELCHANGE, _OnThungSelectChangeFnc);
	m_wndThung.SetEvent(WE_LOADDATA, _OnThungLoadDataFnc);
	//m_wndThung.SetEvent(WE_ADDNEW, _OnThungAddNewFnc);
	m_wndGia.SetEvent(WE_SELENDOK, _OnGiaSelendokFnc);
	//m_wndGia.SetEvent(WE_SETFOCUS, _OnGiaSetfocusFnc);
	//m_wndGia.SetEvent(WE_KILLFOCUS, _OnGiaKillfocusFnc);
	m_wndGia.SetEvent(WE_SELCHANGE, _OnGiaSelectChangeFnc);
	m_wndGia.SetEvent(WE_LOADDATA, _OnGiaLoadDataFnc);
	//m_wndGia.SetEvent(WE_ADDNEW, _OnGiaAddNewFnc);
	m_wndCassette.SetEvent(WE_SELENDOK, _OnCassetteSelendokFnc);
	//m_wndCassette.SetEvent(WE_SETFOCUS, _OnCassetteSetfocusFnc);
	//m_wndCassette.SetEvent(WE_KILLFOCUS, _OnCassetteKillfocusFnc);
	m_wndCassette.SetEvent(WE_SELCHANGE, _OnCassetteSelectChangeFnc);
	m_wndCassette.SetEvent(WE_LOADDATA, _OnCassetteLoadDataFnc);
	//m_wndCassette.SetEvent(WE_ADDNEW, _OnCassetteAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFStorageView_v2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFStorageView_v2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFStorageView_v2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFStorageView_v2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFStorageView_v2Fnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CIVFStorageView_v2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndThung.GetDlgCtrlID(), m_szThungKey);
	DDX_TextEx(pDX, m_wndGia.GetDlgCtrlID(), m_szGiaKey);
	DDX_TextEx(pDX, m_wndCassette.GetDlgCtrlID(), m_szCassetteKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CIVFStorageView_v2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Thung")] =  m_szThungKey;
	m_jData[_T("Gia")] =  m_szGiaKey;
	m_jData[_T("Cassette")] =  m_szCassetteKey;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Thung")].GetValue(m_szThungKey);
	m_jData[_T("Gia")].GetValue(m_szGiaKey);
	m_jData[_T("Cassette")].GetValue(m_szCassetteKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CIVFStorageView_v2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageView_v2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageView_v2::SetDefaultValues(){

	m_szThungKey.Empty();
	m_szGiaKey.Empty();
	m_szCassetteKey.Empty();
	m_szSearch.Empty();

}
int CIVFStorageView_v2::SetMode(int nMode){
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
void CIVFStorageView_v2::OnThungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView_v2::OnThungSelendok(){
	 
}
/*void CIVFStorageView_v2::OnThungSetfocus(){
	
}*/
/*void CIVFStorageView_v2::OnThungKillfocus(){
	
}*/
long CIVFStorageView_v2::OnThungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThung.IsSearchKey() && !m_szThungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungKey
};
	m_wndThung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThung.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageView_v2::OnThungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageView_v2::OnGiaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView_v2::OnGiaSelendok(){
	 
}
/*void CIVFStorageView_v2::OnGiaSetfocus(){
	
}*/
/*void CIVFStorageView_v2::OnGiaKillfocus(){
	
}*/
long CIVFStorageView_v2::OnGiaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGia.IsSearchKey() && !m_szGiaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGiaKey
};
	m_wndGia.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGia.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageView_v2::OnGiaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageView_v2::OnCassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView_v2::OnCassetteSelendok(){
	 
}
/*void CIVFStorageView_v2::OnCassetteSetfocus(){
	
}*/
/*void CIVFStorageView_v2::OnCassetteKillfocus(){
	
}*/
long CIVFStorageView_v2::OnCassetteLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCassette.IsSearchKey() && !m_szCassetteKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCassetteKey
};
	m_wndCassette.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCassette.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageView_v2::OnCassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFStorageView_v2::OnSearchChange(){
	
} */
/*void CIVFStorageView_v2::OnSearchSetfocus(){
	
} */
/*void CIVFStorageView_v2::OnSearchKillfocus(){
	
} */
int CIVFStorageView_v2::OnSearchCheckValue(){
	return 0;
} 
void CIVFStorageView_v2::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageView_v2::OnAddIVFStorageView_v2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageView_v2::OnEditIVFStorageView_v2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageView_v2::OnDeleteIVFStorageView_v2(){
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
 		OnCancelIVFStorageView_v2();
 	}
	return 0;
}
int CIVFStorageView_v2::OnSaveIVFStorageView_v2(){
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
 		//OnIVFStorageView_v2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageView_v2::OnCancelIVFStorageView_v2(){
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
int CIVFStorageView_v2::OnIVFStorageView_v2ListLoadData(){
	return 0;
}
