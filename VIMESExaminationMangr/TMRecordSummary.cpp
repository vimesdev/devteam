#include "TMRecordSummary.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "EMParaclinicResultDialog.h"
#include "HMSTreatDrugDialog.h"
#include "HMSTreatOperationDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnTerminatedDateChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTerminatedDateChange();
} */
/*static void _OnTerminatedDateSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTerminatedDateSetfocus();} */ 
/*static void _OnTerminatedDateKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTerminatedDateKillfocus();
} */
static int _OnTerminatedDateCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnTerminatedDateCheckValue();
} 
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMRecordSummary* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnResultLoadData();
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
static int _OnAdmitDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnAdmitDiseaseCheckValue();
} 
/*static void _OnSummarizeChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSummarizeChange();
} */
/*static void _OnSummarizeSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSummarizeSetfocus();} */ 
/*static void _OnSummarizeKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSummarizeKillfocus();
} */
static int _OnSummarizeCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnSummarizeCheckValue();
} 
/*static void _OnParaclinicResultChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnParaclinicResultChange();
} */
/*static void _OnParaclinicResultSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnParaclinicResultSetfocus();} */ 
/*static void _OnParaclinicResultKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnParaclinicResultKillfocus();
} */
static int _OnParaclinicResultCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnParaclinicResultCheckValue();
} 
/*static void _OnPathologyChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnPathologyChange();
} */
/*static void _OnPathologySetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnPathologySetfocus();} */ 
/*static void _OnPathologyKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnPathologyKillfocus();
} */
static int _OnPathologyCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnPathologyCheckValue();
} 
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelatedDiseaseChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnRelatedDiseaseChange();
} */
/*static void _OnRelatedDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnRelatedDiseaseSetfocus();} */ 
/*static void _OnRelatedDiseaseKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnRelatedDiseaseKillfocus();
} */
static int _OnRelatedDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnRelatedDiseaseCheckValue();
} 
/*static void _OnTreatmentMethodChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTreatmentMethodChange();
} */
/*static void _OnTreatmentMethodSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTreatmentMethodSetfocus();} */ 
/*static void _OnTreatmentMethodKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnTreatmentMethodKillfocus();
} */
static int _OnTreatmentMethodCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnTreatmentMethodCheckValue();
} 
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSuggestionSetfocus();} */ 
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnSuggestionKillfocus();
} */
static int _OnSuggestionCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnSuggestionCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CTMRecordSummary *pVw = (CTMRecordSummary *)pWnd;
	pVw->OnUpdateSelect();
} 

