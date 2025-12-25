#include "HMSOutPatientTreatment.h"
#include "MainFrm.h"
#include "GuiDialog.h"
#include "ReportDocument.h"

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
static void _OnTreatDaysChangeFnc(CWnd *pWnd){
	((CHMSOutPatientTreatment *)pWnd)->OnTreatDaysChange();
} 
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

	m_nDlgWidth = 806;
	m_nDlgHeight = 539;
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
	m_wndICDDiagnosicLabel.Create(this, _T("ICD Diagnostic"), 10, 60, 130, 85);
	m_wndICDDiagnostic.Create(this,135, 60, 596, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 596, 115); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 596, 145); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 150, 130, 175);
	m_wndConclusion.Create(this,135, 150, 596, 225, TRUE, FALSE, TRUE); 
	m_wndTreatMethodLabel.Create(this, _T("Treat Method"), 10, 230, 130, 255);
	m_wndTreatMethod.Create(this,135, 230, 596, 255); 
	m_wndResultLabel.Create(this, _T("Result"), 10, 260, 130, 285);
	m_wndResult.Create(this,135, 260, 596, 310, TRUE, FALSE, TRUE); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 315, 130, 340);
	m_wndNote.Create(this,135, 315, 596, 365, TRUE, FALSE, TRUE); 
	m_wndUpdate.Create(this, _T("&Update"), 200, 375, 275, 400);
	m_wndTerminate.Create(this, _T("Terminate"), 280, 375, 355, 400);
	m_wndSave.Create(this, _T("&Save"), 360, 375, 435, 400);
	m_wndCancel.Create(this, _T("&Cancel"), 440, 375, 515, 400);
	m_wndPrint.Create(this, _T("Print"), 520, 375, 595, 400);

}
void CHMSOutPatientTreatment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndTreatDays.SetLimitText(5);
//	m_wndTreatDays.SetCheckValue(true);
	m_wndICDDiagnostic.SetCheckValue(true);
	m_wndICDDiagnostic.LimitText(254);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(254);
//	m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(512);
//	m_wndConclusion.SetCheckValue(true);
	m_wndTreatMethod.SetLimitText(254);
//	m_wndTreatMethod.SetCheckValue(true);
	m_wndResult.SetLimitText(254);
