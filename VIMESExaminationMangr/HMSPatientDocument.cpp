#include "HMSPatientDocument.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSTerminateDocumentDialog.h"
#include "HMSExaminationChangeDialog.h"
#include "HMSExaminationMoveDialog.h"
#include "HMSCardViewDialog.h"
#include "HMSSpecialExamDialog.h"
#include "HMSEmergencyReceiptDialog.h"
#include "ReportDocument.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSDentalTreatmentDlg.h"
#include "HMSBedUsage.h"
#include "HMSMauBenhAnDlg.h"
#include "HMSExtraInfoDialog.h"
#include "HE_INPUTENDDATE.h"
#include "HMSExamHtmlDialog.h"
#include "HMSPatientDeathDialog.h"
#include "HMSBenhAnHTMLDialog.h"
#include "HMSTreatmentCareEMDialog.h"
#include "HMSTreatmentTrackingDialog.h"
#include "HMSSelectionListDialog.h"
#include "HMSTerminateCovidDocument.h"
#include "HMSConclusionExtendDlg.h"
#include "HMSTreatmentHistory.h"
#include "HMSHelper.h"

static int _OnTerminateDocumentInformationFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnTerminateDocumentInformation();
}
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSexCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnCardInfoBtnSelect();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnExamDateCheckValue();
} 
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDKillfocus();
} */
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDKillfocus();
} */
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnICDLoadData();
} 
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnConclusionChange();
} */

static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnConclusionSetfocus();}

/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnConclusionCheckValue();
} 
static void _OnSuggestionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnSuggestionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSuggestionSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionSelendok();
}
static void _OnConclusionLabelSelectFnc(CWnd *pWnd)
{
	((CHMSPatientDocument *)pWnd)->OnConclusionLabelSelect();
}
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionKillfocus();
}*/
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionKillfocus();
} */
static long _OnSuggestionLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSuggestionLoadData();
} 
/*static void _OnSuggestionAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionAddNew();
}*/
static void _OnInDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnInDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInDeptSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptSelendok();
}
/*static void _OnInDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptKillfocus();
}*/
/*static void _OnInDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptKillfocus();
}*/
static long _OnInDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnInDeptLoadData();
}
/*static void _OnInDeptAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptAddNew();
}*/
static void _OnBedUsageSelectFnc(CWnd *pWnd){
	((CHMSPatientDocument *) pWnd)->OnBedUsageSelect();
}
static void _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHospitalSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalSelendok();
}
/*static void _OnHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalKillfocus();
}*/
/*static void _OnHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalKillfocus();
}*/
static long _OnHospitalLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnHospitalLoadData();
} 
/*static void _OnHospitalAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalAddNew();
}*/

static int _OnExaminationTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	return((CHMSPatientDocument*)pWnd)->OnExaminationTabSelectChange(nOld, nNew);
} 

static long _OnExamListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd->GetParent())->OnExamListLoadData();
} 
static void _OnExamListDblClickFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd->GetParent())->OnExamListDblClick();
} 
static void _OnExamListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientDocument*)pWnd->GetParent())->OnExamListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd->GetParent())->OnExamListDeleteItem();
} 
static int _OnExamListCreateExaminationReceiptFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd->GetParent())->OnExamListCreateExaminationReceipt();
} 
static int _OnExamListMoveExaminationReceiptFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd->GetParent())->OnExamListMoveExaminationReceipt();
}


static long _OnHistoryListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPatientDocument*)pWnd->GetParent())->OnHistoryListLoadData();
}
static void _OnHistoryListDblClickFnc(CWnd* pWnd) {
	((CHMSPatientDocument*)pWnd->GetParent())->OnHistoryListDblClick();
}
static void _OnHistoryListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSPatientDocument*)pWnd->GetParent())->OnHistoryListSelectChange(nOldItem, nNewItem);
}
static int _OnHistoryListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSPatientDocument*)pWnd->GetParent())->OnHistoryListDeleteItem();
}


static long _OnDiseaseHistoryLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPatientDocument*)pWnd->GetParent())->OnDiseaseHistoryLoadData();
}
static void _OnDiseaseHistoryDblClickFnc(CWnd* pWnd) {
	((CHMSPatientDocument*)pWnd->GetParent())->OnDiseaseHistoryDblClick();
}
static void _OnDiseaseHistorySelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSPatientDocument*)pWnd->GetParent())->OnDiseaseHistorySelectChange(nOldItem, nNewItem);
}
static int _OnDiseaseHistoryDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSPatientDocument*)pWnd->GetParent())->OnDiseaseHistoryDeleteItem();
}

static int _OnAddHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnAddHMSPatientDocument();
} 
static int _OnEditHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnEditHMSPatientDocument();
} 
static int _OnDeleteHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnDeleteHMSPatientDocument();
} 
static int _OnSaveHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnSaveHMSPatientDocument();
} 
static int _OnCancelHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnCancelHMSPatientDocument();
} 

static int _OnRollbackHMSPatientDocumentFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnRollbackHMSPatientDocument();
} 

static int _OnTerminateHMSPatientDocumentFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnTerminateDocument();
	return 0;
} 

static int _OnEnterAccidentHMSPatientDocumentFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnEnterAccidentHMSPatientDocument();
} 
static int _OnPrintSummarizeExaminationSheetFnc(CWnd *pWnd){
	
	return ((CHMSPatientDocument*)pWnd)->OnPrintSummarizeExaminationSheet();
}

static int _OnPrintAdmissionSheetFnc(CWnd *pWnd){
	
	((CHMSPatientDocument*)pWnd)->OnPrintAdmissionSheet();
	return 0;
}

static int _OnAddNewReceptionFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnAddNewReception();
} 

static void _OnPrintSummarizeFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnPrintSummarizeExaminationSheet();
}

static void _OnPaymentAndPrintPrescritionFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnPaymentAndPrintPrescription();
}

static void _OnCancelReceiptFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnCancelReceipt();
}
static void	_OnParaclinicalFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnParaclinical();
}
static int _OnPrintEmergencyReceiptFnc(CWnd *pWnd){
	
	return ((CHMSPatientDocument*)pWnd)->OnPrintEmergencyReceipt();
}
static int _OnBenhAnFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnMauBenhAn();
	 return 0;
}
static int _OnGiaychungnhannghiviecFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnGiayChungNhanNghiViec();
	 return 0;
}
static int _OnBenhAnNoitruFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnClinicalRecordInput();
	 return 0;
}

static int _OnUpdateTreatModeFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnUpdateTreatMode();
	 return 0;
}


static int _OnCreateSpecificFormFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnCreateSpecificForm();
	 return 0;
}
static int _OnSurgeryReqFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnSurgeryReq();
	 return 0;
}

static int _OnPrintLaserReceiptListFnc(CWnd *pWnd){
	
	return ((CHMSPatientDocument*)pWnd)->OnPrintLaserReceiptList();
}


static int _OnSecurityPatientProfileFnc(CWnd *pWnd){
	
	return ((CHMSPatientDocument*)pWnd)->OnSecurityPatientProfile();
}

static int _OnViewSecurePatientProfileFnc(CWnd *pWnd){
	
	((CHMSPatientDocument*)pWnd)->OnViewSecurePatientProfile();
	return 0;
}


static int _OnAppointmentReceiptFnc(CWnd *pWnd){
	
	((CHMSPatientDocument*)pWnd)->OnAppointmentReceipt();
	return 0;
}
static int _OnThudungdtngtFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnThudungdtngt();
	return 0;
}
static int _OnPhieuDieuTriKhoaRangFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnPhieuDieuTriKhoaRang();
	return 0;
}
static int _OnPrintRehabilitationCertifyFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnPrintRehabilitationCertify();
	return 0;
}


static void _OnAntibioticUseSelectFnc(CWnd *pWnd){
	((CHMSPatientDocument *) pWnd)->OnAntibioticUseSelect();
}
static int _OnPatientCareEMSelectFnc(CWnd *pWnd)
{
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnPatientCareEMSelect();
	return 0;
}
static int _OnExamTrackingFnc(CWnd *pWnd)
{
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnExamTracking();
	return 0;
}

static void _OnHenKhamLaiSelectFnc(CWnd *pWnd)
{
	((CHMSPatientDocument *) pWnd)->OnHenKhamLaiSelect();
}

static void _OnLoaiKCBSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnLoaiKCBSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLoaiKCBSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnLoaiKCBSelendok();
}

static void _OnLoaiKCBKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnLoaiKCBKillfocus();
}
static long _OnLoaiKCBLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnLoaiKCBLoadData();
}

static int _OnSearchDocumentInformationFnc(CWnd *pWnd)
{
	
	((CHMSPatientDocument*)pWnd)->OnSearchDocumentInformation();
	return 0;
}


static void _OnExaminationReceiptsSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    ((CHMSPatientDocument *)pWnd)
        ->OnExaminationReceiptsSelectChange(nOldItemSel, nNewItemSel);
}

static int _OnCreateHospitalTransferFnc(CWnd *pWnd)
{
	 ((CHMSPatientDocument*)pWnd)->OnCreateHospitalTransfer();
	 return 0;
}

