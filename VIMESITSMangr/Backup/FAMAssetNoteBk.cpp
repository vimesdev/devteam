#include "FAMAssetNote.h"
#include "MainFrm.h"
static void _OnbtnUpdateNoteSelectFnc(CWnd *pWnd){
	CFAMAssetNote *pVw = (CFAMAssetNote *)pWnd;
	pVw->OnbtnUpdateNoteSelect();
} 
/*static void _OntxtNoteChangeFnc(CWnd *pWnd){
	((CFAMAssetNote *)pWnd)->OntxtNoteChange();
} */
/*static void _OntxtNoteSetfocusFnc(CWnd *pWnd){
	((CFAMAssetNote *)pWnd)->OntxtNoteSetfocus();} */ 
/*static void _OntxtNoteKillfocusFnc(CWnd *pWnd){
	((CFAMAssetNote *)pWnd)->OntxtNoteKillfocus();
} */
static int _OntxtNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetNote *)pWnd)->OntxtNoteCheckValue();
} 
static int _OnAddFAMAssetNoteFnc(CWnd *pWnd){
	 return ((CFAMAssetNote*)pWnd)->OnAddFAMAssetNote();
} 
static int _OnEditFAMAssetNoteFnc(CWnd *pWnd){
	 return ((CFAMAssetNote*)pWnd)->OnEditFAMAssetNote();
} 
static int _OnDeleteFAMAssetNoteFnc(CWnd *pWnd){
	 return ((CFAMAssetNote*)pWnd)->OnDeleteFAMAssetNote();
} 
static int _OnSaveFAMAssetNoteFnc(CWnd *pWnd){
	 return ((CFAMAssetNote*)pWnd)->OnSaveFAMAssetNote();
} 
static int _OnCancelFAMAssetNoteFnc(CWnd *pWnd){
	 return ((CFAMAssetNote*)pWnd)->OnCancelFAMAssetNote();
} 
CFAMAssetNote::CFAMAssetNote(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CFAMAssetNote::~CFAMAssetNote(){
}
void CFAMAssetNote::OnCreateComponents(){
	m_wndbtnUpdateNote.Create(this, _T("Update"), 540, 215, 630, 240);
	m_wndtxtNote.Create(this, 5, 5, 630, 210, 1, 0, 1); 
}
void CFAMAssetNote::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndtxtNote.SetLimitText(1024);
	//m_wndtxtNote.SetCheckValue(true);
}
void CFAMAssetNote::OnSetWindowEvents(){
	m_wndbtnUpdateNote.SetEvent(WE_CLICK, _OnbtnUpdateNoteSelectFnc);
	//m_wndtxtNote.SetEvent(WE_CHANGE, _OntxtNoteChangeFnc);
	//m_wndtxtNote.SetEvent(WE_SETFOCUS, _OntxtNoteSetfocusFnc);
	//m_wndtxtNote.SetEvent(WE_KILLFOCUS, _OntxtNoteKillfocusFnc);
	m_wndtxtNote.SetEvent(WE_CHECKVALUE, _OntxtNoteCheckValueFnc);
	OntxtNoteLoadData();
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

}
void CFAMAssetNote::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndtxtNote.GetDlgCtrlID(), m_sztxtNote);

}
void CFAMAssetNote::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAssetNote::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAssetNote::SetDefaultValues(){

	m_sztxtNote.Empty();

}
int CFAMAssetNote::SetMode(int nMode){
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
void CFAMAssetNote::OnbtnUpdateNoteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
		return;
	CString szValue;
	m_wndtxtNote.GetWindowText(szValue);
	if (!pMF->m_szAssetNo.IsEmpty())
	{
		CRecord rs(&pMF->m_db); 
		CString szSQL;
		szSQL.Format(_T("Update fam_asset Set fa_note='%s' Where fa_assetno='%s'"), szValue.Trim(), pMF->m_szAssetNo);
		int ret = rs.ExecSQL(szSQL);
		//_fmsg(_T("%s"), szSQL);
		OntxtNoteLoadData();
		//MessageBox(_T("OK"));
	}
} 
/*void CFAMAssetNote::OntxtNoteChange(){
	
} */
/*void CFAMAssetNote::OntxtNoteSetfocus(){
	
} */
/*void CFAMAssetNote::OntxtNoteKillfocus(){
	
} */

void CFAMAssetNote::OntxtNoteLoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (!pMF->m_szAssetNo.IsEmpty())
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		CString value;
		szSQL.Format(_T("Select fa_note From fam_asset Where fa_assetno='%s'"), pMF->m_szAssetNo);
		rs.ExecSQL(szSQL);
		value = rs.GetStringValue();
		m_wndtxtNote.SetWindowText(value);
		m_wndtxtNote.SetSel(0, -1);
		m_wndtxtNote.SetFocus();
	}
}

int CFAMAssetNote::OntxtNoteCheckValue(){
	return 0;
} 
int CFAMAssetNote::OnAddFAMAssetNote(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAssetNote::OnEditFAMAssetNote(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetNote::OnDeleteFAMAssetNote(){
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
 		OnCancelFAMAssetNote(); 
 	}
	return 0;
}
int CFAMAssetNote::OnSaveFAMAssetNote(){
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
 		//OnFAMAssetNoteListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMAssetNote::OnCancelFAMAssetNote(){
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
int CFAMAssetNote::OnFAMAssetNoteListLoadData()
{
	return 0;
}
