#include "FAMAssetTypeDetail.h"
#include "MainFrm.h"
static long _OnTypeListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetTypeDetail*)pWnd)->OnTypeListLoadData();
} 
static void _OnTypeListDblClickFnc(CWnd *pWnd){
	((CFAMAssetTypeDetail*)pWnd)->OnTypeListDblClick();
} 
static void _OnTypeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAssetTypeDetail*)pWnd)->OnTypeListSelectChange(nOldItem, nNewItem);
} 
static int _OnTypeListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAssetTypeDetail*)pWnd)->OnTypeListDeleteItem();
} 
static int _OnAddFAMAssetTypeDetailFnc(CWnd *pWnd){
	 return ((CFAMAssetTypeDetail*)pWnd)->OnAddFAMAssetTypeDetail();
} 
static int _OnEditFAMAssetTypeDetailFnc(CWnd *pWnd){
	 return ((CFAMAssetTypeDetail*)pWnd)->OnEditFAMAssetTypeDetail();
} 
static int _OnDeleteFAMAssetTypeDetailFnc(CWnd *pWnd){
	 return ((CFAMAssetTypeDetail*)pWnd)->OnDeleteFAMAssetTypeDetail();
} 
static int _OnSaveFAMAssetTypeDetailFnc(CWnd *pWnd){
	 return ((CFAMAssetTypeDetail*)pWnd)->OnSaveFAMAssetTypeDetail();
} 
static int _OnCancelFAMAssetTypeDetailFnc(CWnd *pWnd){
	 return ((CFAMAssetTypeDetail*)pWnd)->OnCancelFAMAssetTypeDetail();
} 
CFAMAssetTypeDetail::CFAMAssetTypeDetail()
{
	m_nDlgWidth = 210;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFAMAssetTypeDetail::~CFAMAssetTypeDetail(){
}
void CFAMAssetTypeDetail::OnCreateComponents(){
	m_wndTypeList.Create(this, 5, 5, 355, 225); 

}
void CFAMAssetTypeDetail::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 260);

	//m_wndTypeList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndTypeList.ModifyStyle(0, LVS_SHOWSELALWAYS | LVS_NOSORTHEADER);
	
}
void CFAMAssetTypeDetail::OnSetWindowEvents(){
	m_wndTypeList.SetEvent(WE_SELCHANGE, _OnTypeListSelectChangeFnc);
	m_wndTypeList.SetEvent(WE_LOADDATA, _OnTypeListLoadDataFnc);
	m_wndTypeList.SetEvent(WE_DBLCLICK, _OnTypeListDblClickFnc);
	//m_wndTypeList.AddEvent(1, _T("Delete"), _OnTypeListDeleteItemFnc, 0, VK_DELETE, 0);
	OnTypeListLoadData();	//Goi su kien load du lieu len ListView
	m_szType = _T("");
	m_TypeIndex = -1;
	//isSelected = true;
}
void CFAMAssetTypeDetail::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMAssetTypeDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAssetTypeDetail::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAssetTypeDetail::SetDefaultValues()
{

}
int CFAMAssetTypeDetail::SetMode(int nMode){
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
void CFAMAssetTypeDetail::OnTypeListDblClick(){
	
} 
void CFAMAssetTypeDetail::OnTypeListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_TypeIndex = nNewItem;
	m_szType = m_wndTypeList.GetItemText(nNewItem, 0);
	pMF->szType = m_szType;
	m_wndTypeList.SetItemState(nNewItem, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
	m_wndTypeList.SetSelectionMark(nNewItem);
	//pMF->m_wndAsset.SetMode(VM_NONE);
	pMF->m_wndAssetDetail.OnListLoadData();
	pMF->m_wndAssetDetail.ResetData();
	/*CString m_szType = m_wndTypeList.GetItemText(nNewItem, 1);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("Select fa_assetno as ID, fa_name as Name From fam_asset Order By fa_assetno"));
	m_wdAsset.m_wndList.BeginLoad();
	rs.ExecSQL(szSQL);
	m_wdAsset.m_wndList.AddItems(
		rs.GetValue(_T("ID")),
		rs.GetValue(_T("Name")), NULL);
		m_wdAsset.m_wndList.EndLoad();*/
} 
int CFAMAssetTypeDetail::OnTypeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAssetTypeDetail::OnTypeListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTypeList.BeginLoad(); 
	m_wndTypeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype fast_org_id = '%s' ORDER BY fast_id"), pMF->GetModuleID());
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
int CFAMAssetTypeDetail::OnAddFAMAssetTypeDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAssetTypeDetail::OnEditFAMAssetTypeDetail(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetTypeDetail::OnDeleteFAMAssetTypeDetail(){
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
 		OnCancelFAMAssetTypeDetail(); 
 	}
	return 0;
}
int CFAMAssetTypeDetail::OnSaveFAMAssetTypeDetail(){
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
 		//OnFAMAssetTypeDetailListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMAssetTypeDetail::OnCancelFAMAssetTypeDetail(){
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
int CFAMAssetTypeDetail::OnFAMAssetTypeDetailListLoadData()
{
	return 0;
}
