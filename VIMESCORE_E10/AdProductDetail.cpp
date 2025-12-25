#include "AdProductDetail.h"
#include "MainFrame_E10.h"
static int _OnAddAdProductDetailFnc(CWnd *pWnd){
	 return ((CAdProductDetail*)pWnd)->OnAddAdProductDetail();
} 
static int _OnEditAdProductDetailFnc(CWnd *pWnd){
	 return ((CAdProductDetail*)pWnd)->OnEditAdProductDetail();
} 
static int _OnDeleteAdProductDetailFnc(CWnd *pWnd){
	 return ((CAdProductDetail*)pWnd)->OnDeleteAdProductDetail();
} 
static int _OnSaveAdProductDetailFnc(CWnd *pWnd){
	 return ((CAdProductDetail*)pWnd)->OnSaveAdProductDetail();
} 
static int _OnCancelAdProductDetailFnc(CWnd *pWnd){
	 return ((CAdProductDetail*)pWnd)->OnCancelAdProductDetail();
} 
CAdProductDetail::CAdProductDetail(){

	m_nDlgWidth = 785;
	m_nDlgHeight = 415;
	SetDefaultValues();
}
CAdProductDetail::~CAdProductDetail(){
}
void CAdProductDetail::OnCreateComponents(){
	m_wnd.Create(this, _T(""), 5, 5, 790, 380);

}
void CAdProductDetail::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wnd.ModifyStyle(WS_BORDER, 0);
}
void CAdProductDetail::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdProductDetailFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdProductDetailFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdProductDetailFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdProductDetailFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdProductDetailFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdProductDetail::OnDoDataExchange(CDataExchange* pDX){

}
void CAdProductDetail::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdProductDetail::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdProductDetail::SetDefaultValues(){


}
int CAdProductDetail::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
int CAdProductDetail::OnAddAdProductDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdProductDetail::OnEditAdProductDetail(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdProductDetail::OnDeleteAdProductDetail(){
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
 		OnCancelAdProductDetail();
 	}
	return 0;
}
int CAdProductDetail::OnSaveAdProductDetail(){
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
 		//OnAdProductDetailListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdProductDetail::OnCancelAdProductDetail(){
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
int CAdProductDetail::OnAdProductDetailListLoadData(){
	return 0;
}
