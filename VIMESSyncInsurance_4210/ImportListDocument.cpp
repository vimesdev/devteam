#include "ImportListDocument.h"
#include "MainFrm.h"
#include "StringToken.h"
/*static void _OnImputChangeFnc(CWnd *pWnd){
	((CImportListDocument *)pWnd)->OnImputChange();
} */
/*static void _OnImputSetfocusFnc(CWnd *pWnd){
	((CImportListDocument *)pWnd)->OnImputSetfocus();} */ 
/*static void _OnImputKillfocusFnc(CWnd *pWnd){
	((CImportListDocument *)pWnd)->OnImputKillfocus();
} */
static int _OnImputCheckValueFnc(CWnd *pWnd){
	return ((CImportListDocument *)pWnd)->OnImputCheckValue();
} 
static void _OnFormatSelectFnc(CWnd *pWnd){
	CImportListDocument *pVw = (CImportListDocument *)pWnd;
	pVw->OnFormatSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CImportListDocument *pVw = (CImportListDocument *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnAddImportListDocument();
} 
static int _OnEditImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnEditImportListDocument();
} 
static int _OnDeleteImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnDeleteImportListDocument();
} 
static int _OnSaveImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnSaveImportListDocument();
} 
static int _OnCancelImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnCancelImportListDocument();
} 
CImportListDocument::CImportListDocument(CWnd *pParent,bool bImportMaLk):
	CGuiDialog(pParent){

	m_nDlgWidth = 825;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_bImportMaLk =  bImportMaLk ;
}
CImportListDocument::~CImportListDocument(){
}
void CImportListDocument::OnCreateComponents(){
	m_wndListDoc.Create(this, _T("List Doc"), 5, 5, 85, 30);
	m_wndImput.Create(this,90, 5, 690, 605, TRUE, FALSE, TRUE); 
	m_wndFormat.Create(this, _T("Format"), 694, 7, 769, 32);
	m_wndApply.Create(this, _T("&Apply"), 694, 37, 769, 62);

}
void CImportListDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndImput.SetMultiLine(TRUE);
	m_wndImput.SetLimitText(102400);
	m_wndImput.SetCheckValue(true);

}
void CImportListDocument::OnSetWindowEvents(){
	//m_wndImput.SetEvent(WE_CHANGE, _OnImputChangeFnc);
	//m_wndImput.SetEvent(WE_SETFOCUS, _OnImputSetfocusFnc);
	//m_wndImput.SetEvent(WE_KILLFOCUS, _OnImputKillfocusFnc);
	m_wndImput.SetEvent(WE_CHECKVALUE, _OnImputCheckValueFnc);
	m_wndFormat.SetEvent(WE_CLICK, _OnFormatSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);

	SetMode(VM_EDIT);

}
void CImportListDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndImput.GetDlgCtrlID(), m_szImput);

}
void CImportListDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CImportListDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CImportListDocument::SetDefaultValues(){

	m_szImput.Empty();

}
int CImportListDocument::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CImportListDocument::OnImputChange(){
	
} */
/*void CImportListDocument::OnImputSetfocus(){
	
} */
/*void CImportListDocument::OnImputKillfocus(){
	
} */
int CImportListDocument::OnImputCheckValue(){
	return 0;
} 
void CImportListDocument::OnFormatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szInput, szStr, tmpStr, szFormat;
	UpdateData(true);
	szInput = m_szImput;
	CStringToken st(szInput, _T("\r\n"));
	for(int i = 0; i < st.GetSize(); i++){
		st.GetAt(i, tmpStr);
		if(!szStr.IsEmpty())
			szFormat =_T(",");
		if(m_bImportMaLk)
			szStr.AppendFormat(_T("%s'%s'"), szFormat, tmpStr);
		else
			szStr.AppendFormat(_T("%s%s"), szFormat, tmpStr);
	}
	
	m_szImput = szStr;
	UpdateData(false);

	
} 
void CImportListDocument::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOK();
} 
int CImportListDocument::OnAddImportListDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CImportListDocument::OnEditImportListDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CImportListDocument::OnDeleteImportListDocument(){
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
 		OnCancelImportListDocument(); 
 	}
	return 0;
}
int CImportListDocument::OnSaveImportListDocument(){
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
 		//OnImportListDocumentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CImportListDocument::OnCancelImportListDocument(){
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
int CImportListDocument::OnImportListDocumentListLoadData(){
	return 0;
}
