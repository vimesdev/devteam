#include "ImagePropertiesDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnImageSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CImagePropertiesDialog*)pWnd)->OnImageSelectChange(nOld, nNew);
} 
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CImagePropertiesDialog *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CImagePropertiesDialog *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CImagePropertiesDialog *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CImagePropertiesDialog *)pWnd)->OnCommentCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CImagePropertiesDialog *pVw = (CImagePropertiesDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CImagePropertiesDialog *pVw = (CImagePropertiesDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddImagePropertiesDialogFnc(CWnd *pWnd){
	 return ((CImagePropertiesDialog*)pWnd)->OnAddImagePropertiesDialog();
} 
static int _OnEditImagePropertiesDialogFnc(CWnd *pWnd){
	 return ((CImagePropertiesDialog*)pWnd)->OnEditImagePropertiesDialog();
} 
static int _OnDeleteImagePropertiesDialogFnc(CWnd *pWnd){
	 return ((CImagePropertiesDialog*)pWnd)->OnDeleteImagePropertiesDialog();
} 
static int _OnSaveImagePropertiesDialogFnc(CWnd *pWnd){
	 return ((CImagePropertiesDialog*)pWnd)->OnSaveImagePropertiesDialog();
} 
static int _OnCancelImagePropertiesDialogFnc(CWnd *pWnd){
	 return ((CImagePropertiesDialog*)pWnd)->OnCancelImagePropertiesDialog();
} 
CImagePropertiesDialog::CImagePropertiesDialog(){

	m_nDlgWidth = 355;
	m_nDlgHeight = 345;
	SetDefaultValues();
}
CImagePropertiesDialog::~CImagePropertiesDialog(){
}
void CImagePropertiesDialog::OnCreateComponents(){
	m_wndImageProperties.Create(this, _T("Image Properties"), 4, 5, 334, 300);
	m_wndImage.Create(this,8, 26, 328, 266); 
	m_wndCommentLabel.Create(this, _T("Comment"), 8, 271, 78, 293);
	m_wndComment.Create(this,83, 271, 327, 293); 
	m_wndSave.Create(this, _T("&Save"), 189, 305, 259, 327);
	m_wndClose.Create(this, _T("&Close"), 264, 305, 334, 327);

}
void CImagePropertiesDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndComment.SetLimitText(35);
	m_wndComment.SetCheckValue(true);

}
void CImagePropertiesDialog::OnSetWindowEvents(){
	m_wndImage.SetEvent(WE_SELCHANGE, _OnImageSelectChangeFnc);
	//m_wndComment.SetEvent(WE_CHANGE, _OnCommentChangeFnc);
	//m_wndComment.SetEvent(WE_SETFOCUS, _OnCommentSetfocusFnc);
	//m_wndComment.SetEvent(WE_KILLFOCUS, _OnCommentKillfocusFnc);
	m_wndComment.SetEvent(WE_CHECKVALUE, _OnCommentCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CImagePropertiesDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndComment.GetDlgCtrlID(), m_szComment);

}
void CImagePropertiesDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CImagePropertiesDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CImagePropertiesDialog::SetDefaultValues(){

	m_szComment.Empty();

}
int CImagePropertiesDialog::SetMode(int nMode){ 
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
void CImagePropertiesDialog::OnImageSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CImagePropertiesDialog::OnCommentChange(){
	
} */
/*void CImagePropertiesDialog::OnCommentSetfocus(){
	
} */
/*void CImagePropertiesDialog::OnCommentKillfocus(){
	
} */
int CImagePropertiesDialog::OnCommentCheckValue(){
	return 0;
} 
void CImagePropertiesDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CImagePropertiesDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CImagePropertiesDialog::OnAddImagePropertiesDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add ImagePropertiesDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CImagePropertiesDialog::OnEditImagePropertiesDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit ImagePropertiesDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CImagePropertiesDialog::OnDeleteImagePropertiesDialog(){
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
 		OnCancelImagePropertiesDialog(); 
 	}
return 0;
 } 
int CImagePropertiesDialog::OnSaveImagePropertiesDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnImagePropertiesDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CImagePropertiesDialog::OnCancelImagePropertiesDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CImagePropertiesDialog::OnImagePropertiesDialogListLoadData(){
	return 0;
}
