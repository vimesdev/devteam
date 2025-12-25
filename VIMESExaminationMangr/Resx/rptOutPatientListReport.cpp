#include "rptOutPatientListReport.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptOutPatientListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptOutPatientListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CrptOutPatientListReport *pVw = (CrptOutPatientListReport *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptOutPatientListReport *pVw = (CrptOutPatientListReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptOutPatientListReport* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDKillfocus();
}*/
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDKillfocus();
}*/
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CrptOutPatientListReport *)pWnd)->OnICDLoadData();
}
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDAddNew();
}*/
static int _OnAddrptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnAddrptOutPatientListReport();
} 
static int _OnEditrptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnEditrptOutPatientListReport();
} 
static int _OnDeleterptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnDeleterptOutPatientListReport();
} 
static int _OnSaverptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnSaverptOutPatientListReport();
} 
static int _OnCancelrptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnCancelrptOutPatientListReport();
} 
CrptOutPatientListReport::CrptOutPatientListReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CrptOutPatientListReport::~CrptOutPatientListReport(){
}
void CrptOutPatientListReport::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54); 
	m_wndPreview.Create(this, _T("&Preview"), 195, 95, 270, 120);
	m_wndExport.Create(this, _T("&Export"), 275, 95, 350, 120);
	m_wndICDLabel.Create(this, _T("ICD"), 10, 59, 90, 84);
	m_wndICD.Create(this,95, 59, 345, 84); 

}
void CrptOutPatientListReport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndICD.SetCheckValue(true);
	m_wndICD.LimitText(35);


	m_wndICD.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CrptOutPatientListReport::OnSetWindowEvents(){
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
	m_wndICD.SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_SELCHANGE, _OnICDSelectChangeFnc);
	m_wndICD.SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
	//m_wndICD.SetEvent(WE_ADDNEW, _OnICDAddNewFnc);

}
void CrptOutPatientListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);

}
void CrptOutPatientListReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptOutPatientListReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptOutPatientListReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szICDKey.Empty();

}
int CrptOutPatientListReport::SetMode(int nMode){
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
/*void CrptOutPatientListReport::OnFromDateChange(){
	
} */
/*void CrptOutPatientListReport::OnFromDateSetfocus(){
	
} */
/*void CrptOutPatientListReport::OnFromDateKillfocus(){
	
} */
int CrptOutPatientListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptOutPatientListReport::OnToDateChange(){
	
} */
/*void CrptOutPatientListReport::OnToDateSetfocus(){
	
} */
/*void CrptOutPatientListReport::OnToDateKillfocus(){
	
} */
int CrptOutPatientListReport::OnToDateCheckValue(){
	return 0;
} 
void CrptOutPatientListReport::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptOutPatientListReport::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptOutPatientListReport::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptOutPatientListReport::OnICDSelendok(){
	 
}
/*void CrptOutPatientListReport::OnICDSetfocus(){
	
}*/
/*void CrptOutPatientListReport::OnICDKillfocus(){
	
}*/
long CrptOutPatientListReport::OnICDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD.IsSearchKey() && !m_szICDKey.IsEmpty()){
	};
	m_wndICD.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptOutPatientListReport::OnICDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CrptOutPatientListReport::OnAddrptOutPatientListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptOutPatientListReport::OnEditrptOutPatientListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptOutPatientListReport::OnDeleterptOutPatientListReport(){
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
 		OnCancelrptOutPatientListReport(); 
 	}
	return 0;
}
int CrptOutPatientListReport::OnSaverptOutPatientListReport(){
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
 		//OnrptOutPatientListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptOutPatientListReport::OnCancelrptOutPatientListReport(){
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
int CrptOutPatientListReport::OnrptOutPatientListReportListLoadData(){
	return 0;
}