static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMRecordSummary *pVw = (CTMRecordSummary *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMRecordSummary *pVw = (CTMRecordSummary *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMRecordSummary *pVw = (CTMRecordSummary *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnOperationSelectFnc(CWnd *pWnd){
	CTMRecordSummary *pVw = (CTMRecordSummary *)pWnd;
	pVw->OnOperationSelect();
} 
static void _OnDrugSelectFnc(CWnd *pWnd){
	CTMRecordSummary *pVw = (CTMRecordSummary *)pWnd;
	pVw->OnDrugSelect();
} 
static void _OnParaclinicButtonSelectFnc(CWnd *pWnd){
	CTMRecordSummary *pVw = (CTMRecordSummary *)pWnd;
	pVw->OnParaclinicButtonSelect();
} 
static int _OnAddTMRecordSummaryFnc(CWnd *pWnd){
	 return ((CTMRecordSummary*)pWnd)->OnAddTMRecordSummary();
} 
static int _OnEditTMRecordSummaryFnc(CWnd *pWnd){
	 return ((CTMRecordSummary*)pWnd)->OnEditTMRecordSummary();
} 
static int _OnDeleteTMRecordSummaryFnc(CWnd *pWnd){
	 return ((CTMRecordSummary*)pWnd)->OnDeleteTMRecordSummary();
} 
static int _OnSaveTMRecordSummaryFnc(CWnd *pWnd){
	 return ((CTMRecordSummary*)pWnd)->OnSaveTMRecordSummary();
} 
static int _OnCancelTMRecordSummaryFnc(CWnd *pWnd){
	 return ((CTMRecordSummary*)pWnd)->OnCancelTMRecordSummary();
} 
CTMRecordSummary::CTMRecordSummary(CWnd *pParent):
	CGuiDialog(pParent){
	m_szRecordNo.Empty();
	m_nDlgWidth = 1005;
	m_nDlgHeight = 685;
	m_szTitle = _T("Phiếu tổng kết điều trị ngoại trú");
	SetDefaultValues();
}
CTMRecordSummary::~CTMRecordSummary(){
}
void CTMRecordSummary::OnCreateComponents(){
	m_wndRecordSummary.Create(this, _T("Record Summary"), 5, 5, 995, 650);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 150, 55);
	m_wndFromDate.Create(this,155, 30, 250, 55); 
	m_wndTerminatedDateLabel.Create(this, _T("Terminated Date"), 255, 30, 355, 55);
	m_wndTerminatedDate.Create(this,360, 30, 450, 55); 
	m_wndResultLabel.Create(this, _T("Result"), 455, 30, 570, 55);
	m_wndResult.Create(this,575, 30, 990, 55); 
//	m_wndAdmitDiseaseLabel.Create(this, _T("Admit Disease"), 10, 60, 150, 85);
//	m_wndAdmitDisease.Create(this,155, 60, 990, 100,1, 0, 1); 
	m_wndSummarizeLabel.Create(this, _T("Summarize"), 10, 105, 150, 175);
	m_wndSummarize.Create(this,155, 60, 990, 245, 1, 0, 1); 
	m_wndParaclinicResultLabel.Create(this, _T("Paraclinic Result"), 10, 250, 150, 280);
	m_wndParaclinicResult.Create(this,155, 250, 990, 375,1, 0, 1); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 380, 150, 405);
	m_wndMainDisease.Create(this,155, 380, 990, 430,1, 0, 1); 
	m_wndRelatedDiseaseLabel.Create(this, _T("Related Disease"), 10, 435, 150, 460);
	m_wndRelatedDisease.Create(this,155, 435, 990, 485,1, 0, 1); 
	m_wndTreatmentMethodLabel.Create(this, _T("Treatment Method"), 10, 489, 150, 514);
	m_wndTreatmentMethod.Create(this,155, 489, 990, 599,1, 0, 1); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 604, 150, 649);
	m_wndSuggestion.Create(this,155, 604, 990, 649,1, 0, 1); 
	m_wndUpdate.Create(this, _T("&Update"), 660, 654, 740, 679);
	m_wndSave.Create(this, _T("&Save"), 745, 654, 825, 679);
	m_wndCancel.Create(this, _T("&Cancel"), 830, 654, 910, 679);
	m_wndPrint.Create(this, _T("&Print"), 915, 654, 995, 679);
//	m_wndOperation.Create(this, _T("PTTT"), 25, 519, 85, 544);
//	m_wndDrug.Create(this, _T("Drug"), 90, 519, 150, 544);
//	m_wndParaclinicButton.Create(this, _T("\x43h\x1ECDn k\x1EBFt qu\x1EA3"), 47, 285, 150, 310);
//	m_wndParaclinicButton.ModifyStyle(WS_TABSTOP, 0);
//	m_wndOperation.ModifyStyle(WS_TABSTOP, 0);
//	m_wndDrug.ModifyStyle(WS_TABSTOP, 0);


}
void CTMRecordSummary::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTerminatedDate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1);
//	m_wndAdmitDisease.SetLimitText(35);
//	m_wndAdmitDisease.SetCheckValue(true);
	m_wndSummarize.SetLimitText(1024);
	m_wndSummarize.SetCheckValue(true);
	m_wndParaclinicResult.SetLimitText(1024);
	m_wndParaclinicResult.SetCheckValue(false);
