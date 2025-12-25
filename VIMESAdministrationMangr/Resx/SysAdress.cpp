#include "SysAdress.h"
#include "MainFrm.h"
static long _OnListDistLoadDataFnc(CWnd *pWnd){
	return ((CSysAdress*)pWnd)->OnListDistLoadData();
} 
static void _OnListDistDblClickFnc(CWnd *pWnd){
	((CSysAdress*)pWnd)->OnListDistDblClick();
} 
static void _OnListDistSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysAdress*)pWnd)->OnListDistSelectChange(nOldItem, nNewItem);
} 
static int _OnListDistDeleteItemFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnListDistDeleteItem();
} 
static long _OnListProvLoadDataFnc(CWnd *pWnd){
	return ((CSysAdress*)pWnd)->OnListProvLoadData();
} 
static void _OnListProvDblClickFnc(CWnd *pWnd){
	((CSysAdress*)pWnd)->OnListProvDblClick();
} 
static void _OnListProvSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysAdress*)pWnd)->OnListProvSelectChange(nOldItem, nNewItem);
} 
static int _OnListProvDeleteItemFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnListProvDeleteItem();
} 
static long _OnListVilageLoadDataFnc(CWnd *pWnd){
	return ((CSysAdress*)pWnd)->OnListVilageLoadData();
} 
static void _OnListVilageDblClickFnc(CWnd *pWnd){
	((CSysAdress*)pWnd)->OnListVilageDblClick();
} 
static void _OnListVilageSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysAdress*)pWnd)->OnListVilageSelectChange(nOldItem, nNewItem);
} 
static int _OnListVilageDeleteItemFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnListVilageDeleteItem();
} 
static int _OnAddSysAdressFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnAddSysAdress();
} 
static int _OnEditSysAdressFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnEditSysAdress();
} 
static int _OnDeleteSysAdressFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnDeleteSysAdress();
} 
static int _OnSaveSysAdressFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnSaveSysAdress();
} 
static int _OnCancelSysAdressFnc(CWnd *pWnd){
	 return ((CSysAdress*)pWnd)->OnCancelSysAdress();
} 
CSysAdress::CSysAdress(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CSysAdress::~CSysAdress(){
}
void CSysAdress::OnCreateComponents(){
	m_wndGroupProvince.Create(this, _T("Province"), 5, 5, 405, 610);
	m_wndGroupDistrict.Create(this, _T("District"), 410, 5, 800, 310);
	m_wndVillage.Create(this, _T("Village"), 410, 315, 800, 610);
	m_wndListDist.Create(this,415, 30, 795, 305); 
	m_wndListProv.Create(this,10, 30, 400, 605); 
	m_wndListVilage.Create(this,415, 340, 795, 605); 

}
void CSysAdress::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndListDist.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListDist.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListDist.InsertColumn(2, _T("ShortCut"), CFMT_TEXT, 80);


	m_wndListProv.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListProv.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListProv.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 50);


	m_wndListVilage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListVilage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListVilage.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 50);
	m_sys_provTbl.SetTableName(_T("sys_prov"));
	m_sys_provTbl.AddField(_T("sp_id"), dfLong); 
	m_sys_distTbl.SetTableName(_T("sys_dist"));
	m_sys_distTbl.AddField(_T("sd_id"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_provid"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_name"), dfText, 81); 
	m_sys_distTbl.AddField(_T("sd_wrd"), dfText, 7); 
	m_sys_villTbl.SetTableName(_T("sys_vill"));
	m_sys_villTbl.AddField(_T("sv_id"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_distid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_provid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_name"), dfText, 81); 
	m_sys_villTbl.AddField(_T("sv_wrd"), dfText, 7); 

}
void CSysAdress::OnSetWindowEvents(){
	m_wndListDist.SetEvent(WE_SELCHANGE, _OnListDistSelectChangeFnc);
	m_wndListDist.SetEvent(WE_LOADDATA, _OnListDistLoadDataFnc);
	m_wndListDist.SetEvent(WE_DBLCLICK, _OnListDistDblClickFnc);
	m_wndListDist.AddEvent(1, _T("Delete"), _OnListDistDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListProv.SetEvent(WE_SELCHANGE, _OnListProvSelectChangeFnc);
	m_wndListProv.SetEvent(WE_LOADDATA, _OnListProvLoadDataFnc);
	m_wndListProv.SetEvent(WE_DBLCLICK, _OnListProvDblClickFnc);
	m_wndListProv.AddEvent(1, _T("Delete"), _OnListProvDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListVilage.SetEvent(WE_SELCHANGE, _OnListVilageSelectChangeFnc);
	m_wndListVilage.SetEvent(WE_LOADDATA, _OnListVilageLoadDataFnc);
	m_wndListVilage.SetEvent(WE_DBLCLICK, _OnListVilageDblClickFnc);
	m_wndListVilage.AddEvent(1, _T("Delete"), _OnListVilageDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysAdressFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysAdressFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysAdressFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysAdressFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysAdressFnc, 0, 'T', VK_CONTROL);

}
void CSysAdress::OnDoDataExchange(CDataExchange* pDX){

}
void CSysAdress::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysAdress::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysAdress::SetDefaultValues(){


}
int CSysAdress::SetMode(int nMode){
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
void CSysAdress::OnListDistDblClick(){
	
} 
void CSysAdress::OnListDistSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysAdress::OnListDistDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysAdress::OnListDistLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListDist.BeginLoad(); 
	m_wndListDist.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListDist.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("ShortCut")), NULL);
		rs.MoveNext();
	}
	m_wndListDist.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CSysAdress::OnListProvDblClick(){
	
} 
void CSysAdress::OnListProvSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysAdress::OnListProvDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysAdress::OnListProvLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListProv.BeginLoad(); 
	m_wndListProv.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListProv.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Shortcut")), NULL);
		rs.MoveNext();
	}
	m_wndListProv.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CSysAdress::OnListVilageDblClick(){
	
} 
void CSysAdress::OnListVilageSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysAdress::OnListVilageDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysAdress::OnListVilageLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListVilage.BeginLoad(); 
	m_wndListVilage.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListVilage.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Shortcut")), NULL);
		rs.MoveNext();
	}
	m_wndListVilage.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CSysAdress::OnAddSysAdress(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSysAdress::OnEditSysAdress(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysAdress::OnDeleteSysAdress(){
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
 		OnCancelSysAdress(); 
 	}
	return 0;
}
int CSysAdress::OnSaveSysAdress(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_provTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_sys_provTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnSysAdressListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSysAdress::OnCancelSysAdress(){
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
int CSysAdress::OnSysAdressListLoadData(){
	return 0;
}
