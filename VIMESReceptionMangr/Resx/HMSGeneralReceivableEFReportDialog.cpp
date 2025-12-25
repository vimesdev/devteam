#include "HMSGeneralReceivableEFReportDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralReceivableEFReportDialog *pVw = (CHMSGeneralReceivableEFReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralReceivableEFReportDialog *pVw = (CHMSGeneralReceivableEFReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralReceivableEFReportDialog *pVw = (CHMSGeneralReceivableEFReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnAddHMSGeneralReceivableEFReportDialog();
} 
static int _OnEditHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnEditHMSGeneralReceivableEFReportDialog();
} 
static int _OnDeleteHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnDeleteHMSGeneralReceivableEFReportDialog();
} 
static int _OnSaveHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnSaveHMSGeneralReceivableEFReportDialog();
} 
static int _OnCancelHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnCancelHMSGeneralReceivableEFReportDialog();
} 
CHMSGeneralReceivableEFReportDialog::CHMSGeneralReceivableEFReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMSGeneralReceivableEFReportDialog::~CHMSGeneralReceivableEFReportDialog(){
}
void CHMSGeneralReceivableEFReportDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrint.Create(this, _T("&Print"), 80, 65, 170, 90);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 175, 65, 265, 90);
	m_wndClose.Create(this, _T("&Close"), 270, 65, 360, 90);

}
void CHMSGeneralReceivableEFReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CHMSGeneralReceivableEFReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSGeneralReceivableEFReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSGeneralReceivableEFReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralReceivableEFReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralReceivableEFReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSGeneralReceivableEFReportDialog::SetMode(int nMode){
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
/*void CHMSGeneralReceivableEFReportDialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralReceivableEFReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralReceivableEFReportDialog::OnToDateChange(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralReceivableEFReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralReceivableEFReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralReceivableEFReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralReceivableEFReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGeneralReceivableEFReportDialog::OnAddHMSGeneralReceivableEFReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralReceivableEFReportDialog::OnEditHMSGeneralReceivableEFReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralReceivableEFReportDialog::OnDeleteHMSGeneralReceivableEFReportDialog(){
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
 		OnCancelHMSGeneralReceivableEFReportDialog(); 
 	}
	return 0;
}
int CHMSGeneralReceivableEFReportDialog::OnSaveHMSGeneralReceivableEFReportDialog(){
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
 		//OnHMSGeneralReceivableEFReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralReceivableEFReportDialog::OnCancelHMSGeneralReceivableEFReportDialog(){
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
int CHMSGeneralReceivableEFReportDialog::OnHMSGeneralReceivableEFReportDialogListLoadData(){
	return 0;
}
