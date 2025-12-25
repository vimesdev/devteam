#include "HMSUploadFileDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSUploadFileDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSUploadFileDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSUploadFileDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnListDeleteItem();
}
static int _OnListDownloadItemFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnListDownloadItem();
}

static int _OnDownloadFnc(CWnd *pWnd){
	((CHMSUploadFileDialog*)pWnd)->DownLoadFile();
	return 0;
}


/*static void _OnFileNameChangeFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnFileNameChange();
} */
/*static void _OnFileNameSetfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnFileNameSetfocus();} */ 
/*static void _OnFileNameKillfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnFileNameKillfocus();
} */
static int _OnFileNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSUploadFileDialog *)pWnd)->OnFileNameCheckValue();
} 
static void _OnBrowseButtonSelectFnc(CWnd *pWnd){
	CHMSUploadFileDialog *pVw = (CHMSUploadFileDialog *)pWnd;
	pVw->OnBrowseButtonSelect();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSUploadFileDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnUploadSelectFnc(CWnd *pWnd){
	CHMSUploadFileDialog *pVw = (CHMSUploadFileDialog *)pWnd;
	pVw->OnUploadSelect();
} 
static int _OnAddHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnAddHMSUploadFileDialog();
} 
static int _OnEditHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnEditHMSUploadFileDialog();
} 
static int _OnDeleteHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnDeleteHMSUploadFileDialog();
} 
static int _OnSaveHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnSaveHMSUploadFileDialog();
} 
static int _OnCancelHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnCancelHMSUploadFileDialog();
} 
CHMSUploadFileDialog::CHMSUploadFileDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSUploadFileDialog::~CHMSUploadFileDialog(){
}
void CHMSUploadFileDialog::OnCreateComponents(){
	m_wndUploadInformation.Create(this, _T("Upload Information"), 5, 5, 800, 195);
	m_wndList.Create(this,10, 30, 795, 160); 
	m_wndFileNameLabel.Create(this, _T("File Name"), 10, 165, 90, 190);
	m_wndFileName.Create(this,95, 165, 395, 190); 
	m_wndBrowseButton.Create(this, _T("..."), 400, 165, 425, 190);
	m_wndDescriptionLabel.Create(this, _T("Description"), 430, 165, 510, 190);
	m_wndDescription.Create(this,515, 165, 715, 190); 
	m_wndUpload.Create(this, _T("&Upload"), 720, 165, 795, 190);
	m_wndImage.Create(this, 5, 200, 800, 595);

}
void CHMSUploadFileDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFileName.SetLimitText(35);
	m_wndFileName.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndFileName.SetReadOnly(true);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(1, _T("File Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Created By"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Created Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(5, _T("type"), CFMT_TEXT, 0);
	
	

}
void CHMSUploadFileDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Upload List"));
	m_wndList.AddEvent(1, _T("Download"), _OnDownloadFnc);
	m_wndList.AddEvent(3, _T("Remove"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFileName.SetEvent(WE_CHANGE, _OnFileNameChangeFnc);
	//m_wndFileName.SetEvent(WE_SETFOCUS, _OnFileNameSetfocusFnc);
	//m_wndFileName.SetEvent(WE_KILLFOCUS, _OnFileNameKillfocusFnc);
	m_wndFileName.SetEvent(WE_CHECKVALUE, _OnFileNameCheckValueFnc);
	m_wndBrowseButton.SetEvent(WE_CLICK, _OnBrowseButtonSelectFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndUpload.SetEvent(WE_CLICK, _OnUploadSelectFnc);
	SetMode(VM_EDIT);
	OnListLoadData();

}
void CHMSUploadFileDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFileName.GetDlgCtrlID(), m_szFileName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSUploadFileDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSUploadFileDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUploadFileDialog::SetDefaultValues(){

	m_szFileName.Empty();
	m_szDescription.Empty();

}
int CHMSUploadFileDialog::SetMode(int nMode){
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
void CHMSUploadFileDialog::OnListDblClick(){
	
} 
void CHMSUploadFileDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	OnListDownloadItem();
} 
int CHMSUploadFileDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return -1;
	CString szName = m_wndList.GetItemText(nSel, 1);
	CString szType = m_wndList.GetItemText(nSel, 5);
	CString szFileName;

	int ret = ShowMessageBox(_T("Do you want to delete file"), MB_YESNO);
	if(ret == IDNO)
		return 0;

	if (pMF->UnlinkFile(szName))
	{
		CString szSQL;
		m_wndImage.SetFileName(_T(""), TRUE);
		szSQL.Format(_T("DELETE FROM hms_doc_attachment WHERE hda_docno=%ld and hda_filename='%s' "), 
			m_nDocumentNo, szName);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("delete from sys_filedir where lower(sfd_name)=lower('%s')"), szName);
		pMF->ExecSQL(szSQL);	
		OnListLoadData();
		ShowMessageBox(_T("Delete completed"));
	}

	 return 0;
}
int CHMSUploadFileDialog::OnListDownloadItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return -1;
	CString szName = m_wndList.GetItemText(nSel, 1);
	CString szType = m_wndList.GetItemText(nSel, 5);
	CString szFileName;
	TCHAR szPath[254];
	::GetTempPath(254, szPath);
	szFileName.Format(_T("%s%s"), szPath, szName);
	if(szType == _T("bmp") || szType == _T("jpg") || szType == _T("png") || szType == _T("gif"))
	{
		if (pMF->lo_export(szName, szFileName))
		{
			
				m_wndImage.SetFileName(szFileName, TRUE);
		}
	}
	 return 0;
}
long CHMSUploadFileDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	
	m_wndList.BeginLoad(); 
	szSQL.Format(_T("SELECT * ") \
		_T("FROM HMS_DOC_ATTACHMENT WHERE hda_docno=%ld ORDER BY hda_idx "), m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hda_idx")), 
			rs.GetValue(_T("hda_filename")), 
			rs.GetValue(_T("hda_desc")), 
			rs.GetValue(_T("hda_createdby")), 
			rs.GetValue(_T("hda_createddate")),
			rs.GetValue(_T("hda_type")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CHMSUploadFileDialog::OnFileNameChange(){
	
} */
/*void CHMSUploadFileDialog::OnFileNameSetfocus(){
	
} */
/*void CHMSUploadFileDialog::OnFileNameKillfocus(){
	
} */
int CHMSUploadFileDialog::OnFileNameCheckValue(){
	return 0;
} 
void CHMSUploadFileDialog::OnBrowseButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFileDialog dlg(TRUE);
	if(dlg.DoModal() == IDOK)
	{
		m_szFileName = dlg.GetPathName();
		UpdateData(false);
	}
} 
/*void CHMSUploadFileDialog::OnDescriptionChange(){
	
} */
/*void CHMSUploadFileDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSUploadFileDialog::OnDescriptionKillfocus(){
	
} */
int CHMSUploadFileDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSUploadFileDialog::OnUploadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	
	CFile file;
	if(!file.Open(m_szFileName, CFile::modeRead))
	{
		ShowMessageBox(_T("Cannot open file"));

		return;
	}
	
	

	CString szSQL, szName, szPath, szType;
	CRecord rs(&pMF->m_db);
	szName.Format(_T("HMS_%d_%s"), m_nDocumentNo, file.GetFileName());
	szPath = file.GetFilePath();
	if(file.GetFileName() != file.GetFileTitle())
		szType = file.GetFileName().Mid(file.GetFileTitle().GetLength()+1);
	else
		szType = _T("na");
	file.Close();
	szSQL.Format(_T("SELECT count(*) FROM hms_doc_attachment WHERE hda_docno=%ld and lower(hda_filename)=lower('%s') "), m_nDocumentNo, szName);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This file is existing."));
		file.Close();
		return;
	}
	pMF->BeginWaitCursor();

	szSQL.Format(_T("SELECT max(hda_idx)+1 FROM hms_doc_attachment WHERE hda_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	int nIdx = rs.GetIntValue();
	if(nIdx <= 0)
		nIdx = 1;

	

	szSQL.Format(_T("INSERT INTO hms_doc_attachment VALUES('%s', systimestamp, '%s', systimestamp, %ld, %d, '%s', '%s', '%s') "), 
		pMF->GetCurrentUser(), pMF->GetCurrentUser(), m_nDocumentNo, nIdx, szName, szType, m_szDescription);
	
	file.Close();
	//if(pMF->UploadFile(szName, szPath))
	if (pMF->lo_import(szName, szPath))
	{
		int ret = pMF->ExecSQL(szSQL);
		if(ret >= 0)
		{
			OnListLoadData();
			m_szDescription.Empty();
			m_szFileName.Empty();
			UpdateData(FALSE);
			ShowMessageBox(_T("Upload completed"));
		}
	}
	else
	{
		ShowMessageBox(_T("Cannot upload file."));
	}
	pMF->EndWaitCursor();
} 
int CHMSUploadFileDialog::OnAddHMSUploadFileDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSUploadFileDialog::OnEditHMSUploadFileDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUploadFileDialog::OnDeleteHMSUploadFileDialog(){
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
 		OnCancelHMSUploadFileDialog(); 
 	}
	return 0;
}
int CHMSUploadFileDialog::OnSaveHMSUploadFileDialog(){
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
 		//OnHMSUploadFileDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSUploadFileDialog::OnCancelHMSUploadFileDialog(){
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
int CHMSUploadFileDialog::OnHMSUploadFileDialogListLoadData(){
	return 0;
}

void CHMSUploadFileDialog::DownLoadFile()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return;
	CString szName = m_wndList.GetItemText(nSel, 1);
	CString szType = m_wndList.GetItemText(nSel, 5);
	CString szFileName;

	szFileName.Format(_T("%s\\%s"), pMF->GetCurrentDirectory(), szName);
	if(pMF->lo_export(szName, szFileName))
	{
		CString szMsg;
		szMsg.Format(_T("Downloaded file[%s]. Open it?(Y/N)"), szFileName);
		int ret = AfxMessageBox(szMsg, MB_YESNO|MB_DEFBUTTON2);
		if (ret == IDYES)
		{
			::ShellExecute(NULL, _T("open"), szName, NULL, pMF->GetCurrentDirectory(), SW_SHOW);
		}
	}
	else
	{
		ShowMessageBox(_T("Cannot download file"));
	}
	

}