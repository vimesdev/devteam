#include "HMSHospitalTransfer.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiDialog.h"
#include "HMSEntertainTreatDialog.h"


static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnConclusionCheckValue();
} 
static void _OnHospitalNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnHospitalNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHospitalNameSelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameSelendok();
}
/*static void _OnHospitalNameSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameKillfocus();
}*/
/*static void _OnHospitalNameKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameKillfocus();
}*/
static long _OnHospitalNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnHospitalNameLoadData();
}
/*static void _OnHospitalNameAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameAddNew();
}*/
/*static void _OnOutDateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateChange();
} */
/*static void _OnOutDateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateSetfocus();} */ 
/*static void _OnOutDateKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnOutDateCheckValue();
} 
/*static void _OnClinicalSymbolChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolChange();
} */
/*static void _OnClinicalSymbolSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolSetfocus();} */ 
/*static void _OnClinicalSymbolKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolKillfocus();
} */
static int _OnClinicalSymbolCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolCheckValue();
} 
/*static void _OnTestsChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsChange();
} */
/*static void _OnTestsSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsSetfocus();} */ 
/*static void _OnTestsKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsKillfocus();
} */
static int _OnTestsCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnTestsCheckValue();
} 
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnMedicineUsedChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedChange();
} */
/*static void _OnMedicineUsedSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedSetfocus();} */ 
/*static void _OnMedicineUsedKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedKillfocus();
} */
static int _OnMedicineUsedCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedCheckValue();
} 
static void _OnHospitalLineSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnHospitalLineSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHospitalLineSelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalLineSelendok();
}
/*static void _OnHospitalLineSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalLineKillfocus();
}*/
/*static void _OnHospitalLineKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalLineKillfocus();
}*/
static long _OnHospitalLineLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnHospitalLineLoadData();
}
/*static void _OnHospitalLineAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalLineAddNew();
}*/


/*static void _OnPatientStateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateChange();
} */
/*static void _OnPatientStateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateSetfocus();} */ 
/*static void _OnPatientStateKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateKillfocus();
} */
static int _OnPatientStateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnPatientStateCheckValue();
} 
/*static void _OnTransferDateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateChange();
} */
/*static void _OnTransferDateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateSetfocus();} */ 
/*static void _OnTransferDateKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateKillfocus();
} */
static int _OnTransferDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnTransferDateCheckValue();
} 

static int _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnResultLoadData();
}

/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonKillfocus();
} */

static int _OnReasonLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnReasonLoadData();
} 

static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnReasonCheckValue();
} 
static void _OnTransportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnTransportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportSelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportSelendok();
}
/*static void _OnTransportSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportKillfocus();
}*/
/*static void _OnTransportKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportKillfocus();
}*/
static long _OnTransportLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnTransportLoadData();
}
/*static void _OnTransportAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportAddNew();
}*/
/*static void _OnAttenderSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnAttenderKillfocus();
}*/
/*static void _OnAttenderKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnAttenderKillfocus();
}*/

static void _OnEntertainTreatSelectFnc(CWnd *pWnd){			  
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnEntertainTreatSelect();
} 
/*static void _OnHuongDieuTriChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHuongDieuTriChange();
} */
/*static void _OnHuongDieuTriSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHuongDieuTriSetfocus();} */ 
/*static void _OnHuongDieuTriKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHuongDieuTriKillfocus();
} */
static int _OnHuongDieuTriCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnHuongDieuTriCheckValue();
} 

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnAddHMSHospitalTransfer();
} 
static int _OnEditHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnEditHMSHospitalTransfer();
} 
static int _OnDeleteHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnDeleteHMSHospitalTransfer();
} 
static int _OnSaveHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnSaveHMSHospitalTransfer();
} 
static int _OnCancelHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnCancelHMSHospitalTransfer();
} 