CHMSPatientDocument::CHMSPatientDocument(){

	m_nDlgWidth = 1020;
	m_nDlgHeight = 625;
	
	//m_bEnableResize = false;
}
CHMSPatientDocument::~CHMSPatientDocument()
{
}
void CHMSPatientDocument::OnCreateComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 380, 240);
	m_wndOutpatientDesc.Create(this, _T("Outpatient"), 150, 5, 380, 25);
	m_wndOutpatientDesc.SetTextColor(RGB(255, 0, 0));
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 245, 380, 500);
	m_wndExaminationReceipts.Create(this, 5, 493, 380, 620);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 110, 55);
	m_wndPatientNo.Create(this,115, 30, 200, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 205, 30, 280, 55);
	m_wndDocumentNo.Create(this,285, 30, 376, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 375, 85);
	
	if (pMF->GetCurrentDepartmentID() == _T("TTHTSS"))
	{
		m_wndAgeLabel.Create(this, _T("Năm sinh"), 10, 90, 110, 115);
	}
	else
	{
		m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	}

	m_wndAge.Create(this,115, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 280, 115);
	m_wndSex.Create(this,285, 90, 376, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 10, 120, 110, 145);
	m_wndOccupation.Create(this,115, 120, 250, 145); 
	m_wndPhoneLabel.Create(this, _T("Tel"), 255, 120, 280, 145);
	m_wndPhone.Create(this,285, 120, 375, 145);
	m_wndAddressLabel.Create(this, _T("Address"), 10, 150, 110, 175);
	m_wndAddress.Create(this,115, 150, 375, 175); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 180, 110, 205);
	m_wndWorkplace.Create(this,115, 180, 375, 205); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 210, 110, 235);
	m_wndObject.Create(this,115, 210, 200, 235); 
	m_wndCardNo.Create(this,205, 210, 345, 235); 
	m_wndCardInfoBtn.Create(this, _T("..."), 350, 210, 375, 235);
	m_wndExamDate.Create(this,115, 270, 200, 295); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 10, 270, 110, 295);
	m_wndStatusLabel.Create(this, _T("Status"), 205, 270, 280, 295);
	m_wndStatus.Create(this,285, 270, 376, 295); 
	m_wndICDLabel.Create(this, _T("ICD10"), 10, 300, 110, 325);
	m_wndICD.Create(this,115, 300, 375, 325);
	m_wndConclusionLabel.Create(this, _T("Kết luận chung"), 10, 330, 110, 355);
	m_wndConclusion.Create(this,115, 330, 375, 375, TRUE, FALSE, TRUE); 
	
	m_wndAntibioticUse.Create(this, _T("HDSD Kháng sinh"), 10, 330+25, 110, 355+25);
	m_wndAntibioticUse.ModifyStyle(WS_TABSTOP, 0);
	if(pMF->m_szDept == _T("TYC") || pMF->m_UserInfo.su_hms_xdept == _T("TYC") || pMF->m_szDept == _T("PTTYC") || pMF->m_UserInfo.su_hms_xdept == _T("PTTYC"))
	{
		//m_wndHenkhamlai.Create(this, _T("Tạo lịch hẹn"), 10, 330+55, 110, 355+55);
		//m_wndHenkhamlai.ModifyStyle(WS_TABSTOP, 0);
	}
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 380, 110, 405);
	m_wndSuggestion.Create(this,115, 380, 375, 435);	
	m_wndSuggestion.EnableWindow(false);

	m_wndLoaiKCBLabel.Create(this, _T("Loại KCB"), 10, 410, 110, 435);
	m_wndLoaiKCB.Create(this,115, 410, 375, 435);

	m_wndInDeptLabel.Create(this, _T("In Dept"), 10, 440, 110, 465);

	m_wndInDept.Create(this, 115, 440, 345, 465);
	//m_wndBedUsage.Create(this, _T("..."), 350, 440, 375, 465);
	m_wndBedUsage.Create(this, _T("..."), 350, 440, 375, 465);
	m_wndBedUsage.EnableWindow(false);
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 470, 110, 495);
	m_wndHospital.Create(this, 115, 470, 375, 495);

	m_wndExamList.Create(&m_wndExaminationReceipts, 5, 5, 300, 300);
	m_wndExamList.SetItemHeight(45);
	m_wndHistoryList.Create(&m_wndExaminationReceipts, 5, 5, 300, 300);
	m_wndHistoryList.SetItemHeight(45);
	m_wndDiseaseHistory.Create(&m_wndExaminationReceipts, 5, 5, 300, 300);
	m_wndDiseaseHistory.SetItemHeight(45);
	m_wndExaminationReceipts.Add(_T("Exam recceipts"), &m_wndExamList);
	m_wndExaminationReceipts.Add(_T("Exam history"), &m_wndHistoryList);
	m_wndExaminationReceipts.Add(_T("Disease history"), &m_wndDiseaseHistory);
	m_wndExaminationReceipts.SetPadding(CSize(8, 4));


	if(pMF->m_bPrintSummarize)
	{
		m_wndExaminationTab.Create(this,385, 5, 1010, 585); 
		m_wndPrescription.Create(&m_wndExaminationTab);
		m_wndExaminationTab.Add(_T("Prescription"), &m_wndPrescription);
		int w = 150;
		m_wndPrintSummarize.Create(this, _T("Print Summarize"), 385, 590, 385+w, 620);
		m_wndPrintPrescrition.Create(this, _T("Print Prescription"), 385+w+5, 590, 385+2*w, 620);
		CString szLable;		
		m_wndCancelReceipt.Create(this, _T("Disconfirm"), 735, 590, 850, 620);
		m_wndParaclinical.Create(this, _T("Paraclinical"), 855, 590, 1000, 620);
	}
	else
	{
		m_wndExaminationTab.Create(this,385, 5, 1010, 620);

		m_wndOverview.Create(&m_wndExaminationTab);
		m_wndExaminationTab.Add(_T("Tổng quan"), &m_wndOverview);


		if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
		{
			m_wndExamineV2.Create(&m_wndExaminationTab);
		}
		else
		{
			m_wndExamine.Create(&m_wndExaminationTab);
		}
		m_wndParaclinicalOrder.Create(&m_wndExaminationTab);
		m_wndOperationOrder.Create(&m_wndExaminationTab);
		m_wndPrescription.Create(&m_wndExaminationTab);
		m_wndFeeDocument.Create(&m_wndExaminationTab);
		m_wndDrugInformation.Create(&m_wndExaminationTab);
		
		if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
		{
			m_wndExaminationTab.Add(_T("Khám lâm sàng C1.3"), &m_wndExamineV2);
		}
		else
		{
			m_wndExaminationTab.Add(_T("Examine"), &m_wndExamine);
		}
		m_wndExaminationTab.Add(_T("Para-clinical"), &m_wndParaclinicalOrder);
		m_wndExaminationTab.Add(_T("Operation"), &m_wndOperationOrder);
		m_wndExaminationTab.Add(_T("Prescription"), &m_wndPrescription);
		m_wndExaminationTab.Add(_T("Drug Information"), &m_wndDrugInformation);
		m_wndExaminationTab.Add(_T("Hospital Fee"), &m_wndFeeDocument);	
		

		/*if(pMF->m_szDept == _T("C1.2"))
		{
			m_wndGeneralRankExamine.Create(&m_wndExaminationTab);
			m_wndExaminationTab.Add(_T("General Examination"), &m_wndGeneralRankExamine);
		}*/
	}

	if(pMF->GetProp(_T("hms_emr_enable")) == _T("Y"))
	{
		/*	m_wndSignatureView.Create(this, CRect(0,0,0,0));
			m_wndExaminationTab.Add(_T("Electric medical record"), &m_wndSignatureView);*/
		//m_wndPatientEMR.Create(this, CRect(0, 0, 0, 0));
		//m_wndExaminationTab.Add(_T("Bệnh án điện tử"), &m_wndPatientEMR);

	}

	m_wndExaminationTab.SetPadding(CSize(10, 5));	
	m_wndExaminationTab.SetCurSel(1);
	
	m_wndExaminationReceipts.SetPadding(CSize(10, 0));
	m_wndExaminationReceipts.SetCurSel(0);


	m_wndDetailAddress.Create(this, 0, 0, 0, 0);
	m_wndDetailAddress.ShowWindow(SW_HIDE);
	m_wndDetailAddress.EnableWindow(FALSE);
	m_wndDoctor.Create(this, 0, 0, 0, 0);
	m_wndDoctor.ShowWindow(SW_HIDE);
	m_wndDoctor.EnableWindow(FALSE);

	m_wndDetailAddrlLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDetailAddrlLabel.ShowWindow(SW_HIDE);
	m_wndDetailAddrlLabel.EnableWindow(FALSE);
	m_wndDoctorLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDoctorLabel.ShowWindow(SW_HIDE);
	m_wndDoctorLabel.EnableWindow(FALSE);
	m_wndEndDateLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndEndDateLabel.ShowWindow(SW_HIDE);
	m_wndEndDateLabel.EnableWindow(FALSE);
	m_wndFinishedDate.Create(this, 0, 0, 0, 0);
	m_wndFinishedDate.ShowWindow(SW_HIDE);
	m_wndFinishedDate.EnableWindow(FALSE);
	m_wndDiagnosticLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDiagnosticLabel.ShowWindow(SW_HIDE);
	m_wndDiagnosticLabel.EnableWindow(FALSE);
	m_wndDiagnostic.Create(this, 0, 0, 0, 0);
	m_wndDiagnostic.ShowWindow(SW_HIDE);
	m_wndDiagnostic.EnableWindow(FALSE);

	
}
void CHMSPatientDocument::OnInitializeComponents(){
    
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    SetDefaultValues();

	m_wndPatientNo.SetLimitText(10);
//	m_wndPatientNo.SetCheckValue(true);
	
	m_wndDocumentNo.SetLimitText(10);
	//m_wndDocumentNo.SetCheckValue(true);
    

	m_wndPatientName.SetLimitText(64);
//	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	m_wndAge.SetLimitText(10);
//	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(15);
//	m_wndSex.SetCheckValue(true);
	m_wndOccupation.SetLimitText(128);
//	m_wndOccupation.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
//	m_wndAddress.SetCheckValue(true);
	//m_wndDetailAddress.SetLimitText(1024);
//	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(128);
//	m_wndWorkplace.SetCheckValue(true);
	m_wndObject.SetLimitText(128);
//	m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(18);
//	m_wndCardNo.SetCheckValue(true);
	m_wndDoctor.SetLimitText(35);
//	m_wndDoctor.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
//	m_wndStatus.SetCheckValue(true);
	m_wndExamDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExamDate.SetCheckValue(true);
	m_wndICD.SetCheckValue(true);
	m_wndICD.LimitText(255);
	
	m_wndConclusion.SetMultiLine(TRUE);
	m_wndConclusion.SetLimitText(1024);
	m_wndConclusion.SetCheckValue(true);
	m_wndSuggestion.SetCheckValue(true);
	m_wndConclusionLabel.SetHyperlink(true);
	m_wndSuggestion.LimitText(50);
	m_wndInDept.SetCheckValue(true);
	m_wndInDept.LimitText(60);
	m_wndHospital.SetCheckValue(true);
	m_wndHospital.LimitText(60);

	//Nếu dùng thông tư 130 -> Enable Combobox Mã loại KCB lên để nhập
	m_wndLoaiKCB.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndLoaiKCB.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

	m_wndICD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndSuggestion.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSuggestion.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndInDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndInDept.InsertColumn(2, _T("Total Patient"), CFMT_NUMBER, 100);


	m_wndHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 700);


	m_wndExamList.InsertColumn(0, _T("Room"), CFMT_TEXT, 220);
	m_wndExamList.InsertColumn(1, _T("Exam Date"), CFMT_TEXT, 85);
	m_wndExamList.InsertColumn(2, _T("Status"), CFMT_TEXT|CFMT_CENTER, 90);
	m_wndExamList.InsertColumn(3, _T("roomid"), CFMT_TEXT, 0);
	m_wndExamList.InsertColumn(4, _T("receptidx"), CFMT_TEXT, 0);
	m_wndExamList.InsertColumn(5, _T("Dept"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndExamList.InsertColumn(6, _T("feeidx"), CFMT_TEXT, 0);
	m_wndExamList.InsertColumn(7, _T("he_status"), CFMT_TEXT, 0);
	m_wndExamList.InsertColumn(8, _T("Số Lượt khám"), CFMT_TEXT|CFMT_CENTER, 0);

	//m_wndExamList.SetHeaderHeight(30);

	m_wndExamList.ModifyStyle(WS_TABSTOP, 0);

	m_wndHistoryList.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 70);
	m_wndHistoryList.InsertColumn(1, _T("Exam Date"), CFMT_DATETIME, 110);
	m_wndHistoryList.InsertColumn(2, _T("Diagnostic"), CFMT_TEXT | CFMT_CENTER, 250);

	m_wndDiseaseHistory.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 70);
	m_wndDiseaseHistory.InsertColumn(1, _T("Exam Date"), CFMT_DATETIME, 110);
	m_wndDiseaseHistory.InsertColumn(2, _T("Owner"), CFMT_TEXT | CFMT_CENTER, 100);
	m_wndDiseaseHistory.InsertColumn(3, _T("Family"), CFMT_TEXT | CFMT_CENTER, 100);
	m_wndDiseaseHistory.InsertColumn(4, _T("Allergy"), CFMT_TEXT | CFMT_CENTER, 100);


	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_outstate"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_enddept"), dfText, 7);
	m_hms_docTbl.AddField(_T("hd_enddate"), dfDateTime);
	m_hms_docTbl.AddField(_T("hd_icd"), dfText, 13);
	m_hms_docTbl.AddField(_T("hd_diagnostic"), dfText, 1024);	//Benh chinh
	m_hms_docTbl.AddField(_T("hd_reldisease"), dfText, 254);	//benh kem theo
	m_hms_docTbl.AddField(_T("hd_conclusion"), dfText, 1024);	//Ket luan
	m_hms_docTbl.AddField(_T("hd_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	//m_hms_docTbl.AddField(_T("hd_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_docTbl.AddField(_T("hd_doctor"), dfText, 15);
	m_hms_docTbl.AddField(_T("hd_indept"), dfText, 7);	//Khoa dieu tri
	m_hms_docTbl.AddField(_T("hd_tohosid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_treatmethod"), dfText, 254);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_areceptidx"), dfLong);
	m_hms_docTbl.AddField(_T("hd_ma_loai_kcb"), dfText,3);

	m_hms_clinical_recordTbl.SetTableName(_T("hms_clinical_record"));
	m_hms_clinical_recordTbl.AddField(_T("hcr_createdby"), dfText, 15); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_createddate"), dfDateTime); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_updatedby"), dfText, 15); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_updateddate"), dfDateTime); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_patientno"), dfLong); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_docno"), dfLong); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_recordno"), dfText, 15); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_status"), dfText, 1); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admitdate"), dfDateTime); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admitdept"), dfText, 7); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admiticd"), dfText, 13); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_admitdisease"), dfText, 7); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_reason"), dfText, 128); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_pathological"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_systemic"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_partsbody"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_speciality"), dfText, 1024); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_tests"), dfText, 512); 
	m_hms_clinical_recordTbl.AddField(_T("hcr_summarize"), dfText, 1024);
	m_hms_clinical_recordTbl.AddField(_T("hcr_refidx"), dfInteger);

	m_hms_treatment_recordTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatment_recordTbl.AddField(_T("htr_createdby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_createddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updatedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updateddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_patientno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_docno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_deptid"), dfText, 7); 
	m_hms_treatment_recordTbl.AddField(_T("htr_recordno"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_idx"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_status"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254); 
	m_hms_treatment_recordTbl.AddField(_T("htr_sumtreat"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_outpatient"), dfText, 1);

	if(pMF->GetProp(_T("hms_use_130"))== _T("Y"))
	{
		m_wndLoaiKCB.SetCheckValue(true);
	}
}

#include "GuiFont.h"

void CHMSPatientDocument::OnSetWindowEvents(){
    
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndOccupation.SetEvent(WE_CHANGE, _OnOccupationChangeFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_CHECKVALUE, _OnOccupationCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
	//m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCardInfoBtn.SetEvent(WE_CLICK, _OnCardInfoBtnSelectFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	m_wndICD.SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_SELCHANGE, _OnICDSelectChangeFnc);
	m_wndICD.SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
	//m_wndICD.SetEvent(WE_ADDNEW, _OnICDAddNewFnc);
	//m_wndBedUsage.SetEvent(WE_CLICK, _OnPatientCareEMSelectFnc);
	
	

	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndConclusionLabel.SetEvent(WE_CLICK, _OnConclusionLabelSelectFnc);
	m_wndExaminationTab.SetEvent(WE_SELCHANGE, _OnExaminationTabSelectChangeFnc);
	m_wndSuggestion.SetEvent(WE_SELENDOK, _OnSuggestionSelendokFnc);

	
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_SELCHANGE, _OnSuggestionSelectChangeFnc);
	m_wndSuggestion.SetEvent(WE_LOADDATA, _OnSuggestionLoadDataFnc);
	//m_wndSuggestion.SetEvent(WE_ADDNEW, _OnSuggestionAddNewFnc);
	m_wndInDept.SetEvent(WE_SELENDOK, _OnInDeptSelendokFnc);
	//m_wndInDept.SetEvent(WE_SETFOCUS, _OnInDeptSetfocusFnc);
	//m_wndInDept.SetEvent(WE_KILLFOCUS, _OnInDeptKillfocusFnc);
	m_wndInDept.SetEvent(WE_SELCHANGE, _OnInDeptSelectChangeFnc);
	m_wndInDept.SetEvent(WE_LOADDATA, _OnInDeptLoadDataFnc);
	//m_wndInDept.SetEvent(WE_ADDNEW, _OnInDeptAddNewFnc);
	m_wndBedUsage.SetEvent(WE_CLICK, _OnBedUsageSelectFnc);
	m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);
	m_wndExamList.SetEvent(WE_SELCHANGE, _OnExamListSelectChangeFnc);
	m_wndExamList.SetEvent(WE_LOADDATA, _OnExamListLoadDataFnc);
	m_wndExamList.SetEvent(WE_DBLCLICK, _OnExamListDblClickFnc);
	

	m_wndAntibioticUse.SetEvent(WE_CLICK, _OnAntibioticUseSelectFnc);

	//m_wndHenkhamlai.SetEvent(WE_CLICK, _OnHenKhamLaiSelectFnc);

	m_wndLoaiKCB.SetEvent(WE_KILLFOCUS, _OnLoaiKCBKillfocusFnc);
	m_wndLoaiKCB.SetEvent(WE_SELCHANGE, _OnLoaiKCBSelectChangeFnc);
	m_wndLoaiKCB.SetEvent(WE_LOADDATA, _OnLoaiKCBLoadDataFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("15")) && !pMF->CheckPermission(_T("16")))
	{
		m_wndExamList.SetWindowText(_T("Examination Receipt"));
		m_wndExamList.AddEvent(1, _T("Create Examination Receipt"), _OnExamListCreateExaminationReceiptFnc);
		m_wndExamList.AddEvent(0, _T("-"), NULL);
		m_wndExamList.AddEvent(2, _T("Move Examination Receipt"), _OnExamListMoveExaminationReceiptFnc);
		m_wndExamList.AddEvent(0, _T("-"), NULL);
		m_wndExamList.AddEvent(3, _T("Delete"), _OnExamListDeleteItemFnc);

		

		if(!pMF->m_bPrintSummarize)
		{
			AddEvent(1, _T("Terminate Document"), _OnTerminateHMSPatientDocumentFnc);

			if(pMF->CheckPermission(_T("01.02"))){
				AddEvent(0, _T("-"), NULL);
				AddEvent(2, _T("Rollback Document"), _OnRollbackHMSPatientDocumentFnc);
			}	

			/*if(pMF->CheckPermission(_T("01.04")))
			{
				AddEvent(0, _T("-"), NULL);
				AddEvent(3, _T("Enter Accident"), _OnEnterAccidentHMSPatientDocumentFnc);
			}*/
			AddEvent(0, _T("-"), NULL);
		}
	}
	else
	{
		if(pMF->m_bPrintSummarize)
		{
			m_wndDocumentNo.SetReadOnly(FALSE);
			m_wndPrintSummarize.SetEvent(WE_CLICK, _OnPrintSummarizeExaminationSheetFnc);
			m_wndPrintPrescrition.SetEvent(WE_CLICK, _OnPaymentAndPrintPrescritionFnc);
			m_wndCancelReceipt.SetEvent(WE_CLICK, _OnCancelReceiptFnc);
			m_wndParaclinical.SetEvent(WE_CLICK, _OnParaclinicalFnc);
		}
	}
	AddEvent(4, _T("Print Summarize Examination Sheet"), _OnPrintSummarizeExaminationSheetFnc);
	AddEvent(0, _T("-"), NULL);
	AddEvent(5, _T("Create Emergency Receipt"), _OnPrintEmergencyReceiptFnc);
	AddEvent(0, _T("-"), NULL);

	{	
	AddEvent(25, _T("Tạo phiếu chuyển viện"), _OnCreateHospitalTransferFnc);
	}

	AddEvent(0, _T("-"), NULL);
	AddEvent(6, _T("Print Laser Receipt List"), _OnPrintLaserReceiptListFnc);
	if(pMF->m_szDept == _T("C1.2") && pMF->CheckPermission(_T("17.10")))
	{
		AddEvent(0, _T("-"), NULL);
		AddEvent(7, _T("Security Patient Profile"), _OnSecurityPatientProfileFnc);
	}


	AddEvent(10, _T("Appointment receipt"), _OnAppointmentReceiptFnc);

	//if(pMF->CheckPermission(_T("01.04")))
	{
		AddEvent(0, _T("-"), NULL);
		AddEvent(11, _T("Enter Accident"), _OnEnterAccidentHMSPatientDocumentFnc);
	}
	if (pMF->CheckPermission(_T("17.11")))
	{
		AddEvent(0, _T("-"), NULL);
		AddEvent(12, _T("Thu dung điều trị ngoại trú"), _OnThudungdtngtFnc);
		AddEvent(0, _T("-"), NULL);
		AddEvent(18, _T("In phiếu điều trị khoa răng"), _OnPhieuDieuTriKhoaRangFnc);
	}
	if (pMF->m_UserInfo.su_deptid == _T("C6")){
		AddEvent(0, _T("-"), NULL);
		AddEvent(13, _T("Print Rehabilitation Certify"), _OnPrintRehabilitationCertifyFnc);
	}

	AddEvent(0, _T("-"), NULL);
	AddEvent(14, _T("In phiếu vào viện"), _OnPrintAdmissionSheetFnc);
	AddEvent(0, _T("-"), NULL);
	AddEvent(15, _T("Bệnh án ngoại trú"), _OnBenhAnFnc);

	AddEvent(19, _T("Cấp giấy chứng nhận nghỉ việc BHXH"), _OnGiaychungnhannghiviecFnc);

	if(pMF->m_szDept == _T("TYC"))
	{
		AddEvent(0, _T("-"), NULL);
		AddEvent(16, _T("Tư vấn phẫu thuật TYC"), _OnSurgeryReqFnc);


		AddEvent(0, _T("-"), NULL);
		AddEvent(18, _T("Cập nhật chế độ điều trị"), _OnUpdateTreatModeFnc);

	}
    
    if (pMF->m_szDept == _T("TYC") || pMF->m_UserInfo.su_deptid == _T("C6") ||
        pMF->CheckPermission(_T("EM.100.101")))
	{
		AddEvent(0, _T("-"), NULL);
		AddEvent(17, _T("Bệnh án điều trị ngoại trú (C6/C1.2)"), _OnBenhAnNoitruFnc);	
		AddEvent(0, _T("-"), NULL);
		AddEvent(23, _T("Phiếu điều trị ngoại trú"), _OnExamTrackingFnc);	

	}
	AddEvent(0, _T("-"), NULL);
	AddEvent(21, _T("Mẫu biểu chuyên môn"), _OnCreateSpecificFormFnc);

	AddEvent(0, _T("-"), NULL);
	AddEvent(22, _T("Phiếu chăm sóc bệnh nhân"), _OnPatientCareEMSelectFnc);

	if(pMF->CheckPermission(_T("EM.100.03")))
	{
	AddEvent(0, _T("-"));
	AddEvent(23, _T("Kết thúc hồ sơ lưu trú - cách ly"), _OnTerminateDocumentInformationFnc);
	}
	
	{
	AddEvent(0, _T("-"));
	AddEvent(24, _T("Tìm kiếm lịch sử khám chữa bệnh"), _OnSearchDocumentInformationFnc);
	}	

	CGuiFont font;
	font.SetFaceName(_T("Tahoma"));
	font.SetHeight(20);
	font.SetBold(true);
	m_wndDocumentNo.SetFont(&font);

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+1, true);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+1, true);
	//SetWindowFont(&m_wndPhone, GetFaceName(), GetFaceSize()-2, true);
	m_wndPatientName.SetTextColor(RGB( 0, 0, 255));
	m_wndExaminationTab.SetCurSel(1);
	m_wndExaminationReceipts.SetCurSel(0);
    
	m_wndExaminationReceipts.SetEvent(WE_SELCHANGE, _OnExaminationReceiptsSelectChangeFnc);
	
	CRect rect;
	GetDesktopWindow()->GetWindowRect(&rect);
	if (rect.Height() <= 768)
	{
		ResizeControl(this, &m_wndConclusion, 25);
		m_wndExamList.EnableHeader(FALSE);;
		m_wndExamList.SetItemHeight(30);
		m_wndExamList.SetColumnWidth(0, 100);
		m_wndHistoryList.EnableHeader(FALSE);;
		m_wndHistoryList.SetItemHeight(30);
		m_wndDiseaseHistory.EnableHeader(FALSE);;
		m_wndDiseaseHistory.SetItemHeight(30);
		m_wndExaminationReceipts.SetPadding(CSize(8, 2));
		m_wndExaminationReceipts.SetCurSel(0);

	}
	m_wndTreatmentInformation.GetWindowRect(&rect);
	rect.right -= 10;
	rect.left = rect.right - 120;
	rect.top += 1;
	rect.bottom = rect.top + 20;
	ScreenToClient(&rect);
	m_wndAntibioticUse.MoveWindow(rect);

	SetMode(VM_NONE);
	
}
void CHMSPatientDocument::OnDoDataExchange(CDataExchange* pDX){
    
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	//DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	//DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestionKey);
	DDX_TextEx(pDX, m_wndInDept.GetDlgCtrlID(), m_szInDeptKey);
	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospitalKey);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndLoaiKCB.GetDlgCtrlID(), m_szLoaiKCBKey);
}
void CHMSPatientDocument::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CString szWhere;

	CRecord rs(&pMF->m_db);
	SetDefaultValues();
	m_nPatientNo = pMF->m_nPatientNo;
	m_nDocumentNo = pMF->m_nDocumentNo;

	if(m_nDocumentNo <= 0)
	{
		pMF->m_nDocumentNo = 0;
		pMF->m_nPatientNo =0;
		SetMode(VM_NONE);
		return;
	}
	
	szSQL.Format(_T(" SELECT 	hp_patientno as patientno,") \
				_T(" 	GET_PATIENTNAME(hd_docno) as pname,") \
				_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T(" 	GET_SYSSEL_DESC('sys_sex', hp_sex) as sex,") \
				_T(" 	GET_SYSSEL_DESC('sys_occupation', cast(hp_occupation as varchar(15))) as occupation,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T(" 	hd_object as objectid,") \
				_T(" 	hd_cardno as cardno,") \
				_T(" 	hd_cardidx as cardidx,") \
				_T("	hd_rank as rank, get_selection_desc('hms_rank', hd_rank) as rankname, ") \
				_T(" 	hd_admitdate as admitdate,") \
				_T(" 	hd_admitdept as admitdept,") \
				_T(" 	hd_status as status,") \
				_T("	hd_createdby as createdby, ") \
				_T("	hd_doctor as doctor, ") \
				_T(" 	GET_SYSSEL_DESC('hms_doc_status', hd_status) as statusdesc,") \
				_T(" 	hd_conclusion as conclusion,") \
				_T(" 	hd_suggestion as suggestion,") \
				_T(" 	hd_indept as todeptid,") \
				_T(" 	GET_SYSSEL_DESC('hms_suggestion', hd_suggestion) as suggestiondesc,") \
				_T(" 	hd_icd as icd10,") \
				_T("	hd_tohosid as tohosid, ") \
				_T("	hd_telephone as telephone, ") \
				_T(" 	hd_enddate as enddate, ") \
				_T(" 	hd_admitstate as patientstatus, hd_emergency, hd_insline, hd_healthexam, ") \
				_T("    hd_isreq, hd_istransplant, hd_infertility, hd_outpatient, hd_recordno,  ") \
				_T(" 	hd_result as result, ") \
				_T(" 	hd_ma_loai_kcb ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" WHERE hd_docno=%ld ") , pMF->m_nDocumentNo);
