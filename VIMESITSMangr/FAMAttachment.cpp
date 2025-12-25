#include "FAMAttachment.h"
#include "MainFrm.h"
static long _OnAttachListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAttachment*)pWnd)->OnAttachListLoadData();
} 
static void _OnAttachListDblClickFnc(CWnd *pWnd){
	((CFAMAttachment*)pWnd)->OnAttachListDblClick();
} 
static void _OnAttachListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAttachment*)pWnd)->OnAttachListSelectChange(nOldItem, nNewItem);
} 
static int _OnAttachListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAttachment*)pWnd)->OnAttachListDeleteItem();
} 
static int _OnAddFAMAttachmentFnc(CWnd *pWnd){
	 return ((CFAMAttachment*)pWnd)->OnAddFAMAttachment();
} 
static int _OnEditFAMAttachmentFnc(CWnd *pWnd){
	 return ((CFAMAttachment*)pWnd)->OnEditFAMAttachment();
} 
static int _OnDeleteFAMAttachmentFnc(CWnd *pWnd){
	 return ((CFAMAttachment*)pWnd)->OnDeleteFAMAttachment();
} 
static int _OnSaveFAMAttachmentFnc(CWnd *pWnd){
	 return ((CFAMAttachment*)pWnd)->OnSaveFAMAttachment();
} 
static int _OnCancelFAMAttachmentFnc(CWnd *pWnd){
	 return ((CFAMAttachment*)pWnd)->OnCancelFAMAttachment();
}
static int _OnSaveFileFnc(CWnd *pWnd){
	return ((CFAMAttachment*)pWnd)->SaveDocumentFile();
}
static int _OnOpenFileFnc(CWnd *pWnd){
	return ((CFAMAttachment*)pWnd)->OpenDocumentFile();
} 
CFAMAttachment::CFAMAttachment(){

	m_nDlgWidth = 785;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CFAMAttachment::~CFAMAttachment(){
}
void CFAMAttachment::OnCreateComponents(){
	m_wndAttachList.Create(this, 5, 5, 800, 115); 

}
void CFAMAttachment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

	m_wndAttachList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	//m_wndAttachList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 90);
	m_wndAttachList.InsertColumn(1, _T("File Name"), CFMT_TEXT, 300);
	m_wndAttachList.InsertColumn(2, _T("File Type"), CFMT_TEXT, 200);
	m_wndAttachList.InsertColumn(3, _T(""), CFMT_TEXT, 100);
}
void CFAMAttachment::OnSetWindowEvents(){
	m_wndAttachList.SetEvent(WE_SELCHANGE, _OnAttachListSelectChangeFnc);
	m_wndAttachList.SetEvent(WE_LOADDATA, _OnAttachListLoadDataFnc);
	m_wndAttachList.SetEvent(WE_DBLCLICK, _OnAttachListDblClickFnc);
	m_wndAttachList.SetWindowText(_T("Attachment"));
	m_wndAttachList.AddEvent(1, _T("&Add"), _OnAddFAMAttachmentFnc, 0, 0, 0);
	//m_wndAttachList.AddEvent(0, _T("-"), NULL);
	//m_wndAttachList.AddEvent(2, _T("&Edit"), _OnEditFAMAttachmentFnc, 0, 0, 0);
	m_wndAttachList.AddEvent(0, _T("-"), NULL);
	m_wndAttachList.AddEvent(2, _T("&Delete"), _OnDeleteFAMAttachmentFnc, 0, 0, 0);
	m_wndAttachList.AddEvent(0, _T("-"), NULL);
	m_wndAttachList.AddEvent(3, _T("&Save as"), _OnSaveFileFnc, 0, 0, 0);
	m_wndAttachList.AddEvent(0, _T("-"), NULL);
	m_wndAttachList.AddEvent(4, _T("&Open file"), _OnOpenFileFnc, 0, 0, 0);
	OnAttachListLoadData();
	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();*/
}
void CFAMAttachment::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMAttachment::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAttachment::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CFAMAttachment::SetDefaultValues(){


}
int CFAMAttachment::SetMode(int nMode){
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
void CFAMAttachment::OnAttachListDblClick()
{
	//OnEditFAMAttachment();
	OpenDocumentFile();
} 
void CFAMAttachment::OnAttachListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAMAttachment::OnAttachListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAttachment::OnAttachListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (pMF->m_wndAssetDetail.GetMode() != VM_NONE)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		m_wndAttachList.BeginLoad(); 
		m_wndAttachList.DeleteAllItems(); 
		int nCount = 0;
		szSQL.Format(_T("SELECT faa_idx AS fIndex, faa_filename AS FileName, faa_type AS FileType ")\
			_T("FROM fam_attachment WHERE faa_assetno='%s' AND faa_org_id = '%s' ORDER BY faa_idx"), pMF->m_wndAssetDetail.m_szAssetNo, pMF->GetModuleID()); 
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			m_wndAttachList.AddItems(
				rs.GetValue(_T("fIndex")), 
				//rs.GetValue(_T("AssetNo")), 
				rs.GetValue(_T("FileName")), 
				rs.GetValue(_T("FileType")), NULL);
			rs.MoveNext();
		}
		m_wndAttachList.EndLoad(); 
		return nCount;
	}
	else
		m_wndAttachList.DeleteAllItems();
	return 0;
}
int CFAMAttachment::OnAddFAMAttachment()
{
 	//if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		//return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	//SetMode(VM_ADD);
	pMF->m_wndAssetDetail.CheckUser();
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("18.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
			return -1;
		//CFAMAttachmentDialog dlg(pMF);
		//dlg.m_szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		//dlg.SetMode(VM_ADD);
		TCHAR szFilter[] = _T("Word files (*.doc)|*.doc|Word 2010 files (*.docx)|*.docx|PDF files (*.pdf)|*.pdf|Text files (*.txt)|*.txt|All files (*.*)|*.*||"); 
		CFileDialog dlg(TRUE, _T("doc"), _T("*.doc"), OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilter);
		dlg.m_pOFN->lpstrTitle = _T("Select file");
		//CString szValue;
		if (dlg.DoModal() == IDOK)
		{
			CString szFileName = dlg.GetFileName();
			//file name include file type
			CRecord rs(&pMF->m_db);
			CString szSQL, szFileTitle;
			szSQL.Format(_T("SELECT coalesce(max(faa_idx), 0)+1 FROM fam_attachment WHERE faa_assetno='%s' AND faa_org_id = '%s'"), pMF->m_wndAssetDetail.m_szAssetNo, pMF->GetModuleID());
			rs.ExecSQL(szSQL);
			int nIndex = rs.GetIntValue();
			szFileTitle.Format(_T("%d"), nIndex);
			if (UploadDocument(szFileName, szFileTitle, dlg.GetFileExt()))
			{
				szSQL.Format(_T("INSERT INTO fam_attachment")\
							_T(" (faa_createdby, faa_createddate, faa_updatedby, faa_updateddate, faa_assetno, faa_idx, faa_filename, faa_type, faa_org_id)")\
							_T(" VALUES('%s', SYS_TIMESTAMP(), '%s', SYS_TIMESTAMP(), '%s', %d, '%s', '%s', '%s')"),
							pMF->GetCurrentUser(), pMF->GetCurrentUser(), pMF->m_wndAssetDetail.m_szAssetNo, nIndex, szFileName, _T(""), pMF->GetModuleID());
				int ret = pMF->ExecSQL(szSQL);
				if (ret >= 0)
				{
					OnAttachListLoadData();
					m_wndAttachList.SetCurSel(m_wndAttachList.GetItemCount() - 1);
				}
			}
			//MessageBox(szSQL);
			//m_wndAttachList.SetFocus();
			//m_wndAttachList.SetItemState(m_wndAttachList.GetItemCount() - 1, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
			//m_wndAttachList.EnsureVisible(m_wndAttachList.GetItemCount() - 1, 1);
			}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0; 
}
int CFAMAttachment::OnEditFAMAttachment(){
 	//if(GetMode() != VM_VIEW) 
 		//return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
		return -1;
	int nSel = m_wndAttachList.GetCurSel();
	if (nSel < 0)
		return -1;
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser())
	{
		int nIndex = ToInt(m_wndAttachList.GetItemText(nSel, 0));
		CFAMAttachmentDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.m_nIndex = nIndex;
		dlg.SetMode(VM_EDIT);
		if (dlg.DoModal() == IDOK)
		{
			OnAttachListLoadData();
			m_wndAttachList.SetCurSel(nSel);
			//m_wndAttachList.SetFocus();
			//m_wndAttachList.SetItemState(nSel, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
			//m_wndAttachList.EnsureVisible(nSel, 1);
		}
 		//SetMode(VM_EDIT);
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;  
}
int CFAMAttachment::OnDeleteFAMAttachment(){
 	//if(GetMode() != VM_VIEW) 
 		//return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
		return -1;
	int nSel = m_wndAttachList.GetCurSel();
	if (nSel < 0)
		return -1;
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("18.02")) || pMF->GetCurrentUser() == _T("admin"))
	{
		CString szIndex = m_wndAttachList.GetItemText(nSel, 0);
		CString szFile = m_wndAttachList.GetItemText(nSel, 1);
 		CString szSQL; 
 		if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return -1;
		szSQL.Format(_T("DELETE FROM fam_attachment WHERE faa_assetno='%s' AND faa_idx=%d AND faa_org_id = '%s'"), pMF->m_wndAssetDetail.m_szAssetNo, ToInt(szIndex), pMF->GetModuleID());
 		int ret = pMF->ExecSQL(szSQL); 
 		if(ret >= 0)
		{ 
			OnAttachListLoadData();
			TCHAR szTempPath[MAX_PATH];
			::GetTempPath(MAX_PATH, szTempPath);
			///LPTSTR szFileTitle = _T("");
			//UnMarkString(szFile, szFileTitle);
			/*for (int i = szFile.GetLength() - 1; i >= 0; i--)
			{
				if (szFile.GetAt(i) == _T('.'))
				{
					dIndex = i;
					break;
				}
			}*/
			int dIndex = -1;
			CString szPath;
			dIndex = szFile.ReverseFind(_T('.'));
			szPath.Format(_T("%s/%s"), szTempPath, szIndex + szFile.Right(szFile.GetLength() - dIndex));
			UnlinkDocument(szIndex, szFile.Right(szFile.GetLength() - dIndex - 1));
			::DeleteFile(szPath);
 			//SetMode(VM_NONE); 
 			//OnCancelFAMAttachment(); 
 		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMAttachment::OnSaveFAMAttachment()
{
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

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFAMAttachmentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMAttachment::OnCancelFAMAttachment(){
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
int CFAMAttachment::OnFAMAttachmentListLoadData(){
	return 0;

}
int CFAMAttachment::SaveDocumentFile()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
		return -1;
	pMF->m_wndAssetDetail.CheckUser();
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("18.03")) || pMF->GetCurrentUser() == _T("admin"))
	{
		int nSel = m_wndAttachList.GetCurSel();
		if (nSel < 0)
			return -1;
		CString szFileTitle = m_wndAttachList.GetItemText(nSel, 0);
		CString szFile = m_wndAttachList.GetItemText(nSel, 1);
		CStringArray strArray;
		CString szFilter;
		int dIndex = -1;
		strArray.SetSize(5);
		strArray[0] = _T("Text Files (*.txt)|*.txt||");
		strArray[1] = _T("Word Files (*.doc)|*.doc||");
		strArray[2] = _T("Word 2010 (*.docx)|*.docx||");
		strArray[3] = _T("PDF Files (*.pdf)|*.pdf||");
		strArray[4] = _T("All Files (*.*)|*.*||");
		/*for (int i = szFile.GetLength() - 1; i >= 0; i--)
		{
			if (szFile.GetAt(i) == _T('.'))
			{
				dIndex = i;
				break;
			}
		}*/
		//_msg(_T("%d"), dIndex);
		dIndex = szFile.ReverseFind(_T('.'));
		CString szExtension = szFile.Right(szFile.GetLength() - dIndex - 1);
		if (szExtension.MakeLower().Trim() == _T("txt"))
			szFilter = strArray[0];
		else if (szExtension.MakeLower().Trim() == _T("doc"))
			szFilter = strArray[1];
		else if (szExtension.MakeLower().Trim() == _T("docx"))
			szFilter = strArray[2];
		else if (szExtension.MakeLower().Trim() == _T("pdf"))
			szFilter = strArray[3];
		else
			szFilter = strArray[4];
		CFileDialog dlg(FALSE, szExtension.MakeLower().Trim(), _T("*.") + szExtension.MakeLower().Trim(), 
						OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilter);
		dlg.m_pOFN->lpstrTitle = _T("Save file");
		if (dlg.DoModal() == IDOK)
		{
			DownloadDocument(dlg.GetPathName(), szFileTitle, szExtension);
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMAttachment::OpenDocumentFile()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
		return -1;
	pMF->m_wndAssetDetail.CheckUser();
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("18.04")) || pMF->GetCurrentUser() == _T("admin"))
	{
		int nSel = m_wndAttachList.GetCurSel();
		if (nSel < 0)
			return -1;
		TCHAR szTempPath[MAX_PATH];
		CString szPath;
		int dIndex = -1;
		::GetTempPath(MAX_PATH, szTempPath);
		CString szFileTitle = m_wndAttachList.GetItemText(nSel, 0);
		CString szFile = m_wndAttachList.GetItemText(nSel, 1);
		//TCHAR szFileName[MAX_PATH];
		//UnMarkString(szFile, szFileName);
		//szFileName[szFile.GetLength()] = _T('\0');
		/*for (int i = szFile.GetLength() - 1; i >= 0; i--)
		{
			if (szFile.GetAt(i) == _T('.'))
			{
				dIndex = i;
				break;
			}
		}*/
		dIndex = szFile.ReverseFind(_T('.'));
		//TCHAR szFileTitle[MAX_PATH];
		//UnMarkString(szFile.Left(dIndex), szFileTitle);
		//szFileTitle[szFile.Left(dIndex).GetLength()] = _T('\0');
		szPath.Format(_T("%s%s"), szTempPath, szFileTitle + szFile.Right(szFile.GetLength() - dIndex));
		DownloadDocument(szPath, szFileTitle, szFile.Right(szFile.GetLength() - dIndex - 1));
		ULONG_PTR ret;
		ret = reinterpret_cast<ULONG_PTR>(ShellExecute(AfxGetMainWnd()->m_hWnd, _T("open"), szPath, NULL, NULL, SW_SHOW));
		if (ret <= 32)
		{
			ShowMessageBox(_T("Unable to open file"), MB_OK | MB_ICONERROR);
			::DeleteFile(szPath);
			return 1;
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
BOOL CFAMAttachment::UploadDocument(CString szFileName, CString szFileTitle, CString szExtension)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_wndAssetDetail.m_szAssetNo.IsEmpty())
		return FALSE;
	CString szName;
	szName.Format(_T("%s_%s_%s_%s"), pMF->GetModuleID(), pMF->m_wndAssetDetail.m_szAssetNo, szFileTitle, szExtension);
	MessageBox(szName);
	AfxGetApp()->BeginWaitCursor();
	pMF->lo_unlink(szName);
	pMF->lo_import(szName, szFileName);
	AfxGetApp()->EndWaitCursor();
	return TRUE;
}
BOOL CFAMAttachment::DownloadDocument(CString szPath, CString szFileTitle, CString szExtension)
{ 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szName, szFileName;
	if (pMF->m_wndAssetDetail.m_szAssetNo.IsEmpty())
		return FALSE;
	
	AfxGetApp()->BeginWaitCursor();

	szFileName.Format(_T("%s"), szPath);
	szName.Format(_T("%s_%s_%s_%s"), pMF->GetModuleID(), pMF->m_wndAssetDetail.m_szAssetNo, szFileTitle, szExtension);
	MessageBox(szName);
	SetFileAttributes(szFileName, FILE_ATTRIBUTE_NORMAL);
	::DeleteFile(szFileName);
	if(pMF->lo_export(szName, szFileName))
	{
		AfxGetApp()->EndWaitCursor();
		return TRUE;
	}
	AfxGetApp()->EndWaitCursor();
	return FALSE;
}
BOOL CFAMAttachment::UnlinkDocument(CString szFileTitle, CString szExtension)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_wndAssetDetail.m_szAssetNo .IsEmpty())
		return FALSE;
	CString szName;
	szName.Format(_T("%s_%s_%s_%s"), pMF->GetModuleID(), pMF->m_wndAssetDetail.m_szAssetNo, szFileTitle, szExtension);
	pMF->lo_unlink(szName);
	return TRUE;
}