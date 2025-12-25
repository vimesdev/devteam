#include "HMSTransferInwardPatient.h"
#include "MainFrm.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferInwardPatient *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferInwardPatient *)pWnd)->OnRecordNoCheckValue();
} 
static void _OnTransferSelectFnc(CWnd *pWnd){
	CHMSTransferInwardPatient *pVw = (CHMSTransferInwardPatient *)pWnd;
	pVw->OnTransferSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTransferInwardPatient *pVw = (CHMSTransferInwardPatient *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnOldDeptChangeFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnOldDeptChange();
} */
/*static void _OnOldDeptSetfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnOldDeptSetfocus();} */ 
/*static void _OnOldDeptKillfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnOldDeptKillfocus();
} */
static int _OnOldDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferInwardPatient *)pWnd)->OnOldDeptCheckValue();
} 
static void _OnNewDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTransferInwardPatient* )pWnd)->OnNewDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNewDeptSelendokFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnNewDeptSelendok();
}
/*static void _OnNewDeptSetfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnNewDeptKillfocus();
}*/
/*static void _OnNewDeptKillfocusFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnNewDeptKillfocus();
}*/
static long _OnNewDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransferInwardPatient *)pWnd)->OnNewDeptLoadData();
}
/*static void _OnNewDeptAddNewFnc(CWnd *pWnd){
	((CHMSTransferInwardPatient *)pWnd)->OnNewDeptAddNew();
}*/
static int _OnAddHMSTransferInwardPatientFnc(CWnd *pWnd){
	 return ((CHMSTransferInwardPatient*)pWnd)->OnAddHMSTransferInwardPatient();
} 
static int _OnEditHMSTransferInwardPatientFnc(CWnd *pWnd){
	 return ((CHMSTransferInwardPatient*)pWnd)->OnEditHMSTransferInwardPatient();
} 
static int _OnDeleteHMSTransferInwardPatientFnc(CWnd *pWnd){
	 return ((CHMSTransferInwardPatient*)pWnd)->OnDeleteHMSTransferInwardPatient();
} 
static int _OnSaveHMSTransferInwardPatientFnc(CWnd *pWnd){
	 return ((CHMSTransferInwardPatient*)pWnd)->OnSaveHMSTransferInwardPatient();
} 
static int _OnCancelHMSTransferInwardPatientFnc(CWnd *pWnd){
	 return ((CHMSTransferInwardPatient*)pWnd)->OnCancelHMSTransferInwardPatient();
} 
CHMSTransferInwardPatient::CHMSTransferInwardPatient(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTransferInwardPatient::~CHMSTransferInwardPatient(){
}
void CHMSTransferInwardPatient::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 530, 90);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 90, 55);
	m_wndDocNo.Create(this,95, 30, 265, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 270, 30, 350, 55);
	m_wndRecordNo.Create(this,355, 30, 525, 55); 
	m_wndOldDeptLabel.Create(this, _T("Old Dept"), 10, 60, 90, 85);
	m_wndOldDept.Create(this,95, 60, 265, 85); 
	m_wndNewDeptLabel.Create(this, _T("New Dept"), 270, 61, 350, 86);
	m_wndNewDept.Create(this,355, 60, 525, 85); 
	m_wndTransfer.Create(this, _T("Transfer"), 355, 95, 445, 120);
	m_wndClose.Create(this, _T("&Close"), 450, 95, 530, 120);

}
void CHMSTransferInwardPatient::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(1024);
	m_wndDocNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(1024);
	m_wndRecordNo.SetCheckValue(true);
	m_wndOldDept.SetLimitText(35);
	m_wndOldDept.SetCheckValue(true);
	m_wndNewDept.SetCheckValue(true);
	m_wndNewDept.LimitText(35);


	m_wndNewDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNewDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSTransferInwardPatient::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	m_wndTransfer.SetEvent(WE_CLICK, _OnTransferSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndOldDept.SetEvent(WE_CHANGE, _OnOldDeptChangeFnc);
	//m_wndOldDept.SetEvent(WE_SETFOCUS, _OnOldDeptSetfocusFnc);
	//m_wndOldDept.SetEvent(WE_KILLFOCUS, _OnOldDeptKillfocusFnc);
	m_wndOldDept.SetEvent(WE_CHECKVALUE, _OnOldDeptCheckValueFnc);
	m_wndNewDept.SetEvent(WE_SELENDOK, _OnNewDeptSelendokFnc);
	//m_wndNewDept.SetEvent(WE_SETFOCUS, _OnNewDeptSetfocusFnc);
	//m_wndNewDept.SetEvent(WE_KILLFOCUS, _OnNewDeptKillfocusFnc);
	m_wndNewDept.SetEvent(WE_SELCHANGE, _OnNewDeptSelectChangeFnc);
	m_wndNewDept.SetEvent(WE_LOADDATA, _OnNewDeptLoadDataFnc);
	//m_wndNewDept.SetEvent(WE_ADDNEW, _OnNewDeptAddNewFnc);
	SetMode(VM_NONE);

}
void CHMSTransferInwardPatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndOldDept.GetDlgCtrlID(), m_szOldDept);
	DDX_TextEx(pDX, m_wndNewDept.GetDlgCtrlID(), m_szNewDeptKey);

}
void CHMSTransferInwardPatient::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTransferInwardPatient::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTransferInwardPatient::SetDefaultValues(){

	m_nDocNo=0;
	m_szRecordNo.Empty();
	m_szOldDept.Empty();
	m_szNewDeptKey.Empty();

}
int CHMSTransferInwardPatient::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndRecordNo.EnableWindow(FALSE);
		m_wndOldDept.EnableWindow(FALSE);
 		return nOldMode;
}
/*void CHMSTransferInwardPatient::OnDocNoChange(){
	
} */
/*void CHMSTransferInwardPatient::OnDocNoSetfocus(){
	
} */
/*void CHMSTransferInwardPatient::OnDocNoKillfocus(){
	
} */
int CHMSTransferInwardPatient::OnDocNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT htr_recordno recordno, htr_deptid deptid FROM hms_treatment_record WHERE htr_docno = %ld ORDER BY htr_createddate"), m_nDocNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("recordno"), m_szRecordNo);
		rs.GetValue(_T("deptid"), m_szOldDept);
	}
	UpdateData(false);
	return 0;
} 
/*void CHMSTransferInwardPatient::OnRecordNoChange(){
	
} */
/*void CHMSTransferInwardPatient::OnRecordNoSetfocus(){
	
} */
/*void CHMSTransferInwardPatient::OnRecordNoKillfocus(){
	
} */
int CHMSTransferInwardPatient::OnRecordNoCheckValue(){
	return 0;
} 
void CHMSTransferInwardPatient::OnTransferSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_szOldDept == m_szNewDeptKey)
		return;
	if (IsAllowTransfer())
		OnTransferPatient();
} 
void CHMSTransferInwardPatient::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
/*void CHMSTransferInwardPatient::OnOldDeptChange(){
	
} */
/*void CHMSTransferInwardPatient::OnOldDeptSetfocus(){
	
} */
/*void CHMSTransferInwardPatient::OnOldDeptKillfocus(){
	
} */
int CHMSTransferInwardPatient::OnOldDeptCheckValue(){
	return 0;
} 
void CHMSTransferInwardPatient::OnNewDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransferInwardPatient::OnNewDeptSelendok(){
	 
}
/*void CHMSTransferInwardPatient::OnNewDeptSetfocus(){
	
}*/
/*void CHMSTransferInwardPatient::OnNewDeptKillfocus(){
	
}*/
long CHMSTransferInwardPatient::OnNewDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNewDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTransferInwardPatient::OnNewDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSTransferInwardPatient::OnAddHMSTransferInwardPatient(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTransferInwardPatient::OnEditHMSTransferInwardPatient(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTransferInwardPatient::OnDeleteHMSTransferInwardPatient(){
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
 		OnCancelHMSTransferInwardPatient();
 	}
	return 0;
}
int CHMSTransferInwardPatient::OnSaveHMSTransferInwardPatient(){
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
 		//OnHMSTransferInwardPatientListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTransferInwardPatient::OnCancelHMSTransferInwardPatient(){
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
int CHMSTransferInwardPatient::OnHMSTransferInwardPatientListLoadData(){
	return 0;
}

BOOL CHMSTransferInwardPatient::IsAllowTransfer(){
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

void CHMSTransferInwardPatient::OnTransferPatient(){
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
	szSQL.Format(_T("UPDATE hms_doc SET hd_indept = '%s' WHERE hd_docno = %ld"),m_szNewDeptKey, m_nDocNo);
	res = pMF->ExecSQL(szSQL);
	if (res <= 0)
	{
		pMF->Rollback();
		return;
	}
	szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_admitdept = '%s' WHERE hcr_docno = %ld"),m_szNewDeptKey, m_nDocNo);
	res = pMF->ExecSQL(szSQL);
	if (res <= 0)
	{
		pMF->Rollback();
		return;
	}
	szSQL.Format(_T("UPDATE hms_treatment_record SET htr_deptid = '%s' WHERE htr_docno = %ld"),m_szNewDeptKey, m_nDocNo);
	res = pMF->ExecSQL(szSQL);
	if (res <= 0)
	{
		pMF->Rollback();
		return;
	}
	pMF->Commit();
	SetMode(VM_NONE);	
}