//	m_wndPathology.SetLimitText(2000);
//	m_wndPathology.SetCheckValue(true);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelatedDisease.SetLimitText(254);
	m_wndRelatedDisease.SetCheckValue(false);
	m_wndTreatmentMethod.SetLimitText(1024);
	m_wndTreatmentMethod.SetCheckValue(false);
	m_wndSuggestion.SetLimitText(254);
	m_wndSuggestion.SetCheckValue(false);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	
	
	m_wndResult.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_outpatientTbl.SetTableName(_T("hms_outpatient"));
	m_hms_outpatientTbl.AddField(_T("HOP_USERID"), dfText, 15);
	m_hms_outpatientTbl.AddField(_T("HOP_DOCNO"), dfLong);
	m_hms_outpatientTbl.AddField(_T("HOP_FROMDATE"), dfDate); 
	m_hms_outpatientTbl.AddField(_T("HOP_TODATE"), dfDate); 
	m_hms_outpatientTbl.AddField(_T("HOP_RESULT"), dfText, 1); 
	m_hms_outpatientTbl.AddField(_T("HOP_SUMMARIZE"), dfText, 512); 
	m_hms_outpatientTbl.AddField(_T("HOP_PARACLINICRES"), dfText, 1024); 
	m_hms_outpatientTbl.AddField(_T("HOP_MAINDISEASE"), dfText, 254); 
	m_hms_outpatientTbl.AddField(_T("HOP_RELDISEASE"), dfText, 254); 
	m_hms_outpatientTbl.AddField(_T("HOP_TREATMETHOD"), dfText, 1024); 
	m_hms_outpatientTbl.AddField(_T("HOP_SUGGESTION"), dfText, 254); 


	
}
void CTMRecordSummary::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
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
//	m_wndAdmitDisease.SetEvent(WE_CHECKVALUE, _OnAdmitDiseaseCheckValueFnc);
	//m_wndSummarize.SetEvent(WE_CHANGE, _OnSummarizeChangeFnc);
	//m_wndSummarize.SetEvent(WE_SETFOCUS, _OnSummarizeSetfocusFnc);
	//m_wndSummarize.SetEvent(WE_KILLFOCUS, _OnSummarizeKillfocusFnc);
	m_wndSummarize.SetEvent(WE_CHECKVALUE, _OnSummarizeCheckValueFnc);
	//m_wndParaclinicResult.SetEvent(WE_CHANGE, _OnParaclinicResultChangeFnc);
	//m_wndParaclinicResult.SetEvent(WE_SETFOCUS, _OnParaclinicResultSetfocusFnc);
	//m_wndParaclinicResult.SetEvent(WE_KILLFOCUS, _OnParaclinicResultKillfocusFnc);
	m_wndParaclinicResult.SetEvent(WE_CHECKVALUE, _OnParaclinicResultCheckValueFnc);
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

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
//	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
//	m_wndDrug.SetEvent(WE_CLICK, _OnDrugSelectFnc);
//	m_wndParaclinicButton.SetEvent(WE_CLICK, _OnParaclinicButtonSelectFnc);	
	GetDataToScreen();
	SetMode(VM_EDIT);
}
void CTMRecordSummary::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndTerminatedDate.GetDlgCtrlID(), m_szTerminatedDate);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
//	DDX_Text(pDX, m_wndAdmitDisease.GetDlgCtrlID(), m_szAdmitDisease);
	DDX_Text(pDX, m_wndSummarize.GetDlgCtrlID(), m_szSummarize);
	DDX_Text(pDX, m_wndParaclinicResult.GetDlgCtrlID(), m_szParaclinicResult);
	//DDX_Text(pDX, m_wndPathology.GetDlgCtrlID(), m_szPathology);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelatedDisease.GetDlgCtrlID(), m_szRelatedDisease);
	DDX_Text(pDX, m_wndTreatmentMethod.GetDlgCtrlID(), m_szTreatmentMethod);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);

}
void CTMRecordSummary::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hd_recordno FROM hms_doc WHERE hd_docno = %ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hd_recordno"), m_szRecordNo);
		szSQL.Format(_T(" SELECT * FROM hms_outpatient ") \
			_T(" WHERE hop_patientno = %ld and hop_recordno='%s' "), pMF->m_nPatientNo, m_szRecordNo);

		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{	
			rs.GetValue(_T("HOP_conclusion"), m_szAdmitDisease);
			rs.GetValue(_T("HOP_MAINDISEASE"), m_szMainDisease);
			rs.GetValue(_T("HOP_RELDISEASE"), m_szRelatedDisease);
			rs.GetValue(_T("HOP_FROMDATE"), m_szFromDate);
			rs.GetValue(_T("HOP_TODATE"), m_szTerminatedDate);
			rs.GetValue(_T("HOP_PARACLINICRES"), m_szParaclinicResult);
			rs.GetValue(_T("HOP_SUMMARIZE"), m_szSummarize);
			rs.GetValue(_T("HOP_SUGGESTION"), m_szSuggestion);
			rs.GetValue(_T("HOP_RESULT"), m_szResultKey);
			rs.GetValue(_T("HOP_TREATMETHOD"), m_szTreatmentMethod);
			
		}
		szSQL.Format(_T("SELECT hd_diagnostic, hd_suggestion, hd_reldisease, hd_enddate, hd_conclusion, hd_result ") \
				_T(" FROM hms_doc WHERE hd_docno = %ld"), pMF->m_nDocNo);
		rs.ExecSQL(szSQL);
		if(m_szMainDisease.IsEmpty()) rs.GetValue(_T("hd_diagnostic"), m_szMainDisease);
		if(m_szRelatedDisease.IsEmpty()) rs.GetValue(_T("HD_RELDISEASE"), m_szRelatedDisease);
		if(m_szFromDate.IsEmpty()) m_szFromDate = pMF->GetSysDate();
		if(m_szTerminatedDate.IsEmpty()) m_szTerminatedDate = pMF->GetSysDate();
		if(m_szSuggestion.IsEmpty()) rs.GetValue(_T("HD_SUGGESTION"), m_szSuggestion);
		if(m_szResultKey.IsEmpty()) rs.GetValue(_T("HD_RESULT"), m_szResultKey);
		if(m_szSummarize.IsEmpty())
		{
			szSQL.Format(_T("SELECT he_examine FROM hms_exam WHERE he_docno = %ld "), pMF->m_nDocumentNo);
			rs.ExecSQL(szSQL);
			CString tmpStr;
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("he_examine"), tmpStr);
				if(m_szSummarize.IsEmpty())
					m_szSummarize.AppendFormat(_T("%s"), tmpStr);
				else
					m_szSummarize.AppendFormat(_T("\r\n%s"), tmpStr);
				rs.MoveNext();
			}
		}
		SetMode(VM_VIEW);
	}
}
void CTMRecordSummary::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_hms_outpatientTbl.SetValue(_T("HOP_USERID"), pMF->GetCurrentUser());
	m_hms_outpatientTbl.SetValue(_T("HOP_DOCNO"), pMF->m_nDocumentNo);
	m_hms_outpatientTbl.SetValue(_T("HOP_FROMDATE"), m_szFromDate);
	m_hms_outpatientTbl.SetValue(_T("HOP_TODATE"), m_szTerminatedDate);
	m_hms_outpatientTbl.SetValue(_T("HOP_RESULT"), m_szResultKey);
	m_hms_outpatientTbl.SetValue(_T("HOP_SUMMARIZE"), m_szSummarize);
	m_hms_outpatientTbl.SetValue(_T("HOP_MAINDISEASE"), m_szMainDisease);
	m_hms_outpatientTbl.SetValue(_T("HOP_RELDISEASE"), m_szRelatedDisease);
	m_hms_outpatientTbl.SetValue(_T("HOP_PARACLINICRES"), m_szParaclinicResult);
	m_hms_outpatientTbl.SetValue(_T("HOP_TREATMETHOD"), m_szTreatmentMethod);
	m_hms_outpatientTbl.SetValue(_T("HOP_SUGGESTION"), m_szSuggestion);
	
	

}
void CTMRecordSummary::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szTerminatedDate.Empty();
	m_szResultKey.Empty();
	m_szAdmitDisease.Empty();
	m_szSummarize.Empty();
	m_szParaclinicResult.Empty();
	m_szPathology.Empty();
	m_szMainDisease.Empty();
	m_szRelatedDisease.Empty();
	m_szTreatmentMethod.Empty();
	m_szSuggestion.Empty();

}
int CTMRecordSummary::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
//		m_wndParaclinicButton.EnableWindow(FALSE);
//		m_wndOperation.EnableWindow(FALSE);
//		m_wndDrug.EnableWindow(FALSE);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
			if(m_szTerminatedDate.IsEmpty())
				m_szTerminatedDate = pMF->GetSysDate();