static void _Onone_year_applySelectFnc(CWnd *pWnd){
	 ((CHMSHospitalTransfer*)pWnd)->Onone_year_applySelect();
}
CHMSHospitalTransfer::CHMSHospitalTransfer(){
	m_nDlgWidth = 605;
	m_nDlgHeight = 490;
	m_bEntertainTreat = false;
	SetDefaultValues();
}

CHMSHospitalTransfer::CHMSHospitalTransfer(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 605;
	m_nDlgHeight = 490;
	m_bEntertainTreat = false;
	SetDefaultValues();
}
CHMSHospitalTransfer::~CHMSHospitalTransfer(){
}
void CHMSHospitalTransfer::OnCreateComponents(){
	m_wndHospitalTransferInformation.Create(this, _T("Hospital Transfer Information"), 5, 5, 600, 485);
	m_wndICD10Label.Create(this, _T("ICD Diagnostic"), 10, 30, 130, 55);
	m_wndICD10.Create(this,135, 30, 595, 55); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 60, 130, 85);
	m_wndConclusion.Create(this,135, 60, 595, 110, TRUE, FALSE, TRUE); 
	m_wndHospitalNameLabel.Create(this, _T("Hospital Name"), 10, 115, 130, 140);
	m_wndHospitalName.Create(this,135, 115, 380, 140); 
	m_wndHospitalLineLabel.Create(this, _T("Hospital Line"), 385, 115, 465, 140);
	m_wndHospitalLine.Create(this,470, 115, 595, 140); 	m_wndClinicalSymbolLabel.Create(this, _T("Clinical Symbol"), 10, 145, 130, 170);
	m_wndClinicalSymbol.Create(this,135, 145, 595, 220, TRUE, FALSE, TRUE);
	m_wndTestsLabel.Create(this, _T("Tests"), 10, 225, 130, 250);
	m_wndTests.Create(this,135, 225, 595, 275, TRUE, FALSE, TRUE);
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 280, 130, 305);
	m_wndMainDisease.Create(this,135, 280, 595, 305); 
	m_wndMedicineUsedLabel.Create(this, _T("Medicine Used"), 10, 310, 130, 335);
	m_wndMedicineUsed.Create(this,135, 310, 595, 360, TRUE, FALSE, TRUE);
	m_wndOutDateLabel.Create(this, _T("Result"), 10, 365, 130, 390);
	m_wndOutDate.Create(this,135, 365, 260, 390); 
	m_wndOutDate.ShowWindow(SW_HIDE);
	m_wndResult.Create(this, 135, 365, 260, 390); 
	m_wndPatientStateLabel.Create(this, _T("Patient State"), 265, 365, 345, 390);
	m_wndPatientState.Create(this,350, 365, 595, 390); 
	m_wndTransferDateLabel.Create(this, _T("Transfer Date"), 10, 395, 130, 420);
	m_wndTransferDate.Create(this,135, 395, 260, 420); 
	m_wndReasonLabel.Create(this, _T("Reason"), 265, 395, 345, 420);
	m_wndReason.Create(this,350, 395, 595, 420); 
	m_wndTransportLabel.Create(this, _T("Transport"), 10, 425, 130, 450);
	m_wndTransport.Create(this,135, 425, 260, 450); 
	m_wndAttenderLabel.Create(this, _T("Attender"), 265, 425, 345, 450);
	m_wndAttender.Create(this,350, 425, 595, 450); 
	m_wndHuongDieuTriLabel.Create(this, _T("H\x1B0\x1EDBng \x111i\x1EC1u tr\x1ECB"), 10, 455, 130, 480);
	m_wndHuongDieuTri.Create(this,135, 455, 595, 480); 
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//Neu la benh vien lao phong ninh thuan
	m_wndUpdate.Create(this, _T("&Update"), 285, 490, 360, 515);
	m_wndSave.Create(this, _T("&Save"), 365, 490, 440, 515);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 490, 520, 515);
	m_wndPrint.Create(this, _T("&Print"), 525, 490, 600, 515);
	m_wndone_year_apply.Create(this, _T("Dùng cho 1 năm"), 10, 490, 260, 515);

	m_wndEntertainTreat.Create(this, _T(""), 0, 0, 0, 0);
	m_wndEntertainTreat.ShowWindow(SW_HIDE);
	m_wndEntertainTreat.EnableWindow(FALSE);
}
void CHMSHospitalTransfer::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.SetRequirementLength(1);
	m_wndICD10.LimitText(254);
	m_wndICD10.SetVisibleLines(15);
	m_wndConclusion.SetLimitText(254);
	m_wndConclusion.SetCheckValue(true);
	m_wndHospitalName.SetCheckValue(true);
	m_wndHospitalName.LimitText(254);
	m_wndOutDate.SetCheckValue(true);
	m_wndClinicalSymbol.SetLimitText(254);
