#include "HMSPatientProfiles.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPIDChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPIDChange();
} */
/*static void _OnPIDSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPIDSetfocus();} */ 
/*static void _OnPIDKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPIDKillfocus();
} */
static int _OnPIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnPIDCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnWorkingPlaceChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnWorkingPlaceChange();
} */
/*static void _OnWorkingPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnWorkingPlaceSetfocus();} */ 
/*static void _OnWorkingPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnWorkingPlaceKillfocus();
} */
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnWorkingPlaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnCardCodeChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardCodeChange();
} */
/*static void _OnCardCodeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardCodeSetfocus();} */ 
/*static void _OnCardCodeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardCodeKillfocus();
} */
static int _OnCardCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnCardCodeCheckValue();
} 
/*static void _OnCardDiscountChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardDiscountChange();
} */
/*static void _OnCardDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardDiscountSetfocus();} */ 
/*static void _OnCardDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnCardDiscountKillfocus();
} */
static int _OnCardDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnCardDiscountCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnExpiryDateCheckValue();
} 
/*static void _OnRegistrationPlaceChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnRegistrationPlaceChange();
} */
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnRegistrationPlaceSetfocus();} */ 
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnRegistrationPlaceKillfocus();
} */
static int _OnRegistrationPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnRegistrationPlaceCheckValue();
} 
static long _OnTreatmentListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd)->OnTreatmentListLoadData();
} 
static void _OnTreatmentListDblClickFnc(CWnd *pWnd){
	((CHMSPatientProfiles*)pWnd)->OnTreatmentListDblClick();
} 
static void _OnTreatmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientProfiles*)pWnd)->OnTreatmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatmentListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnTreatmentListDeleteItem();
} 
static long _OnInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd)->OnInvoiceListLoadData();
} 
static void _OnInvoiceListDblClickFnc(CWnd *pWnd){
	((CHMSPatientProfiles*)pWnd)->OnInvoiceListDblClick();
} 
static void _OnInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientProfiles*)pWnd)->OnInvoiceListSelectChange(nOldItem, nNewItem);
} 
static int _OnInvoiceListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnInvoiceListDeleteItem();
} 
static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSPatientProfiles*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientProfiles*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnFeeListDeleteItem();
} 
static void _OnBillingSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnBillingSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnInsuranceCostChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsuranceCostChange();
} */
/*static void _OnInsuranceCostSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsuranceCostSetfocus();} */ 
/*static void _OnInsuranceCostKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsuranceCostKillfocus();
} */
static int _OnInsuranceCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnInsuranceCostCheckValue();
} 
/*static void _OnInsurancePaidChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsurancePaidChange();
} */
/*static void _OnInsurancePaidSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsurancePaidSetfocus();} */ 
/*static void _OnInsurancePaidKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsurancePaidKillfocus();
} */
static int _OnInsurancePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnInsurancePaidCheckValue();
} 
/*static void _OnInsuranceUnpaidChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsuranceUnpaidChange();
} */
/*static void _OnInsuranceUnpaidSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsuranceUnpaidSetfocus();} */ 
/*static void _OnInsuranceUnpaidKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnInsuranceUnpaidKillfocus();
} */
static int _OnInsuranceUnpaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnInsuranceUnpaidCheckValue();
} 
/*static void _OnDifferencepayChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDifferencepayChange();
} */
/*static void _OnDifferencepaySetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDifferencepaySetfocus();} */ 
/*static void _OnDifferencepayKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDifferencepayKillfocus();
} */
static int _OnDifferencepayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnDifferencepayCheckValue();
} 
/*static void _OnPatientPayChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientPayChange();
} */
/*static void _OnPatientPaySetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientPaySetfocus();} */ 
/*static void _OnPatientPayKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientPayKillfocus();
} */
static int _OnPatientPayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnPatientPayCheckValue();
} 
/*static void _OnTotalDepositChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalDepositChange();
} */
/*static void _OnTotalDepositSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalDepositSetfocus();} */ 
/*static void _OnTotalDepositKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalDepositKillfocus();
} */
static int _OnTotalDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnTotalDepositCheckValue();
} 
/*static void _OnTotalPolicyChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalPolicyChange();
} */
/*static void _OnTotalPolicySetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalPolicySetfocus();} */ 
/*static void _OnTotalPolicyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnTotalPolicyKillfocus();
} */
static int _OnTotalPolicyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnTotalPolicyCheckValue();
} 
/*static void _OnSumABChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnSumABChange();
} */
/*static void _OnSumABSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnSumABSetfocus();} */ 
/*static void _OnSumABKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnSumABKillfocus();
} */
static int _OnSumABCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnSumABCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnPatientPayableChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientPayableChange();
} */
/*static void _OnPatientPayableSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientPayableSetfocus();} */ 
/*static void _OnPatientPayableKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPatientPayableKillfocus();
} */
static int _OnPatientPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnPatientPayableCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnNoteCheckValue();
} 
static void _OnInsApproveSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnInsApproveSelect();
} 
static int _OnAddHMSPatientProfilesFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnAddHMSPatientProfiles();
} 
static int _OnEditHMSPatientProfilesFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnEditHMSPatientProfiles();
} 
static int _OnDeleteHMSPatientProfilesFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnDeleteHMSPatientProfiles();
} 
static int _OnSaveHMSPatientProfilesFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnSaveHMSPatientProfiles();
} 
static int _OnCancelHMSPatientProfilesFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnCancelHMSPatientProfiles();
} 
CHMSPatientProfiles::CHMSPatientProfiles(){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CHMSPatientProfiles::~CHMSPatientProfiles(){
}
void CHMSPatientProfiles::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 375, 300);
	m_wndBillingReceiptInformation.Create(this, _T("Billing receipt information"), 5, 440, 375, 590);
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 305, 375, 435);
	m_wndGeneralCost.Create(this, _T("General Cost"), 380, 5, 1015, 590);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 200, 55); 
	m_wndPIDLabel.Create(this, _T("PID"), 205, 30, 285, 55);
	m_wndPID.Create(this,290, 30, 370, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 370, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 285, 115);
	m_wndSex.Create(this,290, 90, 370, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,115, 120, 370, 145); 
	m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 150, 110, 175);
	m_wndWorkingPlace.Create(this,115, 150, 370, 175); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 180, 110, 205);
	m_wndObject.Create(this,115, 180, 370, 205); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 210, 110, 235);
	m_wndCardNo.Create(this,115, 210, 285, 235); 
	m_wndCardCode.Create(this,290, 210, 330, 235); 
	m_wndCardDiscount.Create(this,335, 210, 370, 235); 
	m_wndRegistrationDateLabel.Create(this, _T("Reg.Date"), 10, 240, 110, 265);
	m_wndRegistrationDate.Create(this,115, 240, 200, 265); 
	m_wndExpiryDateLabel.Create(this, _T("Exp.Date"), 205, 240, 285, 265);
	m_wndExpiryDate.Create(this,290, 240, 370, 265); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Reg.Place"), 10, 270, 110, 295);
	m_wndRegistrationPlace.Create(this,115, 270, 370, 295); 
	m_wndTreatmentList.Create(this,10, 325, 370, 430); 
	m_wndInvoiceList.Create(this,10, 460, 370, 585); 
	m_wndFeeList.Create(this,385, 30, 1010, 435); 
	m_wndBilling.Create(this, _T("&Billing"), 65, 595, 165, 620);
	m_wndApproval.Create(this, _T("&Approval"), 170, 595, 270, 620);
	m_wndPrint.Create(this, _T("&Print"), 275, 595, 375, 620);
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 385, 441, 485, 466);
	m_wndTotalCost.Create(this,490, 441, 590, 466); 
	m_wndInsuranceCostLabel.Create(this, _T("Insurance Cost"), 595, 441, 690, 466);
	m_wndInsuranceCost.Create(this,695, 441, 795, 466); 
	m_wndInsurancePaidLabel.Create(this, _T("Insurance Paid"), 800, 440, 905, 465);
	m_wndInsurancePaid.Create(this,910, 440, 1010, 465); 
	m_wndInsuranceUnpaidLabel.Create(this, _T("Insurance Unpaid"), 385, 470, 485, 495);
	m_wndInsuranceUnpaid.Create(this,490, 470, 590, 495); 
	m_wndDifferencepayLabel.Create(this, _T("Difference Pay"), 595, 470, 690, 495);
	m_wndDifferencepay.Create(this,695, 470, 795, 495); 
	m_wndPatient PayLabel.Create(this, _T("Patient Pay"), 800, 470, 905, 495);
	m_wndPatientPay.Create(this,910, 470, 1010, 495); 
	m_wndTotalDepositLabel.Create(this, _T("Total Deposit(A)"), 385, 500, 485, 525);
	m_wndTotalDeposit.Create(this,490, 500, 590, 525); 
	m_wndTotalPolicyLabel.Create(this, _T("Total Policy(B)"), 595, 500, 690, 525);
	m_wndTotalPolicy.Create(this,695, 500, 795, 525); 
	m_wndSumABLabel.Create(this, _T("Sum(A+B)"), 800, 500, 905, 525);
	m_wndSumAB.Create(this,910, 500, 1010, 525); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 800, 530, 905, 555);
	m_wndDiscount.Create(this,910, 530, 1010, 555); 
	m_wndPatientPayableLabel.Create(this, _T("Patient Payable"), 800, 560, 905, 585);
	m_wndPatientPayable.Create(this,910, 560, 1010, 585); 
	m_wndStatusLabel.Create(this, _T("Status"), 385, 529, 485, 554);
	m_wndStatus.Create(this,490, 529, 795, 554); 
	m_wndNoteLabel.Create(this, _T("Note"), 385, 559, 485, 584);
	m_wndNote.Create(this,490, 559, 795, 584); 
	m_wndDesc.Create(this, _T("Description"), 380, 595, 905, 620);
	m_wndInsApprove.Create(this, _T("Ins Approve"), 910, 595, 1015, 620);

}
void CHMSPatientProfiles::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPID.SetLimitText(16);
	m_wndPID.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndWorkingPlace.SetLimitText(35);
	m_wndWorkingPlace.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(20);
	m_wndCardNo.SetCheckValue(true);
	m_wndCardCode.SetLimitText(35);
	m_wndCardCode.SetCheckValue(true);
	m_wndCardDiscount.SetLimitText(35);
	m_wndCardDiscount.SetCheckValue(true);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetLimitText(35);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndTotalCost.SetLimitText(35);
	m_wndTotalCost.SetCheckValue(true);
	m_wndInsuranceCost.SetLimitText(35);
	m_wndInsuranceCost.SetCheckValue(true);
	m_wndInsurancePaid.SetLimitText(16);
	m_wndInsurancePaid.SetCheckValue(true);
	m_wndInsuranceUnpaid.SetLimitText(35);
	m_wndInsuranceUnpaid.SetCheckValue(true);
	m_wndDifferencepay.SetLimitText(35);
	m_wndDifferencepay.SetCheckValue(true);
	m_wndPatientPay.SetLimitText(35);
	m_wndPatientPay.SetCheckValue(true);
	m_wndTotalDeposit.SetLimitText(16);
	m_wndTotalDeposit.SetCheckValue(true);
	m_wndTotalPolicy.SetLimitText(16);
	m_wndTotalPolicy.SetCheckValue(true);
	m_wndSumAB.SetLimitText(16);
	m_wndSumAB.SetCheckValue(true);
	m_wndDiscount.SetLimitText(35);
	m_wndDiscount.SetCheckValue(true);
	m_wndPatientPayable.SetLimitText(16);
	m_wndPatientPayable.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);


	m_wndTreatmentList.InsertColumn(0, _T("Dept No"), CFMT_TEXT, 50);
	m_wndTreatmentList.InsertColumn(1, _T("From Date"), CFMT_TEXT, 80);
	m_wndTreatmentList.InsertColumn(2, _T("To Date"), CFMT_TEXT, 80);
	m_wndTreatmentList.InsertColumn(3, _T("Status"), CFMT_TEXT, 120);


	m_wndInvoiceList.InsertColumn(0, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndInvoiceList.InsertColumn(1, _T("Invoice Date"), CFMT_TEXT, 120);
	m_wndInvoiceList.InsertColumn(2, _T("Description"), CFMT_TEXT, 170);
	m_wndInvoiceList.InsertColumn(3, _T("Clerk"), CFMT_TEXT, 50);


	m_wndFeeList.InsertColumn(0, _T("Idx"), CFMT_TEXT, 30);
	m_wndFeeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndFeeList.InsertColumn(2, _T("Cost"), CFMT_TEXT, 70);
	m_wndFeeList.InsertColumn(3, _T("Discount"), CFMT_TEXT, 70);
	m_wndFeeList.InsertColumn(4, _T("Insurance"), CFMT_TEXT, 70);
	m_wndFeeList.InsertColumn(5, _T("Paid"), CFMT_TEXT, 70);
	m_wndFeeList.InsertColumn(6, _T("Unpaid"), CFMT_TEXT, 70);

}
void CHMSPatientProfiles::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPID.SetEvent(WE_CHANGE, _OnPIDChangeFnc);
	//m_wndPID.SetEvent(WE_SETFOCUS, _OnPIDSetfocusFnc);
	//m_wndPID.SetEvent(WE_KILLFOCUS, _OnPIDKillfocusFnc);
	m_wndPID.SetEvent(WE_CHECKVALUE, _OnPIDCheckValueFnc);
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
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndWorkingPlace.SetEvent(WE_CHANGE, _OnWorkingPlaceChangeFnc);
	//m_wndWorkingPlace.SetEvent(WE_SETFOCUS, _OnWorkingPlaceSetfocusFnc);
	//m_wndWorkingPlace.SetEvent(WE_KILLFOCUS, _OnWorkingPlaceKillfocusFnc);
	m_wndWorkingPlace.SetEvent(WE_CHECKVALUE, _OnWorkingPlaceCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndCardCode.SetEvent(WE_CHANGE, _OnCardCodeChangeFnc);
	//m_wndCardCode.SetEvent(WE_SETFOCUS, _OnCardCodeSetfocusFnc);
	//m_wndCardCode.SetEvent(WE_KILLFOCUS, _OnCardCodeKillfocusFnc);
	m_wndCardCode.SetEvent(WE_CHECKVALUE, _OnCardCodeCheckValueFnc);
	//m_wndCardDiscount.SetEvent(WE_CHANGE, _OnCardDiscountChangeFnc);
	//m_wndCardDiscount.SetEvent(WE_SETFOCUS, _OnCardDiscountSetfocusFnc);
	//m_wndCardDiscount.SetEvent(WE_KILLFOCUS, _OnCardDiscountKillfocusFnc);
	m_wndCardDiscount.SetEvent(WE_CHECKVALUE, _OnCardDiscountCheckValueFnc);
	//m_wndRegistrationDate.SetEvent(WE_CHANGE, _OnRegistrationDateChangeFnc);
	//m_wndRegistrationDate.SetEvent(WE_SETFOCUS, _OnRegistrationDateSetfocusFnc);
	//m_wndRegistrationDate.SetEvent(WE_KILLFOCUS, _OnRegistrationDateKillfocusFnc);
	m_wndRegistrationDate.SetEvent(WE_CHECKVALUE, _OnRegistrationDateCheckValueFnc);
	//m_wndExpiryDate.SetEvent(WE_CHANGE, _OnExpiryDateChangeFnc);
	//m_wndExpiryDate.SetEvent(WE_SETFOCUS, _OnExpiryDateSetfocusFnc);
	//m_wndExpiryDate.SetEvent(WE_KILLFOCUS, _OnExpiryDateKillfocusFnc);
	m_wndExpiryDate.SetEvent(WE_CHECKVALUE, _OnExpiryDateCheckValueFnc);
	//m_wndRegistrationPlace.SetEvent(WE_CHANGE, _OnRegistrationPlaceChangeFnc);
	//m_wndRegistrationPlace.SetEvent(WE_SETFOCUS, _OnRegistrationPlaceSetfocusFnc);
	//m_wndRegistrationPlace.SetEvent(WE_KILLFOCUS, _OnRegistrationPlaceKillfocusFnc);
	m_wndRegistrationPlace.SetEvent(WE_CHECKVALUE, _OnRegistrationPlaceCheckValueFnc);
	m_wndTreatmentList.SetEvent(WE_SELCHANGE, _OnTreatmentListSelectChangeFnc);
	m_wndTreatmentList.SetEvent(WE_LOADDATA, _OnTreatmentListLoadDataFnc);
	m_wndTreatmentList.SetEvent(WE_DBLCLICK, _OnTreatmentListDblClickFnc);
	m_wndTreatmentList.AddEvent(1, _T("Delete"), _OnTreatmentListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndInvoiceList.SetEvent(WE_SELCHANGE, _OnInvoiceListSelectChangeFnc);
	m_wndInvoiceList.SetEvent(WE_LOADDATA, _OnInvoiceListLoadDataFnc);
	m_wndInvoiceList.SetEvent(WE_DBLCLICK, _OnInvoiceListDblClickFnc);
	m_wndInvoiceList.AddEvent(1, _T("Delete"), _OnInvoiceListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndBilling.SetEvent(WE_CLICK, _OnBillingSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndInsuranceCost.SetEvent(WE_CHANGE, _OnInsuranceCostChangeFnc);
	//m_wndInsuranceCost.SetEvent(WE_SETFOCUS, _OnInsuranceCostSetfocusFnc);
	//m_wndInsuranceCost.SetEvent(WE_KILLFOCUS, _OnInsuranceCostKillfocusFnc);
	m_wndInsuranceCost.SetEvent(WE_CHECKVALUE, _OnInsuranceCostCheckValueFnc);
	//m_wndInsurancePaid.SetEvent(WE_CHANGE, _OnInsurancePaidChangeFnc);
	//m_wndInsurancePaid.SetEvent(WE_SETFOCUS, _OnInsurancePaidSetfocusFnc);
	//m_wndInsurancePaid.SetEvent(WE_KILLFOCUS, _OnInsurancePaidKillfocusFnc);
	m_wndInsurancePaid.SetEvent(WE_CHECKVALUE, _OnInsurancePaidCheckValueFnc);
	//m_wndInsuranceUnpaid.SetEvent(WE_CHANGE, _OnInsuranceUnpaidChangeFnc);
	//m_wndInsuranceUnpaid.SetEvent(WE_SETFOCUS, _OnInsuranceUnpaidSetfocusFnc);
	//m_wndInsuranceUnpaid.SetEvent(WE_KILLFOCUS, _OnInsuranceUnpaidKillfocusFnc);
	m_wndInsuranceUnpaid.SetEvent(WE_CHECKVALUE, _OnInsuranceUnpaidCheckValueFnc);
	//m_wndDifferencepay.SetEvent(WE_CHANGE, _OnDifferencepayChangeFnc);
	//m_wndDifferencepay.SetEvent(WE_SETFOCUS, _OnDifferencepaySetfocusFnc);
	//m_wndDifferencepay.SetEvent(WE_KILLFOCUS, _OnDifferencepayKillfocusFnc);
	m_wndDifferencepay.SetEvent(WE_CHECKVALUE, _OnDifferencepayCheckValueFnc);
	//m_wndPatientPay.SetEvent(WE_CHANGE, _OnPatientPayChangeFnc);
	//m_wndPatientPay.SetEvent(WE_SETFOCUS, _OnPatientPaySetfocusFnc);
	//m_wndPatientPay.SetEvent(WE_KILLFOCUS, _OnPatientPayKillfocusFnc);
	m_wndPatientPay.SetEvent(WE_CHECKVALUE, _OnPatientPayCheckValueFnc);
	//m_wndTotalDeposit.SetEvent(WE_CHANGE, _OnTotalDepositChangeFnc);
	//m_wndTotalDeposit.SetEvent(WE_SETFOCUS, _OnTotalDepositSetfocusFnc);
	//m_wndTotalDeposit.SetEvent(WE_KILLFOCUS, _OnTotalDepositKillfocusFnc);
	m_wndTotalDeposit.SetEvent(WE_CHECKVALUE, _OnTotalDepositCheckValueFnc);
	//m_wndTotalPolicy.SetEvent(WE_CHANGE, _OnTotalPolicyChangeFnc);
	//m_wndTotalPolicy.SetEvent(WE_SETFOCUS, _OnTotalPolicySetfocusFnc);
	//m_wndTotalPolicy.SetEvent(WE_KILLFOCUS, _OnTotalPolicyKillfocusFnc);
	m_wndTotalPolicy.SetEvent(WE_CHECKVALUE, _OnTotalPolicyCheckValueFnc);
	//m_wndSumAB.SetEvent(WE_CHANGE, _OnSumABChangeFnc);
	//m_wndSumAB.SetEvent(WE_SETFOCUS, _OnSumABSetfocusFnc);
	//m_wndSumAB.SetEvent(WE_KILLFOCUS, _OnSumABKillfocusFnc);
	m_wndSumAB.SetEvent(WE_CHECKVALUE, _OnSumABCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndPatientPayable.SetEvent(WE_CHANGE, _OnPatientPayableChangeFnc);
	//m_wndPatientPayable.SetEvent(WE_SETFOCUS, _OnPatientPayableSetfocusFnc);
	//m_wndPatientPayable.SetEvent(WE_KILLFOCUS, _OnPatientPayableKillfocusFnc);
	m_wndPatientPayable.SetEvent(WE_CHECKVALUE, _OnPatientPayableCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndInsApprove.SetEvent(WE_CLICK, _OnInsApproveSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientProfilesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientProfilesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientProfilesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientProfilesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientProfilesFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientProfiles::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPID.GetDlgCtrlID(), m_nPID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCardCode.GetDlgCtrlID(), m_szCardCode);
	DDX_Text(pDX, m_wndCardDiscount.GetDlgCtrlID(), m_szCardDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_Text(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlace);
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndInsuranceCost.GetDlgCtrlID(), m_nInsuranceCost);
	DDX_Text(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_nInsurancePaid);
	DDX_Text(pDX, m_wndInsuranceUnpaid.GetDlgCtrlID(), m_nInsuranceUnpaid);
	DDX_Text(pDX, m_wndDifferencepay.GetDlgCtrlID(), m_nDifferencepay);
	DDX_Text(pDX, m_wndPatientPay.GetDlgCtrlID(), m_nPatientPay);
	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Text(pDX, m_wndTotalPolicy.GetDlgCtrlID(), m_nTotalPolicy);
	DDX_Text(pDX, m_wndSumAB.GetDlgCtrlID(), m_nSumAB);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndPatientPayable.GetDlgCtrlID(), m_nPatientPayable);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSPatientProfiles::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientProfiles::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientProfiles::SetDefaultValues(){

	m_nDocumentNo=0;
	m_nPID=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szWorkingPlace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szCardCode.Empty();
	m_szCardDiscount.Empty();
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlace.Empty();
	m_nTotalCost=0;
	m_nInsuranceCost=0;
	m_nInsurancePaid=0;
	m_nInsuranceUnpaid=0;
	m_nDifferencepay=0;
	m_nPatientPay=0;
	m_nTotalDeposit=0;
	m_nTotalPolicy=0;
	m_nSumAB=0;
	m_nDiscount=0;
	m_nPatientPayable=0;
	m_szStatus.Empty();
	m_szNote.Empty();

}
int CHMSPatientProfiles::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
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
/*void CHMSPatientProfiles::OnDocumentNoChange(){
	
} */
/*void CHMSPatientProfiles::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientProfiles::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnPIDChange(){
	
} */
/*void CHMSPatientProfiles::OnPIDSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnPIDKillfocus(){
	
} */
int CHMSPatientProfiles::OnPIDCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnPatientNameChange(){
	
} */
/*void CHMSPatientProfiles::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnPatientNameKillfocus(){
	
} */
int CHMSPatientProfiles::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnAgeChange(){
	
} */
/*void CHMSPatientProfiles::OnAgeSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnAgeKillfocus(){
	
} */
int CHMSPatientProfiles::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnSexChange(){
	
} */
/*void CHMSPatientProfiles::OnSexSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnSexKillfocus(){
	
} */
int CHMSPatientProfiles::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnAddressChange(){
	
} */
/*void CHMSPatientProfiles::OnAddressSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnAddressKillfocus(){
	
} */
int CHMSPatientProfiles::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnWorkingPlaceChange(){
	
} */
/*void CHMSPatientProfiles::OnWorkingPlaceSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnWorkingPlaceKillfocus(){
	
} */
int CHMSPatientProfiles::OnWorkingPlaceCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnObjectChange(){
	
} */
/*void CHMSPatientProfiles::OnObjectSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnObjectKillfocus(){
	
} */
int CHMSPatientProfiles::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnCardNoChange(){
	
} */
/*void CHMSPatientProfiles::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnCardNoKillfocus(){
	
} */
int CHMSPatientProfiles::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnCardCodeChange(){
	
} */
/*void CHMSPatientProfiles::OnCardCodeSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnCardCodeKillfocus(){
	
} */
int CHMSPatientProfiles::OnCardCodeCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnCardDiscountChange(){
	
} */
/*void CHMSPatientProfiles::OnCardDiscountSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnCardDiscountKillfocus(){
	
} */
int CHMSPatientProfiles::OnCardDiscountCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnRegistrationDateChange(){
	
} */
/*void CHMSPatientProfiles::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnRegistrationDateKillfocus(){
	
} */
int CHMSPatientProfiles::OnRegistrationDateCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnExpiryDateChange(){
	
} */
/*void CHMSPatientProfiles::OnExpiryDateSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnExpiryDateKillfocus(){
	
} */
int CHMSPatientProfiles::OnExpiryDateCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnRegistrationPlaceChange(){
	
} */
/*void CHMSPatientProfiles::OnRegistrationPlaceSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnRegistrationPlaceKillfocus(){
	
} */
int CHMSPatientProfiles::OnRegistrationPlaceCheckValue(){
	return 0;
} 
void CHMSPatientProfiles::OnTreatmentListDblClick(){
	
} 
void CHMSPatientProfiles::OnTreatmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfiles::OnTreatmentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientProfiles::OnTreatmentListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTreatmentList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatmentList.AddItems(
			rs.GetValue(_T("DeptNo")), 
			rs.GetValue(_T("FromDate")), 
			rs.GetValue(_T("ToDate")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndTreatmentList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPatientProfiles::OnInvoiceListDblClick(){
	
} 
void CHMSPatientProfiles::OnInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfiles::OnInvoiceListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientProfiles::OnInvoiceListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndInvoiceList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceList.AddItems(
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Clerk")), NULL);
		rs.MoveNext();
	}
	m_wndInvoiceList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPatientProfiles::OnFeeListDblClick(){
	
} 
void CHMSPatientProfiles::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfiles::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientProfiles::OnFeeListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndFeeList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeList.AddItems(
			rs.GetValue(_T("Idx")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Cost")), 
			rs.GetValue(_T("Discount")), 
			rs.GetValue(_T("Insurance")), 
			rs.GetValue(_T("Paid")), 
			rs.GetValue(_T("Unpaid")), NULL);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPatientProfiles::OnBillingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfiles::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfiles::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPatientProfiles::OnTotalCostChange(){
	
} */
/*void CHMSPatientProfiles::OnTotalCostSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnTotalCostKillfocus(){
	
} */
int CHMSPatientProfiles::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnInsuranceCostChange(){
	
} */
/*void CHMSPatientProfiles::OnInsuranceCostSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnInsuranceCostKillfocus(){
	
} */
int CHMSPatientProfiles::OnInsuranceCostCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnInsurancePaidChange(){
	
} */
/*void CHMSPatientProfiles::OnInsurancePaidSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnInsurancePaidKillfocus(){
	
} */
int CHMSPatientProfiles::OnInsurancePaidCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnInsuranceUnpaidChange(){
	
} */
/*void CHMSPatientProfiles::OnInsuranceUnpaidSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnInsuranceUnpaidKillfocus(){
	
} */
int CHMSPatientProfiles::OnInsuranceUnpaidCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnDifferencepayChange(){
	
} */
/*void CHMSPatientProfiles::OnDifferencepaySetfocus(){
	
} */
/*void CHMSPatientProfiles::OnDifferencepayKillfocus(){
	
} */
int CHMSPatientProfiles::OnDifferencepayCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnPatientPayChange(){
	
} */
/*void CHMSPatientProfiles::OnPatientPaySetfocus(){
	
} */
/*void CHMSPatientProfiles::OnPatientPayKillfocus(){
	
} */
int CHMSPatientProfiles::OnPatientPayCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnTotalDepositChange(){
	
} */
/*void CHMSPatientProfiles::OnTotalDepositSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnTotalDepositKillfocus(){
	
} */
int CHMSPatientProfiles::OnTotalDepositCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnTotalPolicyChange(){
	
} */
/*void CHMSPatientProfiles::OnTotalPolicySetfocus(){
	
} */
/*void CHMSPatientProfiles::OnTotalPolicyKillfocus(){
	
} */
int CHMSPatientProfiles::OnTotalPolicyCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnSumABChange(){
	
} */
/*void CHMSPatientProfiles::OnSumABSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnSumABKillfocus(){
	
} */
int CHMSPatientProfiles::OnSumABCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnDiscountChange(){
	
} */
/*void CHMSPatientProfiles::OnDiscountSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnDiscountKillfocus(){
	
} */
int CHMSPatientProfiles::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnPatientPayableChange(){
	
} */
/*void CHMSPatientProfiles::OnPatientPayableSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnPatientPayableKillfocus(){
	
} */
int CHMSPatientProfiles::OnPatientPayableCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnStatusChange(){
	
} */
/*void CHMSPatientProfiles::OnStatusSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnStatusKillfocus(){
	
} */
int CHMSPatientProfiles::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSPatientProfiles::OnNoteChange(){
	
} */
/*void CHMSPatientProfiles::OnNoteSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnNoteKillfocus(){
	
} */
int CHMSPatientProfiles::OnNoteCheckValue(){
	return 0;
} 
void CHMSPatientProfiles::OnInsApproveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfiles::OnAddHMSPatientProfiles(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientProfiles::OnEditHMSPatientProfiles(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientProfiles::OnDeleteHMSPatientProfiles(){
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
 		OnCancelHMSPatientProfiles();
 	}
	return 0;
}
int CHMSPatientProfiles::OnSaveHMSPatientProfiles(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPatientProfilesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientProfiles::OnCancelHMSPatientProfiles(){
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
int CHMSPatientProfiles::OnHMSPatientProfilesListLoadData(){
	return 0;
}
