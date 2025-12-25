#include "HMSImageCapture.h"
#include "MainFrm.h"
static long _OnImageCaptureLoadDataFnc(CWnd *pWnd){
	return ((CHMSImageCapture*)pWnd)->OnImageCaptureLoadData();
} 
static void _OnImageCaptureDblClickFnc(CWnd *pWnd){
	((CHMSImageCapture*)pWnd)->OnImageCaptureDblClick();
} 
static void _OnImageCaptureSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSImageCapture*)pWnd)->OnImageCaptureSelectChange(nOldItem, nNewItem);
} 
static int _OnImageCaptureDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSImageCapture*)pWnd)->OnImageCaptureDeleteItem();
} 
static void _OnImageSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSImageCapture*)pWnd)->OnImageSelectChange(nOld, nNew);
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSImageCapture *pVw = (CHMSImageCapture *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSImageCapture *pVw = (CHMSImageCapture *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CHMSImageCapture *pVw = (CHMSImageCapture *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnCaptureSelectFnc(CWnd *pWnd){
	CHMSImageCapture *pVw = (CHMSImageCapture *)pWnd;
	pVw->OnCaptureSelect();
} 
static int _OnAddHMSImageCaptureFnc(CWnd *pWnd){
	 return ((CHMSImageCapture*)pWnd)->OnAddHMSImageCapture();
} 
static int _OnEditHMSImageCaptureFnc(CWnd *pWnd){
	 return ((CHMSImageCapture*)pWnd)->OnEditHMSImageCapture();
} 
static int _OnDeleteHMSImageCaptureFnc(CWnd *pWnd){
	 return ((CHMSImageCapture*)pWnd)->OnDeleteHMSImageCapture();
} 
static int _OnSaveHMSImageCaptureFnc(CWnd *pWnd){
	 return ((CHMSImageCapture*)pWnd)->OnSaveHMSImageCapture();
} 
static int _OnCancelHMSImageCaptureFnc(CWnd *pWnd){
	 return ((CHMSImageCapture*)pWnd)->OnCancelHMSImageCapture();
} 
CHMSImageCapture::CHMSImageCapture(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 705;
	SetDefaultValues();
}
CHMSImageCapture::~CHMSImageCapture(){
}
void CHMSImageCapture::OnCreateComponents(){
	m_wndImageCapture.Create(this,5, 5, 255, 645); 
	m_wndImage.Create(this,260, 5, 990, 645); 
	m_wndEdit.Create(this, _T("Edit"), 5, 650, 85, 675);
	m_wndDelete.Create(this, _T("Delete"), 90, 650, 170, 675);
	m_wndMarkAll.Create(this, _T("Mark All"), 175, 650, 255, 675);
	m_wndCapture.Create(this, _T("Capture"), 910, 650, 990, 675);

}
void CHMSImageCapture::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSImageCapture::OnSetWindowEvents(){
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
void CHMSImageCapture::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSImageCapture::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSImageCapture::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSImageCapture::SetDefaultValues(){


}
int CHMSImageCapture::SetMode(int nMode){
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
void CHMSImageCapture::OnImageCaptureDblClick(){
	
} 
void CHMSImageCapture::OnImageCaptureSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSImageCapture::OnImageCaptureDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSImageCapture::OnImageCaptureLoadData(){
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
void CHMSImageCapture::OnImageSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSImageCapture::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSImageCapture::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSImageCapture::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSImageCapture::OnCaptureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSImageCapture::OnAddHMSImageCapture(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSImageCapture::OnEditHMSImageCapture(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSImageCapture::OnDeleteHMSImageCapture(){
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
 		OnCancelHMSImageCapture(); 
 	}
	return 0;
}
int CHMSImageCapture::OnSaveHMSImageCapture(){
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
 		//OnHMSImageCaptureListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSImageCapture::OnCancelHMSImageCapture(){
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
int CHMSImageCapture::OnHMSImageCaptureListLoadData(){
	return 0;
}
