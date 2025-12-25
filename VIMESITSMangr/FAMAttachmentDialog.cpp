#include "FAMAttachmentDialog.h"
#include "MainFrm.h"
/*static void _OnFileNameChangeFnc(CWnd *pWnd){
	((CFAMAttachmentDialog *)pWnd)->OnFileNameChange();
} */
/*static void _OnFileNameSetfocusFnc(CWnd *pWnd){
	((CFAMAttachmentDialog *)pWnd)->OnFileNameSetfocus();} */ 
/*static void _OnFileNameKillfocusFnc(CWnd *pWnd){
	((CFAMAttachmentDialog *)pWnd)->OnFileNameKillfocus();
} */
static int _OnFileNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachmentDialog *)pWnd)->OnFileNameCheckValue();
} 
static void _OnbtnBrowseSelectFnc(CWnd *pWnd){
	CFAMAttachmentDialog *pVw = (CFAMAttachmentDialog *)pWnd;
	pVw->OnbtnBrowseSelect();
} 
static void _OnbtnSaveSelectFnc(CWnd *pWnd){
	CFAMAttachmentDialog *pVw = (CFAMAttachmentDialog *)pWnd;
	pVw->OnbtnSaveSelect();
} 
static void _OnbtnCancelSelectFnc(CWnd *pWnd){
	CFAMAttachmentDialog *pVw = (CFAMAttachmentDialog *)pWnd;
	pVw->OnbtnCancelSelect();
} 
static int _OnAddFAMAttachmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAttachmentDialog*)pWnd)->OnAddFAMAttachmentDialog();
} 
static int _OnEditFAMAttachmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAttachmentDialog*)pWnd)->OnEditFAMAttachmentDialog();
} 
static int _OnDeleteFAMAttachmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAttachmentDialog*)pWnd)->OnDeleteFAMAttachmentDialog();
} 
static int _OnSaveFAMAttachmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAttachmentDialog*)pWnd)->OnSaveFAMAttachmentDialog();
} 
static int _OnCancelFAMAttachmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAttachmentDialog*)pWnd)->OnCancelFAMAttachmentDialog();
} 
CFAMAttachmentDialog::CFAMAttachmentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CFAMAttachmentDialog::~CFAMAttachmentDialog(){
}
void CFAMAttachmentDialog::OnCreateComponents(){
	m_wndFileNameLabel.Create(this, _T("File Name"), 5, 10, 60, 35);
	m_wndFileName.Create(this,65, 10, 260, 35); 
	m_wndbtnBrowse.Create(this, _T("..."), 265, 10, 290, 35);
	m_wndbtnSave.Create(this, _T("Save"), 125, 40, 205, 65);
	m_wndbtnCancel.Create(this, _T("Cancel"), 210, 40, 290, 65);

}
void CFAMAttachmentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFileName.SetLimitText(128);
	m_wndFileName.SetCheckValue(true);
	m_fam_attachmentTbl.SetTableName(_T("fam_attachment"));
	m_fam_attachmentTbl.AddField(_T("faa_createdby"), dfText, 15); 
	m_fam_attachmentTbl.AddField(_T("faa_createddate"), dfDateTime); 
	m_fam_attachmentTbl.AddField(_T("faa_updatedby"), dfText, 15); 
	m_fam_attachmentTbl.AddField(_T("faa_updateddate"), dfDateTime); 
	m_fam_attachmentTbl.AddField(_T("faa_assetno"), dfText, 15); 
	m_fam_attachmentTbl.AddField(_T("faa_idx"), dfLong); 
	m_fam_attachmentTbl.AddField(_T("faa_filename"), dfText, 128); 
	m_fam_attachmentTbl.AddField(_T("faa_type"), dfText, 1); 
	m_fam_attachmentTbl.AddField(_T("faa_org_id"), dfText, 3);
	SetWindowTitle(_T("Attachment Information"));
}
void CFAMAttachmentDialog::OnSetWindowEvents(){
	//m_wndFileName.SetEvent(WE_CHANGE, _OnFileNameChangeFnc);
	//m_wndFileName.SetEvent(WE_SETFOCUS, _OnFileNameSetfocusFnc);
	//m_wndFileName.SetEvent(WE_KILLFOCUS, _OnFileNameKillfocusFnc);
	m_wndFileName.SetEvent(WE_CHECKVALUE, _OnFileNameCheckValueFnc);
	m_wndbtnBrowse.SetEvent(WE_CLICK, _OnbtnBrowseSelectFnc);
	m_wndbtnSave.SetEvent(WE_CLICK, _OnbtnSaveSelectFnc);
	m_wndbtnCancel.SetEvent(WE_CLICK, _OnbtnCancelSelectFnc);
	SetMode(GetMode());
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
}
void CFAMAttachmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFileName.GetDlgCtrlID(), m_szFileName);
	//DDX_Text(pDX, m_wndFileType.GetDlgCtrlID(), m_szFileType);
}
void CFAMAttachmentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_attachment WHERE faa_assetno='%s' AND faa_idx=%d AND faa_org_id = '%s'"), pMF->m_wndAssetDetail.m_szAssetNo, m_nIndex, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("faa_filename"), m_szFileName);
		rs.GetValue(_T("faa_type"), m_szFileType);
		SetMode(VM_EDIT);
	}
}
void CFAMAttachmentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(faa_idx), 0)+1 FROM fam_attachment WHERE faa_assetno='%s' AND faa_org_id = '%s'"), pMF->m_wndAssetDetail.m_szAssetNo, pMF->GetModuleID());
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_fam_attachmentTbl.SetValue(_T("faa_createdby"), pMF->GetCurrentUser());
	m_fam_attachmentTbl.SetValue(_T("faa_createddate"), pMF->GetSysDateTime());
	m_fam_attachmentTbl.SetValue(_T("faa_updatedby"), pMF->GetCurrentUser());
	m_fam_attachmentTbl.SetValue(_T("faa_updateddate"), pMF->GetSysDateTime());
	m_fam_attachmentTbl.SetValue(_T("faa_assetno"), m_szAssetNo);
	m_fam_attachmentTbl.SetValue(_T("faa_idx"), m_nIndex);
	m_fam_attachmentTbl.SetValue(_T("faa_filename"), m_szFileName);
	m_fam_attachmentTbl.SetValue(_T("faa_type"), m_szFileType);
	m_fam_attachmentTbl.SetValue(_T("faa_org_id"), pMF->GetModuleID());

}
void CFAMAttachmentDialog::SetDefaultValues(){

	m_szFileName.Empty();
	//m_szFileType.Empty();

}
int CFAMAttachmentDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues();
			//m_szAssetNo = pMF->m_szAssetNo;
			m_wndFileName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_wndFileName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFAMAttachmentDialog::OnFileNameChange(){
	
} */
/*void CFAMAttachmentDialog::OnFileNameSetfocus(){
	
} */
/*void CFAMAttachmentDialog::OnFileNameKillfocus(){
	
} */
int CFAMAttachmentDialog::OnFileNameCheckValue(){
	return 0;
} 
/*void CFAMAttachmentDialog::OnFileTypeChange(){
	
} */
/*void CFAMAttachmentDialog::OnFileTypeSetfocus(){
	
} */
/*void CFAMAttachmentDialog::OnFileTypeKillfocus(){
	
} */
//int CFAMAttachmentDialog::OnFileTypeCheckValue(){
	//return 0;