//	m_wndResult.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
//	m_wndNote.SetCheckValue(true);


	m_wndICDDiagnostic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICDDiagnostic.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_outstate"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_enddept"), dfText, 7);
	m_hms_docTbl.AddField(_T("hd_enddate"), dfDateTime);
	m_hms_docTbl.AddField(_T("hd_icd"), dfText, 13);
	m_hms_docTbl.AddField(_T("hd_diagnostic"), dfText, 254);	//Benh chinh
	m_hms_docTbl.AddField(_T("hd_reldisease"), dfText, 254);	//benh kem theo
	m_hms_docTbl.AddField(_T("hd_conclusion"), dfText, 254);	//Ket luan
	m_hms_docTbl.AddField(_T("hd_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_docTbl.AddField(_T("hd_doctor"), dfText, 15);
	m_hms_docTbl.AddField(_T("hd_treatmethod"), dfText, 254);
	m_hms_docTbl.AddField(_T("hd_outpatient"), dfText, 1);


	m_hms_outpatientTbl.SetTableName(_T("hms_outpatient"));
	m_hms_outpatientTbl.AddField(_T("hop_docno"), dfLong); 
	m_hms_outpatientTbl.AddField(_T("hop_deptid"), dfText, 7); 
	m_hms_outpatientTbl.AddField(_T("hop_roomid"), dfInteger); 
	m_hms_outpatientTbl.AddField(_T("hop_refidx"), dfLong); 
	m_hms_outpatientTbl.AddField(_T("hop_status"), dfText, 1); 
	m_hms_outpatientTbl.AddField(_T("hop_fromdate"), dfDate); 
	m_hms_outpatientTbl.AddField(_T("hop_todate"), dfDate); 
	m_hms_outpatientTbl.AddField(_T("hop_treatdays"), dfLong); 
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	GetDataToScreen();
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOutPatientTreatmentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOutPatientTreatmentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOutPatientTreatmentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOutPatientTreatmentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOutPatientTreatmentFnc, 0, 'T', VK_CONTROL);
*/
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
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		SetDefaultValues(); 

		rs.GetValue(_T("hd_conclusion"), m_szConclusion);
		rs.GetValue(_T("hd_icd"), m_szICDDiagnosticKey);
		rs.GetValue(_T("hd_enddate"), pMF->GetSysDateTime());
		rs.GetValue(_T("hd_treatmethod"), m_szTreatMethod);
		rs.GetValue(_T("hd_reldisease"), m_szRelationDisease);
		if(m_szFromDate.IsEmpty())
			m_szFromDate = pMF->GetSysDateTime();
		if(m_szMainDisease.IsEmpty())
			m_szMainDisease = pMF->m_szDiagnostic;

		szSQL.Format(_T("SELECT * FROM hms_outpatient where hop_docno=%ld"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hop_fromdate"), m_szFromDate);
			rs.GetValue(_T("hop_todate"), m_szToDate);
			rs.GetValue(_T("hop_treatdays"), m_nTreatDays);
			rs.GetValue(_T("hop_result"), m_szResult);
			rs.GetValue(_T("hop_note"), m_szNote);
			rs.GetValue(_T("hop_status"), m_szStatus);
			SetMode(VM_VIEW);
		}
		else
		{
			m_szFromDate = pMF->GetSysDate();
			SetMode(VM_NONE);
		}
	}

}
void CHMSOutPatientTreatment::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_hms_docTbl.SetValue(_T("hd_doctor"), pMF->m_szDoctor);
	m_hms_docTbl.SetValue(_T("hd_status"), _T("T"));
	m_hms_docTbl.SetValue(_T("hd_conclusion"), m_szConclusion);
	m_hms_docTbl.SetValue(_T("hd_icd"), m_szICDDiagnosticKey);
	m_hms_docTbl.SetValue(_T("hd_diagnostic"), m_szMainDisease);
	m_hms_docTbl.SetValue(_T("hd_reldisease"), m_szRelationDisease);
	m_hms_docTbl.SetValue(_T("hd_suggestion"), _T("O"));
	m_hms_docTbl.SetValue(_T("hd_result"), _T(""));
	m_hms_docTbl.SetValue(_T("hd_enddept"), pMF->m_szDept);
	m_hms_docTbl.SetValue(_T("hd_enddate"), m_szFromDate);
	m_hms_docTbl.SetValue(_T("hd_doctor"), pMF->m_szDoctor);
	m_hms_docTbl.SetValue(_T("hd_treatmethod"), m_szTreatMethod);
	m_hms_docTbl.SetValue(_T("hd_areceptidx"), pMF->m_nRefIndex);
	m_hms_docTbl.SetValue(_T("hd_outpatient"), _T("Y"));

	m_hms_outpatientTbl.SetValue(_T("hop_docno"), pMF->m_nDocumentNo);
	m_hms_outpatientTbl.SetValue(_T("hop_deptid"), pMF->m_szDept);
	m_hms_outpatientTbl.SetValue(_T("hop_roomid"), pMF->m_nRoomID);
	m_hms_outpatientTbl.SetValue(_T("hop_refidx"), pMF->m_nRefIndex);
	m_hms_outpatientTbl.SetValue(_T("hop_fromdate"), m_szFromDate);
	m_hms_outpatientTbl.SetValue(_T("hop_todate"), m_szToDate);
	m_hms_outpatientTbl.SetValue(_T("hop_treatdays"), m_nTreatDays);
	m_hms_outpatientTbl.SetValue(_T("hop_result"), m_szResult);
	m_hms_outpatientTbl.SetValue(_T("hop_note"), m_szNote);
	m_hms_outpatientTbl.SetValue(_T("hop_status"), m_szStatus);

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
 			EnableButtons(TRUE, 2, 3, -1); 
 			SetDefaultValues();
			m_szFromDate = pMF->GetSysDate();
			m_wndFromDate.SetFocus();
			m_wndFromDate.SetCheckValue(true);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 2, 3, -1); 
			if (m_szToDate.IsEmpty())
				m_szToDate = pMF->GetSysDate();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 2, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
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
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	if(CompareDate(m_szFromDate, pMF->m_szEntryDate) < 0)
		return -1;
	return 0;
} 
/*void CHMSOutPatientTreatment::OnToDateChange(){
	
} */
/*void CHMSOutPatientTreatment::OnToDateSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnToDateKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnToDateCheckValue(){
	UpdateData(true);
	int nDay = CompareDate(m_szToDate, m_szFromDate);
	if(nDay <=0 )
		return -1;
	if(m_nTreatDays >=0)
		m_nTreatDays = nDay;
	UpdateData(false);
	return 0;
} 
void CHMSOutPatientTreatment::OnTreatDaysChange(){
	
}
/*void CHMSOutPatientTreatment::OnTreatDaysSetfocus(){
	
} */
/*void CHMSOutPatientTreatment::OnTreatDaysKillfocus(){
	
} */
int CHMSOutPatientTreatment::OnTreatDaysCheckValue(){	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	
	szSQL.Format(_T("SELECT date('%s') + %d"), m_szFromDate,m_nTreatDays);
	rs.ExecSQL(szSQL);
	m_szToDate = rs.GetStringValue();	
	UpdateData(false);	
	return 0;
	
} 
void CHMSOutPatientTreatment::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientTreatment::OnICDDiagnosticSelendok(){
	 UpdateData(true);
	 m_szMainDisease = m_wndICDDiagnostic.GetCurrent(1);
	 UpdateData(false);
}
/*void CHMSOutPatientTreatment::OnICDDiagnosticSetfocus(){
	
}*/
/*void CHMSOutPatientTreatment::OnICDDiagnosticKillfocus(){
	
}*/
long CHMSOutPatientTreatment::OnICDDiagnosticLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndICDDiagnostic, m_szICDDiagnosticKey);
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

	CString szSQL;
	CRecord rs(&pMF->m_db);
	
	if(pMF->IsPaidFees()){
		ShowMessageBox(_T("Patients paid fees. Do not allow reupdate."));
		return;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is created treatment record. Can not update it."), MB_OK);
		return;
	}


	if(GetMode() == VM_NONE)
		SetMode(VM_ADD);
	else if(GetMode() == VM_VIEW)
		SetMode(VM_EDIT);
