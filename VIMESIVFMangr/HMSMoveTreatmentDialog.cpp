#include "HMSMoveTreatmentDialog.h"
#include "MainFrm.h"
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMoveTreatmentDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSMoveTreatmentDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnTreatTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMoveTreatmentDialog* )pWnd)->OnTreatTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatTypeSelendokFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnTreatTypeSelendok();
}
/*static void _OnTreatTypeSetfocusFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnTreatTypeKillfocus();
}*/
/*static void _OnTreatTypeKillfocusFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnTreatTypeKillfocus();
}*/
static long _OnTreatTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSMoveTreatmentDialog *)pWnd)->OnTreatTypeLoadData();
}
/*static void _OnTreatTypeAddNewFnc(CWnd *pWnd){
	((CHMSMoveTreatmentDialog *)pWnd)->OnTreatTypeAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSMoveTreatmentDialog *pVw = (CHMSMoveTreatmentDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSMoveTreatmentDialog *pVw = (CHMSMoveTreatmentDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSTreatinationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMoveTreatmentDialog*)pWnd)->OnAddHMSTreatinationChangeDialog();
} 
static int _OnEditHMSTreatinationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMoveTreatmentDialog*)pWnd)->OnEditHMSTreatinationChangeDialog();
} 
static int _OnDeleteHMSTreatinationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMoveTreatmentDialog*)pWnd)->OnDeleteHMSTreatinationChangeDialog();
} 
static int _OnSaveHMSTreatinationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMoveTreatmentDialog*)pWnd)->OnSaveHMSTreatinationChangeDialog();
} 
static int _OnCancelHMSTreatinationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMoveTreatmentDialog*)pWnd)->OnCancelHMSTreatinationChangeDialog();
} 
CHMSMoveTreatmentDialog::CHMSMoveTreatmentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSMoveTreatmentDialog::~CHMSMoveTreatmentDialog(){
}
void CHMSMoveTreatmentDialog::OnCreateComponents(){
	m_wndChangeInformation.Create(this, _T("Send Faculty Information"), 5, 5, 390, 90);
	m_wndDeptLabel.Create(this, _T("Faculty Treatment"), 10, 30, 130, 55);
	m_wndDept.Create(this,135, 30, 385, 55); 
	//m_wndTreatTypeLabel.Create(this, _T("Treat type"), 10, 60, 130, 85);
	m_wndTreatType.Create(this,_T("Treatment Outpatient"),10, 60, 385, 85); 
	m_wndOK.Create(this, _T("&OK"), 215, 60, 295, 85);
	m_wndCancel.Create(this, _T("&Cancel"), 305, 60, 385, 85);

}
void CHMSMoveTreatmentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);

	m_hms_treatment_recordTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatment_recordTbl.AddField(_T("htr_createdby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_createddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updatedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updateddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_patientno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_docno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_deptid"), dfText, 7); 
	m_hms_treatment_recordTbl.AddField(_T("htr_recordno"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_idx"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_status"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254); 
	m_hms_treatment_recordTbl.AddField(_T("htr_sumtreat"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_outpatient"), dfText, 1);
	m_hms_treatment_recordTbl.AddField(_T("htr_suggestion"), dfText, 1);
	m_hms_treatment_recordTbl.AddField(_T("htr_tdeptid"), dfText, 7);	

	m_wndTreatType.EnableWindow(false);
	m_wndDept.EnableWindow(true);
}
void CHMSMoveTreatmentDialog::OnSetWindowEvents(){
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndTreatType.SetEvent(WE_SELENDOK, _OnTreatTypeSelendokFnc);
	//m_wndTreatType.SetEvent(WE_SETFOCUS, _OnTreatTypeSetfocusFnc);
	//m_wndTreatType.SetEvent(WE_KILLFOCUS, _OnTreatTypeKillfocusFnc);
	m_wndTreatType.SetEvent(WE_SELCHANGE, _OnTreatTypeSelectChangeFnc);
	m_wndTreatType.SetEvent(WE_LOADDATA, _OnTreatTypeLoadDataFnc);
	//m_wndTreatType.SetEvent(WE_ADDNEW, _OnTreatTypeAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatinationChangeDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatinationChangeDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatinationChangeDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatinationChangeDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatinationChangeDialogFnc, 0, 'T', VK_CONTROL);
*/
	//SetMode(VM_ADD);
}
void CHMSMoveTreatmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndTreatType.GetDlgCtrlID(), m_bTreatType);

}
void CHMSMoveTreatmentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMoveTreatmentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSMoveTreatmentDialog::SetDefaultValues(){

	m_szDeptKey.Empty();
	m_bTreatType=1;

}
int CHMSMoveTreatmentDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
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
void CHMSMoveTreatmentDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMoveTreatmentDialog::OnDeptSelendok(){
	 
}
/*void CHMSMoveTreatmentDialog::OnDeptSetfocus(){
	
}*/
/*void CHMSMoveTreatmentDialog::OnDeptKillfocus(){
	
}*/
long CHMSMoveTreatmentDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && ToInt(m_szDeptKey) > 0){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDeptKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ") \
		_T("WHERE sd_type ='DT' and sd_id <> '%s' %s ORDER BY sd_index "), pMF->m_szDept, szWhere);

	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			_T(""),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSMoveTreatmentDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMoveTreatmentDialog::OnTreatTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMoveTreatmentDialog::OnTreatTypeSelendok(){
	 
}
/*void CHMSMoveTreatmentDialog::OnTreatTypeSetfocus(){
	
}*/
/*void CHMSMoveTreatmentDialog::OnTreatTypeKillfocus(){
	
}*/
long CHMSMoveTreatmentDialog::OnTreatTypeLoadData(){
	return 0;
}
/*void CHMSMoveTreatmentDialog::OnTreatTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMoveTreatmentDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSTreatinationChangeDialog())
		CGuiDialog::OnOK();
} 
void CHMSMoveTreatmentDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int CHMSMoveTreatmentDialog::OnAddHMSTreatinationChangeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMoveTreatmentDialog::OnEditHMSTreatinationChangeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMoveTreatmentDialog::OnDeleteHMSTreatinationChangeDialog(){
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
 		OnCancelHMSTreatinationChangeDialog(); 
 	}
	return 0;
}
int CHMSMoveTreatmentDialog::OnSaveHMSTreatinationChangeDialog(){	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szStatus, szMainICD, szMaindisease; 
	int  nIdx;
	CRecord rs(&pMF->m_db);


	if(!IsValidateData())
		return -1;
	
	szSQL.Format(_T(" SELECT max(htr_idx) FROM hms_treatment_record WHERE htr_docno = %ld "), pMF->m_wndPatientDocument.m_nDocumentNo);
	rs.ExecSQL(szSQL);	
	nIdx = rs.GetIntValue()+1;

	szSQL.Format(_T(" SELECT count(*) FROM hms_treatment_record WHERE htr_docno = %ld and htr_status='I' and htr_outpatient ='Y' "), pMF->m_wndPatientDocument.m_nDocumentNo);
	rs.ExecSQL(szSQL);	
	if(rs.GetIntValue()>0){
		ShowMessageBox(_T("Profile already exists is outpatient treatment. Can not create new profile!"),MB_OK|MB_ICONWARNING);	
		return -1;
	}

	szSQL.Format(_T(" SELECT * FROM hms_clinical_record WHERE hcr_docno = %ld "), pMF->m_wndPatientDocument.m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hcr_status"), szStatus);
		rs.GetValue(_T("hcr_mainicd"), szMainICD);
		rs.GetValue(_T("hcr_maindisease"), szMaindisease);
	}
	if(szStatus == _T("T"))
	{
		ShowMessageBox(_T("This patient's profile not finished."),MB_OK|MB_ICONWARNING);		
		return -1;
	}

	

	m_hms_treatment_recordTbl.SetValue(_T("htr_createdby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_createddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_patientno"), pMF->m_nPatientNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), pMF->m_nDocumentNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_idx"), nIdx); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_status"), _T("A")); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"),  pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_deptid"), m_szDeptKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), szMainICD); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), szMaindisease); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_sumtreat"), _T("0")); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_outpatient"), _T("Y"));
	m_hms_treatment_recordTbl.SetValue(_T("htr_suggestion"), _T("M"));	
	m_hms_treatment_recordTbl.SetValue(_T("htr_tdeptid"), pMF->m_szDept);
	

	szSQL = m_hms_treatment_recordTbl.GetInsertSQL();
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		ShowMessageBox(_T("Successfully creates a new profile."));
		szSQL.Format(_T("UPDATE hms_doc SET hd_outpatient='Y' WHERE hd_docno = %ld"), pMF->m_wndPatientDocument.m_nDocumentNo);
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 
}
int CHMSMoveTreatmentDialog::OnCancelHMSTreatinationChangeDialog(){
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
int CHMSMoveTreatmentDialog::OnHMSTreatinationChangeDialogListLoadData(){
	return 0;
}
