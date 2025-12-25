#include "HMSDischarge.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiDialog.h"

/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnEndDateCheckValue();
} 
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischarge* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultAddNew();
}*/
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischarge* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnTreatMethodChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnTreatMethodChange();
} */
/*static void _OnTreatMethodSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnTreatMethodSetfocus();} */ 
/*static void _OnTreatMethodKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnTreatMethodKillfocus();
} */
static int _OnTreatMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnTreatMethodCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnConclusionCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnAddHMSDischarge();
} 
static int _OnEditHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnEditHMSDischarge();
} 
static int _OnDeleteHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnDeleteHMSDischarge();
} 
static int _OnSaveHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnSaveHMSDischarge();
} 
static int _OnCancelHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnCancelHMSDischarge();
} 
CHMSDischarge::CHMSDischarge(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSDischarge::~CHMSDischarge(){
}
void CHMSDischarge::OnCreateComponents(){
	m_wndDischargeInformation.Create(this, _T("Discharge Information"), 5, 4, 600, 259);
	m_wndEndDateLabel.Create(this, _T("End Date"), 10, 30, 130, 55);
	m_wndEndDate.Create(this,135, 30, 260, 55); 
	m_wndResultLabel.Create(this, _T("Result"), 265, 30, 345, 55);
	m_wndResult.Create(this,350, 30, 595, 55); 
	m_wndICD10Label.Create(this, _T("ICD10"), 10, 60, 130, 85);
	m_wndICD10.Create(this,135, 60, 595, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 595, 115); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 595, 145); 
	m_wndTreatMethodLabel.Create(this, _T("Treat Method"), 10, 150, 130, 175);
	m_wndTreatMethod.Create(this,135, 150, 595, 175); 
	m_wndConclusionLabel.Create(this, _T("Conclusion /Advice"), 10, 180, 130, 230);
	m_wndConclusion.Create(this,135, 180, 595, 255); 
	m_wndUpdate.Create(this, _T("&Update"), 285, 265, 360, 290);
	m_wndSave.Create(this, _T("&Save"), 365, 265, 440, 290);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 265, 520, 290);
	m_wndPrint.Create(this, _T("&Print"), 525, 265, 600, 290);

}
void CHMSDischarge::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(81);
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(254);
	m_wndICD10.SetRequirementLength(1);
	m_wndICD10.SetVisibleLines(15);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(35);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndTreatMethod.SetLimitText(35);
	m_wndTreatMethod.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndResult.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_hms_treatmentTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatmentTbl.AddField(_T("htr_status"), dfText, 1);
	m_hms_treatmentTbl.AddField(_T("htr_outstate"), dfInteger);
	m_hms_treatmentTbl.AddField(_T("htr_enddept"), dfText, 7);
	m_hms_treatmentTbl.AddField(_T("htr_dischargedate"), dfDateTime);
	m_hms_treatmentTbl.AddField(_T("htr_admiticd"), dfText, 13);
	m_hms_treatmentTbl.AddField(_T("htr_maindisease"), dfText, 254);	//Benh chinh
	m_hms_treatmentTbl.AddField(_T("htr_reldisease"), dfText, 254);	//benh kem theo
	m_hms_treatmentTbl.AddField(_T("htr_conclusion"), dfText, 512);	//Ket luan
	m_hms_treatmentTbl.AddField(_T("htr_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_treatmentTbl.AddField(_T("htr_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_treatmentTbl.AddField(_T("htr_doctor"), dfText, 15);
	m_hms_treatmentTbl.AddField(_T("htr_indept"), dfText, 7);	//Khoa dieu tri
	m_hms_treatmentTbl.AddField(_T("htr_tohosid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_treatmentTbl.AddField(_T("htr_areceptidx"), dfInteger);
}
void CHMSDischarge::OnSetWindowEvents(){
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndTreatMethod.SetEvent(WE_CHANGE, _OnTreatMethodChangeFnc);
	//m_wndTreatMethod.SetEvent(WE_SETFOCUS, _OnTreatMethodSetfocusFnc);
	//m_wndTreatMethod.SetEvent(WE_KILLFOCUS, _OnTreatMethodKillfocusFnc);
	m_wndTreatMethod.SetEvent(WE_CHECKVALUE, _OnTreatMethodCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDischargeFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDischargeFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDischargeFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDischargeFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDischargeFnc, 0, 'T', VK_CONTROL);
*/

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
//	if(GetMode() == VM_NONE)
//		return;
	GetDataToScreen();
}
void CHMSDischarge::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndTreatMethod.GetDlgCtrlID(), m_szTreatMethod);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CHMSDischarge::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_suggestion IN('I','D') "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_conclusion"), m_szConclusion);
		rs.GetValue(_T("hcr_mainicd"), m_szICD10Key);
		rs.GetValue(_T("hcr_maindisease"), m_szMainDisease);
		rs.GetValue(_T("hcr_result"), m_szResultKey);
		rs.GetValue(_T("hcr_dischargedate"), m_szEndDate);
		rs.GetValue(_T("hcr_reldisease"), m_szRelationDisease);

		if(m_szEndDate.IsEmpty())
			m_szEndDate = pMF->GetSysDateTime();
		if(m_szMainDisease.IsEmpty())
			m_szMainDisease = pMF->m_szDiagnostic;
		m_szICD10Key.Trim();
	}
	if(m_szEndDate.IsEmpty())
		m_szEndDate = pMF->GetSysDateTime();
	if(m_szMainDisease.IsEmpty())
		m_szMainDisease = pMF->m_szDiagnostic;
	m_szICD10Key.Trim();
	SetMode(VM_VIEW);
	

}
void CHMSDischarge::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_treatmentTbl.SetValue(_T("htr_doctor"), pMF->m_szDoctor);
	m_hms_treatmentTbl.SetValue(_T("htr_status"), _T("T"));
	m_hms_treatmentTbl.SetValue(_T("htr_conclusion"), m_szConclusion);
	m_hms_treatmentTbl.SetValue(_T("htr_icd"), m_szICD10Key);
	m_hms_treatmentTbl.SetValue(_T("htr_diagnostic"), m_szMainDisease);
	m_hms_treatmentTbl.SetValue(_T("htr_reldisease"), m_szRelationDisease);
	m_hms_treatmentTbl.SetValue(_T("htr_suggestion"), _T("D"));
	m_hms_treatmentTbl.SetValue(_T("htr_result"), m_szResultKey);
	m_hms_treatmentTbl.SetValue(_T("htr_enddept"), pMF->m_szDept);
	m_hms_treatmentTbl.SetValue(_T("htr_enddate"), m_szEndDate);
	m_hms_treatmentTbl.SetValue(_T("htr_areceptidx"), pMF->m_nBedID);

}
void CHMSDischarge::SetDefaultValues(){

	m_szEndDate.Empty();
	m_szResultKey.Empty();
	m_szICD10Key.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szTreatMethod.Empty();
	m_szConclusion.Empty();

}
int CHMSDischarge::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
			m_wndResult.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 3, -1); 
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
/*void CHMSDischarge::OnEndDateChange(){
	
} */
/*void CHMSDischarge::OnEndDateSetfocus(){
	
} */
/*void CHMSDischarge::OnEndDateKillfocus(){
	
} */
int CHMSDischarge::OnEndDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(CompareDate(pMF->m_szEntryDate, m_szEndDate) > 0)
		return -1;
	return 0;
} 
void CHMSDischarge::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischarge::OnResultSelendok(){
	 
}
/*void CHMSDischarge::OnResultSetfocus(){
	
}*/
/*void CHMSDischarge::OnResultKillfocus(){
	
}*/
long CHMSDischarge::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndResult, _T("hms_result"), m_szResultKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
	};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDischarge::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDischarge::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischarge::OnICD10Selendok(){
	UpdateData(true);
	m_szMainDisease = m_wndICD10.GetCurrent(1);
	UpdateData(false);
	 
}
/*void CHMSDischarge::OnICD10Setfocus(){
	
}*/
/*void CHMSDischarge::OnICD10Killfocus(){
	
}*/
long CHMSDischarge::OnICD10LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndICD10, m_szICD10Key);


	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
		szWhere.Format(_T("hi_icd='%s' "), m_szICD10Key);
	};
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd  %s  ORDER BY hi_icd "), szWhere);

	m_wndICD10.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDischarge::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDischarge::OnMainDiseaseChange(){
	
} */
/*void CHMSDischarge::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSDischarge::OnMainDiseaseKillfocus(){
	
} */
int CHMSDischarge::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDischarge::OnRelationDiseaseChange(){
	
} */
/*void CHMSDischarge::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSDischarge::OnRelationDiseaseKillfocus(){
	
} */
int CHMSDischarge::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDischarge::OnTreatMethodChange(){
	
} */
/*void CHMSDischarge::OnTreatMethodSetfocus(){
	
} */
/*void CHMSDischarge::OnTreatMethodKillfocus(){
	
} */
int CHMSDischarge::OnTreatMethodCheckValue(){
	return 0;
} 
/*void CHMSDischarge::OnConclusionChange(){
	
} */
/*void CHMSDischarge::OnConclusionSetfocus(){
	
} */
/*void CHMSDischarge::OnConclusionKillfocus(){
	
} */
int CHMSDischarge::OnConclusionCheckValue(){
	return 0;
} 
void CHMSDischarge::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSDischarge();
	
} 
void CHMSDischarge::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDischarge();
} 
void CHMSDischarge::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDischarge();
} 
void CHMSDischarge::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->PrintDischargeSheet(pMF->m_nDocumentNo, pMF->m_nRefIndex);
} 
int CHMSDischarge::OnAddHMSDischarge(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSDischarge::OnEditHMSDischarge(){

 //	if(GetMode() != VM_VIEW) 
 //		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSDischarge::OnDeleteHMSDischarge(){
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
 		OnCancelHMSDischarge(); 
 	}
return 0;
 } 
