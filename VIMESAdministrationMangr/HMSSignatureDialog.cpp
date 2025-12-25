#include "HMSSignatureDialog.h"
#include "MainFrm.h"

static int _OnAddHMSSignatureDialogFnc(CWnd *pWnd){
	 return ((CHMSSignatureDialog*)pWnd)->OnAddHMSSignatureDialog();
} 
static int _OnEditHMSSignatureDialogFnc(CWnd *pWnd){
	 return ((CHMSSignatureDialog*)pWnd)->OnEditHMSSignatureDialog();
} 
static int _OnDeleteHMSSignatureDialogFnc(CWnd *pWnd){
	 return ((CHMSSignatureDialog*)pWnd)->OnDeleteHMSSignatureDialog();
} 
static int _OnSaveHMSSignatureDialogFnc(CWnd *pWnd){
	 return ((CHMSSignatureDialog*)pWnd)->OnSaveHMSSignatureDialog();
} 
static int _OnCancelHMSSignatureDialogFnc(CWnd *pWnd){
	 return ((CHMSSignatureDialog*)pWnd)->OnCancelHMSSignatureDialog();
} 
CHMSSignatureDialog::CHMSSignatureDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 405;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CHMSSignatureDialog::~CHMSSignatureDialog(){
}
void CHMSSignatureDialog::OnCreateComponents()
{
	m_wndImage.Create(this, 5, 5, 395, 295);
}
void CHMSSignatureDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndImage.SetAutoResize(TRUE);

	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_hms_other_feeTbl.SetTableName(_T("hms_other_fee"));
	m_hms_other_feeTbl.AddField(_T("hfe_createdby"), dfText, 15); 
	m_hms_other_feeTbl.AddField(_T("hfe_createddate"), dfDateTime); 
	m_hms_other_feeTbl.AddField(_T("hfe_updatedby"), dfText, 15); 
	m_hms_other_feeTbl.AddField(_T("hfe_updateddate"), dfDateTime); 
	m_hms_other_feeTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_other_feeTbl.AddField(_T("hfe_roomid"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_idx"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_other_feeTbl.AddField(_T("hfe_group"), dfText, 7); 
	m_hms_other_feeTbl.AddField(_T("hfe_entrydate"), dfDate); 
	m_hms_other_feeTbl.AddField(_T("hfe_invoiceno"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_status"), dfText, 1); 
	m_hms_other_feeTbl.AddField(_T("hfe_itemid"), dfText, 13); 
	m_hms_other_feeTbl.AddField(_T("hfe_qty"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_unitprice"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_cost"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_discount"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_patdebt"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_patpaid"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_unpaid"), dfDouble); 

}
void CHMSSignatureDialog::OnSetWindowEvents()
{
	DownloadImage();
}
void CHMSSignatureDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSSignatureDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSignatureDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_other_feeTbl.SetValue(_T("hfe_createdby"), pMF->GetCurrentUser());
	m_hms_other_feeTbl.SetValue(_T("hfe_createddate"), pMF->GetSysDateTime());
	m_hms_other_feeTbl.SetValue(_T("hfe_updatedby"), pMF->GetCurrentUser());
	m_hms_other_feeTbl.SetValue(_T("hfe_updateddate"), pMF->GetSysDateTime());

}
void CHMSSignatureDialog::SetDefaultValues(){


}
int CHMSSignatureDialog::SetMode(int nMode){
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
int CHMSSignatureDialog::OnAddHMSSignatureDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSignatureDialog::OnEditHMSSignatureDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSignatureDialog::OnDeleteHMSSignatureDialog(){
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
 		OnCancelHMSSignatureDialog(); 
 	}
	return 0;
}
int CHMSSignatureDialog::OnSaveHMSSignatureDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_other_feeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_other_feeTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSSignatureDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSignatureDialog::OnCancelHMSSignatureDialog(){
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
int CHMSSignatureDialog::OnHMSSignatureDialogListLoadData(){
	return 0;
}

BOOL CHMSSignatureDialog::DownloadImage()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szName;
	TCHAR szPath[MAX_PATH];
	::GetTempPath(MAX_PATH, szPath);
	
	AfxGetApp()->BeginWaitCursor();

	int nIdx = -1;

	if (m_szFileName.ReverseFind(_T('.')) > 0)
	{
		nIdx = m_szFileName.ReverseFind(_T('.'));
		szName = m_szFileName.Left(nIdx);
	}
	
	m_wndImage.Release();
	
	/*SetFileAttributes(m_szFileName, FILE_ATTRIBUTE_NORMAL);
	::DeleteFile(m_szFileName);*/

	//_msg(_T("%s - %s"), szName, m_szFileName);

	if (nIdx < m_szFileName.GetLength() - 1)
	{
		//_msg(_T("%s_%s"), szName, szFileName);
		//m_wndImage.SetFileName(m_szFileName, true);
		m_wndImage.AddHBITMAP(pMF->GetSignatureImage(m_szUserID));
		
		AfxGetApp()->EndWaitCursor();
		return TRUE;
	}
	else
	{
		m_wndImage.SetFileName(_T(""));
		m_wndImage.Invalidate();
	}

	AfxGetApp()->EndWaitCursor();
	return FALSE;

}