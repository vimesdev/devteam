#include "TMRecordSummary.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "HMSParaclinicResultDialog.h"
#include "HMSTreatDrugDialog.h"
#include "HMSTreatOperationDialog.h"
#include "StringToken.h"
#include "HMSCoDisease.h"

/*static void _OnTerminatedDateChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTerminatedDateChange();
} */
/*static void _OnTerminatedDateSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTerminatedDateSetfocus();} */
	/*static void _OnTerminatedDateKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnTerminatedDateKillfocus();
	} */
static int _OnTerminatedDateCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnTerminatedDateCheckValue();
}
static void _OnResultSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CTMRecordSummary*)pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnResultSelendokFnc(CWnd* pWnd) {
	((CTMRecordSummary*)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnResultAddNew();
}*/
/*static void _OnAdmitDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnAdmitDiseaseChange();
} */
/*static void _OnAdmitDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnAdmitDiseaseSetfocus();} */
	/*static void _OnAdmitDiseaseKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnAdmitDiseaseKillfocus();
	} */
static int _OnAdmitDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnAdmitDiseaseCheckValue();
}
/*static void _OnClinographyChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnClinographyChange();
}
static void _OnClinographySetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnClinographySetfocus();}
static void _OnClinographyKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnClinographyKillfocus();
}
static int _OnClinographyCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnClinographyCheckValue();
}
*/
/*static void _OnParaclinicResultChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnParaclinicResultChange();
} */
/*static void _OnParaclinicResultSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnParaclinicResultSetfocus();} */
	/*static void _OnParaclinicResultKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnParaclinicResultKillfocus();
	} */
static int _OnParaclinicResultCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnParaclinicResultCheckValue();
}
/*static void _OnPathologyChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnPathologyChange();
} */
/*static void _OnPathologySetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnPathologySetfocus();} */
	/*static void _OnPathologyKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnPathologyKillfocus();
	} */
static int _OnPathologyCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnPathologyCheckValue();
}

static void _OnICD10SelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CTMRecordSummary*)pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
}
static void _OnICD10SelendokFnc(CWnd* pWnd) {
	((CTMRecordSummary*)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnICD10AddNew();
}*/

/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnMainDiseaseSetfocus();} */
	/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnMainDiseaseKillfocus();
	} */
static int _OnMainDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnMainDiseaseCheckValue();
}
/*static void _OnRelatedDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnRelatedDiseaseChange();
} */
/*static void _OnRelatedDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnRelatedDiseaseSetfocus();} */
	/*static void _OnRelatedDiseaseKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnRelatedDiseaseKillfocus();
	} */
static int _OnRelatedDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnRelatedDiseaseCheckValue();
}

static void _OnRelatedDiseaseSelectFnc(CWnd* pWnd) {
	((CTMRecordSummary*)pWnd)->OnRelatedDiseaseSelect();
}

static void _OnLoadPreviousTreatmentInfoFnc(CWnd* pWnd) {
	((CTMRecordSummary*)pWnd)->OnLoadPreviousTreatmentInfoSelect();
}
/*static void _OnTreatmentMethodChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTreatmentMethodChange();
} */
/*static void _OnTreatmentMethodSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTreatmentMethodSetfocus();} */
	/*static void _OnTreatmentMethodKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnTreatmentMethodKillfocus();
	} */
static int _OnTreatmentMethodCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnTreatmentMethodCheckValue();
}
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSuggestionSetfocus();} */
	/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
		((CTMRecordSummary *)pWnd)->OnSuggestionKillfocus();
	} */
static int _OnSuggestionCheckValueFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnSuggestionCheckValue();
}
static void _OnUpdateSelectFnc(CWnd* pWnd) {
	CTMRecordSummary* pVw = (CTMRecordSummary*)pWnd;
	pVw->OnUpdateSelect();
}

