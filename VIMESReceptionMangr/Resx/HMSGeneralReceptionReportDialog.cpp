#include "HMSGeneralReceptionReportDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralReceptionReportDialog *pVw = (CHMSGeneralReceptionReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralReceptionReportDialog *pVw = (CHMSGeneralReceptionReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralReceptionReportDialog *pVw = (CHMSGeneralReceptionReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnAddHMSGeneralReceptionReportDialog();
} 
static int _OnEditHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnEditHMSGeneralReceptionReportDialog();
} 
static int _OnDeleteHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnDeleteHMSGeneralReceptionReportDialog();
} 
static int _OnSaveHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnSaveHMSGeneralReceptionReportDialog();
} 
static int _OnCancelHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnCancelHMSGeneralReceptionReportDialog();
} 
CHMSGeneralReceptionReportDialog::CHMSGeneralReceptionReportDialog(){

	m_nDlgWidth = 370;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMSGeneralReceptionReportDialog::~CHMSGeneralReceptionReportDialog(){
}
void CHMSGeneralReceptionReportDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrint.Create(this, _T("&Print"), 80, 65, 170, 90);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 175, 65, 265, 90);
	m_wndClose.Create(this, _T("&Close"), 270, 65, 360, 90);

}
void CHMSGeneralReceptionReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CHMSGeneralReceptionReportDialog::OnSetWindowEvents(){
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
void CHMSGeneralReceptionReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSGeneralReceptionReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralReceptionReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralReceptionReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSGeneralReceptionReportDialog::SetMode(int nMode){
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
/*void CHMSGeneralReceptionReportDialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralReceptionReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralReceptionReportDialog::OnToDateChange(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralReceptionReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralReceptionReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralReceptionReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralReceptionReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGeneralReceptionReportDialog::OnAddHMSGeneralReceptionReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralReceptionReportDialog::OnEditHMSGeneralReceptionReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralReceptionReportDialog::OnDeleteHMSGeneralReceptionReportDialog(){
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
 		OnCancelHMSGeneralReceptionReportDialog(); 
 	}
	return 0;
}
int CHMSGeneralReceptionReportDialog::OnSaveHMSGeneralReceptionReportDialog(){
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
 		//OnHMSGeneralReceptionReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralReceptionReportDialog::OnCancelHMSGeneralReceptionReportDialog(){
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
int CHMSGeneralReceptionReportDialog::OnHMSGeneralReceptionReportDialogListLoadData(){
	return 0;
}
