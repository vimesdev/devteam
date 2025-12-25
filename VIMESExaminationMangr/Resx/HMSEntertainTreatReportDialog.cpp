#include "HMSEntertainTreatReportDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSEntertainTreatReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEntertainTreatReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSEntertainTreatReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEntertainTreatReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSEntertainTreatReportDialog *pVw = (CHMSEntertainTreatReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEntertainTreatReportDialog *pVw = (CHMSEntertainTreatReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatReportDialog*)pWnd)->OnAddHMSEntertainTreatReportDialog();
} 
static int _OnEditHMSEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatReportDialog*)pWnd)->OnEditHMSEntertainTreatReportDialog();
} 
static int _OnDeleteHMSEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatReportDialog*)pWnd)->OnDeleteHMSEntertainTreatReportDialog();
} 
static int _OnSaveHMSEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatReportDialog*)pWnd)->OnSaveHMSEntertainTreatReportDialog();
} 
static int _OnCancelHMSEntertainTreatReportDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatReportDialog*)pWnd)->OnCancelHMSEntertainTreatReportDialog();
} 
CHMSEntertainTreatReportDialog::CHMSEntertainTreatReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
CHMSEntertainTreatReportDialog::~CHMSEntertainTreatReportDialog(){
}
void CHMSEntertainTreatReportDialog::OnCreateComponents(){
	m_wndReportConditio.Create(this, _T("Report Condition"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrint.Create(this, _T("&Print"), 195, 65, 275, 90);
	m_wndClose.Create(this, _T("&Close"), 280, 65, 360, 90);

}
void CHMSEntertainTreatReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CHMSEntertainTreatReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSEntertainTreatReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSEntertainTreatReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEntertainTreatReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEntertainTreatReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSEntertainTreatReportDialog::SetMode(int nMode){
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
/*void CHMSEntertainTreatReportDialog::OnFromDateChange(){
	
} */
/*void CHMSEntertainTreatReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSEntertainTreatReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSEntertainTreatReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSEntertainTreatReportDialog::OnToDateChange(){
	
} */
/*void CHMSEntertainTreatReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSEntertainTreatReportDialog::OnToDateKillfocus(){
	
} */
int CHMSEntertainTreatReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSEntertainTreatReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEntertainTreatReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEntertainTreatReportDialog::OnAddHMSEntertainTreatReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSEntertainTreatReportDialog::OnEditHMSEntertainTreatReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEntertainTreatReportDialog::OnDeleteHMSEntertainTreatReportDialog(){
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
 		OnCancelHMSEntertainTreatReportDialog(); 
 	}
	return 0;
}
int CHMSEntertainTreatReportDialog::OnSaveHMSEntertainTreatReportDialog(){
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
 		//OnHMSEntertainTreatReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSEntertainTreatReportDialog::OnCancelHMSEntertainTreatReportDialog(){
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
int CHMSEntertainTreatReportDialog::OnHMSEntertainTreatReportDialogListLoadData(){
	return 0;
}