_fmsg(_T("%s"), szSQL);	

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{		
		return;
	}

	CString szEmergency, szInsLine;

	rs.GetValue(_T("hd_emergency"), szEmergency);
	rs.GetValue(_T("hd_insline"), szInsLine);
	rs.GetValue(_T("hd_healthexam"), pMF->m_szHealthExam);
	pMF->m_szOutLine = szInsLine;
	pMF->m_szEmergency = szEmergency;

	pMF->m_bIsReq = false;
	rs.GetValue(_T("hd_isreq"), tmpStr);
	
	if(tmpStr == _T("Y"))
	{
		pMF->m_bIsReq = true;
	}

	if(pMF->m_bPrintSummarize){
		if(pMF->CheckPermission(_T("15"))){
			

			CRecord rs2(&pMF->m_db);
			rs.GetValue(_T("objectid"), tmpStr);
			szSQL.Format(_T("SELECT ho_type FROM hms_object WHERE ho_id='%s' "), tmpStr);
			rs2.ExecSQL(szSQL);
			if(rs2.IsEOF())
				return;
			rs2.GetValue(_T("ho_type"), tmpStr);

			

			if(pMF->m_szInsuranceMethod2015 == _T("Y"))
			{
				if(pMF->IsOutLine())
				{
					tmpStr = _T("S");

				}
			}

			
			if(tmpStr != _T("S") || rs.GetValue(_T("Status")) != _T("T"))
			{
				m_wndPrescription.m_wndOrderList.DeleteAllItems();
				m_wndPrescription.m_wndDrugInfoList.DeleteAllItems();
				SetMode(VM_NONE);
				return;
			}
		} 
		else if(pMF->CheckPermission(_T("16")))
		{
			CRecord rs2(&pMF->m_db);
			rs.GetValue(_T("objectid"), tmpStr);
			szSQL.Format(_T("SELECT ho_type FROM hms_object WHERE ho_id='%s' "), tmpStr);
			rs2.ExecSQL(szSQL);
			if(rs2.IsEOF())
				return;
			rs2.GetValue(_T("ho_type"), tmpStr);
			if(tmpStr != _T("D") || rs.GetValue(_T("Status")) != _T("T"))
			{
				m_wndPrescription.m_wndOrderList.DeleteAllItems();
				m_wndPrescription.m_wndDrugInfoList.DeleteAllItems();
				SetMode(VM_NONE);
				return;
			}
		}
		CString szLabel, szStatus;
		szStatus = m_wndPrescription.m_szStatus;
		if(szStatus == _T("O")){
			TranslateString(_T("Confirm"), szLabel);		
		}
		else
		{
			TranslateString(_T("Disconfirm"), szLabel);
		}
		m_wndCancelReceipt.SetWindowText(szLabel);
	}

	CString szDept;
	rs.GetValue(_T("hd_admitdept"), szDept);
	if(szDept != pMF->m_szDept)
	{
		CRecord rse(&pMF->m_db);
		szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE he_docno=%ld and he_deptid='%s' "), m_nDocumentNo, pMF->m_szDept);
		rse.ExecSQL(szSQL);

		if(rse.GetIntValue() <= 0)
		{
			m_nDocumentNo = 0;
			pMF->m_nDocumentNo = 0;
			ShowMessageBox(_T("Không tồn tại phiếu khám tại khoa"));
			return;
		}
	}

	CString szIsTransplant;

	rs.GetValue(_T("patientno"), m_nPatientNo); 
	pMF->m_nPatientNo = m_nPatientNo;
	rs.GetValue(_T("pname"), tmpStr);
	m_szStdPatientName = tmpStr;

	rs.GetValue(_T("hd_istransplant"), szIsTransplant);
	if(szIsTransplant == _T("Y"))
	{
		tmpStr.AppendFormat(_T(" (Ghép tạng)"));

	}

	StringUpper(tmpStr, m_szPatientName);
	rs.GetValue(_T("birthdate"), m_szBirthDate);
	if (pMF->GetCurrentDepartmentID() == _T("TTHTSS"))
	{
	rs.GetValue(_T("yearofbirth"), m_szAge); 	 
	}
	else
	{
	rs.GetValue(_T("age"), m_szAge);
	}
	
	rs.GetValue(_T("sex"), m_szSex); 
	rs.GetValue(_T("occupation"), m_szOccupation); 
	rs.GetValue(_T("workplace"), m_szWorkplace); 
	rs.GetValue(_T("detailaddress"), m_szDetailAddress);
	m_szAddress  = m_szDetailAddress;
	if(!m_szAddress.IsEmpty())
		m_szAddress += _T(" - ");
	rs.GetValue(_T("address"), tmpStr);
	m_szAddress += tmpStr;
	rs.GetValue(_T("objectid"), tmpStr); 
	pMF->m_szObject = tmpStr;

	m_szObject = pMF->GetObjectString(tmpStr);

	CRecord rs2(&pMF->m_db);
	szSQL.Format(_T("SELECT ho_type FROM hms_object WHERE ho_id='%s' "), tmpStr);
	rs2.ExecSQL(szSQL);
	pMF->m_szObjectType = _T("S");
	if(!rs2.IsEOF())
	{
		rs2.GetValue(_T("ho_type"), pMF->m_szObjectType);
	}



	rs.GetValue(_T("cardno"), m_szCardNo); 
	rs.GetValue(_T("admitdate"), m_szExamDate); 
	rs.GetValue(_T("hd_admitdept"), m_szAdmissionDept);
	rs.GetValue(_T("status"), m_szDocStatus);
	pMF->m_szStatus = m_szDocStatus;
	rs.GetValue(_T("statusdesc"), m_szStatus);
	rs.GetValue(_T("doctor"), tmpStr);
	m_szDoctor = pMF->GetDoctorName(tmpStr);
	rs.GetValue(_T("createdby"), m_szCreatedBy);
	rs.GetValue(_T("conclusion"), m_szConclusion);
	rs.GetValue(_T("suggestion"), m_szSuggestionKey);
	rs.GetValue(_T("suggestiondesc"), m_szSuggestion);
	rs.GetValue(_T("telephone"), m_szPhone);

	rs.GetValue(_T("hd_ma_loai_kcb"), m_szLoaiKCBKey);

	m_szSuggestion = pMF->GetSelectionString(_T("hms_suggestion"), m_szSuggestionKey);
	
	rs.GetValue(_T("patientstatus"), m_szAccident);

	if(!tmpStr.IsEmpty() && m_szSuggestionKey == _T("A"))
	{
		m_szSuggestion.AppendFormat(_T(" [%s]"), tmpStr);
		tmpStr.Empty();
	}
	
	rs.GetValue(_T("icd10"), m_szICDKey);
	pMF->m_szICD10 = m_szICDKey;
	m_szDiagnostic = pMF->GetDiagnostic(m_szICDKey);
	pMF->m_szDiagnostic = m_szDiagnostic;
	rs.GetValue(_T("enddate"), m_szFinishedDate);
	rs.GetValue(_T("tohosid"), m_szHospitalKey);
	rs.GetValue(_T("todeptid"), m_szInDeptKey);


	int rank;
	rs.GetValue(_T("rank"), rank);
	if(rank >= 15 && rank <= 23 && rank != 19)
	{
			tmpStr.Format(_T("Bệnh nhân cấp [%s]"), rs.GetValue(_T("rankname")));
			ShowMessageBox(tmpStr, MB_ICONINFORMATION);
	}

	if(!m_szCardNo.IsEmpty() )
		{
			int priority = (int)m_szCardNo[2];
			if(priority == 1 || priority == 2 && priority == 3)
			{
				ShowMessageBox(_T("Bệnh nhân là đối tượng thẻ ưu tiên"));
			}
		}

	rs.GetValue(_T("hd_infertility"), tmpStr);
	if(tmpStr == _T("Y"))
	{
		ShowMessageBox(_T("Bệnh nhân có bệnh án hiếm muộn"));
	}

	
	m_wndOutpatientDesc.SetWindowText(_T(""));

	CString szOutPatient;
	rs.GetValue(_T("hd_outpatient"), szOutPatient);
	pMF->m_szOutpatient = szOutPatient;
	if(szOutPatient == _T("Y"))
	{
		CString szRecordNo;
		rs.GetValue(_T("hd_recordno"), szRecordNo);
		pMF->m_szRecordNo = szRecordNo;
		CString tmpStr;
		tmpStr.Format(_T("Điều trị ngoại trú [%s]"), szRecordNo);
		m_wndOutpatientDesc.SetWindowText(tmpStr);
		ShowMessageBox(tmpStr);
	}
	SetMode(VM_VIEW);


	m_wndExaminationTab.SetCurSel(1);
	m_wndExaminationReceipts.SetCurSel(0);

	OnExamListLoadData();
	if(pMF->m_bPrintSummarize)
	{
		m_wndPrescription.RefreshData();		
	}
	else
	{
		m_wndParaclinicalOrder.SetMode(VM_NONE);
		m_wndOperationOrder.SetMode(VM_NONE);
	}

	pMF->m_bExam = FALSE;
	if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
	{
		m_wndExamineV2.m_wndUpdate.SetFocus();
	}
	else
	{
		m_wndExamine.m_wndUpdate.SetFocus();
	}

	//OnHistoryListLoadData();
	//OnDiseaseHistoryLoadData();
	

	m_wndExaminationReceipts.SetActiveTab(0);
    m_wndExaminationReceipts.Invalidate();
    
	//Set active vao tab kham benh
	m_wndExaminationTab.SetCurSel(1);
	m_wndExaminationTab.Invalidate();   
	//m_wndOverview.RefreshData();

	
	
	for (int i =0; i < m_arEvent.GetCount(); i++)
	{
			WEVENT event = m_arEvent[i];
			if(event.nID == 20)
			{
				m_arEvent.RemoveAt(i);
				break;
			}
	}

	if(!pMF->CheckPermission(_T("17.10")))
	{
		if(m_nPatientNo > 0)
		{
			CString szSQL;
			szSQL.Format(_T("SELECT count(*) FROM hms_patient_secure WHERE hps_patientno=%ld and hps_userid='%s' "), m_nPatientNo, pMF->GetCurrentUser());
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				AddEvent(20, _T("View patient profile encrypted"), _OnViewSecurePatientProfileFnc);
			}

		}
	}
	
	if(m_szSuggestionKey == _T("D"))
	{
		SetMenuState(14, TRUE);
	}
	else
		SetMenuState(14, FALSE);
	//if (m_szSuggestionKey.IsEmpty())
	//	SetMenuState(17, TRUE);
	//else
	//	SetMenuState(17, FALSE);

}
void CHMSPatientDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(pMF->GetCurrentUser().MakeLower() == _T("admin"))
	//	pMF->m_szDoctor = m_wndExamine.m_szDoctorKey;
	if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
	{
		m_hms_docTbl.SetValue(_T("hd_doctor"), m_wndExamineV2.m_szDoctorKey);
	}
	else
	{
		m_hms_docTbl.SetValue(_T("hd_doctor"), m_wndExamine.m_szDoctorKey);
	}
	m_hms_docTbl.SetValue(_T("hd_status"), _T("T"));
	m_hms_docTbl.SetValue(_T("hd_conclusion"), m_szConclusion);
	m_hms_docTbl.SetValue(_T("hd_icd"), m_szICDKey);
	m_hms_docTbl.SetValue(_T("hd_diagnostic"), m_wndICD.GetCurrent(1));
	m_hms_docTbl.SetValue(_T("hd_reldisease"), m_szRelationDisease);
	m_hms_docTbl.SetValue(_T("hd_suggestion"), m_szSuggestionKey);
	m_hms_docTbl.SetValue(_T("hd_enddept"), pMF->m_szDept);
	m_hms_docTbl.SetValue(_T("hd_enddate"),m_szEndDate);
	//m_hms_docTbl.SetValue(_T("hd_enddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_indept"), m_szInDeptKey);
	//m_hms_docTbl.SetValue(_T("hd_tohosid"), m_bOutPatient?_T("Y"):_T("N"));
	m_hms_docTbl.SetValue(_T("hd_areceptidx"), m_nReceptIdx);	
	m_hms_docTbl.SetValue(_T("hd_tohosid"), m_szHospitalKey);
	m_hms_docTbl.SetValue(_T("hd_ma_loai_kcb"), m_szLoaiKCBKey);
}
void CHMSPatientDocument::SetDefaultValues(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szDetailAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szDoctor.Empty();
	m_szStatus.Empty();
	m_szExamDate.Empty();
	m_szFinishedDate.Empty();
	m_szConclusion.Empty();
	m_szDiagnostic.Empty();
	m_szSuggestion.Empty();
	m_szPhone.Empty();
	m_szHospitalKey.Empty();
	m_szEndDate.Empty();
}
int CHMSPatientDocument::SetMode(int nMode)
{ 
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
 			EnableControls(FALSE);
			/*m_wndICD.EnableWindow(true);;
			m_wndConclusion.EnableWindow(true);*/
			m_wndSuggestion.EnableWindow(true);	
			/*if(!m_szICDKey.IsEmpty())
				m_wndSuggestion.SetFocus();
			else
				m_wndICD.SetFocus();*/
			if(pMF->GetProp(_T("hms_use_130"))== _T("Y"))
			{
				m_wndLoaiKCB.EnableWindow(true);
			}
			
			m_wndSuggestion.SetFocus();
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndDocumentNo.EnableWindow(true);
			m_wndDocumentNo.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
			m_wndDocumentNo.EnableWindow(true);			
 			break; 
 		};
		if(pMF->m_bPrintSummarize){
			m_wndPrintSummarize.EnableWindow(TRUE);
			m_wndPrintPrescrition.EnableWindow(TRUE);
			m_wndCancelReceipt.EnableWindow(TRUE);
			m_wndParaclinical.EnableWindow(TRUE);
		}
	//	m_wndDocumentNo.EnableWindow(TRUE);

 		UpdateData(FALSE); 
		m_wndBedUsage.EnableWindow(TRUE);

 		return nOldMode; 
 	} 
