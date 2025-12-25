#include "HMSUpdateInformation.h"
#include "MainFrm.h"
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSUpdateInformation *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateInformation *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateInformation *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateInformation *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSUpdateInformation *pVw = (CHMSUpdateInformation *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMSUpdateInformationFnc(CWnd *pWnd){
	 return ((CHMSUpdateInformation*)pWnd)->OnAddHMSUpdateInformation();
} 
static int _OnEditHMSUpdateInformationFnc(CWnd *pWnd){
	 return ((CHMSUpdateInformation*)pWnd)->OnEditHMSUpdateInformation();
} 
static int _OnDeleteHMSUpdateInformationFnc(CWnd *pWnd){
	 return ((CHMSUpdateInformation*)pWnd)->OnDeleteHMSUpdateInformation();
} 
static int _OnSaveHMSUpdateInformationFnc(CWnd *pWnd){
	 return ((CHMSUpdateInformation*)pWnd)->OnSaveHMSUpdateInformation();
} 
static int _OnCancelHMSUpdateInformationFnc(CWnd *pWnd){
	 return ((CHMSUpdateInformation*)pWnd)->OnCancelHMSUpdateInformation();
} 
CHMSUpdateInformation::CHMSUpdateInformation(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSUpdateInformation::~CHMSUpdateInformation(){
}
void CHMSUpdateInformation::OnCreateComponents(){
	m_wndUpdateInformation.Create(this, _T("Update Information"), 5, 5, 505, 60);
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 30, 90, 55);
	m_wndDiagnostic.Create(this,95, 30, 395, 55); 
	m_wndUpdate.Create(this, _T("&Update"), 400, 29, 500, 54);

}
void CHMSUpdateInformation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiagnostic.SetLimitText(254);
	m_wndDiagnostic.SetCheckValue(true);

}
void CHMSUpdateInformation::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hcr_maindisease FROM hms_clinical_record WHERE hcr_docno = %ld"), m_nDocNo);
	rs.ExecSQL(szSQL);
	m_szDiagnostic = rs.GetStringValue();
	m_szDiagnostic_ = m_szDiagnostic;
	UpdateData(0);
}
void CHMSUpdateInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);

}
void CHMSUpdateInformation::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSUpdateInformation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUpdateInformation::SetDefaultValues(){

	m_szDiagnostic.Empty();

}
int CHMSUpdateInformation::SetMode(int nMode){
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
/*void CHMSUpdateInformation::OnDiagnosticChange(){
	
} */
/*void CHMSUpdateInformation::OnDiagnosticSetfocus(){
	
} */
/*void CHMSUpdateInformation::OnDiagnosticKillfocus(){
	
} */
int CHMSUpdateInformation::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSUpdateInformation::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_maindisease = '%s' WHERE hcr_docno = %ld"), m_szDiagnostic, m_nDocNo);
	if (pMF->ExecSQL(szSQL) > 0){
		CString szEvent, szDesc;
		szEvent = _T("Edit Terminated Diagnostic");
		szDesc.Format(_T("SHS:%ld|CDC:%s"), m_nDocNo, m_szDiagnostic_);
		pMF->SystemLog(szEvent, szDesc);
		CGuiDialog::OnOK();
	}
} 
int CHMSUpdateInformation::OnAddHMSUpdateInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUpdateInformation::OnEditHMSUpdateInformation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUpdateInformation::OnDeleteHMSUpdateInformation(){
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
 		OnCancelHMSUpdateInformation();
 	}
	return 0;
}
int CHMSUpdateInformation::OnSaveHMSUpdateInformation(){
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
 		//OnHMSUpdateInformationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSUpdateInformation::OnCancelHMSUpdateInformation(){
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
int CHMSUpdateInformation::OnHMSUpdateInformationListLoadData(){
	return 0;
}
