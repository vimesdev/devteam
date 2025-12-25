#include "ProductImportAll.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductImportAll*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductImportAll*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductImportAll*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductImportAll*)pWnd)->OnListDeleteItem();
} 
static void _OnSheetSelectFnc(CWnd *pWnd){
	CProductImportAll *pVw = (CProductImportAll *)pWnd;
	pVw->OnSheetSelect();
} 
static void _OnValidSelectFnc(CWnd *pWnd){
	CProductImportAll *pVw = (CProductImportAll *)pWnd;
	pVw->OnValidSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CProductImportAll *pVw = (CProductImportAll *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CProductImportAll*)pWnd)->OnAllSelect();
}
static void _OnValidatedSelectFnc(CWnd *pWnd){
	  ((CProductImportAll*)pWnd)->OnValidatedSelect();
}
static void _OnInvalidateSelectFnc(CWnd *pWnd){
	  ((CProductImportAll*)pWnd)->OnInvalidateSelect();
}
static void _OnImportedSelectFnc(CWnd *pWnd){
	  ((CProductImportAll*)pWnd)->OnImportedSelect();
}
static void _OnSysCategorySelectFnc(CWnd *pWnd){
	CProductImportAll *pVw = (CProductImportAll *)pWnd;
	pVw->OnSysCategorySelect();
} 
static int _OnAddProductImportAllFnc(CWnd *pWnd){
	 return ((CProductImportAll*)pWnd)->OnAddProductImportAll();
} 
static int _OnEditProductImportAllFnc(CWnd *pWnd){
	 return ((CProductImportAll*)pWnd)->OnEditProductImportAll();
} 
static int _OnDeleteProductImportAllFnc(CWnd *pWnd){
	 return ((CProductImportAll*)pWnd)->OnDeleteProductImportAll();
} 
static int _OnSaveProductImportAllFnc(CWnd *pWnd){
	 return ((CProductImportAll*)pWnd)->OnSaveProductImportAll();
} 
static int _OnCancelProductImportAllFnc(CWnd *pWnd){
	 return ((CProductImportAll*)pWnd)->OnCancelProductImportAll();
} 
CProductImportAll::CProductImportAll(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CProductImportAll::~CProductImportAll(){
}
void CProductImportAll::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 1000, 640); 
	m_wndSheet.Create(this, _T("Sheet"), 5, 645, 90, 670);
	m_wndValid.Create(this, _T("Valid"), 95, 645, 180, 670);
	m_wndImport.Create(this, _T("Import"), 185, 645, 270, 670);
	m_wndAll.Create(this, _T("All"), 275, 645, 355, 670);
	m_wndValidated.Create(this, _T("Validated"), 360, 645, 440, 670);
	m_wndInvalidate.Create(this, _T("Invalidate"), 445, 645, 525, 670);
	m_wndImported.Create(this, _T("Imported"), 530, 645, 610, 670);
	m_wndSysCategory.Create(this, _T("Sys Category"), 875, 645, 1000, 670);

}
void CProductImportAll::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();



}
void CProductImportAll::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSheet.SetEvent(WE_CLICK, _OnSheetSelectFnc);
	m_wndValid.SetEvent(WE_CLICK, _OnValidSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndValidated.SetEvent(WE_CLICK, _OnValidatedSelectFnc);
	m_wndInvalidate.SetEvent(WE_CLICK, _OnInvalidateSelectFnc);
	m_wndImported.SetEvent(WE_CLICK, _OnImportedSelectFnc);
	m_wndSysCategory.SetEvent(WE_CLICK, _OnSysCategorySelectFnc);
	SetMode(VM_NONE);

}
void CProductImportAll::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndValidated.GetDlgCtrlID(), m_nValidated);
	DDX_Radio(pDX, m_wndInvalidate.GetDlgCtrlID(), m_nInvalidate);
	DDX_Radio(pDX, m_wndImported.GetDlgCtrlID(), m_nImported);

}
void CProductImportAll::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("Validated")] =  m_nValidated;
	m_jData[_T("Invalidate")] =  m_nInvalidate;
	m_jData[_T("Imported")] =  m_nImported;
	}
	else
	{
			
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("Validated")].GetValue(m_nValidated);
	m_jData[_T("Invalidate")].GetValue(m_nInvalidate);
	m_jData[_T("Imported")].GetValue(m_nImported);
	}

}
void CProductImportAll::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductImportAll::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductImportAll::SetDefaultValues(){

	m_nAll=0;
	m_nValidated=0;
	m_nInvalidate=0;
	m_nImported=0;

}
int CProductImportAll::SetMode(int nMode){
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
void CProductImportAll::OnListDblClick(){
	
} 
void CProductImportAll::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductImportAll::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductImportAll::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CProductImportAll::OnSheetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductImportAll::OnValidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductImportAll::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductImportAll::OnAllSelect(){
	
}
void CProductImportAll::OnValidatedSelect(){
	
}
void CProductImportAll::OnInvalidateSelect(){
	
}
void CProductImportAll::OnImportedSelect(){
	
}
void CProductImportAll::OnSysCategorySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductImportAll::OnAddProductImportAll(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductImportAll::OnEditProductImportAll(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductImportAll::OnDeleteProductImportAll(){
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
 		OnCancelProductImportAll();
 	}
	return 0;
}
int CProductImportAll::OnSaveProductImportAll(){
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
 		//OnProductImportAllListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductImportAll::OnCancelProductImportAll(){
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
int CProductImportAll::OnProductImportAllListLoadData(){
	return 0;
}
