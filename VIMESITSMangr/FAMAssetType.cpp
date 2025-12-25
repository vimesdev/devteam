#include "FAMAssetType.h"
#include "MainFrm.h"
static long _OnTypeListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetType*)pWnd)->OnTypeListLoadData();
} 
static void _OnTypeListDblClickFnc(CWnd *pWnd){
	((CFAMAssetType*)pWnd)->OnTypeListDblClick();
} 
static void _OnTypeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAssetType*)pWnd)->OnTypeListSelectChange(nOldItem, nNewItem);
} 
static int _OnTypeListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAssetType*)pWnd)->OnTypeListDeleteItem();
} 
static int _OnAddFAMAssetTypeFnc(CWnd *pWnd){
	 return ((CFAMAssetType*)pWnd)->OnAddFAMAssetType();
} 
static int _OnEditFAMAssetTypeFnc(CWnd *pWnd){
	 return ((CFAMAssetType*)pWnd)->OnEditFAMAssetType();
} 
static int _OnDeleteFAMAssetTypeFnc(CWnd *pWnd){
	 return ((CFAMAssetType*)pWnd)->OnDeleteFAMAssetType();
} 
static int _OnSaveFAMAssetTypeFnc(CWnd *pWnd){
	 return ((CFAMAssetType*)pWnd)->OnSaveFAMAssetType();
} 
static int _OnCancelFAMAssetTypeFnc(CWnd *pWnd){
	 return ((CFAMAssetType*)pWnd)->OnCancelFAMAssetType();
} 
CFAMAssetType::CFAMAssetType()
{
	m_nDlgWidth = 210;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFAMAssetType::~CFAMAssetType(){
}
void CFAMAssetType::OnCreateComponents(){
	m_wndTypeList.Create(this,5, 5, 255, 525); 

}
void CFAMAssetType::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

	m_wndTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 160);

	//m_wndTypeList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndTypeList.ModifyStyle(0, LVS_SHOWSELALWAYS | LVS_NOSORTHEADER);
	
}
void CFAMAssetType::OnSetWindowEvents(){
	m_wndTypeList.SetEvent(WE_SELCHANGE, _OnTypeListSelectChangeFnc);
	m_wndTypeList.SetEvent(WE_LOADDATA, _OnTypeListLoadDataFnc);
	m_wndTypeList.SetEvent(WE_DBLCLICK, _OnTypeListDblClickFnc);
	//m_wndTypeList.AddEvent(1, _T("Delete"), _OnTypeListDeleteItemFnc, 0, VK_DELETE, 0);
	OnTypeListLoadData();	//Goi su kien load du lieu len ListView
	m_szType = _T("");
	m_TypeIndex = -1;
	//isSelected = true;
}
void CFAMAssetType::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMAssetType::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAssetType::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAssetType::SetDefaultValues()
{

}
int CFAMAssetType::SetMode(int nMode){
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
void CFAMAssetType::OnTypeListDblClick(){
	
} 
void CFAMAssetType::OnTypeListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_TypeIndex = nNewItem;
	m_szType = m_wndTypeList.GetItemText(nNewItem, 0);
	pMF->szType = m_szType;
	//m_wndTypeList.SetItemState(nNewItem, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
	//m_wndTypeList.SetSelectionMark(nNewItem);
	//pMF->m_wndAsset.SetMode(VM_NONE);
	pMF->m_wndAsset.OnListLoadData();
	pMF->m_wndAsset.ResetData();

} 
int CFAMAssetType::OnTypeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAssetType::OnTypeListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTypeList.BeginLoad(); 
	m_wndTypeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_org_id = '%s' ORDER BY fast_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndTypeList.AddItems(
			rs.GetValue(_T("fast_id")), 
			rs.GetValue(_T("fast_desc")), NULL);
		rs.MoveNext();
	}
	m_wndTypeList.EndLoad();
	return nCount;
}
int CFAMAssetType::OnAddFAMAssetType(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAssetType::OnEditFAMAssetType(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetType::OnDeleteFAMAssetType(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM fam_assettype WHERE ") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelFAMAssetType(); 
 	}
	return 0;
}
int CFAMAssetType::OnSaveFAMAssetType(){
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
 		//OnFAMAssetTypeListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMAssetType::OnCancelFAMAssetType(){
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
int CFAMAssetType::OnFAMAssetTypeListLoadData()
{
	return 0;
}