//			m_wndParaclinicButton.EnableWindow(TRUE);
//			m_wndOperation.EnableWindow(TRUE);
//			m_wndDrug.EnableWindow(TRUE);

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
//		m_wndAdmitDisease.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}

/*void CTMRecordSummary::OnFromDateChange(){
	
} */
/*void CTMRecordSummary::OnFromDateSetfocus(){
	
} */
/*void CTMRecordSummary::OnFromDateKillfocus(){
	
} */
int CTMRecordSummary::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnTerminatedDateChange(){
	
} */
/*void CTMRecordSummary::OnTerminatedDateSetfocus(){
	
} */
/*void CTMRecordSummary::OnTerminatedDateKillfocus(){
	
} */
int CTMRecordSummary::OnTerminatedDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT CEIL(TO_DATE('%s', 'YYYY-MM-DD') - TO_DATE('%s', 'YYYY-MM-DD')) FROM dual "), 
		m_szTerminatedDate.Left(10), m_szAdmitDate.Left(10));
	rs.ExecSQL(szSQL);
	int nDay = rs.GetIntValue();
	if(nDay < 0)
		return -1;
	return 0;
} 
void CTMRecordSummary::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMRecordSummary::OnResultSelendok(){
	 
}
/*void CTMRecordSummary::OnResultSetfocus(){
	
}*/
/*void CTMRecordSummary::OnResultKillfocus(){
	
}*/
long CTMRecordSummary::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
		szWhere.Format(_T(" and ss_id='%s' "), m_szResultKey);
	}
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE 1=1 AND ss_id = 'hms_result' ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
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
int CTMRecordSummary::OnAdmitDiseaseCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnSummarizeChange(){
	
} */
/*void CTMRecordSummary::OnSummarizeSetfocus(){
	
} */
/*void CTMRecordSummary::OnSummarizeKillfocus(){
	
} */
int CTMRecordSummary::OnSummarizeCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnParaclinicResultChange(){
	
} */
/*void CTMRecordSummary::OnParaclinicResultSetfocus(){
	
} */
/*void CTMRecordSummary::OnParaclinicResultKillfocus(){
	
} */
int CTMRecordSummary::OnParaclinicResultCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnPathologyChange(){
	
} */
/*void CTMRecordSummary::OnPathologySetfocus(){
	
} */
/*void CTMRecordSummary::OnPathologyKillfocus(){
	
} */
int CTMRecordSummary::OnPathologyCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnMainDiseaseChange(){
	
} */
/*void CTMRecordSummary::OnMainDiseaseSetfocus(){
	
} */
/*void CTMRecordSummary::OnMainDiseaseKillfocus(){
	
} */
int CTMRecordSummary::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnRelatedDiseaseChange(){
	
} */
/*void CTMRecordSummary::OnRelatedDiseaseSetfocus(){
	
} */
/*void CTMRecordSummary::OnRelatedDiseaseKillfocus(){
	
} */
int CTMRecordSummary::OnRelatedDiseaseCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnTreatmentMethodChange(){
	
} */
/*void CTMRecordSummary::OnTreatmentMethodSetfocus(){
	
} */
/*void CTMRecordSummary::OnTreatmentMethodKillfocus(){
	
} */
int CTMRecordSummary::OnTreatmentMethodCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnSuggestionChange(){
	
} */
/*void CTMRecordSummary::OnSuggestionSetfocus(){
	
} */
/*void CTMRecordSummary::OnSuggestionKillfocus(){
	
} */
int CTMRecordSummary::OnSuggestionCheckValue(){
	return 0;
} 
/*void CTMRecordSummary::OnTotalDayChange(){
	
} */
/*void CTMRecordSummary::OnTotalDaySetfocus(){
	
} */
/*void CTMRecordSummary::OnTotalDayKillfocus(){
	
} */