//} 
void CFAMAttachmentDialog::OnbtnBrowseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	TCHAR szFilter[] = _T("Word files (*.doc)|*.doc|Word 2010 files (*.docx)|*.docx|PDF files (*.pdf)|*.pdf|Text files (*.txt)|*.txt|All files (*.*)|*.*||"); 
	CFileDialog dlg(TRUE, _T("doc"), _T("*.doc"), OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilter);
	//CFileDialog dlg(FALSE, _T("doc"), NULL, OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilter);
	dlg.m_pOFN->lpstrTitle = _T("Select file");
	//dlg.m_pOFN->nFilterIndex = 0;
	CString szValue;
	m_szFileType = dlg.GetFileExt();
	//CStringArray szArray;
	INT_PTR nPtr = dlg.DoModal();
	if (nPtr == IDOK)
	{
		szValue = dlg.GetPathName();
	//	StringSplit(szValue, szArray, _T('\\'));
		CString szFileName = dlg.GetFileName(); //szArray[szArray.GetSize() - 1];	
		m_wndFileName.SetWindowText(szFileName);
		UploadDocument(szFileName, dlg.GetFileExt(), dlg.GetFileTitle());
		MessageBox(_T(""));
	}
	else
	{
		CString szValue;
		m_wndFileName.GetWindowText(szValue);
		if (szValue.IsEmpty())
		{
			m_wndFileName.Clear();
			m_wndFileName.SetSel(0, -1);
			m_wndFileName.SetFocus();
		}
	}
}
BOOL CFAMAttachmentDialog::UploadDocument(CString szFileName, CString szExtension, CString szFileTitle)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_wndAssetDetail.m_szAssetNo.IsEmpty())
		return FALSE;
	CString szName;
	szName.Format(_T("%s_%s_%s_%s"), pMF->GetModuleID(), pMF->m_wndAssetDetail.m_szAssetNo, szFileTitle, szExtension);
    //_msg(_T("%s"), szName);
	//m_wndImage.SetFileName(szFileName);
	pMF->UnlinkFile(szName);
	pMF->UploadFile(szName, szFileName);
	if (pMF->UploadFile(szName, szFileName))
	{
		MessageBox(szName);
	}
	return TRUE;
}
void CFAMAttachmentDialog::OnbtnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (OnSaveFAMAttachmentDialog() >= 0)
		CGuiDialog::OnOK();
} 
void CFAMAttachmentDialog::OnbtnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMAttachmentDialog::OnAddFAMAttachmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAttachmentDialog::OnEditFAMAttachmentDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAttachmentDialog::OnDeleteFAMAttachmentDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelFAMAttachmentDialog(); 
 	}
	return 0;
}
int CFAMAttachmentDialog::OnSaveFAMAttachmentDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_fam_attachmentTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE faa_assetno='%s' AND faa_idx=%d"), pMF->m_wndAssetDetail.m_szAssetNo, m_nIndex); 
 		szSQL = m_fam_attachmentTbl.GetUpdateSQL(_T("faa_createdby, faa_createddate, faa_assetno, faa_idx")); 
 		szSQL += szWhere; 
 	} 
	MessageBox(szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0) 
 	{ 
 		OnFAMAttachmentDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
	{ 
 	} 
 	return ret; 
 	//return 0; 
}
int CFAMAttachmentDialog::OnCancelFAMAttachmentDialog(){
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
int CFAMAttachmentDialog::OnFAMAttachmentDialogListLoadData(){
	return 0;
}
