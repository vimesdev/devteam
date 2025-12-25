#include "FAMInventory.h"
#include "MainFrm.h"
static long _OnInventoriedLoadDataFnc(CWnd *pWnd){
	return ((CFAMInventory*)pWnd)->OnInventoriedLoadData();
} 
static void _OnInventoriedDblClickFnc(CWnd *pWnd){
	((CFAMInventory*)pWnd)->OnInventoriedDblClick();
} 
static void _OnInventoriedSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMInventory*)pWnd)->OnInventoriedSelectChange(nOldItem, nNewItem);
} 
static int _OnInventoriedDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMInventory*)pWnd)->OnInventoriedDeleteItem();
} 
static int _OnAddFAMInventoryFnc(CWnd *pWnd){
	 return ((CFAMInventory*)pWnd)->OnAddFAMInventory();
} 
static int _OnEditFAMInventoryFnc(CWnd *pWnd){
	 return ((CFAMInventory*)pWnd)->OnEditFAMInventory();
} 
static int _OnDeleteFAMInventoryFnc(CWnd *pWnd){
	 return ((CFAMInventory*)pWnd)->OnDeleteFAMInventory();
} 
static int _OnSaveFAMInventoryFnc(CWnd *pWnd){
	 return ((CFAMInventory*)pWnd)->OnSaveFAMInventory();
} 
static int _OnCancelFAMInventoryFnc(CWnd *pWnd){
	 return ((CFAMInventory*)pWnd)->OnCancelFAMInventory();
} 
CFAMInventory::CFAMInventory(){

	m_nDlgWidth = 635;
	m_nDlgHeight = 240;
	SetDefaultValues();
}
CFAMInventory::~CFAMInventory(){
}
void CFAMInventory::OnCreateComponents(){
	m_wndInventoried.Create(this,5, 5, 625, 230); 

}
void CFAMInventory::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndInventoried.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndInventoried.InsertColumn(1, _T("Inventory Date"), CFMT_DATE, 100);
	m_wndInventoried.InsertColumn(2, _T("Level_1"), CFMT_TEXT, 50);
	m_wndInventoried.InsertColumn(3, _T("Level_2"), CFMT_TEXT, 50);
	m_wndInventoried.InsertColumn(4, _T("Level_3"), CFMT_TEXT, 50);
	m_wndInventoried.InsertColumn(5, _T("Level_4"), CFMT_TEXT, 50);
	m_wndInventoried.InsertColumn(6, _T("Level_5"), CFMT_TEXT, 50);
	m_wndInventoried.InsertColumn(7, _T("Note"), CFMT_TEXT, 200);
}
void CFAMInventory::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInventoried.SetEvent(WE_SELCHANGE, _OnInventoriedSelectChangeFnc);
	m_wndInventoried.SetEvent(WE_LOADDATA, _OnInventoriedLoadDataFnc);
	m_wndInventoried.SetEvent(WE_DBLCLICK, _OnInventoriedDblClickFnc);
	m_wndInventoried.AddEvent(1, _T("&Add"),_OnAddFAMInventoryFnc, 0, 0, 0);
	m_wndInventoried.AddEvent(0, _T("-"), NULL);
	m_wndInventoried.AddEvent(2, _T("&Edit"), _OnEditFAMInventoryFnc, 0, 0, 0);
	m_wndInventoried.AddEvent(0, _T("-"), NULL);
	m_wndInventoried.AddEvent(3, _T("&Delete"), _OnDeleteFAMInventoryFnc, 0, 0, 0);
	m_wndInventoried.AddEvent(0, _T("-"), NULL);
	
}
void CFAMInventory::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMInventory::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMInventory::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMInventory::SetDefaultValues(){


}
int CFAMInventory::SetMode(int nMode){
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
void CFAMInventory::OnInventoriedDblClick(){
	OnEditFAMInventory();
} 
void CFAMInventory::OnInventoriedSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	nIndex = ToLong(m_wndInventoried.GetItemText(nNewItem, 0));
} 
int CFAMInventory::OnInventoriedDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMInventory::OnInventoriedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		m_wndInventoried.BeginLoad(); 
		m_wndInventoried.DeleteAllItems(); 
		int nCount = 0;
		szSQL.Format(_T("SELECT * FROM fam_inventoried WHERE fami_fid='%s' ORDER BY fami_idx"), pMF->m_wndAssetDetail.m_szAssetNo); 
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			m_wndInventoried.AddItems(
				rs.GetValue(_T("fami_idx")), 
				rs.GetValue(_T("fami_inventorieddate")), 
				rs.GetValue(_T("fami_level1")),
				rs.GetValue(_T("fami_level2")),
				rs.GetValue(_T("fami_level3")),
				rs.GetValue(_T("fami_level4")),
				rs.GetValue(_T("fami_level5")),
				rs.GetValue(_T("fami_note")), NULL);
			rs.MoveNext();
		}
		m_wndInventoried.EndLoad(); 
		return nCount;
}
int CFAMInventory::OnAddFAMInventory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("20.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		CFAMInventoryDlg dlg(pMF);
		dlg.szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.nIndex = nIndex;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMInventory::OnEditFAMInventory(){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	//if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("20.02")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("20.02"))  || pMF->GetCurrentUser() == _T("admin"))
	{
 		CFAMInventoryDlg dlg(pMF);
		dlg.szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.nIndex = nIndex;
		dlg.SetMode(VM_EDIT);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;  
}
int CFAMInventory::OnDeleteFAMInventory(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	//if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("20.03")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("20.03")) || pMF->GetCurrentUser() == _T("admin"))
	{
 		if(pMF->m_wndAssetDetail.GetMode() != VM_VIEW)
 			return -1;
 		CString szSQL;
 		if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 			return -1;
		szSQL.Format(_T("DELETE FROM fam_inventoried WHERE fami_fid = '%s' AND fami_idx = %ld"), pMF->m_wndAssetDetail.m_szAssetNo, nIndex);
 		int ret = pMF->ExecSQL(szSQL);
 		if(ret >= 0){
			OnInventoriedLoadData();
 			SetMode(VM_NONE);
 			OnCancelFAMInventory();
 		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMInventory::OnSaveFAMInventory(){
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

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFAMInventoryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMInventory::OnCancelFAMInventory(){
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
int CFAMInventory::OnFAMInventoryListLoadData(){
	return 0;
}
