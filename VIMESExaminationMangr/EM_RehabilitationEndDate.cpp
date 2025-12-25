#include "EM_RehabilitationEndDate.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CEM_RehabilitationEndDate *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CEM_RehabilitationEndDate *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CEM_RehabilitationEndDate *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CEM_RehabilitationEndDate *)pWnd)->OnEndDateCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CEM_RehabilitationEndDate *pVw = (CEM_RehabilitationEndDate *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEM_RehabilitationEndDate *pVw = (CEM_RehabilitationEndDate *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddEM_RehabilitationEndDateFnc(CWnd *pWnd){
	 return ((CEM_RehabilitationEndDate*)pWnd)->OnAddEM_RehabilitationEndDate();
} 
static int _OnEditEM_RehabilitationEndDateFnc(CWnd *pWnd){
	 return ((CEM_RehabilitationEndDate*)pWnd)->OnEditEM_RehabilitationEndDate();
} 
static int _OnDeleteEM_RehabilitationEndDateFnc(CWnd *pWnd){
	 return ((CEM_RehabilitationEndDate*)pWnd)->OnDeleteEM_RehabilitationEndDate();
} 
static int _OnSaveEM_RehabilitationEndDateFnc(CWnd *pWnd){
	 return ((CEM_RehabilitationEndDate*)pWnd)->OnSaveEM_RehabilitationEndDate();
} 
static int _OnCancelEM_RehabilitationEndDateFnc(CWnd *pWnd){
	 return ((CEM_RehabilitationEndDate*)pWnd)->OnCancelEM_RehabilitationEndDate();
} 
CEM_RehabilitationEndDate::CEM_RehabilitationEndDate(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEM_RehabilitationEndDate::~CEM_RehabilitationEndDate(){
}
void CEM_RehabilitationEndDate::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 375, 125);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 160, 55);
	m_wndDocumentNo.Create(this,165, 30, 365, 55);
	m_wndDocumentNo.SetReadOnly(TRUE);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 160, 85);
	m_wndPatientName.Create(this,165, 60, 365, 85);
	m_wndPatientName.SetReadOnly(TRUE);
	m_wndEndDateLabel.Create(this, _T("End Date"), 10, 90, 160, 115);
	m_wndEndDate.Create(this,165, 90, 365, 115); 
	m_wndOK.Create(this, _T("&OK"), 180, 130, 270, 155);
	m_wndCancel.Create(this, _T("&Cancel"), 275, 130, 365, 155);

}
void CEM_RehabilitationEndDate::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	//m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndEndDate.SetCheckValue(true);

}
void CEM_RehabilitationEndDate::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_szEndDate = pMF->GetSysDate();
	SetMode(VM_ADD);
	GetDataToScreen();

}
void CEM_RehabilitationEndDate::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);

}
void CEM_RehabilitationEndDate::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT he_docno AS docno, get_patientname(he_docno) AS patientname FROM hms_exam WHERE he_docno = %d "), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("patientname"), m_szPatientName);
		SetMode(VM_EDIT);
	}
	SetMode(VM_ADD);

}
void CEM_RehabilitationEndDate::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CEM_RehabilitationEndDate::SetDefaultValues(){

	m_nDocumentNo = 0;
	m_szPatientName.Empty();
	m_szEndDate.Empty();

}
int CEM_RehabilitationEndDate::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CEM_RehabilitationEndDate::OnDocumentNoChange(){
	
} */
/*void CEM_RehabilitationEndDate::OnDocumentNoSetfocus(){
	
} */
/*void CEM_RehabilitationEndDate::OnDocumentNoKillfocus(){
	
} */
int CEM_RehabilitationEndDate::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CEM_RehabilitationEndDate::OnPatientNameChange(){
	
} */
/*void CEM_RehabilitationEndDate::OnPatientNameSetfocus(){
	
} */
/*void CEM_RehabilitationEndDate::OnPatientNameKillfocus(){
	
} */
int CEM_RehabilitationEndDate::OnPatientNameCheckValue(){
	return 0;
} 
/*void CEM_RehabilitationEndDate::OnEndDateChange(){
	
} */
/*void CEM_RehabilitationEndDate::OnEndDateSetfocus(){
	
} */
/*void CEM_RehabilitationEndDate::OnEndDateKillfocus(){
	
} */
int CEM_RehabilitationEndDate::OnEndDateCheckValue(){
	return 0;
}
#include "HMSReportForms/PrintForms.h"
void CEM_RehabilitationEndDate::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CPrintForms printer;
	printer.EM_OnPrintRehabilitationCertify(m_nDocumentNo, m_szEndDate);
	
} 
void CEM_RehabilitationEndDate::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CEM_RehabilitationEndDate::OnAddEM_RehabilitationEndDate(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEM_RehabilitationEndDate::OnEditEM_RehabilitationEndDate(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEM_RehabilitationEndDate::OnDeleteEM_RehabilitationEndDate(){
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
 		OnCancelEM_RehabilitationEndDate();
 	}
	return 0;
}
int CEM_RehabilitationEndDate::OnSaveEM_RehabilitationEndDate(){
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
 		//OnEM_RehabilitationEndDateListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEM_RehabilitationEndDate::OnCancelEM_RehabilitationEndDate(){
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
int CEM_RehabilitationEndDate::OnEM_RehabilitationEndDateListLoadData(){
	return 0;
}
