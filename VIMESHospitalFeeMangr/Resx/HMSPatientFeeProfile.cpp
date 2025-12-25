#include "HMSPatientFeeProfile.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnInsuranceNoChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnInsuranceNoChange();
} */
/*static void _OnInsuranceNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnInsuranceNoSetfocus();} */ 
/*static void _OnInsuranceNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnInsuranceNoKillfocus();
} */
static int _OnInsuranceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnInsuranceNoCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnRankChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnRankChange();
} */
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnRankSetfocus();} */ 
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnRankKillfocus();
} */
static int _OnRankCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnRankCheckValue();
} 
/*static void _OnPositionChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnPositionChange();
} */
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnPositionSetfocus();} */ 
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnPositionKillfocus();
} */
static int _OnPositionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnPositionCheckValue();
} 
/*static void _OnAdmisionDepartmentChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAdmisionDepartmentChange();
} */
/*static void _OnAdmisionDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAdmisionDepartmentSetfocus();} */ 
/*static void _OnAdmisionDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAdmisionDepartmentKillfocus();
} */
static int _OnAdmisionDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnAdmisionDepartmentCheckValue();
} 
/*static void _OnDischargeDepartmentChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDischargeDepartmentChange();
} */
/*static void _OnDischargeDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDischargeDepartmentSetfocus();} */ 
/*static void _OnDischargeDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDischargeDepartmentKillfocus();
} */
static int _OnDischargeDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnDischargeDepartmentCheckValue();
} 
/*static void _OnAdmissionDateChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAdmissionDateChange();
} */
/*static void _OnAdmissionDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAdmissionDateSetfocus();} */ 
/*static void _OnAdmissionDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnAdmissionDateKillfocus();
} */
static int _OnAdmissionDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnAdmissionDateCheckValue();
} 
/*static void _OnDischargeDateChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDischargeDateChange();
} */
/*static void _OnDischargeDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDischargeDateSetfocus();} */ 
/*static void _OnDischargeDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnDischargeDateKillfocus();
} */
static int _OnDischargeDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnDischargeDateCheckValue();
} 
/*static void _OnClinicalRecordNoChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnClinicalRecordNoChange();
} */
/*static void _OnClinicalRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnClinicalRecordNoSetfocus();} */ 
/*static void _OnClinicalRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnClinicalRecordNoKillfocus();
} */
static int _OnClinicalRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnClinicalRecordNoCheckValue();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnTotalAdvancePaymentChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalAdvancePaymentChange();
} */
/*static void _OnTotalAdvancePaymentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalAdvancePaymentSetfocus();} */ 
/*static void _OnTotalAdvancePaymentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalAdvancePaymentKillfocus();
} */
static int _OnTotalAdvancePaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnTotalAdvancePaymentCheckValue();
} 
/*static void _OnTotalRegimenChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalRegimenChange();
} */
/*static void _OnTotalRegimenSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalRegimenSetfocus();} */ 
/*static void _OnTotalRegimenKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalRegimenKillfocus();
} */
static int _OnTotalRegimenCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnTotalRegimenCheckValue();
} 
/*static void _OnTotalEatMoneyChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalEatMoneyChange();
} */
/*static void _OnTotalEatMoneySetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalEatMoneySetfocus();} */ 
/*static void _OnTotalEatMoneyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalEatMoneyKillfocus();
} */
static int _OnTotalEatMoneyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnTotalEatMoneyCheckValue();
} 
/*static void _OnTotalPaidChangeFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalPaidChange();
} */
/*static void _OnTotalPaidSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalPaidSetfocus();} */ 
/*static void _OnTotalPaidKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile *)pWnd)->OnTotalPaidKillfocus();
} */
static int _OnTotalPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile *)pWnd)->OnTotalPaidCheckValue();
} 
static void _OnCalcSalarySelectFnc(CWnd *pWnd){
	CHMSPatientFeeProfile *pVw = (CHMSPatientFeeProfile *)pWnd;
	pVw->OnCalcSalarySelect();
} 
static long _Oncontrol_40LoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientFeeProfile*)pWnd)->Oncontrol_40LoadData();
} 
static void _Oncontrol_40DblClickFnc(CWnd *pWnd){
	((CHMSPatientFeeProfile*)pWnd)->Oncontrol_40DblClick();
} 
static void _Oncontrol_40SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientFeeProfile*)pWnd)->Oncontrol_40SelectChange(nOldItem, nNewItem);
} 
static int _Oncontrol_40DeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientFeeProfile*)pWnd)->Oncontrol_40DeleteItem();
} 
static int _OnAddHMSPatientFeeProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientFeeProfile*)pWnd)->OnAddHMSPatientFeeProfile();
} 
static int _OnEditHMSPatientFeeProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientFeeProfile*)pWnd)->OnEditHMSPatientFeeProfile();
} 
static int _OnDeleteHMSPatientFeeProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientFeeProfile*)pWnd)->OnDeleteHMSPatientFeeProfile();
} 
static int _OnSaveHMSPatientFeeProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientFeeProfile*)pWnd)->OnSaveHMSPatientFeeProfile();
} 
static int _OnCancelHMSPatientFeeProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientFeeProfile*)pWnd)->OnCancelHMSPatientFeeProfile();
} 
CHMSPatientFeeProfile::CHMSPatientFeeProfile(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPatientFeeProfile::~CHMSPatientFeeProfile(){
}
void CHMSPatientFeeProfile::OnCreateComponents(){
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 3, 5, 140, 30);
	m_wndDocumentNo.Create(this,145, 5, 225, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 3, 35, 140, 60);
	m_wndPatientName.Create(this,145, 35, 380, 60); 
	m_wndAgeLabel.Create(this, _T("Age"), 3, 65, 140, 90);
	m_wndAge.Create(this,145, 65, 225, 90); 
	m_wndSexLabel.Create(this, _T("Sex"), 232, 70, 290, 95);
	m_wndSex.Create(this,295, 70, 375, 95); 
	m_wndAddressLabel.Create(this, _T("Address"), 3, 100, 140, 125);
	m_wndAddress.Create(this,145, 100, 378, 128); 
	m_wndObjectLabel.Create(this, _T("Object"), 3, 133, 140, 158);
	m_wndObject.Create(this,145, 133, 290, 158); 
	m_wndInsuranceNoLabel.Create(this, _T("Insurance No"), 3, 163, 140, 188);
	m_wndInsuranceNo.Create(this,145, 163, 288, 188); 
	m_wndDiscount.Create(this,325, 163, 373, 188); 
	m_wndRankLabel.Create(this, _T("Rank"), 3, 193, 140, 218);
	m_wndRank.Create(this,145, 193, 225, 218); 
	m_wndPositionLabel.Create(this, _T("Position"), 230, 193, 292, 218);
	m_wndPosition.Create(this,298, 193, 378, 218); 
	m_wndAdmisionDepartmentLabel.Create(this, _T("Admision Department"), 3, 223, 140, 248);
	m_wndAdmisionDepartment.Create(this,146, 223, 378, 248); 
	m_wndDischargeDepartmentLabel.Create(this, _T("Discharge Department"), 3, 253, 140, 278);
	m_wndDischargeDepartment.Create(this,145, 253, 378, 278); 
	m_wndAdmissionDateLabel.Create(this, _T("Admission Date"), 3, 283, 140, 308);
	m_wndAdmissionDate.Create(this,145, 283, 225, 308); 
	m_wndDischargeDateLabel.Create(this, _T("Discharge Date"), 230, 283, 298, 308);
	m_wndDischargeDate.Create(this,303, 283, 383, 308); 
	m_wndClinicalRecordNoLabel.Create(this, _T("Clinical Rec No"), 227, 6, 308, 31);
	m_wndClinicalRecordNo.Create(this,313, 6, 393, 31); 
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 9, 399, 146, 424);
	m_wndTotalCost.Create(this,151, 399, 305, 424); 
	m_wndTotalAdvancePaymentLabel.Create(this, _T("Total Advance Payment"), 9, 429, 146, 454);
	m_wndTotalAdvancePayment.Create(this,151, 429, 305, 454); 
	m_wndTotalRegimenLabel.Create(this, _T("Total Regimen"), 9, 459, 146, 484);
	m_wndTotalRegimen.Create(this,151, 459, 305, 484); 
	m_wndTotalEatMoneyLabel.Create(this, _T("Total eat money"), 9, 489, 146, 514);
	m_wndTotalEatMoney.Create(this,151, 489, 305, 514); 
	m_wndTotalPaidLabel.Create(this, _T("Total Paid"), 9, 519, 146, 544);
	m_wndTotalPaid.Create(this,151, 519, 305, 544); 
	m_wndCalcSalary.Create(this, _T("Calc Salary"), 292, 134, 367, 159);
	m_wndcontrol_40.Create(this,397, 6, 1020, 695); 

}
void CHMSPatientFeeProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndInsuranceNo.SetLimitText(35);
	m_wndInsuranceNo.SetCheckValue(true);
	m_wndDiscount.SetLimitText(16);
	m_wndDiscount.SetCheckValue(true);
	m_wndRank.SetLimitText(16);
	m_wndRank.SetCheckValue(true);
	m_wndPosition.SetLimitText(16);
	m_wndPosition.SetCheckValue(true);
	m_wndAdmisionDepartment.SetLimitText(35);
	m_wndAdmisionDepartment.SetCheckValue(true);
	m_wndDischargeDepartment.SetLimitText(35);
	m_wndDischargeDepartment.SetCheckValue(true);
	m_wndAdmissionDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAdmissionDate.SetCheckValue(true);
	m_wndDischargeDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDischargeDate.SetCheckValue(true);
	m_wndClinicalRecordNo.SetLimitText(35);
	m_wndClinicalRecordNo.SetCheckValue(true);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndTotalAdvancePayment.SetLimitText(16);
	m_wndTotalAdvancePayment.SetCheckValue(true);
	m_wndTotalRegimen.SetLimitText(16);
	m_wndTotalRegimen.SetCheckValue(true);
	m_wndTotalEatMoney.SetLimitText(16);
	m_wndTotalEatMoney.SetCheckValue(true);
	m_wndTotalPaid.SetLimitText(16);
	m_wndTotalPaid.SetCheckValue(true);


	m_wndcontrol_40.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndcontrol_40.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndcontrol_40.InsertColumn(2, _T("Total Cost"), CFMT_NUMBER, 90);
	m_wndcontrol_40.InsertColumn(3, _T("Ins Cost"), CFMT_NUMBER, 90);
	m_wndcontrol_40.InsertColumn(4, _T("Unpaid"), CFMT_NUMBER, 90);
	m_wndcontrol_40.InsertColumn(5, _T("Dept Payment"), CFMT_NUMBER, 90);

}
void CHMSPatientFeeProfile::OnSetWindowEvents(){
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
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndInsuranceNo.SetEvent(WE_CHANGE, _OnInsuranceNoChangeFnc);
	//m_wndInsuranceNo.SetEvent(WE_SETFOCUS, _OnInsuranceNoSetfocusFnc);
	//m_wndInsuranceNo.SetEvent(WE_KILLFOCUS, _OnInsuranceNoKillfocusFnc);
	m_wndInsuranceNo.SetEvent(WE_CHECKVALUE, _OnInsuranceNoCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndRank.SetEvent(WE_CHANGE, _OnRankChangeFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_CHECKVALUE, _OnRankCheckValueFnc);
	//m_wndPosition.SetEvent(WE_CHANGE, _OnPositionChangeFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_CHECKVALUE, _OnPositionCheckValueFnc);
	//m_wndAdmisionDepartment.SetEvent(WE_CHANGE, _OnAdmisionDepartmentChangeFnc);
	//m_wndAdmisionDepartment.SetEvent(WE_SETFOCUS, _OnAdmisionDepartmentSetfocusFnc);
	//m_wndAdmisionDepartment.SetEvent(WE_KILLFOCUS, _OnAdmisionDepartmentKillfocusFnc);
	m_wndAdmisionDepartment.SetEvent(WE_CHECKVALUE, _OnAdmisionDepartmentCheckValueFnc);
	//m_wndDischargeDepartment.SetEvent(WE_CHANGE, _OnDischargeDepartmentChangeFnc);
	//m_wndDischargeDepartment.SetEvent(WE_SETFOCUS, _OnDischargeDepartmentSetfocusFnc);
	//m_wndDischargeDepartment.SetEvent(WE_KILLFOCUS, _OnDischargeDepartmentKillfocusFnc);
	m_wndDischargeDepartment.SetEvent(WE_CHECKVALUE, _OnDischargeDepartmentCheckValueFnc);
	//m_wndAdmissionDate.SetEvent(WE_CHANGE, _OnAdmissionDateChangeFnc);
	//m_wndAdmissionDate.SetEvent(WE_SETFOCUS, _OnAdmissionDateSetfocusFnc);
	//m_wndAdmissionDate.SetEvent(WE_KILLFOCUS, _OnAdmissionDateKillfocusFnc);
	m_wndAdmissionDate.SetEvent(WE_CHECKVALUE, _OnAdmissionDateCheckValueFnc);
	//m_wndDischargeDate.SetEvent(WE_CHANGE, _OnDischargeDateChangeFnc);
	//m_wndDischargeDate.SetEvent(WE_SETFOCUS, _OnDischargeDateSetfocusFnc);
	//m_wndDischargeDate.SetEvent(WE_KILLFOCUS, _OnDischargeDateKillfocusFnc);
	m_wndDischargeDate.SetEvent(WE_CHECKVALUE, _OnDischargeDateCheckValueFnc);
	//m_wndClinicalRecordNo.SetEvent(WE_CHANGE, _OnClinicalRecordNoChangeFnc);
	//m_wndClinicalRecordNo.SetEvent(WE_SETFOCUS, _OnClinicalRecordNoSetfocusFnc);
	//m_wndClinicalRecordNo.SetEvent(WE_KILLFOCUS, _OnClinicalRecordNoKillfocusFnc);
	m_wndClinicalRecordNo.SetEvent(WE_CHECKVALUE, _OnClinicalRecordNoCheckValueFnc);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndTotalAdvancePayment.SetEvent(WE_CHANGE, _OnTotalAdvancePaymentChangeFnc);
	//m_wndTotalAdvancePayment.SetEvent(WE_SETFOCUS, _OnTotalAdvancePaymentSetfocusFnc);
	//m_wndTotalAdvancePayment.SetEvent(WE_KILLFOCUS, _OnTotalAdvancePaymentKillfocusFnc);
	m_wndTotalAdvancePayment.SetEvent(WE_CHECKVALUE, _OnTotalAdvancePaymentCheckValueFnc);
	//m_wndTotalRegimen.SetEvent(WE_CHANGE, _OnTotalRegimenChangeFnc);
	//m_wndTotalRegimen.SetEvent(WE_SETFOCUS, _OnTotalRegimenSetfocusFnc);
	//m_wndTotalRegimen.SetEvent(WE_KILLFOCUS, _OnTotalRegimenKillfocusFnc);
	m_wndTotalRegimen.SetEvent(WE_CHECKVALUE, _OnTotalRegimenCheckValueFnc);
	//m_wndTotalEatMoney.SetEvent(WE_CHANGE, _OnTotalEatMoneyChangeFnc);
	//m_wndTotalEatMoney.SetEvent(WE_SETFOCUS, _OnTotalEatMoneySetfocusFnc);
	//m_wndTotalEatMoney.SetEvent(WE_KILLFOCUS, _OnTotalEatMoneyKillfocusFnc);
	m_wndTotalEatMoney.SetEvent(WE_CHECKVALUE, _OnTotalEatMoneyCheckValueFnc);
	//m_wndTotalPaid.SetEvent(WE_CHANGE, _OnTotalPaidChangeFnc);
	//m_wndTotalPaid.SetEvent(WE_SETFOCUS, _OnTotalPaidSetfocusFnc);
	//m_wndTotalPaid.SetEvent(WE_KILLFOCUS, _OnTotalPaidKillfocusFnc);
	m_wndTotalPaid.SetEvent(WE_CHECKVALUE, _OnTotalPaidCheckValueFnc);
	m_wndCalcSalary.SetEvent(WE_CLICK, _OnCalcSalarySelectFnc);
	m_wndcontrol_40.SetEvent(WE_SELCHANGE, _Oncontrol_40SelectChangeFnc);
	m_wndcontrol_40.SetEvent(WE_LOADDATA, _Oncontrol_40LoadDataFnc);
	m_wndcontrol_40.SetEvent(WE_DBLCLICK, _Oncontrol_40DblClickFnc);
	m_wndcontrol_40.AddEvent(1, _T("Delete"), _Oncontrol_40DeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientFeeProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientFeeProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientFeeProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientFeeProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientFeeProfileFnc, 0, 'T', VK_CONTROL);

}
void CHMSPatientFeeProfile::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndInsuranceNo.GetDlgCtrlID(), m_szInsuranceNo);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndRank.GetDlgCtrlID(), m_nRank);
	DDX_Text(pDX, m_wndPosition.GetDlgCtrlID(), m_nPosition);
	DDX_Text(pDX, m_wndAdmisionDepartment.GetDlgCtrlID(), m_szAdmisionDepartment);
	DDX_Text(pDX, m_wndDischargeDepartment.GetDlgCtrlID(), m_szDischargeDepartment);
	DDX_TextEx(pDX, m_wndAdmissionDate.GetDlgCtrlID(), m_szAdmissionDate);
	DDX_TextEx(pDX, m_wndDischargeDate.GetDlgCtrlID(), m_szDischargeDate);
	DDX_Text(pDX, m_wndClinicalRecordNo.GetDlgCtrlID(), m_szClinicalRecordNo);
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndTotalAdvancePayment.GetDlgCtrlID(), m_nTotalAdvancePayment);
	DDX_Text(pDX, m_wndTotalRegimen.GetDlgCtrlID(), m_nTotalRegimen);
	DDX_Text(pDX, m_wndTotalEatMoney.GetDlgCtrlID(), m_nTotalEatMoney);
	DDX_Text(pDX, m_wndTotalPaid.GetDlgCtrlID(), m_nTotalPaid);

}
void CHMSPatientFeeProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientFeeProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientFeeProfile::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szObject.Empty();
	m_szInsuranceNo.Empty();
	m_nDiscount=0;
	m_nRank=0;
	m_nPosition=0;
	m_szAdmisionDepartment.Empty();
	m_szDischargeDepartment.Empty();
	m_szAdmissionDate.Empty();
	m_szDischargeDate.Empty();
	m_szClinicalRecordNo.Empty();
	m_nTotalCost=0;
	m_nTotalAdvancePayment=0;
	m_nTotalRegimen=0;
	m_nTotalEatMoney=0;
	m_nTotalPaid=0;

}
int CHMSPatientFeeProfile::SetMode(int nMode){
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
/*void CHMSPatientFeeProfile::OnDocumentNoChange(){
	
} */
/*void CHMSPatientFeeProfile::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnPatientNameChange(){
	
} */
/*void CHMSPatientFeeProfile::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnPatientNameKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnAgeChange(){
	
} */
/*void CHMSPatientFeeProfile::OnAgeSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnAgeKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnSexChange(){
	
} */
/*void CHMSPatientFeeProfile::OnSexSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnSexKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnAddressChange(){
	
} */
/*void CHMSPatientFeeProfile::OnAddressSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnAddressKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnObjectChange(){
	
} */
/*void CHMSPatientFeeProfile::OnObjectSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnObjectKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnInsuranceNoChange(){
	
} */
/*void CHMSPatientFeeProfile::OnInsuranceNoSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnInsuranceNoKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnInsuranceNoCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnDiscountChange(){
	
} */
/*void CHMSPatientFeeProfile::OnDiscountSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnDiscountKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnRankChange(){
	
} */
/*void CHMSPatientFeeProfile::OnRankSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnRankKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnRankCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnPositionChange(){
	
} */
/*void CHMSPatientFeeProfile::OnPositionSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnPositionKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnPositionCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnAdmisionDepartmentChange(){
	
} */
/*void CHMSPatientFeeProfile::OnAdmisionDepartmentSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnAdmisionDepartmentKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnAdmisionDepartmentCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnDischargeDepartmentChange(){
	
} */
/*void CHMSPatientFeeProfile::OnDischargeDepartmentSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnDischargeDepartmentKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnDischargeDepartmentCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnAdmissionDateChange(){
	
} */
/*void CHMSPatientFeeProfile::OnAdmissionDateSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnAdmissionDateKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnAdmissionDateCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnDischargeDateChange(){
	
} */
/*void CHMSPatientFeeProfile::OnDischargeDateSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnDischargeDateKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnDischargeDateCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnClinicalRecordNoChange(){
	
} */
/*void CHMSPatientFeeProfile::OnClinicalRecordNoSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnClinicalRecordNoKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnClinicalRecordNoCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnTotalCostChange(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalCostSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalCostKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnTotalAdvancePaymentChange(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalAdvancePaymentSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalAdvancePaymentKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnTotalAdvancePaymentCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnTotalRegimenChange(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalRegimenSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalRegimenKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnTotalRegimenCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnTotalEatMoneyChange(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalEatMoneySetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalEatMoneyKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnTotalEatMoneyCheckValue(){
	return 0;
} 
/*void CHMSPatientFeeProfile::OnTotalPaidChange(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalPaidSetfocus(){
	
} */
/*void CHMSPatientFeeProfile::OnTotalPaidKillfocus(){
	
} */
int CHMSPatientFeeProfile::OnTotalPaidCheckValue(){
	return 0;
} 
void CHMSPatientFeeProfile::OnCalcSalarySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientFeeProfile::Oncontrol_40DblClick(){
	
} 
void CHMSPatientFeeProfile::Oncontrol_40SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientFeeProfile::Oncontrol_40DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientFeeProfile::Oncontrol_40LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndcontrol_40.BeginLoad(); 
	m_wndcontrol_40.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndcontrol_40.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("TotalCost")), 
			rs.GetValue(_T("InsCost")), 
			rs.GetValue(_T("Unpaid")), 
			rs.GetValue(_T("DeptPayment")), NULL);
		rs.MoveNext();
	}
	m_wndcontrol_40.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSPatientFeeProfile::OnAddHMSPatientFeeProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientFeeProfile::OnEditHMSPatientFeeProfile(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientFeeProfile::OnDeleteHMSPatientFeeProfile(){
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
 		OnCancelHMSPatientFeeProfile(); 
 	}
	return 0;
}
int CHMSPatientFeeProfile::OnSaveHMSPatientFeeProfile(){
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
 		//OnHMSPatientFeeProfileListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientFeeProfile::OnCancelHMSPatientFeeProfile(){
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
int CHMSPatientFeeProfile::OnHMSPatientFeeProfileListLoadData(){
	return 0;
}
