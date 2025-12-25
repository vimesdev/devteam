#include "ImageEditor.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CImageEditor *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnWidthChangeFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnWidthChange();
} */
/*static void _OnWidthSetfocusFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnWidthSetfocus();} */ 
/*static void _OnWidthKillfocusFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnWidthKillfocus();
} */
static int _OnWidthCheckValueFnc(CWnd *pWnd){
	return ((CImageEditor *)pWnd)->OnWidthCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CImageEditor *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CImageEditor *)pWnd)->OnHeightCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CImageEditor *pVw = (CImageEditor *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CImageEditor *pVw = (CImageEditor *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddImageEditorFnc(CWnd *pWnd){
	 return ((CImageEditor*)pWnd)->OnAddImageEditor();
} 
static int _OnEditImageEditorFnc(CWnd *pWnd){
	 return ((CImageEditor*)pWnd)->OnEditImageEditor();
} 
static int _OnDeleteImageEditorFnc(CWnd *pWnd){
	 return ((CImageEditor*)pWnd)->OnDeleteImageEditor();
} 
static int _OnSaveImageEditorFnc(CWnd *pWnd){
	 return ((CImageEditor*)pWnd)->OnSaveImageEditor();
} 
static int _OnCancelImageEditorFnc(CWnd *pWnd){
	 return ((CImageEditor*)pWnd)->OnCancelImageEditor();
} 
CImageEditor::CImageEditor(){

	m_nDlgWidth = 606;
	m_nDlgHeight = 406;
	SetDefaultValues();
}
CImageEditor::~CImageEditor(){
}
void CImageEditor::OnCreateComponents(){
	m_wndNoteLabel.Create(this, _T("Note"), 11, 253, 61, 275);
	m_wndNote.Create(this,61, 253, 131, 275); 
	m_wndWidthLabel.Create(this, _T("Width"), 56, 292, 113, 314);
	m_wndWidth.Create(this,118, 292, 158, 314); 
	m_wndHeightLabel.Create(this, _T("Height"), 184, 293, 247, 315);
	m_wndHeight.Create(this,252, 293, 284, 315); 
	m_wndSave.Create(this, _T("&Save"), 243, 338, 313, 360);
	m_wndClose.Create(this, _T("&Close"), 326, 336, 396, 358);

}
void CImageEditor::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_wndWidth.SetLimitText(16);
	m_wndWidth.SetCheckValue(true);
	m_wndHeight.SetLimitText(16);
	m_wndHeight.SetCheckValue(true);

}
void CImageEditor::OnSetWindowEvents(){
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndWidth.SetEvent(WE_CHANGE, _OnWidthChangeFnc);
	//m_wndWidth.SetEvent(WE_SETFOCUS, _OnWidthSetfocusFnc);
	//m_wndWidth.SetEvent(WE_KILLFOCUS, _OnWidthKillfocusFnc);
	m_wndWidth.SetEvent(WE_CHECKVALUE, _OnWidthCheckValueFnc);
	//m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
	//m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
	//m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
	m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CImageEditor::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndWidth.GetDlgCtrlID(), m_nWidth);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);

}
void CImageEditor::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CImageEditor::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CImageEditor::SetDefaultValues(){

	m_szNote.Empty();
	m_nWidth=0;
	m_nHeight=0;

}
int CImageEditor::SetMode(int nMode){ 
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
/*void CImageEditor::OnNoteChange(){
	
} */
/*void CImageEditor::OnNoteSetfocus(){
	
} */
/*void CImageEditor::OnNoteKillfocus(){
	
} */
int CImageEditor::OnNoteCheckValue(){
	return 0;
} 
/*void CImageEditor::OnWidthChange(){
	
} */
/*void CImageEditor::OnWidthSetfocus(){
	
} */
/*void CImageEditor::OnWidthKillfocus(){
	
} */
int CImageEditor::OnWidthCheckValue(){
	return 0;
} 
/*void CImageEditor::OnHeightChange(){
	
} */
/*void CImageEditor::OnHeightSetfocus(){
	
} */
/*void CImageEditor::OnHeightKillfocus(){
	
} */
int CImageEditor::OnHeightCheckValue(){
	return 0;
} 
void CImageEditor::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CImageEditor::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CImageEditor::OnAddImageEditor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add ImageEditor"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CImageEditor::OnEditImageEditor(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit ImageEditor"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CImageEditor::OnDeleteImageEditor(){
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
 		OnCancelImageEditor(); 
 	}
return 0;
 } 
int CImageEditor::OnSaveImageEditor(){
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
 		//OnImageEditorListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CImageEditor::OnCancelImageEditor(){
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
int CImageEditor::OnImageEditorListLoadData(){
	return 0;
}
