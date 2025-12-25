#include "HMSCancelRecord.h"
#include "MainFrm.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSCancelRecord *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSCancelRecord *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSCancelRecord *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancelRecord *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSCancelRecord *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSCancelRecord *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSCancelRecord *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancelRecord *)pWnd)->OnRecordNoCheckValue();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCancelRecord *pVw = (CHMSCancelRecord *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancelRecord *pVw = (CHMSCancelRecord *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCancelRecordFnc(CWnd *pWnd){
	 return ((CHMSCancelRecord*)pWnd)->OnAddHMSCancelRecord();
} 
static int _OnEditHMSCancelRecordFnc(CWnd *pWnd){
	 return ((CHMSCancelRecord*)pWnd)->OnEditHMSCancelRecord();
} 
static int _OnDeleteHMSCancelRecordFnc(CWnd *pWnd){
	 return ((CHMSCancelRecord*)pWnd)->OnDeleteHMSCancelRecord();
} 
static int _OnSaveHMSCancelRecordFnc(CWnd *pWnd){
	 return ((CHMSCancelRecord*)pWnd)->OnSaveHMSCancelRecord();
} 
static int _OnCancelHMSCancelRecordFnc(CWnd *pWnd){
	 return ((CHMSCancelRecord*)pWnd)->OnCancelHMSCancelRecord();
} 
CHMSCancelRecord::CHMSCancelRecord(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 280;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHMSCancelRecord::~CHMSCancelRecord(){
}
void CHMSCancelRecord::OnCreateComponents(){
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 90, 55);
	m_wndDocNo.Create(this,95, 30, 265, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 10, 60, 90, 85);
	m_wndRecordNo.Create(this,95, 60, 265, 85); 
	m_wndCancel.Create(this, _T("Cancel"), 95, 95, 185, 120);
	m_wndClose.Create(this, _T("&Close"), 190, 95, 270, 120);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 270, 90);

}
void CHMSCancelRecord::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(16);
	m_wndDocNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);

}
void CHMSCancelRecord::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSCancelRecord::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);

}
void CHMSCancelRecord::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancelRecord::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancelRecord::SetDefaultValues(){

	m_nDocNo=0;
	m_szRecordNo.Empty();

}
int CHMSCancelRecord::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndDocNo.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSCancelRecord::OnDocNoChange(){
	
} */
/*void CHMSCancelRecord::OnDocNoSetfocus(){
	
} */
/*void CHMSCancelRecord::OnDocNoKillfocus(){
	
} */
int CHMSCancelRecord::OnDocNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT htr_recordno recordno FROM hms_treatment_record WHERE htr_docno = %ld ORDER BY htr_createddate"), m_nDocNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
		rs.GetValue(_T("recordno"), m_szRecordNo);
	UpdateData(false);
	return 0;
} 
/*void CHMSCancelRecord::OnRecordNoChange(){
	
} */
/*void CHMSCancelRecord::OnRecordNoSetfocus(){
	
} */
/*void CHMSCancelRecord::OnRecordNoKillfocus(){
	
} */
int CHMSCancelRecord::OnRecordNoCheckValue(){
	return 0;
} 
void CHMSCancelRecord::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (IsAllowCancel())
	{
		CancelRecord();
	}
} 
void CHMSCancelRecord::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCancelRecord::OnAddHMSCancelRecord(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancelRecord::OnEditHMSCancelRecord(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancelRecord::OnDeleteHMSCancelRecord(){
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
 		OnCancelHMSCancelRecord();
 	}
	return 0;
}
int CHMSCancelRecord::OnSaveHMSCancelRecord(){
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
 		//OnHMSCancelRecordListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancelRecord::OnCancelHMSCancelRecord(){
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
int CHMSCancelRecord::OnHMSCancelRecordListLoadData(){
	return 0;
}

BOOL CHMSCancelRecord::IsAllowCancel(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT htr_deptid deptid FROM hms_treatment_record WHERE htr_docno = %ld"), m_nDocNo);
	rs.ExecSQL(szSQL);
	if (rs.GetRecordCount() > 1)
		return FALSE;
	rs.GetValue(_T("deptid"), m_szDept);
	szSQL.Format(_T(" SELECT Count(*) ") \
				_T(" FROM   hms_fee ") \
				_T(" WHERE  hfe_docno = %ld ") \
				_T("    AND hfe_deptid = '%s' ") \
				_T("    AND hfe_class = 'I' ") \
				_T("    AND hfe_type <> 'B'"), m_nDocNo, m_szDept);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		return FALSE;
	return TRUE;
}

void CHMSCancelRecord::CancelRecord(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	szSQL.Format(_T("DELETE FROM hms_bed WHERE hb_docno = %ld AND hb_deptid = '%s'"), m_nDocNo, m_szDept);
	pMF->BeginTransaction();
	int res = pMF->ExecSQL(szSQL);
	if (res <= 0)
	{
		pMF->Rollback();
		return;
	}	
	szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_status = 'A' WHERE hcr_docno = %ld"), m_nDocNo);
	res = pMF->ExecSQL(szSQL);
	if (res <= 0)
	{
		pMF->Rollback();
		return;
	}
	pMF->Commit();
	SetMode(VM_NONE);
}