/*void CHMSPatientDocument::OnPatientNoChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNoKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDocument::OnDocumentNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_nDocumentNo=m_nDocumentNo;
	GetDataToScreen();
    m_wndDocumentNo.SetFocus();
	return 1;
} 
/*void CHMSPatientDocument::OnPatientNameChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAgeChange(){
	
} */
/*void CHMSPatientDocument::OnAgeSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAgeKillfocus(){
	
} */
int CHMSPatientDocument::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnSexChange(){
	
} */
/*void CHMSPatientDocument::OnSexSetfocus(){
	
} */
/*void CHMSPatientDocument::OnSexKillfocus(){
	
} */
int CHMSPatientDocument::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnOccupationChange(){
	
} */
/*void CHMSPatientDocument::OnOccupationSetfocus(){
	
} */
/*void CHMSPatientDocument::OnOccupationKillfocus(){
	
} */
int CHMSPatientDocument::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAddressChange(){
	
} */
/*void CHMSPatientDocument::OnAddressSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAddressKillfocus(){
	
} */
int CHMSPatientDocument::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDetailAddressChange(){
	
} */
/*void CHMSPatientDocument::OnDetailAddressSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDetailAddressKillfocus(){
	
} */
int CHMSPatientDocument::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnWorkplaceChange(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceSetfocus(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceKillfocus(){
	
} */
int CHMSPatientDocument::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnObjectChange(){
	
} */
/*void CHMSPatientDocument::OnObjectSetfocus(){
	
} */
/*void CHMSPatientDocument::OnObjectKillfocus(){
	
} */
int CHMSPatientDocument::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnCardNoChange(){
	
} */
/*void CHMSPatientDocument::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnCardNoKillfocus(){
	
} */
int CHMSPatientDocument::OnCardNoCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		MessageBox(_T("Yêu cầu chọn bệnh nhân"), 0, MB_ICONERROR);
		return;
	}

	CHMSCardViewDialog dlg(this, VM_EDIT);
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
	dlg.DoModal();
	
} 
/*void CHMSPatientDocument::OnStatusChange(){
	
} */
/*void CHMSPatientDocument::OnStatusSetfocus(){
	
} */
/*void CHMSPatientDocument::OnStatusKillfocus(){
	
} */
int CHMSPatientDocument::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnExamDateChange(){
	
} */
/*void CHMSPatientDocument::OnExamDateSetfocus(){
	
} */
/*void CHMSPatientDocument::OnExamDateKillfocus(){
	
} */
int CHMSPatientDocument::OnExamDateCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnICDSelendok(){
	 if(!m_szICDKey.IsEmpty() && m_szConclusion.IsEmpty())
		 m_szConclusion = m_wndICD.GetCurrent(1);
}
/*void CHMSPatientDocument::OnICDSetfocus(){
	
} */
/*void CHMSPatientDocument::OnICDKillfocus(){
	
} */
long CHMSPatientDocument::OnICDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndICD, m_szICDKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD.IsSearchKey() && !m_szICDKey.IsEmpty()){
	};
	m_wndICD.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
} 
/*void CHMSPatientDocument::OnICDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMSPatientDocument::OnConclusionChange(){
	
} */

void CHMSPatientDocument::OnConclusionSetfocus(){
	m_wndConclusion.SetSel(-1);	
} 

/*void CHMSPatientDocument::OnConclusionKillfocus(){
	
} */
int CHMSPatientDocument::OnConclusionCheckValue(){
	m_wndICD.SetFocus();
	return 0;
} 
void CHMSPatientDocument::OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnSuggestionSelendok(){
	UpdateData(true);

	m_wndInDept.EnableWindow(false);
	m_wndHospital.EnableWindow(false);

	if(m_szSuggestionKey == _T("C")){
		m_szHospitalKey.Empty();
		m_wndInDept.EnableWindow(true);
		m_wndHospital.EnableWindow(false);
	}
	else 
	if(m_szSuggestionKey == _T("D")){
		m_szHospitalKey.Empty();
		m_wndInDept.EnableWindow(true);
		m_wndHospital.EnableWindow(false);
	}
	else 
	if(m_szSuggestionKey == _T("F")){
		m_szInDeptKey.Empty();
		m_wndInDept.EnableWindow(false);
		m_wndHospital.EnableWindow(true);
	}	
	else
	{
		m_szInDeptKey.Empty();
		m_szHospitalKey.Empty();
	}

	UpdateData(false);
}
/*void CHMSPatientDocument::OnSuggestionSetfocus(){
	
} */
/*void CHMSPatientDocument::OnSuggestionKillfocus(){
	
} */
long CHMSPatientDocument::OnSuggestionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and ss_code not in('M') "));
	return pMF->LoadSelectionList(&m_wndSuggestion, _T("hms_suggestion"), m_szSuggestionKey, szFilter);

	return 0;
} 
int CHMSPatientDocument::OnExaminationTabSelectChange(int nOld, int nNew)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNew < 0)
		return -1;
	
	cout << "Tab: " << nNew << endl;

	if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
	{	
		if (m_wndExamineV2.GetMode() != VM_VIEW)
		{
			ShowMessageBox(_T("Dữ liệu ở tab khám lâm sàng chưa được lưu. Vui lòng lưu dữ liệu trước khi chuyển tab"), MB_ICONERROR | MB_OK);		
			m_wndExamineV2.m_wndSave.SetFocus();
			return -1;
		}
	}
	else
	{
		if (m_wndExamine.GetMode() != VM_VIEW)
		{
			ShowMessageBox(_T("Dữ liệu ở tab khám lâm sàng chưa được lưu. Vui lòng lưu dữ liệu trước khi chuyển tab"), MB_ICONERROR | MB_OK);		
			m_wndExamine.m_wndSave.SetFocus();
			return -1;
		}
	
	}
	

	if(GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
		return -3;
	}
_tprintf(_T("\nm_nReceptIdx:%ld\n"), m_nReceptIdx);

	switch(nNew)
	{
	case 0:
		m_wndOverview.RefreshData();
		break;
	case 1:
		if ((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
		{
			m_wndExamineV2.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex);
		}
		else
			m_wndExamine.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex);
		//m_wndExaminationTab.SetActiveTab(1);
		break;
	case 2:		
		m_wndParaclinicalOrder.RefreshData();
		break;
	case 3:
		m_wndOperationOrder.RefreshData();
		break;
	case 4:
		{			
			if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
			{
			if(m_szConclusion.IsEmpty() && !m_wndExamineV2.m_szConclusion.IsEmpty())
				m_szConclusion=m_wndExamineV2.m_szConclusion;

			if(!m_wndExamineV2.m_szICDDiagnosticKey.IsEmpty() && m_szICDKey.IsEmpty())
				m_szICDKey = m_wndExamineV2.m_szICDDiagnosticKey;
			}
			else
			
			if(m_szConclusion.IsEmpty() && !m_wndExamine.m_szConclusion.IsEmpty())
				m_szConclusion=m_wndExamine.m_szConclusion;

			if(!m_wndExamine.m_szICDDiagnosticKey.IsEmpty() && m_szICDKey.IsEmpty())
				m_szICDKey = m_wndExamine.m_szICDDiagnosticKey;

			m_wndPrescription.RefreshData();
		}
		break;
	case 5:
		m_wndDrugInformation.RefreshData();
		break;

	case 6:
		{

			CString szSQL;
			szSQL.Format(_T("hms_fee_create(%ld, '%s', '%s', 'Y') "), m_nDocumentNo, _T("ETPIOFXJD"), pMF->GetModuleID());
			int ret = str2int(pMF->ExecDML(szSQL));
			m_wndFeeDocument.RefreshData();
		}
		
		break;
	//case 6:
	//	m_wndPatientEMR.RefeshData(pMF->m_nDocumentNo, true);
	//	break;
	}


	m_wndPrescription.HidePopup();
	UpdateData(false);
	return 0;
} 
void CHMSPatientDocument::OnExamListDblClick(){
	
} 
void CHMSPatientDocument::OnExamListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	int nReceptIdx = ToInt(m_wndExamList.GetItemText(nNewItem, 4));
	int nRoomID = ToInt(m_wndExamList.GetItemText(nNewItem, 3));
	pMF->m_nRefIndex = nReceptIdx;

	if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
	{
		if(m_wndExamineV2.GetSafeHwnd())
		m_wndExamineV2.LoadData(pMF->m_nDocumentNo, nReceptIdx, nRoomID);
	}
	else
		if(m_wndExamine.GetSafeHwnd())
		m_wndExamine.LoadData(pMF->m_nDocumentNo, nReceptIdx, nRoomID);

} 

int CHMSPatientDocument::OnExamListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if(!pMF->IsActiveDocument())
		return 0;
	if(!pMF->CheckPermission(_T("01.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	int nSel = m_wndExamList.GetCurSel();
	if(nSel < 0) return 0;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int nReceptIdx = ToInt(m_wndExamList.GetItemText(nSel, 4));
	if (m_wndExamList.GetItemCount() > 1)
	{
		szSQL.Format(_T("DELETE FROM hms_exam WHERE he_docno=%ld AND he_receptidx=%d AND he_hasfee='N' AND he_status='O' "), pMF->m_nDocumentNo, nReceptIdx);
		_fmsg(_T("%s"),szSQL);
		if(pMF->ExecSQL(szSQL))
			m_wndExamList.DeleteItem(nSel);
	}
	
	return 0;
} 
long CHMSPatientDocument::OnExamListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndExamList.BeginLoad(); 
	
	int nCount = 0;
	int nRoomID, nCurrSel=0;
	szSQL.Format(_T("SELECT hrl_id as roomid,  ") \
		_T("hrl_name as roomname,  ") \
		_T("he_deptid as deptid,  ") \
		_T("to_char(he_examdate, 'DD/MM/YYYY') as examdate, ") \
		_T("SYS_SEL_GETNAME('hms_reception_status',he_status) as status, " ) \
		_T("he_receptidx as receptidx, " ) \
		_T("he_feeidx as feeidx, " ) \
		_T("he_status " ) \
		/*_T("  (select count(hd_docno) from hms_doc") \
		_T("   where he_patientno=hd_patientno) as solankham ") \*/
	_T("FROM hms_exam ") \
	_T("LEFT JOIN hms_roomlist ON(hrl_deptid=he_deptid AND hrl_id=he_roomid) " ) \
	_T("LEFT JOIN hms_doc ON (he_docno = hd_docno) " ) \
	_T("WHERE he_docno=%ld ") \
	_T("ORDER BY deptid,receptidx ") , pMF->m_nDocumentNo);
    //_msg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("roomid"), nRoomID);
		m_wndExamList.AddItems(
			rs.GetValue(_T("roomname")), 
			rs.GetValue(_T("examdate")), 
			rs.GetValue(_T("status")), 
			rs.GetValue(_T("roomid")), 
			rs.GetValue(_T("receptidx")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("feeidx")),
			rs.GetValue(_T("he_status")),
			rs.GetValue(_T("solankham")),
			NULL);
		rs.MoveNext();
		if(nRoomID == pMF->GetCurrentRoomID())
		{
			nCurrSel = m_wndExamList.GetItemCount()-1;
		}
	}
	m_wndExamList.EndLoad(); 
	m_wndExamList.SetCurSel(nCurrSel);
	if(nCurrSel < 0)
		return nCurrSel;

	int nReceptIdx = ToInt(m_wndExamList.GetItemText(nCurrSel, 4));
	pMF->m_nRefIndex = nReceptIdx;
	
	if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
	{
		if(m_wndExamineV2.GetSafeHwnd())
		m_wndExamineV2.LoadData(pMF->m_nDocumentNo, nReceptIdx, nRoomID);
	}
	else
	{
		if(m_wndExamine.GetSafeHwnd())
		m_wndExamine.LoadData(pMF->m_nDocumentNo, nReceptIdx, nRoomID);		
	}
	return nCount;
}



void CHMSPatientDocument::OnHistoryListDblClick() {

}
void CHMSPatientDocument::OnHistoryListSelectChange(int nOldItem, int nNewItem)
{

}

int CHMSPatientDocument::OnHistoryListDeleteItem()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (!pMF->IsActiveDocument())
		return 0;

	return 0;
}

long CHMSPatientDocument::OnHistoryListLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndHistoryList.BeginLoad();

	int nCount = 0;
	int nRoomID, nCurrSel = 0;
	szSQL.Format(_T("SELECT hd_docno,  ") \
		_T("hd_admitdate,") \
		_T("hd_diagnostic ") \
		_T("FROM hms_doc ") \
		_T("WHERE hd_patientno=%ld and hd_status='T' ") \
		_T("ORDER BY hd_docno "), m_nPatientNo);
	//_msg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndHistoryList.AddItems(
			rs.GetValue(_T("hd_docno")),
			rs.GetValue(_T("hd_admitdate")),
			rs.GetValue(_T("hd_diagnostic")),
			NULL);
		rs.MoveNext();
	}
	m_wndHistoryList.EndLoad();
	return nCount;
}



void CHMSPatientDocument::OnDiseaseHistoryDblClick() {

}
void CHMSPatientDocument::OnDiseaseHistorySelectChange(int nOldItem, int nNewItem)
{

}

int CHMSPatientDocument::OnDiseaseHistoryDeleteItem()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (!pMF->IsActiveDocument())
		return 0;

	return 0;
}

long CHMSPatientDocument::OnDiseaseHistoryLoadData() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T(" SELECT") \
		_T(" hd_docno as docno,") \
		_T(" hd_admitdate as ngaykham,") \
		_T(" HDH_OWNER as banthan,") \
		_T(" HDH_FAMILY as giadinh,") \
		_T(" HDH_DRUGALLERGY as diungthuoc") \
		_T(" from HMS_DISEASE_HIST") \
		_T(" LEFT JOIN hms_doc ON (hdh_patientno = hd_patientno AND hdh_docno = hd_docno)") \
		_T(" where HDH_PATIENTNO=%ld") \
		_T(" and hdh_docno>0") \
		_T(" order by HDH_DOCNO desc"), pMF->m_nPatientNo);

	m_wndDiseaseHistory.BeginLoad();
	int nCount, nIdx = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndDiseaseHistory.AddItems(
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("ngaykham")),
			rs.GetValue(_T("banthan")),
			rs.GetValue(_T("giadinh")),
			rs.GetValue(_T("diungthuoc")), NULL);
		rs.MoveNext();
	}
	m_wndDiseaseHistory.EndLoad();
	return nCount;
}


int CHMSPatientDocument::OnAddHMSPatientDocument()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 //	if(!pMF->SetStartWork(this,_T("Add HMSPatientDocument"))) 
 //		return -1;
 	SetMode(VM_ADD);
	return 0;
} 

