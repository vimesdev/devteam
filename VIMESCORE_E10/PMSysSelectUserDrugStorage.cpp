#include "PMSysSelectUserDrugStorage.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSysSelectUserDrugStorage*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSysSelectUserDrugStorage*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSysSelectUserDrugStorage*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSysSelectUserDrugStorage*)pWnd)->OnListDeleteItem();
} 
static void _OnAcceptSelectFnc(CWnd *pWnd){
	CPMSysSelectUserDrugStorage *pVw = (CPMSysSelectUserDrugStorage *)pWnd;
	pVw->OnAcceptSelect();
} 
static int _OnAddPMSysSelectUserDrugStorageFnc(CWnd *pWnd){
	 return ((CPMSysSelectUserDrugStorage*)pWnd)->OnAddPMSysSelectUserDrugStorage();
} 
static int _OnEditPMSysSelectUserDrugStorageFnc(CWnd *pWnd){
	 return ((CPMSysSelectUserDrugStorage*)pWnd)->OnEditPMSysSelectUserDrugStorage();
} 
static int _OnDeletePMSysSelectUserDrugStorageFnc(CWnd *pWnd){
	 return ((CPMSysSelectUserDrugStorage*)pWnd)->OnDeletePMSysSelectUserDrugStorage();
} 
static int _OnSavePMSysSelectUserDrugStorageFnc(CWnd *pWnd){
	 return ((CPMSysSelectUserDrugStorage*)pWnd)->OnSavePMSysSelectUserDrugStorage();
} 
static int _OnCancelPMSysSelectUserDrugStorageFnc(CWnd *pWnd){
	 return ((CPMSysSelectUserDrugStorage*)pWnd)->OnCancelPMSysSelectUserDrugStorage();
} 
CPMSysSelectUserDrugStorage::CPMSysSelectUserDrugStorage(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 625;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CPMSysSelectUserDrugStorage::~CPMSysSelectUserDrugStorage(){
}
void CPMSysSelectUserDrugStorage::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 615, 315);
	m_wndList.Create(this,10, 30, 610, 280); 
	m_wndAccept.Create(this, _T("Accept"), 530, 285, 610, 310);

}
void CPMSysSelectUserDrugStorage::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(1, _T("User"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("StockName"), CFMT_TEXT, 200);

}
void CPMSysSelectUserDrugStorage::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAccept.SetEvent(WE_CLICK, _OnAcceptSelectFnc);
	OnListLoadData();
	SetMode(VM_VIEW);

}
void CPMSysSelectUserDrugStorage::OnDoDataExchange(CDataExchange* pDX){

}
void CPMSysSelectUserDrugStorage::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CPMSysSelectUserDrugStorage::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM  "));
	rs.ExecSQL(szSQL);

}
void CPMSysSelectUserDrugStorage::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSysSelectUserDrugStorage::SetDefaultValues(){


}
int CPMSysSelectUserDrugStorage::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CPMSysSelectUserDrugStorage::OnListDblClick(){
	
} 
void CPMSysSelectUserDrugStorage::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSysSelectUserDrugStorage::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSysSelectUserDrugStorage::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select * from hms_lienthong_duoc order by hld_stockid "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hld_stockid")), 
			rs.GetValue(_T("hld_user")),
			rs.GetValue(_T("hld_name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CPMSysSelectUserDrugStorage::OnAcceptSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nCel = m_wndList.GetCurSel();
	if(nCel <0)
		_msg(_T("B?n C?n ch?n 1 kho d? post liên thông "));

	m_szUserID = m_wndList.GetItemText(nCel,1);
	OnOK();
	
} 
int CPMSysSelectUserDrugStorage::OnAddPMSysSelectUserDrugStorage(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSysSelectUserDrugStorage::OnEditPMSysSelectUserDrugStorage(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSysSelectUserDrugStorage::OnDeletePMSysSelectUserDrugStorage(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMSysSelectUserDrugStorage();
 	}
	return 0;
}
int CPMSysSelectUserDrugStorage::OnSavePMSysSelectUserDrugStorage(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMSysSelectUserDrugStorageListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSysSelectUserDrugStorage::OnCancelPMSysSelectUserDrugStorage(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMSysSelectUserDrugStorage::OnPMSysSelectUserDrugStorageListLoadData(){
	return 0;
}
