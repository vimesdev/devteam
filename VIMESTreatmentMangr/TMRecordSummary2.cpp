#include "TMRecordSummary2.h"
#include "MainFrm.h"


/*static void _OnTerminatedDateChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnTerminatedDateChange();
} */
/*static void _OnTerminatedDateSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnTerminatedDateSetfocus();} */
	/*static void _OnTerminatedDateKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnTerminatedDateKillfocus();
	} */
static int _OnTerminatedDateCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnTerminatedDateCheckValue();
}
static void _OnResultSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CTMRecordSummary2*)pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnResultSelendokFnc(CWnd* pWnd) {
	((CTMRecordSummary2*)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnResultAddNew();
}*/
/*static void _OnDieDateChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnDieDateChange();
} */
/*static void _OnDieDateSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnDieDateSetfocus();} */
	/*static void _OnDieDateKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnDieDateKillfocus();
	} */
static int _OnDieDateCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnDieDateCheckValue();
}
/*static void _OnAdmitDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnAdmitDiseaseChange();
} */
/*static void _OnAdmitDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnAdmitDiseaseSetfocus();} */
	/*static void _OnAdmitDiseaseKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnAdmitDiseaseKillfocus();
	} */
static int _OnAdmitDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnAdmitDiseaseCheckValue();
}
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnMainDiseaseSetfocus();} */
	/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnMainDiseaseKillfocus();
	} */
static int _OnMainDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnMainDiseaseCheckValue();
}
/*static void _OnPathologyChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnPathologyChange();
} */
/*static void _OnPathologySetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnPathologySetfocus();} */
	/*static void _OnPathologyKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnPathologyKillfocus();
	} */
static int _OnPathologyCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnPathologyCheckValue();
}
/*static void _OnMotherDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnMotherDiseaseChange();
} */
/*static void _OnMotherDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnMotherDiseaseSetfocus();} */
	/*static void _OnMotherDiseaseKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnMotherDiseaseKillfocus();
	} */
static int _OnMotherDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnMotherDiseaseCheckValue();
}
/*static void _OnTreatmentMethodChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnTreatmentMethodChange();
} */
/*static void _OnTreatmentMethodSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnTreatmentMethodSetfocus();} */
	/*static void _OnTreatmentMethodKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnTreatmentMethodKillfocus();
	} */
static int _OnTreatmentMethodCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnTreatmentMethodCheckValue();
}
/*static void _OnTransferChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnTransferChange();
} */
/*static void _OnTransferSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnTransferSetfocus();} */
	/*static void _OnTransferKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnTransferKillfocus();
	} */
static int _OnTransferCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnTransferCheckValue();
}
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary2 *)pWnd)->OnSuggestionSetfocus();} */
	/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary2 *)pWnd)->OnSuggestionKillfocus();
	} */
