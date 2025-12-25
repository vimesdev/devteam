#include "SysUserRoleStoragePermList.h"
#include "MainFrm.h"
#include <StringToken.h>
static long _OnStockListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRoleStoragePermList*)pWnd)->OnStockListLoadData();
} 
static void _OnStockListDblClickFnc(CWnd *pWnd){
	((CSysUserRoleStoragePermList*)pWnd)->OnStockListDblClick();
} 
static void _OnStockListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserRoleStoragePermList*)pWnd)->OnStockListSelectChange(nOldItem, nNewItem);
} 
static int _OnStockListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserRoleStoragePermList*)pWnd)->OnStockListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CSysUserRoleStoragePermList *pVw = (CSysUserRoleStoragePermList *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddSysUserRoleStoragePermListFnc(CWnd *pWnd){
	 return ((CSysUserRoleStoragePermList*)pWnd)->OnAddSysUserRoleStoragePermList();
} 
static int _OnEditSysUserRoleStoragePermListFnc(CWnd *pWnd){
	 return ((CSysUserRoleStoragePermList*)pWnd)->OnEditSysUserRoleStoragePermList();
} 
static int _OnDeleteSysUserRoleStoragePermListFnc(CWnd *pWnd){
	 return ((CSysUserRoleStoragePermList*)pWnd)->OnDeleteSysUserRoleStoragePermList();
} 
static int _OnSaveSysUserRoleStoragePermListFnc(CWnd *pWnd){
	 return ((CSysUserRoleStoragePermList*)pWnd)->OnSaveSysUserRoleStoragePermList();
} 
static int _OnCancelSysUserRoleStoragePermListFnc(CWnd *pWnd){
	 return ((CSysUserRoleStoragePermList*)pWnd)->OnCancelSysUserRoleStoragePermList();
} 
CSysUserRoleStoragePermList::CSysUserRoleStoragePermList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSysUserRoleStoragePermList::~CSysUserRoleStoragePermList(){
}
void CSysUserRoleStoragePermList::OnCreateComponents(){
	m_wndStockInformation.Create(this, _T("Stock List"), 5, 5, 595, 225);
	m_wndStockList.Create(this,10, 30, 590, 220); 
	m_wndApply.Create(this, _T("&Apply"), 520, 231, 595, 256);

}
void CSysUserRoleStoragePermList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

    m_wndStockList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
    m_wndStockList.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);
    m_wndStockList.SetCheckBox(true);

}
void CSysUserRoleStoragePermList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStockList.SetEvent(WE_SELCHANGE, _OnStockListSelectChangeFnc);
	m_wndStockList.SetEvent(WE_LOADDATA, _OnStockListLoadDataFnc);
	m_wndStockList.SetEvent(WE_DBLCLICK, _OnStockListDblClickFnc);
	m_wndStockList.AddEvent(1, _T("Delete"), _OnStockListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
    OnStockListLoadData();

}
void CSysUserRoleStoragePermList::OnDoDataExchange(CDataExchange* pDX){

}
void CSysUserRoleStoragePermList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CSysUserRoleStoragePermList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    OnStockListLoadData();

}
void CSysUserRoleStoragePermList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysUserRoleStoragePermList::SetDefaultValues(){


}
int CSysUserRoleStoragePermList::SetMode(int nMode){
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
void CSysUserRoleStoragePermList::OnStockListDblClick(){
	
} 
void CSysUserRoleStoragePermList::OnStockListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRoleStoragePermList::OnStockListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserRoleStoragePermList::OnStockListLoadData(){
    CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr;
    m_wndStockList.BeginLoad();
    int nCount = 0;
    int nStockID, nItem;
    
        CArray<int, int&> stockList;

        szSQL.Format(_T("SELECT storage_id as stocks FROM SYS_USER_ROLES_STORAGE WHERE role_id='%s' "), m_szRoleID);
        rs.ExecSQL(szSQL);
        if(!rs.IsEOF()){
            rs.GetValue(_T("stocks"), tmpStr);
            CStringToken token(tmpStr);
            for (int i =0; i < token.GetSize(); i++){
                int nStockID;
                token.GetAt(i, nStockID);
                stockList.Add(nStockID);
            }
        }
    
    szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE msl_type<>'C' or (msl_type='C'  and (msl_dept_id in(select sd_id from sys_dept where sd_type='KB')) ) ORDER BY msl_type,msl_storage_id "));

    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF()) {
        rs.GetValue(_T("id"), nStockID);
        nItem = m_wndStockList.AddItems(
            rs.GetValue(_T("ID")),
            rs.GetValue(_T("Name")), NULL);
        
                for (int i=0; i < stockList.GetCount(); i++){
                    if(nStockID == stockList[i])
                    {
                        m_wndStockList.SetCheck(nItem, true);
                        break;
                    }

                }
        
        rs.MoveNext();
    }
    m_wndStockList.EndLoad();
    return nCount;
}
void CSysUserRoleStoragePermList::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szStocks, szDepts;
   
    szSQL.Format(_T("DELETE FROM SYS_USER_ROLES_STORAGE WHERE ROLE_ID='%s' "), m_szRoleID);
    pMF->ExecSQL(szSQL);
    for (int i = 0; i < m_wndStockList.GetItemCount(); i++) {
        if (m_wndStockList.GetCheck(i)) {
            if (!szStocks.IsEmpty())
                szStocks += _T(",");
            szStocks.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));
        }
    }
    int nCount = 0;
    szSQL.Format(_T("INSERT INTO SYS_USER_ROLES_STORAGE values('%s', '%s') "), szStocks, m_szRoleID);
    nCount = pMF->ExecSQL(szSQL);

    if (nCount > 0)
    {
        ShowMessageBox(_T("Apply Successful."), MB_OK);
    }
} 
int CSysUserRoleStoragePermList::OnAddSysUserRoleStoragePermList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysUserRoleStoragePermList::OnEditSysUserRoleStoragePermList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysUserRoleStoragePermList::OnDeleteSysUserRoleStoragePermList(){
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
 		OnCancelSysUserRoleStoragePermList();
 	}
	return 0;
}
int CSysUserRoleStoragePermList::OnSaveSysUserRoleStoragePermList(){
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
 		//OnSysUserRoleStoragePermListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysUserRoleStoragePermList::OnCancelSysUserRoleStoragePermList(){
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
int CSysUserRoleStoragePermList::OnSysUserRoleStoragePermListListLoadData(){
	return 0;
}