static void _OnSaveSelectFnc(CWnd* pWnd) {
	CTMRecordSummary* pVw = (CTMRecordSummary*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd* pWnd) {
	CTMRecordSummary* pVw = (CTMRecordSummary*)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintSelectFnc(CWnd* pWnd) {
	CTMRecordSummary* pVw = (CTMRecordSummary*)pWnd;
	pVw->OnPrintSelect();
}
static void _OnOperationSelectFnc(CWnd* pWnd) {
	CTMRecordSummary* pVw = (CTMRecordSummary*)pWnd;
	pVw->OnOperationSelect();
}
static void _OnDrugSelectFnc(CWnd* pWnd) {
	CTMRecordSummary* pVw = (CTMRecordSummary*)pWnd;
	pVw->OnDrugSelect();
}
static void _OnParaclinicButtonSelectFnc(CWnd* pWnd) {
	CTMRecordSummary* pVw = (CTMRecordSummary*)pWnd;
	pVw->OnParaclinicButtonSelect();
}
static int _OnAddTMRecordSummaryFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnAddTMRecordSummary();
}
static int _OnEditTMRecordSummaryFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnEditTMRecordSummary();
}
static int _OnDeleteTMRecordSummaryFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnDeleteTMRecordSummary();
}
static int _OnSaveTMRecordSummaryFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnSaveTMRecordSummary();
}
static int _OnCancelTMRecordSummaryFnc(CWnd* pWnd) {
	return ((CTMRecordSummary*)pWnd)->OnCancelTMRecordSummary();
}
CTMRecordSummary::CTMRecordSummary(CWnd* pParent, int nDocNo) :
	CGuiDialog(pParent) {
	m_nDocNo = nDocNo;
	m_nDlgWidth = 1005;
	m_nDlgHeight = 685;
	m_szTitle = _T("Phi\x1EBFu t\x1ED5ng k\x1EBFt r\x61 vi\x1EC7n");
	SetDefaultValues();
	m_bIsPreviousInfo = false;

}
CTMRecordSummary::~CTMRecordSummary() {
}
void CTMRecordSummary::OnCreateComponents() {
	m_wndRecordSummary.Create(this, _T("Record Summary"), 5, 5, 995, 655);
	m_wndTerminatedDateLabel.Create(this, _T("Terminated Date"), 10, 30, 150, 55);
	m_wndTerminatedDate.Create(this, 155, 30, 275, 55);
	m_wndResultLabel.Create(this, _T("Result"), 280, 30, 395, 55);
	m_wndResult.Create(this, 400, 30, 815, 55);
	m_wndAdmitDiseaseLabel.Create(this, _T("Admit Disease"), 10, 60, 150, 85);
	m_wndAdmitDisease.Create(this, 155, 60, 990, 140, 1, 0, 1);
	m_wndClinographyLabel.Create(this, _T("Clinography"), 10, 145, 150, 170);
	m_wndClinography.Create(this, 155, 145, 990, 245, 1, 0, 1);
	m_wndParaclinicResultLabel.Create(this, _T("Paraclinic Result"), 10, 250, 150, 280);
	m_wndParaclinicResult.Create(this, 155, 250, 990, 345, 1, 0, 1);

	m_wndICD10Label.Create(this, _T("ICD 10"), 10, 350, 150, 375);
	m_wndICD10.Create(this, 155, 350, 990, 375);

	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 380, 150, 405);
	m_wndMainDisease.Create(this, 155, 380, 990, 430, 1, 0, 1);
	m_wndRelatedDiseaseLabel.Create(this, _T("Related Disease"), 10, 435, 150, 460);
	m_wndRelatedDisease.Create(this, 155, 435, 990, 485, 1, 0, 1);
	m_wndTreatmentMethodLabel.Create(this, _T("Treatment Method"), 10, 490, 150, 515);
	m_wndTreatmentMethod.Create(this, 155, 490, 990, 600, 1, 0, 1);
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 605, 150, 650);
	m_wndSuggestion.Create(this, 155, 605, 990, 650, 1, 0, 1);
	m_wndUpdate.Create(this, _T("&Update"), 620, 660, 710, 685);
	m_wndSave.Create(this, _T("&Save"), 715, 660, 805, 685);
	m_wndCancel.Create(this, _T("&Cancel"), 810, 660, 900, 685);
	m_wndPrint.Create(this, _T("&Print"), 905, 660, 995, 685);
	m_wndOperation.Create(this, _T("PTTT"), 25, 520, 85, 545);
	m_wndDrug.Create(this, _T("Drug"), 90, 520, 150, 545);
	m_wndParaclinicButton.Create(this, _T("\x43h\x1ECDn k\x1EBFt qu\x1EA3"), 47, 285, 150, 310);
	m_wndLoadPreviousTreatmentInfo.Create(this, _T("Load previous treatment info"), 5, 660, 205, 685);
	m_wndParaclinicButton.ModifyStyle(WS_TABSTOP, 0);
	m_wndOperation.ModifyStyle(WS_TABSTOP, 0);
	m_wndDrug.ModifyStyle(WS_TABSTOP, 0);


}
void CTMRecordSummary::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndTerminatedDate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1);
	m_wndAdmitDisease.SetLimitText(35);
	m_wndAdmitDisease.SetCheckValue(true);
	m_wndClinography.SetLimitText(2000);
	m_wndClinography.SetCheckValue(true);
	m_wndParaclinicResult.SetLimitText(512);
	m_wndParaclinicResult.SetCheckValue(true);
	m_wndPathology.SetLimitText(2000);
	m_wndPathology.SetCheckValue(true);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelatedDisease.SetLimitText(1024);
	//m_wndRelatedDisease.SetCheckValue(true);
	m_wndTreatmentMethod.SetLimitText(1024);
	m_wndTreatmentMethod.SetCheckValue(true);
	m_wndSuggestion.SetLimitText(1024);
	m_wndSuggestion.SetCheckValue(true);

	m_wndICD10.Format(2, 1, 18);
	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

	m_wndResult.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_clinical_recordTbl.SetTableName(_T("hms_clinical_record"));
	m_hms_clinical_recordTbl.AddField(_T("HCR_UPDATEDBY"), dfText, 15);
	m_hms_clinical_recordTbl.AddField(_T("HCR_UPDATEDDATE"), dfDateTime);
	m_hms_clinical_recordTbl.AddField(_T("HCR_MAINDISEASE"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("HCR_RELDISEASE"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("HCR_DISCHARGEDATE"), dfDateTime);
	//m_hms_clinical_recordTbl.AddField(_T("HCR_PATHOLOGICAL"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_TESTS"), dfText, 512);
	m_hms_clinical_recordTbl.AddField(_T("HCR_SUMMARIZE"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("HCR_GSUGGESTION3"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("HCR_RESULT"), dfText, 1);
	m_hms_clinical_recordTbl.AddField(_T("HCR_GMETHOD"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("HCR_DISCHARGE"), dfText, 1);
	m_hms_clinical_recordTbl.AddField(_T("HCR_MAINICD"), dfText, 13);

}
void CTMRecordSummary::OnSetWindowEvents() {
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
	//m_wndAdmitDisease.SetEvent(WE_CHANGE, _OnAdmitDiseaseChangeFnc);
	//m_wndAdmitDisease.SetEvent(WE_SETFOCUS, _OnAdmitDiseaseSetfocusFnc);
	//m_wndAdmitDisease.SetEvent(WE_KILLFOCUS, _OnAdmitDiseaseKillfocusFnc);
	m_wndAdmitDisease.SetEvent(WE_CHECKVALUE, _OnAdmitDiseaseCheckValueFnc);
	//m_wndClinography.SetEvent(WE_CHANGE, _OnClinographyChangeFnc);
	//m_wndClinography.SetEvent(WE_SETFOCUS, _OnClinographySetfocusFnc);
	//m_wndClinography.SetEvent(WE_KILLFOCUS, _OnClinographyKillfocusFnc);
	//m_wndClinography.SetEvent(WE_CHECKVALUE, _OnClinographyCheckValueFnc);
	//m_wndParaclinicResult.SetEvent(WE_CHANGE, _OnParaclinicResultChangeFnc);
	//m_wndParaclinicResult.SetEvent(WE_SETFOCUS, _OnParaclinicResultSetfocusFnc);
	//m_wndParaclinicResult.SetEvent(WE_KILLFOCUS, _OnParaclinicResultKillfocusFnc);
	m_wndParaclinicResult.SetEvent(WE_CHECKVALUE, _OnParaclinicResultCheckValueFnc);
	//m_wndPathology.SetEvent(WE_CHANGE, _OnPathologyChangeFnc);
	//m_wndPathology.SetEvent(WE_SETFOCUS, _OnPathologySetfocusFnc);
	//m_wndPathology.SetEvent(WE_KILLFOCUS, _OnPathologyKillfocusFnc);
	m_wndPathology.SetEvent(WE_CHECKVALUE, _OnPathologyCheckValueFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelatedDisease.SetEvent(WE_CHANGE, _OnRelatedDiseaseChangeFnc);
	//m_wndRelatedDisease.SetEvent(WE_SETFOCUS, _OnRelatedDiseaseSetfocusFnc);
	//m_wndRelatedDisease.SetEvent(WE_KILLFOCUS, _OnRelatedDiseaseKillfocusFnc);
	m_wndRelatedDisease.SetEvent(WE_CHECKVALUE, _OnRelatedDiseaseCheckValueFnc);
	//m_wndTreatmentMethod.SetEvent(WE_CHANGE, _OnTreatmentMethodChangeFnc);
	//m_wndTreatmentMethod.SetEvent(WE_SETFOCUS, _OnTreatmentMethodSetfocusFnc);
	//m_wndTreatmentMethod.SetEvent(WE_KILLFOCUS, _OnTreatmentMethodKillfocusFnc);
	m_wndTreatmentMethod.SetEvent(WE_CHECKVALUE, _OnTreatmentMethodCheckValueFnc);
	//m_wndSuggestion.SetEvent(WE_CHANGE, _OnSuggestionChangeFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_CHECKVALUE, _OnSuggestionCheckValueFnc);

	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndDrug.SetEvent(WE_CLICK, _OnDrugSelectFnc);
	m_wndParaclinicButton.SetEvent(WE_CLICK, _OnParaclinicButtonSelectFnc);

	m_wndRelatedDiseaseLabel.SetHyperlink(true);
	m_wndRelatedDiseaseLabel.SetEvent(WE_CLICK, _OnRelatedDiseaseSelectFnc);
	m_wndLoadPreviousTreatmentInfo.SetEvent(WE_CLICK, _OnLoadPreviousTreatmentInfoFnc);
	GetDataToScreen();
	GetScreenToData();
}
void CTMRecordSummary::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndTerminatedDate.GetDlgCtrlID(), m_szTerminatedDate);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_Text(pDX, m_wndAdmitDisease.GetDlgCtrlID(), m_szAdmitDisease);
	DDX_Text(pDX, m_wndClinography.GetDlgCtrlID(), m_szClinography);
	DDX_Text(pDX, m_wndParaclinicResult.GetDlgCtrlID(), m_szParaclinicResult);
	//DDX_Text(pDX, m_wndPathology.GetDlgCtrlID(), m_szPathology);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelatedDisease.GetDlgCtrlID(), m_szRelatedDisease);
	DDX_Text(pDX, m_wndTreatmentMethod.GetDlgCtrlID(), m_szTreatmentMethod);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);

}
void CTMRecordSummary::GetDataToScreen()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nTreatTime = pMF->m_nTreatTime;
	if (m_bIsPreviousInfo && nTreatTime > 1)
	{
		nTreatTime -= 1;
	}
	szSQL.Format(_T(" SELECT * ") \
		_T(" FROM hms_clinical_record_hist ") \
		_T(" WHERE hcr_docno = %ld") \
		_T(" AND hcr_treattime = %d")
		, m_nDocNo, nTreatTime);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		szSQL.Format(_T(" SELECT * ") \
			_T(" FROM hms_clinical_record ") \
			_T(" WHERE hcr_docno = %ld"), m_nDocNo);
		rs.ExecSQL(szSQL);
	}
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_admitdisease"), m_szAdmitDisease);
		rs.GetValue(_T("HCR_MAINDISEASE"), m_szMainDisease);
		rs.GetValue(_T("HCR_RELDISEASE"), m_szRelatedDisease);
		rs.GetValue(_T("HCR_DISCHARGEDATE"), m_szTerminatedDate);
		//rs.GetValue(_T("HCR_PATHOLOGICAL"), m_szPathology);
		rs.GetValue(_T("HCR_TESTS"), m_szParaclinicResult);
		rs.GetValue(_T("HCR_SUMMARIZE"), m_szClinography);
		rs.GetValue(_T("HCR_GSUGGESTION3"), m_szSuggestion);
		rs.GetValue(_T("HCR_RESULT"), m_szResultKey);
		rs.GetValue(_T("HCR_GMETHOD"), m_szTreatmentMethod);
		rs.GetValue(_T("HCR_MAINICD"), m_szICD10Key);
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
			//}


			szSQL.Format(_T("SELECT htr_admitdate, htr_sumtreat, htr_outpatient ") \
				_T(" FROM hms_treatment_record ") \
				_T(" WHERE htr_docno = %ld AND htr_idx = %ld"), m_nDocNo, pMF->m_nRefIndex);
			rs.ExecSQL(szSQL);
			if (!rs.IsEOF()) {
				rs.GetValue(_T("htr_admitdate"), m_szAdmitDate);
			}
			rs.GetValue(_T("htr_outpatient"), m_szOutpatient);
			nTreatTime = pMF->GetTreatTime();
			if (nTreatTime > 0)
			{
				szSQL.Format(_T("WITH tbl as (") \
					_T("	SELECT htr_admitdate as admit_date, htr_dischargedate as discharge_date, ") \
					_T("	last_value(htr_status) over (order by null) as status") \
					_T("	FROM hms_treatment_record") \
					_T("	WHERE htr_docno = %ld AND htr_treattime = %d ") \
					_T("	ORDER BY htr_treattime, htr_idx) ") \
					_T(" SELECT min(admit_date) as admit_date, ") \
					_T(" case when status = 'T' then max(discharge_date) else trunc(current_timestamp) + interval '1' day + interval '6' hour end as discharge_date") \
					_T(" FROM tbl ") \
					_T(" GROUP BY status"), m_nDocNo, nTreatTime);
				rs.ExecSQL(szSQL);
				rs.GetValue(_T("admit_date"), m_szAdmitDate);
				rs.GetValue(_T("discharge_date"), m_szTerminatedDate);
			}
		}
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

	//Link bệnh án C13 từ khám bệnh vào
	if (pMF->UserC13ExamTab() == _T("Y") && (pMF->m_szDept == _T("C1.3") || pMF->m_szDept == _T("C1.3NT") || pMF->GetCurrentUser() == _T("lttmaivimes")))
	{
		szSQL.Format(_T("hms_check_is_create_tongketba(%ld) "), pMF->m_nDocumentNo);
		int ret = str2int(pMF->ExecDML(szSQL));
		//_msg(_T("%s"), szSQL);
		if (ret <= 0)
		{
			m_szAdmitDisease.Empty();
			m_szClinography.Empty();

			szSQL.Format(_T("SELECT * FROM HMS_EXAM_C13_LINK_VIEW ") \
				_T(" WHERE docno=%ld AND ROWNUM<=1 "), pMF->m_nDocumentNo);

			rs.ExecSQL(szSQL);

			if (!rs.IsEOF())
			{
				rs.GetValue(_T("chandoansobo"), m_szAdmitDisease);
				rs.GetValue(_T("benhsu"), m_szClinography);
				rs.GetValue(_T("chandoanxacdinh_icd10"), m_szICD10Key);
				UpdateData(false);
			}
		}
		else
		{

		}
	}

}
void CTMRecordSummary::GetScreenToData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_hms_clinical_recordTbl.SetValue(_T("HCR_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_clinical_recordTbl.SetValue(_T("HCR_UPDATEDDATE"), pMF->GetSysDateTime());
	m_hms_clinical_recordTbl.SetValue(_T("HCR_MAINDISEASE"), m_szMainDisease);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_RELDISEASE"), m_szRelatedDisease);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_DISCHARGEDATE"), m_szTerminatedDate);
	//m_hms_clinical_recordTbl.SetValue(_T("HCR_PATHOLOGICAL"), m_szPathology);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_TESTS"), m_szParaclinicResult);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_SUMMARIZE"), m_szClinography);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_GSUGGESTION3"), m_szSuggestion);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_RESULT"), m_szResultKey);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_GMETHOD"), m_szTreatmentMethod);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_DISCHARGE"), _T("Y"));
	m_hms_clinical_recordTbl.SetValue(_T("HCR_MAINICD"), m_szICD10Key);
	if (GetMode() == VM_VIEW)
	{
		m_parser.PushRowData(&m_hms_clinical_recordTbl);
	}
	else if (GetMode() == VM_EDIT)
	{
		m_parser.PushRowData(&m_hms_clinical_recordTbl, true);
	}

}
void CTMRecordSummary::SetDefaultValues() {

	m_szTerminatedDate.Empty();
	m_szResultKey.Empty();
	m_szAdmitDisease.Empty();
	m_szClinography.Empty();
	m_szParaclinicResult.Empty();
	m_szPathology.Empty();
	m_szMainDisease.Empty();
	m_szRelatedDisease.Empty();
	m_szTreatmentMethod.Empty();
	m_szSuggestion.Empty();
	m_szOutpatient = _T("N");
	m_szICD10Key.Empty();
}
int CTMRecordSummary::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	m_wndParaclinicButton.EnableWindow(FALSE);
	m_wndOperation.EnableWindow(FALSE);
	m_wndDrug.EnableWindow(FALSE);
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
		m_wndParaclinicButton.EnableWindow(TRUE);
		m_wndOperation.EnableWindow(TRUE);
		m_wndDrug.EnableWindow(TRUE);

		if (pMF->GetCurrentUser() == _T("admin"))
		{
			m_wndTerminatedDate.EnableWindow(false);
			m_wndResult.EnableWindow(false);

		}

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

	m_wndAdmitDisease.EnableWindow(false);
	UpdateData(FALSE);
	return nOldMode;
}
/*void CTMRecordSummary::OnTerminatedDateChange(){

} */
/*void CTMRecordSummary::OnTerminatedDateSetfocus(){

} */
/*void CTMRecordSummary::OnTerminatedDateKillfocus(){

} */
int CTMRecordSummary::OnTerminatedDateCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	CString tmpDate = m_szTerminatedDate.Left(10);
	tmpDate.Trim();

	if (tmpDate.IsEmpty())
	{
		CDate dte;
		dte.ParseDate(pMF->GetSysDate());
		dte += 1;
		tmpDate.Format(_T("%s"), dte.GetDate());
		m_szTerminatedDate.Format(_T("%s 06:00"), tmpDate);
	}


	szSQL.Format(_T("SELECT CEIL(TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS') - TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS')) FROM dual "),
		m_szTerminatedDate, m_szAdmitDate);
	rs.ExecSQL(szSQL);
	int nDay = rs.GetIntValue();
	if (nDay < 0)
		return -1;
	return 0;
}
void CTMRecordSummary::OnResultSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CTMRecordSummary::OnResultSelendok() {

}
/*void CTMRecordSummary::OnResultSetfocus(){

}*/
/*void CTMRecordSummary::OnResultKillfocus(){

}*/
long CTMRecordSummary::OnResultLoadData() {
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
/*void CTMRecordSummary::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CTMRecordSummary::OnAdmitDiseaseChange(){

} */
/*void CTMRecordSummary::OnAdmitDiseaseSetfocus(){

} */
/*void CTMRecordSummary::OnAdmitDiseaseKillfocus(){

} */
int CTMRecordSummary::OnAdmitDiseaseCheckValue() {
	return 0;
}
/*void CTMRecordSummary::OnClinographyChange(){

}
void CTMRecordSummary::OnClinographySetfocus(){
	return;

}
void CTMRecordSummary::OnClinographyKillfocus(){

}
int CTMRecordSummary::OnClinographyCheckValue(){
	return 0;
}
*/
/*void CTMRecordSummary::OnParaclinicResultChange(){

} */
/*void CTMRecordSummary::OnParaclinicResultSetfocus(){

} */
/*void CTMRecordSummary::OnParaclinicResultKillfocus(){

} */
int CTMRecordSummary::OnParaclinicResultCheckValue() {
	return 0;
}
/*void CTMRecordSummary::OnPathologyChange(){

} */
/*void CTMRecordSummary::OnPathologySetfocus(){

} */
/*void CTMRecordSummary::OnPathologyKillfocus(){

} */
int CTMRecordSummary::OnPathologyCheckValue() {
	return 0;
}

void CTMRecordSummary::OnICD10SelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CTMRecordSummary::OnICD10Selendok() {
	UpdateData(true);
	if (m_szMainDisease.IsEmpty())
	{
		m_szMainDisease.Format(_T("%s [%s]"), m_wndICD10.GetCurrent(1), m_wndICD10.GetCurrent(0));
	}
	else
	{
		if (m_szMainDisease.Find(m_szICD10Key) == -1)
			m_szMainDisease.AppendFormat(_T(" [%s]"), m_wndICD10.GetCurrent(0));
	}
	UpdateData(false);

}
/*void CTMRecordSummary::OnICD10Setfocus(){

}*/
/*void CTMRecordSummary::OnICD10Killfocus(){

}*/
long CTMRecordSummary::OnICD10LoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadICD(&m_wndICD10, m_szICD10Key);


	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()) {
		szWhere.Format(_T("hi_icd='%s' "), m_szICD10Key);
	};
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd  %s  ORDER BY hi_icd "), szWhere);

	m_wndICD10.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndICD10.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CTMRecordSummary::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CTMRecordSummary::OnMainDiseaseChange(){

} */
/*void CTMRecordSummary::OnMainDiseaseSetfocus(){

} */
/*void CTMRecordSummary::OnMainDiseaseKillfocus(){

} */
int CTMRecordSummary::OnMainDiseaseCheckValue() {
	UpdateData();
	if (m_szMainDisease.Trim().IsEmpty())
	{
		return -1;
	}
	return 0;
}
/*void CTMRecordSummary::OnRelatedDiseaseChange(){

} */
/*void CTMRecordSummary::OnRelatedDiseaseSetfocus(){

} */
/*void CTMRecordSummary::OnRelatedDiseaseKillfocus(){

} */
int CTMRecordSummary::OnRelatedDiseaseCheckValue() {
	return 0;
}