static int _OnSuggestionCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnSuggestionCheckValue();
}
static void _OnUpdateSelectFnc(CWnd* pWnd) {
	CTMRecordSummary2* pVw = (CTMRecordSummary2*)pWnd;
	pVw->OnUpdateSelect();
}
static void _OnSaveSelectFnc(CWnd* pWnd) {
	CTMRecordSummary2* pVw = (CTMRecordSummary2*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd* pWnd) {
	CTMRecordSummary2* pVw = (CTMRecordSummary2*)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintSelectFnc(CWnd* pWnd) {
	CTMRecordSummary2* pVw = (CTMRecordSummary2*)pWnd;
	pVw->OnPrintSelect();
}
static int _OnAddTMRecordSummary2Fnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnAddTMRecordSummary2();
}
static int _OnEditTMRecordSummary2Fnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnEditTMRecordSummary2();
}
static int _OnDeleteTMRecordSummary2Fnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnDeleteTMRecordSummary2();
}
static int _OnSaveTMRecordSummary2Fnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnSaveTMRecordSummary2();
}
static int _OnCancelTMRecordSummary2Fnc(CWnd* pWnd) {
	return ((CTMRecordSummary2*)pWnd)->OnCancelTMRecordSummary2();
}
CTMRecordSummary2::CTMRecordSummary2(CWnd* pParent) :
	CGuiDialog(pParent) {

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();

}
CTMRecordSummary2::~CTMRecordSummary2() {
}
void CTMRecordSummary2::OnCreateComponents() {
	m_wndTerminatedDateLabel.Create(this, _T("Terminated Date"), 10, 30, 125, 55);
	m_wndTerminatedDate.Create(this, 130, 30, 255, 55);
	m_wndResultLabel.Create(this, _T("Result"), 260, 30, 375, 55);
	m_wndResult.Create(this, 380, 30, 775, 55);
	m_wndDieDateLabel.Create(this, _T("Die Date"), 780, 30, 860, 55);
	m_wndRecordSummary.Create(this, _T("Record Summary"), 5, 5, 995, 575);
	m_wndDieDate.Create(this, 865, 30, 990, 55);
	m_wndAdmitDiseaseLabel.Create(this, _T("Admit Disease"), 10, 60, 125, 130);
	m_wndAdmitDisease.Create(this, 130, 60, 990, 130, 1, 0, 1);
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 135, 125, 205);
	m_wndMainDisease.Create(this, 130, 135, 990, 205, 1, 0, 1);
	m_wndPathologyLabel.Create(this, _T("Pathology"), 10, 210, 125, 280);
	m_wndPathology.Create(this, 130, 210, 990, 280, 1, 0, 1);
	m_wndMotherDiseaseLabel.Create(this, _T("MotherDisease"), 10, 285, 125, 355);
	m_wndMotherDisease.Create(this, 130, 285, 990, 355, 1, 0, 1);
	m_wndTreatmentMethodLabel.Create(this, _T("Treatment Method"), 10, 359, 125, 429);
	m_wndTreatmentMethod.Create(this, 130, 360, 990, 430, 1, 0, 1);
	m_wndTransferLabel.Create(this, _T("Transfer"), 10, 435, 125, 505);
	m_wndTransfer.Create(this, 130, 435, 990, 505, 1, 0, 1);
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 510, 125, 570);
	m_wndSuggestion.Create(this, 130, 510, 990, 570, 1, 0, 1);
	m_wndUpdate.Create(this, _T("&Update"), 660, 580, 740, 605);
	m_wndSave.Create(this, _T("&Save"), 745, 580, 825, 605);
	m_wndCancel.Create(this, _T("&Cancel"), 830, 580, 910, 605);
	m_wndPrint.Create(this, _T("&Print"), 915, 580, 995, 605);

}
void CTMRecordSummary2::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//m_wndTerminatedDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTerminatedDate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1024);
	//m_wndDieDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDisease.SetLimitText(1024);
	m_wndAdmitDisease.SetCheckValue(true);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndPathology.SetLimitText(1024);
	m_wndPathology.SetCheckValue(true);
	m_wndMotherDisease.SetLimitText(1024);
	m_wndMotherDisease.SetCheckValue(true);
	m_wndTreatmentMethod.SetLimitText(1024);
	m_wndTreatmentMethod.SetCheckValue(true);
	m_wndTransfer.SetLimitText(1024);
	m_wndTransfer.SetCheckValue(true);
	m_wndSuggestion.SetLimitText(1024);
	m_wndSuggestion.SetCheckValue(true);

	m_wndResult.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_clinical_recordTbl.SetTableName(_T("hms_clinical_record"));
	m_hms_clinical_recordTbl.AddField(_T("hcr_updatedby"), dfText, 15);
	m_hms_clinical_recordTbl.AddField(_T("hcr_updateddate"), dfText, 512);
	m_hms_clinical_recordTbl.AddField(_T("hcr_conclusion"), dfText, 512);
	m_hms_clinical_recordTbl.AddField(_T("HCR_MAINDISEASE"), dfText, 1024);
	//m_hms_clinical_recordTbl.AddField(_T("HCR_RELDISEASE"), dfText, 254); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_DISCHARGEDATE"), dfDateTime);
	m_hms_clinical_recordTbl.AddField(_T("HCR_PATHOLOGICAL"), dfText, 1024);
	//m_hms_clinical_recordTbl.AddField(_T("HCR_TESTS"), dfText, 512); 
	//m_hms_clinical_recordTbl.AddField(_T("HCR_SUMMARIZE"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_GSUGGESTION3"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("HCR_RESULT"), dfText, 1);
	m_hms_clinical_recordTbl.AddField(_T("HCR_GMETHOD"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("HCR_DISCHARGE"), dfText, 1);
	m_hms_clinical_recordTbl.AddField(_T("hcr_diedate"), dfDateTime);
	m_hms_clinical_recordTbl.AddField(_T("hcr_goutstate"), dfText, 254);
	m_hms_clinical_recordTbl.AddField(_T("hcr_motherdisease"), dfText, 1024);

}
void CTMRecordSummary2::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//m_wndTerminatedDate.SetEvent(WE_CHANGE, _OnTerminatedDateChangeFnc);
	//m_wndTerminatedDate.SetEvent(WE_SETFOCUS, _OnTerminatedDateSetfocusFnc);
	//m_wndTerminatedDate.SetEvent(WE_KILLFOCUS, _OnTerminatedDateKillfocusFnc);
	m_wndTerminatedDate.SetEvent(WE_CHECKVALUE, _OnTerminatedDateCheckValueFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	//m_wndDieDate.SetEvent(WE_CHANGE, _OnDieDateChangeFnc);
	//m_wndDieDate.SetEvent(WE_SETFOCUS, _OnDieDateSetfocusFnc);
	//m_wndDieDate.SetEvent(WE_KILLFOCUS, _OnDieDateKillfocusFnc);
	m_wndDieDate.SetEvent(WE_CHECKVALUE, _OnDieDateCheckValueFnc);
	//m_wndAdmitDisease.SetEvent(WE_CHANGE, _OnAdmitDiseaseChangeFnc);
	//m_wndAdmitDisease.SetEvent(WE_SETFOCUS, _OnAdmitDiseaseSetfocusFnc);
	//m_wndAdmitDisease.SetEvent(WE_KILLFOCUS, _OnAdmitDiseaseKillfocusFnc);
	m_wndAdmitDisease.SetEvent(WE_CHECKVALUE, _OnAdmitDiseaseCheckValueFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndPathology.SetEvent(WE_CHANGE, _OnPathologyChangeFnc);
	//m_wndPathology.SetEvent(WE_SETFOCUS, _OnPathologySetfocusFnc);
	//m_wndPathology.SetEvent(WE_KILLFOCUS, _OnPathologyKillfocusFnc);
	m_wndPathology.SetEvent(WE_CHECKVALUE, _OnPathologyCheckValueFnc);
	//m_wndMotherDisease.SetEvent(WE_CHANGE, _OnMotherDiseaseChangeFnc);
	//m_wndMotherDisease.SetEvent(WE_SETFOCUS, _OnMotherDiseaseSetfocusFnc);
	//m_wndMotherDisease.SetEvent(WE_KILLFOCUS, _OnMotherDiseaseKillfocusFnc);
	m_wndMotherDisease.SetEvent(WE_CHECKVALUE, _OnMotherDiseaseCheckValueFnc);
	//m_wndTreatmentMethod.SetEvent(WE_CHANGE, _OnTreatmentMethodChangeFnc);
	//m_wndTreatmentMethod.SetEvent(WE_SETFOCUS, _OnTreatmentMethodSetfocusFnc);
	//m_wndTreatmentMethod.SetEvent(WE_KILLFOCUS, _OnTreatmentMethodKillfocusFnc);
	m_wndTreatmentMethod.SetEvent(WE_CHECKVALUE, _OnTreatmentMethodCheckValueFnc);
	//m_wndTransfer.SetEvent(WE_CHANGE, _OnTransferChangeFnc);
	//m_wndTransfer.SetEvent(WE_SETFOCUS, _OnTransferSetfocusFnc);
	//m_wndTransfer.SetEvent(WE_KILLFOCUS, _OnTransferKillfocusFnc);
	m_wndTransfer.SetEvent(WE_CHECKVALUE, _OnTransferCheckValueFnc);
	//m_wndSuggestion.SetEvent(WE_CHANGE, _OnSuggestionChangeFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_CHECKVALUE, _OnSuggestionCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);


	GetDataToScreen();

}
void CTMRecordSummary2::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndTerminatedDate.GetDlgCtrlID(), m_szTerminatedDate);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndDieDate.GetDlgCtrlID(), m_szDieDate);
	DDX_Text(pDX, m_wndAdmitDisease.GetDlgCtrlID(), m_szAdmitDisease);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndPathology.GetDlgCtrlID(), m_szPathology);
	DDX_Text(pDX, m_wndMotherDisease.GetDlgCtrlID(), m_szMotherDisease);
	DDX_Text(pDX, m_wndTreatmentMethod.GetDlgCtrlID(), m_szTreatmentMethod);
	DDX_Text(pDX, m_wndTransfer.GetDlgCtrlID(), m_szTransfer);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);
}
void CTMRecordSummary2::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT * FROM hms_clinical_record ") \
		_T(" WHERE hcr_docno = %ld"), m_nDocNo);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_conclusion"), m_szAdmitDisease);
		rs.GetValue(_T("HCR_MAINDISEASE"), m_szMainDisease);
		//rs.GetValue(_T("HCR_RELDISEASE"), m_szRelatedDisease);
		rs.GetValue(_T("HCR_DISCHARGEDATE"), m_szTerminatedDate);
		rs.GetValue(_T("HCR_PATHOLOGICAL"), m_szPathology);
		//rs.GetValue(_T("HCR_TESTS"), m_szParaclinicResult);
		//rs.GetValue(_T("HCR_SUMMARIZE"), m_szClinography);
		rs.GetValue(_T("HCR_GSUGGESTION3"), m_szSuggestion);
		rs.GetValue(_T("HCR_RESULT"), m_szResultKey);
		rs.GetValue(_T("HCR_GMETHOD"), m_szTreatmentMethod);
		rs.GetValue(_T("hcr_diedate"), m_szDieDate);
		rs.GetValue(_T("hcr_goutstate"), m_szTransfer);
		rs.GetValue(_T("hcr_motherdisease"), m_szMotherDisease);
		szSQL.Format(_T("SELECT htr_admitdate, htr_sumtreat FROM hms_treatment_record WHERE htr_docno = %ld AND htr_idx = %ld"), m_nDocNo, pMF->m_nRefIndex);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF()) {
			rs.GetValue(_T("htr_admitdate"), m_szAdmitDate);
		}

		CString tmpStr;
		rs.GetValue(_T("hcr_discharge"), tmpStr);
		if (tmpStr != _T("Y"))
		{
			CString tmpDate;
			CDate dte;
			dte.ParseDate(pMF->GetSysDate());
			dte += 1;
			tmpDate.Format(_T("%s"), dte.GetDate());
			m_szTerminatedDate.Format(_T("%s 06:00"), tmpDate);
		}

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CTMRecordSummary2::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_hms_clinical_recordTbl.SetValue(_T("hcr_updatedby"), pMF->GetCurrentUser());
	m_hms_clinical_recordTbl.SetValue(_T("hcr_updateddate"), pMF->GetSysDateTime());
	m_hms_clinical_recordTbl.SetValue(_T("hcr_conclusion"), m_szAdmitDisease);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_MAINDISEASE"), m_szMainDisease);
	//m_hms_clinical_recordTbl.SetValue(_T("HCR_RELDISEASE"), m_szRelatedDisease);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_DISCHARGEDATE"), m_szTerminatedDate);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_PATHOLOGICAL"), m_szPathology);
	//m_hms_clinical_recordTbl.SetValue(_T("HCR_TESTS"), m_szParaclinicResult);
	//m_hms_clinical_recordTbl.SetValue(_T("HCR_SUMMARIZE"), m_szClinography);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_GSUGGESTION3"), m_szSuggestion);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_RESULT"), m_szResultKey);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_GMETHOD"), m_szTreatmentMethod);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_DISCHARGE"), _T("Y"));
	m_hms_clinical_recordTbl.SetValue(_T("hcr_goutstate"), m_szTransfer);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_motherdisease"), m_szMotherDisease);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_diedate"), m_szDieDate);
}
void CTMRecordSummary2::SetDefaultValues() {

	m_szTerminatedDate.Empty();
	m_szResultKey.Empty();
	m_szDieDate.Empty();
	m_szAdmitDisease.Empty();
	m_szMainDisease.Empty();
	m_szPathology.Empty();
	m_szMotherDisease.Empty();
	m_szTreatmentMethod.Empty();
	m_szTransfer.Empty();
	m_szSuggestion.Empty();

}
int CTMRecordSummary2::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
	case VM_ADD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 3, 4, -1);
		SetDefaultValues();
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 1, 2, -1);
		if (m_szTerminatedDate.IsEmpty())
			m_szTerminatedDate = pMF->GetSysDateTime();
		break;
	case VM_VIEW:
		EnableControls(FALSE);
		EnableButtons(FALSE, 1, 2, -1);
		break;
	case VM_NONE:
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 3, -1);
		SetDefaultValues();
		break;
	};
	m_wndDieDate.EnableWindow(0);
	UpdateData(FALSE);
	return nOldMode;
}
/*void CTMRecordSummary2::OnTerminatedDateChange(){

} */
/*void CTMRecordSummary2::OnTerminatedDateSetfocus(){

} */
/*void CTMRecordSummary2::OnTerminatedDateKillfocus(){

} */
int CTMRecordSummary2::OnTerminatedDateCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT case when htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') then 0 else -1 end") \
		_T(" FROM hms_clinical_record LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)"), m_szTerminatedDate);
	rs.ExecSQL(szSQL);
	return rs.GetIntValue();
}
void CTMRecordSummary2::OnResultSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CTMRecordSummary2::OnResultSelendok() {
	UpdateData();
	if (m_szResultKey == _T("5") || m_szResultKey == _T("6")) {
		m_wndDieDate.EnableWindow();
		m_wndDieDate.SetCheckValue(true);
	}
	else {
		m_wndDieDate.EnableWindow(0);
		m_wndDieDate.SetCheckValue(false);
	}
}
/*void CTMRecordSummary2::OnResultSetfocus(){

}*/
/*void CTMRecordSummary2::OnResultKillfocus(){

}*/
long CTMRecordSummary2::OnResultLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()) {
		szWhere.Format(_T(" and ss_id='%s' "), m_szResultKey);
	}
	m_wndResult.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE 1=1 AND ss_id = 'hms_result' ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndResult.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMRecordSummary2::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CTMRecordSummary2::OnDieDateChange(){

} */
/*void CTMRecordSummary2::OnDieDateSetfocus(){

} */
/*void CTMRecordSummary2::OnDieDateKillfocus(){

} */
int CTMRecordSummary2::OnDieDateCheckValue() {
	return 0;
}
/*void CTMRecordSummary2::OnAdmitDiseaseChange(){

} */
/*void CTMRecordSummary2::OnAdmitDiseaseSetfocus(){

} */
/*void CTMRecordSummary2::OnAdmitDiseaseKillfocus(){

} */
int CTMRecordSummary2::OnAdmitDiseaseCheckValue() {
	return 0;
}
/*void CTMRecordSummary2::OnMainDiseaseChange(){

} */
/*void CTMRecordSummary2::OnMainDiseaseSetfocus(){

} */
/*void CTMRecordSummary2::OnMainDiseaseKillfocus(){

} */
int CTMRecordSummary2::OnMainDiseaseCheckValue() {
	UpdateData();
	if (m_szMainDisease.Trim().IsEmpty())
	{
		return -1;
	}
	return 0;
}
/*void CTMRecordSummary2::OnPathologyChange(){

} */
/*void CTMRecordSummary2::OnPathologySetfocus(){

} */
/*void CTMRecordSummary2::OnPathologyKillfocus(){

} */
int CTMRecordSummary2::OnPathologyCheckValue() {
	return 0;
}
/*void CTMRecordSummary2::OnMotherDiseaseChange(){

} */
/*void CTMRecordSummary2::OnMotherDiseaseSetfocus(){

} */
/*void CTMRecordSummary2::OnMotherDiseaseKillfocus(){

} */
int CTMRecordSummary2::OnMotherDiseaseCheckValue() {
	return 0;
}
/*void CTMRecordSummary2::OnTreatmentMethodChange(){

} */
/*void CTMRecordSummary2::OnTreatmentMethodSetfocus(){

} */
/*void CTMRecordSummary2::OnTreatmentMethodKillfocus(){

} */
int CTMRecordSummary2::OnTreatmentMethodCheckValue() {
	return 0;
}
/*void CTMRecordSummary2::OnTransferChange(){

} */
/*void CTMRecordSummary2::OnTransferSetfocus(){

} */
/*void CTMRecordSummary2::OnTransferKillfocus(){

} */
int CTMRecordSummary2::OnTransferCheckValue() {
	return 0;
}
/*void CTMRecordSummary2::OnSuggestionChange(){

} */
/*void CTMRecordSummary2::OnSuggestionSetfocus(){

} */
/*void CTMRecordSummary2::OnSuggestionKillfocus(){

} */
int CTMRecordSummary2::OnSuggestionCheckValue() {
	return 0;
}
void CTMRecordSummary2::OnUpdateSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnEditTMRecordSummary2();
}
void CTMRecordSummary2::OnSaveSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnSaveTMRecordSummary2();
}
void CTMRecordSummary2::OnCancelSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnCancelTMRecordSummary2();
}
void CTMRecordSummary2::OnPrintSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CString tmpStr, szCurDate;
	CReportSection* rptHeader = NULL, * rptGrpHeader = NULL;
	CString szSQL;


	szSQL.Format(_T(" SELECT   hcr_patientno as patientno,  upper(Get_patientname(hcr_docno)) patient_name, ") \
		_T("           Extract(YEAR FROM hp_birthdate) yob, hd_cardno, hd_disrate,") \
		_T("           hcr_recordno record_no, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
		_T("           to_char(hcr_admitdate, 'dd/mm/yyyy hh24:mi:ss') as admit_date, ") \
		_T("           to_char(hcr_dischargedate, 'dd/mm/yyyy hh24:mi:ss') as discharged_date, ") \
		_T("           hcr_conclusion diagnostic, ") \
		_T("           hcr_maindisease disease_process, ") \
		_T("           hcr_tests paraclinic_result, ") \
		_T("           hcr_pathological pathology, ") \
		_T("           hcr_reldisease related_disease, ") \
		_T("           hcr_gmethod treatment_method, ") \
		_T("           get_syssel_desc('hms_result', hcr_result) status, ") \
		_T("		   hcr_gsuggestion3 suggestion, hcr_cancer, hcr_cancer_time, hcr_goutstate chuyen_vien, hcr_motherdisease benh_me, ") \
		_T("           to_char(hcr_diedate, 'dd/mm/yyyy hh24:mi:ss') as die_date ") \
		_T(" FROM      hms_clinical_record ") \
		_T(" LEFT JOIN hms_patient ON ( hcr_patientno = hp_patientno ) ") \
		_T(" LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
		_T(" WHERE     hcr_docno = %ld "), m_nDocNo);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;
	CString szCancer;
	int nCancerTime;
	rs.GetValue(_T("hcr_cancer"), szCancer);
	rs.GetValue(_T("hcr_cancer_time"), nCancerTime);

	if (szCancer == _T("Y"))
	{
		if (!rpt.Init(_T("Reports\\HMS\\TM_TONGKETBENHANRAVIEN1_UT.RPT")))
			return;
	}
	else
	{
		if (!rpt.Init(_T("Reports\\HMS\\TM_TONGKETBENHANRAVIEN_TE.RPT")))
			return;
	}


	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		rptHeader->SetValue(_T("Department"), pMF->GetDepartmentID());
		rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("patient_name")));
		rptHeader->SetValue(_T("yob"), rs.GetValue(_T("yob")));
		rs.GetValue(_T("patientno"), tmpStr);
		rptHeader->SetValue(_T("PatientNo"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptHeader->SetValue(_T("DocumentNo"), tmpStr);
		rs.GetValue(_T("hd_cardno"), tmpStr);
		rptHeader->SetValue(_T("CardNo"), tmpStr);

		rs.GetValue(_T("hd_disrate"), tmpStr);
		rptHeader->SetValue(_T("DisRate"), tmpStr);

		rs.GetValue(_T("fobject"), tmpStr);
		rptHeader->SetValue(_T("Object"), tmpStr);
		rs.GetValue(_T("record_no"), tmpStr);
		if (szCancer == _T("Y"))
		{
			tmpStr.AppendFormat(_T(" - %.3dK"), nCancerTime);
		}
		rptHeader->SetValue(_T("RecordNo"), tmpStr);
		rptHeader->SetValue(_T("Admitdate"), rs.GetValue(_T("admit_date")));
		rptHeader->SetValue(_T("Dischargedate"), rs.GetValue(_T("discharged_date")));
	}
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(1));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("diagnosticte"), rs.GetValue(_T("diagnostic")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(2));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("diseaseprocesste"), rs.GetValue(_T("disease_process")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(3));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("pathology"), rs.GetValue(_T("pathology")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(4));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("motherdisease"), rs.GetValue(_T("benh_me")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(5));
	rptGrpHeader->SetValue(_T("treatmethod"), rs.GetValue(_T("treatment_method")));
	//if (rptGrpHeader)
	//{
	//	rptGrpHeader->SetValue(_T("maindisease"), rs.GetValue(_T("main_disease")));
	//	rptGrpHeader->SetValue(_T("relateddisease"), rs.GetValue(_T("related_disease")));
	//}
	//rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(6));
	//if (rptGrpHeader)
	//	rptGrpHeader->SetValue(_T("treatmethod"), rs.GetValue(_T("treatment_method")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(7));
	if (rptGrpHeader)
	{
		rptGrpHeader->SetValue(_T("status"), rs.GetValue(_T("status")));
		rptGrpHeader->SetValue(_T("suggestion"), rs.GetValue(_T("suggestion")));
	}

	szCurDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDate.Mid(8, 2), szCurDate.Mid(5, 2), szCurDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	szCurDate = rs.GetValue(_T("discharged_date"));

	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("DischargeDate1")), szCurDate.Left(2), szCurDate.Mid(3, 2), szCurDate.Mid(6, 4));
	rpt.GetReportFooter()->SetValue(_T("Dischargedate1"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("DischargeDate2"), tmpStr);

	rpt.PrintPreview();
}

