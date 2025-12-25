#include "ProductSyncCategory.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncCategory*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductSyncCategory*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductSyncCategory*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductSyncCategory*)pWnd)->OnListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CProductSyncCategory*)pWnd)->OnAllSelect();
}
static void _OnMapedSelectFnc(CWnd *pWnd){
	  ((CProductSyncCategory*)pWnd)->OnMapedSelect();
}
static void _OnNoneMappedSelectFnc(CWnd *pWnd){
	  ((CProductSyncCategory*)pWnd)->OnNoneMappedSelect();
}
static void _OnAutoMapSelectFnc(CWnd *pWnd){
	CProductSyncCategory *pVw = (CProductSyncCategory *)pWnd;
	pVw->OnAutoMapSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSyncCategory *pVw = (CProductSyncCategory *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductSyncCategoryFnc(CWnd *pWnd){
	 return ((CProductSyncCategory*)pWnd)->OnAddProductSyncCategory();
} 
static int _OnEditProductSyncCategoryFnc(CWnd *pWnd){
	 return ((CProductSyncCategory*)pWnd)->OnEditProductSyncCategory();
} 
static int _OnDeleteProductSyncCategoryFnc(CWnd *pWnd){
	 return ((CProductSyncCategory*)pWnd)->OnDeleteProductSyncCategory();
} 
static int _OnSaveProductSyncCategoryFnc(CWnd *pWnd){
	 return ((CProductSyncCategory*)pWnd)->OnSaveProductSyncCategory();
} 
static int _OnCancelProductSyncCategoryFnc(CWnd *pWnd){
	 return ((CProductSyncCategory*)pWnd)->OnCancelProductSyncCategory();
} 
CProductSyncCategory::CProductSyncCategory(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CProductSyncCategory::~CProductSyncCategory(){
}
void CProductSyncCategory::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 960, 580); 
	m_wndAll.Create(this, _T("All"), 5, 585, 105, 610);
	m_wndMaped.Create(this, _T("Maped"), 110, 585, 210, 610);
	m_wndNoneMapped.Create(this, _T("None mapped"), 215, 585, 315, 610);
	m_wndAutoMap.Create(this, _T("Map Auto"), 795, 585, 875, 610);
	m_wndClose.Create(this, _T("Close"), 880, 585, 960, 610);

}
void CProductSyncCategory::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("IDX"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Mapped Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Mapped ID"), CFMT_TEXT, 100);

}
void CProductSyncCategory::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndMaped.SetEvent(WE_CLICK, _OnMapedSelectFnc);
	m_wndNoneMapped.SetEvent(WE_CLICK, _OnNoneMappedSelectFnc);
	m_wndAutoMap.SetEvent(WE_CLICK, _OnAutoMapSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductSyncCategory::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndMaped.GetDlgCtrlID(), m_nMaped);
	DDX_Radio(pDX, m_wndNoneMapped.GetDlgCtrlID(), m_nNoneMapped);

}
void CProductSyncCategory::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("Maped")] =  m_nMaped;
	m_jData[_T("NoneMapped")] =  m_nNoneMapped;
	}
	else
	{
			
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("Maped")].GetValue(m_nMaped);
	m_jData[_T("NoneMapped")].GetValue(m_nNoneMapped);
	}

}
void CProductSyncCategory::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductSyncCategory::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductSyncCategory::SetDefaultValues(){

	m_nAll=0;
	m_nMaped=0;
	m_nNoneMapped=0;

}
int CProductSyncCategory::SetMode(int nMode){
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
void CProductSyncCategory::OnListDblClick(){
	
} 
void CProductSyncCategory::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductSyncCategory::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductSyncCategory::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("IDX")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("MappedName")), 
			rs.GetValue(_T("MappedID")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CProductSyncCategory::OnAllSelect(){
	
}
void CProductSyncCategory::OnMapedSelect(){
	
}
void CProductSyncCategory::OnNoneMappedSelect(){
	
}
void CProductSyncCategory::OnAutoMapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncCategory::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductSyncCategory::OnAddProductSyncCategory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSyncCategory::OnEditProductSyncCategory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSyncCategory::OnDeleteProductSyncCategory(){
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
 		OnCancelProductSyncCategory();
 	}
	return 0;
}
int CProductSyncCategory::OnSaveProductSyncCategory(){
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
 		//OnProductSyncCategoryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSyncCategory::OnCancelProductSyncCategory(){
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
int CProductSyncCategory::OnProductSyncCategoryListLoadData(){
	return 0;
}