//	m_wndClinicalSymbol.SetCheckValue(true);
	m_wndTests.SetLimitText(254);
//	m_wndTests.SetCheckValue(true);
	m_wndMainDisease.SetLimitText(254);
	m_wndMainDisease.SetCheckValue(true);
	m_wndMedicineUsed.SetLimitText(254);
//	m_wndMedicineUsed.SetCheckValue(true);
	m_wndHospitalLine.SetCheckValue(true);
	m_wndHospitalLine.LimitText(35);
	m_wndPatientState.SetLimitText(254);
//	m_wndPatientState.SetCheckValue(true);
//	m_wndTransferDate.SetMax(CDateTime(pMF->GetSysDateTime()));
//	m_wndTransferDate.SetCheckValue(true);
	//m_wndReason.SetLimitText(254);
//	m_wndReason.SetCheckValue(true);
//	m_wndTransport.SetCheckValue(true);
	m_wndTransport.LimitText(35);
//	m_wndAttender.SetCheckValue(true);
	m_wndAttender.LimitText(65);

	m_wndResult.SetCheckValue(true);
	m_wndReason.SetCheckValue(true);

	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD10.InsertColumn(1, _T("Description"), CFMT_TEXT, 600);


	m_wndHospitalName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndHospitalName.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndHospitalLine.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndHospitalLine.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTransport.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransport.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndReason.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReason.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_outstate"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_enddept"), dfText, 7);
	m_hms_docTbl.AddField(_T("hd_enddate"), dfDateTime);
	m_hms_docTbl.AddField(_T("hd_icd"), dfText, 13);
	m_hms_docTbl.AddField(_T("hd_diagnostic"), dfText, 254);	//Benh chinh
	//m_hms_docTbl.AddField(_T("hd_reldisease"), dfText, 254);	//benh kem theo
	m_hms_docTbl.AddField(_T("hd_conclusion"), dfText, 254);	//Ket luan
	//m_hms_docTbl.AddField(_T("hd_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_docTbl.AddField(_T("hd_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_docTbl.AddField(_T("hd_doctor"), dfText, 15);
	m_hms_docTbl.AddField(_T("hd_indept"), dfText, 7);	//Khoa dieu tri
	m_hms_docTbl.AddField(_T("hd_tohosid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_areceptidx"), dfLong);
	m_hms_docTbl.AddField(_T("hd_outpatient"), dfText, 1);	
	m_hms_docTbl.AddField(_T("hd_sugg2"), dfText, 256);
	m_hms_docTbl.AddField(_T("hd_ttrang_rv"), dfInteger);

	m_hms_htdocTbl.SetTableName(_T("hms_htdoc"));
	m_hms_htdocTbl.AddField(_T("hhtd_docno"), dfLong); 
	m_hms_htdocTbl.AddField(_T("hhtd_clinical"), dfText, 512); 
	m_hms_htdocTbl.AddField(_T("hhtd_tests"), dfText, 254); 
	m_hms_htdocTbl.AddField(_T("hhtd_medicine"), dfText, 254); 
	m_hms_htdocTbl.AddField(_T("hhtd_patstate"), dfText, 128); 
	m_hms_htdocTbl.AddField(_T("hhtd_transdate"), dfDateTime); 
	m_hms_htdocTbl.AddField(_T("hhtd_reason"), dfText, 128); 
	m_hms_htdocTbl.AddField(_T("hhtd_transport"), dfLong); 
	m_hms_htdocTbl.AddField(_T("hhtd_attender"), dfText, 65); 
	m_hms_htdocTbl.AddField(_T("hhtd_line"), dfInteger);
	m_hms_htdocTbl.AddField(_T("hhtd_one_year_apply"), dfText, 1);
}
void CHMSHospitalTransfer::OnSetWindowEvents(){
	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndHospitalName.SetEvent(WE_SELENDOK, _OnHospitalNameSelendokFnc);
	//m_wndHospitalName.SetEvent(WE_SETFOCUS, _OnHospitalNameSetfocusFnc);
	//m_wndHospitalName.SetEvent(WE_KILLFOCUS, _OnHospitalNameKillfocusFnc);
	m_wndHospitalName.SetEvent(WE_SELCHANGE, _OnHospitalNameSelectChangeFnc);
	m_wndHospitalName.SetEvent(WE_LOADDATA, _OnHospitalNameLoadDataFnc);
	//m_wndHospitalName.SetEvent(WE_ADDNEW, _OnHospitalNameAddNewFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	//m_wndClinicalSymbol.SetEvent(WE_CHANGE, _OnClinicalSymbolChangeFnc);
	//m_wndClinicalSymbol.SetEvent(WE_SETFOCUS, _OnClinicalSymbolSetfocusFnc);
	//m_wndClinicalSymbol.SetEvent(WE_KILLFOCUS, _OnClinicalSymbolKillfocusFnc);
	m_wndClinicalSymbol.SetEvent(WE_CHECKVALUE, _OnClinicalSymbolCheckValueFnc);
	//m_wndTests.SetEvent(WE_CHANGE, _OnTestsChangeFnc);
	//m_wndTests.SetEvent(WE_SETFOCUS, _OnTestsSetfocusFnc);
	//m_wndTests.SetEvent(WE_KILLFOCUS, _OnTestsKillfocusFnc);
	m_wndTests.SetEvent(WE_CHECKVALUE, _OnTestsCheckValueFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndMedicineUsed.SetEvent(WE_CHANGE, _OnMedicineUsedChangeFnc);
	//m_wndMedicineUsed.SetEvent(WE_SETFOCUS, _OnMedicineUsedSetfocusFnc);
	//m_wndMedicineUsed.SetEvent(WE_KILLFOCUS, _OnMedicineUsedKillfocusFnc);
	m_wndMedicineUsed.SetEvent(WE_CHECKVALUE, _OnMedicineUsedCheckValueFnc);
	m_wndHospitalLine.SetEvent(WE_SELENDOK, _OnHospitalLineSelendokFnc);
	//m_wndHospitalLine.SetEvent(WE_SETFOCUS, _OnHospitalLineSetfocusFnc);
	//m_wndHospitalLine.SetEvent(WE_KILLFOCUS, _OnHospitalLineKillfocusFnc);
	m_wndHospitalLine.SetEvent(WE_SELCHANGE, _OnHospitalLineSelectChangeFnc);
	m_wndHospitalLine.SetEvent(WE_LOADDATA, _OnHospitalLineLoadDataFnc);
	//m_wndHospitalLine.SetEvent(WE_ADDNEW, _OnHospitalLineAddNewFnc);
	//m_wndPatientState.SetEvent(WE_CHANGE, _OnPatientStateChangeFnc);
	//m_wndPatientState.SetEvent(WE_SETFOCUS, _OnPatientStateSetfocusFnc);
	//m_wndPatientState.SetEvent(WE_KILLFOCUS, _OnPatientStateKillfocusFnc);
	m_wndPatientState.SetEvent(WE_CHECKVALUE, _OnPatientStateCheckValueFnc);
	//m_wndTransferDate.SetEvent(WE_CHANGE, _OnTransferDateChangeFnc);
	//m_wndTransferDate.SetEvent(WE_SETFOCUS, _OnTransferDateSetfocusFnc);
	//m_wndTransferDate.SetEvent(WE_KILLFOCUS, _OnTransferDateKillfocusFnc);
	m_wndTransferDate.SetEvent(WE_CHECKVALUE, _OnTransferDateCheckValueFnc);

	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);

	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_LOADDATA, _OnReasonLoadDataFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndTransport.SetEvent(WE_SELENDOK, _OnTransportSelendokFnc);
	//m_wndTransport.SetEvent(WE_SETFOCUS, _OnTransportSetfocusFnc);
	//m_wndTransport.SetEvent(WE_KILLFOCUS, _OnTransportKillfocusFnc);
	m_wndTransport.SetEvent(WE_SELCHANGE, _OnTransportSelectChangeFnc);
	m_wndTransport.SetEvent(WE_LOADDATA, _OnTransportLoadDataFnc);
	//m_wndTransport.SetEvent(WE_ADDNEW, _OnTransportAddNewFnc);
	//m_wndAttender.SetEvent(WE_SETFOCUS, _OnAttenderSetfocusFnc);
	//m_wndAttender.SetEvent(WE_KILLFOCUS, _OnAttenderKillfocusFnc);
	//m_wndHuongDieuTri.SetEvent(WE_CHANGE, _OnHuongDieuTriChangeFnc);
	//m_wndHuongDieuTri.SetEvent(WE_SETFOCUS, _OnHuongDieuTriSetfocusFnc);
	//m_wndHuongDieuTri.SetEvent(WE_KILLFOCUS, _OnHuongDieuTriKillfocusFnc);
	m_wndHuongDieuTri.SetEvent(WE_CHECKVALUE, _OnHuongDieuTriCheckValueFnc);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndone_year_apply.SetEvent(WE_CLICK, _Onone_year_applySelectFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSHospitalTransferFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSHospitalTransferFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSHospitalTransferFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSHospitalTransferFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSHospitalTransferFnc, 0, 'T', VK_CONTROL);
*/
	

	m_szTransferDate = pMF->GetSysDateTime();
	GetDataToScreen();

}
void CHMSHospitalTransfer::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndHospitalName.GetDlgCtrlID(), m_szHospitalNameKey);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_Text(pDX, m_wndClinicalSymbol.GetDlgCtrlID(), m_szClinicalSymbol);
	DDX_Text(pDX, m_wndTests.GetDlgCtrlID(), m_szTests);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndMedicineUsed.GetDlgCtrlID(), m_szMedicineUsed);
	DDX_TextEx(pDX, m_wndHospitalLine.GetDlgCtrlID(), m_szHospitalLineKey);
	DDX_Text(pDX, m_wndPatientState.GetDlgCtrlID(), m_szPatientState);
	DDX_TextEx(pDX, m_wndTransferDate.GetDlgCtrlID(), m_szTransferDate);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndTransport.GetDlgCtrlID(), m_szTransportKey);
	DDX_Text(pDX, m_wndAttender.GetDlgCtrlID(), m_szAttenderKey);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndReason.GetDlgCtrlID(), m_szReasonKey);
	DDX_Text(pDX, m_wndHuongDieuTri.GetDlgCtrlID(), m_szHuongDieuTri);
	DDX_Check(pDX, m_wndone_year_apply.GetDlgCtrlID(), m_bone_year_apply);

}
void CHMSHospitalTransfer::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szone_year_apply;
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hd_conclusion"), m_szConclusion);
		rs.GetValue(_T("hd_icd"), m_szICD10Key);
		rs.GetValue(_T("hd_enddate"), m_szOutDate);
		rs.GetValue(_T("hd_tohosid"), m_szHospitalNameKey);
		rs.GetValue(_T("hd_result"), m_szResultKey);
		rs.GetValue(_T("hd_sugg2"), m_szHuongDieuTri);


		//rs.GetValue(_T("hd_conclusion"), m_szConclusion);
		

		if(m_szOutDate.IsEmpty())
			m_szOutDate = pMF->GetSysDateTime();
		if(m_szMainDisease.IsEmpty())
		{
			m_szMainDisease = pMF->m_szDiagnostic;
			//m_szConclusion = m_wndICD10.GetCurrent(1);
			m_szConclusion=pMF->m_wndPatientDocument.m_szConclusion;
		}

		szSQL.Format(_T("SELECT * FROM hms_htdoc WHERE hhtd_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("hhtd_clinical"), m_szClinicalSymbol);
			rs.GetValue(_T("hhtd_tests"), m_szTests);
			rs.GetValue(_T("hhtd_medicine"), m_szMedicineUsed);
			rs.GetValue(_T("hhtd_patstate"), m_szPatientState);
			rs.GetValue(_T("hhtd_transdate"), m_szTransferDate);
			rs.GetValue(_T("hhtd_reason"), m_szReasonKey);
			rs.GetValue(_T("hhtd_transport"), m_szTransportKey);
			rs.GetValue(_T("hhtd_attender"), m_szAttenderKey);
			rs.GetValue(_T("hhtd_line"), m_szHospitalLineKey);
			rs.GetValue(_T("hhtd_one_year_apply"), szone_year_apply);

			if (szone_year_apply == _T("Y"))
				m_bone_year_apply = TRUE;
			else
				m_bone_year_apply = FALSE;
		}
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSHospitalTransfer::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_docTbl.SetValue(_T("hd_doctor"), pMF->m_szDoctor);
	m_hms_docTbl.SetValue(_T("hd_status"), _T("T"));
	m_hms_docTbl.SetValue(_T("hd_conclusion"), m_szConclusion);
	m_hms_docTbl.SetValue(_T("hd_icd"), m_szICD10Key);
	m_hms_docTbl.SetValue(_T("hd_diagnostic"), m_szMainDisease);
	//m_hms_docTbl.SetValue(_T("hd_suggestion"), _T("F"));
	m_hms_docTbl.SetValue(_T("hd_sugg2"), m_szHuongDieuTri);
	m_hms_docTbl.SetValue(_T("hd_result"), m_szResultKey);
	m_hms_docTbl.SetValue(_T("hd_enddept"), pMF->m_szDept);
	m_hms_docTbl.SetValue(_T("hd_enddate"), m_szOutDate);
	m_hms_docTbl.SetValue(_T("hd_tohosid"), m_szHospitalNameKey);
	m_hms_docTbl.SetValue(_T("hd_areceptidx"), pMF->m_nRefIndex);	
	m_hms_docTbl.SetValue(_T("hd_ttrang_rv"), 2);

	m_hms_htdocTbl.SetValue(_T("hhtd_docno"), pMF->m_nDocumentNo);
	m_hms_htdocTbl.SetValue(_T("hhtd_clinical"), m_szClinicalSymbol);
	m_hms_htdocTbl.SetValue(_T("hhtd_tests"), m_szTests);
	m_hms_htdocTbl.SetValue(_T("hhtd_medicine"), m_szMedicineUsed);
	m_hms_htdocTbl.SetValue(_T("hhtd_patstate"), m_szPatientState);
	m_hms_htdocTbl.SetValue(_T("hhtd_transdate"), m_szTransferDate);
	m_hms_htdocTbl.SetValue(_T("hhtd_reason"), m_szReasonKey);
	m_hms_htdocTbl.SetValue(_T("hhtd_transport"), m_szTransportKey);
	m_hms_htdocTbl.SetValue(_T("hhtd_attender"), m_szAttenderKey);
	m_hms_htdocTbl.SetValue(_T("hhtd_line"), m_szHospitalLineKey);
	CString szone_year_apply;
	if (m_bone_year_apply)
		szone_year_apply = _T("Y");
	else
		szone_year_apply = _T("N");

	m_hms_htdocTbl.SetValue(_T("hhtd_one_year_apply"), szone_year_apply);
	

}