int CHMSPatientDocument::OnExamListCreateExaminationReceipt()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->IsActiveDocument() && pMF->m_UserInfo.su_groupid != _T("A"))
		return 0;

	if(!pMF->CheckPermission(_T("01.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
	int nSel = m_wndExamList.GetCurSel();
	if(nSel <0)
	{
		ShowMessageBox(_T("Bạn Phải chọn 1 phòng khám"), 0);
		return 0;
	}

	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return 0;
	}


	CHMSSpecialExamDialog dlg(this);
	if(nSel >= 0)
	{
		dlg.m_szExamTypeKey = m_wndExamList.GetItemText(nSel, 6);
		dlg.m_nReceptidx= m_nReceptIdx;
	}
	else
	{
		dlg.m_nReceptidx= m_nReceptIdx;
	}
	if(dlg.DoModal() == IDOK)
	{
		OnExamListLoadData();
	}
	return 0;
} 

int CHMSPatientDocument::OnExamListMoveExaminationReceipt(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->IsActiveDocument())
		return 0;
	
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(!pMF->CheckPermission(_T("01.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if (pMF->m_szDept == _T("QLKBUT"))
	{
		szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE he_docno = %ld and he_receptidx = %ld AND he_status NOT IN('O', 'C') "), m_nDocumentNo, m_nReceptIdx);
	}
	else
	{
		szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE he_docno = %ld and  he_status NOT IN('O') "), m_nDocumentNo);
	}
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}
	
	CHMSExaminationMoveDialog dlg(this);	
	if(dlg.DoModal() == IDOK){
		OnExamListLoadData();
	}
	return 0;
} 

int CHMSPatientDocument::OnEditHMSPatientDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 //	if(!pMF->SetStartWork(this,_T("Edit HMSPatientDocument"))) 
 //		return -1; 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSPatientDocument::OnDeleteHMSPatientDocument(){
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
 		OnCancelHMSPatientDocument(); 
 	}
	return 0;
 } 
