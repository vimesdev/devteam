#include "HMSDischarge.h"
#include "MainFrm.h"
#include "GuiDialog.h"
#include "ReportDocument.h"
#include "HMSPatientDeathDialog.h"

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

static int _OnUpdateDeathInformationFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnUpdateDeathInformation();
} 

CHMSDischarge::CHMSDischarge()
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}

CHMSDischarge::~CHMSDischarge(){
}
void CHMSDischarge::OnCreateComponents(){
	m_wndDischargeInformation.Create(this, _T("Discharge Information"), 5, 4, 600, 259);
	m_wndEndDateLabel.Create(this, _T("Out Date"), 10, 30, 130, 55);
	m_wndEndDate.Create(this,135, 30, 260, 55); 
	m_wndResultLabel.Create(this, _T("Result"), 265, 30, 345, 55);
	m_wndResult.Create(this,350, 30, 595, 55); 
	m_wndICD10Label.Create(this, _T("ICD Diagnostic"), 10, 60, 130, 85);
	m_wndICD10.Create(this,135, 60, 595, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 595, 115); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 595, 145); 
	m_wndTreatMethodLabel.Create(this, _T("Treat Method"), 10, 150, 130, 175);
	m_wndTreatMethod.Create(this,135, 150, 595, 175); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 180, 130, 230);
	m_wndConclusion.Create(this,135, 180, 595, 255, TRUE, FALSE, TRUE); 
	m_wndSurgery.Create(this, _T("Surgery"), 135, 265, 280, 290);
	m_wndUpdate.Create(this, _T("&Update"), 285, 265, 360, 290);
	m_wndSave.Create(this, _T("&Save"), 365, 265, 440, 290);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 265, 520, 290);
	m_wndPrint.Create(this, _T("&Print"), 525, 265, 600, 290);

}
void CHMSDischarge::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(81);
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(254);
	m_wndICD10.SetRequirementLength(1);
	m_wndICD10.SetVisibleLines(15);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(254);