void CHMSHospitalTransfer::SetDefaultValues(){

	m_szICD10Key.Empty();
	m_szConclusion.Empty();
	m_szHospitalNameKey.Empty();
	m_szOutDate.Empty();
	m_szClinicalSymbol.Empty();
	m_szTests.Empty();
	m_szMainDisease.Empty();
	m_szMedicineUsed.Empty();
	m_szHospitalLineKey.Empty();
	m_szPatientState.Empty();
	m_szTransferDate.Empty();
	m_szReason.Empty();
	m_szTransportKey.Empty();
	m_szAttenderKey.Empty();
	m_szHospitalLineKey = _T("1");
	m_szHuongDieuTri.Empty();
		m_nNumberTrans =0;
	m_nExamNumber = 0;
	m_bone_year_apply=FALSE;
	//m_nTreatNumber = 0;

}
int CHMSHospitalTransfer::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
			m_wndICD10.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CHMSHospitalTransfer::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnICD10Selendok(){
	UpdateData(true);
	m_szMainDisease = m_wndICD10.GetCurrent(1);
	UpdateData(false);	 
}
/*void CHMSHospitalTransfer::OnICD10Setfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnICD10Killfocus(){
	
}*/
long CHMSHospitalTransfer::OnICD10LoadData(){
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitalTransfer::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHospitalTransfer::OnConclusionChange(){
	
} */
/*void CHMSHospitalTransfer::OnConclusionSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnConclusionKillfocus(){
	
} */
int CHMSHospitalTransfer::OnConclusionCheckValue(){
	return 0;
} 
void CHMSHospitalTransfer::OnHospitalNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnHospitalNameSelendok(){
	 
}
/*void CHMSHospitalTransfer::OnHospitalNameSetfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnHospitalNameKillfocus(){
	
}*/
long CHMSHospitalTransfer::OnHospitalNameLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadHospitalList(&m_wndHospitalName, m_szHospitalNameKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospitalName.IsSearchKey() && !m_szHospitalNameKey.IsEmpty()){
	};
	m_wndHospitalName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospitalName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitalTransfer::OnHospitalNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHospitalTransfer::OnOutDateChange(){
	
} */
/*void CHMSHospitalTransfer::OnOutDateSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnOutDateKillfocus(){
	
} */
int CHMSHospitalTransfer::OnOutDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(CompareDate(pMF->m_szEntryDate, m_szOutDate) > 0)
		return -1;
	return 0;
} 
/*void CHMSHospitalTransfer::OnClinicalSymbolChange(){
	
} */
/*void CHMSHospitalTransfer::OnClinicalSymbolSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnClinicalSymbolKillfocus(){
	
} */
int CHMSHospitalTransfer::OnClinicalSymbolCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnTestsChange(){
	
} */
/*void CHMSHospitalTransfer::OnTestsSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnTestsKillfocus(){
	
} */
int CHMSHospitalTransfer::OnTestsCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnMainDiseaseChange(){
	
} */
/*void CHMSHospitalTransfer::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnMainDiseaseKillfocus(){
	
} */
int CHMSHospitalTransfer::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnMedicineUsedChange(){
	
} */
/*void CHMSHospitalTransfer::OnMedicineUsedSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnMedicineUsedKillfocus(){
	
} */
int CHMSHospitalTransfer::OnMedicineUsedCheckValue(){
	return 0;
} 