//	m_wndToDate.EnableWindow(false);
//	m_wndTreatDays.EnableWindow(false);
//	m_wndResult.EnableWindow(false);
	m_szStatus = _T("O");
} 
void CHMSOutPatientTreatment::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	if(GetMode() != VM_VIEW)
		return;
	
	StringUpper(pMF->GetCurrentUser(), tmpStr);

	if(pMF->IsPaidFees() && tmpStr != _T("ADMIN"))
	{
		ShowMessageBox(_T("Patients paid fees. Do not allow reupdate."));
		return;
	}

	SetMode(VM_EDIT);
	m_wndToDate.SetFocus();
	m_wndToDate.SetCheckValue(true);
	m_wndTreatDays.SetCheckValue(true);
	m_szStatus = _T("T");
	m_wndFromDate.EnableWindow(false);
//	m_wndToDate.EnableWindow(false);
//	m_wndTreatDays.EnableWindow(false);
//	m_wndResult.EnableWindow(false);
} 
void CHMSOutPatientTreatment::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSOutPatientTreatment();
} 
void CHMSOutPatientTreatment::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSOutPatientTreatment();	
} 
void CHMSOutPatientTreatment::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;	
	if(!rpt.Init(_T("Reports/HMS/HE_OUTPATIENTFILE.RPT")) )
	{
		return ;
	}

	szSQL.Format(_T(" SELECT hd_docno as docno, hp_patientno as patientno,") \
_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname, ") \
_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as Age, ") \
_T(" 	hp_sex as sexid,") \
_T(" 	GET_SYSSEL_DESC('sys_sex', hp_sex) as sex,") \
_T(" 	GET_SYSSEL_DESC('sys_ethnic', cast(hp_ethnic as text)) as ethnic,") \
_T(" 	hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as Address,") \
_T(" 	hp_occupation as occupationid,") \
_T(" 	GET_SYSSEL_DESC('sys_occupation', cast(hp_occupation as text)) as occupation,") \
_T(" 	hd_object as objectid,") \
_T(" 	(SELECT distinct ho_desc FROM hms_object WHERE ho_id=hd_object) as objectname,") \
_T(" 	(SELECT distinct ho_type FROM hms_object WHERE ho_id=hd_object) as objecttype,") \
_T(" 	hd_cardno as cardno,") \
_T(" 	hd_cardidx as cardidx,") \
_T(" 	hp_workplace as WorkPlace,") \
_T(" 	hp_birthdate as Birthdate, ") \
_T(" 	hdh_owner as owner, hdh_family as family, hc_expdate as expdate,he_examdate as examdate, ") \
_T(" 	hd_transdiagn as transdiagn, ") \
_T(" 	hd_relative as Relative, ") \
_T(" 	hd_contacttel as contacttel, hd_contactaddr as contactaddr,") \
_T(" 	he_pulse as pulse, he_temperature as temperature,") \
_T(" 	he_bloodpressure as bloodpressure, he_bloodpressurex as bloodpressurex, he_breathinterval as breathinterval,") \
_T(" 	he_weight as Weight, hd_doctor as  doctor,") \
_T(" 	he_diagnostic as diagnostic, hd_reldisease as relationdisease, he_doctor as doctor, ") \
_T(" 	(select distinct sd_name from sys_dept where sd_id=hd_indept) as admitdept, ") \
_T(" 	he_roomid as roomid, ") \
_T(" 	(select hrl_name from hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid) as roomname,") \
_T(" 	hop_fromdate as fromdate,") \
_T(" 	hop_todate as todate,") \
_T(" 	hop_result as result,") \
_T(" 	hd_conclusion as conclusion,") \
_T(" 	hop_note as note") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc on (hp_patientno = hd_patientno) ") \
_T(" LEFT JOIN hms_outpatient ON(hop_docno=hd_docno) ") \
_T(" LEFT JOIN hms_exam on (he_docno = hd_docno and he_roomid=hop_roomid) ") \
_T(" LEFT JOIN hms_disease_hist on(hdh_patientno = hp_patientno)") \
_T(" LEFT JOIN hms_card on (hc_patientno = hp_patientno) ") \
_T(" LEFT JOIN hms_object on (hd_object = ho_id) ") \
_T(" WHERE hd_docno = %ld"), pMF->m_nDocumentNo);

	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}
	//Report Header
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ExamRoom")), rs.GetValue(_T("roomname")));
	rpt.GetReportHeader()->SetValue(_T("ExamRoom"), tmpStr);
	//rs.GetValue(_T("Patientname"), tmpStr);
	StringUpper(rs.GetValue(_T("PatientName")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);//tendaydu
	rs.GetValue(_T("Age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("docno"), tmpStr);//mahoso
	rpt.GetReportHeader()->SetValue(_T("docno"), tmpStr);
	rs.GetValue(_T("Occupation"), tmpStr);//nghenghiep
	rpt.GetReportHeader()->SetValue(_T("Occupation"), tmpStr);
	rs.GetValue(_T("Sex"), tmpStr);//gioitinh
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("ethnic"), tmpStr); //dantoc
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("Workplace"), tmpStr); //noilamviec
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);

	rs.GetValue(_T("objecttype"), tmpStr); //doi tuong
	if(tmpStr == _T("I")){
		rpt.GetReportHeader()->SetValue(_T("insflag"), _T("[X]"));
	}
	else if(tmpStr == _T("C")){
		rpt.GetReportHeader()->SetValue(_T("childflag"), _T("[X]"));
	}
	else if(tmpStr == _T("D")){
		rpt.GetReportHeader()->SetValue(_T("freeflag"), _T("[X]"));
	}
	else {
		rpt.GetReportHeader()->SetValue(_T("serviceflag"), _T("[X]"));
	}

	rs.GetValue(_T("Reason"), tmpStr);//lydokham
	rpt.GetReportHeader()->SetValue(_T("Reason"), tmpStr);
	rs.GetValue(_T("Pathological"), tmpStr);//qua trinh benh ly
	rpt.GetReportHeader()->SetValue(_T("Pathological"), tmpStr);
	rs.GetValue(_T("Owner"), tmpStr);//ban than
	rpt.GetReportHeader()->SetValue(_T("Owner"), tmpStr);
	rs.GetValue(_T("Family"), tmpStr);//giadinh
	rpt.GetReportHeader()->SetValue(_T("Family"), tmpStr);
	rs.GetValue(_T("Partsbody"), tmpStr);//cacbophan
	rpt.GetReportHeader()->SetValue(_T("Partsbody"), tmpStr);
	rs.GetValue(_T("Systemic"), tmpStr);//toan than
	rpt.GetReportHeader()->SetValue(_T("Systemic"), tmpStr);
	rs.GetValue(_T("expdate"), CDateTime::Convert(rs.GetValue(_T("expdate")),yyyymmdd, ddmmyyyy));   //ngayhetthebaohiem
	rpt.GetReportHeader()->SetValue(_T("expdate"), CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("Examdate"), tmpStr);//ngaykham
	CDateTime dtime;
	dtime.ParseDateTime(tmpStr);
	//Dinh dang lay ngay thang nam gio phut
	tmpStr.Format(_T("%.2d:%.2d %.2d/%.2d/%.4d"), 
		dtime.GetTime().GetHour(),
		dtime.GetTime().GetMinute(),
		dtime.GetDate().GetDay(),
		dtime.GetDate().GetMonth(),
		dtime.GetDate().GetYear());

	rpt.GetReportHeader()->SetValue(_T("Examdate"), tmpStr);

	
	rs.GetValue(_T("Transdiagn"), tmpStr);//chan doan noi gioi thieu
	rpt.GetReportHeader()->SetValue(_T("Transdiagn "), tmpStr);