void CTMRecordSummary::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditTMRecordSummary();
} 
void CTMRecordSummary::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveTMRecordSummary();
} 
void CTMRecordSummary::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelTMRecordSummary();
} 
void CTMRecordSummary::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CString tmpStr, szCurDate;
	CStringArray arrField, arrColumn;
	CReportSection *rptHeader = NULL, *rptGrpHeader = NULL;
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

	
	szSQL.Format(_T(" SELECT   HOP_patientno as patientno,  upper(Get_patientname(HOP_docno)) patient_name, ") \
				_T("           Extract(YEAR FROM hp_birthdate) yob, hd_cardno, hd_disrate,") \
				_T("           HOP_recordno record_no, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
				_T("           to_char(HOP_fromdate, 'dd/mm/yyyy hh24:mi:ss') as admit_date, ") \
				_T("           to_char(HOP_todate, 'dd/mm/yyyy hh24:mi:ss') as discharged_date, ") \
				_T("           hd_conclusion diagnostic, ") \
				_T("           HOP_summarize disease_process, ") \
				_T("           HOP_paraclinicres paraclinic_result, ") \
				_T("           HOP_maindisease main_disease, ") \
				_T("           HOP_reldisease related_disease, ") \
				_T("           HOP_treatmethod treatment_method, ") \
				_T("           get_syssel_desc('hms_result', HOP_result) status, ") \
				_T("		   HOP_suggestion suggestion ") \
				_T(" FROM      hms_doc ") \
				_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
				_T(" LEFT JOIN hms_outpatient ON ( hop_patientno = hd_patientno and hd_recordno=hop_recordno) ") \
				_T(" WHERE     hd_docno = %ld "), pMF->m_nDocumentNo);
	
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if (rs.IsEOF())
		return;
	/* k co cancer
	CString szCancer;
	int nCancerTime;
	rs.GetValue(_T("HOP_cancer"), szCancer);
	rs.GetValue(_T("HOP_cancer_time"), nCancerTime);

	if(szCancer == _T("Y"))
	{
		if (!rpt.Init(_T("Reports\\HMS\\TM_TONGKETBENHANRAVIEN1_UT.RPT")))
			return;
	}
	else
	{
		if (!rpt.Init(_T("Reports\\HMS\\EM_TONGKETBENHANRAVIEN_NGT.RPT")))
			return;
	}*/
	
	if (!rpt.Init(_T("Reports\\HMS\\EM_TONGKETBENHANRAVIEN_NGT.RPT")))
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
		/*if(szCancer == _T("Y"))
		{
			tmpStr.AppendFormat(_T(" - %.3dK"), nCancerTime);
		}*/
		rptHeader->SetValue(_T("RecordNo"), tmpStr);
		rptHeader->SetValue(_T("Admitdate"), rs.GetValue(_T("admit_date")));
		rptHeader->SetValue(_T("Dischargedate"), rs.GetValue(_T("discharged_date")));
	}
	rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(1));
	if (rptGrpHeader)
		rptGrpHeader->SetValue(_T("diagnostic"), rs.GetValue(_T("diagnostic")));
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