void CHMSHospitalTransfer::OnHospitalLineSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnHospitalLineSelendok(){
	 
}
/*void CHMSHospitalTransfer::OnHospitalLineSetfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnHospitalLineKillfocus(){
	
}*/
long CHMSHospitalTransfer::OnHospitalLineLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndHospitalLine, _T("hms_hospital_line"), m_szHospitalLineKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospitalLine.IsSearchKey() && !m_szHospitalLineKey.IsEmpty()){
	};
	m_wndHospitalLine.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospitalLine.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitalTransfer::OnHospitalLineAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMSHospitalTransfer::OnPatientStateChange(){
	
} */
/*void CHMSHospitalTransfer::OnPatientStateSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnPatientStateKillfocus(){
	
} */
int CHMSHospitalTransfer::OnPatientStateCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnTransferDateChange(){
	
} */
/*void CHMSHospitalTransfer::OnTransferDateSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnTransferDateKillfocus(){
	
} */
int CHMSHospitalTransfer::OnTransferDateCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnReasonChange(){
	
} */
/*void CHMSHospitalTransfer::OnReasonSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnReasonKillfocus(){
	
} */

long CHMSHospitalTransfer::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndResult, _T("hms_result"), m_szResultKey);
	return 0;
}

long CHMSHospitalTransfer::OnReasonLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndReason, _T("hms_transfer_reason"), m_szReasonKey);
	return 0;

}

