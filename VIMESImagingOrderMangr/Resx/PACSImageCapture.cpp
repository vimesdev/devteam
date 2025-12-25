#include "PACSImageCapture.h"
#include "MainFrm.h"
static long _OnImageCaptureLoadDataFnc(CWnd *pWnd){
	return ((CPACSImageCapture*)pWnd)->OnImageCaptureLoadData();
} 
static void _OnImageCaptureDblClickFnc(CWnd *pWnd){
	((CPACSImageCapture*)pWnd)->OnImageCaptureDblClick();
} 
static void _OnImageCaptureSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSImageCapture*)pWnd)->OnImageCaptureSelectChange(nOldItem, nNewItem);
} 
static int _OnImageCaptureDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnImageCaptureDeleteItem();
} 
static void _OnImageSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPACSImageCapture*)pWnd)->OnImageSelectChange(nOld, nNew);
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnCaptureSelectFnc(CWnd *pWnd){
	CPACSImageCapture *pVw = (CPACSImageCapture *)pWnd;
	pVw->OnCaptureSelect();
} 
static int _OnAddPACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnAddPACSImageCapture();
} 
static int _OnEditPACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnEditPACSImageCapture();
} 
static int _OnDeletePACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnDeletePACSImageCapture();
} 
static int _OnSavePACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnSavePACSImageCapture();
} 
static int _OnCancelPACSImageCaptureFnc(CWnd *pWnd){
	 return ((CPACSImageCapture*)pWnd)->OnCancelPACSImageCapture();
} 
CPACSImageCapture::CPACSImageCapture(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 705;
	SetDefaultValues();
}
CPACSImageCapture::~CPACSImageCapture(){
}
void CPACSImageCapture::OnCreateComponents(){
	m_wndImageCapture.Create(this,5, 5, 255, 625); 
	m_wndImage.Create(this,260, 5, 990, 625); 
	m_wndEdit.Create(this, _T("Edit"), 5, 630, 85, 655);
	m_wndDelete.Create(this, _T("Delete"), 90, 630, 170, 655);
	m_wndMarkAll.Create(this, _T("Mark All"), 175, 630, 255, 655);
	m_wndCapture.Create(this, _T("Capture"), 910, 630, 990, 655);

}
void CPACSImageCapture::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSImageCapture::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndImageCapture.SetEvent(WE_SELCHANGE, _OnImageCaptureSelectChangeFnc);
	m_wndImageCapture.SetEvent(WE_LOADDATA, _OnImageCaptureLoadDataFnc);
	m_wndImageCapture.SetEvent(WE_DBLCLICK, _OnImageCaptureDblClickFnc);
	m_wndImageCapture.AddEvent(1, _T("Delete"), _OnImageCaptureDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndImage.SetEvent(WE_SELCHANGE, _OnImageSelectChangeFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
	SetMode(VM_NONE);

}
void CPACSImageCapture::OnDoDataExchange(CDataExchange* pDX){

}
void CPACSImageCapture::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSImageCapture::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSImageCapture::SetDefaultValues(){


}
int CPACSImageCapture::SetMode(int nMode){
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
void CPACSImageCapture::OnImageCaptureDblClick(){
	
} 
void CPACSImageCapture::OnImageCaptureSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSImageCapture::OnImageCaptureDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSImageCapture::OnImageCaptureLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndImageCapture.BeginLoad(); 
	m_wndImageCapture.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndImageCapture.AddItems(
		rs.MoveNext();
	}
	m_wndImageCapture.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPACSImageCapture::OnImageSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSImageCapture::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSImageCapture::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSImageCapture::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSImageCapture::OnCaptureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSImageCapture::OnAddPACSImageCapture(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSImageCapture::OnEditPACSImageCapture(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSImageCapture::OnDeletePACSImageCapture(){
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
 		OnCancelPACSImageCapture(); 
 	}
	return 0;
}
int CPACSImageCapture::OnSavePACSImageCapture(){
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
 		//OnPACSImageCaptureListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSImageCapture::OnCancelPACSImageCapture(){
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
int CPACSImageCapture::OnPACSImageCaptureListLoadData(){
	return 0;
}
