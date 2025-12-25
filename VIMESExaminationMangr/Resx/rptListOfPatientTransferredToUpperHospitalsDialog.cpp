#include "rptListOfPatientTransferredToUpperHospitalsDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CrptListOfPatientTransferredToUpperHospitalsDialog *pVw = (CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptListOfPatientTransferredToUpperHospitalsDialog *pVw = (CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddrptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnAddrptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnEditrptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnEditrptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnDeleterptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnDeleterptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnSaverptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnSaverptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnCancelrptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnCancelrptListOfPatientTransferredToUpperHospitalsDialog();
} 
CrptListOfPatientTransferredToUpperHospitalsDialog::CrptListOfPatientTransferredToUpperHospitalsDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CrptListOfPatientTransferredToUpperHospitalsDialog::~CrptListOfPatientTransferredToUpperHospitalsDialog(){
}
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54); 
	m_wndPreview.Create(this, _T("&Preview"), 195, 65, 270, 90);
	m_wndExport.Create(this, _T("&Export"), 275, 65, 350, 90);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnSetWindowEvents(){
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
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptListOfPatientTransferredToUpperHospitalsDialog::SetMode(int nMode){
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
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateChange(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateSetfocus(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateKillfocus(){
	
} */
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateChange(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateSetfocus(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateKillfocus(){
	
} */
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnAddrptListOfPatientTransferredToUpperHospitalsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnEditrptListOfPatientTransferredToUpperHospitalsDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnDeleterptListOfPatientTransferredToUpperHospitalsDialog(){
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
 		OnCancelrptListOfPatientTransferredToUpperHospitalsDialog(); 
 	}
	return 0;
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnSaverptListOfPatientTransferredToUpperHospitalsDialog(){
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
 		//OnrptListOfPatientTransferredToUpperHospitalsDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnCancelrptListOfPatientTransferredToUpperHospitalsDialog(){
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
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnrptListOfPatientTransferredToUpperHospitalsDialogListLoadData(){
	return 0;
}
