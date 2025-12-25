#include "FAMAssetDept.h"
#include "MainFrm.h"
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDept*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFAMAssetDept*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAssetDept*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAssetDept*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFAMAssetDeptFnc(CWnd *pWnd){
	 return ((CFAMAssetDept*)pWnd)->OnAddFAMAssetDept();
} 
static int _OnEditFAMAssetDeptFnc(CWnd *pWnd){
	 return ((CFAMAssetDept*)pWnd)->OnEditFAMAssetDept();
} 
static int _OnDeleteFAMAssetDeptFnc(CWnd *pWnd){
	 return ((CFAMAssetDept*)pWnd)->OnDeleteFAMAssetDept();
} 
static int _OnSaveFAMAssetDeptFnc(CWnd *pWnd){
	 return ((CFAMAssetDept*)pWnd)->OnSaveFAMAssetDept();
} 
static int _OnCancelFAMAssetDeptFnc(CWnd *pWnd){
	 return ((CFAMAssetDept*)pWnd)->OnCancelFAMAssetDept();
} 
CFAMAssetDept::CFAMAssetDept(){

	m_nDlgWidth = 235;
	m_nDlgHeight = 135;
	SetDefaultValues();
}
CFAMAssetDept::~CFAMAssetDept(){
}
void CFAMAssetDept::OnCreateComponents(){
	m_wndDeptList.Create(this,5, 5, 250, 540); 

}
void CFAMAssetDept::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 260);

	//m_wndDeptList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndDeptList.ModifyStyle(0, LVS_SHOWSELALWAYS | LVS_NOSORTHEADER);
}
void CFAMAssetDept::OnSetWindowEvents()
{
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	OnDeptListLoadData();
	m_szDept = _T("");
	m_DeptIndex = -1;
	//isSelected = true;
	//m_wndType.isSelected = false;
}
void CFAMAssetDept::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMAssetDept::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAssetDept::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAssetDept::SetDefaultValues(){


}
int CFAMAssetDept::SetMode(int nMode){
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
void CFAMAssetDept::OnDeptListDblClick(){
	
} 
void CFAMAssetDept::OnDeptListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_DeptIndex = nNewItem;
	m_szDept = m_wndDeptList.GetItemText(nNewItem, 0);
	pMF->m_wndAssetDetail.OnListLoadData();
	pMF->m_wndAssetDetail.ResetData();
	
} 
int CFAMAssetDept::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAssetDept::OnDeptListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDeptList.BeginLoad(); 
	m_wndDeptList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name FROM sys_dept ORDER BY sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;
}
int CFAMAssetDept::OnAddFAMAssetDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAssetDept::OnEditFAMAssetDept(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetDept::OnDeleteFAMAssetDept(){
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
 		OnCancelFAMAssetDept(); 
 	}
	return 0;
}
int CFAMAssetDept::OnSaveFAMAssetDept(){
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
 		//OnFAMAssetDeptListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMAssetDept::OnCancelFAMAssetDept(){
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
int CFAMAssetDept::OnFAMAssetDeptListLoadData(){
	return 0;
}
