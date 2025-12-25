#include "rptAdmissionPatientListReportDialog.h"
#include "../MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptAdmissionPatientListReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptAdmissionPatientListReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptAdmissionPatientListReportDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((rptAdmissionPatientListReportDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptAdmissionPatientListReportDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((rptAdmissionPatientListReportDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((rptAdmissionPatientListReportDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptAdmissionPatientListReportDialog *pVw = (rptAdmissionPatientListReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptAdmissionPatientListReportDialog *pVw = (rptAdmissionPatientListReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptAdmissionPatientListReportDialog *pVw = (rptAdmissionPatientListReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionPatientListReportDialog*)pWnd)->OnAddrptAdmissionPatientListReportDialog();
} 
static int _OnEditrptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionPatientListReportDialog*)pWnd)->OnEditrptAdmissionPatientListReportDialog();
} 
static int _OnDeleterptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionPatientListReportDialog*)pWnd)->OnDeleterptAdmissionPatientListReportDialog();
} 
static int _OnSaverptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionPatientListReportDialog*)pWnd)->OnSaverptAdmissionPatientListReportDialog();
} 
static int _OnCancelrptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionPatientListReportDialog*)pWnd)->OnCancelrptAdmissionPatientListReportDialog();
} 
rptAdmissionPatientListReportDialog::rptAdmissionPatientListReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 409;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_bPreview = true;
}
rptAdmissionPatientListReportDialog::~rptAdmissionPatientListReportDialog(){
}
void rptAdmissionPatientListReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 395, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 395, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 90, 110, 115);
	m_wndStatus.Create(this,115, 90, 395, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 165, 125, 240, 150);
	m_wndPrint.Create(this, _T("&Print"), 245, 125, 320, 150);
	m_wndClose.Create(this, _T("&Close"), 325, 125, 400, 150);

}
void rptAdmissionPatientListReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
//	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void rptAdmissionPatientListReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(false);

}
void rptAdmissionPatientListReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void rptAdmissionPatientListReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptAdmissionPatientListReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptAdmissionPatientListReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szStatusKey.Empty();

}
int rptAdmissionPatientListReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
/*void rptAdmissionPatientListReportDialog::OnFromDateChange(){
	
} */
/*void rptAdmissionPatientListReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptAdmissionPatientListReportDialog::OnFromDateKillfocus(){
	
} */
int rptAdmissionPatientListReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptAdmissionPatientListReportDialog::OnToDateChange(){
	
} */
/*void rptAdmissionPatientListReportDialog::OnToDateSetfocus(){
	
} */
/*void rptAdmissionPatientListReportDialog::OnToDateKillfocus(){
	
} */
int rptAdmissionPatientListReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptAdmissionPatientListReportDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptAdmissionPatientListReportDialog::OnDepartmentSelendok(){
	 
}
/*void rptAdmissionPatientListReportDialog::OnDepartmentSetfocus(){
	
}*/
/*void rptAdmissionPatientListReportDialog::OnDepartmentKillfocus(){
	
}*/
long rptAdmissionPatientListReportDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" AND sd_type='DT' "));
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szWhere);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void rptAdmissionPatientListReportDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptAdmissionPatientListReportDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptAdmissionPatientListReportDialog::OnStatusSelendok(){
	 
}
/*void rptAdmissionPatientListReportDialog::OnStatusSetfocus(){
	
}*/
/*void rptAdmissionPatientListReportDialog::OnStatusKillfocus(){
	
}*/
long rptAdmissionPatientListReportDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szLabel;
	m_wndStatus.DeleteAllItems(); 
	TranslateString(_T("Waiting for admission"), szLabel);
	m_wndStatus.AddItems(_T("1"), szLabel, NULL);
	TranslateString(_T("Inpatient"), szLabel);
	m_wndStatus.AddItems(_T("2"), szLabel, NULL);  
	return 2;
/*
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
  */
}
/*void rptAdmissionPatientListReportDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptAdmissionPatientListReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	m_szStatus.Empty();

	if(m_szStatusKey.IsEmpty())
		m_szStatus = _T("'A','I','T'");
	else if(m_szStatusKey == _T("1"))
		m_szStatus = _T("'A'");
	else
		m_szStatus = _T("'I','T'");

	CGuiDialog::OnOK();	
} 
void rptAdmissionPatientListReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = false;
	m_szStatus.Empty();
	if(m_szStatusKey.IsEmpty())
		m_szStatus = _T("'A','I','T'");
	else if(m_szStatusKey == _T("1"))
		m_szStatus = _T("'A'");
	else
		m_szStatus = _T("'I','T'");


	CGuiDialog::OnOK();
} 
void rptAdmissionPatientListReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptAdmissionPatientListReportDialog::OnAddrptAdmissionPatientListReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptAdmissionPatientListReportDialog::OnEditrptAdmissionPatientListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptAdmissionPatientListReportDialog::OnDeleterptAdmissionPatientListReportDialog(){
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
 		OnCancelrptAdmissionPatientListReportDialog(); 
 	}
	return 0;
}
int rptAdmissionPatientListReportDialog::OnSaverptAdmissionPatientListReportDialog(){
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
 		//OnrptAdmissionPatientListReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptAdmissionPatientListReportDialog::OnCancelrptAdmissionPatientListReportDialog(){
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
int rptAdmissionPatientListReportDialog::OnrptAdmissionPatientListReportDialogListLoadData(){
	return 0;
}