int CHMSPatientDocument::OnSaveHMSPatientDocument(){
	if(GetMode() != VM_EDIT)
		return -1; 	
	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, szDoctorID;	
	int nCount;
    long nOrderID;

	/*szSQL.Format(_T("select hdri_enddate as enddate from hms_doc_rollback_info  ") \
				_T("	where hdri_docno  = %ld order by hdri_idx desc   "), m_nDocumentNo);
    nCount=rs.ExecSQL(szSQL);
	if(nCount >0)
	{
		CHE_INPUTENDDATE dlg(this);
		dlg.m_szEndDate= rs.GetValue(_T("enddate"));
		if(dlg.DoModal() == IDOK)
		{
			m_szEndDate= dlg.m_szEndDate;
		}
	}
	else
	{*/
		m_szEndDate= pMF->GetSysDateTime();
	//}

	if(!IsValidateData()) 
 		return -1;
	
	m_szInDeptKey.Trim();
	if(m_szSuggestionKey == _T("D") && m_szInDeptKey.IsEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn khoa điều trị"));
		return -1;
	}
	//Hủy toàn bộ phiếu qr bao gồm phiếu dịch vụ & tạm gửi
    
	int vcount = 0;
    szSQL.Format(_T("QR_DELETE_FEE_DEPOSIT(%ld) "), m_nDocumentNo);
    vcount = str2int(pMF->ExecDML(szSQL));
	
	/*if (m_szSuggestionKey == _T("C") || m_szSuggestionKey == _T("D"))       
	{
		int vcount = 0;
		szSQL.Format(_T("QR_UNPAID_FEE(%ld) "), m_nDocumentNo);
		vcount = str2int(pMF->ExecDML(szSQL));
		
		if(vcount >= 1)
		{
			ShowMessageBox(_T("Bệnh nhân còn chi phí tạo QR chưa thanh toán hết, lưu ý nên thanh toán hết hoặc hủy phiếu trước khi vào viện!"), MB_ICONERROR);
			m_wndSuggestion.SetFocus();
			return -1;
		}

	}*/



	
	//Bệnh nhân TYC khi kết thúc hồ sơ vào viện mà còn tiền tạm gửi ở TYC chưa dùng hết thì thông báo

	if (pMF->GetCurrentDepartmentID() == _T("TYC") && (m_szSuggestionKey == _T("C") || m_szSuggestionKey == _T("D")))
	{
		int vcount = 0;
		szSQL.Format(_T("TYC_UNPAID_DEPOSIT(%ld) "), m_nDocumentNo);
		vcount = str2int(pMF->ExecDML(szSQL));
		if(vcount > 1)
		{
			ShowMessageBox(_T("Bệnh nhân còn chi phí tạm gửi ở khoa TYC chưa thanh toán hết, lưu ý nên thanh toán hết trước khi vào viện!"));
		}
	}

	if(m_szSuggestionKey == _T("D") && pMF->m_szOutpatient == _T("Y") && pMF->GetCurrentDepartmentID() != _T("TYC"))
	{
		/*szSQL.Format(_T("select hop_status from hms_outpatient where hop_patientno = %ld and hop_recordno='%s' "),
			pMF->m_nPatientNo, pMF->m_szRecordNo);
		rs.ExecSQL(szSQL);
		CString szStatus = _T("T");
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hop_status"), szStatus);
		}
		if(szStatus != _T("T"))
		{
			ShowMessageBox(_T("Bệnh nhân đang điều trị ngoại trú chưa được kết thúc hồ sơ. Yêu cầu kết thúc hồ sơ trước khi cho vào viện"));
			return -1;
		}*/

		CRecord rso(&pMF->m_db);
		CString szMsg, tmpStr, szRecordType, szStatus, szDept;
		szSQL.Format(_T("SELECT hop_status, hop_record_type, HOP_DEPTID FROM hms_outpatient WHERE hop_patientno=%ld and hop_recordno='%s' "), pMF->m_nPatientNo, pMF->m_szRecordNo);
		rso.ExecSQL(szSQL);
		
		if(!rso.IsEOF())
		{
			rso.GetValue(_T("hop_status"), szStatus);
			rso.GetValue(_T("hop_record_type"), szRecordType);
			rso.GetValue(_T("HOP_DEPTID"), szDept);
			tmpStr = pMF->GetSelectionString(_T("OBA_RECORDTYPE"), szRecordType);			
		}
		if(szStatus != _T("T"))
		{
		szMsg.Format(_T("Bệnh nhân điều trị ngoại trú phòng khám tại khoa (%s) có bệnh án (%s) chưa được kết thúc. Bạn cần kết thúc bệnh án ngoại trú trước khi cho vào viện! "), szDept, tmpStr);
		ShowMessageBox(szMsg);
		return -1;
		}
	}

	nCount=0;
	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
	{
		szSQL.Format(_T("SELECT count(*) FROM hms_pharmaorder WHERE hpo_docno=%ld AND hpo_orderstatus IN('O','S') AND HPO_OBJECT_ID <> 7 "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		nCount = rs.GetIntValue();	
		if (pMF->m_UserInfo.su_hms_xdept != _T("C1.3") )
		{
			if(!m_szInDeptKey.IsEmpty() && nCount > 0)
			{
				ShowMessageBox(_T("Bệnh nhân đã có đơn thuốc không thể cho vào khoa. Phải xóa đơn thuốc"));
				return -1;
			}
		}
	}	
 	
	//Check khi kết thúc hồ sơ bệnh án đối với bệnh nhân bảo hiểm
	if((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")) && (m_szSuggestionKey != _T("D") && m_szSuggestionKey != _T("C")))
	{
		int vcount = 0;
		szSQL.Format(_T("HMS_CHECK_INS_BEFORE_TER(%ld) "), m_nDocumentNo);		
		vcount = str2int(pMF->ExecDML(szSQL));

		if(vcount > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có đề mục cận lâm sàng chưa trả kết quả, không thể kết thúc hồ sơ!"), MB_ICONERROR);
			return -1;
		}
		
	}

 	
	if(!OnCheckTerminateDocument(m_nDocumentNo)) 
		return -1;
	CHMSHelper helper;
	if (helper.CheckMaLoaiKCB(m_szSuggestionKey, m_szLoaiKCBKey) < 0)
	{
		return false;
	}
	//Duyệt toàn bộ đơn trạng thái O -> S
    /*
	int ret2 = ShowMessageBox(_T(" Khi kết thúc hồ sơ các đơn thuốc ngoại trú sẽ tự động được xác nhận? "),MB_YESNO);
    if (ret2 == IDYES)
    {
        szSQL.Format(
            _T(" SELECT hpo_orderid as hpo_orderid,") 
			_T(" hpo_doctor as doctor")
            _T(" FROM hms_pharmaorder ")
            _T(" WHERE 1=1 AND hpo_docno = %ld and hpo_orderstatus = 'O'"), m_nDocumentNo);

        rs.ExecSQL(szSQL);
        //_msg(_T("1. %s"),szSQL);
        while (!rs.IsEOF())
        {
            rs.GetValue(_T("hpo_orderid"), nOrderID);
			rs.GetValue(_T("doctor"), szDoctorID);
            szSQL.Format(_T("HMS_PHARMAORDER_SEND(%ld, '%s', '%s') "), nOrderID, pMF->GetCurrentUser(), szDoctorID);
			// _msg(_T("2. %s"),szSQL);
            pMF->ExecDML(szSQL);           
            rs.MoveNext();
        }
    }
	*/
 	
 	CString szWhere; 
	szWhere.Format(_T(" WHERE hd_docno=%ld "), pMF->m_nDocumentNo); 
 	szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno")); 
 	szSQL += szWhere; 
 	
	//_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 	
		
		//Test laị 1 chút chỗ này xem OK không?
		if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
		{
			if(m_wndExamineV2.m_szConclusion.IsEmpty())
				szSQL.Format(_T("UPDATE hms_exam SET he_status='T', he_diagnostic='%s', he_icd10='%s' WHERE he_docno=%ld AND he_receptidx=%d"), m_szConclusion, m_szICDKey,  pMF->m_nDocumentNo, pMF->m_nRefIndex);
			else
				szSQL.Format(_T("UPDATE hms_exam SET he_status='T' WHERE he_docno=%ld AND he_receptidx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		}
		else
		{
			if(m_wndExamine.m_szConclusion.IsEmpty())
				szSQL.Format(_T("UPDATE hms_exam SET he_status='T', he_diagnostic='%s', he_icd10='%s' WHERE he_docno=%ld AND he_receptidx=%d"), m_szConclusion, m_szICDKey,  pMF->m_nDocumentNo, pMF->m_nRefIndex);
			else
				szSQL.Format(_T("UPDATE hms_exam SET he_status='T' WHERE he_docno=%ld AND he_receptidx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		}
		pMF->ExecSQL(szSQL);		
		if(m_szSuggestionKey == _T("D") || m_szSuggestionKey == _T("C")) // Ket luan vao vien
		{			
			
		/*	szSQL.Format(_T("UPDATE hms_doc SET hd_suggestion='D' WHERE hd_docno=%ld"), pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);*/

			szSQL.Format(_T("DELETE FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);		
			
//			szSQL.Format(_T("DELETE FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
//			pMF->ExecSQL(szSQL);		

			szSQL.Format(_T("HMS_DOC_CREATE_ADMISSION('%s', %ld, %ld, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s','%s') "),
				pMF->GetCurrentUser(), m_nPatientNo, m_nDocumentNo, m_szInDeptKey, pMF->GetSysDateTime(), m_szICDKey, m_szDiagnostic);
			int ret = str2int(pMF->ExecDML(szSQL));
			if(ret == 0)
			{
				ShowMessageBox(_T("Không tạo được hồ sơ vào viện"));
			}
			SetMode(VM_VIEW);

		}
		else if(m_szSuggestionKey == _T("F")) // Benh nhan chuyen vien
		{ 
			CHMSHospitalTransfer dlg(this);
			dlg.DoModal();			
		}
		else if (m_szSuggestionKey == _T("X") || m_szSuggestionKey == _T("Y"))
		{
			CHMSPatientDeathDialog dlg(this);
			dlg.DoModal();
		}
		else
		{ 
			szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("DELETE FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status='A' "), pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);
			
			szSQL.Format(_T("DELETE FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);
//			szSQL.Format(_T("DELETE FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
//			pMF->ExecSQL(szSQL);
	//		szSQL.Format(_T("UPDATE hms_doc SET hd_outpatient='N' WHERE hd_docno=%ld"), pMF->m_nDocumentNo);
	///		pMF->ExecSQL(szSQL);

			if(m_szSuggestionKey == _T("J"))
			{
				CHMSAppointmentClinicalDialog dlg(this);
				if(dlg.DoModal() == IDOK)
				{

				}

			}
			
		}

		m_szDocStatus = _T("T");
		m_szStatus = pMF->GetSelectionString(_T("hms_doc_status"), _T("T"));
 	} 
 	else 
 	{ 
	//	pMF->Rollback();
 	}

	if(m_szSuggestionKey != _T("C") && m_szSuggestionKey != _T("D"))
	{
		pMF->OnPrintExaminationSheet(m_nDocumentNo, true, true, false, false);
	}

	SetMode(VM_VIEW);
 	return ret; 
 	
}
int CHMSPatientDocument::OnCancelHMSPatientDocument()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	//pMF->FinishWork(this); 
 	return 0;
} 


int CHMSPatientDocument::OnRollbackHMSPatientDocument()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	if(m_nDocumentNo <= 0)
		return 0;	

	if(!pMF->CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	int nRet = ShowMessageBox(_T("Do you want to rollback patient file?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(nRet == IDNO)
		return 0;

	CString szSQL, szDoctor;

	szSQL.Format(_T("SELECT hd_doctor FROM hms_doc WHERE hd_docno=%ld and hd_status = 'T' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	szDoctor = rs.GetStringValue();

	if(szDoctor != pMF->GetCurrentUser() && !pMF->CheckPermission(_T("01.05")))
	{		
		CString tmpStr, szMsg;
		TranslateString(_T("This is document terminate by an [%s]. Can not rollback"), tmpStr);
		szMsg.Format(tmpStr, pMF->GetDoctorName(szDoctor));
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return -1;
	}

	// Update lai trang thai da duyet phi
	if(pMF->CheckPermission(_T("01.06")))
	{
		szSQL.Format(_T("UPDATE hms_doc ") \
			_T("SET HDF_ACCEPTEDFEE='N'") \
			_T("WHERE hd_docno=%ld AND hd_object IN(1)"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
	}

	szSQL.Format(_T("hms_doc_rollback(%ld, '%s')"), m_nDocumentNo, pMF->GetCurrentUser());
	nRet = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if (nRet < 0)
	{
		szSQL.Format(_T("select message from hms_error_message where client_ip = '%s'"), pMF->GetLocalIP());
		rs.ExecSQL(szSQL);

		ShowMessageBox(rs.GetStringValue());
		return nRet;
	}
	/*
	if (nRet == -1)
	{
		ShowMessageBox(_T("Không tìm thấy bệnh nhân"));
		return nRet;
	}
	if (nRet == -2)
	{
		ShowMessageBox(_T("Hồ sơ khám chưa kết thúc. Không khôi phục được"));
	}
	if (nRet == -3)
	{
		ShowMessageBox(_T("Không thể khôi phục hồ sơ khám"));
		return nRet;
	}
	if (nRet == -4)
	{
		ShowMessageBox(_T("Bệnh nhân đã nhập viện điều trị. Không cho phép khôi phục"));
		return nRet;
	}
	if (nRet == -5)
	{
		ShowMessageBox(_T("Bệnh nhân đã nhập viện điều trị. Không cho phép khôi phục"));
		return nRet;
	}
	if (nRet == -6)
	{
		ShowMessageBox(_T("Hồ sơ đã thanh toán. Không cho phép khôi phục"));
		return nRet;
	}
	*/
	
	m_szInDeptKey.Empty();
	m_szSuggestionKey.Empty();
	m_szSuggestion.Empty();
	m_szHospitalKey.Empty();
	UpdateData(false);
	

	return nRet;

	/*szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld and htr_status <>'A' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Bệnh nhân đã được cho vào khoa điều trị. Không cho phép khôi phục lại hồ ớ khám."), 0);
		return 0;
	}
	szSQL.Format(_T("UPDATE hms_doc set hd_status='O', hd_updatedby='%s',hd_suggestion='',hd_outpatient='',hd_indept='' WHERE hd_docno=%ld AND hd_status='T' and trunc_date(hd_enddate) >= sysdate-3 "), pMF->GetCurrentUser(), m_nDocumentNo);
	pMF->ExecSQL(szSQL);
	
	return 0; */
} 

int CHMSPatientDocument::OnHMSPatientDocumentListLoadData()
{
	return 0;
}


void CHMSPatientDocument::LoadData(long nPatientNo, long nDocNo, int nRoomID, int nReceptIdx)
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	m_nRoomID = nRoomID;
	m_nReceptIdx = nReceptIdx;
	m_nPatientNo = nPatientNo;
	pMF->m_nPatientNo = nPatientNo;
	pMF->m_nDocumentNo = nDocNo;
	pMF->m_nRefIndex = nReceptIdx;
	pMF->m_nRoomID = nRoomID;
	pMF->m_nTreatTime = 0;
	m_nDocumentNo = nDocNo;
	
	GetDataToScreen();

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sum(perweek) as perweek, sum(permonth) as permonth FROM (SELECT 	case when TO_CHAR(hd_admitdate, 'W') = TO_CHAR(sysdate, 'W') then 1 else 0 end as perweek, ") \
			_T(" case when TO_CHAR(hd_admitdate, 'MM') = TO_CHAR(sysdate, 'MM') then 1 else 0 end as permonth ") \
			_T(" FROM hms_doc ") \
			_T(" WHERE hd_patientno=%ld and hd_docno <> %ld ) tbl"), m_nPatientNo, m_nDocumentNo);
		//5th
		rs.ExecSQL(szSQL);
	int nExaminePerWeek;
	int nExaminePerMonth;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("perweek"), nExaminePerWeek);
		rs.GetValue(_T("permonth"), nExaminePerMonth);
	}
	CString szStatus;
	szStatus.Empty();
	pMF->m_szNotification.Empty();
	if(nExaminePerMonth > 0)
	{
		szStatus.Format(_T("Số lần khám trong tháng [%d]"), nExaminePerMonth);
		if(nExaminePerWeek > 0)
		{
			szStatus.AppendFormat(_T("; Trong tuần [%d]"), nExaminePerWeek);
		}
		pMF->m_szNotification = szStatus;
	}
	//pMF->SetStatusText(szStatus, 0);
	
	
	
}

void CHMSPatientDocument::CreateOperationTemplates()
{

	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CDbfMap	hms_operationTbl;

	if(pMF->m_szDept != _T("C6"))
	{
		return;
	}
	//if (pMF->IsPatientDischarge())
	if (!pMF->IsActiveDocument())
	{
		CString szVn;
		TranslateString(_T("Patient profile was closed.Can not proceed!"), szVn);
		AfxMessageBox(szVn);
		return;
	}
	hms_operationTbl.SetTableName(_T("hms_operation"));
	hms_operationTbl.AddField(_T("ho_createdby"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_createddate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_updatedby"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_updateddate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_recordno"), dfText, 7);
//	hms_operationTbl.AddField(_T("hfe_group"), dfText, 7); 
	hms_operationTbl.AddField(_T("ho_patientno"), dfLong); 
	hms_operationTbl.AddField(_T("ho_docno"), dfLong); 
	hms_operationTbl.AddField(_T("ho_deptid"), dfText, 7); 
	hms_operationTbl.AddField(_T("ho_roomid"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_bedid"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_refidx"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_orderdate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_doctor"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_itemid"), dfText, 13); 
	hms_operationTbl.AddField(_T("ho_qty"), dfFloat); 
	hms_operationTbl.AddField(_T("ho_inmethod"), dfText, 254); 
	hms_operationTbl.AddField(_T("ho_beforeopera"), dfText, 254); 
	hms_operationTbl.AddField(_T("ho_pdeptid"), dfText, 7); 
	hms_operationTbl.AddField(_T("ho_proomid"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_afteropera"), dfText, 254); 
	hms_operationTbl.AddField(_T("ho_practitioner"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_anesthetist"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_assistant"), dfText, 15); 	
	hms_operationTbl.AddField(_T("ho_performdate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_status"), dfText, 1); 
	hms_operationTbl.AddField(_T("ho_payment"), dfText, 1); 
	hms_operationTbl.AddField(_T("ho_hasfee"), dfText, 1); 
	hms_operationTbl.AddField(_T("ho_diagnostic"), dfText, 254);
	hms_operationTbl.AddField(_T("ho_depttype"), dfText, 1);
	hms_operationTbl.AddField(_T("ho_object"), dfInteger); 

	m_szStatus = _T("S");
	hms_operationTbl.SetValue(_T("ho_createdby"),  pMF->GetCurrentUser()); 
		hms_operationTbl.SetValue(_T("ho_createddate"), pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_updatedby"),  pMF->GetCurrentUser()); 
		hms_operationTbl.SetValue(_T("ho_updateddate"), pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_patientno"), pMF->m_nPatientNo); 
		hms_operationTbl.SetValue(_T("ho_docno"), pMF->m_nDocumentNo); 
		hms_operationTbl.SetValue(_T("ho_orderdate"), pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_doctor"),  pMF->m_szDoctor); 
		hms_operationTbl.SetValue(_T("ho_deptid"),  pMF->m_szDept); 
		hms_operationTbl.SetValue(_T("ho_roomid"), pMF->m_nRoomID); 
		hms_operationTbl.SetValue(_T("ho_bedid"), pMF->m_nBedID); 
		hms_operationTbl.SetValue(_T("ho_refidx"), pMF->m_nRefIndex); 
		hms_operationTbl.SetValue(_T("ho_qty"),  1); 
		hms_operationTbl.SetValue(_T("ho_recordno"), pMF->m_szRecordNo); 
		hms_operationTbl.SetValue(_T("ho_beforeopera"), _T("")); 
		hms_operationTbl.SetValue(_T("ho_pdeptid"),  pMF->m_szDept); 
		hms_operationTbl.SetValue(_T("ho_practitioner"),  _T("")); 
		hms_operationTbl.SetValue(_T("ho_anesthetist"),  _T("")); 
		hms_operationTbl.SetValue(_T("ho_assistant"),  _T("")); 
		hms_operationTbl.SetValue(_T("ho_performdate"),  pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_status"),  m_szStatus); 
		hms_operationTbl.SetValue(_T("ho_payment"),  _T("O")); 
		hms_operationTbl.SetValue(_T("ho_hasfee"),  _T("Y")); 
		hms_operationTbl.SetValue(_T("ho_diagnostic"),  _T("")); 

		if(pMF->GetModuleID() == _T("TM") && !pMF->IsOutPatient())
			hms_operationTbl.SetValue(_T("ho_depttype"),  _T("I")); 
		else
			hms_operationTbl.SetValue(_T("ho_depttype"),  _T("E")); 

		hms_operationTbl.SetValue(_T("ho_object"),  str2int(pMF->m_szObject)); 



	CString szSQL;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("SELECT count(*) FROM hms_operation WHERe ho_docno = %ld and ho_deptid = '%s' and trunc(ho_orderdate) = trunc(sysdate) "),
		m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return;

	szSQL.Format(_T("SELECT distinct ho_itemid as id, hfl_name as name ") \
		_T(" FROM hms_operation ") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid = ho_itemid) ") \
		_T(" WHERE ho_docno = %ld and ho_deptid = '%s' "), m_nDocumentNo,pMF->m_szDept);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL = szSQL;

	while(!rs.IsEOF())
	{
		CHMSSelectionListDialog::SELITEM si;
		rs.GetValue(_T("id"), si.szID);
		rs.GetValue(_T("name"), si.szName);
		dlg.m_arraySelection.Add(si);
		rs.MoveNext();
	}
	if(dlg.DoModal() == IDOK)
	{
		for (int i =0; i < dlg.m_arraySelection.GetCount(); i++)
		{
			CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
			hms_operationTbl.SetValue(_T("ho_itemid"), si.szID);
			szSQL.Format(_T("%s"), hms_operationTbl.GetInsertSQL(_T("ho_idx")));
			pMF->ExecSQL(szSQL);

		}

	}
}

BEGIN_MESSAGE_MAP(CHMSPatientDocument, CGuiView)
	ON_WM_SHOWWINDOW()
	ON_WM_SIZE()
END_MESSAGE_MAP()

void CHMSPatientDocument::OnShowWindow(BOOL bShow, UINT nStatus)
{
	CGuiView::OnShowWindow(bShow, nStatus);

}

#include "HMSSupplementExamineDialog.h"

int CHMSPatientDocument::OnAddNewReception()
{
	CHMSSupplementExamineDialog dlg(this, m_nRoomID);
	dlg.DoModal();
	return 0;
}

#include "HMSAccidentDialog.h"

int CHMSPatientDocument::OnEnterAccidentHMSPatientDocument()
{

	/*if(m_szAccident == _T("A") || m_szAccident == _T("B"))
		return 0;*/

	CHMSAccidentDialog dlg(this);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.DoModal();
	return 0;
}
int CHMSPatientDocument::OnPrintSummarizeExaminationSheet()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	if(m_szDocStatus != _T("T") && !pMF->CheckPermission(_T("01.07")) ){
		ShowMessageBox(_T("Ho so chua ket thuc. Khong the in phieu"), MB_OK|MB_ICONMASK);
		return -1;
	}
	bool bRequest = false;
	if (pMF->m_nRoomID == 99)
	{
		bRequest = true;
	}

	if(pMF->m_bPrintSummarize)
	{
		if(!pMF->CheckPermission(_T("15.1")) && !pMF->CheckPermission(_T("16.1")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}
			
		szSQL.Format(_T("SELECT coalesce(hd_printed,0) FROm hms_doc WHERE hd_docno = %ld"), m_nDocumentNo);
		rs.ExecSQL(szSQL);		
		
		m_nNumberSummarize = rs.GetIntValue();
		if(m_nNumberSummarize > 0){
			tmpStr.Format(_T("Benh nhan da in phieu tong ket [%d] lan. Ban co muon in lai khong?"), m_nNumberSummarize);
			if(ShowMessageBox(tmpStr, MB_YESNO) != IDYES)
				return -1;
		}
		
		pMF->OnPrintExaminationSheet(m_nDocumentNo, false, false, false, bRequest);
		
		UpdateData(false);
	}
	else
		pMF->OnPrintExaminationSheet(m_nDocumentNo, true, true, false, bRequest);	

	return 0;
}

BOOL CHMSPatientDocument::PreTranslateMessage(MSG *pMsg)
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	//Neu chi co quyen in tong ket kham,
	
	if(pMF->m_bPrintSummarize)
	{
		if (pMsg->message == WM_KEYDOWN)
		{
			if(pMsg->wParam == VK_F2){
				OnPrintSummarizeExaminationSheet();
			}
			if(pMsg->wParam == VK_F3){
				OnPaymentAndPrintPrescription();
			}
		}
		return CGuiView::PreTranslateMessage(pMsg);
	}
	if (pMsg->message == WM_KEYDOWN)
	{		
		
		if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
		{
         
			if (m_wndExaminationTab.GetCurSel() == 0)
			{
				if (GetKeyState(VK_CONTROL) < 0)
				{
					if (pMsg->wParam == _T('N'))
					{
						m_wndExamineV2.OnUpdateSelect();
					}
					else if (pMsg->wParam == _T('S'))
					{
						m_wndExamineV2.OnSaveSelect();
					}
					else if (pMsg->wParam == _T('T'))
					{
						m_wndExamineV2.OnCancelSelect();
					}
				}
				if (pMsg->wParam == VK_F5)
				{
					m_wndExamineV2.OnUpdateDiseasePrehistory();
				}
				if (pMsg->wParam == VK_F6)
				{
					m_wndExamineV2.OnTerminateSelect();
				}
				if (pMsg->wParam == VK_F7)
				{
					m_wndExamineV2.OnCertificateofphysicaleyeclinic();
				}
				if (pMsg->wParam == VK_F8)
				{
					if(pMF->m_szHaveLed == _T("Y"))
					{
						m_wndExamineV2.OnCallInSelect();
					}
				}
				if (pMsg->wParam == VK_F9)
				{
					m_wndExamineV2.OnPrehistorySelect();
				} 
			}
		}
		else
		{
			if (m_wndExaminationTab.GetCurSel() == 1)
			{
				if (GetKeyState(VK_CONTROL) < 0)
				{
					if (pMsg->wParam == _T('N'))
					{
						m_wndExamine.OnUpdateSelect();
					}
					else if (pMsg->wParam == _T('S'))
					{
						m_wndExamine.OnSaveSelect();
					}
					else if (pMsg->wParam == _T('T'))
					{
						m_wndExamine.OnCancelSelect();
					}
				}
				if (pMsg->wParam == VK_F5)
				{
					m_wndExamine.OnUpdateDiseasePrehistory();
				}
				if (pMsg->wParam == VK_F6)
				{
					m_wndExamine.OnTerminateSelect();
				}
				if (pMsg->wParam == VK_F7)
				{
					m_wndExamine.OnCertificateofphysicaleyeclinic();
				}
				if (pMsg->wParam == VK_F8)
				{
					if(pMF->m_szHaveLed == _T("Y"))
					{
						m_wndExamine.OnCallInSelect();
					}
				}
				if (pMsg->wParam == VK_F9)
				{
					m_wndExamine.OnPrehistorySelect();
				} 
			}
		
		}
		
		if (GetKeyState(VK_CONTROL) < 0)
		{
			if (pMsg->wParam == _T('B'))
			{				
				OnTerminateDocument();
			}
			else if (pMsg->wParam == _T('S') && GetMode() == VM_EDIT)
			{				
				OnSaveHMSPatientDocument();
			}
			else if (pMsg->wParam == _T('T'))
			{
				SetMode(VM_VIEW);		
				m_wndExaminationTab.ModifyStyle(0, WS_TABSTOP);
			}			
		}
	}
	
	return CGuiView::PreTranslateMessage(pMsg);
}

/*void CHMSPatientDocument::OnSuggestionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientDocument::OnInDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnInDeptSelendok(){
	 
}
/*void CHMSPatientDocument::OnInDeptSetfocus(){
	
}*/
/*void CHMSPatientDocument::OnInDeptKillfocus(){
	
}*/
long CHMSPatientDocument::OnInDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInDept.IsSearchKey() && !m_szInDeptKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szInDeptKey);
	};
	m_wndInDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sd_id, sd_name, (select count(*) from hms_treatment_record where htr_deptid=sd_id and htr_status='I') as ttl_patient  ") \
		_T(" FROM sys_dept ") \
		_T("WHERE sd_type ='DT' and sd_isactive='Y' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInDept.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			rs.GetValue(_T("ttl_patient")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientDocument::OnInDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSPatientDocument::OnBedUsageSelect(){
	CHMSBedUsage dlg(this, m_szInDeptKey);
	dlg.DoModal();
}

void CHMSPatientDocument::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnHospitalSelendok(){
	 
}
/*void CHMSPatientDocument::OnHospitalSetfocus(){
	
}*/
/*void CHMSPatientDocument::OnHospitalKillfocus(){
	
}*/
long CHMSPatientDocument::OnHospitalLoadData()
{
	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospital.IsSearchKey() && !m_szHospitalKey.IsEmpty()){
		szWhere.Format(_T(" and  hh_id ='%s' "), m_szHospitalKey);
	};
	m_wndHospital.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hh_id as id, hh_name||' - '||sp_name as name ") \
		_T(" FROM hms_hospital LEFT JOIN sys_prov ON(sp_id=hh_provid) WHERE length(hh_name) > 0 and hh_id <> '%s' %s ORDER BY hh_id "), pMF->m_CompanyInfo.sc_id, szWhere);
		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospital.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;*/

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadHospitalList(&m_wndHospital, m_szHospitalKey);	

}
/*void CHMSPatientDocument::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientDocument::OnTerminateDocument(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rs3(&pMF->m_db);
	CRecord rs4(&pMF->m_db);
	CString szSQL, szStatus, tmpStr;
	UpdateData(true);	

	if (pMF->IsPaidFees() && pMF->GetObjectType() == _T("I")) 
	{
		ShowMessageBox(_T("Bệnh nhân đã thanh toán phí, không thể kết thúc lại!"), 0);
		return;
	}
	if(!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
	{
		if(m_wndExamineV2.m_szICDDiagnosticKey.IsEmpty())
		{
			ShowMessageBox(_T("Chưa kết luận bệnh, không thể kết thúc hồ sơ bệnh án!"));
			return ;
		}
	}
	else
	{
		if(m_wndExamine.m_szICDDiagnosticKey.IsEmpty())
		{
			ShowMessageBox(_T("Chưa kết luận bệnh, không thể kết thúc hồ sơ bệnh án!"));
			return ;
		}
	}
	//Viết hàm check nếu bệnh nhân khoa TYC, thời gian kết thúc >= 60 ngày thì không cho kết thúc lại
	//hd_enddept = TYC
	//sysdate - hd_enddate >=60 ngày
	if (pMF->GetCurrentDepartmentID() == _T("TYC") && pMF->m_UserInfo.su_groupid != _T("A"))
	{
		szSQL.Format(_T("HMS_COUNT_NUMBER_OF_DATE(%ld) "), m_nDocumentNo);
		int vcount = str2int(pMF->ExecDML(szSQL));
		//_msg(_T("%s"), szSQL);
		if(vcount > 0)
		{
			CString szMsg, tmpStr;
			TranslateString(_T("Bệnh nhân đã kết thúc hồ sơ [%d] ngày (theo quy định thời gian phải nhỏ hơn 60 ngày)!"), tmpStr);
			szMsg.Format(tmpStr, vcount);
			ShowMessageBox(szMsg, MB_OK);
			return;
		}
	}
	
	//Nếu bệnh nhân có phiếu lĩnh máu chưa được C16 duyệt thì không cho kết thúc hồ sơ

	//if (pMF->GetCurrentDepartmentID() == _T("C1.3"))
	//{
		szSQL.Format(_T(" SELECT count(*) from HMS_TESTORDERLINE") \
		_T(" LEFT JOIN hms_testorder ON (hpcl_docno=hpc_docno AND hpcl_orderid=hpc_orderid)") \
		_T(" LEFT JOIN hms_fee_list ON (hpcl_itemid = hfl_feeid)") \
		_T(" where hpcl_docno=%ld ") \
		_T(" and hpc_status <> 'T' AND HPC_DEPTID = 'C1.3'") \
		_T(" and NVL(hfl_bloodfee, 'X')='Y' AND hpc_payment NOT IN ('P', 'C') AND HFE_REFSTATUS NOT IN ('P', 'C')"), pMF->m_nDocumentNo);

		rs.ExecSQL(szSQL);
		if (rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có phiếu lĩnh máu của khoa tiếp huyết chưa được duyệt, không thể kết thúc hồ sơ bệnh án! "), MB_ICONERROR | MB_OK);
			return;	
		}
	
	//}
	
	m_wndExaminationTab.SetCurSel(1);
	m_wndExaminationTab.ModifyStyle(WS_TABSTOP, 0);


	if (pMF->m_UserInfo.su_hms_xdept == _T("C1.1"))
	{
		szSQL.Format(_T("SELECT Count(*) FROM hms_exam ") \
			_T(" WHERE upper(he_deptid)='C1.2' AND he_docno=%ld and he_exammove ='N' and he_status <> 'O' ") \
			_T(" AND he_doctor NOT IN (select su_userid from sys_user where su_hms_xdept = 'C1.1' AND su_isactive='Y') "), pMF->m_nDocumentNo);
		rs3.ExecSQL(szSQL);	
		if (rs3.GetIntValue() > 0)
		{
			szSQL.Format(_T("SELECT Count(*) FROM hms_exam ") \
				_T(" WHERE he_deptid = 'C1.1' AND he_docno=%ld and he_exammove ='Y'"), pMF->m_nDocumentNo);			
			rs4.ExecSQL(szSQL);	
			if (rs4.GetIntValue() > 0)
			{
				ShowMessageBox(_T("This patient is belong to C1.2. Can not terminate document!"), MB_ICONERROR | MB_OK);
				return;		
			}
		}
	}

	if(!OnCheckTerminateDocument(m_nDocumentNo)) return ;	

	OnConclusionLoad(pMF->m_nDocumentNo);
	
	if((pMF->m_szDept == _T("C1.3") && pMF->UserC13ExamTab() == _T("Y")) || pMF->GetCurrentUser() == _T("lttmaivimes"))
	{
		if(!m_wndExamineV2.m_szICDDiagnosticKey.IsEmpty())
		{		
			m_szICDKey = m_wndExamineV2.m_szICDDiagnosticKey;	
		}
		m_szRelationDisease = m_wndExamineV2.m_szRelationDisease;
	}
	else
	{
		if(!m_wndExamine.m_szICDDiagnosticKey.IsEmpty())
		{		
			m_szICDKey = m_wndExamine.m_szICDDiagnosticKey;	
		}
		m_szRelationDisease = m_wndExamine.m_szRelationDisease;
	}

	int nCount=0;
	szSQL.Format(_T("SELECT count(*) " ) \
		_T("FROM hms_pharmaorder ") \
		_T("WHERE hpo_docno=%ld  and NVL(hpo_feetype,'XX')<> 'PT' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 0)	
		m_szSuggestionKey = _T("E");
		
	SetMode(VM_EDIT);
}

void CHMSPatientDocument::OnConclusionLoad(long nDocumentNo){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T(" SELECT hd_status FROM hms_doc WHERE hd_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetStringValue() == _T("T"))
		return;

	szSQL.Format(_T("SELECT he_diagnostic FROM hms_exam WHERE he_docno =%ld AND length(he_icd10) > 0 ORDER BY he_receptidx "), nDocumentNo);
	rs.ExecSQL(szSQL);

	while (!rs.IsEOF()){
		tmpStr.AppendFormat(_T("- %s\r\n"),	rs.GetStringValue());		
		rs.MoveNext();
	}
	m_szConclusion = tmpStr;
	UpdateData(false);
}
void CHMSPatientDocument::OnPaymentAndPrintPrescription(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	if(m_szDocStatus != _T("T")){
		ShowMessageBox(_T("Ho so chua ket thuc. Khong the in phieu"), MB_OK||MB_ICONEXCLAMATION);
		return ;
	}

	if(!pMF->CheckPermission(_T("15.2")) && !pMF->CheckPermission(_T("16.2")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	CString szSQL;
	int nPrinted=0;

	szSQL.Format(_T("HMS_FEE_CREATE(%ld, 'D', '%s') "), m_nDocumentNo, pMF->GetModuleID());
	pMF->ExecDML(szSQL);
	m_wndPrescription.PrintPrescription();
	m_wndPrescription.OnOrderListLoadData();
	m_wndCancelReceipt.EnableWindow(TRUE);
	return;
/*
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	
	bool bPayment = false;

	//Quyen in don thuoc benh nhan dich vu
	if(pMF->CheckPermission(_T("15.2"))){
		long nOrderID;
		nOrderID = m_wndPrescription.m_nOrderID;
		szSQL.Format(_T("SELECT hpo_orderid, hpo_printed, hd_object ") \
			_T("FROM hms_pharmaorder ") \
			_T("LEFT JOIN hms_doc ON(hd_docno = hpo_docno) ") \
			_T("WHERE hpo_docno=%ld ") \
			_T("AND hpo_ordertype='P' and hpo_orderstatus='S'  ") \
			_T("AND hpo_orderid = %ld ") \
			_T("ORDER BY hpo_orderid "), pMF->m_nDocumentNo, nOrderID);
		
	}
	else
	{
		szSQL.Format(_T("SELECT hpo_orderid, hpo_printed, hd_object ") \
			_T("FROM hms_pharmaorder ") \
			_T("LEFT JOIN hms_doc ON(hd_docno = hpo_docno) ") \
			_T("WHERE hpo_docno=%ld AND hpo_deptid='%s' ") \
			_T("AND hpo_ordertype='P' and hpo_orderstatus='S'  ") \
			_T("ORDER BY hpo_orderid "), pMF->m_nDocumentNo, pMF->m_szDept);
	}
	rs.ExecSQL(szSQL);
	
	if(rs.GetRecordCount() <= 0)
	{
		ShowMessageBox(_T("No data"));
		return;
	}

		szSQL.Format(_T("HMS_FEE_CREATE(%ld, 'D', '%s') "), m_nDocumentNo, pMF->GetModuleID());
		pMF->ExecDML(szSQL);

		rs.MoveFirst();
		
		while(!rs.IsEOF())
		{
			long nOrderID;			
			CString szObject;
			rs.GetValue(_T("hpo_orderid"), nOrderID);
			rs.GetValue(_T("hpo_printed"), nPrinted);
			rs.GetValue(_T("hd_object"), szObject);
			nPrinted++;

			//szSQL.Format(_T("UPDATE hms_pharmaorder SET hpo_payment='Y', hpo_orderstatus='P' WHERE hpo_orderid=%ld and hpo_payment<>'Y' and hpo_orderstatus='S' "),
			//	nOrderID);
			//pMF->ExecSQL(szSQL);			

//_msg(_T("%s"), szSQL);
			pMF->PrintPrescription(nOrderID, false, false);			
			
			if(szObject == _T("7"))
				pMF->PrintDrugDelivery(nOrderID, false, false, 1);
			

			rs.MoveNext();
		}
		m_wndPrescription.RefreshData();		
		m_wndCancelReceipt.EnableWindow(TRUE);
		m_nNumberPrescrition = nPrinted;
		*/
	
}
void CHMSPatientDocument::OnSendOrderStatus()
{	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStockType, szMsg,tmpStr, szDoctor, szPayment, szStatus;
	long nOrderID;
	
	int retMsg = ShowMessageBox(_T("Do you want to cancel fee invoice?(Y/N)\r\nAll fee items will be store in to database to lookup."), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg != IDYES)
		return;

	szSQL.Format(_T("SELECT hpo_orderid, hpo_payment, hpo_doctor, hpo_orderstatus ") \
			_T("FROM hms_pharmaorder ") \
			_T("WHERE hpo_docno=%ld ") \
			_T("AND hpo_ordertype='P' and hpo_orderstatus IN('O','S') ") \
			_T("AND hpo_orderid = %ld ") \
			_T("ORDER BY hpo_orderid "), pMF->m_nDocumentNo, pMF->m_nRefIndex);
//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}
	
	rs.GetValue(_T("hpo_orderstatus"), szStatus);
	rs.GetValue(_T("hpo_orderid"), nOrderID);
	rs.GetValue(_T("hpo_doctor"), szDoctor);
	rs.GetValue(_T("hpo_payment"), szPayment);
	szSQL.Format(_T(" hms_pharmaorder_send(%ld, '%s','%s') "), nOrderID, pMF->GetCurrentUser(), szDoctor);
_debug(_T("\r\n%s"), szSQL);
	int res = str2int(pMF->ExecDML(szSQL));
	if(res <= 0)
	{
		ShowMessageBox(_T("Cannot process"));
		return;
	}

	CString szLabel;

	if(szStatus == _T("O")){
		TranslateString(_T("Confirm"), szLabel);
		
	}
	else
	{
		TranslateString(_T("Disconfirm"), szLabel);
	}
	m_wndCancelReceipt.SetWindowText(szLabel);
	m_wndPrescription.OnOrderListLoadData();
}
void CHMSPatientDocument::OnCancelReceipt(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nDocumentNo <= 0)
		return;
	
	if(!pMF->CheckPermission(_T("15.3")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}	
	m_wndCancelReceipt.SetWindowText(m_wndPrescription.m_szStatus);
	m_wndPrescription.OnSendSelect();
}
void CHMSPatientDocument::OnParaclinical(){
	m_wndParaclinicalOrder.OnParaclinicalResultSelect();
}
bool CHMSPatientDocument::OnCheckTerminateDocument(long nDocument){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr;
	if(nDocument <= 0)
		return false;
	

	szSQL.Format(_T("SELECT hcr_status FROM hms_clinical_record WHERE hcr_docno=%ld"), pMF->m_nDocumentNo);
	rs2.ExecSQL(szSQL);

	if (!rs2.IsEOF())
	{
		CString szStatus;
		rs2.GetValue(_T("hcr_status"), szStatus);
		if(szStatus == _T("I") || szStatus == _T("T"))
		{
			ShowMessageBox(_T("Bệnh nhân đã được nhập viện điều trị. Không cho phép kết thúc lại"), MB_ICONERROR | MB_OK);
			return false;
		}
	}	

	//Kiem tra xem co Test Order nao dang trang thai =O ko. Neu =O thi khong ket thuc duoc
	szSQL.Format(_T("select count(*) from hms_testorder where hpc_docno=%ld and hpc_status ='O' "), nDocument);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		CString szMsg;
		szMsg.Format(_T("Có phiếu cận lâm sàng ở trạng thái đang mở, không thể kết thúc hồ sơ, vui lòng xác nhận phiếu trước khi kết thúc"));
		ShowMessageBox(szMsg, MB_OK);
		return false;
	}

	//Kiem tra xem co PACS Order nao dang trang thai =O ko. Neu =O thi khong ket thuc duoc
	szSQL.Format(_T("select count(*) from hms_pacsorder where hpc_docno=%ld and hpc_status ='O' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		CString szMsg;
		szMsg.Format(_T("Có phiếu cận lâm sàng ở trạng thái đang mở, không thể kết thúc hồ sơ, vui lòng xác nhận phiếu trước khi kết thúc"));
		ShowMessageBox(szMsg, MB_OK);
		return false;
	}
	
	//Kiem tra xem Operation nao dang trang thai = O. Neu co thi khong cho ket thuc ho so.
	//szSQL.Format(_T("select count(*) from hms_operation where ho_docno=%ld and ho_status ='O' "), nDocument);
	szSQL.Format(
        _T(" select count(*) from hms_operation ")
        _T(" where ho_docno=%ld and ")
        _T(" (ho_status ='O' or (ho_status = 'S' and ho_itemid IN (select ")
        _T("ss_code from sys_sel where ss_id ='hms_check_before_ter')))"),
        nDocument);

	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		CString szMsg;
		szMsg.Format(_T("Có phiếu thủ thuật / phẫu thuật ở trạng thái chưa kết thúc, không thể kết thúc hồ sơ, vui lòng xác nhận phiếu trước khi kết thúc"));
		ShowMessageBox(szMsg, MB_OK);
		return false;
	}
	//Kiểm tra nếu còn đơn chưa xác nhận thì tự động xác nhận luôn!



	//Kiem tra neu con ton tai don thuoc chua cap thi ko cho ket thuc ho so
	szSQL.Format(_T("SELECT * FROM hms_pharmaorder WHERE hpo_docno=%ld AND hpo_orderstatus in('O') "), nDocument);
	rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		CString szMsg, szType;
		rs.GetValue(_T("hpo_ordertype"), szType);

		//if (pMF->GetProp(_T("check_drug_prescription_ter")) == _T("Y"))
        {
            if (szType == _T("P"))
            {
                TranslateString(_T("Đơn thuốc [%s] chưa được xác nhận, không ")
                                _T("thể kết thúc hồ sơ, vui lòng xác nhận đơn ")
                                _T("thuốc trước khi kết thúc "),
                                tmpStr);
                szMsg.Format(tmpStr, rs.GetValue(_T("hpo_orderid")));
            }
            else
            {
                TranslateString(
                    _T("Số phiếu yêu cầu [%s]-[%s] thời gian kê [%s] tại khoa ")
                    _T("[%s] chưa được cấp. Không thể kết thúc hồ sơ"),
                    tmpStr);
                szMsg.Format(tmpStr, rs.GetValue(_T("hpo_orderid")),
                             rs.GetValue(_T("HPO_REFERENCE_ID")),
                             CDate::Convert(rs.GetValue(_T("hpo_orderdate")),
                                            yyyymmdd, ddmmyyyy),
                             rs.GetValue(_T("HPO_DEPTID")));
            }
            ShowMessageBox(szMsg, MB_OK);
            return false;
        }
	}

	CHMSHelper helper;
	if (helper.CheckMaDoiTuongKCB(nDocument, true) <= 0)
	{
		return false;
	}


	return true;
}

int CHMSPatientDocument::OnPrintEmergencyReceipt(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	OnLoadEmergencyReceipt(pMF->m_nDocumentNo, pMF->m_nRefIndex);
	return 0;
}

int CHMSPatientDocument::OnPrintLaserReceiptList()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CPrintForms printer;
	printer.EM_OnPrintLaserReceiptList(m_nDocumentNo, pMF->m_szDoctor);
	return 0;
}

int CHMSPatientDocument::OnLoadEmergencyReceipt(long nDocNo, long nReceptIdx)
{
	if (nDocNo <= 0 || nReceptIdx <= 0)
	{
		return -1;
	}

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) ") \
		         _T("FROM hms_exam ") \
		         _T("WHERE he_docno=%ld AND he_receptidx=%ld AND he_deptid='C1.3' AND he_status='T'"),
		         nDocNo, nReceptIdx);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() == 0)
	{
		return 0;
	}


	CHMSEmergencyReceiptDialog dlg(this);
	dlg.m_nDocNo = nDocNo;
	dlg.m_nReceptIdx = nReceptIdx;

	szSQL.Format(_T("SELECT hd_suggestion AS suggestion, ") \
		         _T("hd_indept AS indept ") \
		         _T("FROM hms_doc ") \
				 _T("WHERE hd_docno=%ld"), nDocNo);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rs.IsEOF())
	{
		dlg.m_szSuggestion = rs.GetValue(_T("suggestion"));
		dlg.m_szInDept = rs.GetValue(_T("indept"));
		
	}

	//if (dlg.m_szSuggestion != _T("D") && dlg.m_szSuggestion != _T("C"))
	//	return -2;


	szSQL.Format(_T("SELECT Count(*) FROM hms_emergency WHERE he_docno=%ld AND he_receptidx=%ld"),
		         nDocNo, nReceptIdx);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		dlg.m_bIsUpdate = true;
	}
	else
	{
		dlg.m_bIsUpdate = false;
	}

	dlg.SetMode(VM_VIEW);

	if (dlg.DoModal() == IDOK)
	{
	}
	return 1;
}

#include "HMSPatientEncryptDialog.h"
int CHMSPatientDocument::OnSecurityPatientProfile()
{
	CHMSPatientEncryptDialog dlg(this, m_nPatientNo, VM_EDIT);
	if(dlg.DoModal() == IDOK)
	{

	}
	return 0;
}

void CHMSPatientDocument::OnViewSecurePatientProfile()
{
	CHMSPatientEncryptDialog dlg(this, m_nPatientNo, VM_VIEW);
	if(dlg.DoModal() == IDOK)
	{

	}
}

#include "HMSAppointmentDialog.h"

void CHMSPatientDocument::OnAppointmentReceipt()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szSuggestionKey != _T("D"))
	{

		CHMSAppointmentDialog dlg(this);
		dlg.m_nDocumentNo = pMF->m_nDocumentNo;
		if(dlg.DoModal() == IDOK)
		{

		}
	}
}

int CHMSPatientDocument::OnThudungdtngt(){
	CHMSDentalTreatmentDlg dlg(this);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.DoModal();
	return 0;
}

int CHMSPatientDocument::OnPhieuDieuTriKhoaRang(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CPrintForms printer;
	printer.EM_OnPrintDetailOperation(m_nDocumentNo);
	return 0;
}

void CHMSPatientDocument::OnResizeLayout()
{
    
	AddResize(&m_wndExaminationReceipts, 100, 100);
	AddResize(&m_wndExaminationTab, 100, 100);
	//AddResize(&m_wndConclusion, 100, 100);
	return;
	int percent =20;
	AddLayoutControls(WS_REPOSX|WS_RESIZEX|WS_RESIZEY, percent, 0, 100-percent, 100-percent,&m_wndExaminationTab,NULL);
	AddLayoutControls(WS_RESIZEX, 0, 0, percent, 0,&m_wndProfiles,&m_wndTreatmentInformation,NULL);
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, percent, 100,&m_wndExaminationReceipts,&m_wndExamList,NULL);
	AddLayoutControls(WS_RESIZEX, 0, 0, percent, 0,&m_wndPatientNoLabel,&m_wndPatientNameLabel,&m_wndAgeLabel,&m_wndOccupationLabel,&m_wndAddressLabel,&m_wndWorkplaceLabel,&m_wndObjectLabel,&m_wndExamDateLabel,&m_wndICDLabel,&m_wndConclusionLabel,&m_wndSuggestionLabel,&m_wndInDeptLabel,&m_wndHospitalLabel,NULL);

	AddLayoutControls(WS_RESIZEX, 0, 0, percent, 0,&m_wndPatientNo,&m_wndPatientName,&m_wndAge,&m_wndOccupation,&m_wndAddress,&m_wndWorkplace,&m_wndObject,&m_wndExamDate,&m_wndICD,&m_wndConclusion,&m_wndSuggestion,&m_wndInDept,&m_wndHospital,NULL);

	AddLayoutControls(WS_REPOSX, percent, 0, 0, 0,&m_wndDocumentNoLabel,&m_wndDocumentNo,&m_wndSexLabel,&m_wndSex,&m_wndCardNo,&m_wndCardInfoBtn,&m_wndStatusLabel,&m_wndStatus, &m_wndPhoneLabel, &m_wndPhone, &m_wndBedUsage, NULL);
}
#include "EM_RehabilitationEndDate.h"
void CHMSPatientDocument::OnPrintRehabilitationCertify(){
	//CPrintForms printer;
	//printer.EM_OnPrintRehabilitationCertify(m_nDocumentNo);
	CEM_RehabilitationEndDate dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.DoModal();
}



void CHMSPatientDocument::PrintAdmissionSheet(bool bPreview){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	if (pMF->OnPostGenDocX(&rpt, _T("giayvaovien"), pMF->m_nDocumentNo, 0, _T("PHIEUVAOVIEN.RPT"), _T("")))
	{
		return;
	}
	CString szSQL, tmpStr, szDate, szReportName, szFoodMode, szOrderDate;
	szFoodMode = _T("Tự túc");
	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
				_T("        extract(year from hp_birthdate) as yob, hp_sex,") \
				_T("        (select ss_desc from sys_sel where ss_id='hms_rank' and cast(ss_code as integer)=hp_rank) as rank,") \
				_T("        hp_position as position, hp_workplace as unit,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)),  hd_relative as relative,") \
				_T("		(select ss_desc from sys_sel where ss_id = 'hms_relation' and ss_code = hd_relation) as relation, hd_contactaddr as reladdress, hd_contacttel as relphone,") \
				_T("        hd_transdiagn as trdisease,") \
				_T("        (select hi_name from hms_icd where hi_icd=hd_transicd) as icd10,") \
				_T("        hd_conclusion as disease,") \
				_T("        trunc(hd_admitdate) as examdte,") \
				_T("        hd_admitdept as deptid,") \
				/*_T("        --hd_ward as wardid,") \*/
				_T("        (select sd_name from sys_dept where sd_id=hd_admitdept) as facname,") \
				_T("		get_departmentname(hcr_admitdept) as deptname,") \
				_T("        hcr_recordno as numinward, hcr_admitdate as inwardtime, ") \
				_T("        hcr_foodmode as foodmode,") \
				_T("        (select ho_desc from hms_object where ho_id=hd_object) as policydesc,") \
				_T("        (select hc_cardno from hms_card where hc_patientno=hd_patientno and hc_idx=hd_cardidx) as cardno") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" WHERE hd_docno=%ld AND hd_suggestion IN('C', 'D') and hd_status in('P','T')"), m_nDocumentNo);
	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Patient not found"));
		return;

	}


	szReportName.Format(_T("Reports\\HMS\\BENHAN\\PHIEUVAOVIEN.RPT"));
	if(!rpt.Init(szReportName))
		return;
	CReportSection *rptDetail= NULL;
	rptDetail = rpt.GetReportHeader();
	CString szHealthService = pMF->m_CompanyInfo.sc_pname;
	CString szHospitalName = pMF->m_CompanyInfo.sc_name;

	rptDetail->SetValue(_T("HEALTH_SERVICE"), szHealthService);
	rptDetail->SetValue(_T("hospital_name"), szHospitalName);
	rptDetail->SetValue(_T("health_srv"), szHealthService);
	rptDetail->SetValue(_T("hospital_name2"), szHospitalName);
	rptDetail->SetValue(_T("faculty"), rs.GetValue(_T("deptname")));
	rptDetail->SetValue(_T("faculty2"), rs.GetValue(_T("deptname")));
	rptDetail->Format(_T("department"), rs.GetValue(_T("wardid")));

	rptDetail->SetValue(_T("name"), rs.GetValue(_T("patientname")));
	rptDetail->SetValue(_T("name2"), rs.GetValue(_T("patientname")));
	rptDetail->SetValue(_T("age"), rs.GetValue(_T("yob")));
	rptDetail->SetValue(_T("unit"), rs.GetValue(_T("unit")));
	rptDetail->SetValue(_T("rank"), rs.GetValue(_T("rank")));
	rptDetail->SetValue(_T("unit2"), rs.GetValue(_T("unit")));
	rptDetail->SetValue(_T("rank2"), rs.GetValue(_T("rank")));
	tmpStr.Format(_T("%s\r\n%s"), rs.GetValue(_T("icd10")), rs.GetValue(_T("disease")));
	rptDetail->SetValue(_T("disease"), tmpStr);
	
	
	tmpStr.Format(_T("%s"), rs.GetValue(_T("policydesc")));
	rptDetail->SetValue(_T("object"), tmpStr);
	rptDetail->SetValue(_T("object2"), tmpStr);
	rs.GetValue(_T("inwardtime"), tmpStr);
	rptDetail->SetValue(_T("inwarddate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rptDetail->SetValue(_T("inwarddate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rptDetail->SetValue(_T("foodmode"), szFoodMode);
	tmpStr = rs.GetValue(_T("numinward"));
	if(tmpStr== _T("0"))
		tmpStr.Empty();
	//else if(m_nPolicy == 7)
	//	tmpStr += " - DV";
	rptDetail->SetValue(_T("docno"), tmpStr);
	rptDetail->SetValue(_T("docno2"), tmpStr);
	//tmpStr = CDate::Convert(pMF->GetSysDate(), yyyymmdd, ddmmyyyy);
	//tmpStr.Format(_T("Ngày %s tháng %s năm %s"), tmpStr.Left(2), tmpStr.Mid(3, 2), tmpStr.Right(4));
	rs.GetValue(_T("inwardtime"), tmpStr);
	szDate.Format(_T("Ngày %s tháng %s năm %s"), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("printdate"), szDate);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}


void CHMSPatientDocument::OnPrintAdmissionSheet()
{
	PrintAdmissionSheet(true);
}
void CHMSPatientDocument::OnMauBenhAn()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_nDocNo = m_nDocumentNo;
	pMF->m_nPNo = m_nPatientNo;
	
	if(m_nDocumentNo <= 0 && m_nPatientNo <= 0)
	{
		MessageBox(_T("Yêu cầu chọn bệnh nhân"), 0 , MB_ICONERROR);
		return;
	}

	bool flag = true;
	if (m_szSuggestionKey != _T("E") && m_szStatus != _T("T")) 
	{
		flag = false;
	}
	if(!pMF->m_szRecordNo.IsEmpty() && pMF->m_szOutpatient == _T("Y"))
		flag = true;
	if(!flag)
		return;

	CHMSMauBenhAnDlg dlg(this);
	dlg.DoModal();
}
#include "HMSChungNhanNghiViec.h"
void CHMSPatientDocument::OnGiayChungNhanNghiViec()
{
	if (m_nDocumentNo <= 0 && m_nPatientNo <= 0)
	{
		MessageBox(_T("Yêu cầu chọn bệnh nhân"), 0, MB_ICONERROR);
		return;
	}

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CHMSChungNhanNghiViec dlg(this);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.DoModal();
	return ;
}

#include "HMSSurgeryOperationInfoDialog.h"

void CHMSPatientDocument::OnSurgeryReq()
{

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}

	bool flag = true;
	if (m_szSuggestionKey != _T("D") && m_szStatus != _T("T")) 
	{
		flag = false;
	}

	
	CHMSSurgeryOperationInfoDialog dlg(this, 0, true);
	if(dlg.DoModal() == IDOK)
	{
	}

}

void CHMSPatientDocument::OnClinicalRecordInput(){
	CMainFrame * pMF = (CMainFrame*) AfxGetMainWnd();
	
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}

	if (pMF->m_UserInfo.su_deptid == _T("C6") || pMF->CheckPermission(_T("EM.100.101")))
	{
		CHMSBenhAnHTMLDialog dlg(this);
		dlg.DoModal();
	}
	else
	{
		CTMBenhAnDialog dlg(this, VM_EDIT, m_nDocumentNo, _T("BANGT"));
		dlg.DoModal();
	}
}

#include "HMSTreatModeSettingDialog.h"
void CHMSPatientDocument::OnUpdateTreatMode(){
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}
	CHMSTreatModeSettingDialog dlg(this);
	dlg.DoModal();
}