#include "HMSFastDiagnosticDialog.h"
void CTMRecordSummary::OnRelatedDiseaseSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);

	CHMSCoDisease dlg(this);
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;

	if (dlg.DoModal() == IDOK)
	{
		m_szRelatedDisease = dlg.m_szDisease;
		UpdateData(FALSE);
	}

	/*CHMSFastDiagnosticDialog dlg(this);
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
	dlg.m_nPatientNo = pMF->m_nPatientNo;

	if(dlg.DoModal() == IDOK)
	{
		m_szRelatedDisease = dlg.m_szConclusion;
		UpdateData(FALSE);
	}*/

	return;
}

/*void CTMRecordSummary::OnTreatmentMethodChange(){

} */
/*void CTMRecordSummary::OnTreatmentMethodSetfocus(){

} */
/*void CTMRecordSummary::OnTreatmentMethodKillfocus(){

} */
int CTMRecordSummary::OnTreatmentMethodCheckValue() {
	return 0;
}
/*void CTMRecordSummary::OnSuggestionChange(){

} */
/*void CTMRecordSummary::OnSuggestionSetfocus(){

} */
/*void CTMRecordSummary::OnSuggestionKillfocus(){

} */
int CTMRecordSummary::OnSuggestionCheckValue() {
	return 0;
}
/*void CTMRecordSummary::OnTotalDayChange(){

} */
/*void CTMRecordSummary::OnTotalDaySetfocus(){

} */
/*void CTMRecordSummary::OnTotalDayKillfocus(){

} */