int CHMSHospitalTransfer::OnReasonCheckValue(){
	return 0;
} 
void CHMSHospitalTransfer::OnTransportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnTransportSelendok(){
	 
}
/*void CHMSHospitalTransfer::OnTransportSetfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnTransportKillfocus(){
	
}*/
long CHMSHospitalTransfer::OnTransportLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndTransport, _T("hms_transport_type"), m_szTransportKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransport.IsSearchKey() && !m_szTransportKey.IsEmpty()){
	};
	m_wndTransport.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransport.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitalTransfer::OnTransportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMSHospitalTransfer::OnAttenderSetfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnAttenderKillfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnHuongDieuTriChange(){
	
} */
/*void CHMSHospitalTransfer::OnHuongDieuTriSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnHuongDieuTriKillfocus(){
	
} */
int CHMSHospitalTransfer::OnHuongDieuTriCheckValue(){
	return 0;
} 


void CHMSHospitalTransfer::OnEntertainTreatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bEntertainTreat)
	{
		CHMSEntertainTreatDialog dlg(this);
		dlg.DoModal();
	}
} 

void CHMSHospitalTransfer::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSHospitalTransfer();
	
} 
void CHMSHospitalTransfer::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSHospitalTransfer();
	
} 
void CHMSHospitalTransfer::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSHospitalTransfer();
	
} 
void CHMSHospitalTransfer::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->PrintHospitalTransferSheet(pMF->m_nDocumentNo, 0);
} 
int CHMSHospitalTransfer::OnAddHMSHospitalTransfer(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSHospitalTransfer::OnEditHMSHospitalTransfer(){
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
int CHMSHospitalTransfer::OnDeleteHMSHospitalTransfer(){
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
 		OnCancelHMSHospitalTransfer(); 
 	}
	return 0;
 } 
int CHMSHospitalTransfer::OnSaveHMSHospitalTransfer(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndOutDate.SetMax(CDateTime(pMF->GetSysDateTime()));	
	CRecord rs(&pMF->m_db);
	CString szSQL;

	/*szSQL.Format(_T("SELECT count(*) FROM hms_outpatient WHERE hop_docno=%ld AND hop_status ='O' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is out treatment. Can not update it."), MB_OK|MB_ICONWARNING);
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is created treatment record. Can not update it."), MB_OK);
		return -1;
	}*/

 	if(!IsValidateData()) 
 		return -1; 

 	if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE hd_docno=%ld "), pMF->m_nDocumentNo); 
 		szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno")); 
 		szSQL += szWhere; 
 	} 
	//_msg(_T("%s"), szSQL);

	
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
		szSQL.Format(_T("DELETE FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		//szSQL.Format(_T("DELETE FROM hms_treatment_dttd WHERE htd_docno=%ld"), pMF->m_nDocumentNo);
		//pMF->ExecSQL(szSQL);


		szSQL = m_hms_htdocTbl.GetInsertSQL(); 
		pMF->ExecSQL(szSQL);		
		
		OnPrintSelect();
		SetMode(VM_VIEW); 
	//	((CGuiDialog *)	GetParent()->GetParent())->OnOK();*/

 	} 
 	else 
 	{ 
 	} 

	//OnOK();
 	return ret; 
}
int CHMSHospitalTransfer::OnCancelHMSHospitalTransfer(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	return 0;
} 
int CHMSHospitalTransfer::OnHMSHospitalTransferListLoadData(){
	return 0;
}

void CHMSHospitalTransfer::Onone_year_applySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