int CTMRecordSummary2::OnAddTMRecordSummary2() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CTMRecordSummary2::OnEditTMRecordSummary2() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szAcceptedFee, szStatus;

	szSQL.Format(_T("SELECT htr_status, htrf_acceptedfee FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_status"), szStatus);

	rs.GetValue(_T("htrf_acceptedfee"), szAcceptedFee);

	//if(szAcceptedFee == _T("A") || szAcceptedFee == _T("P") || szAcceptedFee == _T("Y"))
	if ((szAcceptedFee == _T("A") || szAcceptedFee == _T("P") || szAcceptedFee == _T("Y")))
	{
		if (pMF->m_UserInfo.su_groupid == _T("A") && pMF->CheckPermission(_T("admin.TM.100.1")))
		{
		}
		else
		{
			ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 \x111\x1B0\x1EE3\x63 \x78\xE1\x63 nh\x1EADn \x63hi ph\xED ho\x1EB7\x63 th\x61nh to\xE1n vi\x1EC7n ph\xED."));
			return -1;
		}
	}

	SetMode(VM_EDIT);
	return 0;
}
int CTMRecordSummary2::OnDeleteTMRecordSummary2() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelTMRecordSummary2();
	}
	return 0;
}
int CTMRecordSummary2::OnSaveTMRecordSummary2() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szExcept;
	if (GetMode() == VM_ADD) {
		//szSQL = m_hms_clinical_recordTbl.GetInsertSQL();
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE hcr_docno = %ld"), m_nDocNo);
		//if (pMF->IsOnceRollback(m_nDocNo))
		//	szExcept = _T("hcr_dischargedate");
		szSQL = m_hms_clinical_recordTbl.GetUpdateSQL(szExcept);
		szSQL += szWhere;
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
	{
		SetMode(VM_VIEW);

	}
	else
	{
	}
	return ret;
}
int CTMRecordSummary2::OnCancelTMRecordSummary2() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
int CTMRecordSummary2::OnTMRecordSummary2ListLoadData() {
	return 0;
}