//	m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(254);
//	m_wndConclusion.SetCheckValue(true);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndResult.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_outstate"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_enddept"), dfText, 7);
	m_hms_docTbl.AddField(_T("hd_enddate"), dfDateTime);
	m_hms_docTbl.AddField(_T("hd_icd"), dfText, 13);
	m_hms_docTbl.AddField(_T("hd_diagnostic"), dfText, 254);	//Benh chinh
	m_hms_docTbl.AddField(_T("hd_reldisease"), dfText, 254);	//benh kem theo
	m_hms_docTbl.AddField(_T("hd_conclusion"), dfText, 512);	//Ket luan
	m_hms_docTbl.AddField(_T("hd_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_docTbl.AddField(_T("hd_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_docTbl.AddField(_T("hd_doctor"), dfText, 15);
	m_hms_docTbl.AddField(_T("hd_indept"), dfText, 7);	//Khoa dieu tri
	m_hms_docTbl.AddField(_T("hd_tohosid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_treatmethod"), dfText, 254);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_areceptidx"), dfInteger);
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
	
	AddEvent(1, _T("Update Death Information"), _OnUpdateDeathInformationFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDischargeFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDischargeFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDischargeFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDischargeFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDischargeFnc, 0, 'T', VK_CONTROL);
*/

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hd_conclusion"), m_szConclusion);
		rs.GetValue(_T("hd_icd"), m_szICD10Key);
		rs.GetValue(_T("hd_diagnostic"), m_szMainDisease);
		rs.GetValue(_T("hd_reldisease"), m_szRelationDisease);
		rs.GetValue(_T("hd_result"), m_szResultKey);
		rs.GetValue(_T("hd_enddate"), m_szEndDate);
		rs.GetValue(_T("hd_treatmethod"), m_szTreatMethod);

		if(m_szEndDate.IsEmpty())
			m_szEndDate = pMF->GetSysDateTime();
		if(m_szMainDisease.IsEmpty())
			m_szMainDisease = pMF->m_szDiagnostic;

		SetMode(VM_VIEW);
		m_wndPrint.EnableWindow(true);
	}
	else
		SetMode(VM_NONE);

}
void CHMSDischarge::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_docTbl.SetValue(_T("hd_doctor"), pMF->m_szDoctor);
	m_hms_docTbl.SetValue(_T("hd_status"), _T("T"));
	m_hms_docTbl.SetValue(_T("hd_conclusion"), m_szConclusion);
	m_hms_docTbl.SetValue(_T("hd_icd"), m_szICD10Key);
	m_hms_docTbl.SetValue(_T("hd_diagnostic"), m_szMainDisease);
	m_hms_docTbl.SetValue(_T("hd_reldisease"), m_szRelationDisease);
	m_hms_docTbl.SetValue(_T("hd_suggestion"), _T("D"));
	m_hms_docTbl.SetValue(_T("hd_result"), m_szResultKey);
	m_hms_docTbl.SetValue(_T("hd_enddept"), pMF->m_szDept);
	m_hms_docTbl.SetValue(_T("hd_enddate"), m_szEndDate);
	m_hms_docTbl.SetValue(_T("hd_treatmethod"), m_szTreatMethod);
	m_hms_docTbl.SetValue(_T("hd_areceptidx"), pMF->m_nRefIndex);
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
 			EnableButtons(TRUE, 0, -1); 
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

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
	};
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
*/
	return 0;
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
	CRecord rs(&pMF->m_db);
	CString szSQL, szPrintOutPatientRecord;
	szSQL.Format(_T("SELECt he_print_outpatient_record FROM hms_config"));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("he_print_outpatient_record"), szPrintOutPatientRecord);
	pMF->PrintDischargeSheet(pMF->m_nDocumentNo, 0);
	if(szPrintOutPatientRecord == _T("Y")){
		int ret = ShowMessageBox(_T("Do you want to print outpatient record."), MB_YESNO);
		if(ret == IDNO)
			return;
		OnPrintOutPatientRecord();
	}
} 
int CHMSDischarge::OnAddHMSDischarge(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDischarge::OnEditHMSDischarge(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;

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
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 	

 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_docTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE hd_docno=%ld "), pMF->m_nDocumentNo); 
 		szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(pMF->m_szDiagnostic.IsEmpty())
			szSQL.Format(_T("UPDATE hms_exam SET he_status='T', he_diagnostic='%s' WHERE he_docno=%ld AND he_receptidx=%d"), m_szMainDisease,  pMF->m_nDocumentNo, pMF->m_nRefIndex);
		else
			szSQL.Format(_T("UPDATE hms_exam SET he_status='T' WHERE he_docno=%ld AND he_receptidx=%d"),  pMF->m_nDocumentNo, pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		
		szSQL.Format(_T("DELETE FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("DELETE FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_treatment_dttd WHERE htd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

 		SetMode(VM_VIEW); 
		OnUpdateDeathInformation();

		((CGuiDialog *)	GetParent()->GetParent())->OnOK();
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


void CHMSDischarge::OnPrintOutPatientRecord()
{
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
_T(" 	date(hd_enddate) as fromdate,") \
_T(" 	hd_result as result,") \
_T(" 	hd_conclusion as conclusion ") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc on (hp_patientno = hd_patientno) ") \
_T(" LEFT JOIN hms_exam on (he_docno = hd_docno) ") \
_T(" LEFT JOIN hms_disease_hist on(hdh_patientno = hp_patientno)") \
_T(" LEFT JOIN hms_card on (hc_patientno = hp_patientno) ") \
_T(" LEFT JOIN hms_object on (hd_object = ho_id) ") \
_T(" WHERE hd_docno = %ld"), pMF->m_nDocumentNo);

	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
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
	rpt.GetReportHeader()->SetValue(_T("ToDate"), _T(""));
	

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


int CHMSDischarge::OnUpdateDeathInformation(){
	if(m_szResultKey == _T("5") || m_szResultKey == _T("6"))
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CHMSPatientDeathDialog dlg(this);
		dlg.m_nPatientNo = pMF->m_wndPatientDocument.m_nPatientNo;
		dlg.m_szDieState = m_szResultKey;
		dlg.DoModal();
	}
	return 0;
}