int CHMSDischarge::OnSaveHMSDischarge(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}
 	if(!IsValidateData()) 
 		return -1; 
//Cap nhat lai ho so dieu tri
//Cap nhat lai ho so dieu tri cua khoa
	szSQL.Format(_T("UPDATE hms_clinical_record ") \
		_T(" SET hcr_status='T', ") \
		_T(" hcr_dischargedate='%s', ") \
		_T(" hcr_dischargedept='%s', ") \
		_T(" hcr_result='%s', ") \
		_T(" hcr_suggestion='D', ") \
		_T(" hcr_conclusion='%s', ") \
		_T(" hcr_mainicd='%s', ") \
		_T(" hcr_maindisease='%s' ") \
		_T(" WHERE hcr_docno=%ld AND hcr_status in('I','T') "), 
			m_szEndDate, 
			pMF->m_szDept, 
			m_szResultKey, 
			m_szConclusion,
			m_szICD10Key,
			m_szMainDisease,
			pMF->m_nDocumentNo);

 _fmsg(_T("%s"), szSQL); 

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 

		szSQL.Format(_T("UPDATE hms_treatment_record ") \
			_T(" SET htr_status='T', ") \
			_T(" htr_dischargedate='%s', ") \
			_T(" htr_mainicd='%s', ") \
			_T(" htr_maindisease='%s', ") \
			_T(" htr_suggestion='D', ") \
			_T(" htr_sumtreat=date(htr_dischargedate)-date(htr_admitdate) ") \
			_T(" WHERE htr_docno=%ld AND htr_idx=%d AND htr_status in('I','T') "),
				m_szEndDate,
				m_szICD10Key,
				m_szMainDisease,
				pMF->m_nDocumentNo,
				pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		

		//Vi benh nhan ra vien nen ko de record luu cac thong tin chuyen vien.
		szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhdt_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 

 	return ret; 
}
int CHMSDischarge::OnCancelHMSDischarge(){
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
int CHMSDischarge::OnHMSDischargeListLoadData(){
	return 0;
}