void CTMRecordSummary::OnOperationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_EDIT)
		return;
	CHMSTreatOperationDialog dlg(this, pMF->m_nDocumentNo, true);
	if(dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szTreatmentMethod.AppendFormat(_T("\r\n%s"), dlg.m_szData);
		UpdateData(FALSE);
	}
} 
void CTMRecordSummary::OnDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_EDIT)
		return;
	CHMSTreatDrugDialog dlg(this, pMF->m_nDocumentNo);
	if(dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szTreatmentMethod.AppendFormat(_T("\r\n%s"), dlg.m_szData);
		UpdateData(FALSE);
	}
} 
void CTMRecordSummary::OnParaclinicButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_EDIT)
		return;
	CEMParaclinicResultDialog dlg(this, pMF->m_nDocumentNo, true);
	if(dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szParaclinicResult = dlg.m_szData;
		UpdateData(FALSE);
	}
}
int CTMRecordSummary::OnAddTMRecordSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMRecordSummary::OnEditTMRecordSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMRecordSummary::OnDeleteTMRecordSummary(){
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
 		OnCancelTMRecordSummary();
 	}
	return 0;
}
int CTMRecordSummary::OnSaveTMRecordSummary(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szExcept;
	szSQL.Format(_T("HMS_OUTPATIENT_CLOSE(%s)"), m_hms_outpatientTbl.FormatSQL());
	_debug(_T("%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
	//	CGuiDialog::OnOK();
		SetMode(VM_VIEW);
	}
	else
	{
		ShowMessageBox(_T("Lỗi khi kết thúc bệnh án ngoại trú"));
	}
	
 	return ret;
}
int CTMRecordSummary::OnCancelTMRecordSummary(){
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
int CTMRecordSummary::OnTMRecordSummaryListLoadData(){
	return 0;
}
