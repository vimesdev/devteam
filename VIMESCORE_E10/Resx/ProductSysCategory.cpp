#include "ProductSysCategory.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductSysCategory*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductSysCategory*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductSysCategory*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CProductSysCategory*)pWnd)->OnAllSelect();
}
static void _OnMapedSelectFnc(CWnd *pWnd){
	  ((CProductSysCategory*)pWnd)->OnMapedSelect();
}
static void _OnNoneMappedSelectFnc(CWnd *pWnd){
	  ((CProductSysCategory*)pWnd)->OnNoneMappedSelect();
}
static void _OnAutoMapSelectFnc(CWnd *pWnd){
	CProductSysCategory *pVw = (CProductSysCategory *)pWnd;
	pVw->OnAutoMapSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSysCategory *pVw = (CProductSysCategory *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnAddProductSysCategory();
} 
static int _OnEditProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnEditProductSysCategory();
} 
static int _OnDeleteProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnDeleteProductSysCategory();
} 
static int _OnSaveProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnSaveProductSysCategory();
} 
static int _OnCancelProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnCancelProductSysCategory();
} 
CProductSysCategory::CProductSysCategory(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CProductSysCategory::~CProductSysCategory(){
}
void CProductSysCategory::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 960, 580); 
	m_wndAll.Create(this, _T("All"), 5, 585, 105, 610);
	m_wndMaped.Create(this, _T("Maped"), 110, 585, 210, 610);
	m_wndNoneMapped.Create(this, _T("None mapped"), 215, 585, 315, 610);
	m_wndAutoMap.Create(this, _T("Map Auto"), 795, 585, 875, 610);
	m_wndClose.Create(this, _T("Close"), 880, 585, 960, 610);

}
void CProductSysCategory::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("IDX"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Mapped Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Mapped ID"), CFMT_TEXT, 100);

}
void CProductSysCategory::OnSetWindowEvents(){
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
void CProductSysCategory::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndMaped.GetDlgCtrlID(), m_nMaped);
	DDX_Radio(pDX, m_wndNoneMapped.GetDlgCtrlID(), m_nNoneMapped);

}
void CProductSysCategory::UpdateJson(BOOL bSave){
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
void CProductSysCategory::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductSysCategory::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductSysCategory::SetDefaultValues(){

	m_nAll=0;
	m_nMaped=0;
	m_nNoneMapped=0;

}
int CProductSysCategory::SetMode(int nMode){
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
void CProductSysCategory::OnListDblClick(){
	
} 
void CProductSysCategory::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductSysCategory::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductSysCategory::OnListLoadData(){
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
void CProductSysCategory::OnAllSelect(){
	
}
void CProductSysCategory::OnMapedSelect(){
	
}
void CProductSysCategory::OnNoneMappedSelect(){
	
}
void CProductSysCategory::OnAutoMapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSysCategory::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductSysCategory::OnAddProductSysCategory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSysCategory::OnEditProductSysCategory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSysCategory::OnDeleteProductSysCategory(){
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
 		OnCancelProductSysCategory();
 	}
	return 0;
}
int CProductSysCategory::OnSaveProductSysCategory(){
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
 		//OnProductSysCategoryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSysCategory::OnCancelProductSysCategory(){
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
int CProductSysCategory::OnProductSysCategoryListLoadData(){
	return 0;
}