bool CHMSPatientDocument::CheckClinicalRecordInput(){
	return false;
}
#include "HMSAntibioticListDialog.h"
void CHMSPatientDocument::OnAntibioticUseSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}
	CHMSAntibioticListDialog dlg(this);
	dlg.DoModal();
}

#include "HMSTemplates.h"
#include "DialogView.h"

void CHMSPatientDocument::OnCreateSpecificForm()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}
	CDialogView dlg(this, new CHMSTemplates());
	dlg.DoModal();
	//CHMSExamHtmlDialog dlg(this, _T(""));
	//dlg.DoModal();
	
}
#include "HMSAppointmentScheduleDialog.h"
#include "../HMSCore/DialogView.h"
void CHMSPatientDocument::OnHenKhamLaiSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}

	
	    CHMSAppointmentScheduleDialog dlg(this);
		dlg.m_nDocumentNo = pMF->m_nDocumentNo;
		//dlg.m_nOrderId = m_nOrderID;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();

	//if(m_szSuggestionKey != _T("D"))
	//{

	//	CHMSAppointmentScheduleDialog dlg(this);
	//	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
	//	if(dlg.DoModal() == IDOK)
	//	{

	//	}
	//}
}



void CHMSPatientDocument::OnCreateHospitalTransfer()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}

	if(m_szSuggestionKey == _T("F")) // Benh nhan chuyen vien
		{ 
			CHMSHospitalTransfer dlg(this);
			dlg.DoModal();			
		}	   
	
}