void CTMRecordSummary::OnUpdateSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnEditTMRecordSummary();
}
void CTMRecordSummary::OnSaveSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnSaveTMRecordSummary();
}
void CTMRecordSummary::OnCancelSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnCancelTMRecordSummary();
}
void CTMRecordSummary::OnPrintSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CString tmpStr, szCurDate, szReportName, szFilePath;
	CStringArray arrField, arrColumn;
	CReportSection* rptHeader = NULL, * rptGrpHeader = NULL;
	arrField.Add(_T("patientname"));
	arrField.Add(_T("yob"));
	arrField.Add(_T("RecordNo"));
	arrField.Add(_T("AdmitDate"));
	arrField.Add(_T("DischargeDate"));
	arrField.Add(_T("Diagnostic"));
	arrField.Add(_T("Diseaseprocess"));
	arrField.Add(_T("ParaclinicResult"));
	arrField.Add(_T("Pathology"));
	arrField.Add(_T("Maindisease"));
	arrField.Add(_T("RelatedDisease"));
	arrField.Add(_T("TreatMethod"));
	arrField.Add(_T("Status"));
	arrField.Add(_T("Suggestion"));

	arrColumn.Add(_T("patient_name"));
	arrColumn.Add(_T("yob"));
	arrColumn.Add(_T("Record_No"));
	arrColumn.Add(_T("Admit_Date"));
	arrColumn.Add(_T("Discharged_Date"));
	arrColumn.Add(_T("Diagnostic"));
	arrColumn.Add(_T("Disease_process"));
	arrColumn.Add(_T("Paraclinic_Result"));
	arrColumn.Add(_T("Pathology"));
	arrColumn.Add(_T("Main_disease"));
	arrColumn.Add(_T("Related_Disease"));
	arrColumn.Add(_T("Treatment_Method"));
	arrColumn.Add(_T("Status"));
	arrColumn.Add(_T("Suggestion"));
	CString szSQL;


	szSQL.Format(_T(" SELECT   hcr_patientno as patientno,  upper(Get_patientname(hcr_docno)) patient_name, ") \
		_T("           Extract(YEAR FROM hp_birthdate) yob, hd_cardno, hd_disrate,") \
		_T("           hcr_recordno record_no, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
		_T("           to_char(hcr_admitdate, 'dd/mm/yyyy hh24:mi:ss') as admit_date, ") \
		_T("           to_char(hcr_dischargedate, 'dd/mm/yyyy hh24:mi:ss') as discharged_date, ") \
		_T("           hd_conclusion diagnostic, ") \
		_T("           hcr_summarize disease_process, ") \
		_T("           hcr_tests paraclinic_result, ") \
		_T("           hcr_pathological pathology, ") \
		_T("           hcr_maindisease main_disease, ") \
		_T("           hcr_reldisease related_disease, ") \
		_T("           hcr_gmethod treatment_method, ") \
		_T("           get_syssel_desc('hms_result', hcr_result) status, ") \
		_T("		   hcr_gsuggestion3 suggestion, hcr_cancer, hcr_cancer_time, ") \
		_T("			hcr_admitdisease as admit_disease") \
		_T(" FROM      hms_clinical_record ") \
		_T(" LEFT JOIN hms_patient ON ( hcr_patientno = hp_patientno ) ") \
		_T(" LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
		_T(" WHERE     hcr_docno = %ld "), m_nDocNo);
	if (m_szOutpatient == _T("Y"))
	{
		szSQL.Format(_T(" SELECT   hcr_patientno as patientno,  upper(Get_patientname(hcr_docno)) patient_name, ") \
			_T("           Extract(YEAR FROM hp_birthdate) yob, hd_cardno, hd_disrate,") \
			_T("           hcr_recordno record_no, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
			_T("           to_char(htr_admitdate, 'dd/mm/yyyy hh24:mi:ss') as admit_date, ") \
			_T("           to_char(htr_dischargedate, 'dd/mm/yyyy hh24:mi:ss') as discharged_date, ") \
			_T("           hd_conclusion diagnostic, ") \
			_T("           hcr_summarize disease_process, ") \
			_T("           hcr_tests paraclinic_result, ") \
			_T("           hcr_pathological pathology, ") \
			_T("           hcr_maindisease main_disease, ") \
			_T("           hcr_reldisease related_disease, ") \
			_T("           hcr_gmethod treatment_method, ") \
			_T("           get_syssel_desc('hms_result', hcr_result) status, ") \
			_T("		   hcr_gsuggestion3 suggestion, hcr_cancer, hcr_cancer_time,") \
			_T("			hcr_admitdisease as admit_disease") \
			_T(" FROM      hms_clinical_record ") \
			_T(" LEFT JOIN hms_patient ON ( hcr_patientno = hp_patientno ) ") \
			_T(" LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
			_T(" LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
			_T(" WHERE     hcr_docno = %ld AND htr_idx = %ld "), m_nDocNo, pMF->m_nRefIndex);
	}
	int nTreatTime = pMF->GetTreatTime();
	if (nTreatTime > 0)
	{
		szSQL.Format(_T(" SELECT   hcr_patientno as patientno,  upper(Get_patientname(hcr_docno)) patient_name, ") \
			_T("           Extract(YEAR FROM hp_birthdate) yob, hd_cardno, hd_disrate,") \
			_T("           hcr_recordno record_no, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
			_T("           (select to_char(min(htr_admitdate), 'dd/mm/yyyy hh24:mi:ss') from hms_treatment_record where htr_docno = hcr_docno and htr_treattime = %d) as admit_date, ") \
			_T("           (select to_char(max(htr_dischargedate), 'dd/mm/yyyy hh24:mi:ss') from hms_treatment_record where htr_docno = hcr_docno and htr_treattime = %d) as discharged_date, ") \
			_T("           hd_conclusion diagnostic, ") \
			_T("           hcr_summarize disease_process, ") \
			_T("           hcr_tests paraclinic_result, ") \
			_T("           hcr_pathological pathology, ") \
			_T("           hcr_maindisease main_disease, ") \
			_T("           hcr_reldisease related_disease, ") \
			_T("           hcr_gmethod treatment_method, ") \
			_T("           get_syssel_desc('hms_result', hcr_result) status, ") \
			_T("		   hcr_gsuggestion3 suggestion, hcr_cancer, hcr_cancer_time, ") \
			_T("			hcr_admitdisease as admit_disease") \
			_T(" FROM      hms_clinical_record ") \
			_T(" LEFT JOIN hms_patient ON ( hcr_patientno = hp_patientno ) ") \
			_T(" LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
			_T(" WHERE     hcr_docno = %ld "), nTreatTime, nTreatTime, m_nDocNo);
	}
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;
	CString szCancer;
	int nCancerTime;
	rs.GetValue(_T("hcr_cancer"), szCancer);
	rs.GetValue(_T("hcr_cancer_time"), nCancerTime);

	szReportName.Format(_T("TM_TONGKETBENHANRAVIEN1%s.RPT")
		, szCancer == _T("Y") ? _T("_UT") : _T(""));
	szFilePath.Format(_T("Reports\\HMS\\%s"), szReportName);
	CString szId = _T("tongketbenhanravien_108"), szItemID = _T("");
	bool bRet = pMF->OnPostGenDocX(&rpt, szId, m_nDocNo, pMF->m_nRefIndex, szReportName, szItemID);
	if (bRet)
	{
		return;
	}

	if (!rpt.Init(szFilePath))
		return;


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
	{
		//rptGrpHeader->SetValue(_T("diagnostic"), rs.GetValue(_T("diagnostic")));
		rptGrpHeader->SetValue(_T("admit_disease"), rs.GetValue(_T("admit_disease")));
	}
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(2));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("diseaseprocess"), rs.GetValue(_T("disease_process")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(3));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("paraclinicresult"), rs.GetValue(_T("paraclinic_result")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(4));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("pathology"), rs.GetValue(_T("pathology")));
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(5));
	if (rptGrpHeader)
	{
		rptGrpHeader->SetValue(_T("maindisease"), rs.GetValue(_T("main_disease")));
		rptGrpHeader->SetValue(_T("relateddisease"), rs.GetValue(_T("related_disease")));
	}
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(6));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("treatmethod"), rs.GetValue(_T("treatment_method")));
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



void CTMRecordSummary::OnOperationSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (GetMode() != VM_EDIT)
		return;
	CHMSTreatOperationDialog dlg(this, m_nDocNo, true);
	if (dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szTreatmentMethod.AppendFormat(_T("\r\n%s"), dlg.m_szData);
		UpdateData(FALSE);
	}
}
void CTMRecordSummary::OnDrugSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (GetMode() != VM_EDIT)
		return;
	CHMSTreatDrugDialog dlg(this, m_nDocNo);
	if (dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szTreatmentMethod.AppendFormat(_T("\r\n%s"), dlg.m_szData);
		UpdateData(FALSE);
	}
}
void CTMRecordSummary::OnParaclinicButtonSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (GetMode() != VM_EDIT)
		return;
	CHMSParaclinicResultDialog dlg(this, m_nDocNo, true);
	if (dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szParaclinicResult = dlg.m_szData;
		UpdateData(FALSE);
	}
}
int CTMRecordSummary::OnAddTMRecordSummary() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CTMRecordSummary::OnEditTMRecordSummary() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CString szAcceptedFee, szStatus, szEndept;
	CString szSQL;

	//Lấy ra khoa cuối cùng để check nếu ko phải khoa cuối thì không cho làm phiếu tổng kết, #1003

	szSQL.Format(_T(" SELECT htr_deptid from HMS_TREATMENT_RECORD") \
		_T(" WHERE htr_docno=%ld and htr_idx in ") \
		_T(" (select max(htr_idx) as idx  from ") \
		_T(" HMS_TREATMENT_RECORD where htr_docno=%ld)"), pMF->m_nDocumentNo, pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	rs.GetValue(_T("htr_deptid"), szEndept);

	if (pMF->GetCurrentDepartmentID() != szEndept)
	{
		ShowMessageBox(_T("Chỉ được phép làm phiếu tổng kết ở khoa cuối ra viện!"));
		return -1;
	}

	szSQL.Format(_T("SELECT htr_status, ") \
		_T("		htrf_acceptedfee ") \
		_T(" FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d")
		, pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_status"), szStatus);
	rs.GetValue(_T("htrf_acceptedfee"), szAcceptedFee);

	//if((szAcceptedFee == _T("A") || szAcceptedFee == _T("P") || szAcceptedFee == _T("Y")) && pMF->GetCurrentUser() != _T("admin"))
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
int CTMRecordSummary::OnDeleteTMRecordSummary() {
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
		OnCancelTMRecordSummary();
	}
	return 0;
}
int CTMRecordSummary::OnSaveTMRecordSummary() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szExcept;
	if (GetMode() == VM_ADD) {
		//szSQL = m_hms_clinical_recordTbl.GetInsertSQL();
	}
	else if (GetMode() == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE hcr_docno = %ld"), m_nDocNo);
		//if (pMF->IsOnceRollback(m_nDocNo))
		//	szExcept = _T("hcr_dischargedate");
		szSQL = m_hms_clinical_recordTbl.GetUpdateSQL(szExcept);
		szSQL += szWhere;
	}
	szSQL.Format(_T("hms_clinical_record_update(%ld, %d, q'$%s$')")
		, pMF->m_nDocumentNo, pMF->m_nTreatTime, pMF->DbfMap2Json(&m_hms_clinical_recordTbl));
	_fmsg(_T("%s"), szSQL);
	//int ret = pMF->ExecSQL(szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret > 0)
	{
		szSQL.Format(_T("UPDATE hms_treatment_record ") \
			_T(" SET htr_dischargedate = to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T(" WHERE htr_docno = %ld and htr_idx = %d")
			, m_szTerminatedDate, m_nDocNo, pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);
		SetMode(VM_VIEW);
		CString szEvent, szDescr, szRowChange = m_parser.GetRowChange();
		if (!szRowChange.IsEmpty())
		{
			if (szRowChange.GetLength() >= 2000)
			{
				CStringToken tok(szRowChange, _T("|"));
				CString tmpStr;
				szEvent.Format(_T("hms_clinical_record_edit"));
				for (int i = 0; i < tok.GetSize(); i++)
				{
					tok.GetAt(i, tmpStr);
					szDescr.Format(_T("[hcr_docno=%ld|hcr_treattime=%d] %s")
						, pMF->m_nDocumentNo, pMF->m_nTreatTime, tmpStr);
					pMF->SystemLog(szEvent, szDescr);
				}
			}
			else
			{
				szEvent.Format(_T("hms_clinical_record_edit"));
				szDescr.Format(_T("[hcr_docno=%ld|hcr_treattime=%d] %s")
					, pMF->m_nDocumentNo, pMF->m_nTreatTime, szRowChange);
				pMF->SystemLog(szEvent, szDescr);
			}
		}
	}
	else
	{
	}
	return ret;
}
int CTMRecordSummary::OnCancelTMRecordSummary() {
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
int CTMRecordSummary::OnTMRecordSummaryListLoadData()
{
	return 0;
}

void CTMRecordSummary::OnLoadPreviousTreatmentInfoSelect()
{
	m_bIsPreviousInfo = true;
	GetDataToScreen();
	m_bIsPreviousInfo = false;
}