#include "HMSExaminationtypeReportDlg.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationtypeReportDlg *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationtypeReportDlg *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationtypeReportDlg *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationtypeReportDlg *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationtypeReportDlg *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationtypeReportDlg *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationtypeReportDlg *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationtypeReportDlg *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSExaminationtypeReportDlg *pVw = (CHMSExaminationtypeReportDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExaminationtypeReportDlg *pVw = (CHMSExaminationtypeReportDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSExaminationtypeReportDlg *pVw = (CHMSExaminationtypeReportDlg *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CHMSExaminationtypeReportDlg*)pWnd)->OnAddHMSExaminationtypeReportDlg();
} 
static int _OnEditHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CHMSExaminationtypeReportDlg*)pWnd)->OnEditHMSExaminationtypeReportDlg();
} 
static int _OnDeleteHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CHMSExaminationtypeReportDlg*)pWnd)->OnDeleteHMSExaminationtypeReportDlg();
} 
static int _OnSaveHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CHMSExaminationtypeReportDlg*)pWnd)->OnSaveHMSExaminationtypeReportDlg();
} 
static int _OnCancelHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CHMSExaminationtypeReportDlg*)pWnd)->OnCancelHMSExaminationtypeReportDlg();
} 
CHMSExaminationtypeReportDlg::CHMSExaminationtypeReportDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CHMSExaminationtypeReportDlg::~CHMSExaminationtypeReportDlg(){
}
void CHMSExaminationtypeReportDlg::OnCreateComponents(){
	m_wndReportConditio.Create(this, _T("Report Condition"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrint.Create(this, _T("&Print"), 121, 66, 196, 91);
	m_wndClose.Create(this, _T("&Close"), 281, 66, 356, 91);
	m_wndExport.Create(this, _T("&Export"), 201, 66, 276, 91);

}
void CHMSExaminationtypeReportDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CHMSExaminationtypeReportDlg::OnSetWindowEvents(){
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CHMSExaminationtypeReportDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSExaminationtypeReportDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExaminationtypeReportDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationtypeReportDlg::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSExaminationtypeReportDlg::SetMode(int nMode){
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
/*void CHMSExaminationtypeReportDlg::OnFromDateChange(){
	
} */
/*void CHMSExaminationtypeReportDlg::OnFromDateSetfocus(){
	
} */
/*void CHMSExaminationtypeReportDlg::OnFromDateKillfocus(){
	
} */
int CHMSExaminationtypeReportDlg::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSExaminationtypeReportDlg::OnToDateChange(){
	
} */
/*void CHMSExaminationtypeReportDlg::OnToDateSetfocus(){
	
} */
/*void CHMSExaminationtypeReportDlg::OnToDateKillfocus(){
	
} */
int CHMSExaminationtypeReportDlg::OnToDateCheckValue(){
	return 0;
} 
void CHMSExaminationtypeReportDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationtypeReportDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationtypeReportDlg::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExaminationtypeReportDlg::OnAddHMSExaminationtypeReportDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSExaminationtypeReportDlg::OnEditHMSExaminationtypeReportDlg(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExaminationtypeReportDlg::OnDeleteHMSExaminationtypeReportDlg(){
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
 		OnCancelHMSExaminationtypeReportDlg(); 
 	}
	return 0;
}
int CHMSExaminationtypeReportDlg::OnSaveHMSExaminationtypeReportDlg(){
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
 		//OnHMSExaminationtypeReportDlgListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExaminationtypeReportDlg::OnCancelHMSExaminationtypeReportDlg(){
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
int CHMSExaminationtypeReportDlg::OnHMSExaminationtypeReportDlgListLoadData(){
	return 0;
}
