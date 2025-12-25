#include "TMPreoperationSummarize.h"
#include "MainFrame_E10.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CTMPreoperationSummarize *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CTMPreoperationSummarize *)pWnd)->OnNameCheckValue();
} 
/*static void _OnOperationChangeFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnOperationChange();
} */
/*static void _OnOperationSetfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnOperationSetfocus();} */ 
/*static void _OnOperationKillfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnOperationKillfocus();
} */
static int _OnOperationCheckValueFnc(CWnd *pWnd){
	return ((CTMPreoperationSummarize *)pWnd)->OnOperationCheckValue();
} 
/*static void _OnSummarizeChangeFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnSummarizeChange();
} */
/*static void _OnSummarizeSetfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnSummarizeSetfocus();} */ 
/*static void _OnSummarizeKillfocusFnc(CWnd *pWnd){
	((CTMPreoperationSummarize *)pWnd)->OnSummarizeKillfocus();
} */
static int _OnSummarizeCheckValueFnc(CWnd *pWnd){
	return ((CTMPreoperationSummarize *)pWnd)->OnSummarizeCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CTMPreoperationSummarize *pVw = (CTMPreoperationSummarize *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMPreoperationSummarize *pVw = (CTMPreoperationSummarize *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMPreoperationSummarize *pVw = (CTMPreoperationSummarize *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMPreoperationSummarize *pVw = (CTMPreoperationSummarize *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMPreoperationSummarize *pVw = (CTMPreoperationSummarize *)pWnd;
	pVw->OnCloseSelect();
} 
CTMPreoperationSummarize::CTMPreoperationSummarize(CWnd *pParent, long nOptIdx):
	CGuiDialog(pParent){
	m_nOperationIdx = nOptIdx;
	m_nDlgWidth = 1030;
	m_nDlgHeight = 700;
	SetDefaultValues();
}
CTMPreoperationSummarize::~CTMPreoperationSummarize(){
}
void CTMPreoperationSummarize::OnCreateComponents(){
	m_wndPreoperationSummarize.Create(this, _T("Preoperation Summarize"), 5, 5, 1020, 660);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 90, 55);
	m_wndDocNo.Create(this,95, 30, 175, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 180, 30, 260, 55);
	m_wndName.Create(this,265, 30, 465, 55); 
	m_wndOperationLabel.Create(this, _T("Operation"), 470, 30, 550, 55);
	m_wndOperation.Create(this,555, 30, 1015, 55); 
	m_wndSummarizeLabel.Create(this, _T("Summarize"), 10, 60, 90, 85);
	m_wndSummarize.Create(this,10, 90, 1015, 655, 1, 0, 1); 
	m_wndUpdate.Create(this, _T("&Update"), 600, 665, 680, 690);
	m_wndSave.Create(this, _T("&Save"), 685, 665, 765, 690);
	m_wndCancel.Create(this, _T("&Cancel"), 770, 665, 850, 690);
	m_wndPrint.Create(this, _T("&Print"), 855, 665, 935, 690);
	m_wndClose.Create(this, _T("&Close"), 940, 665, 1020, 690);

}
void CTMPreoperationSummarize::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(1024);
	m_wndDocNo.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndOperation.SetLimitText(1024);
	m_wndOperation.SetCheckValue(true);
	m_wndSummarize.SetLimitText(1024);
	m_wndSummarize.SetCheckValue(true);

}
void CTMPreoperationSummarize::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndOperation.SetEvent(WE_CHANGE, _OnOperationChangeFnc);
	//m_wndOperation.SetEvent(WE_SETFOCUS, _OnOperationSetfocusFnc);
	//m_wndOperation.SetEvent(WE_KILLFOCUS, _OnOperationKillfocusFnc);
	m_wndOperation.SetEvent(WE_CHECKVALUE, _OnOperationCheckValueFnc);
	//m_wndSummarize.SetEvent(WE_CHANGE, _OnSummarizeChangeFnc);
	//m_wndSummarize.SetEvent(WE_SETFOCUS, _OnSummarizeSetfocusFnc);
	//m_wndSummarize.SetEvent(WE_KILLFOCUS, _OnSummarizeKillfocusFnc);
	m_wndSummarize.SetEvent(WE_CHECKVALUE, _OnSummarizeCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CTMPreoperationSummarize::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndOperation.GetDlgCtrlID(), m_szOperation);
	DDX_Text(pDX, m_wndSummarize.GetDlgCtrlID(), m_szSummarize);

}
void CTMPreoperationSummarize::SetDefaultValues(){

	m_nDocNo=0;
	m_szName.Empty();
	m_szOperation.Empty();
	m_szSummarize.Empty();

}
int CTMPreoperationSummarize::SetMode(int nMode){
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
			m_wndDocNo.EnableWindow(FALSE);
			m_wndName.EnableWindow(FALSE);
			m_wndOperation.EnableWindow(FALSE);
			m_wndSummarize.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 2, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 4, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}

void CTMPreoperationSummarize::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ho_docno doc_no, ") \
				 _T("		get_patientname(ho_docno) patient_name, ") \
				 _T("		NVL(ho_comment, hfl_name) operation_name,") \
				 _T("		ho_summarize summarize ") \
				 _T("FROM hms_operation ") \
				 _T("LEFT JOIN hms_fee_list ON (hfl_feeid = ho_itemid)") \
				 _T("WHERE ho_idx = %ld"), m_nOperationIdx);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		SetMode(VM_NONE);
		return;
	}
	else
	{
		rs.GetValue(_T("doc_no"), m_nDocNo);
		rs.GetValue(_T("patient_name"), m_szName);
		rs.GetValue(_T("operation_name"), m_szOperation);
		rs.GetValue(_T("summarize"), m_szSummarize);
		SetMode(VM_VIEW);
	}
}

