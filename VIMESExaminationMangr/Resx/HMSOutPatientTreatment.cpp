#include "HMSOutPatientTreatment.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnTreatDaysChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnTreatDaysChange();
} */
/*static void _OnTreatDaysSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnTreatDaysSetfocus();} */ 
/*static void _OnTreatDaysKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnTreatDaysKillfocus();
} */
static int _OnTreatDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnTreatDaysCheckValue();
} 
static void _OnICDDiagnosticSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOutPatientTreatment* )pWnd)->OnICDDiagnosticSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDDiagnosticSelendokFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnICDDiagnosticSelendok();
}
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnICDDiagnosticKillfocus();
}*/
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnICDDiagnosticKillfocus();
}*/
static long _OnICDDiagnosticLoadDataFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnICDDiagnosticLoadData();
}
/*static void _OnICDDiagnosticAddNewFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnICDDiagnosticAddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnConclusionCheckValue();
} 
/*static void _OnTreatMethodChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnTreatMethodChange();
} */
/*static void _OnTreatMethodSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnTreatMethodSetfocus();} */ 
/*static void _OnTreatMethodKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnTreatMethodKillfocus();
} */
static int _OnTreatMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnTreatMethodCheckValue();
} 
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnResultCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientTreatment *)pWnd)->OnNoteCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSOutPatientTreatment *pVw = (CHMSOutPatientTreatment *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSOutPatientTreatment *pVw = (CHMSOutPatientTreatment *)pWnd;
	pVw->OnTerminateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOutPatientTreatment *pVw = (CHMSOutPatientTreatment *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOutPatientTreatment *pVw = (CHMSOutPatientTreatment *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSOutPatientTreatment *pVw = (CHMSOutPatientTreatment *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSOutPatientTreatmentFnc(CWnd *pWnd){
	 return ((CHMSOutPatientTreatment*)pWnd)->OnAddHMSOutPatientTreatment();
} 
static int _OnEditHMSOutPatientTreatmentFnc(CWnd *pWnd){
	 return ((CHMSOutPatientTreatment*)pWnd)->OnEditHMSOutPatientTreatment();
} 
static int _OnDeleteHMSOutPatientTreatmentFnc(CWnd *pWnd){
	 return ((CHMSOutPatientTreatment*)pWnd)->OnDeleteHMSOutPatientTreatment();
} 
static int _OnSaveHMSOutPatientTreatmentFnc(CWnd *pWnd){
	 return ((CHMSOutPatientTreatment*)pWnd)->OnSaveHMSOutPatientTreatment();
} 
static int _OnCancelHMSOutPatientTreatmentFnc(CWnd *pWnd){
	 return ((CHMSOutPatientTreatment*)pWnd)->OnCancelHMSOutPatientTreatment();
} 
CHMSOutPatientTreatment::CHMSOutPatientTreatment(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSOutPatientTreatment::~CHMSOutPatientTreatment(){
}
void CHMSOutPatientTreatment::OnCreateComponents(){
	m_wndTreatInformation.Create(this, _T("Treat Information"), 5, 5, 600, 370);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 130, 55);
	m_wndFromDate.Create(this,135, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 310, 55);
	m_wndToDate.Create(this,315, 30, 405, 55); 
	m_wndTreatDaysLabel.Create(this, _T("Treat Days"), 410, 30, 530, 55);
	m_wndTreatDays.Create(this,535, 30, 596, 55); 
	m_wndICDDiagnosicLabel.Create(this, _T("ICD Diagnosic"), 10, 60, 130, 85);
	m_wndICDDiagnostic.Create(this,135, 60, 596, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 596, 115); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 596, 145); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 150, 130, 175);
	m_wndConclusion.Create(this,135, 150, 596, 225); 
	m_wndTreatMethodLabel.Create(this, _T("Treat Method"), 10, 230, 130, 255);
	m_wndTreatMethod.Create(this,135, 230, 596, 255); 
	m_wndResultLabel.Create(this, _T("Result"), 10, 260, 130, 285);
	m_wndResult.Create(this,135, 260, 596, 310); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 315, 130, 340);
	m_wndNote.Create(this,135, 315, 596, 365); 
	m_wndUpdate.Create(this, _T("&Update"), 200, 375, 275, 400);
	m_wndTerminate.Create(this, _T("Terminate"), 280, 375, 355, 400);
	m_wndSave.Create(this, _T("&Save"), 360, 375, 435, 400);
	m_wndCancel.Create(this, _T("&Cancel"), 440, 375, 515, 400);
	m_wndPrint.Create(this, _T("Print"), 520, 375, 595, 400);

}
void CHMSOutPatientTreatment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndTreatDays.SetLimitText(16);
	m_wndTreatDays.SetCheckValue(true);
	m_wndICDDiagnostic.SetCheckValue(true);
	m_wndICDDiagnostic.LimitText(1024);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);
	m_wndTreatMethod.SetLimitText(35);
	m_wndTreatMethod.SetCheckValue(true);
	m_wndResult.SetLimitText(254);
	m_wndResult.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);


	m_wndICDDiagnostic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICDDiagnostic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_outpatientTbl.SetTableName(_T("hms_outpatient"));
	m_hms_outpatientTbl.AddField(_T("hop_docno"), dfLong); 
	m_hms_outpatientTbl.AddField(_T("hop_deptid"), dfText, 7); 
	m_hms_outpatientTbl.AddField(_T("hop_refidx"), dfLong); 
	m_hms_outpatientTbl.AddField(_T("hop_status"), dfText, 1); 
	m_hms_outpatientTbl.AddField(_T("hop_fromdate"), dfDate); 
	m_hms_outpatientTbl.AddField(_T("hop_todate"), dfDate); 
	m_hms_outpatientTbl.AddField(_T("hop_numdate"), dfLong); 
	m_hms_outpatientTbl.AddField(_T("hop_result"), dfText, 254); 
	m_hms_outpatientTbl.AddField(_T("hop_conlusion"), dfText, 254); 
	m_hms_outpatientTbl.AddField(_T("hop_note"), dfText, 254); 

}
void CHMSOutPatientTreatment::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndTreatDays.SetEvent(WE_CHANGE, _OnTreatDaysChangeFnc);
	//m_wndTreatDays.SetEvent(WE_SETFOCUS, _OnTreatDaysSetfocusFnc);
	//m_wndTreatDays.SetEvent(WE_KILLFOCUS, _OnTreatDaysKillfocusFnc);
	m_wndTreatDays.SetEvent(WE_CHECKVALUE, _OnTreatDaysCheckValueFnc);
	m_wndICDDiagnostic.SetEvent(WE_SELENDOK, _OnICDDiagnosticSelendokFnc);
	//m_wndICDDiagnostic.SetEvent(WE_SETFOCUS, _OnICDDiagnosticSetfocusFnc);
	//m_wndICDDiagnostic.SetEvent(WE_KILLFOCUS, _OnICDDiagnosticKillfocusFnc);
	m_wndICDDiagnostic.SetEvent(WE_SELCHANGE, _OnICDDiagnosticSelectChangeFnc);
	m_wndICDDiagnostic.SetEvent(WE_LOADDATA, _OnICDDiagnosticLoadDataFnc);
	//m_wndICDDiagnostic.SetEvent(WE_ADDNEW, _OnICDDiagnosticAddNewFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	//m_wndTreatMethod.SetEvent(WE_CHANGE, _OnTreatMethodChangeFnc);
	//m_wndTreatMethod.SetEvent(WE_SETFOCUS, _OnTreatMethodSetfocusFnc);
	//m_wndTreatMethod.SetEvent(WE_KILLFOCUS, _OnTreatMethodKillfocusFnc);
	m_wndTreatMethod.SetEvent(WE_CHECKVALUE, _OnTreatMethodCheckValueFnc);
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOutPatientTreatmentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOutPatientTreatmentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOutPatientTreatmentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOutPatientTreatmentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOutPatientTreatmentFnc, 0, 'T', VK_CONTROL);

}
void CHMSOutPatientTreatment::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndTreatDays.GetDlgCtrlID(), m_nTreatDays);
	DDX_TextEx(pDX, m_wndICDDiagnostic.GetDlgCtrlID(), m_szICDDiagnosticKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Text(pDX, m_wndTreatMethod.GetDlgCtrlID(), m_szTreatMethod);
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSOutPatientTreatment::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hop_result"), m_szResult);
	rs.GetValue(_T("hop_note"), m_szNote);

}
void CHMSOutPatientTreatment::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_outpatientTbl.SetValue(_T("hop_result"), m_szResult);
	m_hms_outpatientTbl.SetValue(_T("hop_note"), m_szNote);

}
void CHMSOutPatientTreatment::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nTreatDays=0;
	m_szICDDiagnosticKey.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szConclusion.Empty();
	m_szTreatMethod.Empty();
	m_szResult.Empty();
	m_szNote.Empty();

}
int CHMSOutPatientTreatment::SetMode(int nMode){
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
/*void CHMSOutPatientTreatment::OnFromDateChange(){
	
} */
/*void CHMSOutPatientTreatment::OnFromDateSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnFromDateKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSOutPatientTreatment::OnToDateChange(){
	
} */
/*void CHMSOutPatientTreatment::OnToDateSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnToDateKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSOutPatientTreatment::OnTreatDaysChange(){
	
} */
/*void CHMSOutPatientTreatment::OnTreatDaysSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnTreatDaysKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnTreatDaysCheckValue(){
	return 0;
} 
void CHMSOutPatientTreatment::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientTreatment::OnICDDiagnosticSelendok(){
	 
}
/*void CHMSOutPatientTreatment::OnICDDiagnosticSetfocus(){
	
}*/
/*void CHMSOutPatientTreatment::OnICDDiagnosticKillfocus(){
	
}*/
long CHMSOutPatientTreatment::OnICDDiagnosticLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICDDiagnostic.IsSearchKey() && !m_szICDDiagnosticKey.IsEmpty()){
	};
	m_wndICDDiagnostic.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICDDiagnostic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOutPatientTreatment::OnICDDiagnosticAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOutPatientTreatment::OnMainDiseaseChange(){
	
} */
/*void CHMSOutPatientTreatment::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnMainDiseaseKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSOutPatientTreatment::OnRelationDiseaseChange(){
	
} */
/*void CHMSOutPatientTreatment::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnRelationDiseaseKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSOutPatientTreatment::OnConclusionChange(){
	
} */
/*void CHMSOutPatientTreatment::OnConclusionSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnConclusionKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnConclusionCheckValue(){
	return 0;
} 
/*void CHMSOutPatientTreatment::OnTreatMethodChange(){
	
} */
/*void CHMSOutPatientTreatment::OnTreatMethodSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnTreatMethodKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnTreatMethodCheckValue(){
	return 0;
} 
/*void CHMSOutPatientTreatment::OnResultChange(){
	
} */
/*void CHMSOutPatientTreatment::OnResultSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnResultKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnResultCheckValue(){
	return 0;
} 
/*void CHMSOutPatientTreatment::OnNoteChange(){
	
} */
/*void CHMSOutPatientTreatment::OnNoteSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnNoteKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnNoteCheckValue(){
	return 0;
} 
void CHMSOutPatientTreatment::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientTreatment::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientTreatment::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientTreatment::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientTreatment::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOutPatientTreatment::OnAddHMSOutPatientTreatment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSOutPatientTreatment::OnEditHMSOutPatientTreatment(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOutPatientTreatment::OnDeleteHMSOutPatientTreatment(){
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
 		OnCancelHMSOutPatientTreatment(); 
 	}
	return 0;
}
int CHMSOutPatientTreatment::OnSaveHMSOutPatientTreatment(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_outpatientTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_outpatientTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSOutPatientTreatmentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOutPatientTreatment::OnCancelHMSOutPatientTreatment(){
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
int CHMSOutPatientTreatment::OnHMSOutPatientTreatmentListLoadData(){
	return 0;
}