//	rs.GetValue(_T("Birthdate"), tmpStr);//ngay thang nam sinh
//	rpt.GetReportHeader()->SetValue(_T("Birthdate "), tmpStr);
	
	//rpt.GetReportHeader()->SetValue(_T("room"), tmpStr);
	rs.GetValue(_T("Birthdate"), tmpStr);//ngaysinh
	rpt.GetReportHeader()->SetValue(_T("Birthdate"), CDate::Convert(rs.GetValue(_T("Birthdate")), yyyymmdd, ddmmyyyy));
	/*rs.GetValue(_T("baohiemyte"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("fld9_1"), tmpStr);
	rs.GetValue(_T("Treem"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("fld9_2"), tmpStr);
	rs.GetValue(_T("mienphi"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("fld9_3"), tmpStr);
	rs.GetValue(_T("vienphi"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("fld9_4"), tmpStr);*/
	rs.GetValue(_T("objectname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("objectname"), tmpStr);

	rs.GetValue(_T("Relative"), tmpStr);//nguoi than
	rpt.GetReportHeader()->SetValue(_T("Relative"), tmpStr);
	rs.GetValue(_T("contactaddr"), tmpStr);//ho ten dia chi nguoi nha khi bao tin
	rpt.GetReportHeader()->SetValue(_T("contactaddr"), tmpStr);
	rs.GetValue(_T("contacttel"), tmpStr);//dienthoailienlac
	rpt.GetReportHeader()->SetValue(_T("contacttel"), tmpStr);
	rs.GetValue(_T("Pulse"), tmpStr);// mach
	if(tmpStr == _T("0"))tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("Pulse"), tmpStr);
	rs.GetValue(_T("Temperature"), tmpStr);//nhietdo
	if(tmpStr == _T("0"))tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("Temperature"), tmpStr);
	rs.GetValue(_T("Bloodpressure"), tmpStr); //huyet ap
	CString szPressure;
	if(tmpStr == _T("0"))
		szPressure.Empty();
	else
		szPressure = tmpStr;
	rs.GetValue(_T("Bloodpressurex"), tmpStr); //huyet ap
	if(!szPressure.IsEmpty())
		szPressure.AppendFormat(_T(" /%s"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Bloodpressure"), szPressure);
	rs.GetValue(_T("breathinterval"), tmpStr);//nhip tho
	if(tmpStr == _T("0"))tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("breathinterval"), tmpStr);
	rs.GetValue(_T("Weight"), tmpStr);	//cannang
	if(tmpStr == _T("0"))tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("Weight"), tmpStr);
	rs.GetValue(_T("Summarize"), tmpStr);//tom tat ket qua kham
	if(tmpStr == _T("0"))tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("Summarize"), tmpStr);
	CString szDiagnostic;
	rs.GetValue(_T("diagnostic"), tmpStr);//chan doan vao vien
	szDiagnostic = tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDiagnostic);
	rs.GetValue(_T("relationdisease"), tmpStr);//chan doan vao vien
	rpt.GetReportHeader()->SetValue(_T("relationdisease"), tmpStr);

	rs.GetValue(_T("Transdiagn"), tmpStr);//chan doan vao vien
	rpt.GetReportHeader()->SetValue(_T("Transdiagn"), tmpStr);
	szSQL.Format(_T("select distinct product_name as drugname \
		from hms_pharmacyorder   \
		left join hms_pharmacyorder_line ON(hpo_orderid=hpol_order_id) \
		where hpo_docno=%ld and hpo_orderstatus IN('I','A') "), pMF->m_nDocumentNo);
	CRecord drs(&pMF->m_db);
	drs.ExecSQL(szSQL);
	tmpStr.Empty();
	while(!drs.IsEOF()){
		if(!tmpStr.IsEmpty())
			tmpStr += _T(", ");
		tmpStr.AppendFormat(_T("%s"), drs.GetValue(_T("drugname")));
		drs.MoveNext();
	}
	rpt.GetReportHeader()->SetValue(_T("Drugs"), tmpStr);
	rs.GetValue(_T("Admitdept"), tmpStr);//cho vao dieu tri tai khoa
	rpt.GetReportHeader()->SetValue(_T("Admitdept"), tmpStr);
	//rs.GetValue(_T("ChuY"), tmpStr);//Chu y
	//rpt.GetReportHeader()->SetValue(_T("fldIV.7"), tmpStr);
	rs.GetValue(_T("Cardno"), tmpStr);// ma so the bao hiem y te
	rpt.GetReportHeader()->SetValue(_T("Cardno"), tmpStr);
	rs.GetValue(_T("Address"), tmpStr);//dia chi benh nhan
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("fromdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("FromDate"), tmpStr);
	rs.GetValue(_T("todate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ToDate"), tmpStr);
	

	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 
	//Page Footer
	//2009-01-01 05:59:59
	//2009-01-01
	//Report Footer
	rs.GetValue(_T("Doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Doctor"), pMF->GetDoctorName(tmpStr));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}


	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDateTime(); 	
	rpt.GetReportFooter()->Format(_T("PrintDate"), szSysDate.Mid(11, 5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));	
	rpt.PrintPreview();
