static BOOL _OnUploadImageFnc(CWnd *pWnd, CString szFileName){
	return ((CHRMEmployee*)pWnd->GetParent())->UploadImage(szFileName);
}

static BOOL _OnUnlinkImageFnc(CWnd *pWnd, CString szFileName){
	return ((CHRMEmployee*)pWnd->GetParent())->UnlinkImage(szFileName);
}

//Trong ham OnSetWindowEvents
m_wndPhoto.SetAddImageFnc(_OnAddImageFnc);
m_wndPhoto.SetRemoveImageFnc(_OnRemoveImageFnc);


//Upload anh len server
//m_szID: Ma
//
BOOL CHRMEmployee::UploadImage(CString szFileName)
{
	if(m_szID.IsEmpty())
		return FALSE;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szName;
	szName.Format(_T("%s_%s"), pMF->GetModuleID(), m_szID);
	pMF->UnlinkFile(szName);
	pMF->UploadFile(szName, szFileName);
	return TRUE;
}

BOOL CHRMEmployee::UnlinkImage(CString szFileName)
{
	if(m_szID.IsEmpty())
		return FALSE;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szName;
	szName.Format(_T("%s_%s"), pMF->GetModuleID(), m_szID);
	pMF->UnlinkFile(szName);
	return TRUE;
}



BOOL CHRMEmployee::DownloadImage()
{
	if(m_szID.IsEmpty())
		return FALSE;

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szName, szFileName;
	TCHAR szPath[MAX_PATH];
	::GetTempPath(MAX_PATH, szPath);

	szFileName.Format(_T("%s\\%s_image.png"), szPath, pMF->GetModuleID());
	szName.Format(_T("%s_%s"), pMF->GetModuleID(), m_szID);
	m_wndPhoto.Release();
	
	SetFileAttributes(szFileName, FILE_ATTRIBUTE_NORMAL);
	::DeleteFile(szFileName);
	if(pMF->DownloadFile(szName, szFileName))
	{
		m_wndPhoto.SetFileName(szFileName);
		return TRUE;
	}
	else
		m_wndPhoto.SetFileName(_T(""));
	return FALSE;
}
