#include "TMRecordSummary.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
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
/*static void _OnClinographyChangeFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnClinographyChange();
} */
/*static void _OnClinographySetfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnClinographySetfocus();} */ 
/*static void _OnClinographyKillfocusFnc(CWnd *pWnd){
	((CTMRecordSummary *)pWnd)->OnClinographyKillfocus();
} */
static int _OnClinographyCheckValueFnc(CWnd *pWnd){
	return ((CTMRecordSummary *)pWnd)->OnClinographyCheckValue();
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
CTMRecordSummary::CTMRecordSummary(CWnd *pParent, int nDocNo):
	CGuiDialog(pParent){
	m_nDocNo = nDocNo;
	m_nDlgWidth = 1024;
	m_nDlgHeight = 695;
	SetDefaultValues();
}
CTMRecordSummary::~CTMRecordSummary(){
}
void CTMRecordSummary::OnCreateComponents(){
	m_wndRecordSummary.Create(this, _T("Record Summary"), 5, 5, 1020, 660);
	m_wndTerminatedDateLabel.Create(this, _T("Terminated Date"), 10, 30, 125, 55);
	m_wndTerminatedDate.Create(this,130, 30, 250, 55); 
	m_wndResultLabel.Create(this, _T("Result"), 255, 30, 335, 55);
	m_wndResult.Create(this,340, 30, 510, 55); 
	m_wndAdmitDiseaseLabel.Create(this, _T("Admit Disease"), 10, 60, 125, 85);
	m_wndAdmitDisease.Create(this,130, 60, 1015, 130, 1, 0, 1); 
	m_wndClinographyLabel.Create(this, _T("Clinography"), 10, 135, 125, 160);
	m_wndClinography.Create(this,130, 135, 1015, 205, 1, 0, 1); 
	m_wndParaclinicResultLabel.Create(this, _T("Paraclinic Result"), 10, 210, 125, 235);
	m_wndParaclinicResult.Create(this,130, 210, 1015, 280, 1, 0, 1); 
	m_wndPathologyLabel.Create(this, _T("Pathology"), 10, 285, 125, 310);
	m_wndPathology.Create(this,130, 285, 1015, 355, 1, 0, 1); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 360, 125, 385);
	m_wndMainDisease.Create(this,130, 360, 1015, 430, 1, 0, 1); 
	m_wndRelatedDiseaseLabel.Create(this, _T("Related Disease"), 10, 435, 125, 460);
	m_wndRelatedDisease.Create(this,130, 435, 1015, 505, 1, 0, 1); 
	m_wndTreatmentMethodLabel.Create(this, _T("Treatment Method"), 10, 510, 125, 535);
	m_wndTreatmentMethod.Create(this,130, 510, 1015, 580, 1, 0, 1); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 585, 125, 610);
	m_wndSuggestion.Create(this,130, 585, 1015, 655, 1, 0, 1); 
	m_wndUpdate.Create(this, _T("&Update"), 685, 665, 765, 690);
	m_wndSave.Create(this, _T("&Save"), 770, 665, 850, 690);
	m_wndCancel.Create(this, _T("&Cancel"), 855, 665, 935, 690);
	m_wndPrint.Create(this, _T("&Print"), 940, 665, 1020, 690);

}
void CTMRecordSummary::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTerminatedDate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1);
	m_wndAdmitDisease.SetLimitText(35);
	m_wndAdmitDisease.SetCheckValue(true);
	m_wndClinography.SetLimitText(1024);
	m_wndClinography.SetCheckValue(true);
	m_wndParaclinicResult.SetLimitText(512);
	m_wndParaclinicResult.SetCheckValue(true);
	m_wndPathology.SetLimitText(1024);
	m_wndPathology.SetCheckValue(true);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelatedDisease.SetLimitText(254);
	m_wndRelatedDisease.SetCheckValue(true);
	m_wndTreatmentMethod.SetLimitText(1024);
	m_wndTreatmentMethod.SetCheckValue(true);
	m_wndSuggestion.SetLimitText(1024);
	m_wndSuggestion.SetCheckValue(true);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_clinical_recordTbl.SetTableName(_T("hms_clinical_record"));
	m_hms_clinical_recordTbl.AddField(_T("HCR_MAINDISEASE"), dfText, 254); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_RELDISEASE"), dfText, 254); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_DISCHARGEDATE"), dfDateTime); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_PATHOLOGICAL"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_TESTS"), dfText, 512); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_SUMMARIZE"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_GSUGGESTION3"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_RESULT"), dfText, 1); 
	m_hms_clinical_recordTbl.AddField(_T("HCR_GMETHOD"), dfText, 1024); 

}
void CTMRecordSummary::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndClinography.SetEvent(WE_CHECKVALUE, _OnClinographyCheckValueFnc);
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
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	GetDataToScreen();

}
void CTMRecordSummary::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTerminatedDate.GetDlgCtrlID(), m_szTerminatedDate);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_Text(pDX, m_wndAdmitDisease.GetDlgCtrlID(), m_szAdmitDisease);
	DDX_Text(pDX, m_wndClinography.GetDlgCtrlID(), m_szClinography);
	DDX_Text(pDX, m_wndParaclinicResult.GetDlgCtrlID(), m_szParaclinicResult);
	DDX_Text(pDX, m_wndPathology.GetDlgCtrlID(), m_szPathology);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelatedDisease.GetDlgCtrlID(), m_szRelatedDisease);
	DDX_Text(pDX, m_wndTreatmentMethod.GetDlgCtrlID(), m_szTreatmentMethod);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);

}
void CTMRecordSummary::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT * FROM hms_clinical_record ") \
				 _T(" LEFT JOIN hms_doc ON (hcr_docno = hd_docno)") \
				 _T(" WHERE hcr_docno = %ld"), m_nDocNo);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{	
		rs.GetValue(_T("HD_CONCLUSION"), m_szAdmitDisease);
		rs.GetValue(_T("HCR_MAINDISEASE"), m_szMainDisease);
		rs.GetValue(_T("HCR_RELDISEASE"), m_szRelatedDisease);
		rs.GetValue(_T("HCR_DISCHARGEDATE"), m_szTerminatedDate);
		rs.GetValue(_T("HCR_PATHOLOGICAL"), m_szPathology);
		rs.GetValue(_T("HCR_TESTS"), m_szParaclinicResult);
		rs.GetValue(_T("HCR_SUMMARIZE"), m_szClinography);
		rs.GetValue(_T("HCR_GSUGGESTION3"), m_szSuggestion);
		rs.GetValue(_T("HCR_RESULT"), m_szResultKey);
		rs.GetValue(_T("HCR_GMETHOD"), m_szTreatmentMethod);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CTMRecordSummary::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_hms_clinical_recordTbl.SetValue(_T("HCR_MAINDISEASE"), m_szMainDisease);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_RELDISEASE"), m_szRelatedDisease);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_DISCHARGEDATE"), m_szTerminatedDate);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_PATHOLOGICAL"), m_szPathology);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_TESTS"), m_szParaclinicResult);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_SUMMARIZE"), m_szClinography);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_GSUGGESTION3"), m_szSuggestion);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_RESULT"), m_szResultKey);
	m_hms_clinical_recordTbl.SetValue(_T("HCR_GMETHOD"), m_szTreatmentMethod);

}
void CTMRecordSummary::SetDefaultValues(){

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

}
int CTMRecordSummary::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 1, 2, -1);
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
int CTMRecordSummary::OnTerminatedDateCheckValue(){
	return 0;
} 
void CTMRecordSummary::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CTMRecordSummary::OnResultSelendok(){
	 
}
/*void CTMRecordSummary::OnResultSetfocus(){
	
}*/
/*void CTMRecordSummary::OnResultKillfocus(){
	
}*/
long CTMRecordSummary::OnResultLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
/*void CTMRecordSummary::OnClinographyChange(){
	
} */
/*void CTMRecordSummary::OnClinographySetfocus(){
	
} */
/*void CTMRecordSummary::OnClinographyKillfocus(){
	
} */
int CTMRecordSummary::OnClinographyCheckValue(){
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
void CTMRecordSummary::OnUpdateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditTMRecordSummary();
} 
void CTMRecordSummary::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveTMRecordSummary();
} 
void CTMRecordSummary::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelTMRecordSummary();
} 
void CTMRecordSummary::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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

	if (!rpt.Init(_T("Reports\\HMS\\TM_TONGKETBENHANRAVIEN1.RPT")))
		return;

	szSQL.Format(_T(" SELECT    upper(Get_patientname(hcr_docno)) patient_name, ") \
				_T("           Extract(YEAR FROM hp_birthdate) yob, ") \
				_T("           hcr_recordno record_no, ") \
				_T("           to_char(hcr_admitdate, 'dd/mm/yyyy hh24:mi:ss') admit_date, ") \
				_T("           to_char(hcr_dischargedate, 'dd/mm/yyyy hh24:mi:ss') discharged_date, ") \
				_T("           hd_conclusion diagnostic, ") \
				_T("           hcr_summarize disease_process, ") \
				_T("           hcr_tests paraclinic_result, ") \
				_T("           hcr_pathological pathology, ") \
				_T("           hcr_maindisease main_disease, ") \
				_T("           hcr_reldisease related_disease, ") \
				_T("           hcr_gmethod treatment_method, ") \
				_T("           get_syssel_desc('hms_result', hcr_result) status, ") \
				_T("		   hcr_gsuggestion3 suggestion") \
				_T(" FROM      hms_clinical_record ") \
				_T(" LEFT JOIN hms_patient ON ( hcr_patientno = hp_patientno ) ") \
				_T(" LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
				_T(" WHERE     hcr_docno = %ld "), m_nDocNo);
	
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		rptHeader->SetValue(_T("Department"), pMF->GetDepartmentID());
		rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("patient_name")));
		rptHeader->SetValue(_T("yob"), rs.GetValue(_T("yob")));
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("record_no")));
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
	rpt.PrintPreview();
} 
int CTMRecordSummary::OnAddTMRecordSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMRecordSummary::OnEditTMRecordSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMRecordSummary::OnDeleteTMRecordSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_clinical_recordTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hcr_docno = %ld"), m_nDocNo);
 		szSQL = m_hms_clinical_recordTbl.GetUpdateSQL();
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnTMRecordSummaryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CTMRecordSummary::OnTMRecordSummaryListLoadData(){
	return 0;
}
