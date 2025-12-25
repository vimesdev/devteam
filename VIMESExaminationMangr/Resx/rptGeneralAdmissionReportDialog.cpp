#include "rptGeneralAdmissionReportDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralAdmissionReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralAdmissionReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CrptGeneralAdmissionReportDialog *pVw = (CrptGeneralAdmissionReportDialog *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptGeneralAdmissionReportDialog *pVw = (CrptGeneralAdmissionReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddrptGeneralAdmissionReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportDialog*)pWnd)->OnAddrptGeneralAdmissionReportDialog();
} 
static int _OnEditrptGeneralAdmissionReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportDialog*)pWnd)->OnEditrptGeneralAdmissionReportDialog();
} 
static int _OnDeleterptGeneralAdmissionReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportDialog*)pWnd)->OnDeleterptGeneralAdmissionReportDialog();
} 
static int _OnSaverptGeneralAdmissionReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportDialog*)pWnd)->OnSaverptGeneralAdmissionReportDialog();
} 
static int _OnCancelrptGeneralAdmissionReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportDialog*)pWnd)->OnCancelrptGeneralAdmissionReportDialog();
} 
CrptGeneralAdmissionReportDialog::CrptGeneralAdmissionReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CrptGeneralAdmissionReportDialog::~CrptGeneralAdmissionReportDialog(){
}
void CrptGeneralAdmissionReportDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54); 
	m_wndPreview.Create(this, _T("&Preview"), 196, 65, 271, 90);
	m_wndExport.Create(this, _T("&Export"), 275, 65, 350, 90);

}
void CrptGeneralAdmissionReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CrptGeneralAdmissionReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CrptGeneralAdmissionReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptGeneralAdmissionReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptGeneralAdmissionReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptGeneralAdmissionReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptGeneralAdmissionReportDialog::SetMode(int nMode){
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
/*void CrptGeneralAdmissionReportDialog::OnFromDateChange(){
	
} */
/*void CrptGeneralAdmissionReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptGeneralAdmissionReportDialog::OnFromDateKillfocus(){
	
} */
int CrptGeneralAdmissionReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptGeneralAdmissionReportDialog::OnToDateChange(){
	
} */
/*void CrptGeneralAdmissionReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptGeneralAdmissionReportDialog::OnToDateKillfocus(){
	
} */
int CrptGeneralAdmissionReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptGeneralAdmissionReportDialog::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptGeneralAdmissionReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptGeneralAdmissionReportDialog::OnAddrptGeneralAdmissionReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptGeneralAdmissionReportDialog::OnEditrptGeneralAdmissionReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptGeneralAdmissionReportDialog::OnDeleterptGeneralAdmissionReportDialog(){
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
 		OnCancelrptGeneralAdmissionReportDialog(); 
 	}
	return 0;
}
int CrptGeneralAdmissionReportDialog::OnSaverptGeneralAdmissionReportDialog(){
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
 		//OnrptGeneralAdmissionReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptGeneralAdmissionReportDialog::OnCancelrptGeneralAdmissionReportDialog(){
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
int CrptGeneralAdmissionReportDialog::OnrptGeneralAdmissionReportDialogListLoadData(){
	return 0;
}