/*void CTMPreoperationSummarize::OnDocNoChange(){
	
} */
/*void CTMPreoperationSummarize::OnDocNoSetfocus(){
	
} */
/*void CTMPreoperationSummarize::OnDocNoKillfocus(){
	
} */
int CTMPreoperationSummarize::OnDocNoCheckValue(){
	return 0;
} 
/*void CTMPreoperationSummarize::OnNameChange(){
	
} */
/*void CTMPreoperationSummarize::OnNameSetfocus(){
	
} */
/*void CTMPreoperationSummarize::OnNameKillfocus(){
	
} */
int CTMPreoperationSummarize::OnNameCheckValue(){
	return 0;
} 
/*void CTMPreoperationSummarize::OnOperationChange(){
	
} */
/*void CTMPreoperationSummarize::OnOperationSetfocus(){
	
} */
/*void CTMPreoperationSummarize::OnOperationKillfocus(){
	
} */
int CTMPreoperationSummarize::OnOperationCheckValue(){
	return 0;
} 
/*void CTMPreoperationSummarize::OnSummarizeChange(){
	
} */
/*void CTMPreoperationSummarize::OnSummarizeSetfocus(){
	
} */
/*void CTMPreoperationSummarize::OnSummarizeKillfocus(){
	
} */
int CTMPreoperationSummarize::OnSummarizeCheckValue(){
	return 0;
} 
void CTMPreoperationSummarize::OnUpdateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (GetMode() == VM_VIEW)
		SetMode(VM_EDIT);
} 
void CTMPreoperationSummarize::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!IsValidateData())
		return;
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_operation SET ho_summarize = '%s' WHERE ho_idx = %ld")
		, m_szSummarize, m_nOperationIdx);
	int nRes = pMF->ExecSQL(szSQL);
	if (nRes > 0)
		SetMode(VM_VIEW);
	else
		AfxMessageBox(_T("Update failed!"));
	return;
} 
void CTMPreoperationSummarize::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (GetMode() == VM_EDIT)
		SetMode(VM_VIEW);
	else
		SetMode(VM_NONE);	
} 
void CTMPreoperationSummarize::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL;
	CString szSQL;
	if (!rpt.Init(_T("Reports\\HMS\\SOKETTRUOCMO.RPT")))
		return;
	szSQL.Format(_T("SELECT ho_docno doc_no, ") \
				 _T("		upper(get_patientname(ho_docno)) patient_name, ") \
				 _T("		extract(year from hp_birthdate) yob,") \
				 _T("		get_syssel_desc('sys_sex', hp_sex) sex,") \
				 _T("		hp_workplace work_place,") \
				 _T("		get_objectname(hd_object) object_name,") \
				 _T("		hd_cardno card_no,") \
				 _T("		get_syssel_desc('hms_rank', NVL(hd_rank, hp_rank)) patient_rank,") \
				 _T("		get_syssel_desc('hms_position', NVL(hd_position, hp_position)) patient_position,") \
				 _T("		hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) address,") \
				 _T("		to_char(hcr_admitdate, 'dd/mm/yyyy hh24:mi:ss') admit_date,") \
				 _T("		ho_summarize summarize ") \
				 _T("FROM hms_operation ") \
				 _T("LEFT JOIN hms_doc ON (ho_docno = hd_docno)") \
				 _T("LEFT JOIN hms_patient ON (hp_patientno = ho_patientno)") \
				 _T("LEFT JOIN hms_clinical_record ON (hcr_docno = ho_docno)") \
				 _T("WHERE ho_idx = %ld AND ho_status <> 'T'"), m_nOperationIdx);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;
	rptHeader = rpt.GetReportHeader();
	if (!rptHeader)
		return;
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	rptHeader->SetValue(_T("Patientname"), rs.GetValue(_T("patient_name")));
	rptHeader->SetValue(_T("yearofbirth"), rs.GetValue(_T("yob")));
	rptHeader->SetValue(_T("documentno"), rs.GetValue(_T("doc_no")));
	rptHeader->SetValue(_T("rank"), rs.GetValue(_T("patient_rank")));
	rptHeader->SetValue(_T("position"), rs.GetValue(_T("patient_position")));
	rptHeader->SetValue(_T("workplace"), rs.GetValue(_T("work_place")));
	rptHeader->SetValue(_T("address"), rs.GetValue(_T("address")));
	rptHeader->SetValue(_T("objectname"), rs.GetValue(_T("object_name")));
	rptHeader->SetValue(_T("cardno"), rs.GetValue(_T("card_no")));
	rptHeader->SetValue(_T("admitdate"), rs.GetValue(_T("admit_date")));
	rptHeader->SetValue(_T("summarize"), rs.GetValue(_T("summarize")));
	rpt.PrintPreview();
	
} 
void CTMPreoperationSummarize::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