void CHMSPatientDocument::OnPatientCareEMSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}

	CHMSTreatmentCareEMDialog dlg(this, VM_VIEW, m_nDocumentNo);
	//CHMSTreatmentCareEMDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}

void CHMSPatientDocument::OnExamTracking()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}

	CHMSTreatmentTrackingDialog dlg(this, VM_VIEW, m_nDocumentNo);
	if(dlg.DoModal() == IDOK)
	{

	}
}

int CHMSPatientDocument::OnTerminateDocumentInformation()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return 0;
	}

	if(pMF->GetObjectType() != _T("S"))
	{
		return 0;
	}
	
		szSQL.Format(_T("SELECT count(*) FROM hms_exam LEFT JOIN hms_roomlist ON (he_deptid=hrl_deptid AND he_roomid=hrl_id) WHERE he_docno=%ld AND hrl_group='LT' AND HE_HASFEE='Y' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);

		if(rs.GetIntValue() <= 0)
		{
			
			ShowMessageBox(_T("Đối tượng không thuộc khu lưu trú, không được phép kết thúc!"));
			return 0;
		}

	CHMSTerminateCovidDocument dlg(this);
	dlg.DoModal();
	
	return 0;
}
void CHMSPatientDocument::OnConclusionLabelSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->IsDocumentEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bệnh nhân"));
		return;
	}

	CHMSConclusionExtendDlg dlg(&m_wndConclusion);
	dlg.m_nDocno = m_nDocumentNo;	
	if(dlg.DoModal() == IDOK)
	{
	GetDataToScreen();
	}
}
void CHMSPatientDocument::OnLoaiKCBSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnLoaiKCBSelendok(){
	UpdateData(true);


	UpdateData(false);
}
/*void CHMSPatientDocument::OnSuggestionSetfocus(){
	
} */
void CHMSPatientDocument::OnLoaiKCBKillfocus(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
long CHMSPatientDocument::OnLoaiKCBLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and ss_default in ('A','E')"));
	return pMF->LoadSelectionList(&m_wndLoaiKCB, _T("sys_ma_loai_kcb"), m_szLoaiKCBKey, szFilter);

	return 0;
}

void CHMSPatientDocument::OnSearchDocumentInformation()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
		CHMSTreatmentHistory dlg(this);
		//dlg.m_nDocumentNo = pMF->m_nDocumentNo;
		dlg.m_nPatientNo = pMF->m_nPatientNo;
		if(dlg.DoModal() == IDOK)
		{

		}
}

void CHMSPatientDocument::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);


	CRect rect, rc, rcDesktop;
	GetClientRect(&rect);
    
	cout << rect.Width() << ":" << rect.Height() << endl;
    return;
    
	rc = rect;
	rc.left += 380;
	m_wndExaminationTab.MoveWindow(rc);
	m_wndExaminationReceipts.GetWindowRect(&rc);
	ScreenToClient(&rc);
	rc.right =380;
	rc.bottom = rect.bottom;
	m_wndExaminationReceipts.SetWindowPos(NULL, 0, 0, rc.Width(), rc.Height(), SWP_NOZORDER | SWP_NOMOVE);

}


void CHMSPatientDocument::OnViewEMR()
{
	if (m_nDocumentNo <= 0)
		return;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	pMF->ShowBackstage(new CEMRPatientProfile(m_nDocumentNo));
	return;
}

void CHMSPatientDocument::OnExaminationReceiptsSelectChange(int nOld, int nNew)
{
    cout << nOld << ":" << nNew << endl;
    switch (nNew)
    {
    case 0:
        OnExamListLoadData();
        break;
    case 1:
        OnHistoryListLoadData();
        break;
    case 2:
        OnDiseaseHistoryLoadData();
        break;
    }
}