//In to benh an 2
	
	CReport rpt2;
	if(rpt2.Init(_T("Reports/HMS/HE_OUTPATIENTFILE2.RPT")))
	{
		rpt2.GetReportHeader()->SetValue(_T("Diagnostic"), szDiagnostic);
		rpt2.GetReportFooter()->Format(_T("PrintDate"), szSysDate.Mid(11, 5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));	
		rpt2.PrintPreview();
	}
	
	
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
	CString szSQL;
	CRecord rs(&pMF->m_db);

	if(pMF->IsPaidFees()){
		ShowMessageBox(_T("Patients paid hospital fees. Do not allow reupdate."));
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is created treatment record. Can not update it."), MB_OK);
		return -1;
	}

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
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is created treatment record. Can not update it."), MB_OK);
		return -1;
	}

	if(!IsValidateData()) 
		return -1; 

	CString szWhere; 
	szWhere.Format(_T(" WHERE hd_docno=%ld "), pMF->m_nDocumentNo); 
	if(m_szStatus == _T("O"))
		szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno")); 
	else
		szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno, hd_areceptidx")); 
	szSQL += szWhere; 
	int ret = pMF->ExecSQL(szSQL); 
	if(ret > 0) 
	{ 
		if(pMF->m_szDiagnostic.IsEmpty())
			szSQL.Format(_T("UPDATE hms_exam SET he_status='T', he_diagnostic='%s' WHERE he_docno=%ld AND he_receptidx=%d"), m_szMainDisease, pMF->m_nDocumentNo, pMF->m_nRefIndex);
		else
			szSQL.Format(_T("UPDATE hms_exam SET he_status='T' WHERE he_docno=%ld AND he_receptidx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		
		
		if(GetMode() == VM_ADD){
		{
			szSQL.Format(_T("SELECT hop_status FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(rs.GetStringValue()==_T("T"))
			{
				return -1;
			}
			else
			{				
				szSQL = m_hms_outpatientTbl.GetInsertSQL(); 
			}
		}
		}else if(GetMode() == VM_EDIT){ 
			szWhere.Format(_T(" WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
			szSQL = m_hms_outpatientTbl.GetUpdateSQL(_T("hop_docno"));
			szSQL += szWhere;
		} 
_fmsg(_T("%s"), szSQL);
		pMF->ExecSQL(szSQL);		
		SetMode(VM_VIEW); 
		//((CGuiDialog *)	GetParent()->GetParent())->OnOK();
	} 
	else 
	{ 
	} 
	return ret; 

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
