#include "HMSSearchPatient.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSearchPatient *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSearchPatient *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSSearchPatient *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSearchPatient* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSSearchPatient *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSSearchPatient *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSearchPatient *)pWnd)->OnNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSSearchPatient *pVw = (CHMSSearchPatient *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnRecordListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSearchPatient*)pWnd)->OnRecordListLoadData();
} 
static void _OnRecordListDblClickFnc(CWnd *pWnd){
	((CHMSSearchPatient*)pWnd)->OnRecordListDblClick();
} 
static void _OnRecordListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSearchPatient*)pWnd)->OnRecordListSelectChange(nOldItem, nNewItem);
} 
static int _OnRecordListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSearchPatient*)pWnd)->OnRecordListDeleteItem();
} 
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CHMSSearchPatient*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CHMSSearchPatient*)pWnd)->OnOutPatientSelect();
}
static int _OnAddHMSSearchPatientFnc(CWnd *pWnd){
	 return ((CHMSSearchPatient*)pWnd)->OnAddHMSSearchPatient();
} 
static int _OnEditHMSSearchPatientFnc(CWnd *pWnd){
	 return ((CHMSSearchPatient*)pWnd)->OnEditHMSSearchPatient();
} 
static int _OnDeleteHMSSearchPatientFnc(CWnd *pWnd){
	 return ((CHMSSearchPatient*)pWnd)->OnDeleteHMSSearchPatient();
} 
static int _OnSaveHMSSearchPatientFnc(CWnd *pWnd){
	 return ((CHMSSearchPatient*)pWnd)->OnSaveHMSSearchPatient();
} 
static int _OnCancelHMSSearchPatientFnc(CWnd *pWnd){
	 return ((CHMSSearchPatient*)pWnd)->OnCancelHMSSearchPatient();
} 
CHMSSearchPatient::CHMSSearchPatient(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 745;
	m_nDlgHeight = 515;
	SetDefaultValues();
}
CHMSSearchPatient::~CHMSSearchPatient(){
}
void CHMSSearchPatient::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 735, 505);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 70, 55);
	m_wndFromDate.Create(this,75, 30, 155, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 160, 30, 220, 55);
	m_wndToDate.Create(this,225, 30, 305, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 310, 30, 395, 55);
	m_wndDocumentNo.Create(this,400, 30, 490, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 495, 30, 575, 55);
	m_wndDepartment.Create(this,580, 30, 730, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 70, 85);
	m_wndName.Create(this,75, 60, 305, 85); 
	m_wndSearch.Create(this, _T("Search"), 495, 60, 575, 85);
	m_wndRecordList.Create(this,10, 90, 730, 500); 
	m_wndInPatient.Create(this, _T("InPatient"), 310, 60, 395, 85);
	m_wndOutPatient.Create(this, _T("OutPatient"), 400, 60, 490, 85);

}
void CHMSSearchPatient::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);




	m_wndRecordList.InsertColumn(0, _T("Document No"), CFMT_TEXT, 75);
	m_wndRecordList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndRecordList.InsertColumn(2, _T("Age"), CFMT_TEXT, 40);
	m_wndRecordList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 40);
	m_wndRecordList.InsertColumn(4, _T("Admission Date"), CFMT_TEXT, 80);
	m_wndRecordList.InsertColumn(5, _T("Out Date"), CFMT_TEXT, 80);
	m_wndRecordList.InsertColumn(6, _T("In From Dept"), CFMT_TEXT, 120);
	m_wndRecordList.InsertColumn(7, _T("Out From Dept"), CFMT_TEXT, 120);
	m_wndRecordList.InsertColumn(8, _T("Diagnostic"), CFMT_TEXT, 150);
	m_hms_patient_recordTbl.SetTableName(_T("hms_patient_record"));
	m_hms_patient_recordTbl.AddField(_T("hpr_createdby"), dfText, 15); 
	m_hms_patient_recordTbl.AddField(_T("hpr_createddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_updatedby"), dfText, 15); 
	m_hms_patient_recordTbl.AddField(_T("hpr_updateddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_patientno"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_docno"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_idx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_docrec"), dfText, 35); 
	m_hms_patient_recordTbl.AddField(_T("hpr_admitdeptid"), dfText, 7); 
	m_hms_patient_recordTbl.AddField(_T("hpr_enddeptid"), dfText, 7); 
	m_hms_patient_recordTbl.AddField(_T("hpr_admitdate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_enddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_storeddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_status"), dfText, 1); 
	m_hms_patient_recordTbl.AddField(_T("hpr_roomidx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_cabinetidx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_draweridx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_position"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_shortcut"), dfText, 13); 
	m_hms_patient_recordTbl.AddField(_T("hpr_comment"), dfText, 512); 
	m_hms_patient_recordTbl.AddField(_T("hpr_reverse"), dfText, 1); 
	m_hms_patient_recordTbl.AddField(_T("hpr_rvsreason"), dfText, 512); 

}
void CHMSSearchPatient::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndRecordList.SetEvent(WE_SELCHANGE, _OnRecordListSelectChangeFnc);
	m_wndRecordList.SetEvent(WE_LOADDATA, _OnRecordListLoadDataFnc);
	m_wndRecordList.SetEvent(WE_DBLCLICK, _OnRecordListDblClickFnc);
	m_wndRecordList.AddEvent(1, _T("Delete"), _OnRecordListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);

}
void CHMSSearchPatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CHMSSearchPatient::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSearchPatient::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patient_recordTbl.SetValue(_T("hpr_createdby"), pMF->GetCurrentUser());
	m_hms_patient_recordTbl.SetValue(_T("hpr_createddate"), pMF->GetSysDateTime());
	m_hms_patient_recordTbl.SetValue(_T("hpr_updatedby"), pMF->GetCurrentUser());
	m_hms_patient_recordTbl.SetValue(_T("hpr_updateddate"), pMF->GetSysDateTime());

}
void CHMSSearchPatient::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_szDepartmentKey.Empty();
	m_szName.Empty();
	m_nInPatient=0;
	m_nOutPatient=0;

}
int CHMSSearchPatient::SetMode(int nMode){
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
/*void CHMSSearchPatient::OnFromDateChange(){
	
} */
/*void CHMSSearchPatient::OnFromDateSetfocus(){
	
} */
/*void CHMSSearchPatient::OnFromDateKillfocus(){
	
} */
int CHMSSearchPatient::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSSearchPatient::OnToDateChange(){
	
} */
/*void CHMSSearchPatient::OnToDateSetfocus(){
	
} */
/*void CHMSSearchPatient::OnToDateKillfocus(){
	
} */
int CHMSSearchPatient::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSSearchPatient::OnDocumentNoChange(){
	
} */
/*void CHMSSearchPatient::OnDocumentNoSetfocus(){
	
} */
/*void CHMSSearchPatient::OnDocumentNoKillfocus(){
	
} */
int CHMSSearchPatient::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSSearchPatient::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSearchPatient::OnDepartmentSelendok(){
	 
}
/*void CHMSSearchPatient::OnDepartmentSetfocus(){
	
}*/
/*void CHMSSearchPatient::OnDepartmentKillfocus(){
	
}*/
long CHMSSearchPatient::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSearchPatient::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSearchPatient::OnNameChange(){
	
} */
/*void CHMSSearchPatient::OnNameSetfocus(){
	
} */
/*void CHMSSearchPatient::OnNameKillfocus(){
	
} */
int CHMSSearchPatient::OnNameCheckValue(){
	return 0;
} 
void CHMSSearchPatient::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSearchPatient::OnRecordListDblClick(){
	
} 
void CHMSSearchPatient::OnRecordListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSearchPatient::OnRecordListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSearchPatient::OnRecordListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRecordList.BeginLoad(); 
	m_wndRecordList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRecordList.AddItems(
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("AdmissionDate")), 
			rs.GetValue(_T("OutDate")), 
			rs.GetValue(_T("InFromDept")), 
			rs.GetValue(_T("OutFromDept")), 
			rs.GetValue(_T("Diagnostic")), NULL);
		rs.MoveNext();
	}
	m_wndRecordList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSSearchPatient::OnInPatientSelect(){
	
}
void CHMSSearchPatient::OnOutPatientSelect(){
	
}
int CHMSSearchPatient::OnAddHMSSearchPatient(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSearchPatient::OnEditHMSSearchPatient(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSearchPatient::OnDeleteHMSSearchPatient(){
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
 		OnCancelHMSSearchPatient(); 
 	}
	return 0;
}
int CHMSSearchPatient::OnSaveHMSSearchPatient(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_patient_recordTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_patient_recordTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSSearchPatientListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSearchPatient::OnCancelHMSSearchPatient(){
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
int CHMSSearchPatient::OnHMSSearchPatientListLoadData(){
	return 0;
}
